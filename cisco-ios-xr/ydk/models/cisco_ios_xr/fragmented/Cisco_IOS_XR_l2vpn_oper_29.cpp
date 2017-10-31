
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_29.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::Fr()
    :
    fr_mode{YType::enumeration, "fr-mode"},
    dlci{YType::uint32, "dlci"}
{

    yang_name = "fr"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::~Fr()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::has_data() const
{
    return fr_mode.is_set
	|| dlci.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fr_mode.yfilter)
	|| ydk::is_set(dlci.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fr_mode.is_set || is_set(fr_mode.yfilter)) leaf_name_data.push_back(fr_mode.get_name_leafdata());
    if (dlci.is_set || is_set(dlci.yfilter)) leaf_name_data.push_back(dlci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fr-mode")
    {
        fr_mode = value;
        fr_mode.value_namespace = name_space;
        fr_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dlci")
    {
        dlci = value;
        dlci.value_namespace = name_space;
        dlci.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fr-mode")
    {
        fr_mode.yfilter = yfilter;
    }
    if(value_path == "dlci")
    {
        dlci.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fr-mode" || name == "dlci")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::PseudowireEther()
    :
    is_valid{YType::boolean, "is-valid"},
    internal_label{YType::uint32, "internal-label"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-ether"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::~PseudowireEther()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::has_data() const
{
    return is_valid.is_set
	|| internal_label.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "is-valid" || name == "internal-label")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::InterfaceList()
    :
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"}
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-ether"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_name.is_set
	|| interface_list_id.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-name" || name == "interface-list-id")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
        replicate_status.value_namespace = name_space;
        replicate_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "replicate-status")
    {
        replicate_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::PseudowireIw()
    :
    is_valid{YType::boolean, "is-valid"},
    internal_label{YType::uint32, "internal-label"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-iw"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::~PseudowireIw()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::has_data() const
{
    return is_valid.is_set
	|| internal_label.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-iw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "is-valid" || name == "internal-label")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::InterfaceList()
    :
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"}
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-iw"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_name.is_set
	|| interface_list_id.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-name" || name == "interface-list-id")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
        replicate_status.value_namespace = name_space;
        replicate_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "replicate-status")
    {
        replicate_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::RemoteInterface()
    :
    name{YType::str, "name"},
    mtu{YType::uint32, "mtu"},
    payload_bytes{YType::uint16, "payload-bytes"}
    	,
    parameters(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters>())
{
    parameters->parent = this;

    yang_name = "remote-interface"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::~RemoteInterface()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::has_data() const
{
    return name.is_set
	|| mtu.is_set
	|| payload_bytes.is_set
	|| (parameters !=  nullptr && parameters->has_data());
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| (parameters !=  nullptr && parameters->has_operation());
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameters")
    {
        if(parameters == nullptr)
        {
            parameters = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters>();
        }
        return parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(parameters != nullptr)
    {
        children["parameters"] = parameters;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parameters" || name == "name" || name == "mtu" || name == "payload-bytes")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Parameters()
    :
    type{YType::enumeration, "type"}
    	,
    ethernet(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet>())
	,vlan(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan>())
	,tdm(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm>())
	,atm(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm>())
	,fr(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr>())
	,pseudowire_ether(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther>())
	,pseudowire_iw(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw>())
{
    ethernet->parent = this;
    vlan->parent = this;
    tdm->parent = this;
    atm->parent = this;
    fr->parent = this;
    pseudowire_ether->parent = this;
    pseudowire_iw->parent = this;

    yang_name = "parameters"; yang_parent_name = "remote-interface"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::~Parameters()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::has_data() const
{
    return type.is_set
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (vlan !=  nullptr && vlan->has_data())
	|| (tdm !=  nullptr && tdm->has_data())
	|| (atm !=  nullptr && atm->has_data())
	|| (fr !=  nullptr && fr->has_data())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_data())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_data());
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (tdm !=  nullptr && tdm->has_operation())
	|| (atm !=  nullptr && atm->has_operation())
	|| (fr !=  nullptr && fr->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation());
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "tdm")
    {
        if(tdm == nullptr)
        {
            tdm = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm>();
        }
        return tdm;
    }

    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "fr")
    {
        if(fr == nullptr)
        {
            fr = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr>();
        }
        return fr;
    }

    if(child_yang_name == "pseudowire-ether")
    {
        if(pseudowire_ether == nullptr)
        {
            pseudowire_ether = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther>();
        }
        return pseudowire_ether;
    }

    if(child_yang_name == "pseudowire-iw")
    {
        if(pseudowire_iw == nullptr)
        {
            pseudowire_iw = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw>();
        }
        return pseudowire_iw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ethernet != nullptr)
    {
        children["ethernet"] = ethernet;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    if(tdm != nullptr)
    {
        children["tdm"] = tdm;
    }

    if(atm != nullptr)
    {
        children["atm"] = atm;
    }

    if(fr != nullptr)
    {
        children["fr"] = fr;
    }

    if(pseudowire_ether != nullptr)
    {
        children["pseudowire-ether"] = pseudowire_ether;
    }

    if(pseudowire_iw != nullptr)
    {
        children["pseudowire-iw"] = pseudowire_iw;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "vlan" || name == "tdm" || name == "atm" || name == "fr" || name == "pseudowire-ether" || name == "pseudowire-iw" || name == "type")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::Ethernet()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"}
{

    yang_name = "ethernet"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::~Ethernet()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::has_data() const
{
    return xconnect_tags.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xconnect_tags.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-tags")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::Vlan()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"},
    vlan_rewrite_tag{YType::uint16, "vlan-rewrite-tag"},
    simple_efp{YType::uint8, "simple-efp"},
    encapsulation_type{YType::uint8, "encapsulation-type"},
    outer_tag{YType::uint16, "outer-tag"}
{

    yang_name = "vlan"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::~Vlan()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::has_data() const
{
    for (std::size_t index=0; index<rewrite_tag.size(); index++)
    {
        if(rewrite_tag[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return xconnect_tags.is_set
	|| vlan_rewrite_tag.is_set
	|| simple_efp.is_set
	|| encapsulation_type.is_set
	|| outer_tag.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::has_operation() const
{
    for (std::size_t index=0; index<rewrite_tag.size(); index++)
    {
        if(rewrite_tag[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(xconnect_tags.yfilter)
	|| ydk::is_set(vlan_rewrite_tag.yfilter)
	|| ydk::is_set(simple_efp.yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(outer_tag.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());
    if (vlan_rewrite_tag.is_set || is_set(vlan_rewrite_tag.yfilter)) leaf_name_data.push_back(vlan_rewrite_tag.get_name_leafdata());
    if (simple_efp.is_set || is_set(simple_efp.yfilter)) leaf_name_data.push_back(simple_efp.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.yfilter)) leaf_name_data.push_back(outer_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rewrite-tag")
    {
        for(auto const & c : rewrite_tag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag>();
        c->parent = this;
        rewrite_tag.push_back(c);
        return c;
    }

    if(child_yang_name == "vlan-range")
    {
        for(auto const & c : vlan_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange>();
        c->parent = this;
        vlan_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rewrite_tag)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vlan_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag = value;
        vlan_rewrite_tag.value_namespace = name_space;
        vlan_rewrite_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "simple-efp")
    {
        simple_efp = value;
        simple_efp.value_namespace = name_space;
        simple_efp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
        outer_tag.value_namespace = name_space;
        outer_tag.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag.yfilter = yfilter;
    }
    if(value_path == "simple-efp")
    {
        simple_efp.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "outer-tag")
    {
        outer_tag.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rewrite-tag" || name == "vlan-range" || name == "xconnect-tags" || name == "vlan-rewrite-tag" || name == "simple-efp" || name == "encapsulation-type" || name == "outer-tag")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::RewriteTag()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "rewrite-tag"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::~RewriteTag()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{

    yang_name = "vlan-range"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::~VlanRange()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower" || name == "upper")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::Tdm()
    :
    timeslot_group{YType::str, "timeslot-group"},
    timeslot_rate{YType::uint8, "timeslot-rate"},
    tdm_mode{YType::enumeration, "tdm-mode"}
    	,
    tdm_options(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions>())
{
    tdm_options->parent = this;

    yang_name = "tdm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::~Tdm()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::has_data() const
{
    return timeslot_group.is_set
	|| timeslot_rate.is_set
	|| tdm_mode.is_set
	|| (tdm_options !=  nullptr && tdm_options->has_data());
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeslot_group.yfilter)
	|| ydk::is_set(timeslot_rate.yfilter)
	|| ydk::is_set(tdm_mode.yfilter)
	|| (tdm_options !=  nullptr && tdm_options->has_operation());
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeslot_group.is_set || is_set(timeslot_group.yfilter)) leaf_name_data.push_back(timeslot_group.get_name_leafdata());
    if (timeslot_rate.is_set || is_set(timeslot_rate.yfilter)) leaf_name_data.push_back(timeslot_rate.get_name_leafdata());
    if (tdm_mode.is_set || is_set(tdm_mode.yfilter)) leaf_name_data.push_back(tdm_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tdm-options")
    {
        if(tdm_options == nullptr)
        {
            tdm_options = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions>();
        }
        return tdm_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tdm_options != nullptr)
    {
        children["tdm-options"] = tdm_options;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeslot-group")
    {
        timeslot_group = value;
        timeslot_group.value_namespace = name_space;
        timeslot_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate = value;
        timeslot_rate.value_namespace = name_space;
        timeslot_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tdm-mode")
    {
        tdm_mode = value;
        tdm_mode.value_namespace = name_space;
        tdm_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeslot-group")
    {
        timeslot_group.yfilter = yfilter;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate.yfilter = yfilter;
    }
    if(value_path == "tdm-mode")
    {
        tdm_mode.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tdm-options" || name == "timeslot-group" || name == "timeslot-rate" || name == "tdm-mode")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::TdmOptions()
    :
    payload_bytes{YType::uint16, "payload-bytes"},
    bit_rate{YType::uint32, "bit-rate"},
    rtp{YType::enumeration, "rtp"},
    timestamp_mode{YType::enumeration, "timestamp-mode"},
    signalling_packets{YType::uint8, "signalling-packets"},
    cas{YType::uint8, "cas"},
    rtp_header_payload_type{YType::uint8, "rtp-header-payload-type"},
    timestamp_clock_freq{YType::uint16, "timestamp-clock-freq"},
    ssrc{YType::uint32, "ssrc"}
{

    yang_name = "tdm-options"; yang_parent_name = "tdm"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::~TdmOptions()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::has_data() const
{
    return payload_bytes.is_set
	|| bit_rate.is_set
	|| rtp.is_set
	|| timestamp_mode.is_set
	|| signalling_packets.is_set
	|| cas.is_set
	|| rtp_header_payload_type.is_set
	|| timestamp_clock_freq.is_set
	|| ssrc.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| ydk::is_set(bit_rate.yfilter)
	|| ydk::is_set(rtp.yfilter)
	|| ydk::is_set(timestamp_mode.yfilter)
	|| ydk::is_set(signalling_packets.yfilter)
	|| ydk::is_set(cas.yfilter)
	|| ydk::is_set(rtp_header_payload_type.yfilter)
	|| ydk::is_set(timestamp_clock_freq.yfilter)
	|| ydk::is_set(ssrc.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());
    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (rtp.is_set || is_set(rtp.yfilter)) leaf_name_data.push_back(rtp.get_name_leafdata());
    if (timestamp_mode.is_set || is_set(timestamp_mode.yfilter)) leaf_name_data.push_back(timestamp_mode.get_name_leafdata());
    if (signalling_packets.is_set || is_set(signalling_packets.yfilter)) leaf_name_data.push_back(signalling_packets.get_name_leafdata());
    if (cas.is_set || is_set(cas.yfilter)) leaf_name_data.push_back(cas.get_name_leafdata());
    if (rtp_header_payload_type.is_set || is_set(rtp_header_payload_type.yfilter)) leaf_name_data.push_back(rtp_header_payload_type.get_name_leafdata());
    if (timestamp_clock_freq.is_set || is_set(timestamp_clock_freq.yfilter)) leaf_name_data.push_back(timestamp_clock_freq.get_name_leafdata());
    if (ssrc.is_set || is_set(ssrc.yfilter)) leaf_name_data.push_back(ssrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp")
    {
        rtp = value;
        rtp.value_namespace = name_space;
        rtp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode = value;
        timestamp_mode.value_namespace = name_space;
        timestamp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets = value;
        signalling_packets.value_namespace = name_space;
        signalling_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cas")
    {
        cas = value;
        cas.value_namespace = name_space;
        cas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type = value;
        rtp_header_payload_type.value_namespace = name_space;
        rtp_header_payload_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq = value;
        timestamp_clock_freq.value_namespace = name_space;
        timestamp_clock_freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssrc")
    {
        ssrc = value;
        ssrc.value_namespace = name_space;
        ssrc.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
    if(value_path == "rtp")
    {
        rtp.yfilter = yfilter;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode.yfilter = yfilter;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets.yfilter = yfilter;
    }
    if(value_path == "cas")
    {
        cas.yfilter = yfilter;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type.yfilter = yfilter;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq.yfilter = yfilter;
    }
    if(value_path == "ssrc")
    {
        ssrc.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "payload-bytes" || name == "bit-rate" || name == "rtp" || name == "timestamp-mode" || name == "signalling-packets" || name == "cas" || name == "rtp-header-payload-type" || name == "timestamp-clock-freq" || name == "ssrc")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::Atm()
    :
    maximum_number_cells_packed{YType::uint16, "maximum-number-cells-packed"},
    maximum_number_cells_un_packed{YType::uint16, "maximum-number-cells-un-packed"},
    atm_mode{YType::enumeration, "atm-mode"},
    vpi{YType::uint16, "vpi"},
    vci{YType::uint16, "vci"}
{

    yang_name = "atm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::~Atm()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::has_data() const
{
    return maximum_number_cells_packed.is_set
	|| maximum_number_cells_un_packed.is_set
	|| atm_mode.is_set
	|| vpi.is_set
	|| vci.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_number_cells_packed.yfilter)
	|| ydk::is_set(maximum_number_cells_un_packed.yfilter)
	|| ydk::is_set(atm_mode.yfilter)
	|| ydk::is_set(vpi.yfilter)
	|| ydk::is_set(vci.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_number_cells_packed.is_set || is_set(maximum_number_cells_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_packed.get_name_leafdata());
    if (maximum_number_cells_un_packed.is_set || is_set(maximum_number_cells_un_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_un_packed.get_name_leafdata());
    if (atm_mode.is_set || is_set(atm_mode.yfilter)) leaf_name_data.push_back(atm_mode.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.yfilter)) leaf_name_data.push_back(vpi.get_name_leafdata());
    if (vci.is_set || is_set(vci.yfilter)) leaf_name_data.push_back(vci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed = value;
        maximum_number_cells_packed.value_namespace = name_space;
        maximum_number_cells_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed = value;
        maximum_number_cells_un_packed.value_namespace = name_space;
        maximum_number_cells_un_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm-mode")
    {
        atm_mode = value;
        atm_mode.value_namespace = name_space;
        atm_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpi")
    {
        vpi = value;
        vpi.value_namespace = name_space;
        vpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vci")
    {
        vci = value;
        vci.value_namespace = name_space;
        vci.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed.yfilter = yfilter;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed.yfilter = yfilter;
    }
    if(value_path == "atm-mode")
    {
        atm_mode.yfilter = yfilter;
    }
    if(value_path == "vpi")
    {
        vpi.yfilter = yfilter;
    }
    if(value_path == "vci")
    {
        vci.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-number-cells-packed" || name == "maximum-number-cells-un-packed" || name == "atm-mode" || name == "vpi" || name == "vci")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::Fr()
    :
    fr_mode{YType::enumeration, "fr-mode"},
    dlci{YType::uint32, "dlci"}
{

    yang_name = "fr"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::~Fr()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::has_data() const
{
    return fr_mode.is_set
	|| dlci.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fr_mode.yfilter)
	|| ydk::is_set(dlci.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fr_mode.is_set || is_set(fr_mode.yfilter)) leaf_name_data.push_back(fr_mode.get_name_leafdata());
    if (dlci.is_set || is_set(dlci.yfilter)) leaf_name_data.push_back(dlci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fr-mode")
    {
        fr_mode = value;
        fr_mode.value_namespace = name_space;
        fr_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dlci")
    {
        dlci = value;
        dlci.value_namespace = name_space;
        dlci.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fr-mode")
    {
        fr_mode.yfilter = yfilter;
    }
    if(value_path == "dlci")
    {
        dlci.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fr-mode" || name == "dlci")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::PseudowireEther()
    :
    is_valid{YType::boolean, "is-valid"},
    internal_label{YType::uint32, "internal-label"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-ether"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::~PseudowireEther()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::has_data() const
{
    return is_valid.is_set
	|| internal_label.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "is-valid" || name == "internal-label")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::InterfaceList()
    :
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"}
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-ether"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_name.is_set
	|| interface_list_id.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-name" || name == "interface-list-id")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
        replicate_status.value_namespace = name_space;
        replicate_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "replicate-status")
    {
        replicate_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::PseudowireIw()
    :
    is_valid{YType::boolean, "is-valid"},
    internal_label{YType::uint32, "internal-label"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-iw"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::~PseudowireIw()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::has_data() const
{
    return is_valid.is_set
	|| internal_label.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-iw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "is-valid" || name == "internal-label")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::InterfaceList()
    :
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"}
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-iw"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_name.is_set
	|| interface_list_id.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-name" || name == "interface-list-id")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
        replicate_status.value_namespace = name_space;
        replicate_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "replicate-status")
    {
        replicate_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::PreferredPath()
    :
    option{YType::enumeration, "option"},
    next_hop_ip{YType::uint32, "next-hop-ip"},
    te_tunnel_interface_number{YType::uint32, "te-tunnel-interface-number"},
    ip_tunnel_interface_number{YType::uint32, "ip-tunnel-interface-number"},
    tp_tunnel_interface_number{YType::uint32, "tp-tunnel-interface-number"}
    	,
    srte_policy(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy>())
{
    srte_policy->parent = this;

    yang_name = "preferred-path"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::~PreferredPath()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::has_data() const
{
    return option.is_set
	|| next_hop_ip.is_set
	|| te_tunnel_interface_number.is_set
	|| ip_tunnel_interface_number.is_set
	|| tp_tunnel_interface_number.is_set
	|| (srte_policy !=  nullptr && srte_policy->has_data());
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(next_hop_ip.yfilter)
	|| ydk::is_set(te_tunnel_interface_number.yfilter)
	|| ydk::is_set(ip_tunnel_interface_number.yfilter)
	|| ydk::is_set(tp_tunnel_interface_number.yfilter)
	|| (srte_policy !=  nullptr && srte_policy->has_operation());
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (next_hop_ip.is_set || is_set(next_hop_ip.yfilter)) leaf_name_data.push_back(next_hop_ip.get_name_leafdata());
    if (te_tunnel_interface_number.is_set || is_set(te_tunnel_interface_number.yfilter)) leaf_name_data.push_back(te_tunnel_interface_number.get_name_leafdata());
    if (ip_tunnel_interface_number.is_set || is_set(ip_tunnel_interface_number.yfilter)) leaf_name_data.push_back(ip_tunnel_interface_number.get_name_leafdata());
    if (tp_tunnel_interface_number.is_set || is_set(tp_tunnel_interface_number.yfilter)) leaf_name_data.push_back(tp_tunnel_interface_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srte-policy")
    {
        if(srte_policy == nullptr)
        {
            srte_policy = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy>();
        }
        return srte_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(srte_policy != nullptr)
    {
        children["srte-policy"] = srte_policy;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip = value;
        next_hop_ip.value_namespace = name_space;
        next_hop_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-tunnel-interface-number")
    {
        te_tunnel_interface_number = value;
        te_tunnel_interface_number.value_namespace = name_space;
        te_tunnel_interface_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-tunnel-interface-number")
    {
        ip_tunnel_interface_number = value;
        ip_tunnel_interface_number.value_namespace = name_space;
        ip_tunnel_interface_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tp-tunnel-interface-number")
    {
        tp_tunnel_interface_number = value;
        tp_tunnel_interface_number.value_namespace = name_space;
        tp_tunnel_interface_number.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip.yfilter = yfilter;
    }
    if(value_path == "te-tunnel-interface-number")
    {
        te_tunnel_interface_number.yfilter = yfilter;
    }
    if(value_path == "ip-tunnel-interface-number")
    {
        ip_tunnel_interface_number.yfilter = yfilter;
    }
    if(value_path == "tp-tunnel-interface-number")
    {
        tp_tunnel_interface_number.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srte-policy" || name == "option" || name == "next-hop-ip" || name == "te-tunnel-interface-number" || name == "ip-tunnel-interface-number" || name == "tp-tunnel-interface-number")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::SrtePolicy()
    :
    policy_name{YType::str, "policy-name"}
{

    yang_name = "srte-policy"; yang_parent_name = "preferred-path"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::~SrtePolicy()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::has_data() const
{
    return policy_name.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srte-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::LocalSignalling()
    :
    pw_status{YType::uint32, "pw-status"}
    	,
    status_tlv(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv>())
{
    status_tlv->parent = this;

    yang_name = "local-signalling"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::~LocalSignalling()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return pw_status.is_set
	|| (status_tlv !=  nullptr && status_tlv->has_data());
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pw_status.yfilter)
	|| (status_tlv !=  nullptr && status_tlv->has_operation());
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-signalling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_status.is_set || is_set(pw_status.yfilter)) leaf_name_data.push_back(pw_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-tlv")
    {
        if(status_tlv == nullptr)
        {
            status_tlv = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv>();
        }
        return status_tlv;
    }

    if(child_yang_name == "tlv")
    {
        for(auto const & c : tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status_tlv != nullptr)
    {
        children["status-tlv"] = status_tlv;
    }

    for (auto const & c : tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-status")
    {
        pw_status = value;
        pw_status.value_namespace = name_space;
        pw_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-status")
    {
        pw_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-tlv" || name == "tlv" || name == "pw-status")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::StatusTlv()
    :
    pw_id{YType::uint32, "pw-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"},
    description{YType::str, "description"}
{

    yang_name = "status-tlv"; yang_parent_name = "local-signalling"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::~StatusTlv()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::has_data() const
{
    return pw_id.is_set
	|| local_address.is_set
	|| remote_address.is_set
	|| description.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-id" || name == "local-address" || name == "remote-address" || name == "description")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::Tlv()
    :
    pw_id{YType::uint32, "pw-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"},
    description{YType::str, "description"}
{

    yang_name = "tlv"; yang_parent_name = "local-signalling"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::~Tlv()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::has_data() const
{
    return pw_id.is_set
	|| local_address.is_set
	|| remote_address.is_set
	|| description.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-id" || name == "local-address" || name == "remote-address" || name == "description")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::RemoteSignalling()
    :
    pw_status{YType::uint32, "pw-status"}
    	,
    status_tlv(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv>())
{
    status_tlv->parent = this;

    yang_name = "remote-signalling"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::~RemoteSignalling()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return pw_status.is_set
	|| (status_tlv !=  nullptr && status_tlv->has_data());
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::has_operation() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pw_status.yfilter)
	|| (status_tlv !=  nullptr && status_tlv->has_operation());
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-signalling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_status.is_set || is_set(pw_status.yfilter)) leaf_name_data.push_back(pw_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-tlv")
    {
        if(status_tlv == nullptr)
        {
            status_tlv = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv>();
        }
        return status_tlv;
    }

    if(child_yang_name == "tlv")
    {
        for(auto const & c : tlv)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(status_tlv != nullptr)
    {
        children["status-tlv"] = status_tlv;
    }

    for (auto const & c : tlv)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-status")
    {
        pw_status = value;
        pw_status.value_namespace = name_space;
        pw_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-status")
    {
        pw_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-tlv" || name == "tlv" || name == "pw-status")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::StatusTlv()
    :
    pw_id{YType::uint32, "pw-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"},
    description{YType::str, "description"}
{

    yang_name = "status-tlv"; yang_parent_name = "remote-signalling"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::~StatusTlv()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::has_data() const
{
    return pw_id.is_set
	|| local_address.is_set
	|| remote_address.is_set
	|| description.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-id" || name == "local-address" || name == "remote-address" || name == "description")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::Tlv()
    :
    pw_id{YType::uint32, "pw-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"},
    description{YType::str, "description"}
{

    yang_name = "tlv"; yang_parent_name = "remote-signalling"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::~Tlv()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::has_data() const
{
    return pw_id.is_set
	|| local_address.is_set
	|| remote_address.is_set
	|| description.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-id" || name == "local-address" || name == "remote-address" || name == "description")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::Statistics()
    :
    impostion_stats(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats>())
	,dispostion_stats(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats>())
	,sequence_number(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber>())
{
    impostion_stats->parent = this;
    dispostion_stats->parent = this;
    sequence_number->parent = this;

    yang_name = "statistics"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::~Statistics()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::has_data() const
{
    return (impostion_stats !=  nullptr && impostion_stats->has_data())
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_data())
	|| (sequence_number !=  nullptr && sequence_number->has_data());
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (impostion_stats !=  nullptr && impostion_stats->has_operation())
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_operation())
	|| (sequence_number !=  nullptr && sequence_number->has_operation());
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "impostion-stats")
    {
        if(impostion_stats == nullptr)
        {
            impostion_stats = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats>();
        }
        return impostion_stats;
    }

    if(child_yang_name == "dispostion-stats")
    {
        if(dispostion_stats == nullptr)
        {
            dispostion_stats = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats>();
        }
        return dispostion_stats;
    }

    if(child_yang_name == "sequence-number")
    {
        if(sequence_number == nullptr)
        {
            sequence_number = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber>();
        }
        return sequence_number;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(impostion_stats != nullptr)
    {
        children["impostion-stats"] = impostion_stats;
    }

    if(dispostion_stats != nullptr)
    {
        children["dispostion-stats"] = dispostion_stats;
    }

    if(sequence_number != nullptr)
    {
        children["sequence-number"] = sequence_number;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "impostion-stats" || name == "dispostion-stats" || name == "sequence-number")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionStats()
    :
    imposition_stat(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat>())
	,imposition_mtu_drop(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop>())
	,impostion_tail_drop(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop>())
	,l2fsbi_drop(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop>())
	,multicast(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast>())
	,broadcast(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast>())
	,known_unicast(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast>())
	,unknown_unicast(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast>())
{
    imposition_stat->parent = this;
    imposition_mtu_drop->parent = this;
    impostion_tail_drop->parent = this;
    l2fsbi_drop->parent = this;
    multicast->parent = this;
    broadcast->parent = this;
    known_unicast->parent = this;
    unknown_unicast->parent = this;

    yang_name = "impostion-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::~ImpostionStats()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::has_data() const
{
    return (imposition_stat !=  nullptr && imposition_stat->has_data())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_data())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_data())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_data());
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::has_operation() const
{
    return is_set(yfilter)
	|| (imposition_stat !=  nullptr && imposition_stat->has_operation())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_operation())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_operation())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_operation());
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "imposition-stat")
    {
        if(imposition_stat == nullptr)
        {
            imposition_stat = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat>();
        }
        return imposition_stat;
    }

    if(child_yang_name == "imposition-mtu-drop")
    {
        if(imposition_mtu_drop == nullptr)
        {
            imposition_mtu_drop = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop>();
        }
        return imposition_mtu_drop;
    }

    if(child_yang_name == "impostion-tail-drop")
    {
        if(impostion_tail_drop == nullptr)
        {
            impostion_tail_drop = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop>();
        }
        return impostion_tail_drop;
    }

    if(child_yang_name == "l2fsbi-drop")
    {
        if(l2fsbi_drop == nullptr)
        {
            l2fsbi_drop = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop>();
        }
        return l2fsbi_drop;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "unknown-unicast")
    {
        if(unknown_unicast == nullptr)
        {
            unknown_unicast = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast>();
        }
        return unknown_unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(imposition_stat != nullptr)
    {
        children["imposition-stat"] = imposition_stat;
    }

    if(imposition_mtu_drop != nullptr)
    {
        children["imposition-mtu-drop"] = imposition_mtu_drop;
    }

    if(impostion_tail_drop != nullptr)
    {
        children["impostion-tail-drop"] = impostion_tail_drop;
    }

    if(l2fsbi_drop != nullptr)
    {
        children["l2fsbi-drop"] = l2fsbi_drop;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(unknown_unicast != nullptr)
    {
        children["unknown-unicast"] = unknown_unicast;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "imposition-stat" || name == "imposition-mtu-drop" || name == "impostion-tail-drop" || name == "l2fsbi-drop" || name == "multicast" || name == "broadcast" || name == "known-unicast" || name == "unknown-unicast")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::ImpositionStat()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "imposition-stat"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::~ImpositionStat()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::ImpositionMtuDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "imposition-mtu-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::~ImpositionMtuDrop()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-mtu-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::ImpostionTailDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "impostion-tail-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::~ImpostionTailDrop()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-tail-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::L2FsbiDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "l2fsbi-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::~L2FsbiDrop()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fsbi-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::Multicast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "multicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::~Multicast()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::Broadcast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "broadcast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::~Broadcast()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::KnownUnicast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "known-unicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::UnknownUnicast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "unknown-unicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::~UnknownUnicast()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispostionStats()
    :
    disposition_stat(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat>())
	,disposition_mtu_drop(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop>())
	,disposition_tail_drop(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop>())
	,multicast_drop(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop>())
	,unicast_drop(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop>())
	,broadcast_drop(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop>())
	,received_drops(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops>())
	,dai_drop(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop>())
	,ipsg_drop(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop>())
	,disposition_oo_o_drops(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops>())
	,disposition_p2mp_stats(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats>())
	,known_unicast(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast>())
	,mac_move(std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove>())
{
    disposition_stat->parent = this;
    disposition_mtu_drop->parent = this;
    disposition_tail_drop->parent = this;
    multicast_drop->parent = this;
    unicast_drop->parent = this;
    broadcast_drop->parent = this;
    received_drops->parent = this;
    dai_drop->parent = this;
    ipsg_drop->parent = this;
    disposition_oo_o_drops->parent = this;
    disposition_p2mp_stats->parent = this;
    known_unicast->parent = this;
    mac_move->parent = this;

    yang_name = "dispostion-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::~DispostionStats()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::has_data() const
{
    return (disposition_stat !=  nullptr && disposition_stat->has_data())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_data())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_data())
	|| (multicast_drop !=  nullptr && multicast_drop->has_data())
	|| (unicast_drop !=  nullptr && unicast_drop->has_data())
	|| (broadcast_drop !=  nullptr && broadcast_drop->has_data())
	|| (received_drops !=  nullptr && received_drops->has_data())
	|| (dai_drop !=  nullptr && dai_drop->has_data())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_data())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_data())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (mac_move !=  nullptr && mac_move->has_data());
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::has_operation() const
{
    return is_set(yfilter)
	|| (disposition_stat !=  nullptr && disposition_stat->has_operation())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_operation())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_operation())
	|| (multicast_drop !=  nullptr && multicast_drop->has_operation())
	|| (unicast_drop !=  nullptr && unicast_drop->has_operation())
	|| (broadcast_drop !=  nullptr && broadcast_drop->has_operation())
	|| (received_drops !=  nullptr && received_drops->has_operation())
	|| (dai_drop !=  nullptr && dai_drop->has_operation())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_operation())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_operation())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (mac_move !=  nullptr && mac_move->has_operation());
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dispostion-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disposition-stat")
    {
        if(disposition_stat == nullptr)
        {
            disposition_stat = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat>();
        }
        return disposition_stat;
    }

    if(child_yang_name == "disposition-mtu-drop")
    {
        if(disposition_mtu_drop == nullptr)
        {
            disposition_mtu_drop = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop>();
        }
        return disposition_mtu_drop;
    }

    if(child_yang_name == "disposition-tail-drop")
    {
        if(disposition_tail_drop == nullptr)
        {
            disposition_tail_drop = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop>();
        }
        return disposition_tail_drop;
    }

    if(child_yang_name == "multicast-drop")
    {
        if(multicast_drop == nullptr)
        {
            multicast_drop = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop>();
        }
        return multicast_drop;
    }

    if(child_yang_name == "unicast-drop")
    {
        if(unicast_drop == nullptr)
        {
            unicast_drop = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop>();
        }
        return unicast_drop;
    }

    if(child_yang_name == "broadcast-drop")
    {
        if(broadcast_drop == nullptr)
        {
            broadcast_drop = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop>();
        }
        return broadcast_drop;
    }

    if(child_yang_name == "received-drops")
    {
        if(received_drops == nullptr)
        {
            received_drops = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops>();
        }
        return received_drops;
    }

    if(child_yang_name == "dai-drop")
    {
        if(dai_drop == nullptr)
        {
            dai_drop = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop>();
        }
        return dai_drop;
    }

    if(child_yang_name == "ipsg-drop")
    {
        if(ipsg_drop == nullptr)
        {
            ipsg_drop = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop>();
        }
        return ipsg_drop;
    }

    if(child_yang_name == "disposition-oo-o-drops")
    {
        if(disposition_oo_o_drops == nullptr)
        {
            disposition_oo_o_drops = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops>();
        }
        return disposition_oo_o_drops;
    }

    if(child_yang_name == "disposition-p2mp-stats")
    {
        if(disposition_p2mp_stats == nullptr)
        {
            disposition_p2mp_stats = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats>();
        }
        return disposition_p2mp_stats;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move == nullptr)
        {
            mac_move = std::make_shared<L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove>();
        }
        return mac_move;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(disposition_stat != nullptr)
    {
        children["disposition-stat"] = disposition_stat;
    }

    if(disposition_mtu_drop != nullptr)
    {
        children["disposition-mtu-drop"] = disposition_mtu_drop;
    }

    if(disposition_tail_drop != nullptr)
    {
        children["disposition-tail-drop"] = disposition_tail_drop;
    }

    if(multicast_drop != nullptr)
    {
        children["multicast-drop"] = multicast_drop;
    }

    if(unicast_drop != nullptr)
    {
        children["unicast-drop"] = unicast_drop;
    }

    if(broadcast_drop != nullptr)
    {
        children["broadcast-drop"] = broadcast_drop;
    }

    if(received_drops != nullptr)
    {
        children["received-drops"] = received_drops;
    }

    if(dai_drop != nullptr)
    {
        children["dai-drop"] = dai_drop;
    }

    if(ipsg_drop != nullptr)
    {
        children["ipsg-drop"] = ipsg_drop;
    }

    if(disposition_oo_o_drops != nullptr)
    {
        children["disposition-oo-o-drops"] = disposition_oo_o_drops;
    }

    if(disposition_p2mp_stats != nullptr)
    {
        children["disposition-p2mp-stats"] = disposition_p2mp_stats;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(mac_move != nullptr)
    {
        children["mac-move"] = mac_move;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disposition-stat" || name == "disposition-mtu-drop" || name == "disposition-tail-drop" || name == "multicast-drop" || name == "unicast-drop" || name == "broadcast-drop" || name == "received-drops" || name == "dai-drop" || name == "ipsg-drop" || name == "disposition-oo-o-drops" || name == "disposition-p2mp-stats" || name == "known-unicast" || name == "mac-move")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::DispositionStat()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-stat"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::~DispositionStat()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::DispositionMtuDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-mtu-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::~DispositionMtuDrop()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-mtu-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::DispositionTailDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-tail-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::~DispositionTailDrop()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-tail-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::MulticastDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "multicast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::~MulticastDrop()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::UnicastDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "unicast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::~UnicastDrop()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::BroadcastDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "broadcast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::~BroadcastDrop()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::ReceivedDrops()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "received-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::~ReceivedDrops()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::DaiDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "dai-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::~DaiDrop()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::IpsgDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "ipsg-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::~IpsgDrop()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsg-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::DispositionOoODrops()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-oo-o-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::~DispositionOoODrops()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-oo-o-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::DispositionP2MpStats()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-p2mp-stats"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::~DispositionP2MpStats()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-p2mp-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::KnownUnicast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "known-unicast"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::MacMove()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "mac-move"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::~MacMove()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::has_data() const
{
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::SequenceNumber()
    :
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    bypassed_inbound_sequence_packet{YType::uint64, "bypassed-inbound-sequence-packet"},
    bypassed_out_sequence_packet{YType::uint64, "bypassed-out-sequence-packet"}
{

    yang_name = "sequence-number"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::~SequenceNumber()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::has_data() const
{
    return sequence_number_sent.is_set
	|| sequence_number_expected.is_set
	|| bypassed_inbound_sequence_packet.is_set
	|| bypassed_out_sequence_packet.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| ydk::is_set(bypassed_inbound_sequence_packet.yfilter)
	|| ydk::is_set(bypassed_out_sequence_packet.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequence-number";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (bypassed_inbound_sequence_packet.is_set || is_set(bypassed_inbound_sequence_packet.yfilter)) leaf_name_data.push_back(bypassed_inbound_sequence_packet.get_name_leafdata());
    if (bypassed_out_sequence_packet.is_set || is_set(bypassed_out_sequence_packet.yfilter)) leaf_name_data.push_back(bypassed_out_sequence_packet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet = value;
        bypassed_inbound_sequence_packet.value_namespace = name_space;
        bypassed_inbound_sequence_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet = value;
        bypassed_out_sequence_packet.value_namespace = name_space;
        bypassed_out_sequence_packet.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet.yfilter = yfilter;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequence-number-sent" || name == "sequence-number-expected" || name == "bypassed-inbound-sequence-packet" || name == "bypassed-out-sequence-packet")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::P2MpPw()
    :
    local_available{YType::boolean, "local-available"},
    local_label{YType::uint32, "local-label"},
    local_ptree_type{YType::enumeration, "local-ptree-type"},
    local_tunnel_id{YType::uint32, "local-tunnel-id"},
    local_extended_tunnel_id{YType::str, "local-extended-tunnel-id"},
    local_p2mp_id{YType::uint32, "local-p2mp-id"},
    local_flags{YType::uint8, "local-flags"},
    remote_available{YType::boolean, "remote-available"},
    remote_label{YType::uint32, "remote-label"},
    remote_ptree_type{YType::enumeration, "remote-ptree-type"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"},
    remote_extended_tunnel_id{YType::str, "remote-extended-tunnel-id"},
    remote_p2mp_id{YType::uint32, "remote-p2mp-id"},
    remote_flags{YType::uint8, "remote-flags"}
{

    yang_name = "p2mp-pw"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::~P2MpPw()
{
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::has_data() const
{
    return local_available.is_set
	|| local_label.is_set
	|| local_ptree_type.is_set
	|| local_tunnel_id.is_set
	|| local_extended_tunnel_id.is_set
	|| local_p2mp_id.is_set
	|| local_flags.is_set
	|| remote_available.is_set
	|| remote_label.is_set
	|| remote_ptree_type.is_set
	|| remote_tunnel_id.is_set
	|| remote_extended_tunnel_id.is_set
	|| remote_p2mp_id.is_set
	|| remote_flags.is_set;
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_available.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(local_ptree_type.yfilter)
	|| ydk::is_set(local_tunnel_id.yfilter)
	|| ydk::is_set(local_extended_tunnel_id.yfilter)
	|| ydk::is_set(local_p2mp_id.yfilter)
	|| ydk::is_set(local_flags.yfilter)
	|| ydk::is_set(remote_available.yfilter)
	|| ydk::is_set(remote_label.yfilter)
	|| ydk::is_set(remote_ptree_type.yfilter)
	|| ydk::is_set(remote_tunnel_id.yfilter)
	|| ydk::is_set(remote_extended_tunnel_id.yfilter)
	|| ydk::is_set(remote_p2mp_id.yfilter)
	|| ydk::is_set(remote_flags.yfilter);
}

std::string L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_available.is_set || is_set(local_available.yfilter)) leaf_name_data.push_back(local_available.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (local_ptree_type.is_set || is_set(local_ptree_type.yfilter)) leaf_name_data.push_back(local_ptree_type.get_name_leafdata());
    if (local_tunnel_id.is_set || is_set(local_tunnel_id.yfilter)) leaf_name_data.push_back(local_tunnel_id.get_name_leafdata());
    if (local_extended_tunnel_id.is_set || is_set(local_extended_tunnel_id.yfilter)) leaf_name_data.push_back(local_extended_tunnel_id.get_name_leafdata());
    if (local_p2mp_id.is_set || is_set(local_p2mp_id.yfilter)) leaf_name_data.push_back(local_p2mp_id.get_name_leafdata());
    if (local_flags.is_set || is_set(local_flags.yfilter)) leaf_name_data.push_back(local_flags.get_name_leafdata());
    if (remote_available.is_set || is_set(remote_available.yfilter)) leaf_name_data.push_back(remote_available.get_name_leafdata());
    if (remote_label.is_set || is_set(remote_label.yfilter)) leaf_name_data.push_back(remote_label.get_name_leafdata());
    if (remote_ptree_type.is_set || is_set(remote_ptree_type.yfilter)) leaf_name_data.push_back(remote_ptree_type.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.yfilter)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());
    if (remote_extended_tunnel_id.is_set || is_set(remote_extended_tunnel_id.yfilter)) leaf_name_data.push_back(remote_extended_tunnel_id.get_name_leafdata());
    if (remote_p2mp_id.is_set || is_set(remote_p2mp_id.yfilter)) leaf_name_data.push_back(remote_p2mp_id.get_name_leafdata());
    if (remote_flags.is_set || is_set(remote_flags.yfilter)) leaf_name_data.push_back(remote_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-available")
    {
        local_available = value;
        local_available.value_namespace = name_space;
        local_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ptree-type")
    {
        local_ptree_type = value;
        local_ptree_type.value_namespace = name_space;
        local_ptree_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id = value;
        local_tunnel_id.value_namespace = name_space;
        local_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-extended-tunnel-id")
    {
        local_extended_tunnel_id = value;
        local_extended_tunnel_id.value_namespace = name_space;
        local_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-p2mp-id")
    {
        local_p2mp_id = value;
        local_p2mp_id.value_namespace = name_space;
        local_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-flags")
    {
        local_flags = value;
        local_flags.value_namespace = name_space;
        local_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-available")
    {
        remote_available = value;
        remote_available.value_namespace = name_space;
        remote_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-label")
    {
        remote_label = value;
        remote_label.value_namespace = name_space;
        remote_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ptree-type")
    {
        remote_ptree_type = value;
        remote_ptree_type.value_namespace = name_space;
        remote_ptree_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
        remote_tunnel_id.value_namespace = name_space;
        remote_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-extended-tunnel-id")
    {
        remote_extended_tunnel_id = value;
        remote_extended_tunnel_id.value_namespace = name_space;
        remote_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-p2mp-id")
    {
        remote_p2mp_id = value;
        remote_p2mp_id.value_namespace = name_space;
        remote_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-flags")
    {
        remote_flags = value;
        remote_flags.value_namespace = name_space;
        remote_flags.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-available")
    {
        local_available.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "local-ptree-type")
    {
        local_ptree_type.yfilter = yfilter;
    }
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "local-extended-tunnel-id")
    {
        local_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "local-p2mp-id")
    {
        local_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "local-flags")
    {
        local_flags.yfilter = yfilter;
    }
    if(value_path == "remote-available")
    {
        remote_available.yfilter = yfilter;
    }
    if(value_path == "remote-label")
    {
        remote_label.yfilter = yfilter;
    }
    if(value_path == "remote-ptree-type")
    {
        remote_ptree_type.yfilter = yfilter;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "remote-extended-tunnel-id")
    {
        remote_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "remote-p2mp-id")
    {
        remote_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "remote-flags")
    {
        remote_flags.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2MpPw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-available" || name == "local-label" || name == "local-ptree-type" || name == "local-tunnel-id" || name == "local-extended-tunnel-id" || name == "local-p2mp-id" || name == "local-flags" || name == "remote-available" || name == "remote-label" || name == "remote-ptree-type" || name == "remote-tunnel-id" || name == "remote-extended-tunnel-id" || name == "remote-p2mp-id" || name == "remote-flags")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectBrief::XconnectBrief()
    :
    main_total_up{YType::uint32, "main-total-up"},
    main_total_down{YType::uint32, "main-total-down"},
    main_total_unresolved{YType::uint32, "main-total-unresolved"},
    undefined_xc{YType::uint32, "undefined-xc"},
    memory_state{YType::enumeration, "memory-state"}
{

    yang_name = "xconnect-brief"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectBrief::~XconnectBrief()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::has_data() const
{
    for (std::size_t index=0; index<encapsulation_report_matrix.size(); index++)
    {
        if(encapsulation_report_matrix[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<encapsulation_total.size(); index++)
    {
        if(encapsulation_total[index]->has_data())
            return true;
    }
    return main_total_up.is_set
	|| main_total_down.is_set
	|| main_total_unresolved.is_set
	|| undefined_xc.is_set
	|| memory_state.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::has_operation() const
{
    for (std::size_t index=0; index<encapsulation_report_matrix.size(); index++)
    {
        if(encapsulation_report_matrix[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<encapsulation_total.size(); index++)
    {
        if(encapsulation_total[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(main_total_up.yfilter)
	|| ydk::is_set(main_total_down.yfilter)
	|| ydk::is_set(main_total_unresolved.yfilter)
	|| ydk::is_set(undefined_xc.yfilter)
	|| ydk::is_set(memory_state.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (main_total_up.is_set || is_set(main_total_up.yfilter)) leaf_name_data.push_back(main_total_up.get_name_leafdata());
    if (main_total_down.is_set || is_set(main_total_down.yfilter)) leaf_name_data.push_back(main_total_down.get_name_leafdata());
    if (main_total_unresolved.is_set || is_set(main_total_unresolved.yfilter)) leaf_name_data.push_back(main_total_unresolved.get_name_leafdata());
    if (undefined_xc.is_set || is_set(undefined_xc.yfilter)) leaf_name_data.push_back(undefined_xc.get_name_leafdata());
    if (memory_state.is_set || is_set(memory_state.yfilter)) leaf_name_data.push_back(memory_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation-report-matrix")
    {
        for(auto const & c : encapsulation_report_matrix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix>();
        c->parent = this;
        encapsulation_report_matrix.push_back(c);
        return c;
    }

    if(child_yang_name == "encapsulation-total")
    {
        for(auto const & c : encapsulation_total)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal>();
        c->parent = this;
        encapsulation_total.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : encapsulation_report_matrix)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : encapsulation_total)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "main-total-up")
    {
        main_total_up = value;
        main_total_up.value_namespace = name_space;
        main_total_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-total-down")
    {
        main_total_down = value;
        main_total_down.value_namespace = name_space;
        main_total_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-total-unresolved")
    {
        main_total_unresolved = value;
        main_total_unresolved.value_namespace = name_space;
        main_total_unresolved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "undefined-xc")
    {
        undefined_xc = value;
        undefined_xc.value_namespace = name_space;
        undefined_xc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-state")
    {
        memory_state = value;
        memory_state.value_namespace = name_space;
        memory_state.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "main-total-up")
    {
        main_total_up.yfilter = yfilter;
    }
    if(value_path == "main-total-down")
    {
        main_total_down.yfilter = yfilter;
    }
    if(value_path == "main-total-unresolved")
    {
        main_total_unresolved.yfilter = yfilter;
    }
    if(value_path == "undefined-xc")
    {
        undefined_xc.yfilter = yfilter;
    }
    if(value_path == "memory-state")
    {
        memory_state.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation-report-matrix" || name == "encapsulation-total" || name == "main-total-up" || name == "main-total-down" || name == "main-total-unresolved" || name == "undefined-xc" || name == "memory-state")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::EncapsulationReportMatrix()
{

    yang_name = "encapsulation-report-matrix"; yang_parent_name = "xconnect-brief"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::~EncapsulationReportMatrix()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::has_data() const
{
    for (std::size_t index=0; index<ac1.size(); index++)
    {
        if(ac1[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::has_operation() const
{
    for (std::size_t index=0; index<ac1.size(); index++)
    {
        if(ac1[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation-report-matrix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac1")
    {
        for(auto const & c : ac1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1>();
        c->parent = this;
        ac1.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ac1)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac1")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac1()
{

    yang_name = "ac1"; yang_parent_name = "encapsulation-report-matrix"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::~Ac1()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::has_data() const
{
    for (std::size_t index=0; index<ac2.size(); index++)
    {
        if(ac2[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::has_operation() const
{
    for (std::size_t index=0; index<ac2.size(); index++)
    {
        if(ac2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac2")
    {
        for(auto const & c : ac2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2>();
        c->parent = this;
        ac2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ac2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac2")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::Ac2()
    :
    psn_type{YType::enumeration, "psn-type"},
    ac1_encapsulation{YType::enumeration, "ac1-encapsulation"},
    ac2_encapsulation{YType::enumeration, "ac2-encapsulation"}
{

    yang_name = "ac2"; yang_parent_name = "ac1"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::~Ac2()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::has_data() const
{
    for (std::size_t index=0; index<up_count.size(); index++)
    {
        if(up_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<down_count.size(); index++)
    {
        if(down_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unresolved_count.size(); index++)
    {
        if(unresolved_count[index]->has_data())
            return true;
    }
    return psn_type.is_set
	|| ac1_encapsulation.is_set
	|| ac2_encapsulation.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::has_operation() const
{
    for (std::size_t index=0; index<up_count.size(); index++)
    {
        if(up_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<down_count.size(); index++)
    {
        if(down_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unresolved_count.size(); index++)
    {
        if(unresolved_count[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(psn_type.yfilter)
	|| ydk::is_set(ac1_encapsulation.yfilter)
	|| ydk::is_set(ac2_encapsulation.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (psn_type.is_set || is_set(psn_type.yfilter)) leaf_name_data.push_back(psn_type.get_name_leafdata());
    if (ac1_encapsulation.is_set || is_set(ac1_encapsulation.yfilter)) leaf_name_data.push_back(ac1_encapsulation.get_name_leafdata());
    if (ac2_encapsulation.is_set || is_set(ac2_encapsulation.yfilter)) leaf_name_data.push_back(ac2_encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "up-count")
    {
        for(auto const & c : up_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount>();
        c->parent = this;
        up_count.push_back(c);
        return c;
    }

    if(child_yang_name == "down-count")
    {
        for(auto const & c : down_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount>();
        c->parent = this;
        down_count.push_back(c);
        return c;
    }

    if(child_yang_name == "unresolved-count")
    {
        for(auto const & c : unresolved_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount>();
        c->parent = this;
        unresolved_count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : up_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : down_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : unresolved_count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "psn-type")
    {
        psn_type = value;
        psn_type.value_namespace = name_space;
        psn_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac1-encapsulation")
    {
        ac1_encapsulation = value;
        ac1_encapsulation.value_namespace = name_space;
        ac1_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac2-encapsulation")
    {
        ac2_encapsulation = value;
        ac2_encapsulation.value_namespace = name_space;
        ac2_encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "psn-type")
    {
        psn_type.yfilter = yfilter;
    }
    if(value_path == "ac1-encapsulation")
    {
        ac1_encapsulation.yfilter = yfilter;
    }
    if(value_path == "ac2-encapsulation")
    {
        ac2_encapsulation.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up-count" || name == "down-count" || name == "unresolved-count" || name == "psn-type" || name == "ac1-encapsulation" || name == "ac2-encapsulation")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::UpCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "up-count"; yang_parent_name = "ac2"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::~UpCount()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::DownCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "down-count"; yang_parent_name = "ac2"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::~DownCount()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::UnresolvedCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "unresolved-count"; yang_parent_name = "ac2"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::~UnresolvedCount()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unresolved-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::EncapsulationTotal()
    :
    psn_type{YType::enumeration, "psn-type"},
    ac1_encapsulation{YType::enumeration, "ac1-encapsulation"},
    ac2_encapsulation{YType::enumeration, "ac2-encapsulation"}
{

    yang_name = "encapsulation-total"; yang_parent_name = "xconnect-brief"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::~EncapsulationTotal()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::has_data() const
{
    for (std::size_t index=0; index<up_count.size(); index++)
    {
        if(up_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<down_count.size(); index++)
    {
        if(down_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unresolved_count.size(); index++)
    {
        if(unresolved_count[index]->has_data())
            return true;
    }
    return psn_type.is_set
	|| ac1_encapsulation.is_set
	|| ac2_encapsulation.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::has_operation() const
{
    for (std::size_t index=0; index<up_count.size(); index++)
    {
        if(up_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<down_count.size(); index++)
    {
        if(down_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unresolved_count.size(); index++)
    {
        if(unresolved_count[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(psn_type.yfilter)
	|| ydk::is_set(ac1_encapsulation.yfilter)
	|| ydk::is_set(ac2_encapsulation.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation-total";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (psn_type.is_set || is_set(psn_type.yfilter)) leaf_name_data.push_back(psn_type.get_name_leafdata());
    if (ac1_encapsulation.is_set || is_set(ac1_encapsulation.yfilter)) leaf_name_data.push_back(ac1_encapsulation.get_name_leafdata());
    if (ac2_encapsulation.is_set || is_set(ac2_encapsulation.yfilter)) leaf_name_data.push_back(ac2_encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "up-count")
    {
        for(auto const & c : up_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount>();
        c->parent = this;
        up_count.push_back(c);
        return c;
    }

    if(child_yang_name == "down-count")
    {
        for(auto const & c : down_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount>();
        c->parent = this;
        down_count.push_back(c);
        return c;
    }

    if(child_yang_name == "unresolved-count")
    {
        for(auto const & c : unresolved_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount>();
        c->parent = this;
        unresolved_count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : up_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : down_count)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : unresolved_count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "psn-type")
    {
        psn_type = value;
        psn_type.value_namespace = name_space;
        psn_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac1-encapsulation")
    {
        ac1_encapsulation = value;
        ac1_encapsulation.value_namespace = name_space;
        ac1_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac2-encapsulation")
    {
        ac2_encapsulation = value;
        ac2_encapsulation.value_namespace = name_space;
        ac2_encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "psn-type")
    {
        psn_type.yfilter = yfilter;
    }
    if(value_path == "ac1-encapsulation")
    {
        ac1_encapsulation.yfilter = yfilter;
    }
    if(value_path == "ac2-encapsulation")
    {
        ac2_encapsulation.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up-count" || name == "down-count" || name == "unresolved-count" || name == "psn-type" || name == "ac1-encapsulation" || name == "ac2-encapsulation")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount::UpCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "up-count"; yang_parent_name = "encapsulation-total"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount::~UpCount()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UpCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount::DownCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "down-count"; yang_parent_name = "encapsulation-total"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount::~DownCount()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::DownCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount::UnresolvedCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "unresolved-count"; yang_parent_name = "encapsulation-total"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount::~UnresolvedCount()
{
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unresolved-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Nodes::Node::XconnectBrief::EncapsulationTotal::UnresolvedCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

GenericInterfaceListV2::GenericInterfaceListV2()
    :
    nodes(std::make_shared<GenericInterfaceListV2::Nodes>())
	,standby(std::make_shared<GenericInterfaceListV2::Standby>())
	,active(std::make_shared<GenericInterfaceListV2::Active>())
{
    nodes->parent = this;
    standby->parent = this;
    active->parent = this;

    yang_name = "generic-interface-list-v2"; yang_parent_name = "Cisco-IOS-XR-l2vpn-oper"; is_top_level_class = true; has_list_ancestor = false;
}

GenericInterfaceListV2::~GenericInterfaceListV2()
{
}

bool GenericInterfaceListV2::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data())
	|| (standby !=  nullptr && standby->has_data())
	|| (active !=  nullptr && active->has_data());
}

bool GenericInterfaceListV2::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation())
	|| (standby !=  nullptr && standby->has_operation())
	|| (active !=  nullptr && active->has_operation());
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

    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<GenericInterfaceListV2::Active>();
        }
        return active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> GenericInterfaceListV2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    if(standby != nullptr)
    {
        children["standby"] = standby;
    }

    if(active != nullptr)
    {
        children["active"] = active;
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
    if(name == "nodes" || name == "standby" || name == "active")
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
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"},
    items{YType::uint32, "items"},
    is_provisioned{YType::boolean, "is-provisioned"},
    is_fib_downloaded{YType::boolean, "is-fib-downloaded"}
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
	|| interface_list_name.is_set
	|| interface_list_id.is_set
	|| items.is_set
	|| is_provisioned.is_set
	|| is_fib_downloaded.is_set;
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
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter)
	|| ydk::is_set(items.yfilter)
	|| ydk::is_set(is_provisioned.yfilter)
	|| ydk::is_set(is_fib_downloaded.yfilter);
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
    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (items.is_set || is_set(items.yfilter)) leaf_name_data.push_back(items.get_name_leafdata());
    if (is_provisioned.is_set || is_set(is_provisioned.yfilter)) leaf_name_data.push_back(is_provisioned.get_name_leafdata());
    if (is_fib_downloaded.is_set || is_set(is_fib_downloaded.yfilter)) leaf_name_data.push_back(is_fib_downloaded.get_name_leafdata());

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
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "items")
    {
        items = value;
        items.value_namespace = name_space;
        items.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-provisioned")
    {
        is_provisioned = value;
        is_provisioned.value_namespace = name_space;
        is_provisioned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded = value;
        is_fib_downloaded.value_namespace = name_space;
        is_fib_downloaded.value_namespace_prefix = name_space_prefix;
    }
}

void GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-interface-list-name")
    {
        generic_interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
    if(value_path == "items")
    {
        items.yfilter = yfilter;
    }
    if(value_path == "is-provisioned")
    {
        is_provisioned.yfilter = yfilter;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded.yfilter = yfilter;
    }
}

bool GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "generic-interface-list-name" || name == "interface-list-name" || name == "interface-list-id" || name == "items" || name == "is-provisioned" || name == "is-fib-downloaded")
        return true;
    return false;
}

GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    pending_replications{YType::uint32, "pending-replications"},
    not_supported_replications{YType::uint32, "not-supported-replications"},
    is_fib_downloaded{YType::boolean, "is-fib-downloaded"}
{

    yang_name = "interface"; yang_parent_name = "generic-interface"; is_top_level_class = false; has_list_ancestor = true;
}

GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::Interface::~Interface()
{
}

bool GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::Interface::has_data() const
{
    return interface_name.is_set
	|| pending_replications.is_set
	|| not_supported_replications.is_set
	|| is_fib_downloaded.is_set;
}

bool GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(pending_replications.yfilter)
	|| ydk::is_set(not_supported_replications.yfilter)
	|| ydk::is_set(is_fib_downloaded.yfilter);
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
    if (pending_replications.is_set || is_set(pending_replications.yfilter)) leaf_name_data.push_back(pending_replications.get_name_leafdata());
    if (not_supported_replications.is_set || is_set(not_supported_replications.yfilter)) leaf_name_data.push_back(not_supported_replications.get_name_leafdata());
    if (is_fib_downloaded.is_set || is_set(is_fib_downloaded.yfilter)) leaf_name_data.push_back(is_fib_downloaded.get_name_leafdata());

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
    if(value_path == "pending-replications")
    {
        pending_replications = value;
        pending_replications.value_namespace = name_space;
        pending_replications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-supported-replications")
    {
        not_supported_replications = value;
        not_supported_replications.value_namespace = name_space;
        not_supported_replications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded = value;
        is_fib_downloaded.value_namespace = name_space;
        is_fib_downloaded.value_namespace_prefix = name_space_prefix;
    }
}

void GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "pending-replications")
    {
        pending_replications.yfilter = yfilter;
    }
    if(value_path == "not-supported-replications")
    {
        not_supported_replications.yfilter = yfilter;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded.yfilter = yfilter;
    }
}

bool GenericInterfaceListV2::Nodes::Node::GenericInterfaces::GenericInterface::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "pending-replications" || name == "not-supported-replications" || name == "is-fib-downloaded")
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
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"},
    items{YType::uint32, "items"},
    is_provisioned{YType::boolean, "is-provisioned"},
    is_fib_downloaded{YType::boolean, "is-fib-downloaded"}
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
	|| interface_list_name.is_set
	|| interface_list_id.is_set
	|| items.is_set
	|| is_provisioned.is_set
	|| is_fib_downloaded.is_set;
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
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter)
	|| ydk::is_set(items.yfilter)
	|| ydk::is_set(is_provisioned.yfilter)
	|| ydk::is_set(is_fib_downloaded.yfilter);
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
    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (items.is_set || is_set(items.yfilter)) leaf_name_data.push_back(items.get_name_leafdata());
    if (is_provisioned.is_set || is_set(is_provisioned.yfilter)) leaf_name_data.push_back(is_provisioned.get_name_leafdata());
    if (is_fib_downloaded.is_set || is_set(is_fib_downloaded.yfilter)) leaf_name_data.push_back(is_fib_downloaded.get_name_leafdata());

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
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "items")
    {
        items = value;
        items.value_namespace = name_space;
        items.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-provisioned")
    {
        is_provisioned = value;
        is_provisioned.value_namespace = name_space;
        is_provisioned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded = value;
        is_fib_downloaded.value_namespace = name_space;
        is_fib_downloaded.value_namespace_prefix = name_space_prefix;
    }
}

void GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-interface-list-name")
    {
        generic_interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
    if(value_path == "items")
    {
        items.yfilter = yfilter;
    }
    if(value_path == "is-provisioned")
    {
        is_provisioned.yfilter = yfilter;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded.yfilter = yfilter;
    }
}

bool GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "generic-interface-list-name" || name == "interface-list-name" || name == "interface-list-id" || name == "items" || name == "is-provisioned" || name == "is-fib-downloaded")
        return true;
    return false;
}

GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    pending_replications{YType::uint32, "pending-replications"},
    not_supported_replications{YType::uint32, "not-supported-replications"},
    is_fib_downloaded{YType::boolean, "is-fib-downloaded"}
{

    yang_name = "interface"; yang_parent_name = "generic-interface"; is_top_level_class = false; has_list_ancestor = true;
}

GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::Interface::~Interface()
{
}

bool GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::Interface::has_data() const
{
    return interface_name.is_set
	|| pending_replications.is_set
	|| not_supported_replications.is_set
	|| is_fib_downloaded.is_set;
}

bool GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(pending_replications.yfilter)
	|| ydk::is_set(not_supported_replications.yfilter)
	|| ydk::is_set(is_fib_downloaded.yfilter);
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
    if (pending_replications.is_set || is_set(pending_replications.yfilter)) leaf_name_data.push_back(pending_replications.get_name_leafdata());
    if (not_supported_replications.is_set || is_set(not_supported_replications.yfilter)) leaf_name_data.push_back(not_supported_replications.get_name_leafdata());
    if (is_fib_downloaded.is_set || is_set(is_fib_downloaded.yfilter)) leaf_name_data.push_back(is_fib_downloaded.get_name_leafdata());

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
    if(value_path == "pending-replications")
    {
        pending_replications = value;
        pending_replications.value_namespace = name_space;
        pending_replications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-supported-replications")
    {
        not_supported_replications = value;
        not_supported_replications.value_namespace = name_space;
        not_supported_replications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded = value;
        is_fib_downloaded.value_namespace = name_space;
        is_fib_downloaded.value_namespace_prefix = name_space_prefix;
    }
}

void GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "pending-replications")
    {
        pending_replications.yfilter = yfilter;
    }
    if(value_path == "not-supported-replications")
    {
        not_supported_replications.yfilter = yfilter;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded.yfilter = yfilter;
    }
}

bool GenericInterfaceListV2::Standby::GenericInterfaces::GenericInterface::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "pending-replications" || name == "not-supported-replications" || name == "is-fib-downloaded")
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
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"},
    items{YType::uint32, "items"},
    is_provisioned{YType::boolean, "is-provisioned"},
    is_fib_downloaded{YType::boolean, "is-fib-downloaded"}
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
	|| interface_list_name.is_set
	|| interface_list_id.is_set
	|| items.is_set
	|| is_provisioned.is_set
	|| is_fib_downloaded.is_set;
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
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter)
	|| ydk::is_set(items.yfilter)
	|| ydk::is_set(is_provisioned.yfilter)
	|| ydk::is_set(is_fib_downloaded.yfilter);
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
    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (items.is_set || is_set(items.yfilter)) leaf_name_data.push_back(items.get_name_leafdata());
    if (is_provisioned.is_set || is_set(is_provisioned.yfilter)) leaf_name_data.push_back(is_provisioned.get_name_leafdata());
    if (is_fib_downloaded.is_set || is_set(is_fib_downloaded.yfilter)) leaf_name_data.push_back(is_fib_downloaded.get_name_leafdata());

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
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "items")
    {
        items = value;
        items.value_namespace = name_space;
        items.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-provisioned")
    {
        is_provisioned = value;
        is_provisioned.value_namespace = name_space;
        is_provisioned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded = value;
        is_fib_downloaded.value_namespace = name_space;
        is_fib_downloaded.value_namespace_prefix = name_space_prefix;
    }
}

void GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-interface-list-name")
    {
        generic_interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
    if(value_path == "items")
    {
        items.yfilter = yfilter;
    }
    if(value_path == "is-provisioned")
    {
        is_provisioned.yfilter = yfilter;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded.yfilter = yfilter;
    }
}

bool GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "generic-interface-list-name" || name == "interface-list-name" || name == "interface-list-id" || name == "items" || name == "is-provisioned" || name == "is-fib-downloaded")
        return true;
    return false;
}

GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    pending_replications{YType::uint32, "pending-replications"},
    not_supported_replications{YType::uint32, "not-supported-replications"},
    is_fib_downloaded{YType::boolean, "is-fib-downloaded"}
{

    yang_name = "interface"; yang_parent_name = "generic-interface"; is_top_level_class = false; has_list_ancestor = true;
}

GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::Interface::~Interface()
{
}

bool GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::Interface::has_data() const
{
    return interface_name.is_set
	|| pending_replications.is_set
	|| not_supported_replications.is_set
	|| is_fib_downloaded.is_set;
}

bool GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(pending_replications.yfilter)
	|| ydk::is_set(not_supported_replications.yfilter)
	|| ydk::is_set(is_fib_downloaded.yfilter);
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
    if (pending_replications.is_set || is_set(pending_replications.yfilter)) leaf_name_data.push_back(pending_replications.get_name_leafdata());
    if (not_supported_replications.is_set || is_set(not_supported_replications.yfilter)) leaf_name_data.push_back(not_supported_replications.get_name_leafdata());
    if (is_fib_downloaded.is_set || is_set(is_fib_downloaded.yfilter)) leaf_name_data.push_back(is_fib_downloaded.get_name_leafdata());

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
    if(value_path == "pending-replications")
    {
        pending_replications = value;
        pending_replications.value_namespace = name_space;
        pending_replications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-supported-replications")
    {
        not_supported_replications = value;
        not_supported_replications.value_namespace = name_space;
        not_supported_replications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded = value;
        is_fib_downloaded.value_namespace = name_space;
        is_fib_downloaded.value_namespace_prefix = name_space_prefix;
    }
}

void GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "pending-replications")
    {
        pending_replications.yfilter = yfilter;
    }
    if(value_path == "not-supported-replications")
    {
        not_supported_replications.yfilter = yfilter;
    }
    if(value_path == "is-fib-downloaded")
    {
        is_fib_downloaded.yfilter = yfilter;
    }
}

bool GenericInterfaceListV2::Active::GenericInterfaces::GenericInterface::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "pending-replications" || name == "not-supported-replications" || name == "is-fib-downloaded")
        return true;
    return false;
}


}
}

