
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_75.hpp"
#include "Cisco_IOS_XE_native_76.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SpanningTree::SpanningTree()
    :
    status{YType::empty, "status"}
{

    yang_name = "spanning-tree"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SpanningTree::~SpanningTree()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SpanningTree::has_data() const
{
    return status.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SubifLinkStatus::SubifLinkStatus()
    :
    ignore_bulk{YType::empty, "ignore-bulk"}
{

    yang_name = "subif-link-status"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SubifLinkStatus::~SubifLinkStatus()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SubifLinkStatus::has_data() const
{
    return ignore_bulk.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SubifLinkStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_bulk.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SubifLinkStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subif-link-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SubifLinkStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_bulk.is_set || is_set(ignore_bulk.yfilter)) leaf_name_data.push_back(ignore_bulk.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SubifLinkStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SubifLinkStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SubifLinkStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-bulk")
    {
        ignore_bulk = value;
        ignore_bulk.value_namespace = name_space;
        ignore_bulk.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SubifLinkStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-bulk")
    {
        ignore_bulk.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SubifLinkStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore-bulk")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesMdix::CiscoIOSXEInterfacesMdix()
    :
    auto_{YType::boolean, "auto"}
{

    yang_name = "Cisco-IOS-XE-interfaces_mdix"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesMdix::~CiscoIOSXEInterfacesMdix()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesMdix::has_data() const
{
    return auto_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesMdix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesMdix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_mdix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesMdix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesMdix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesMdix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesMdix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesMdix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesMdix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesMdix_::CiscoIOSXEInterfacesMdix_()
    :
    auto_{YType::boolean, "auto"}
{

    yang_name = "Cisco-IOS-XE-interfaces_mdix"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesMdix_::~CiscoIOSXEInterfacesMdix_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesMdix_::has_data() const
{
    return auto_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesMdix_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesMdix_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_mdix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesMdix_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesMdix_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesMdix_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesMdix_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesMdix_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesMdix_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesMop::CiscoIOSXEInterfacesMop()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "Cisco-IOS-XE-interfaces_mop"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesMop::~CiscoIOSXEInterfacesMop()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesMop::has_data() const
{
    return enabled.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesMop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesMop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_mop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesMop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesMop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesMop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesMop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesMop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesMop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesMop_::CiscoIOSXEInterfacesMop_()
    :
    enabled{YType::boolean, "enabled"}
{

    yang_name = "Cisco-IOS-XE-interfaces_mop"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesMop_::~CiscoIOSXEInterfacesMop_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesMop_::has_data() const
{
    return enabled.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesMop_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesMop_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_mop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesMop_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesMop_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesMop_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesMop_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesMop_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesMop_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enabled")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::CiscoIOSXEInterfacesMpls()
{

    yang_name = "Cisco-IOS-XE-interfaces_mpls"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::~CiscoIOSXEInterfacesMpls()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesMpls_::CiscoIOSXEInterfacesMpls_()
{

    yang_name = "Cisco-IOS-XE-interfaces_mpls"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesMpls_::~CiscoIOSXEInterfacesMpls_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesMpls_::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesMpls_::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesMpls_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesMpls_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesMpls_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesMpls_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesMpls_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesMpls_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesMpls_::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::CiscoIOSXEInterfacesPeer()
    :
    default_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_>())
{
    default_->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_peer"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::~CiscoIOSXEInterfacesPeer()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Default_()
    :
    ip(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip>())
{
    ip->parent = this;

    yang_name = "default"; yang_parent_name = "Cisco-IOS-XE-interfaces_peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::~Default_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Ip()
    :
    address(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address>())
{
    address->parent = this;

    yang_name = "ip"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::~Ip()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::Address()
    :
    dhcp{YType::empty, "dhcp"}
    	,
    dhcp_pool(nullptr) // presence node
	,pool(nullptr) // presence node
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::~Address()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::has_data() const
{
    return dhcp.is_set
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_data())
	|| (pool !=  nullptr && pool->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_operation())
	|| (pool !=  nullptr && pool->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-pool")
    {
        if(dhcp_pool == nullptr)
        {
            dhcp_pool = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::DhcpPool>();
        }
        return dhcp_pool;
    }

    if(child_yang_name == "pool")
    {
        if(pool == nullptr)
        {
            pool = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::Pool>();
        }
        return pool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::get_children() const
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-pool" || name == "pool" || name == "dhcp")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::DhcpPool::DhcpPool()
    :
    pools{YType::str, "pools"}
{

    yang_name = "dhcp-pool"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::DhcpPool::~DhcpPool()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::DhcpPool::has_data() const
{
    return pools.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::DhcpPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pools.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::DhcpPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::DhcpPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.yfilter)) leaf_name_data.push_back(pools.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::DhcpPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::DhcpPool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::DhcpPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pools")
    {
        pools = value;
        pools.value_namespace = name_space;
        pools.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::DhcpPool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pools")
    {
        pools.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::DhcpPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pools")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::Pool::Pool()
    :
    pools{YType::str, "pools"}
{

    yang_name = "pool"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::Pool::~Pool()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::Pool::has_data() const
{
    return pools.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pools.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.yfilter)) leaf_name_data.push_back(pools.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pools")
    {
        pools = value;
        pools.value_namespace = name_space;
        pools.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pools")
    {
        pools.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer::Default_::Ip::Address::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pools")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::CiscoIOSXEInterfacesPeer_()
    :
    default_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_>())
{
    default_->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_peer"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::~CiscoIOSXEInterfacesPeer_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Default_()
    :
    ip(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip>())
{
    ip->parent = this;

    yang_name = "default"; yang_parent_name = "Cisco-IOS-XE-interfaces_peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::~Default_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Ip()
    :
    address(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address>())
{
    address->parent = this;

    yang_name = "ip"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::~Ip()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::Address()
    :
    dhcp{YType::empty, "dhcp"}
    	,
    dhcp_pool(nullptr) // presence node
	,pool(nullptr) // presence node
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::~Address()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::has_data() const
{
    return dhcp.is_set
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_data())
	|| (pool !=  nullptr && pool->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| (dhcp_pool !=  nullptr && dhcp_pool->has_operation())
	|| (pool !=  nullptr && pool->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-pool")
    {
        if(dhcp_pool == nullptr)
        {
            dhcp_pool = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::DhcpPool>();
        }
        return dhcp_pool;
    }

    if(child_yang_name == "pool")
    {
        if(pool == nullptr)
        {
            pool = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::Pool>();
        }
        return pool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::get_children() const
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-pool" || name == "pool" || name == "dhcp")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::DhcpPool::DhcpPool()
    :
    pools{YType::str, "pools"}
{

    yang_name = "dhcp-pool"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::DhcpPool::~DhcpPool()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::DhcpPool::has_data() const
{
    return pools.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::DhcpPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pools.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::DhcpPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::DhcpPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.yfilter)) leaf_name_data.push_back(pools.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::DhcpPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::DhcpPool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::DhcpPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pools")
    {
        pools = value;
        pools.value_namespace = name_space;
        pools.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::DhcpPool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pools")
    {
        pools.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::DhcpPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pools")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::Pool::Pool()
    :
    pools{YType::str, "pools"}
{

    yang_name = "pool"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::Pool::~Pool()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::Pool::has_data() const
{
    return pools.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::Pool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pools.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pools.is_set || is_set(pools.yfilter)) leaf_name_data.push_back(pools.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pools")
    {
        pools = value;
        pools.value_namespace = name_space;
        pools.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pools")
    {
        pools.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_::Default_::Ip::Address::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pools")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath::CiscoIOSXEInterfacesPmPath()
    :
    interface_id{YType::uint8, "interface-id"},
    name{YType::str, "name"}
{

    yang_name = "Cisco-IOS-XE-interfaces_pm-path"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath::~CiscoIOSXEInterfacesPmPath()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath::has_data() const
{
    return interface_id.is_set
	|| name.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_pm-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id" || name == "name")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath_::CiscoIOSXEInterfacesPmPath_()
    :
    interface_id{YType::uint8, "interface-id"},
    name{YType::str, "name"}
{

    yang_name = "Cisco-IOS-XE-interfaces_pm-path"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath_::~CiscoIOSXEInterfacesPmPath_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath_::has_data() const
{
    return interface_id.is_set
	|| name.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_pm-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-id" || name == "name")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::CiscoIOSXEInterfacesPriorityQueue()
    :
    out{YType::empty, "out"}
    	,
    cos_map(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::CosMap>())
{
    cos_map->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_priority-queue"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::~CiscoIOSXEInterfacesPriorityQueue()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::has_data() const
{
    return out.is_set
	|| (cos_map !=  nullptr && cos_map->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter)
	|| (cos_map !=  nullptr && cos_map->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_priority-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-map")
    {
        if(cos_map == nullptr)
        {
            cos_map = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::CosMap>();
        }
        return cos_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos_map != nullptr)
    {
        children["cos-map"] = cos_map;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-map" || name == "out")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::CosMap::CosMap()
    :
    cos_values{YType::uint8, "cos-values"},
    id{YType::uint8, "id"}
{

    yang_name = "cos-map"; yang_parent_name = "Cisco-IOS-XE-interfaces_priority-queue"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::CosMap::~CosMap()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::CosMap::has_data() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::CosMap::has_operation() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos_values.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::CosMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::CosMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos-values")
    {
        cos_values.append(value);
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::CosMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos-values")
    {
        cos_values.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue::CosMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-values" || name == "id")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::CiscoIOSXEInterfacesPriorityQueue_()
    :
    out{YType::empty, "out"}
    	,
    cos_map(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::CosMap>())
{
    cos_map->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_priority-queue"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::~CiscoIOSXEInterfacesPriorityQueue_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::has_data() const
{
    return out.is_set
	|| (cos_map !=  nullptr && cos_map->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out.yfilter)
	|| (cos_map !=  nullptr && cos_map->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_priority-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cos-map")
    {
        if(cos_map == nullptr)
        {
            cos_map = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::CosMap>();
        }
        return cos_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cos_map != nullptr)
    {
        children["cos-map"] = cos_map;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-map" || name == "out")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::CosMap::CosMap()
    :
    cos_values{YType::uint8, "cos-values"},
    id{YType::uint8, "id"}
{

    yang_name = "cos-map"; yang_parent_name = "Cisco-IOS-XE-interfaces_priority-queue"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::CosMap::~CosMap()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::CosMap::has_data() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::CosMap::has_operation() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cos_values.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::CosMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::CosMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cos-values")
    {
        cos_values.append(value);
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::CosMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cos-values")
    {
        cos_values.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_::CosMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-values" || name == "id")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::CiscoIOSXEInterfacesRcvQueue()
{

    yang_name = "Cisco-IOS-XE-interfaces_rcv-queue"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::~CiscoIOSXEInterfacesRcvQueue()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::has_data() const
{
    for (std::size_t index=0; index<cos_map.size(); index++)
    {
        if(cos_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::has_operation() const
{
    for (std::size_t index=0; index<cos_map.size(); index++)
    {
        if(cos_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_rcv-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::CosMap>();
        c->parent = this;
        cos_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cos_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-map")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::CosMap::CosMap()
    :
    queue_id{YType::uint8, "queue-id"},
    threshold_id{YType::uint8, "threshold-id"},
    cos_values{YType::uint8, "cos-values"}
{

    yang_name = "cos-map"; yang_parent_name = "Cisco-IOS-XE-interfaces_rcv-queue"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::CosMap::~CosMap()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::CosMap::has_data() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return queue_id.is_set
	|| threshold_id.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::CosMap::has_operation() const
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

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map" <<"[queue-id='" <<queue_id <<"']" <<"[threshold-id='" <<threshold_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::CosMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_id.is_set || is_set(queue_id.yfilter)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (threshold_id.is_set || is_set(threshold_id.yfilter)) leaf_name_data.push_back(threshold_id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::CosMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::CosMap::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue::CosMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue-id" || name == "threshold-id" || name == "cos-values")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::CiscoIOSXEInterfacesRcvQueue_()
{

    yang_name = "Cisco-IOS-XE-interfaces_rcv-queue"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::~CiscoIOSXEInterfacesRcvQueue_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::has_data() const
{
    for (std::size_t index=0; index<cos_map.size(); index++)
    {
        if(cos_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::has_operation() const
{
    for (std::size_t index=0; index<cos_map.size(); index++)
    {
        if(cos_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_rcv-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::CosMap>();
        c->parent = this;
        cos_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cos_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cos-map")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::CosMap::CosMap()
    :
    queue_id{YType::uint8, "queue-id"},
    threshold_id{YType::uint8, "threshold-id"},
    cos_values{YType::uint8, "cos-values"}
{

    yang_name = "cos-map"; yang_parent_name = "Cisco-IOS-XE-interfaces_rcv-queue"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::CosMap::~CosMap()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::CosMap::has_data() const
{
    for (auto const & leaf : cos_values.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return queue_id.is_set
	|| threshold_id.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::CosMap::has_operation() const
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

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::CosMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cos-map" <<"[queue-id='" <<queue_id <<"']" <<"[threshold-id='" <<threshold_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::CosMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (queue_id.is_set || is_set(queue_id.yfilter)) leaf_name_data.push_back(queue_id.get_name_leafdata());
    if (threshold_id.is_set || is_set(threshold_id.yfilter)) leaf_name_data.push_back(threshold_id.get_name_leafdata());

    auto cos_values_name_datas = cos_values.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_values_name_datas.begin(), cos_values_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::CosMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::CosMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::CosMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::CosMap::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_::CosMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue-id" || name == "threshold-id" || name == "cos-values")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::CiscoIOSXEInterfacesStandby()
    :
    bfd{YType::empty, "bfd"},
    mac_refresh{YType::uint8, "mac-refresh"},
    version{YType::enumeration, "version"}
    	,
    delay(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::Delay>())
	,use_bia(nullptr) // presence node
{
    delay->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_standby"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::~CiscoIOSXEInterfacesStandby()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::has_data() const
{
    for (std::size_t index=0; index<standby_list.size(); index++)
    {
        if(standby_list[index]->has_data())
            return true;
    }
    return bfd.is_set
	|| mac_refresh.is_set
	|| version.is_set
	|| (delay !=  nullptr && delay->has_data())
	|| (use_bia !=  nullptr && use_bia->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::has_operation() const
{
    for (std::size_t index=0; index<standby_list.size(); index++)
    {
        if(standby_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(mac_refresh.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (use_bia !=  nullptr && use_bia->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (mac_refresh.is_set || is_set(mac_refresh.yfilter)) leaf_name_data.push_back(mac_refresh.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::Delay>();
        }
        return delay;
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
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList>();
        c->parent = this;
        standby_list.push_back(c);
        return c;
    }

    if(child_yang_name == "use-bia")
    {
        if(use_bia == nullptr)
        {
            use_bia = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia>();
        }
        return use_bia;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    for (auto const & c : standby_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(use_bia != nullptr)
    {
        children["use-bia"] = use_bia;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "mac-refresh")
    {
        mac_refresh.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "standby-list" || name == "use-bia" || name == "bfd" || name == "mac-refresh" || name == "version")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"},
    reload{YType::uint16, "reload"}
{

    yang_name = "delay"; yang_parent_name = "Cisco-IOS-XE-interfaces_standby"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::Delay::~Delay()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::Delay::has_data() const
{
    return minimum.is_set
	|| reload.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(reload.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::Delay::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "reload")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::StandbyList()
    :
    group_number{YType::uint16, "group-number"},
    follow{YType::str, "follow"},
    ipv6{YType::str, "ipv6"},
    mac_address{YType::str, "mac-address"},
    name{YType::str, "name"},
    priority{YType::uint8, "priority"}
    	,
    authentication(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication>())
	,ip(nullptr) // presence node
	,preempt(nullptr) // presence node
	,redirect(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect>())
	,timers(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers>())
{
    authentication->parent = this;
    redirect->parent = this;
    timers->parent = this;

    yang_name = "standby-list"; yang_parent_name = "Cisco-IOS-XE-interfaces_standby"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::~StandbyList()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::has_data() const
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::has_operation() const
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

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-list" <<"[group-number='" <<group_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "preempt")
    {
        if(preempt == nullptr)
        {
            preempt = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt>();
        }
        return preempt;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers>();
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
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Track>();
        c->parent = this;
        track.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::get_children() const
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "ip" || name == "preempt" || name == "redirect" || name == "timers" || name == "track" || name == "group-number" || name == "follow" || name == "ipv6" || name == "mac-address" || name == "name" || name == "priority")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Authentication()
    :
    text{YType::str, "text"},
    word{YType::str, "word"}
    	,
    md5(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5>())
{
    md5->parent = this;

    yang_name = "authentication"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::~Authentication()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::has_data() const
{
    return text.is_set
	|| word.is_set
	|| (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(text.yfilter)
	|| ydk::is_set(word.yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());
    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "text" || name == "word")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::Md5()
    :
    key_chain{YType::str, "key-chain"}
    	,
    key_string(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::~Md5()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::has_data() const
{
    return key_chain.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "key-chain")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "key-string"; yang_parent_name = "md5"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set
	|| timeout.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string" || name == "timeout")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Ip::Ip()
    :
    address{YType::str, "address"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "ip"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Ip::~Ip()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Ip::has_data() const
{
    return address.is_set
	|| secondary.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Ip::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "secondary")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::Preempt()
    :
    delay(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::Delay>())
{
    delay->parent = this;

    yang_name = "preempt"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::~Preempt()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::has_data() const
{
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"},
    reload{YType::uint16, "reload"},
    sync{YType::uint16, "sync"}
{

    yang_name = "delay"; yang_parent_name = "preempt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::Delay::~Delay()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::Delay::has_data() const
{
    return minimum.is_set
	|| reload.is_set
	|| sync.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(reload.yfilter)
	|| ydk::is_set(sync.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());
    if (sync.is_set || is_set(sync.yfilter)) leaf_name_data.push_back(sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::Delay::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Preempt::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "reload" || name == "sync")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Redirect()
    :
    unknown{YType::empty, "unknown"}
    	,
    advertisement(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement>())
	,timers(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Timers>())
{
    advertisement->parent = this;
    timers->parent = this;

    yang_name = "redirect"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::~Redirect()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::has_data() const
{
    return unknown.is_set
	|| (advertisement !=  nullptr && advertisement->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown.yfilter)
	|| (advertisement !=  nullptr && advertisement->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertisement")
    {
        if(advertisement == nullptr)
        {
            advertisement = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement>();
        }
        return advertisement;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::get_children() const
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement" || name == "timers" || name == "unknown")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Advertisement()
    :
    authentication(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication>())
{
    authentication->parent = this;

    yang_name = "advertisement"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::~Advertisement()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::has_data() const
{
    return (authentication !=  nullptr && authentication->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Authentication()
    :
    md5(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5>())
{
    md5->parent = this;

    yang_name = "authentication"; yang_parent_name = "advertisement"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::~Authentication()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::has_data() const
{
    return (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::Md5()
    :
    key_chain{YType::str, "key-chain"}
    	,
    key_string(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::~Md5()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_data() const
{
    return key_chain.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "key-chain")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "key-string"; yang_parent_name = "md5"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set
	|| timeout.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string" || name == "timeout")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Timers::Timers()
    :
    advertisement{YType::uint16, "advertisement"},
    holddown{YType::uint16, "holddown"}
{

    yang_name = "timers"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Timers::~Timers()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Timers::has_data() const
{
    return advertisement.is_set
	|| holddown.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertisement.yfilter)
	|| ydk::is_set(holddown.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertisement.is_set || is_set(advertisement.yfilter)) leaf_name_data.push_back(advertisement.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Timers::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement" || name == "holddown")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::Timers()
    :
    hello_interval(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HelloInterval>())
	,hold_time(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HoldTime>())
{
    hello_interval->parent = this;
    hold_time->parent = this;

    yang_name = "timers"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::~Timers()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::has_data() const
{
    return (hello_interval !=  nullptr && hello_interval->has_data())
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::get_children() const
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interval" || name == "hold-time")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HelloInterval::HelloInterval()
    :
    msec{YType::uint16, "msec"},
    seconds{YType::uint8, "seconds"}
{

    yang_name = "hello-interval"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HelloInterval::has_data() const
{
    return msec.is_set
	|| seconds.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HelloInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "seconds")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HoldTime::HoldTime()
    :
    msec{YType::uint16, "msec"},
    seconds{YType::uint8, "seconds"}
{

    yang_name = "hold-time"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HoldTime::~HoldTime()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HoldTime::has_data() const
{
    return msec.is_set
	|| seconds.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Timers::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "seconds")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Track::Track()
    :
    number{YType::uint16, "number"},
    decrement{YType::uint8, "decrement"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "track"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Track::~Track()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Track::has_data() const
{
    return number.is_set
	|| decrement.is_set
	|| shutdown.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Track::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(decrement.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (decrement.is_set || is_set(decrement.yfilter)) leaf_name_data.push_back(decrement.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Track::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "decrement" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::UseBia()
    :
    scope(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::Scope>())
{
    scope->parent = this;

    yang_name = "use-bia"; yang_parent_name = "Cisco-IOS-XE-interfaces_standby"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::~UseBia()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::has_data() const
{
    return (scope !=  nullptr && scope->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::has_operation() const
{
    return is_set(yfilter)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-bia";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scope != nullptr)
    {
        children["scope"] = scope;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::Scope::Scope()
    :
    interface{YType::empty, "interface"}
{

    yang_name = "scope"; yang_parent_name = "use-bia"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::Scope::~Scope()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::Scope::has_data() const
{
    return interface.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::Scope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::Scope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::Scope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::Scope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::Scope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::UseBia::Scope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::CiscoIOSXEInterfacesStandby_()
    :
    bfd{YType::empty, "bfd"},
    mac_refresh{YType::uint8, "mac-refresh"},
    version{YType::enumeration, "version"}
    	,
    delay(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::Delay>())
	,use_bia(nullptr) // presence node
{
    delay->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_standby"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::~CiscoIOSXEInterfacesStandby_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::has_data() const
{
    for (std::size_t index=0; index<standby_list.size(); index++)
    {
        if(standby_list[index]->has_data())
            return true;
    }
    return bfd.is_set
	|| mac_refresh.is_set
	|| version.is_set
	|| (delay !=  nullptr && delay->has_data())
	|| (use_bia !=  nullptr && use_bia->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::has_operation() const
{
    for (std::size_t index=0; index<standby_list.size(); index++)
    {
        if(standby_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(mac_refresh.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (use_bia !=  nullptr && use_bia->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (mac_refresh.is_set || is_set(mac_refresh.yfilter)) leaf_name_data.push_back(mac_refresh.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::Delay>();
        }
        return delay;
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
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList>();
        c->parent = this;
        standby_list.push_back(c);
        return c;
    }

    if(child_yang_name == "use-bia")
    {
        if(use_bia == nullptr)
        {
            use_bia = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia>();
        }
        return use_bia;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    for (auto const & c : standby_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(use_bia != nullptr)
    {
        children["use-bia"] = use_bia;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "mac-refresh")
    {
        mac_refresh.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "standby-list" || name == "use-bia" || name == "bfd" || name == "mac-refresh" || name == "version")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"},
    reload{YType::uint16, "reload"}
{

    yang_name = "delay"; yang_parent_name = "Cisco-IOS-XE-interfaces_standby"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::Delay::~Delay()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::Delay::has_data() const
{
    return minimum.is_set
	|| reload.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(reload.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::Delay::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "reload")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::StandbyList()
    :
    group_number{YType::uint16, "group-number"},
    follow{YType::str, "follow"},
    ipv6{YType::str, "ipv6"},
    mac_address{YType::str, "mac-address"},
    name{YType::str, "name"},
    priority{YType::uint8, "priority"}
    	,
    authentication(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication>())
	,ip(nullptr) // presence node
	,preempt(nullptr) // presence node
	,redirect(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect>())
	,timers(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers>())
{
    authentication->parent = this;
    redirect->parent = this;
    timers->parent = this;

    yang_name = "standby-list"; yang_parent_name = "Cisco-IOS-XE-interfaces_standby"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::~StandbyList()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::has_data() const
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::has_operation() const
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

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby-list" <<"[group-number='" <<group_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "preempt")
    {
        if(preempt == nullptr)
        {
            preempt = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt>();
        }
        return preempt;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers>();
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
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Track>();
        c->parent = this;
        track.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::get_children() const
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "ip" || name == "preempt" || name == "redirect" || name == "timers" || name == "track" || name == "group-number" || name == "follow" || name == "ipv6" || name == "mac-address" || name == "name" || name == "priority")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Authentication()
    :
    text{YType::str, "text"},
    word{YType::str, "word"}
    	,
    md5(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5>())
{
    md5->parent = this;

    yang_name = "authentication"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::~Authentication()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::has_data() const
{
    return text.is_set
	|| word.is_set
	|| (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(text.yfilter)
	|| ydk::is_set(word.yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());
    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "text" || name == "word")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::Md5()
    :
    key_chain{YType::str, "key-chain"}
    	,
    key_string(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::~Md5()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::has_data() const
{
    return key_chain.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "key-chain")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "key-string"; yang_parent_name = "md5"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set
	|| timeout.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string" || name == "timeout")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Ip::Ip()
    :
    address{YType::str, "address"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "ip"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Ip::~Ip()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Ip::has_data() const
{
    return address.is_set
	|| secondary.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Ip::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "secondary")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::Preempt()
    :
    delay(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::Delay>())
{
    delay->parent = this;

    yang_name = "preempt"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::~Preempt()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::has_data() const
{
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"},
    reload{YType::uint16, "reload"},
    sync{YType::uint16, "sync"}
{

    yang_name = "delay"; yang_parent_name = "preempt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::Delay::~Delay()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::Delay::has_data() const
{
    return minimum.is_set
	|| reload.is_set
	|| sync.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(reload.yfilter)
	|| ydk::is_set(sync.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());
    if (sync.is_set || is_set(sync.yfilter)) leaf_name_data.push_back(sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::Delay::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Preempt::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum" || name == "reload" || name == "sync")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Redirect()
    :
    unknown{YType::empty, "unknown"}
    	,
    advertisement(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement>())
	,timers(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Timers>())
{
    advertisement->parent = this;
    timers->parent = this;

    yang_name = "redirect"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::~Redirect()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::has_data() const
{
    return unknown.is_set
	|| (advertisement !=  nullptr && advertisement->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown.yfilter)
	|| (advertisement !=  nullptr && advertisement->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown.is_set || is_set(unknown.yfilter)) leaf_name_data.push_back(unknown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertisement")
    {
        if(advertisement == nullptr)
        {
            advertisement = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement>();
        }
        return advertisement;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::get_children() const
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown")
    {
        unknown = value;
        unknown.value_namespace = name_space;
        unknown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown")
    {
        unknown.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement" || name == "timers" || name == "unknown")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Advertisement()
    :
    authentication(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication>())
{
    authentication->parent = this;

    yang_name = "advertisement"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::~Advertisement()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::has_data() const
{
    return (authentication !=  nullptr && authentication->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisement";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Authentication()
    :
    md5(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5>())
{
    md5->parent = this;

    yang_name = "authentication"; yang_parent_name = "advertisement"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::~Authentication()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::has_data() const
{
    return (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::Md5()
    :
    key_chain{YType::str, "key-chain"}
    	,
    key_string(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::~Md5()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::has_data() const
{
    return key_chain.is_set
	|| (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-string" || name == "key-chain")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"},
    timeout{YType::uint16, "timeout"}
{

    yang_name = "key-string"; yang_parent_name = "md5"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set
	|| timeout.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encrypt" || name == "string" || name == "timeout")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Timers::Timers()
    :
    advertisement{YType::uint16, "advertisement"},
    holddown{YType::uint16, "holddown"}
{

    yang_name = "timers"; yang_parent_name = "redirect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Timers::~Timers()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Timers::has_data() const
{
    return advertisement.is_set
	|| holddown.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advertisement.yfilter)
	|| ydk::is_set(holddown.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertisement.is_set || is_set(advertisement.yfilter)) leaf_name_data.push_back(advertisement.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Timers::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertisement" || name == "holddown")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::Timers()
    :
    hello_interval(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HelloInterval>())
	,hold_time(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HoldTime>())
{
    hello_interval->parent = this;
    hold_time->parent = this;

    yang_name = "timers"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::~Timers()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::has_data() const
{
    return (hello_interval !=  nullptr && hello_interval->has_data())
	|| (hold_time !=  nullptr && hold_time->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (hold_time !=  nullptr && hold_time->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HoldTime>();
        }
        return hold_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::get_children() const
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interval" || name == "hold-time")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HelloInterval::HelloInterval()
    :
    msec{YType::uint16, "msec"},
    seconds{YType::uint8, "seconds"}
{

    yang_name = "hello-interval"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HelloInterval::has_data() const
{
    return msec.is_set
	|| seconds.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HelloInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "seconds")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HoldTime::HoldTime()
    :
    msec{YType::uint16, "msec"},
    seconds{YType::uint8, "seconds"}
{

    yang_name = "hold-time"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HoldTime::~HoldTime()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HoldTime::has_data() const
{
    return msec.is_set
	|| seconds.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Timers::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "seconds")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Track::Track()
    :
    number{YType::uint16, "number"},
    decrement{YType::uint8, "decrement"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "track"; yang_parent_name = "standby-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Track::~Track()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Track::has_data() const
{
    return number.is_set
	|| decrement.is_set
	|| shutdown.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Track::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(decrement.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (decrement.is_set || is_set(decrement.yfilter)) leaf_name_data.push_back(decrement.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Track::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "decrement" || name == "shutdown")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::UseBia()
    :
    scope(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::Scope>())
{
    scope->parent = this;

    yang_name = "use-bia"; yang_parent_name = "Cisco-IOS-XE-interfaces_standby"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::~UseBia()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::has_data() const
{
    return (scope !=  nullptr && scope->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::has_operation() const
{
    return is_set(yfilter)
	|| (scope !=  nullptr && scope->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "use-bia";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::Scope>();
        }
        return scope;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(scope != nullptr)
    {
        children["scope"] = scope;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scope")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::Scope::Scope()
    :
    interface{YType::empty, "interface"}
{

    yang_name = "scope"; yang_parent_name = "use-bia"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::Scope::~Scope()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::Scope::has_data() const
{
    return interface.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::Scope::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::Scope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scope";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::Scope::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::Scope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::Scope::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::Scope::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::Scope::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::UseBia::Scope::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::CiscoIOSXEInterfacesStormControl()
    :
    action(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Action>())
	,broadcast(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast>())
	,multicast(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast>())
	,unicast(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast>())
{
    action->parent = this;
    broadcast->parent = this;
    multicast->parent = this;
    unicast->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_storm-control"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::~CiscoIOSXEInterfacesStormControl()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (unicast !=  nullptr && unicast->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (unicast !=  nullptr && unicast->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast>();
        }
        return unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::get_children() const
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "broadcast" || name == "multicast" || name == "unicast")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Action::Action()
    :
    level{YType::str, "level"},
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{

    yang_name = "action"; yang_parent_name = "Cisco-IOS-XE-interfaces_storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Action::~Action()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Action::has_data() const
{
    return level.is_set
	|| shutdown.is_set
	|| trap.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Action::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Broadcast()
    :
    include(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Include>())
	,level(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level>())
{
    include->parent = this;
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "Cisco-IOS-XE-interfaces_storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::~Broadcast()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::has_data() const
{
    return (include !=  nullptr && include->has_data())
	|| (level !=  nullptr && level->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (include !=  nullptr && include->has_operation())
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "include")
    {
        if(include == nullptr)
        {
            include = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Include>();
        }
        return include;
    }

    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::get_children() const
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include" || name == "level")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Include::Include()
    :
    multicast{YType::empty, "multicast"}
{

    yang_name = "include"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Include::~Include()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Include::has_data() const
{
    return multicast.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Include::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Include::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Include::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Include::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Include::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Include::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Include::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Include::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Pps>())
{
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::~Level()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::get_children() const
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Bps::~Bps()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Pps::~Pps()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Multicast()
    :
    level(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level>())
{
    level->parent = this;

    yang_name = "multicast"; yang_parent_name = "Cisco-IOS-XE-interfaces_storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::~Multicast()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Pps>())
{
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::~Level()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::get_children() const
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Bps::~Bps()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Pps::~Pps()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Multicast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Unicast()
    :
    level(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level>())
{
    level->parent = this;

    yang_name = "unicast"; yang_parent_name = "Cisco-IOS-XE-interfaces_storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::~Unicast()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Level()
    :
    bps(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Pps>())
	,threshold(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Threshold>())
{
    bps->parent = this;
    pps->parent = this;
    threshold->parent = this;

    yang_name = "level"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::~Level()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::has_data() const
{
    return (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::has_operation() const
{
    return is_set(yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Pps>();
        }
        return pps;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::get_children() const
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

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Bps::~Bps()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Pps::~Pps()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Threshold::Threshold()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "threshold"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Threshold::~Threshold()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Threshold::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl::Unicast::Level::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::CiscoIOSXEInterfacesStormControl_()
    :
    action(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Action>())
	,broadcast(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast>())
	,multicast(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast>())
	,unicast(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast>())
{
    action->parent = this;
    broadcast->parent = this;
    multicast->parent = this;
    unicast->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_storm-control"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::~CiscoIOSXEInterfacesStormControl_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (unicast !=  nullptr && unicast->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (unicast !=  nullptr && unicast->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Action>();
        }
        return action;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast>();
        }
        return unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::get_children() const
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "broadcast" || name == "multicast" || name == "unicast")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Action::Action()
    :
    level{YType::str, "level"},
    shutdown{YType::empty, "shutdown"},
    trap{YType::empty, "trap"}
{

    yang_name = "action"; yang_parent_name = "Cisco-IOS-XE-interfaces_storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Action::~Action()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Action::has_data() const
{
    return level.is_set
	|| shutdown.is_set
	|| trap.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(trap.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (trap.is_set || is_set(trap.yfilter)) leaf_name_data.push_back(trap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Action::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "shutdown" || name == "trap")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Broadcast()
    :
    include(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Include>())
	,level(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level>())
{
    include->parent = this;
    level->parent = this;

    yang_name = "broadcast"; yang_parent_name = "Cisco-IOS-XE-interfaces_storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::~Broadcast()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::has_data() const
{
    return (include !=  nullptr && include->has_data())
	|| (level !=  nullptr && level->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| (include !=  nullptr && include->has_operation())
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "include")
    {
        if(include == nullptr)
        {
            include = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Include>();
        }
        return include;
    }

    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::get_children() const
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include" || name == "level")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Include::Include()
    :
    multicast{YType::empty, "multicast"}
{

    yang_name = "include"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Include::~Include()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Include::has_data() const
{
    return multicast.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Include::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Include::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Include::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Include::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Include::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Include::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Include::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Include::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Pps>())
{
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "broadcast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::~Level()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::get_children() const
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Bps::~Bps()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Pps::~Pps()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Broadcast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Multicast()
    :
    level(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level>())
{
    level->parent = this;

    yang_name = "multicast"; yang_parent_name = "Cisco-IOS-XE-interfaces_storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::~Multicast()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Level()
    :
    threshold{YType::str, "threshold"}
    	,
    bps(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Pps>())
{
    bps->parent = this;
    pps->parent = this;

    yang_name = "level"; yang_parent_name = "multicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::~Level()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::has_data() const
{
    return threshold.is_set
	|| (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Pps>();
        }
        return pps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::get_children() const
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Bps::~Bps()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Pps::~Pps()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Multicast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Unicast()
    :
    level(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level>())
{
    level->parent = this;

    yang_name = "unicast"; yang_parent_name = "Cisco-IOS-XE-interfaces_storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::~Unicast()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::has_data() const
{
    return (level !=  nullptr && level->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level>();
        }
        return level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Level()
    :
    bps(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Bps>())
	,pps(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Pps>())
	,threshold(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Threshold>())
{
    bps->parent = this;
    pps->parent = this;
    threshold->parent = this;

    yang_name = "level"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::~Level()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::has_data() const
{
    return (bps !=  nullptr && bps->has_data())
	|| (pps !=  nullptr && pps->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::has_operation() const
{
    return is_set(yfilter)
	|| (bps !=  nullptr && bps->has_operation())
	|| (pps !=  nullptr && pps->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bps")
    {
        if(bps == nullptr)
        {
            bps = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Bps>();
        }
        return bps;
    }

    if(child_yang_name == "pps")
    {
        if(pps == nullptr)
        {
            pps = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Pps>();
        }
        return pps;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::get_children() const
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

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bps" || name == "pps" || name == "threshold")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Bps::Bps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "bps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Bps::~Bps()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Bps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Bps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Bps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Bps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Bps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Bps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Bps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Bps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Bps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Pps::Pps()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "pps"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Pps::~Pps()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Pps::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Pps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Pps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Pps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Pps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Pps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Pps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Pps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Pps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Threshold::Threshold()
    :
    falling_threshold{YType::str, "falling-threshold"},
    rising_threshold{YType::str, "rising-threshold"}
{

    yang_name = "threshold"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Threshold::~Threshold()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Threshold::has_data() const
{
    return falling_threshold.is_set
	|| rising_threshold.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(falling_threshold.yfilter)
	|| ydk::is_set(rising_threshold.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (falling_threshold.is_set || is_set(falling_threshold.yfilter)) leaf_name_data.push_back(falling_threshold.get_name_leafdata());
    if (rising_threshold.is_set || is_set(rising_threshold.yfilter)) leaf_name_data.push_back(rising_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold = value;
        falling_threshold.value_namespace = name_space;
        falling_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold = value;
        rising_threshold.value_namespace = name_space;
        rising_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "falling-threshold")
    {
        falling_threshold.yfilter = yfilter;
    }
    if(value_path == "rising-threshold")
    {
        rising_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_::Unicast::Level::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "falling-threshold" || name == "rising-threshold")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport::CiscoIOSXEInterfacesSwitchport()
{

    yang_name = "Cisco-IOS-XE-interfaces_switchport"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport::~CiscoIOSXEInterfacesSwitchport()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf::CiscoIOSXEInterfacesSwitchportConf()
    :
    switchport{YType::boolean, "switchport"}
{

    yang_name = "Cisco-IOS-XE-interfaces_switchport-conf"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf::~CiscoIOSXEInterfacesSwitchportConf()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf::has_data() const
{
    return switchport.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switchport.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_switchport-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switchport.is_set || is_set(switchport.yfilter)) leaf_name_data.push_back(switchport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switchport")
    {
        switchport = value;
        switchport.value_namespace = name_space;
        switchport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switchport")
    {
        switchport.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchport")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf_::CiscoIOSXEInterfacesSwitchportConf_()
    :
    switchport{YType::boolean, "switchport"}
{

    yang_name = "Cisco-IOS-XE-interfaces_switchport-conf"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf_::~CiscoIOSXEInterfacesSwitchportConf_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf_::has_data() const
{
    return switchport.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switchport.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_switchport-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switchport.is_set || is_set(switchport.yfilter)) leaf_name_data.push_back(switchport.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switchport")
    {
        switchport = value;
        switchport.value_namespace = name_space;
        switchport.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switchport")
    {
        switchport.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switchport")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport_::CiscoIOSXEInterfacesSwitchport_()
{

    yang_name = "Cisco-IOS-XE-interfaces_switchport"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport_::~CiscoIOSXEInterfacesSwitchport_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport_::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport_::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_switchport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport_::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesTrust::CiscoIOSXEInterfacesTrust()
    :
    device{YType::enumeration, "device"}
{

    yang_name = "Cisco-IOS-XE-interfaces_trust"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesTrust::~CiscoIOSXEInterfacesTrust()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesTrust::has_data() const
{
    return device.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesTrust::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesTrust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_trust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesTrust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.yfilter)) leaf_name_data.push_back(device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesTrust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesTrust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesTrust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device")
    {
        device = value;
        device.value_namespace = name_space;
        device.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesTrust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device")
    {
        device.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesTrust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesTrust_::CiscoIOSXEInterfacesTrust_()
    :
    device{YType::enumeration, "device"}
{

    yang_name = "Cisco-IOS-XE-interfaces_trust"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesTrust_::~CiscoIOSXEInterfacesTrust_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesTrust_::has_data() const
{
    return device.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesTrust_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesTrust_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_trust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesTrust_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.yfilter)) leaf_name_data.push_back(device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesTrust_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesTrust_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesTrust_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device")
    {
        device = value;
        device.value_namespace = name_space;
        device.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesTrust_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device")
    {
        device.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesTrust_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesUtd::CiscoIOSXEInterfacesUtd()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "Cisco-IOS-XE-interfaces_utd"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesUtd::~CiscoIOSXEInterfacesUtd()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesUtd::has_data() const
{
    return enable.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesUtd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesUtd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_utd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesUtd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesUtd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesUtd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesUtd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesUtd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesUtd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesUtd_::CiscoIOSXEInterfacesUtd_()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "Cisco-IOS-XE-interfaces_utd"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesUtd_::~CiscoIOSXEInterfacesUtd_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesUtd_::has_data() const
{
    return enable.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesUtd_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesUtd_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_utd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesUtd_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesUtd_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesUtd_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesUtd_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesUtd_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesUtd_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Interface::Vlan::Crypto::Crypto()
    :
    ipsec(std::make_shared<Native::Interface::Vlan::Crypto::Ipsec>())
	,map(std::make_shared<Native::Interface::Vlan::Crypto::Map>())
{
    ipsec->parent = this;
    map->parent = this;

    yang_name = "crypto"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Crypto::~Crypto()
{
}

bool Native::Interface::Vlan::Crypto::has_data() const
{
    return (ipsec !=  nullptr && ipsec->has_data())
	|| (map !=  nullptr && map->has_data());
}

bool Native::Interface::Vlan::Crypto::has_operation() const
{
    return is_set(yfilter)
	|| (ipsec !=  nullptr && ipsec->has_operation())
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Interface::Vlan::Crypto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:crypto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Crypto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Crypto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::Vlan::Crypto::Ipsec>();
        }
        return ipsec;
    }

    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Interface::Vlan::Crypto::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Crypto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    if(map != nullptr)
    {
        children["map"] = map;
    }

    return children;
}

void Native::Interface::Vlan::Crypto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Crypto::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Crypto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipsec" || name == "map")
        return true;
    return false;
}

Native::Interface::Vlan::Crypto::Ipsec::Ipsec()
    :
    df_bit{YType::enumeration, "df-bit"},
    fragmentation{YType::enumeration, "fragmentation"}
{

    yang_name = "ipsec"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Crypto::Ipsec::~Ipsec()
{
}

bool Native::Interface::Vlan::Crypto::Ipsec::has_data() const
{
    return df_bit.is_set
	|| fragmentation.is_set;
}

bool Native::Interface::Vlan::Crypto::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(df_bit.yfilter)
	|| ydk::is_set(fragmentation.yfilter);
}

std::string Native::Interface::Vlan::Crypto::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Crypto::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (df_bit.is_set || is_set(df_bit.yfilter)) leaf_name_data.push_back(df_bit.get_name_leafdata());
    if (fragmentation.is_set || is_set(fragmentation.yfilter)) leaf_name_data.push_back(fragmentation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Crypto::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Crypto::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Crypto::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "df-bit")
    {
        df_bit = value;
        df_bit.value_namespace = name_space;
        df_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragmentation")
    {
        fragmentation = value;
        fragmentation.value_namespace = name_space;
        fragmentation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Crypto::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "df-bit")
    {
        df_bit.yfilter = yfilter;
    }
    if(value_path == "fragmentation")
    {
        fragmentation.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Crypto::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "df-bit" || name == "fragmentation")
        return true;
    return false;
}

Native::Interface::Vlan::Crypto::Map::Map()
    :
    redundancy{YType::str, "redundancy"},
    stateful{YType::empty, "stateful"},
    tag{YType::str, "tag"}
{

    yang_name = "map"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Crypto::Map::~Map()
{
}

bool Native::Interface::Vlan::Crypto::Map::has_data() const
{
    return redundancy.is_set
	|| stateful.is_set
	|| tag.is_set;
}

bool Native::Interface::Vlan::Crypto::Map::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redundancy.yfilter)
	|| ydk::is_set(stateful.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Interface::Vlan::Crypto::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Crypto::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redundancy.is_set || is_set(redundancy.yfilter)) leaf_name_data.push_back(redundancy.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Crypto::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Crypto::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Crypto::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redundancy")
    {
        redundancy = value;
        redundancy.value_namespace = name_space;
        redundancy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Crypto::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redundancy")
    {
        redundancy.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Crypto::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redundancy" || name == "stateful" || name == "tag")
        return true;
    return false;
}

Native::Interface::Vlan::Cts::Cts()
    :
    manual(nullptr) // presence node
{

    yang_name = "cts"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Cts::~Cts()
{
}

bool Native::Interface::Vlan::Cts::has_data() const
{
    return (manual !=  nullptr && manual->has_data());
}

bool Native::Interface::Vlan::Cts::has_operation() const
{
    return is_set(yfilter)
	|| (manual !=  nullptr && manual->has_operation());
}

std::string Native::Interface::Vlan::Cts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cts:cts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Cts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Cts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "manual")
    {
        if(manual == nullptr)
        {
            manual = std::make_shared<Native::Interface::Vlan::Cts::Manual>();
        }
        return manual;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Cts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(manual != nullptr)
    {
        children["manual"] = manual;
    }

    return children;
}

void Native::Interface::Vlan::Cts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Cts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Cts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "manual")
        return true;
    return false;
}

Native::Interface::Vlan::Cts::Manual::Manual()
    :
    policy(std::make_shared<Native::Interface::Vlan::Cts::Manual::Policy>())
	,propagate(std::make_shared<Native::Interface::Vlan::Cts::Manual::Propagate>())
	,sap(std::make_shared<Native::Interface::Vlan::Cts::Manual::Sap>())
{
    policy->parent = this;
    propagate->parent = this;
    sap->parent = this;

    yang_name = "manual"; yang_parent_name = "cts"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Cts::Manual::~Manual()
{
}

bool Native::Interface::Vlan::Cts::Manual::has_data() const
{
    return (policy !=  nullptr && policy->has_data())
	|| (propagate !=  nullptr && propagate->has_data())
	|| (sap !=  nullptr && sap->has_data());
}

bool Native::Interface::Vlan::Cts::Manual::has_operation() const
{
    return is_set(yfilter)
	|| (policy !=  nullptr && policy->has_operation())
	|| (propagate !=  nullptr && propagate->has_operation())
	|| (sap !=  nullptr && sap->has_operation());
}

std::string Native::Interface::Vlan::Cts::Manual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Cts::Manual::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Cts::Manual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::Vlan::Cts::Manual::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "propagate")
    {
        if(propagate == nullptr)
        {
            propagate = std::make_shared<Native::Interface::Vlan::Cts::Manual::Propagate>();
        }
        return propagate;
    }

    if(child_yang_name == "sap")
    {
        if(sap == nullptr)
        {
            sap = std::make_shared<Native::Interface::Vlan::Cts::Manual::Sap>();
        }
        return sap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Cts::Manual::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(propagate != nullptr)
    {
        children["propagate"] = propagate;
    }

    if(sap != nullptr)
    {
        children["sap"] = sap;
    }

    return children;
}

void Native::Interface::Vlan::Cts::Manual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Cts::Manual::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Cts::Manual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "propagate" || name == "sap")
        return true;
    return false;
}

Native::Interface::Vlan::Cts::Manual::Policy::Policy()
    :
    static_(std::make_shared<Native::Interface::Vlan::Cts::Manual::Policy::Static_>())
{
    static_->parent = this;

    yang_name = "policy"; yang_parent_name = "manual"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Cts::Manual::Policy::~Policy()
{
}

bool Native::Interface::Vlan::Cts::Manual::Policy::has_data() const
{
    return (static_ !=  nullptr && static_->has_data());
}

bool Native::Interface::Vlan::Cts::Manual::Policy::has_operation() const
{
    return is_set(yfilter)
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Interface::Vlan::Cts::Manual::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Cts::Manual::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Cts::Manual::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Interface::Vlan::Cts::Manual::Policy::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Cts::Manual::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Interface::Vlan::Cts::Manual::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Cts::Manual::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Cts::Manual::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static")
        return true;
    return false;
}

Native::Interface::Vlan::Cts::Manual::Policy::Static_::Static_()
    :
    sgt{YType::uint16, "sgt"},
    trusted{YType::empty, "trusted"}
{

    yang_name = "static"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Cts::Manual::Policy::Static_::~Static_()
{
}

bool Native::Interface::Vlan::Cts::Manual::Policy::Static_::has_data() const
{
    return sgt.is_set
	|| trusted.is_set;
}

bool Native::Interface::Vlan::Cts::Manual::Policy::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(trusted.yfilter);
}

std::string Native::Interface::Vlan::Cts::Manual::Policy::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Cts::Manual::Policy::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (trusted.is_set || is_set(trusted.yfilter)) leaf_name_data.push_back(trusted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Cts::Manual::Policy::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Cts::Manual::Policy::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Cts::Manual::Policy::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trusted")
    {
        trusted = value;
        trusted.value_namespace = name_space;
        trusted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Cts::Manual::Policy::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "trusted")
    {
        trusted.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Cts::Manual::Policy::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt" || name == "trusted")
        return true;
    return false;
}

Native::Interface::Vlan::Cts::Manual::Propagate::Propagate()
    :
    sgt{YType::boolean, "sgt"}
{

    yang_name = "propagate"; yang_parent_name = "manual"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Cts::Manual::Propagate::~Propagate()
{
}

bool Native::Interface::Vlan::Cts::Manual::Propagate::has_data() const
{
    return sgt.is_set;
}

bool Native::Interface::Vlan::Cts::Manual::Propagate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sgt.yfilter);
}

std::string Native::Interface::Vlan::Cts::Manual::Propagate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "propagate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Cts::Manual::Propagate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Cts::Manual::Propagate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Cts::Manual::Propagate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Cts::Manual::Propagate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Cts::Manual::Propagate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Cts::Manual::Propagate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sgt")
        return true;
    return false;
}

Native::Interface::Vlan::Cts::Manual::Sap::Sap()
{

    yang_name = "sap"; yang_parent_name = "manual"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Cts::Manual::Sap::~Sap()
{
}

bool Native::Interface::Vlan::Cts::Manual::Sap::has_data() const
{
    for (std::size_t index=0; index<pmk.size(); index++)
    {
        if(pmk[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Vlan::Cts::Manual::Sap::has_operation() const
{
    for (std::size_t index=0; index<pmk.size(); index++)
    {
        if(pmk[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::Cts::Manual::Sap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Cts::Manual::Sap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Cts::Manual::Sap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmk")
    {
        for(auto const & c : pmk)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::Cts::Manual::Sap::Pmk>();
        c->parent = this;
        pmk.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Cts::Manual::Sap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pmk)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::Cts::Manual::Sap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Cts::Manual::Sap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Cts::Manual::Sap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmk")
        return true;
    return false;
}

Native::Interface::Vlan::Cts::Manual::Sap::Pmk::Pmk()
    :
    word{YType::str, "word"}
    	,
    mode_list(std::make_shared<Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList>())
{
    mode_list->parent = this;

    yang_name = "pmk"; yang_parent_name = "sap"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Cts::Manual::Sap::Pmk::~Pmk()
{
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::has_data() const
{
    return word.is_set
	|| (mode_list !=  nullptr && mode_list->has_data());
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| (mode_list !=  nullptr && mode_list->has_operation());
}

std::string Native::Interface::Vlan::Cts::Manual::Sap::Pmk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmk" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Cts::Manual::Sap::Pmk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Cts::Manual::Sap::Pmk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode-list")
    {
        if(mode_list == nullptr)
        {
            mode_list = std::make_shared<Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList>();
        }
        return mode_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Cts::Manual::Sap::Pmk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode_list != nullptr)
    {
        children["mode-list"] = mode_list;
    }

    return children;
}

void Native::Interface::Vlan::Cts::Manual::Sap::Pmk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Cts::Manual::Sap::Pmk::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode-list" || name == "word")
        return true;
    return false;
}

Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::ModeList()
    :
    gcm_encrypt(nullptr) // presence node
	,no_encap(nullptr) // presence node
{

    yang_name = "mode-list"; yang_parent_name = "pmk"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::~ModeList()
{
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::has_data() const
{
    return (gcm_encrypt !=  nullptr && gcm_encrypt->has_data())
	|| (no_encap !=  nullptr && no_encap->has_data());
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::has_operation() const
{
    return is_set(yfilter)
	|| (gcm_encrypt !=  nullptr && gcm_encrypt->has_operation())
	|| (no_encap !=  nullptr && no_encap->has_operation());
}

std::string Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gcm-encrypt")
    {
        if(gcm_encrypt == nullptr)
        {
            gcm_encrypt = std::make_shared<Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt>();
        }
        return gcm_encrypt;
    }

    if(child_yang_name == "no-encap")
    {
        if(no_encap == nullptr)
        {
            no_encap = std::make_shared<Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap>();
        }
        return no_encap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gcm_encrypt != nullptr)
    {
        children["gcm-encrypt"] = gcm_encrypt;
    }

    if(no_encap != nullptr)
    {
        children["no-encap"] = no_encap;
    }

    return children;
}

void Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gcm-encrypt" || name == "no-encap")
        return true;
    return false;
}

Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::GcmEncrypt()
    :
    gmac(nullptr) // presence node
{

    yang_name = "gcm-encrypt"; yang_parent_name = "mode-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::~GcmEncrypt()
{
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_data() const
{
    return (gmac !=  nullptr && gmac->has_data());
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_operation() const
{
    return is_set(yfilter)
	|| (gmac !=  nullptr && gmac->has_operation());
}

std::string Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gcm-encrypt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gmac")
    {
        if(gmac == nullptr)
        {
            gmac = std::make_shared<Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac>();
        }
        return gmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gmac != nullptr)
    {
        children["gmac"] = gmac;
    }

    return children;
}

void Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gmac")
        return true;
    return false;
}

Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::Gmac()
    :
    null{YType::empty, "null"}
{

    yang_name = "gmac"; yang_parent_name = "gcm-encrypt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::~Gmac()
{
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_data() const
{
    return null.is_set;
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(null.yfilter);
}

std::string Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null.is_set || is_set(null.yfilter)) leaf_name_data.push_back(null.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "null")
    {
        null = value;
        null.value_namespace = name_space;
        null.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "null")
    {
        null.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "null")
        return true;
    return false;
}

Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::NoEncap()
    :
    gmac(nullptr) // presence node
{

    yang_name = "no-encap"; yang_parent_name = "mode-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::~NoEncap()
{
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_data() const
{
    return (gmac !=  nullptr && gmac->has_data());
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_operation() const
{
    return is_set(yfilter)
	|| (gmac !=  nullptr && gmac->has_operation());
}

std::string Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gmac")
    {
        if(gmac == nullptr)
        {
            gmac = std::make_shared<Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac>();
        }
        return gmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gmac != nullptr)
    {
        children["gmac"] = gmac;
    }

    return children;
}

void Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gmac")
        return true;
    return false;
}

Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::Gmac()
    :
    gcm_encrypt{YType::empty, "gcm-encrypt"}
{

    yang_name = "gmac"; yang_parent_name = "no-encap"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::~Gmac()
{
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_data() const
{
    return gcm_encrypt.is_set;
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gcm_encrypt.yfilter);
}

std::string Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gcm_encrypt.is_set || is_set(gcm_encrypt.yfilter)) leaf_name_data.push_back(gcm_encrypt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gcm-encrypt")
    {
        gcm_encrypt = value;
        gcm_encrypt.value_namespace = name_space;
        gcm_encrypt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gcm-encrypt")
    {
        gcm_encrypt.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gcm-encrypt")
        return true;
    return false;
}

Native::Interface::Vlan::Glbp::Glbp()
{

    yang_name = "glbp"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Glbp::~Glbp()
{
}

bool Native::Interface::Vlan::Glbp::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Vlan::Glbp::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::Glbp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:glbp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Glbp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::Glbp::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::Glbp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Glbp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Glbp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Interface::Vlan::Glbp::Range::Range()
    :
    range{YType::uint16, "range"},
    name{YType::str, "name"},
    priority{YType::uint8, "priority"}
    	,
    forwarder(std::make_shared<Native::Interface::Vlan::Glbp::Range::Forwarder>())
	,ip(nullptr) // presence node
	,preempt(nullptr) // presence node
	,timers(std::make_shared<Native::Interface::Vlan::Glbp::Range::Timers>())
	,weighting(std::make_shared<Native::Interface::Vlan::Glbp::Range::Weighting>())
{
    forwarder->parent = this;
    timers->parent = this;
    weighting->parent = this;

    yang_name = "range"; yang_parent_name = "glbp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Glbp::Range::~Range()
{
}

bool Native::Interface::Vlan::Glbp::Range::has_data() const
{
    return range.is_set
	|| name.is_set
	|| priority.is_set
	|| (forwarder !=  nullptr && forwarder->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (preempt !=  nullptr && preempt->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (weighting !=  nullptr && weighting->has_data());
}

bool Native::Interface::Vlan::Glbp::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (forwarder !=  nullptr && forwarder->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (preempt !=  nullptr && preempt->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (weighting !=  nullptr && weighting->has_operation());
}

std::string Native::Interface::Vlan::Glbp::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Glbp::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarder")
    {
        if(forwarder == nullptr)
        {
            forwarder = std::make_shared<Native::Interface::Vlan::Glbp::Range::Forwarder>();
        }
        return forwarder;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Vlan::Glbp::Range::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "preempt")
    {
        if(preempt == nullptr)
        {
            preempt = std::make_shared<Native::Interface::Vlan::Glbp::Range::Preempt>();
        }
        return preempt;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Interface::Vlan::Glbp::Range::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "weighting")
    {
        if(weighting == nullptr)
        {
            weighting = std::make_shared<Native::Interface::Vlan::Glbp::Range::Weighting>();
        }
        return weighting;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forwarder != nullptr)
    {
        children["forwarder"] = forwarder;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(preempt != nullptr)
    {
        children["preempt"] = preempt;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(weighting != nullptr)
    {
        children["weighting"] = weighting;
    }

    return children;
}

void Native::Interface::Vlan::Glbp::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
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

void Native::Interface::Vlan::Glbp::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
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

bool Native::Interface::Vlan::Glbp::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarder" || name == "ip" || name == "preempt" || name == "timers" || name == "weighting" || name == "range" || name == "name" || name == "priority")
        return true;
    return false;
}

Native::Interface::Vlan::Glbp::Range::Forwarder::Forwarder()
    :
    preempt(nullptr) // presence node
{

    yang_name = "forwarder"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Glbp::Range::Forwarder::~Forwarder()
{
}

bool Native::Interface::Vlan::Glbp::Range::Forwarder::has_data() const
{
    return (preempt !=  nullptr && preempt->has_data());
}

bool Native::Interface::Vlan::Glbp::Range::Forwarder::has_operation() const
{
    return is_set(yfilter)
	|| (preempt !=  nullptr && preempt->has_operation());
}

std::string Native::Interface::Vlan::Glbp::Range::Forwarder::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarder";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Glbp::Range::Forwarder::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Forwarder::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "preempt")
    {
        if(preempt == nullptr)
        {
            preempt = std::make_shared<Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt>();
        }
        return preempt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Forwarder::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(preempt != nullptr)
    {
        children["preempt"] = preempt;
    }

    return children;
}

void Native::Interface::Vlan::Glbp::Range::Forwarder::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Glbp::Range::Forwarder::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Glbp::Range::Forwarder::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preempt")
        return true;
    return false;
}

Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Preempt()
    :
    delay(std::make_shared<Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay>())
{
    delay->parent = this;

    yang_name = "preempt"; yang_parent_name = "forwarder"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::~Preempt()
{
}

bool Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::has_data() const
{
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"}
{

    yang_name = "delay"; yang_parent_name = "preempt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay::~Delay()
{
}

bool Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay::has_data() const
{
    return minimum.is_set;
}

bool Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Glbp::Range::Forwarder::Preempt::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum")
        return true;
    return false;
}

Native::Interface::Vlan::Glbp::Range::Ip::Ip()
{

    yang_name = "ip"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Glbp::Range::Ip::~Ip()
{
}

bool Native::Interface::Vlan::Glbp::Range::Ip::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Vlan::Glbp::Range::Ip::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::Glbp::Range::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Glbp::Range::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::Glbp::Range::Ip::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::Glbp::Range::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Glbp::Range::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Glbp::Range::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Interface::Vlan::Glbp::Range::Ip::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "ipv4"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Glbp::Range::Ip::Ipv4::~Ipv4()
{
}

bool Native::Interface::Vlan::Glbp::Range::Ip::Ipv4::has_data() const
{
    return ipv4.is_set;
}

bool Native::Interface::Vlan::Glbp::Range::Ip::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Interface::Vlan::Glbp::Range::Ip::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Glbp::Range::Ip::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Ip::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Ip::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Glbp::Range::Ip::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Glbp::Range::Ip::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Glbp::Range::Ip::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Interface::Vlan::Glbp::Range::Preempt::Preempt()
    :
    delay(std::make_shared<Native::Interface::Vlan::Glbp::Range::Preempt::Delay>())
{
    delay->parent = this;

    yang_name = "preempt"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Glbp::Range::Preempt::~Preempt()
{
}

bool Native::Interface::Vlan::Glbp::Range::Preempt::has_data() const
{
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Interface::Vlan::Glbp::Range::Preempt::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Interface::Vlan::Glbp::Range::Preempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preempt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Glbp::Range::Preempt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Preempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Vlan::Glbp::Range::Preempt::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Preempt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Interface::Vlan::Glbp::Range::Preempt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Glbp::Range::Preempt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Glbp::Range::Preempt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Interface::Vlan::Glbp::Range::Preempt::Delay::Delay()
    :
    minimum{YType::uint16, "minimum"}
{

    yang_name = "delay"; yang_parent_name = "preempt"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Glbp::Range::Preempt::Delay::~Delay()
{
}

bool Native::Interface::Vlan::Glbp::Range::Preempt::Delay::has_data() const
{
    return minimum.is_set;
}

bool Native::Interface::Vlan::Glbp::Range::Preempt::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum.yfilter);
}

std::string Native::Interface::Vlan::Glbp::Range::Preempt::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Glbp::Range::Preempt::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Preempt::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Preempt::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Glbp::Range::Preempt::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Glbp::Range::Preempt::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Glbp::Range::Preempt::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum")
        return true;
    return false;
}

Native::Interface::Vlan::Glbp::Range::Timers::Timers()
    :
    msec(std::make_shared<Native::Interface::Vlan::Glbp::Range::Timers::Msec>())
{
    msec->parent = this;

    yang_name = "timers"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Glbp::Range::Timers::~Timers()
{
}

bool Native::Interface::Vlan::Glbp::Range::Timers::has_data() const
{
    return (msec !=  nullptr && msec->has_data());
}

bool Native::Interface::Vlan::Glbp::Range::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (msec !=  nullptr && msec->has_operation());
}

std::string Native::Interface::Vlan::Glbp::Range::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Glbp::Range::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Interface::Vlan::Glbp::Range::Timers::Msec>();
        }
        return msec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(msec != nullptr)
    {
        children["msec"] = msec;
    }

    return children;
}

void Native::Interface::Vlan::Glbp::Range::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Glbp::Range::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Glbp::Range::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec")
        return true;
    return false;
}

Native::Interface::Vlan::Glbp::Range::Timers::Msec::Msec()
{

    yang_name = "msec"; yang_parent_name = "timers"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Glbp::Range::Timers::Msec::~Msec()
{
}

bool Native::Interface::Vlan::Glbp::Range::Timers::Msec::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Vlan::Glbp::Range::Timers::Msec::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::Glbp::Range::Timers::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Glbp::Range::Timers::Msec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Timers::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Timers::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::Glbp::Range::Timers::Msec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Glbp::Range::Timers::Msec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Glbp::Range::Timers::Msec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_::Range_()
    :
    range{YType::uint16, "range"},
    range0{YType::uint8, "range0"}
{

    yang_name = "range"; yang_parent_name = "msec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_::~Range_()
{
}

bool Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_::has_data() const
{
    return range.is_set
	|| range0.is_set;
}

bool Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(range0.yfilter);
}

std::string Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (range0.is_set || is_set(range0.yfilter)) leaf_name_data.push_back(range0.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range0")
    {
        range0 = value;
        range0.value_namespace = name_space;
        range0.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "range0")
    {
        range0.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Glbp::Range::Timers::Msec::Range_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "range0")
        return true;
    return false;
}

Native::Interface::Vlan::Glbp::Range::Weighting::Weighting()
    :
    track(std::make_shared<Native::Interface::Vlan::Glbp::Range::Weighting::Track>())
{
    track->parent = this;

    yang_name = "weighting"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Glbp::Range::Weighting::~Weighting()
{
}

bool Native::Interface::Vlan::Glbp::Range::Weighting::has_data() const
{
    for (std::size_t index=0; index<value_.size(); index++)
    {
        if(value_[index]->has_data())
            return true;
    }
    return (track !=  nullptr && track->has_data());
}

bool Native::Interface::Vlan::Glbp::Range::Weighting::has_operation() const
{
    for (std::size_t index=0; index<value_.size(); index++)
    {
        if(value_[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (track !=  nullptr && track->has_operation());
}

std::string Native::Interface::Vlan::Glbp::Range::Weighting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weighting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Glbp::Range::Weighting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Weighting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "track")
    {
        if(track == nullptr)
        {
            track = std::make_shared<Native::Interface::Vlan::Glbp::Range::Weighting::Track>();
        }
        return track;
    }

    if(child_yang_name == "value")
    {
        for(auto const & c : value_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::Glbp::Range::Weighting::Value_>();
        c->parent = this;
        value_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Weighting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(track != nullptr)
    {
        children["track"] = track;
    }

    for (auto const & c : value_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::Glbp::Range::Weighting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Glbp::Range::Weighting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Glbp::Range::Weighting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track" || name == "value")
        return true;
    return false;
}

Native::Interface::Vlan::Glbp::Range::Weighting::Track::Track()
{

    yang_name = "track"; yang_parent_name = "weighting"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Glbp::Range::Weighting::Track::~Track()
{
}

bool Native::Interface::Vlan::Glbp::Range::Weighting::Track::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Vlan::Glbp::Range::Weighting::Track::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::Glbp::Range::Weighting::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Glbp::Range::Weighting::Track::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Weighting::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Weighting::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::Glbp::Range::Weighting::Track::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Glbp::Range::Weighting::Track::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Glbp::Range::Weighting::Track::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_::Range_()
    :
    range{YType::uint16, "range"},
    decrement{YType::uint8, "decrement"}
{

    yang_name = "range"; yang_parent_name = "track"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_::~Range_()
{
}

bool Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_::has_data() const
{
    return range.is_set
	|| decrement.is_set;
}

bool Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(decrement.yfilter);
}

std::string Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (decrement.is_set || is_set(decrement.yfilter)) leaf_name_data.push_back(decrement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decrement")
    {
        decrement = value;
        decrement.value_namespace = name_space;
        decrement.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "decrement")
    {
        decrement.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Glbp::Range::Weighting::Track::Range_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "decrement")
        return true;
    return false;
}

Native::Interface::Vlan::Glbp::Range::Weighting::Value_::Value_()
    :
    value_{YType::int8, "value"},
    lower{YType::int8, "lower"},
    upper{YType::int8, "upper"}
{

    yang_name = "value"; yang_parent_name = "weighting"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Glbp::Range::Weighting::Value_::~Value_()
{
}

bool Native::Interface::Vlan::Glbp::Range::Weighting::Value_::has_data() const
{
    return value_.is_set
	|| lower.is_set
	|| upper.is_set;
}

bool Native::Interface::Vlan::Glbp::Range::Weighting::Value_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter);
}

std::string Native::Interface::Vlan::Glbp::Range::Weighting::Value_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value" <<"[value='" <<value_ <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Glbp::Range::Weighting::Value_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Glbp::Range::Weighting::Value_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Glbp::Range::Weighting::Value_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Glbp::Range::Weighting::Value_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Glbp::Range::Weighting::Value_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Glbp::Range::Weighting::Value_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "lower" || name == "upper")
        return true;
    return false;
}

Native::Interface::Vlan::IpVrf::IpVrf()
    :
    ip(std::make_shared<Native::Interface::Vlan::IpVrf::Ip>())
{
    ip->parent = this;

    yang_name = "ip-vrf"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::IpVrf::~IpVrf()
{
}

bool Native::Interface::Vlan::IpVrf::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::Vlan::IpVrf::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::Vlan::IpVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::IpVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::IpVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Vlan::IpVrf::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::IpVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Interface::Vlan::IpVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::IpVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::IpVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Interface::Vlan::IpVrf::Ip::Ip()
    :
    vrf(std::make_shared<Native::Interface::Vlan::IpVrf::Ip::Vrf>())
{
    vrf->parent = this;

    yang_name = "ip"; yang_parent_name = "ip-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::IpVrf::Ip::~Ip()
{
}

bool Native::Interface::Vlan::IpVrf::Ip::has_data() const
{
    return (vrf !=  nullptr && vrf->has_data());
}

bool Native::Interface::Vlan::IpVrf::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Interface::Vlan::IpVrf::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::IpVrf::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::IpVrf::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::Vlan::IpVrf::Ip::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::IpVrf::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Interface::Vlan::IpVrf::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::IpVrf::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::IpVrf::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Interface::Vlan::IpVrf::Ip::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::IpVrf::Ip::Vrf::~Vrf()
{
}

bool Native::Interface::Vlan::IpVrf::Ip::Vrf::has_data() const
{
    return forwarding.is_set;
}

bool Native::Interface::Vlan::IpVrf::Ip::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Interface::Vlan::IpVrf::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::IpVrf::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::IpVrf::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::IpVrf::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::IpVrf::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::IpVrf::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::IpVrf::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Interface::Vlan::IpVrf_::IpVrf_()
    :
    ip(std::make_shared<Native::Interface::Vlan::IpVrf_::Ip>())
{
    ip->parent = this;

    yang_name = "ip-vrf"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::IpVrf_::~IpVrf_()
{
}

bool Native::Interface::Vlan::IpVrf_::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::Vlan::IpVrf_::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::Vlan::IpVrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:ip-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::IpVrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::IpVrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Vlan::IpVrf_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::IpVrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Interface::Vlan::IpVrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::IpVrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::IpVrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Interface::Vlan::IpVrf_::Ip::Ip()
    :
    vrf(std::make_shared<Native::Interface::Vlan::IpVrf_::Ip::Vrf>())
{
    vrf->parent = this;

    yang_name = "ip"; yang_parent_name = "ip-vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::IpVrf_::Ip::~Ip()
{
}

bool Native::Interface::Vlan::IpVrf_::Ip::has_data() const
{
    return (vrf !=  nullptr && vrf->has_data());
}

bool Native::Interface::Vlan::IpVrf_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Interface::Vlan::IpVrf_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::IpVrf_::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::IpVrf_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::Vlan::IpVrf_::Ip::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::IpVrf_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Interface::Vlan::IpVrf_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::IpVrf_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::IpVrf_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Interface::Vlan::IpVrf_::Ip::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::IpVrf_::Ip::Vrf::~Vrf()
{
}

bool Native::Interface::Vlan::IpVrf_::Ip::Vrf::has_data() const
{
    return forwarding.is_set;
}

bool Native::Interface::Vlan::IpVrf_::Ip::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Interface::Vlan::IpVrf_::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::IpVrf_::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::IpVrf_::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::IpVrf_::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::IpVrf_::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::IpVrf_::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::IpVrf_::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Interface::Vlan::KeepaliveSettings::KeepaliveSettings()
    :
    keepalive(nullptr) // presence node
{

    yang_name = "keepalive-settings"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::KeepaliveSettings::~KeepaliveSettings()
{
}

bool Native::Interface::Vlan::KeepaliveSettings::has_data() const
{
    return (keepalive !=  nullptr && keepalive->has_data());
}

bool Native::Interface::Vlan::KeepaliveSettings::has_operation() const
{
    return is_set(yfilter)
	|| (keepalive !=  nullptr && keepalive->has_operation());
}

std::string Native::Interface::Vlan::KeepaliveSettings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive-settings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::KeepaliveSettings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::KeepaliveSettings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Interface::Vlan::KeepaliveSettings::Keepalive>();
        }
        return keepalive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::KeepaliveSettings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(keepalive != nullptr)
    {
        children["keepalive"] = keepalive;
    }

    return children;
}

void Native::Interface::Vlan::KeepaliveSettings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::KeepaliveSettings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::KeepaliveSettings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::Version::Y_1 {0, "1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::Version::Y_2 {1, "2"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Ipv6::autoconfig {0, "autoconfig"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Authentication::Md5::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesStandby::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::Version::Y_1 {0, "1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::Version::Y_2 {1, "2"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Ipv6::autoconfig {0, "autoconfig"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Authentication::Md5::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_::StandbyList::Redirect::Advertisement::Authentication::Md5::KeyString::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesTrust::Device::cisco_phone {0, "cisco-phone"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesTrust::Device::cts {1, "cts"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesTrust::Device::ip_camera {2, "ip-camera"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesTrust::Device::media_player {3, "media-player"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesTrust_::Device::cisco_phone {0, "cisco-phone"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesTrust_::Device::cts {1, "cts"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesTrust_::Device::ip_camera {2, "ip-camera"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesTrust_::Device::media_player {3, "media-player"};

const Enum::YLeaf Native::Interface::Vlan::Crypto::Ipsec::DfBit::clear {0, "clear"};
const Enum::YLeaf Native::Interface::Vlan::Crypto::Ipsec::DfBit::copy {1, "copy"};
const Enum::YLeaf Native::Interface::Vlan::Crypto::Ipsec::DfBit::set {2, "set"};

const Enum::YLeaf Native::Interface::Vlan::Crypto::Ipsec::Fragmentation::after_encryption {0, "after-encryption"};
const Enum::YLeaf Native::Interface::Vlan::Crypto::Ipsec::Fragmentation::before_encryption {1, "before-encryption"};


}
}

