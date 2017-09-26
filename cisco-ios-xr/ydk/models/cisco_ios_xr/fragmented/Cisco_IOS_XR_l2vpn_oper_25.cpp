
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_25.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_26.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::PseudowireIw()
    :
    internal_label{YType::uint32, "internal-label"},
    is_valid{YType::boolean, "is-valid"}
    	,
    interface_list(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-iw"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::~PseudowireIw()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::has_data() const
{
    return internal_label.is_set
	|| is_valid.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-iw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface_list != nullptr)
    {
        children["interface-list"] = interface_list;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "internal-label" || name == "is-valid")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::InterfaceList()
    :
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name{YType::str, "interface-list-name"}
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-iw"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::~InterfaceList()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_id.is_set
	|| interface_list_name.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_id.yfilter)
	|| ydk::is_set(interface_list_name.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-id" || name == "interface-list-name")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::~Interface()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_data() const
{
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::Tdm()
    :
    tdm_mode{YType::enumeration, "tdm-mode"},
    timeslot_group{YType::str, "timeslot-group"},
    timeslot_rate{YType::uint8, "timeslot-rate"}
    	,
    tdm_options(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions>())
{
    tdm_options->parent = this;

    yang_name = "tdm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::~Tdm()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::has_data() const
{
    return tdm_mode.is_set
	|| timeslot_group.is_set
	|| timeslot_rate.is_set
	|| (tdm_options !=  nullptr && tdm_options->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tdm_mode.yfilter)
	|| ydk::is_set(timeslot_group.yfilter)
	|| ydk::is_set(timeslot_rate.yfilter)
	|| (tdm_options !=  nullptr && tdm_options->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tdm_mode.is_set || is_set(tdm_mode.yfilter)) leaf_name_data.push_back(tdm_mode.get_name_leafdata());
    if (timeslot_group.is_set || is_set(timeslot_group.yfilter)) leaf_name_data.push_back(timeslot_group.get_name_leafdata());
    if (timeslot_rate.is_set || is_set(timeslot_rate.yfilter)) leaf_name_data.push_back(timeslot_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tdm-options")
    {
        if(tdm_options == nullptr)
        {
            tdm_options = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions>();
        }
        return tdm_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tdm_options != nullptr)
    {
        children["tdm-options"] = tdm_options;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tdm-mode")
    {
        tdm_mode = value;
        tdm_mode.value_namespace = name_space;
        tdm_mode.value_namespace_prefix = name_space_prefix;
    }
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
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tdm-mode")
    {
        tdm_mode.yfilter = yfilter;
    }
    if(value_path == "timeslot-group")
    {
        timeslot_group.yfilter = yfilter;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tdm-options" || name == "tdm-mode" || name == "timeslot-group" || name == "timeslot-rate")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::TdmOptions()
    :
    bit_rate{YType::uint32, "bit-rate"},
    cas{YType::uint8, "cas"},
    payload_bytes{YType::uint16, "payload-bytes"},
    rtp{YType::enumeration, "rtp"},
    rtp_header_payload_type{YType::uint8, "rtp-header-payload-type"},
    signalling_packets{YType::uint8, "signalling-packets"},
    ssrc{YType::uint32, "ssrc"},
    timestamp_clock_freq{YType::uint16, "timestamp-clock-freq"},
    timestamp_mode{YType::enumeration, "timestamp-mode"}
{

    yang_name = "tdm-options"; yang_parent_name = "tdm"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::~TdmOptions()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::has_data() const
{
    return bit_rate.is_set
	|| cas.is_set
	|| payload_bytes.is_set
	|| rtp.is_set
	|| rtp_header_payload_type.is_set
	|| signalling_packets.is_set
	|| ssrc.is_set
	|| timestamp_clock_freq.is_set
	|| timestamp_mode.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bit_rate.yfilter)
	|| ydk::is_set(cas.yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| ydk::is_set(rtp.yfilter)
	|| ydk::is_set(rtp_header_payload_type.yfilter)
	|| ydk::is_set(signalling_packets.yfilter)
	|| ydk::is_set(ssrc.yfilter)
	|| ydk::is_set(timestamp_clock_freq.yfilter)
	|| ydk::is_set(timestamp_mode.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (cas.is_set || is_set(cas.yfilter)) leaf_name_data.push_back(cas.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());
    if (rtp.is_set || is_set(rtp.yfilter)) leaf_name_data.push_back(rtp.get_name_leafdata());
    if (rtp_header_payload_type.is_set || is_set(rtp_header_payload_type.yfilter)) leaf_name_data.push_back(rtp_header_payload_type.get_name_leafdata());
    if (signalling_packets.is_set || is_set(signalling_packets.yfilter)) leaf_name_data.push_back(signalling_packets.get_name_leafdata());
    if (ssrc.is_set || is_set(ssrc.yfilter)) leaf_name_data.push_back(ssrc.get_name_leafdata());
    if (timestamp_clock_freq.is_set || is_set(timestamp_clock_freq.yfilter)) leaf_name_data.push_back(timestamp_clock_freq.get_name_leafdata());
    if (timestamp_mode.is_set || is_set(timestamp_mode.yfilter)) leaf_name_data.push_back(timestamp_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cas")
    {
        cas = value;
        cas.value_namespace = name_space;
        cas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp")
    {
        rtp = value;
        rtp.value_namespace = name_space;
        rtp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type = value;
        rtp_header_payload_type.value_namespace = name_space;
        rtp_header_payload_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets = value;
        signalling_packets.value_namespace = name_space;
        signalling_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssrc")
    {
        ssrc = value;
        ssrc.value_namespace = name_space;
        ssrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq = value;
        timestamp_clock_freq.value_namespace = name_space;
        timestamp_clock_freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode = value;
        timestamp_mode.value_namespace = name_space;
        timestamp_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
    if(value_path == "cas")
    {
        cas.yfilter = yfilter;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
    if(value_path == "rtp")
    {
        rtp.yfilter = yfilter;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type.yfilter = yfilter;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets.yfilter = yfilter;
    }
    if(value_path == "ssrc")
    {
        ssrc.yfilter = yfilter;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq.yfilter = yfilter;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bit-rate" || name == "cas" || name == "payload-bytes" || name == "rtp" || name == "rtp-header-payload-type" || name == "signalling-packets" || name == "ssrc" || name == "timestamp-clock-freq" || name == "timestamp-mode")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::Vlan()
    :
    encapsulation_type{YType::uint8, "encapsulation-type"},
    outer_tag{YType::uint16, "outer-tag"},
    simple_efp{YType::uint8, "simple-efp"},
    vlan_rewrite_tag{YType::uint16, "vlan-rewrite-tag"},
    xconnect_tags{YType::uint8, "xconnect-tags"}
{

    yang_name = "vlan"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::~Vlan()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::has_data() const
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
    return encapsulation_type.is_set
	|| outer_tag.is_set
	|| simple_efp.is_set
	|| vlan_rewrite_tag.is_set
	|| xconnect_tags.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::has_operation() const
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
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(outer_tag.yfilter)
	|| ydk::is_set(simple_efp.yfilter)
	|| ydk::is_set(vlan_rewrite_tag.yfilter)
	|| ydk::is_set(xconnect_tags.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.yfilter)) leaf_name_data.push_back(outer_tag.get_name_leafdata());
    if (simple_efp.is_set || is_set(simple_efp.yfilter)) leaf_name_data.push_back(simple_efp.get_name_leafdata());
    if (vlan_rewrite_tag.is_set || is_set(vlan_rewrite_tag.yfilter)) leaf_name_data.push_back(vlan_rewrite_tag.get_name_leafdata());
    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag>();
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
        auto c = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange>();
        c->parent = this;
        vlan_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::get_children() const
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

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "simple-efp")
    {
        simple_efp = value;
        simple_efp.value_namespace = name_space;
        simple_efp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag = value;
        vlan_rewrite_tag.value_namespace = name_space;
        vlan_rewrite_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "outer-tag")
    {
        outer_tag.yfilter = yfilter;
    }
    if(value_path == "simple-efp")
    {
        simple_efp.yfilter = yfilter;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag.yfilter = yfilter;
    }
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rewrite-tag" || name == "vlan-range" || name == "encapsulation-type" || name == "outer-tag" || name == "simple-efp" || name == "vlan-rewrite-tag" || name == "xconnect-tags")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::RewriteTag()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "rewrite-tag"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::~RewriteTag()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{

    yang_name = "vlan-range"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::~VlanRange()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower" || name == "upper")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::RemoteSignalling()
    :
    pw_status{YType::uint32, "pw-status"}
    	,
    status_tlv(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv>())
{
    status_tlv->parent = this;

    yang_name = "remote-signalling"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::~RemoteSignalling()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::has_data() const
{
    for (std::size_t index=0; index<tlv.size(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return pw_status.is_set
	|| (status_tlv !=  nullptr && status_tlv->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::has_operation() const
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

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-signalling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_status.is_set || is_set(pw_status.yfilter)) leaf_name_data.push_back(pw_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-tlv")
    {
        if(status_tlv == nullptr)
        {
            status_tlv = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv>();
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
        auto c = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv>();
        c->parent = this;
        tlv.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::get_children() const
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

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-status")
    {
        pw_status = value;
        pw_status.value_namespace = name_space;
        pw_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-status")
    {
        pw_status.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-tlv" || name == "tlv" || name == "pw-status")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::StatusTlv()
    :
    description{YType::str, "description"},
    local_address{YType::str, "local-address"},
    pw_id{YType::uint32, "pw-id"},
    remote_address{YType::str, "remote-address"}
{

    yang_name = "status-tlv"; yang_parent_name = "remote-signalling"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::~StatusTlv()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::has_data() const
{
    return description.is_set
	|| local_address.is_set
	|| pw_id.is_set
	|| remote_address.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(remote_address.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "local-address" || name == "pw-id" || name == "remote-address")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::Tlv()
    :
    description{YType::str, "description"},
    local_address{YType::str, "local-address"},
    pw_id{YType::uint32, "pw-id"},
    remote_address{YType::str, "remote-address"}
{

    yang_name = "tlv"; yang_parent_name = "remote-signalling"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::~Tlv()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::has_data() const
{
    return description.is_set
	|| local_address.is_set
	|| pw_id.is_set
	|| remote_address.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(remote_address.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "description" || name == "local-address" || name == "pw-id" || name == "remote-address")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::Statistics()
    :
    dispostion_stats(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats>())
	,impostion_stats(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats>())
	,sequence_number(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber>())
{
    dispostion_stats->parent = this;
    impostion_stats->parent = this;
    sequence_number->parent = this;

    yang_name = "statistics"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::~Statistics()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::has_data() const
{
    return (dispostion_stats !=  nullptr && dispostion_stats->has_data())
	|| (impostion_stats !=  nullptr && impostion_stats->has_data())
	|| (sequence_number !=  nullptr && sequence_number->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_operation())
	|| (impostion_stats !=  nullptr && impostion_stats->has_operation())
	|| (sequence_number !=  nullptr && sequence_number->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dispostion-stats")
    {
        if(dispostion_stats == nullptr)
        {
            dispostion_stats = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats>();
        }
        return dispostion_stats;
    }

    if(child_yang_name == "impostion-stats")
    {
        if(impostion_stats == nullptr)
        {
            impostion_stats = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats>();
        }
        return impostion_stats;
    }

    if(child_yang_name == "sequence-number")
    {
        if(sequence_number == nullptr)
        {
            sequence_number = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber>();
        }
        return sequence_number;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dispostion_stats != nullptr)
    {
        children["dispostion-stats"] = dispostion_stats;
    }

    if(impostion_stats != nullptr)
    {
        children["impostion-stats"] = impostion_stats;
    }

    if(sequence_number != nullptr)
    {
        children["sequence-number"] = sequence_number;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dispostion-stats" || name == "impostion-stats" || name == "sequence-number")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispostionStats()
    :
    broadcast_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop>())
	,dai_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop>())
	,disposition_mtu_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop>())
	,disposition_oo_o_drops(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops>())
	,disposition_p2mp_stats(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats>())
	,disposition_stat(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat>())
	,disposition_tail_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop>())
	,ipsg_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast>())
	,mac_move(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove>())
	,multicast_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop>())
	,received_drops(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops>())
	,unicast_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop>())
{
    broadcast_drop->parent = this;
    dai_drop->parent = this;
    disposition_mtu_drop->parent = this;
    disposition_oo_o_drops->parent = this;
    disposition_p2mp_stats->parent = this;
    disposition_stat->parent = this;
    disposition_tail_drop->parent = this;
    ipsg_drop->parent = this;
    known_unicast->parent = this;
    mac_move->parent = this;
    multicast_drop->parent = this;
    received_drops->parent = this;
    unicast_drop->parent = this;

    yang_name = "dispostion-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::~DispostionStats()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::has_data() const
{
    return (broadcast_drop !=  nullptr && broadcast_drop->has_data())
	|| (dai_drop !=  nullptr && dai_drop->has_data())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_data())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_data())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_data())
	|| (disposition_stat !=  nullptr && disposition_stat->has_data())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_data())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (mac_move !=  nullptr && mac_move->has_data())
	|| (multicast_drop !=  nullptr && multicast_drop->has_data())
	|| (received_drops !=  nullptr && received_drops->has_data())
	|| (unicast_drop !=  nullptr && unicast_drop->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast_drop !=  nullptr && broadcast_drop->has_operation())
	|| (dai_drop !=  nullptr && dai_drop->has_operation())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_operation())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_operation())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_operation())
	|| (disposition_stat !=  nullptr && disposition_stat->has_operation())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_operation())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (mac_move !=  nullptr && mac_move->has_operation())
	|| (multicast_drop !=  nullptr && multicast_drop->has_operation())
	|| (received_drops !=  nullptr && received_drops->has_operation())
	|| (unicast_drop !=  nullptr && unicast_drop->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dispostion-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast-drop")
    {
        if(broadcast_drop == nullptr)
        {
            broadcast_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop>();
        }
        return broadcast_drop;
    }

    if(child_yang_name == "dai-drop")
    {
        if(dai_drop == nullptr)
        {
            dai_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop>();
        }
        return dai_drop;
    }

    if(child_yang_name == "disposition-mtu-drop")
    {
        if(disposition_mtu_drop == nullptr)
        {
            disposition_mtu_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop>();
        }
        return disposition_mtu_drop;
    }

    if(child_yang_name == "disposition-oo-o-drops")
    {
        if(disposition_oo_o_drops == nullptr)
        {
            disposition_oo_o_drops = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops>();
        }
        return disposition_oo_o_drops;
    }

    if(child_yang_name == "disposition-p2mp-stats")
    {
        if(disposition_p2mp_stats == nullptr)
        {
            disposition_p2mp_stats = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats>();
        }
        return disposition_p2mp_stats;
    }

    if(child_yang_name == "disposition-stat")
    {
        if(disposition_stat == nullptr)
        {
            disposition_stat = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat>();
        }
        return disposition_stat;
    }

    if(child_yang_name == "disposition-tail-drop")
    {
        if(disposition_tail_drop == nullptr)
        {
            disposition_tail_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop>();
        }
        return disposition_tail_drop;
    }

    if(child_yang_name == "ipsg-drop")
    {
        if(ipsg_drop == nullptr)
        {
            ipsg_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop>();
        }
        return ipsg_drop;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move == nullptr)
        {
            mac_move = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove>();
        }
        return mac_move;
    }

    if(child_yang_name == "multicast-drop")
    {
        if(multicast_drop == nullptr)
        {
            multicast_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop>();
        }
        return multicast_drop;
    }

    if(child_yang_name == "received-drops")
    {
        if(received_drops == nullptr)
        {
            received_drops = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops>();
        }
        return received_drops;
    }

    if(child_yang_name == "unicast-drop")
    {
        if(unicast_drop == nullptr)
        {
            unicast_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop>();
        }
        return unicast_drop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast_drop != nullptr)
    {
        children["broadcast-drop"] = broadcast_drop;
    }

    if(dai_drop != nullptr)
    {
        children["dai-drop"] = dai_drop;
    }

    if(disposition_mtu_drop != nullptr)
    {
        children["disposition-mtu-drop"] = disposition_mtu_drop;
    }

    if(disposition_oo_o_drops != nullptr)
    {
        children["disposition-oo-o-drops"] = disposition_oo_o_drops;
    }

    if(disposition_p2mp_stats != nullptr)
    {
        children["disposition-p2mp-stats"] = disposition_p2mp_stats;
    }

    if(disposition_stat != nullptr)
    {
        children["disposition-stat"] = disposition_stat;
    }

    if(disposition_tail_drop != nullptr)
    {
        children["disposition-tail-drop"] = disposition_tail_drop;
    }

    if(ipsg_drop != nullptr)
    {
        children["ipsg-drop"] = ipsg_drop;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(mac_move != nullptr)
    {
        children["mac-move"] = mac_move;
    }

    if(multicast_drop != nullptr)
    {
        children["multicast-drop"] = multicast_drop;
    }

    if(received_drops != nullptr)
    {
        children["received-drops"] = received_drops;
    }

    if(unicast_drop != nullptr)
    {
        children["unicast-drop"] = unicast_drop;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast-drop" || name == "dai-drop" || name == "disposition-mtu-drop" || name == "disposition-oo-o-drops" || name == "disposition-p2mp-stats" || name == "disposition-stat" || name == "disposition-tail-drop" || name == "ipsg-drop" || name == "known-unicast" || name == "mac-move" || name == "multicast-drop" || name == "received-drops" || name == "unicast-drop")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::BroadcastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "broadcast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::~BroadcastDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::DaiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "dai-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::~DaiDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::DispositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-mtu-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::~DispositionMtuDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-mtu-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::DispositionOoODrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-oo-o-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::~DispositionOoODrops()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-oo-o-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::DispositionP2MpStats()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-p2mp-stats"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::~DispositionP2MpStats()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-p2mp-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2MpStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::DispositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-stat"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::~DispositionStat()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::DispositionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "disposition-tail-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::~DispositionTailDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-tail-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::IpsgDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "ipsg-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::~IpsgDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsg-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "known-unicast"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::MacMove()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "mac-move"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::~MacMove()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::MulticastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "multicast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::~MulticastDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::ReceivedDrops()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "received-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::~ReceivedDrops()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::UnicastDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "unicast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::~UnicastDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionStats()
    :
    broadcast(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast>())
	,imposition_mtu_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop>())
	,imposition_stat(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat>())
	,impostion_tail_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop>())
	,known_unicast(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast>())
	,l2fsbi_drop(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop>())
	,multicast(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast>())
	,unknown_unicast(std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast>())
{
    broadcast->parent = this;
    imposition_mtu_drop->parent = this;
    imposition_stat->parent = this;
    impostion_tail_drop->parent = this;
    known_unicast->parent = this;
    l2fsbi_drop->parent = this;
    multicast->parent = this;
    unknown_unicast->parent = this;

    yang_name = "impostion-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::~ImpostionStats()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::has_data() const
{
    return (broadcast !=  nullptr && broadcast->has_data())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_data())
	|| (imposition_stat !=  nullptr && imposition_stat->has_data())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_data());
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::has_operation() const
{
    return is_set(yfilter)
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_operation())
	|| (imposition_stat !=  nullptr && imposition_stat->has_operation())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_operation());
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "imposition-mtu-drop")
    {
        if(imposition_mtu_drop == nullptr)
        {
            imposition_mtu_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop>();
        }
        return imposition_mtu_drop;
    }

    if(child_yang_name == "imposition-stat")
    {
        if(imposition_stat == nullptr)
        {
            imposition_stat = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat>();
        }
        return imposition_stat;
    }

    if(child_yang_name == "impostion-tail-drop")
    {
        if(impostion_tail_drop == nullptr)
        {
            impostion_tail_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop>();
        }
        return impostion_tail_drop;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "l2fsbi-drop")
    {
        if(l2fsbi_drop == nullptr)
        {
            l2fsbi_drop = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop>();
        }
        return l2fsbi_drop;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "unknown-unicast")
    {
        if(unknown_unicast == nullptr)
        {
            unknown_unicast = std::make_shared<L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast>();
        }
        return unknown_unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(broadcast != nullptr)
    {
        children["broadcast"] = broadcast;
    }

    if(imposition_mtu_drop != nullptr)
    {
        children["imposition-mtu-drop"] = imposition_mtu_drop;
    }

    if(imposition_stat != nullptr)
    {
        children["imposition-stat"] = imposition_stat;
    }

    if(impostion_tail_drop != nullptr)
    {
        children["impostion-tail-drop"] = impostion_tail_drop;
    }

    if(known_unicast != nullptr)
    {
        children["known-unicast"] = known_unicast;
    }

    if(l2fsbi_drop != nullptr)
    {
        children["l2fsbi-drop"] = l2fsbi_drop;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(unknown_unicast != nullptr)
    {
        children["unknown-unicast"] = unknown_unicast;
    }

    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "imposition-mtu-drop" || name == "imposition-stat" || name == "impostion-tail-drop" || name == "known-unicast" || name == "l2fsbi-drop" || name == "multicast" || name == "unknown-unicast")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::Broadcast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "broadcast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::~Broadcast()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::ImpositionMtuDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "imposition-mtu-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::~ImpositionMtuDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-mtu-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::ImpositionStat()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "imposition-stat"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::~ImpositionStat()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::ImpostionTailDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "impostion-tail-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::~ImpostionTailDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-tail-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::KnownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "known-unicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::L2FsbiDrop()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "l2fsbi-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::~L2FsbiDrop()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fsbi-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2FsbiDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::Multicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "multicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::~Multicast()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::UnknownUnicast()
    :
    byte_counts{YType::uint64, "byte-counts"},
    packet_counts{YType::uint64, "packet-counts"}
{

    yang_name = "unknown-unicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::~UnknownUnicast()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::has_data() const
{
    return byte_counts.is_set
	|| packet_counts.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_counts.yfilter)
	|| ydk::is_set(packet_counts.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());
    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-counts" || name == "packet-counts")
        return true;
    return false;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::SequenceNumber()
    :
    bypassed_inbound_sequence_packet{YType::uint64, "bypassed-inbound-sequence-packet"},
    bypassed_out_sequence_packet{YType::uint64, "bypassed-out-sequence-packet"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    sequence_number_sent{YType::uint32, "sequence-number-sent"}
{

    yang_name = "sequence-number"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::~SequenceNumber()
{
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::has_data() const
{
    return bypassed_inbound_sequence_packet.is_set
	|| bypassed_out_sequence_packet.is_set
	|| sequence_number_expected.is_set
	|| sequence_number_sent.is_set;
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bypassed_inbound_sequence_packet.yfilter)
	|| ydk::is_set(bypassed_out_sequence_packet.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter);
}

std::string L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequence-number";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypassed_inbound_sequence_packet.is_set || is_set(bypassed_inbound_sequence_packet.yfilter)) leaf_name_data.push_back(bypassed_inbound_sequence_packet.get_name_leafdata());
    if (bypassed_out_sequence_packet.is_set || is_set(bypassed_out_sequence_packet.yfilter)) leaf_name_data.push_back(bypassed_out_sequence_packet.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
}

void L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet.yfilter = yfilter;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bypassed-inbound-sequence-packet" || name == "bypassed-out-sequence-packet" || name == "sequence-number-expected" || name == "sequence-number-sent")
        return true;
    return false;
}

L2Vpnv2::Standby::G8032::G8032()
    :
    g8032_rings(std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings>())
{
    g8032_rings->parent = this;

    yang_name = "g8032"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::G8032::~G8032()
{
}

bool L2Vpnv2::Standby::G8032::has_data() const
{
    return (g8032_rings !=  nullptr && g8032_rings->has_data());
}

bool L2Vpnv2::Standby::G8032::has_operation() const
{
    return is_set(yfilter)
	|| (g8032_rings !=  nullptr && g8032_rings->has_operation());
}

std::string L2Vpnv2::Standby::G8032::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::G8032::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g8032";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::G8032::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::G8032::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g8032-rings")
    {
        if(g8032_rings == nullptr)
        {
            g8032_rings = std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings>();
        }
        return g8032_rings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::G8032::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(g8032_rings != nullptr)
    {
        children["g8032-rings"] = g8032_rings;
    }

    return children;
}

void L2Vpnv2::Standby::G8032::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::G8032::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::G8032::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g8032-rings")
        return true;
    return false;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Rings()
{

    yang_name = "g8032-rings"; yang_parent_name = "g8032"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::G8032::G8032Rings::~G8032Rings()
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::has_data() const
{
    for (std::size_t index=0; index<g8032_ring.size(); index++)
    {
        if(g8032_ring[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::G8032::G8032Rings::has_operation() const
{
    for (std::size_t index=0; index<g8032_ring.size(); index++)
    {
        if(g8032_ring[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::G8032::G8032Rings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/g8032/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::G8032::G8032Rings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g8032-rings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::G8032::G8032Rings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::G8032::G8032Rings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g8032-ring")
    {
        for(auto const & c : g8032_ring)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring>();
        c->parent = this;
        g8032_ring.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::G8032::G8032Rings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : g8032_ring)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::G8032::G8032Rings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::G8032::G8032Rings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g8032-ring")
        return true;
    return false;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032Ring()
    :
    ring_name{YType::str, "ring-name"}
    	,
    g8032_ring_detail(std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail>())
	,g8032_ring_instance_details(std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails>())
	,g8032_ring_instance_summaries(std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries>())
	,g8032_ring_summary(std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingSummary>())
{
    g8032_ring_detail->parent = this;
    g8032_ring_instance_details->parent = this;
    g8032_ring_instance_summaries->parent = this;
    g8032_ring_summary->parent = this;

    yang_name = "g8032-ring"; yang_parent_name = "g8032-rings"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::~G8032Ring()
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::has_data() const
{
    return ring_name.is_set
	|| (g8032_ring_detail !=  nullptr && g8032_ring_detail->has_data())
	|| (g8032_ring_instance_details !=  nullptr && g8032_ring_instance_details->has_data())
	|| (g8032_ring_instance_summaries !=  nullptr && g8032_ring_instance_summaries->has_data())
	|| (g8032_ring_summary !=  nullptr && g8032_ring_summary->has_data());
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ring_name.yfilter)
	|| (g8032_ring_detail !=  nullptr && g8032_ring_detail->has_operation())
	|| (g8032_ring_instance_details !=  nullptr && g8032_ring_instance_details->has_operation())
	|| (g8032_ring_instance_summaries !=  nullptr && g8032_ring_instance_summaries->has_operation())
	|| (g8032_ring_summary !=  nullptr && g8032_ring_summary->has_operation());
}

std::string L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/g8032/g8032-rings/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g8032-ring" <<"[ring-name='" <<ring_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ring_name.is_set || is_set(ring_name.yfilter)) leaf_name_data.push_back(ring_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g8032-ring-detail")
    {
        if(g8032_ring_detail == nullptr)
        {
            g8032_ring_detail = std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail>();
        }
        return g8032_ring_detail;
    }

    if(child_yang_name == "g8032-ring-instance-details")
    {
        if(g8032_ring_instance_details == nullptr)
        {
            g8032_ring_instance_details = std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails>();
        }
        return g8032_ring_instance_details;
    }

    if(child_yang_name == "g8032-ring-instance-summaries")
    {
        if(g8032_ring_instance_summaries == nullptr)
        {
            g8032_ring_instance_summaries = std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries>();
        }
        return g8032_ring_instance_summaries;
    }

    if(child_yang_name == "g8032-ring-summary")
    {
        if(g8032_ring_summary == nullptr)
        {
            g8032_ring_summary = std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingSummary>();
        }
        return g8032_ring_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(g8032_ring_detail != nullptr)
    {
        children["g8032-ring-detail"] = g8032_ring_detail;
    }

    if(g8032_ring_instance_details != nullptr)
    {
        children["g8032-ring-instance-details"] = g8032_ring_instance_details;
    }

    if(g8032_ring_instance_summaries != nullptr)
    {
        children["g8032-ring-instance-summaries"] = g8032_ring_instance_summaries;
    }

    if(g8032_ring_summary != nullptr)
    {
        children["g8032-ring-summary"] = g8032_ring_summary;
    }

    return children;
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ring-name")
    {
        ring_name = value;
        ring_name.value_namespace = name_space;
        ring_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ring-name")
    {
        ring_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g8032-ring-detail" || name == "g8032-ring-instance-details" || name == "g8032-ring-instance-summaries" || name == "g8032-ring-summary" || name == "ring-name")
        return true;
    return false;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::G8032RingDetail()
    :
    is_open_ring{YType::boolean, "is-open-ring"},
    is_provider_bridge{YType::boolean, "is-provider-bridge"},
    monitor0{YType::str, "monitor0"},
    monitor1{YType::str, "monitor1"},
    port0{YType::str, "port0"},
    port1{YType::str, "port1"},
    ring_name{YType::str, "ring-name"},
    tcn_propagation{YType::boolean, "tcn-propagation"}
{

    yang_name = "g8032-ring-detail"; yang_parent_name = "g8032-ring"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::~G8032RingDetail()
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::has_data() const
{
    for (std::size_t index=0; index<excluded_vlan_id.size(); index++)
    {
        if(excluded_vlan_id[index]->has_data())
            return true;
    }
    return is_open_ring.is_set
	|| is_provider_bridge.is_set
	|| monitor0.is_set
	|| monitor1.is_set
	|| port0.is_set
	|| port1.is_set
	|| ring_name.is_set
	|| tcn_propagation.is_set;
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::has_operation() const
{
    for (std::size_t index=0; index<excluded_vlan_id.size(); index++)
    {
        if(excluded_vlan_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_open_ring.yfilter)
	|| ydk::is_set(is_provider_bridge.yfilter)
	|| ydk::is_set(monitor0.yfilter)
	|| ydk::is_set(monitor1.yfilter)
	|| ydk::is_set(port0.yfilter)
	|| ydk::is_set(port1.yfilter)
	|| ydk::is_set(ring_name.yfilter)
	|| ydk::is_set(tcn_propagation.yfilter);
}

std::string L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g8032-ring-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_open_ring.is_set || is_set(is_open_ring.yfilter)) leaf_name_data.push_back(is_open_ring.get_name_leafdata());
    if (is_provider_bridge.is_set || is_set(is_provider_bridge.yfilter)) leaf_name_data.push_back(is_provider_bridge.get_name_leafdata());
    if (monitor0.is_set || is_set(monitor0.yfilter)) leaf_name_data.push_back(monitor0.get_name_leafdata());
    if (monitor1.is_set || is_set(monitor1.yfilter)) leaf_name_data.push_back(monitor1.get_name_leafdata());
    if (port0.is_set || is_set(port0.yfilter)) leaf_name_data.push_back(port0.get_name_leafdata());
    if (port1.is_set || is_set(port1.yfilter)) leaf_name_data.push_back(port1.get_name_leafdata());
    if (ring_name.is_set || is_set(ring_name.yfilter)) leaf_name_data.push_back(ring_name.get_name_leafdata());
    if (tcn_propagation.is_set || is_set(tcn_propagation.yfilter)) leaf_name_data.push_back(tcn_propagation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "excluded-vlan-id")
    {
        for(auto const & c : excluded_vlan_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::ExcludedVlanId>();
        c->parent = this;
        excluded_vlan_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : excluded_vlan_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-open-ring")
    {
        is_open_ring = value;
        is_open_ring.value_namespace = name_space;
        is_open_ring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-provider-bridge")
    {
        is_provider_bridge = value;
        is_provider_bridge.value_namespace = name_space;
        is_provider_bridge.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "tcn-propagation")
    {
        tcn_propagation = value;
        tcn_propagation.value_namespace = name_space;
        tcn_propagation.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-open-ring")
    {
        is_open_ring.yfilter = yfilter;
    }
    if(value_path == "is-provider-bridge")
    {
        is_provider_bridge.yfilter = yfilter;
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
    if(value_path == "tcn-propagation")
    {
        tcn_propagation.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "excluded-vlan-id" || name == "is-open-ring" || name == "is-provider-bridge" || name == "monitor0" || name == "monitor1" || name == "port0" || name == "port1" || name == "ring-name" || name == "tcn-propagation")
        return true;
    return false;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::ExcludedVlanId::ExcludedVlanId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "excluded-vlan-id"; yang_parent_name = "g8032-ring-detail"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::ExcludedVlanId::~ExcludedVlanId()
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::ExcludedVlanId::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::ExcludedVlanId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::ExcludedVlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "excluded-vlan-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::ExcludedVlanId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::ExcludedVlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::ExcludedVlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::ExcludedVlanId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::ExcludedVlanId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingDetail::ExcludedVlanId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetails()
{

    yang_name = "g8032-ring-instance-details"; yang_parent_name = "g8032-ring"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::~G8032RingInstanceDetails()
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::has_data() const
{
    for (std::size_t index=0; index<g8032_ring_instance_detail.size(); index++)
    {
        if(g8032_ring_instance_detail[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::has_operation() const
{
    for (std::size_t index=0; index<g8032_ring_instance_detail.size(); index++)
    {
        if(g8032_ring_instance_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g8032-ring-instance-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g8032-ring-instance-detail")
    {
        for(auto const & c : g8032_ring_instance_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail>();
        c->parent = this;
        g8032_ring_instance_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : g8032_ring_instance_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g8032-ring-instance-detail")
        return true;
    return false;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::G8032RingInstanceDetail()
    :
    instance{YType::int32, "instance"},
    aps_channel_level{YType::uint32, "aps-channel-level"},
    aps_port0{YType::str, "aps-port0"},
    aps_port1{YType::str, "aps-port1"},
    config_state{YType::boolean, "config-state"},
    ring_description{YType::str, "ring-description"},
    ring_instance{YType::uint32, "ring-instance"},
    ring_profile{YType::str, "ring-profile"},
    rpl{YType::enumeration, "rpl"},
    unresolved_reason{YType::enumeration, "unresolved-reason"}
{

    yang_name = "g8032-ring-instance-detail"; yang_parent_name = "g8032-ring-instance-details"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::~G8032RingInstanceDetail()
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::has_data() const
{
    for (std::size_t index=0; index<included_vlan_id.size(); index++)
    {
        if(included_vlan_id[index]->has_data())
            return true;
    }
    return instance.is_set
	|| aps_channel_level.is_set
	|| aps_port0.is_set
	|| aps_port1.is_set
	|| config_state.is_set
	|| ring_description.is_set
	|| ring_instance.is_set
	|| ring_profile.is_set
	|| rpl.is_set
	|| unresolved_reason.is_set;
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::has_operation() const
{
    for (std::size_t index=0; index<included_vlan_id.size(); index++)
    {
        if(included_vlan_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(aps_channel_level.yfilter)
	|| ydk::is_set(aps_port0.yfilter)
	|| ydk::is_set(aps_port1.yfilter)
	|| ydk::is_set(config_state.yfilter)
	|| ydk::is_set(ring_description.yfilter)
	|| ydk::is_set(ring_instance.yfilter)
	|| ydk::is_set(ring_profile.yfilter)
	|| ydk::is_set(rpl.yfilter)
	|| ydk::is_set(unresolved_reason.yfilter);
}

std::string L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g8032-ring-instance-detail" <<"[instance='" <<instance <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (aps_channel_level.is_set || is_set(aps_channel_level.yfilter)) leaf_name_data.push_back(aps_channel_level.get_name_leafdata());
    if (aps_port0.is_set || is_set(aps_port0.yfilter)) leaf_name_data.push_back(aps_port0.get_name_leafdata());
    if (aps_port1.is_set || is_set(aps_port1.yfilter)) leaf_name_data.push_back(aps_port1.get_name_leafdata());
    if (config_state.is_set || is_set(config_state.yfilter)) leaf_name_data.push_back(config_state.get_name_leafdata());
    if (ring_description.is_set || is_set(ring_description.yfilter)) leaf_name_data.push_back(ring_description.get_name_leafdata());
    if (ring_instance.is_set || is_set(ring_instance.yfilter)) leaf_name_data.push_back(ring_instance.get_name_leafdata());
    if (ring_profile.is_set || is_set(ring_profile.yfilter)) leaf_name_data.push_back(ring_profile.get_name_leafdata());
    if (rpl.is_set || is_set(rpl.yfilter)) leaf_name_data.push_back(rpl.get_name_leafdata());
    if (unresolved_reason.is_set || is_set(unresolved_reason.yfilter)) leaf_name_data.push_back(unresolved_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "included-vlan-id")
    {
        for(auto const & c : included_vlan_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::IncludedVlanId>();
        c->parent = this;
        included_vlan_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : included_vlan_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "config-state")
    {
        config_state = value;
        config_state.value_namespace = name_space;
        config_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ring-description")
    {
        ring_description = value;
        ring_description.value_namespace = name_space;
        ring_description.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unresolved-reason")
    {
        unresolved_reason = value;
        unresolved_reason.value_namespace = name_space;
        unresolved_reason.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "config-state")
    {
        config_state.yfilter = yfilter;
    }
    if(value_path == "ring-description")
    {
        ring_description.yfilter = yfilter;
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
    if(value_path == "unresolved-reason")
    {
        unresolved_reason.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "included-vlan-id" || name == "instance" || name == "aps-channel-level" || name == "aps-port0" || name == "aps-port1" || name == "config-state" || name == "ring-description" || name == "ring-instance" || name == "ring-profile" || name == "rpl" || name == "unresolved-reason")
        return true;
    return false;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::IncludedVlanId::IncludedVlanId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "included-vlan-id"; yang_parent_name = "g8032-ring-instance-detail"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::IncludedVlanId::~IncludedVlanId()
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::IncludedVlanId::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::IncludedVlanId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::IncludedVlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "included-vlan-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::IncludedVlanId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::IncludedVlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::IncludedVlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::IncludedVlanId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::IncludedVlanId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceDetails::G8032RingInstanceDetail::IncludedVlanId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummaries()
{

    yang_name = "g8032-ring-instance-summaries"; yang_parent_name = "g8032-ring"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::~G8032RingInstanceSummaries()
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::has_data() const
{
    for (std::size_t index=0; index<g8032_ring_instance_summary.size(); index++)
    {
        if(g8032_ring_instance_summary[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::has_operation() const
{
    for (std::size_t index=0; index<g8032_ring_instance_summary.size(); index++)
    {
        if(g8032_ring_instance_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g8032-ring-instance-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g8032-ring-instance-summary")
    {
        for(auto const & c : g8032_ring_instance_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary>();
        c->parent = this;
        g8032_ring_instance_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : g8032_ring_instance_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g8032-ring-instance-summary")
        return true;
    return false;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::G8032RingInstanceSummary()
    :
    instance{YType::int32, "instance"},
    aps_port0{YType::str, "aps-port0"},
    aps_port1{YType::str, "aps-port1"},
    config_state{YType::boolean, "config-state"},
    ring_instance{YType::uint32, "ring-instance"}
{

    yang_name = "g8032-ring-instance-summary"; yang_parent_name = "g8032-ring-instance-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::~G8032RingInstanceSummary()
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::has_data() const
{
    for (std::size_t index=0; index<included_vlan_id.size(); index++)
    {
        if(included_vlan_id[index]->has_data())
            return true;
    }
    return instance.is_set
	|| aps_port0.is_set
	|| aps_port1.is_set
	|| config_state.is_set
	|| ring_instance.is_set;
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::has_operation() const
{
    for (std::size_t index=0; index<included_vlan_id.size(); index++)
    {
        if(included_vlan_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(aps_port0.yfilter)
	|| ydk::is_set(aps_port1.yfilter)
	|| ydk::is_set(config_state.yfilter)
	|| ydk::is_set(ring_instance.yfilter);
}

std::string L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g8032-ring-instance-summary" <<"[instance='" <<instance <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (aps_port0.is_set || is_set(aps_port0.yfilter)) leaf_name_data.push_back(aps_port0.get_name_leafdata());
    if (aps_port1.is_set || is_set(aps_port1.yfilter)) leaf_name_data.push_back(aps_port1.get_name_leafdata());
    if (config_state.is_set || is_set(config_state.yfilter)) leaf_name_data.push_back(config_state.get_name_leafdata());
    if (ring_instance.is_set || is_set(ring_instance.yfilter)) leaf_name_data.push_back(ring_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "included-vlan-id")
    {
        for(auto const & c : included_vlan_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::IncludedVlanId>();
        c->parent = this;
        included_vlan_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : included_vlan_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "config-state")
    {
        config_state = value;
        config_state.value_namespace = name_space;
        config_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ring-instance")
    {
        ring_instance = value;
        ring_instance.value_namespace = name_space;
        ring_instance.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "config-state")
    {
        config_state.yfilter = yfilter;
    }
    if(value_path == "ring-instance")
    {
        ring_instance.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "included-vlan-id" || name == "instance" || name == "aps-port0" || name == "aps-port1" || name == "config-state" || name == "ring-instance")
        return true;
    return false;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::IncludedVlanId::IncludedVlanId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "included-vlan-id"; yang_parent_name = "g8032-ring-instance-summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::IncludedVlanId::~IncludedVlanId()
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::IncludedVlanId::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::IncludedVlanId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::IncludedVlanId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "included-vlan-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::IncludedVlanId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::IncludedVlanId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::IncludedVlanId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::IncludedVlanId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::IncludedVlanId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingInstanceSummaries::G8032RingInstanceSummary::IncludedVlanId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingSummary::G8032RingSummary()
    :
    port0{YType::str, "port0"},
    port1{YType::str, "port1"},
    ring_name{YType::str, "ring-name"}
{

    yang_name = "g8032-ring-summary"; yang_parent_name = "g8032-ring"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingSummary::~G8032RingSummary()
{
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingSummary::has_data() const
{
    return port0.is_set
	|| port1.is_set
	|| ring_name.is_set;
}

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port0.yfilter)
	|| ydk::is_set(port1.yfilter)
	|| ydk::is_set(ring_name.yfilter);
}

std::string L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g8032-ring-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port0.is_set || is_set(port0.yfilter)) leaf_name_data.push_back(port0.get_name_leafdata());
    if (port1.is_set || is_set(port1.yfilter)) leaf_name_data.push_back(port1.get_name_leafdata());
    if (ring_name.is_set || is_set(ring_name.yfilter)) leaf_name_data.push_back(ring_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingSummary::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2Vpnv2::Standby::G8032::G8032Rings::G8032Ring::G8032RingSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port0" || name == "port1" || name == "ring-name")
        return true;
    return false;
}

L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetails()
{

    yang_name = "generic-interface-list-details"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::GenericInterfaceListDetails::~GenericInterfaceListDetails()
{
}

bool L2Vpnv2::Standby::GenericInterfaceListDetails::has_data() const
{
    for (std::size_t index=0; index<generic_interface_list_detail.size(); index++)
    {
        if(generic_interface_list_detail[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::GenericInterfaceListDetails::has_operation() const
{
    for (std::size_t index=0; index<generic_interface_list_detail.size(); index++)
    {
        if(generic_interface_list_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::GenericInterfaceListDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::GenericInterfaceListDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-interface-list-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::GenericInterfaceListDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::GenericInterfaceListDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "generic-interface-list-detail")
    {
        for(auto const & c : generic_interface_list_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail>();
        c->parent = this;
        generic_interface_list_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::GenericInterfaceListDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : generic_interface_list_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::GenericInterfaceListDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::GenericInterfaceListDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::GenericInterfaceListDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-interface-list-detail")
        return true;
    return false;
}

L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::GenericInterfaceListDetail()
    :
    interface_list_name{YType::str, "interface-list-name"},
    is_provisioned{YType::boolean, "is-provisioned"},
    items{YType::uint32, "items"},
    psedowire_ether_items{YType::uint32, "psedowire-ether-items"},
    pseudowire_iw_items{YType::uint32, "pseudowire-iw-items"}
    	,
    summary(std::make_shared<L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary>())
{
    summary->parent = this;

    yang_name = "generic-interface-list-detail"; yang_parent_name = "generic-interface-list-details"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::~GenericInterfaceListDetail()
{
}

bool L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pseudowire_ether_range.size(); index++)
    {
        if(pseudowire_ether_range[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pseudowire_iw_range.size(); index++)
    {
        if(pseudowire_iw_range[index]->has_data())
            return true;
    }
    return interface_list_name.is_set
	|| is_provisioned.is_set
	|| items.is_set
	|| psedowire_ether_items.is_set
	|| pseudowire_iw_items.is_set
	|| (summary !=  nullptr && summary->has_data());
}

bool L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pseudowire_ether_range.size(); index++)
    {
        if(pseudowire_ether_range[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pseudowire_iw_range.size(); index++)
    {
        if(pseudowire_iw_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(is_provisioned.yfilter)
	|| ydk::is_set(items.yfilter)
	|| ydk::is_set(psedowire_ether_items.yfilter)
	|| ydk::is_set(pseudowire_iw_items.yfilter)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/generic-interface-list-details/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-interface-list-detail" <<"[interface-list-name='" <<interface_list_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (is_provisioned.is_set || is_set(is_provisioned.yfilter)) leaf_name_data.push_back(is_provisioned.get_name_leafdata());
    if (items.is_set || is_set(items.yfilter)) leaf_name_data.push_back(items.get_name_leafdata());
    if (psedowire_ether_items.is_set || is_set(psedowire_ether_items.yfilter)) leaf_name_data.push_back(psedowire_ether_items.get_name_leafdata());
    if (pseudowire_iw_items.is_set || is_set(pseudowire_iw_items.yfilter)) leaf_name_data.push_back(pseudowire_iw_items.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    if(child_yang_name == "pseudowire-ether-range")
    {
        for(auto const & c : pseudowire_ether_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireEtherRange>();
        c->parent = this;
        pseudowire_ether_range.push_back(c);
        return c;
    }

    if(child_yang_name == "pseudowire-iw-range")
    {
        for(auto const & c : pseudowire_iw_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireIwRange>();
        c->parent = this;
        pseudowire_iw_range.push_back(c);
        return c;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pseudowire_ether_range)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pseudowire_iw_range)
    {
        children[c->get_segment_path()] = c;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "psedowire-ether-items")
    {
        psedowire_ether_items = value;
        psedowire_ether_items.value_namespace = name_space;
        psedowire_ether_items.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-iw-items")
    {
        pseudowire_iw_items = value;
        pseudowire_iw_items.value_namespace = name_space;
        pseudowire_iw_items.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "is-provisioned")
    {
        is_provisioned.yfilter = yfilter;
    }
    if(value_path == "items")
    {
        items.yfilter = yfilter;
    }
    if(value_path == "psedowire-ether-items")
    {
        psedowire_ether_items.yfilter = yfilter;
    }
    if(value_path == "pseudowire-iw-items")
    {
        pseudowire_iw_items.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "pseudowire-ether-range" || name == "pseudowire-iw-range" || name == "summary" || name == "interface-list-name" || name == "is-provisioned" || name == "items" || name == "psedowire-ether-items" || name == "pseudowire-iw-items")
        return true;
    return false;
}

L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    is_fib_downloaded{YType::boolean, "is-fib-downloaded"},
    not_supported_replications{YType::uint32, "not-supported-replications"},
    pending_replications{YType::uint32, "pending-replications"}
{

    yang_name = "interface"; yang_parent_name = "generic-interface-list-detail"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Interface::~Interface()
{
}

bool L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Interface::has_data() const
{
    return interface_name.is_set
	|| is_fib_downloaded.is_set
	|| not_supported_replications.is_set
	|| pending_replications.is_set;
}

bool L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_fib_downloaded.yfilter)
	|| ydk::is_set(not_supported_replications.yfilter)
	|| ydk::is_set(pending_replications.yfilter);
}

std::string L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_fib_downloaded.is_set || is_set(is_fib_downloaded.yfilter)) leaf_name_data.push_back(is_fib_downloaded.get_name_leafdata());
    if (not_supported_replications.is_set || is_set(not_supported_replications.yfilter)) leaf_name_data.push_back(not_supported_replications.get_name_leafdata());
    if (pending_replications.is_set || is_set(pending_replications.yfilter)) leaf_name_data.push_back(pending_replications.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "is-fib-downloaded" || name == "not-supported-replications" || name == "pending-replications")
        return true;
    return false;
}

L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireEtherRange::PseudowireEtherRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{

    yang_name = "pseudowire-ether-range"; yang_parent_name = "generic-interface-list-detail"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireEtherRange::~PseudowireEtherRange()
{
}

bool L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireEtherRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireEtherRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter);
}

std::string L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireEtherRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ether-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireEtherRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireEtherRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireEtherRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireEtherRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireEtherRange::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireEtherRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower" || name == "upper")
        return true;
    return false;
}

L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireIwRange::PseudowireIwRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{

    yang_name = "pseudowire-iw-range"; yang_parent_name = "generic-interface-list-detail"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireIwRange::~PseudowireIwRange()
{
}

bool L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireIwRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireIwRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter);
}

std::string L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireIwRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-iw-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireIwRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireIwRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireIwRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireIwRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireIwRange::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::PseudowireIwRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower" || name == "upper")
        return true;
    return false;
}

L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Summary()
    :
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name_xr{YType::str, "interface-list-name-xr"},
    items{YType::uint32, "items"},
    number_of_interfaces{YType::uint32, "number-of-interfaces"}
{

    yang_name = "summary"; yang_parent_name = "generic-interface-list-detail"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::~Summary()
{
}

bool L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_id.is_set
	|| interface_list_name_xr.is_set
	|| items.is_set
	|| number_of_interfaces.is_set;
}

bool L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_id.yfilter)
	|| ydk::is_set(interface_list_name_xr.yfilter)
	|| ydk::is_set(items.yfilter)
	|| ydk::is_set(number_of_interfaces.yfilter);
}

std::string L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name_xr.is_set || is_set(interface_list_name_xr.yfilter)) leaf_name_data.push_back(interface_list_name_xr.get_name_leafdata());
    if (items.is_set || is_set(items.yfilter)) leaf_name_data.push_back(items.get_name_leafdata());
    if (number_of_interfaces.is_set || is_set(number_of_interfaces.yfilter)) leaf_name_data.push_back(number_of_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-name-xr")
    {
        interface_list_name_xr = value;
        interface_list_name_xr.value_namespace = name_space;
        interface_list_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "items")
    {
        items = value;
        items.value_namespace = name_space;
        items.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-interfaces")
    {
        number_of_interfaces = value;
        number_of_interfaces.value_namespace = name_space;
        number_of_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
    if(value_path == "interface-list-name-xr")
    {
        interface_list_name_xr.yfilter = yfilter;
    }
    if(value_path == "items")
    {
        items.yfilter = yfilter;
    }
    if(value_path == "number-of-interfaces")
    {
        number_of_interfaces.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-id" || name == "interface-list-name-xr" || name == "items" || name == "number-of-interfaces")
        return true;
    return false;
}

L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    is_fib_downloaded{YType::boolean, "is-fib-downloaded"},
    not_supported_replications{YType::uint32, "not-supported-replications"},
    pending_replications{YType::uint32, "pending-replications"}
{

    yang_name = "interface"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Interface::~Interface()
{
}

bool L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Interface::has_data() const
{
    return interface_name.is_set
	|| is_fib_downloaded.is_set
	|| not_supported_replications.is_set
	|| pending_replications.is_set;
}

bool L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_fib_downloaded.yfilter)
	|| ydk::is_set(not_supported_replications.yfilter)
	|| ydk::is_set(pending_replications.yfilter);
}

std::string L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_fib_downloaded.is_set || is_set(is_fib_downloaded.yfilter)) leaf_name_data.push_back(is_fib_downloaded.get_name_leafdata());
    if (not_supported_replications.is_set || is_set(not_supported_replications.yfilter)) leaf_name_data.push_back(not_supported_replications.get_name_leafdata());
    if (pending_replications.is_set || is_set(pending_replications.yfilter)) leaf_name_data.push_back(pending_replications.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2Vpnv2::Standby::GenericInterfaceListDetails::GenericInterfaceListDetail::Summary::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "is-fib-downloaded" || name == "not-supported-replications" || name == "pending-replications")
        return true;
    return false;
}

L2Vpnv2::Standby::GenericInterfaces::GenericInterfaces()
{

    yang_name = "generic-interfaces"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::GenericInterfaces::~GenericInterfaces()
{
}

bool L2Vpnv2::Standby::GenericInterfaces::has_data() const
{
    for (std::size_t index=0; index<generic_interface.size(); index++)
    {
        if(generic_interface[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::GenericInterfaces::has_operation() const
{
    for (std::size_t index=0; index<generic_interface.size(); index++)
    {
        if(generic_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::GenericInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::GenericInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::GenericInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::GenericInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<L2Vpnv2::Standby::GenericInterfaces::GenericInterface>();
        c->parent = this;
        generic_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::GenericInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : generic_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::GenericInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::GenericInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::GenericInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "generic-interface")
        return true;
    return false;
}

L2Vpnv2::Standby::GenericInterfaces::GenericInterface::GenericInterface()
    :
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"},
    interface_list_name_xr{YType::str, "interface-list-name-xr"},
    items{YType::uint32, "items"},
    number_of_interfaces{YType::uint32, "number-of-interfaces"}
{

    yang_name = "generic-interface"; yang_parent_name = "generic-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::GenericInterfaces::GenericInterface::~GenericInterface()
{
}

bool L2Vpnv2::Standby::GenericInterfaces::GenericInterface::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_name.is_set
	|| interface_list_id.is_set
	|| interface_list_name_xr.is_set
	|| items.is_set
	|| number_of_interfaces.is_set;
}

bool L2Vpnv2::Standby::GenericInterfaces::GenericInterface::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter)
	|| ydk::is_set(interface_list_name_xr.yfilter)
	|| ydk::is_set(items.yfilter)
	|| ydk::is_set(number_of_interfaces.yfilter);
}

std::string L2Vpnv2::Standby::GenericInterfaces::GenericInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/generic-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::GenericInterfaces::GenericInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-interface" <<"[interface-list-name='" <<interface_list_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::GenericInterfaces::GenericInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());
    if (interface_list_name_xr.is_set || is_set(interface_list_name_xr.yfilter)) leaf_name_data.push_back(interface_list_name_xr.get_name_leafdata());
    if (items.is_set || is_set(items.yfilter)) leaf_name_data.push_back(items.get_name_leafdata());
    if (number_of_interfaces.is_set || is_set(number_of_interfaces.yfilter)) leaf_name_data.push_back(number_of_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::GenericInterfaces::GenericInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<L2Vpnv2::Standby::GenericInterfaces::GenericInterface::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::GenericInterfaces::GenericInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::GenericInterfaces::GenericInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "interface-list-name-xr")
    {
        interface_list_name_xr = value;
        interface_list_name_xr.value_namespace = name_space;
        interface_list_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "items")
    {
        items = value;
        items.value_namespace = name_space;
        items.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-interfaces")
    {
        number_of_interfaces = value;
        number_of_interfaces.value_namespace = name_space;
        number_of_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::GenericInterfaces::GenericInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
    if(value_path == "interface-list-name-xr")
    {
        interface_list_name_xr.yfilter = yfilter;
    }
    if(value_path == "items")
    {
        items.yfilter = yfilter;
    }
    if(value_path == "number-of-interfaces")
    {
        number_of_interfaces.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::GenericInterfaces::GenericInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-name" || name == "interface-list-id" || name == "interface-list-name-xr" || name == "items" || name == "number-of-interfaces")
        return true;
    return false;
}

L2Vpnv2::Standby::GenericInterfaces::GenericInterface::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    is_fib_downloaded{YType::boolean, "is-fib-downloaded"},
    not_supported_replications{YType::uint32, "not-supported-replications"},
    pending_replications{YType::uint32, "pending-replications"}
{

    yang_name = "interface"; yang_parent_name = "generic-interface"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::GenericInterfaces::GenericInterface::Interface::~Interface()
{
}

bool L2Vpnv2::Standby::GenericInterfaces::GenericInterface::Interface::has_data() const
{
    return interface_name.is_set
	|| is_fib_downloaded.is_set
	|| not_supported_replications.is_set
	|| pending_replications.is_set;
}

bool L2Vpnv2::Standby::GenericInterfaces::GenericInterface::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_fib_downloaded.yfilter)
	|| ydk::is_set(not_supported_replications.yfilter)
	|| ydk::is_set(pending_replications.yfilter);
}

std::string L2Vpnv2::Standby::GenericInterfaces::GenericInterface::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::GenericInterfaces::GenericInterface::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_fib_downloaded.is_set || is_set(is_fib_downloaded.yfilter)) leaf_name_data.push_back(is_fib_downloaded.get_name_leafdata());
    if (not_supported_replications.is_set || is_set(not_supported_replications.yfilter)) leaf_name_data.push_back(not_supported_replications.get_name_leafdata());
    if (pending_replications.is_set || is_set(pending_replications.yfilter)) leaf_name_data.push_back(pending_replications.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::GenericInterfaces::GenericInterface::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::GenericInterfaces::GenericInterface::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::GenericInterfaces::GenericInterface::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2Vpnv2::Standby::GenericInterfaces::GenericInterface::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2Vpnv2::Standby::GenericInterfaces::GenericInterface::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "is-fib-downloaded" || name == "not-supported-replications" || name == "pending-replications")
        return true;
    return false;
}

L2Vpnv2::Standby::GlobalSettings::GlobalSettings()
    :
    going_active{YType::boolean, "going-active"},
    ha_role{YType::str, "ha-role"},
    issu_role{YType::str, "issu-role"},
    logging_bd_enabled{YType::boolean, "logging-bd-enabled"},
    logging_df_election_enabled{YType::boolean, "logging-df-election-enabled"},
    logging_nsr_enabled{YType::boolean, "logging-nsr-enabled"},
    logging_pw_enabled{YType::boolean, "logging-pw-enabled"},
    logging_vfi_enabled{YType::boolean, "logging-vfi-enabled"},
    process_fsm{YType::str, "process-fsm"},
    pw_grouping_enabled{YType::boolean, "pw-grouping-enabled"},
    pw_oam_refresh_transmit_time{YType::uint32, "pw-oam-refresh-transmit-time"},
    pw_status_enabled{YType::boolean, "pw-status-enabled"},
    tcn_propagation_enabled{YType::boolean, "tcn-propagation-enabled"}
{

    yang_name = "global-settings"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::GlobalSettings::~GlobalSettings()
{
}

bool L2Vpnv2::Standby::GlobalSettings::has_data() const
{
    return going_active.is_set
	|| ha_role.is_set
	|| issu_role.is_set
	|| logging_bd_enabled.is_set
	|| logging_df_election_enabled.is_set
	|| logging_nsr_enabled.is_set
	|| logging_pw_enabled.is_set
	|| logging_vfi_enabled.is_set
	|| process_fsm.is_set
	|| pw_grouping_enabled.is_set
	|| pw_oam_refresh_transmit_time.is_set
	|| pw_status_enabled.is_set
	|| tcn_propagation_enabled.is_set;
}

bool L2Vpnv2::Standby::GlobalSettings::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(going_active.yfilter)
	|| ydk::is_set(ha_role.yfilter)
	|| ydk::is_set(issu_role.yfilter)
	|| ydk::is_set(logging_bd_enabled.yfilter)
	|| ydk::is_set(logging_df_election_enabled.yfilter)
	|| ydk::is_set(logging_nsr_enabled.yfilter)
	|| ydk::is_set(logging_pw_enabled.yfilter)
	|| ydk::is_set(logging_vfi_enabled.yfilter)
	|| ydk::is_set(process_fsm.yfilter)
	|| ydk::is_set(pw_grouping_enabled.yfilter)
	|| ydk::is_set(pw_oam_refresh_transmit_time.yfilter)
	|| ydk::is_set(pw_status_enabled.yfilter)
	|| ydk::is_set(tcn_propagation_enabled.yfilter);
}

std::string L2Vpnv2::Standby::GlobalSettings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::GlobalSettings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-settings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::GlobalSettings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (going_active.is_set || is_set(going_active.yfilter)) leaf_name_data.push_back(going_active.get_name_leafdata());
    if (ha_role.is_set || is_set(ha_role.yfilter)) leaf_name_data.push_back(ha_role.get_name_leafdata());
    if (issu_role.is_set || is_set(issu_role.yfilter)) leaf_name_data.push_back(issu_role.get_name_leafdata());
    if (logging_bd_enabled.is_set || is_set(logging_bd_enabled.yfilter)) leaf_name_data.push_back(logging_bd_enabled.get_name_leafdata());
    if (logging_df_election_enabled.is_set || is_set(logging_df_election_enabled.yfilter)) leaf_name_data.push_back(logging_df_election_enabled.get_name_leafdata());
    if (logging_nsr_enabled.is_set || is_set(logging_nsr_enabled.yfilter)) leaf_name_data.push_back(logging_nsr_enabled.get_name_leafdata());
    if (logging_pw_enabled.is_set || is_set(logging_pw_enabled.yfilter)) leaf_name_data.push_back(logging_pw_enabled.get_name_leafdata());
    if (logging_vfi_enabled.is_set || is_set(logging_vfi_enabled.yfilter)) leaf_name_data.push_back(logging_vfi_enabled.get_name_leafdata());
    if (process_fsm.is_set || is_set(process_fsm.yfilter)) leaf_name_data.push_back(process_fsm.get_name_leafdata());
    if (pw_grouping_enabled.is_set || is_set(pw_grouping_enabled.yfilter)) leaf_name_data.push_back(pw_grouping_enabled.get_name_leafdata());
    if (pw_oam_refresh_transmit_time.is_set || is_set(pw_oam_refresh_transmit_time.yfilter)) leaf_name_data.push_back(pw_oam_refresh_transmit_time.get_name_leafdata());
    if (pw_status_enabled.is_set || is_set(pw_status_enabled.yfilter)) leaf_name_data.push_back(pw_status_enabled.get_name_leafdata());
    if (tcn_propagation_enabled.is_set || is_set(tcn_propagation_enabled.yfilter)) leaf_name_data.push_back(tcn_propagation_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::GlobalSettings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::GlobalSettings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::GlobalSettings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "going-active")
    {
        going_active = value;
        going_active.value_namespace = name_space;
        going_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ha-role")
    {
        ha_role = value;
        ha_role.value_namespace = name_space;
        ha_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-role")
    {
        issu_role = value;
        issu_role.value_namespace = name_space;
        issu_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-bd-enabled")
    {
        logging_bd_enabled = value;
        logging_bd_enabled.value_namespace = name_space;
        logging_bd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-df-election-enabled")
    {
        logging_df_election_enabled = value;
        logging_df_election_enabled.value_namespace = name_space;
        logging_df_election_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-nsr-enabled")
    {
        logging_nsr_enabled = value;
        logging_nsr_enabled.value_namespace = name_space;
        logging_nsr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-pw-enabled")
    {
        logging_pw_enabled = value;
        logging_pw_enabled.value_namespace = name_space;
        logging_pw_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-vfi-enabled")
    {
        logging_vfi_enabled = value;
        logging_vfi_enabled.value_namespace = name_space;
        logging_vfi_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-fsm")
    {
        process_fsm = value;
        process_fsm.value_namespace = name_space;
        process_fsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-grouping-enabled")
    {
        pw_grouping_enabled = value;
        pw_grouping_enabled.value_namespace = name_space;
        pw_grouping_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-oam-refresh-transmit-time")
    {
        pw_oam_refresh_transmit_time = value;
        pw_oam_refresh_transmit_time.value_namespace = name_space;
        pw_oam_refresh_transmit_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-status-enabled")
    {
        pw_status_enabled = value;
        pw_status_enabled.value_namespace = name_space;
        pw_status_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcn-propagation-enabled")
    {
        tcn_propagation_enabled = value;
        tcn_propagation_enabled.value_namespace = name_space;
        tcn_propagation_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::GlobalSettings::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "going-active")
    {
        going_active.yfilter = yfilter;
    }
    if(value_path == "ha-role")
    {
        ha_role.yfilter = yfilter;
    }
    if(value_path == "issu-role")
    {
        issu_role.yfilter = yfilter;
    }
    if(value_path == "logging-bd-enabled")
    {
        logging_bd_enabled.yfilter = yfilter;
    }
    if(value_path == "logging-df-election-enabled")
    {
        logging_df_election_enabled.yfilter = yfilter;
    }
    if(value_path == "logging-nsr-enabled")
    {
        logging_nsr_enabled.yfilter = yfilter;
    }
    if(value_path == "logging-pw-enabled")
    {
        logging_pw_enabled.yfilter = yfilter;
    }
    if(value_path == "logging-vfi-enabled")
    {
        logging_vfi_enabled.yfilter = yfilter;
    }
    if(value_path == "process-fsm")
    {
        process_fsm.yfilter = yfilter;
    }
    if(value_path == "pw-grouping-enabled")
    {
        pw_grouping_enabled.yfilter = yfilter;
    }
    if(value_path == "pw-oam-refresh-transmit-time")
    {
        pw_oam_refresh_transmit_time.yfilter = yfilter;
    }
    if(value_path == "pw-status-enabled")
    {
        pw_status_enabled.yfilter = yfilter;
    }
    if(value_path == "tcn-propagation-enabled")
    {
        tcn_propagation_enabled.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::GlobalSettings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "going-active" || name == "ha-role" || name == "issu-role" || name == "logging-bd-enabled" || name == "logging-df-election-enabled" || name == "logging-nsr-enabled" || name == "logging-pw-enabled" || name == "logging-vfi-enabled" || name == "process-fsm" || name == "pw-grouping-enabled" || name == "pw-oam-refresh-transmit-time" || name == "pw-status-enabled" || name == "tcn-propagation-enabled")
        return true;
    return false;
}

L2Vpnv2::Standby::IccpSm::IccpSm()
    :
    iccp_groups(std::make_shared<L2Vpnv2::Standby::IccpSm::IccpGroups>())
	,iccp_sm_summary(std::make_shared<L2Vpnv2::Standby::IccpSm::IccpSmSummary>())
{
    iccp_groups->parent = this;
    iccp_sm_summary->parent = this;

    yang_name = "iccp-sm"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::IccpSm::~IccpSm()
{
}

bool L2Vpnv2::Standby::IccpSm::has_data() const
{
    return (iccp_groups !=  nullptr && iccp_groups->has_data())
	|| (iccp_sm_summary !=  nullptr && iccp_sm_summary->has_data());
}

bool L2Vpnv2::Standby::IccpSm::has_operation() const
{
    return is_set(yfilter)
	|| (iccp_groups !=  nullptr && iccp_groups->has_operation())
	|| (iccp_sm_summary !=  nullptr && iccp_sm_summary->has_operation());
}

std::string L2Vpnv2::Standby::IccpSm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::IccpSm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-sm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::IccpSm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::IccpSm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-groups")
    {
        if(iccp_groups == nullptr)
        {
            iccp_groups = std::make_shared<L2Vpnv2::Standby::IccpSm::IccpGroups>();
        }
        return iccp_groups;
    }

    if(child_yang_name == "iccp-sm-summary")
    {
        if(iccp_sm_summary == nullptr)
        {
            iccp_sm_summary = std::make_shared<L2Vpnv2::Standby::IccpSm::IccpSmSummary>();
        }
        return iccp_sm_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::IccpSm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(iccp_groups != nullptr)
    {
        children["iccp-groups"] = iccp_groups;
    }

    if(iccp_sm_summary != nullptr)
    {
        children["iccp-sm-summary"] = iccp_sm_summary;
    }

    return children;
}

void L2Vpnv2::Standby::IccpSm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::IccpSm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::IccpSm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-groups" || name == "iccp-sm-summary")
        return true;
    return false;
}

L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroups()
{

    yang_name = "iccp-groups"; yang_parent_name = "iccp-sm"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::IccpSm::IccpGroups::~IccpGroups()
{
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::has_data() const
{
    for (std::size_t index=0; index<iccp_group.size(); index++)
    {
        if(iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::has_operation() const
{
    for (std::size_t index=0; index<iccp_group.size(); index++)
    {
        if(iccp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::IccpSm::IccpGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/iccp-sm/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::IccpSm::IccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::IccpSm::IccpGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::IccpSm::IccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group")
    {
        for(auto const & c : iccp_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup>();
        c->parent = this;
        iccp_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::IccpSm::IccpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : iccp_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::IccpSm::IccpGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::IccpSm::IccpGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group")
        return true;
    return false;
}

L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroup()
    :
    group_id{YType::uint32, "group-id"}
    	,
    iccp_group_info(std::make_shared<L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo>())
	,iccp_ports(std::make_shared<L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts>())
{
    iccp_group_info->parent = this;
    iccp_ports->parent = this;

    yang_name = "iccp-group"; yang_parent_name = "iccp-groups"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::~IccpGroup()
{
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::has_data() const
{
    return group_id.is_set
	|| (iccp_group_info !=  nullptr && iccp_group_info->has_data())
	|| (iccp_ports !=  nullptr && iccp_ports->has_data());
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| (iccp_group_info !=  nullptr && iccp_group_info->has_operation())
	|| (iccp_ports !=  nullptr && iccp_ports->has_operation());
}

std::string L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/iccp-sm/iccp-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group" <<"[group-id='" <<group_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group-info")
    {
        if(iccp_group_info == nullptr)
        {
            iccp_group_info = std::make_shared<L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo>();
        }
        return iccp_group_info;
    }

    if(child_yang_name == "iccp-ports")
    {
        if(iccp_ports == nullptr)
        {
            iccp_ports = std::make_shared<L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts>();
        }
        return iccp_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(iccp_group_info != nullptr)
    {
        children["iccp-group-info"] = iccp_group_info;
    }

    if(iccp_ports != nullptr)
    {
        children["iccp-ports"] = iccp_ports;
    }

    return children;
}

void L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group-info" || name == "iccp-ports" || name == "group-id")
        return true;
    return false;
}

L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::IccpGroupInfo()
    :
    group_id{YType::uint32, "group-id"},
    iccp_member_up{YType::boolean, "iccp-member-up"},
    iccp_transport_up{YType::boolean, "iccp-transport-up"},
    local_node_id{YType::uint8, "local-node-id"},
    remote_node_id{YType::uint8, "remote-node-id"},
    state{YType::enumeration, "state"}
{

    yang_name = "iccp-group-info"; yang_parent_name = "iccp-group"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::~IccpGroupInfo()
{
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::has_data() const
{
    for (std::size_t index=0; index<ports.size(); index++)
    {
        if(ports[index]->has_data())
            return true;
    }
    return group_id.is_set
	|| iccp_member_up.is_set
	|| iccp_transport_up.is_set
	|| local_node_id.is_set
	|| remote_node_id.is_set
	|| state.is_set;
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::has_operation() const
{
    for (std::size_t index=0; index<ports.size(); index++)
    {
        if(ports[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(iccp_member_up.yfilter)
	|| ydk::is_set(iccp_transport_up.yfilter)
	|| ydk::is_set(local_node_id.yfilter)
	|| ydk::is_set(remote_node_id.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (iccp_member_up.is_set || is_set(iccp_member_up.yfilter)) leaf_name_data.push_back(iccp_member_up.get_name_leafdata());
    if (iccp_transport_up.is_set || is_set(iccp_transport_up.yfilter)) leaf_name_data.push_back(iccp_transport_up.get_name_leafdata());
    if (local_node_id.is_set || is_set(local_node_id.yfilter)) leaf_name_data.push_back(local_node_id.get_name_leafdata());
    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ports")
    {
        for(auto const & c : ports)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports>();
        c->parent = this;
        ports.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ports)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-member-up")
    {
        iccp_member_up = value;
        iccp_member_up.value_namespace = name_space;
        iccp_member_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-transport-up")
    {
        iccp_transport_up = value;
        iccp_transport_up.value_namespace = name_space;
        iccp_transport_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-node-id")
    {
        local_node_id = value;
        local_node_id.value_namespace = name_space;
        local_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id = value;
        remote_node_id.value_namespace = name_space;
        remote_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "iccp-member-up")
    {
        iccp_member_up.yfilter = yfilter;
    }
    if(value_path == "iccp-transport-up")
    {
        iccp_transport_up.yfilter = yfilter;
    }
    if(value_path == "local-node-id")
    {
        local_node_id.yfilter = yfilter;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ports" || name == "group-id" || name == "iccp-member-up" || name == "iccp-transport-up" || name == "local-node-id" || name == "remote-node-id" || name == "state")
        return true;
    return false;
}

L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::Ports()
    :
    interface_name{YType::str, "interface-name"},
    mac_flush_tcn{YType::boolean, "mac-flush-tcn"}
    	,
    local_port(std::make_shared<L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort>())
	,remote_port(std::make_shared<L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort>())
{
    local_port->parent = this;
    remote_port->parent = this;

    yang_name = "ports"; yang_parent_name = "iccp-group-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::~Ports()
{
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::has_data() const
{
    return interface_name.is_set
	|| mac_flush_tcn.is_set
	|| (local_port !=  nullptr && local_port->has_data())
	|| (remote_port !=  nullptr && remote_port->has_data());
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mac_flush_tcn.yfilter)
	|| (local_port !=  nullptr && local_port->has_operation())
	|| (remote_port !=  nullptr && remote_port->has_operation());
}

std::string L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_flush_tcn.is_set || is_set(mac_flush_tcn.yfilter)) leaf_name_data.push_back(mac_flush_tcn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-port")
    {
        if(local_port == nullptr)
        {
            local_port = std::make_shared<L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort>();
        }
        return local_port;
    }

    if(child_yang_name == "remote-port")
    {
        if(remote_port == nullptr)
        {
            remote_port = std::make_shared<L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort>();
        }
        return remote_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local_port != nullptr)
    {
        children["local-port"] = local_port;
    }

    if(remote_port != nullptr)
    {
        children["remote-port"] = remote_port;
    }

    return children;
}

void L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn = value;
        mac_flush_tcn.value_namespace = name_space;
        mac_flush_tcn.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-port" || name == "remote-port" || name == "interface-name" || name == "mac-flush-tcn")
        return true;
    return false;
}

L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::LocalPort()
    :
    fsm_state{YType::uint8, "fsm-state"},
    port_fail_code{YType::uint8, "port-fail-code"},
    port_state{YType::enumeration, "port-state"},
    reversion_time{YType::uint32, "reversion-time"},
    reversion_time_remaining{YType::uint32, "reversion-time-remaining"},
    vlan_state{YType::uint8, "vlan-state"},
    vlan_vector{YType::str, "vlan-vector"}
{

    yang_name = "local-port"; yang_parent_name = "ports"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::~LocalPort()
{
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::has_data() const
{
    return fsm_state.is_set
	|| port_fail_code.is_set
	|| port_state.is_set
	|| reversion_time.is_set
	|| reversion_time_remaining.is_set
	|| vlan_state.is_set
	|| vlan_vector.is_set;
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fsm_state.yfilter)
	|| ydk::is_set(port_fail_code.yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(reversion_time.yfilter)
	|| ydk::is_set(reversion_time_remaining.yfilter)
	|| ydk::is_set(vlan_state.yfilter)
	|| ydk::is_set(vlan_vector.yfilter);
}

std::string L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fsm_state.is_set || is_set(fsm_state.yfilter)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (port_fail_code.is_set || is_set(port_fail_code.yfilter)) leaf_name_data.push_back(port_fail_code.get_name_leafdata());
    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (reversion_time.is_set || is_set(reversion_time.yfilter)) leaf_name_data.push_back(reversion_time.get_name_leafdata());
    if (reversion_time_remaining.is_set || is_set(reversion_time_remaining.yfilter)) leaf_name_data.push_back(reversion_time_remaining.get_name_leafdata());
    if (vlan_state.is_set || is_set(vlan_state.yfilter)) leaf_name_data.push_back(vlan_state.get_name_leafdata());
    if (vlan_vector.is_set || is_set(vlan_vector.yfilter)) leaf_name_data.push_back(vlan_vector.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fsm-state")
    {
        fsm_state = value;
        fsm_state.value_namespace = name_space;
        fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code = value;
        port_fail_code.value_namespace = name_space;
        port_fail_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time")
    {
        reversion_time = value;
        reversion_time.value_namespace = name_space;
        reversion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining = value;
        reversion_time_remaining.value_namespace = name_space;
        reversion_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-state")
    {
        vlan_state = value;
        vlan_state.value_namespace = name_space;
        vlan_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector = value;
        vlan_vector.value_namespace = name_space;
        vlan_vector.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fsm-state")
    {
        fsm_state.yfilter = yfilter;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code.yfilter = yfilter;
    }
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "reversion-time")
    {
        reversion_time.yfilter = yfilter;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining.yfilter = yfilter;
    }
    if(value_path == "vlan-state")
    {
        vlan_state.yfilter = yfilter;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fsm-state" || name == "port-fail-code" || name == "port-state" || name == "reversion-time" || name == "reversion-time-remaining" || name == "vlan-state" || name == "vlan-vector")
        return true;
    return false;
}

L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::RemotePort()
    :
    fsm_state{YType::uint8, "fsm-state"},
    port_fail_code{YType::uint8, "port-fail-code"},
    port_state{YType::enumeration, "port-state"},
    reversion_time{YType::uint32, "reversion-time"},
    reversion_time_remaining{YType::uint32, "reversion-time-remaining"},
    vlan_state{YType::uint8, "vlan-state"},
    vlan_vector{YType::str, "vlan-vector"}
{

    yang_name = "remote-port"; yang_parent_name = "ports"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::~RemotePort()
{
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::has_data() const
{
    return fsm_state.is_set
	|| port_fail_code.is_set
	|| port_state.is_set
	|| reversion_time.is_set
	|| reversion_time_remaining.is_set
	|| vlan_state.is_set
	|| vlan_vector.is_set;
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fsm_state.yfilter)
	|| ydk::is_set(port_fail_code.yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(reversion_time.yfilter)
	|| ydk::is_set(reversion_time_remaining.yfilter)
	|| ydk::is_set(vlan_state.yfilter)
	|| ydk::is_set(vlan_vector.yfilter);
}

std::string L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fsm_state.is_set || is_set(fsm_state.yfilter)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (port_fail_code.is_set || is_set(port_fail_code.yfilter)) leaf_name_data.push_back(port_fail_code.get_name_leafdata());
    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (reversion_time.is_set || is_set(reversion_time.yfilter)) leaf_name_data.push_back(reversion_time.get_name_leafdata());
    if (reversion_time_remaining.is_set || is_set(reversion_time_remaining.yfilter)) leaf_name_data.push_back(reversion_time_remaining.get_name_leafdata());
    if (vlan_state.is_set || is_set(vlan_state.yfilter)) leaf_name_data.push_back(vlan_state.get_name_leafdata());
    if (vlan_vector.is_set || is_set(vlan_vector.yfilter)) leaf_name_data.push_back(vlan_vector.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fsm-state")
    {
        fsm_state = value;
        fsm_state.value_namespace = name_space;
        fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code = value;
        port_fail_code.value_namespace = name_space;
        port_fail_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time")
    {
        reversion_time = value;
        reversion_time.value_namespace = name_space;
        reversion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining = value;
        reversion_time_remaining.value_namespace = name_space;
        reversion_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-state")
    {
        vlan_state = value;
        vlan_state.value_namespace = name_space;
        vlan_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector = value;
        vlan_vector.value_namespace = name_space;
        vlan_vector.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fsm-state")
    {
        fsm_state.yfilter = yfilter;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code.yfilter = yfilter;
    }
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "reversion-time")
    {
        reversion_time.yfilter = yfilter;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining.yfilter = yfilter;
    }
    if(value_path == "vlan-state")
    {
        vlan_state.yfilter = yfilter;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fsm-state" || name == "port-fail-code" || name == "port-state" || name == "reversion-time" || name == "reversion-time-remaining" || name == "vlan-state" || name == "vlan-vector")
        return true;
    return false;
}

L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPorts()
{

    yang_name = "iccp-ports"; yang_parent_name = "iccp-group"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::~IccpPorts()
{
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::has_data() const
{
    for (std::size_t index=0; index<iccp_port.size(); index++)
    {
        if(iccp_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::has_operation() const
{
    for (std::size_t index=0; index<iccp_port.size(); index++)
    {
        if(iccp_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-port")
    {
        for(auto const & c : iccp_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort>();
        c->parent = this;
        iccp_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : iccp_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-port")
        return true;
    return false;
}

L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::IccpPort()
    :
    interface{YType::str, "interface"},
    interface_name{YType::str, "interface-name"},
    mac_flush_tcn{YType::boolean, "mac-flush-tcn"}
    	,
    local_port(std::make_shared<L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort>())
	,remote_port(std::make_shared<L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort>())
{
    local_port->parent = this;
    remote_port->parent = this;

    yang_name = "iccp-port"; yang_parent_name = "iccp-ports"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::~IccpPort()
{
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::has_data() const
{
    return interface.is_set
	|| interface_name.is_set
	|| mac_flush_tcn.is_set
	|| (local_port !=  nullptr && local_port->has_data())
	|| (remote_port !=  nullptr && remote_port->has_data());
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mac_flush_tcn.yfilter)
	|| (local_port !=  nullptr && local_port->has_operation())
	|| (remote_port !=  nullptr && remote_port->has_operation());
}

std::string L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-port" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_flush_tcn.is_set || is_set(mac_flush_tcn.yfilter)) leaf_name_data.push_back(mac_flush_tcn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-port")
    {
        if(local_port == nullptr)
        {
            local_port = std::make_shared<L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort>();
        }
        return local_port;
    }

    if(child_yang_name == "remote-port")
    {
        if(remote_port == nullptr)
        {
            remote_port = std::make_shared<L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort>();
        }
        return remote_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local_port != nullptr)
    {
        children["local-port"] = local_port;
    }

    if(remote_port != nullptr)
    {
        children["remote-port"] = remote_port;
    }

    return children;
}

void L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn = value;
        mac_flush_tcn.value_namespace = name_space;
        mac_flush_tcn.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-port" || name == "remote-port" || name == "interface" || name == "interface-name" || name == "mac-flush-tcn")
        return true;
    return false;
}

L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::LocalPort()
    :
    fsm_state{YType::uint8, "fsm-state"},
    port_fail_code{YType::uint8, "port-fail-code"},
    port_state{YType::enumeration, "port-state"},
    reversion_time{YType::uint32, "reversion-time"},
    reversion_time_remaining{YType::uint32, "reversion-time-remaining"},
    vlan_state{YType::uint8, "vlan-state"},
    vlan_vector{YType::str, "vlan-vector"}
{

    yang_name = "local-port"; yang_parent_name = "iccp-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::~LocalPort()
{
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::has_data() const
{
    return fsm_state.is_set
	|| port_fail_code.is_set
	|| port_state.is_set
	|| reversion_time.is_set
	|| reversion_time_remaining.is_set
	|| vlan_state.is_set
	|| vlan_vector.is_set;
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fsm_state.yfilter)
	|| ydk::is_set(port_fail_code.yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(reversion_time.yfilter)
	|| ydk::is_set(reversion_time_remaining.yfilter)
	|| ydk::is_set(vlan_state.yfilter)
	|| ydk::is_set(vlan_vector.yfilter);
}

std::string L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fsm_state.is_set || is_set(fsm_state.yfilter)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (port_fail_code.is_set || is_set(port_fail_code.yfilter)) leaf_name_data.push_back(port_fail_code.get_name_leafdata());
    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (reversion_time.is_set || is_set(reversion_time.yfilter)) leaf_name_data.push_back(reversion_time.get_name_leafdata());
    if (reversion_time_remaining.is_set || is_set(reversion_time_remaining.yfilter)) leaf_name_data.push_back(reversion_time_remaining.get_name_leafdata());
    if (vlan_state.is_set || is_set(vlan_state.yfilter)) leaf_name_data.push_back(vlan_state.get_name_leafdata());
    if (vlan_vector.is_set || is_set(vlan_vector.yfilter)) leaf_name_data.push_back(vlan_vector.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fsm-state")
    {
        fsm_state = value;
        fsm_state.value_namespace = name_space;
        fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code = value;
        port_fail_code.value_namespace = name_space;
        port_fail_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time")
    {
        reversion_time = value;
        reversion_time.value_namespace = name_space;
        reversion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining = value;
        reversion_time_remaining.value_namespace = name_space;
        reversion_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-state")
    {
        vlan_state = value;
        vlan_state.value_namespace = name_space;
        vlan_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector = value;
        vlan_vector.value_namespace = name_space;
        vlan_vector.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fsm-state")
    {
        fsm_state.yfilter = yfilter;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code.yfilter = yfilter;
    }
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "reversion-time")
    {
        reversion_time.yfilter = yfilter;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining.yfilter = yfilter;
    }
    if(value_path == "vlan-state")
    {
        vlan_state.yfilter = yfilter;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fsm-state" || name == "port-fail-code" || name == "port-state" || name == "reversion-time" || name == "reversion-time-remaining" || name == "vlan-state" || name == "vlan-vector")
        return true;
    return false;
}

L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::RemotePort()
    :
    fsm_state{YType::uint8, "fsm-state"},
    port_fail_code{YType::uint8, "port-fail-code"},
    port_state{YType::enumeration, "port-state"},
    reversion_time{YType::uint32, "reversion-time"},
    reversion_time_remaining{YType::uint32, "reversion-time-remaining"},
    vlan_state{YType::uint8, "vlan-state"},
    vlan_vector{YType::str, "vlan-vector"}
{

    yang_name = "remote-port"; yang_parent_name = "iccp-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::~RemotePort()
{
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::has_data() const
{
    return fsm_state.is_set
	|| port_fail_code.is_set
	|| port_state.is_set
	|| reversion_time.is_set
	|| reversion_time_remaining.is_set
	|| vlan_state.is_set
	|| vlan_vector.is_set;
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fsm_state.yfilter)
	|| ydk::is_set(port_fail_code.yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(reversion_time.yfilter)
	|| ydk::is_set(reversion_time_remaining.yfilter)
	|| ydk::is_set(vlan_state.yfilter)
	|| ydk::is_set(vlan_vector.yfilter);
}

std::string L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fsm_state.is_set || is_set(fsm_state.yfilter)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (port_fail_code.is_set || is_set(port_fail_code.yfilter)) leaf_name_data.push_back(port_fail_code.get_name_leafdata());
    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (reversion_time.is_set || is_set(reversion_time.yfilter)) leaf_name_data.push_back(reversion_time.get_name_leafdata());
    if (reversion_time_remaining.is_set || is_set(reversion_time_remaining.yfilter)) leaf_name_data.push_back(reversion_time_remaining.get_name_leafdata());
    if (vlan_state.is_set || is_set(vlan_state.yfilter)) leaf_name_data.push_back(vlan_state.get_name_leafdata());
    if (vlan_vector.is_set || is_set(vlan_vector.yfilter)) leaf_name_data.push_back(vlan_vector.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fsm-state")
    {
        fsm_state = value;
        fsm_state.value_namespace = name_space;
        fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code = value;
        port_fail_code.value_namespace = name_space;
        port_fail_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time")
    {
        reversion_time = value;
        reversion_time.value_namespace = name_space;
        reversion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining = value;
        reversion_time_remaining.value_namespace = name_space;
        reversion_time_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-state")
    {
        vlan_state = value;
        vlan_state.value_namespace = name_space;
        vlan_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector = value;
        vlan_vector.value_namespace = name_space;
        vlan_vector.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fsm-state")
    {
        fsm_state.yfilter = yfilter;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code.yfilter = yfilter;
    }
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "reversion-time")
    {
        reversion_time.yfilter = yfilter;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining.yfilter = yfilter;
    }
    if(value_path == "vlan-state")
    {
        vlan_state.yfilter = yfilter;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fsm-state" || name == "port-fail-code" || name == "port-state" || name == "reversion-time" || name == "reversion-time-remaining" || name == "vlan-state" || name == "vlan-vector")
        return true;
    return false;
}

L2Vpnv2::Standby::IccpSm::IccpSmSummary::IccpSmSummary()
    :
    connected_groups{YType::uint32, "connected-groups"},
    connecting_groups{YType::uint32, "connecting-groups"},
    failed_ports{YType::uint32, "failed-ports"},
    groups{YType::uint32, "groups"},
    operational_ports{YType::uint32, "operational-ports"},
    ports{YType::uint32, "ports"},
    provisioned_groups{YType::uint32, "provisioned-groups"},
    reverting_ports{YType::uint32, "reverting-ports"},
    synchronized_groups{YType::uint32, "synchronized-groups"},
    synchronizing_groups{YType::uint32, "synchronizing-groups"},
    unconfigured_ports{YType::uint32, "unconfigured-ports"},
    unknown_ports{YType::uint32, "unknown-ports"},
    unresolved_groups{YType::uint32, "unresolved-groups"},
    unsynchronized_ports{YType::uint32, "unsynchronized-ports"}
{

    yang_name = "iccp-sm-summary"; yang_parent_name = "iccp-sm"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::IccpSm::IccpSmSummary::~IccpSmSummary()
{
}

bool L2Vpnv2::Standby::IccpSm::IccpSmSummary::has_data() const
{
    return connected_groups.is_set
	|| connecting_groups.is_set
	|| failed_ports.is_set
	|| groups.is_set
	|| operational_ports.is_set
	|| ports.is_set
	|| provisioned_groups.is_set
	|| reverting_ports.is_set
	|| synchronized_groups.is_set
	|| synchronizing_groups.is_set
	|| unconfigured_ports.is_set
	|| unknown_ports.is_set
	|| unresolved_groups.is_set
	|| unsynchronized_ports.is_set;
}

bool L2Vpnv2::Standby::IccpSm::IccpSmSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connected_groups.yfilter)
	|| ydk::is_set(connecting_groups.yfilter)
	|| ydk::is_set(failed_ports.yfilter)
	|| ydk::is_set(groups.yfilter)
	|| ydk::is_set(operational_ports.yfilter)
	|| ydk::is_set(ports.yfilter)
	|| ydk::is_set(provisioned_groups.yfilter)
	|| ydk::is_set(reverting_ports.yfilter)
	|| ydk::is_set(synchronized_groups.yfilter)
	|| ydk::is_set(synchronizing_groups.yfilter)
	|| ydk::is_set(unconfigured_ports.yfilter)
	|| ydk::is_set(unknown_ports.yfilter)
	|| ydk::is_set(unresolved_groups.yfilter)
	|| ydk::is_set(unsynchronized_ports.yfilter);
}

std::string L2Vpnv2::Standby::IccpSm::IccpSmSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/iccp-sm/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::IccpSm::IccpSmSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-sm-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::IccpSm::IccpSmSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connected_groups.is_set || is_set(connected_groups.yfilter)) leaf_name_data.push_back(connected_groups.get_name_leafdata());
    if (connecting_groups.is_set || is_set(connecting_groups.yfilter)) leaf_name_data.push_back(connecting_groups.get_name_leafdata());
    if (failed_ports.is_set || is_set(failed_ports.yfilter)) leaf_name_data.push_back(failed_ports.get_name_leafdata());
    if (groups.is_set || is_set(groups.yfilter)) leaf_name_data.push_back(groups.get_name_leafdata());
    if (operational_ports.is_set || is_set(operational_ports.yfilter)) leaf_name_data.push_back(operational_ports.get_name_leafdata());
    if (ports.is_set || is_set(ports.yfilter)) leaf_name_data.push_back(ports.get_name_leafdata());
    if (provisioned_groups.is_set || is_set(provisioned_groups.yfilter)) leaf_name_data.push_back(provisioned_groups.get_name_leafdata());
    if (reverting_ports.is_set || is_set(reverting_ports.yfilter)) leaf_name_data.push_back(reverting_ports.get_name_leafdata());
    if (synchronized_groups.is_set || is_set(synchronized_groups.yfilter)) leaf_name_data.push_back(synchronized_groups.get_name_leafdata());
    if (synchronizing_groups.is_set || is_set(synchronizing_groups.yfilter)) leaf_name_data.push_back(synchronizing_groups.get_name_leafdata());
    if (unconfigured_ports.is_set || is_set(unconfigured_ports.yfilter)) leaf_name_data.push_back(unconfigured_ports.get_name_leafdata());
    if (unknown_ports.is_set || is_set(unknown_ports.yfilter)) leaf_name_data.push_back(unknown_ports.get_name_leafdata());
    if (unresolved_groups.is_set || is_set(unresolved_groups.yfilter)) leaf_name_data.push_back(unresolved_groups.get_name_leafdata());
    if (unsynchronized_ports.is_set || is_set(unsynchronized_ports.yfilter)) leaf_name_data.push_back(unsynchronized_ports.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::IccpSm::IccpSmSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::IccpSm::IccpSmSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::IccpSm::IccpSmSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connected-groups")
    {
        connected_groups = value;
        connected_groups.value_namespace = name_space;
        connected_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-groups")
    {
        connecting_groups = value;
        connecting_groups.value_namespace = name_space;
        connecting_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed-ports")
    {
        failed_ports = value;
        failed_ports.value_namespace = name_space;
        failed_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groups")
    {
        groups = value;
        groups.value_namespace = name_space;
        groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-ports")
    {
        operational_ports = value;
        operational_ports.value_namespace = name_space;
        operational_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ports")
    {
        ports = value;
        ports.value_namespace = name_space;
        ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provisioned-groups")
    {
        provisioned_groups = value;
        provisioned_groups.value_namespace = name_space;
        provisioned_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverting-ports")
    {
        reverting_ports = value;
        reverting_ports.value_namespace = name_space;
        reverting_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronized-groups")
    {
        synchronized_groups = value;
        synchronized_groups.value_namespace = name_space;
        synchronized_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronizing-groups")
    {
        synchronizing_groups = value;
        synchronizing_groups.value_namespace = name_space;
        synchronizing_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unconfigured-ports")
    {
        unconfigured_ports = value;
        unconfigured_ports.value_namespace = name_space;
        unconfigured_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-ports")
    {
        unknown_ports = value;
        unknown_ports.value_namespace = name_space;
        unknown_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unresolved-groups")
    {
        unresolved_groups = value;
        unresolved_groups.value_namespace = name_space;
        unresolved_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsynchronized-ports")
    {
        unsynchronized_ports = value;
        unsynchronized_ports.value_namespace = name_space;
        unsynchronized_ports.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::IccpSm::IccpSmSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connected-groups")
    {
        connected_groups.yfilter = yfilter;
    }
    if(value_path == "connecting-groups")
    {
        connecting_groups.yfilter = yfilter;
    }
    if(value_path == "failed-ports")
    {
        failed_ports.yfilter = yfilter;
    }
    if(value_path == "groups")
    {
        groups.yfilter = yfilter;
    }
    if(value_path == "operational-ports")
    {
        operational_ports.yfilter = yfilter;
    }
    if(value_path == "ports")
    {
        ports.yfilter = yfilter;
    }
    if(value_path == "provisioned-groups")
    {
        provisioned_groups.yfilter = yfilter;
    }
    if(value_path == "reverting-ports")
    {
        reverting_ports.yfilter = yfilter;
    }
    if(value_path == "synchronized-groups")
    {
        synchronized_groups.yfilter = yfilter;
    }
    if(value_path == "synchronizing-groups")
    {
        synchronizing_groups.yfilter = yfilter;
    }
    if(value_path == "unconfigured-ports")
    {
        unconfigured_ports.yfilter = yfilter;
    }
    if(value_path == "unknown-ports")
    {
        unknown_ports.yfilter = yfilter;
    }
    if(value_path == "unresolved-groups")
    {
        unresolved_groups.yfilter = yfilter;
    }
    if(value_path == "unsynchronized-ports")
    {
        unsynchronized_ports.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::IccpSm::IccpSmSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-groups" || name == "connecting-groups" || name == "failed-ports" || name == "groups" || name == "operational-ports" || name == "ports" || name == "provisioned-groups" || name == "reverting-ports" || name == "synchronized-groups" || name == "synchronizing-groups" || name == "unconfigured-ports" || name == "unknown-ports" || name == "unresolved-groups" || name == "unsynchronized-ports")
        return true;
    return false;
}

L2Vpnv2::Standby::Indexes::Indexes()
{

    yang_name = "indexes"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Indexes::~Indexes()
{
}

bool L2Vpnv2::Standby::Indexes::has_data() const
{
    for (std::size_t index=0; index<index_.size(); index++)
    {
        if(index_[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::Indexes::has_operation() const
{
    for (std::size_t index=0; index<index_.size(); index++)
    {
        if(index_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::Indexes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Indexes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "indexes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Indexes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Indexes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<L2Vpnv2::Standby::Indexes::Index_>();
        c->parent = this;
        index_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Indexes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : index_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::Indexes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::Indexes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::Indexes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index")
        return true;
    return false;
}

L2Vpnv2::Standby::Indexes::Index_::Index_()
    :
    pool_id{YType::str, "pool-id"},
    allocated_ids{YType::uint32, "allocated-ids"},
    application_type{YType::enumeration, "application-type"},
    max_num_id_mgr{YType::uint32, "max-num-id-mgr"},
    num_id_mgr_in_use{YType::uint32, "num-id-mgr-in-use"},
    pool_id_xr{YType::uint32, "pool-id-xr"},
    pool_size{YType::uint32, "pool-size"},
    zombied_ids{YType::uint32, "zombied-ids"}
{

    yang_name = "index"; yang_parent_name = "indexes"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Indexes::Index_::~Index_()
{
}

bool L2Vpnv2::Standby::Indexes::Index_::has_data() const
{
    return pool_id.is_set
	|| allocated_ids.is_set
	|| application_type.is_set
	|| max_num_id_mgr.is_set
	|| num_id_mgr_in_use.is_set
	|| pool_id_xr.is_set
	|| pool_size.is_set
	|| zombied_ids.is_set;
}

bool L2Vpnv2::Standby::Indexes::Index_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pool_id.yfilter)
	|| ydk::is_set(allocated_ids.yfilter)
	|| ydk::is_set(application_type.yfilter)
	|| ydk::is_set(max_num_id_mgr.yfilter)
	|| ydk::is_set(num_id_mgr_in_use.yfilter)
	|| ydk::is_set(pool_id_xr.yfilter)
	|| ydk::is_set(pool_size.yfilter)
	|| ydk::is_set(zombied_ids.yfilter);
}

std::string L2Vpnv2::Standby::Indexes::Index_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/indexes/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Indexes::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index" <<"[pool-id='" <<pool_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Indexes::Index_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool_id.is_set || is_set(pool_id.yfilter)) leaf_name_data.push_back(pool_id.get_name_leafdata());
    if (allocated_ids.is_set || is_set(allocated_ids.yfilter)) leaf_name_data.push_back(allocated_ids.get_name_leafdata());
    if (application_type.is_set || is_set(application_type.yfilter)) leaf_name_data.push_back(application_type.get_name_leafdata());
    if (max_num_id_mgr.is_set || is_set(max_num_id_mgr.yfilter)) leaf_name_data.push_back(max_num_id_mgr.get_name_leafdata());
    if (num_id_mgr_in_use.is_set || is_set(num_id_mgr_in_use.yfilter)) leaf_name_data.push_back(num_id_mgr_in_use.get_name_leafdata());
    if (pool_id_xr.is_set || is_set(pool_id_xr.yfilter)) leaf_name_data.push_back(pool_id_xr.get_name_leafdata());
    if (pool_size.is_set || is_set(pool_size.yfilter)) leaf_name_data.push_back(pool_size.get_name_leafdata());
    if (zombied_ids.is_set || is_set(zombied_ids.yfilter)) leaf_name_data.push_back(zombied_ids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Indexes::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Indexes::Index_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Indexes::Index_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pool-id")
    {
        pool_id = value;
        pool_id.value_namespace = name_space;
        pool_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocated-ids")
    {
        allocated_ids = value;
        allocated_ids.value_namespace = name_space;
        allocated_ids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-type")
    {
        application_type = value;
        application_type.value_namespace = name_space;
        application_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-num-id-mgr")
    {
        max_num_id_mgr = value;
        max_num_id_mgr.value_namespace = name_space;
        max_num_id_mgr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-id-mgr-in-use")
    {
        num_id_mgr_in_use = value;
        num_id_mgr_in_use.value_namespace = name_space;
        num_id_mgr_in_use.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool-id-xr")
    {
        pool_id_xr = value;
        pool_id_xr.value_namespace = name_space;
        pool_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool-size")
    {
        pool_size = value;
        pool_size.value_namespace = name_space;
        pool_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zombied-ids")
    {
        zombied_ids = value;
        zombied_ids.value_namespace = name_space;
        zombied_ids.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Indexes::Index_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pool-id")
    {
        pool_id.yfilter = yfilter;
    }
    if(value_path == "allocated-ids")
    {
        allocated_ids.yfilter = yfilter;
    }
    if(value_path == "application-type")
    {
        application_type.yfilter = yfilter;
    }
    if(value_path == "max-num-id-mgr")
    {
        max_num_id_mgr.yfilter = yfilter;
    }
    if(value_path == "num-id-mgr-in-use")
    {
        num_id_mgr_in_use.yfilter = yfilter;
    }
    if(value_path == "pool-id-xr")
    {
        pool_id_xr.yfilter = yfilter;
    }
    if(value_path == "pool-size")
    {
        pool_size.yfilter = yfilter;
    }
    if(value_path == "zombied-ids")
    {
        zombied_ids.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Indexes::Index_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pool-id" || name == "allocated-ids" || name == "application-type" || name == "max-num-id-mgr" || name == "num-id-mgr-in-use" || name == "pool-id-xr" || name == "pool-size" || name == "zombied-ids")
        return true;
    return false;
}

L2Vpnv2::Standby::L2VpnCollaborators::L2VpnCollaborators()
    :
    collaborator_statistics(std::make_shared<L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics>())
{
    collaborator_statistics->parent = this;

    yang_name = "l2vpn-collaborators"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::L2VpnCollaborators::~L2VpnCollaborators()
{
}

bool L2Vpnv2::Standby::L2VpnCollaborators::has_data() const
{
    return (collaborator_statistics !=  nullptr && collaborator_statistics->has_data());
}

bool L2Vpnv2::Standby::L2VpnCollaborators::has_operation() const
{
    return is_set(yfilter)
	|| (collaborator_statistics !=  nullptr && collaborator_statistics->has_operation());
}

std::string L2Vpnv2::Standby::L2VpnCollaborators::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::L2VpnCollaborators::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-collaborators";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::L2VpnCollaborators::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::L2VpnCollaborators::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "collaborator-statistics")
    {
        if(collaborator_statistics == nullptr)
        {
            collaborator_statistics = std::make_shared<L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics>();
        }
        return collaborator_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::L2VpnCollaborators::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(collaborator_statistics != nullptr)
    {
        children["collaborator-statistics"] = collaborator_statistics;
    }

    return children;
}

void L2Vpnv2::Standby::L2VpnCollaborators::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::L2VpnCollaborators::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::L2VpnCollaborators::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collaborator-statistics")
        return true;
    return false;
}

L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::CollaboratorStatistics()
{

    yang_name = "collaborator-statistics"; yang_parent_name = "l2vpn-collaborators"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::~CollaboratorStatistics()
{
}

bool L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::has_data() const
{
    for (std::size_t index=0; index<count.size(); index++)
    {
        if(count[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::has_operation() const
{
    for (std::size_t index=0; index<count.size(); index++)
    {
        if(count[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/l2vpn-collaborators/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collaborator-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "count")
    {
        for(auto const & c : count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::Count>();
        c->parent = this;
        count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count")
        return true;
    return false;
}

L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::Count::Count()
    :
    collaborator_name{YType::str, "collaborator-name"},
    down{YType::uint32, "down"},
    is_up{YType::boolean, "is-up"},
    up{YType::uint32, "up"}
{

    yang_name = "count"; yang_parent_name = "collaborator-statistics"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::Count::~Count()
{
}

bool L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::Count::has_data() const
{
    return collaborator_name.is_set
	|| down.is_set
	|| is_up.is_set
	|| up.is_set;
}

bool L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::Count::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(collaborator_name.yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(is_up.yfilter)
	|| ydk::is_set(up.yfilter);
}

std::string L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::Count::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/l2vpn-collaborators/collaborator-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::Count::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::Count::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (collaborator_name.is_set || is_set(collaborator_name.yfilter)) leaf_name_data.push_back(collaborator_name.get_name_leafdata());
    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (is_up.is_set || is_set(is_up.yfilter)) leaf_name_data.push_back(is_up.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::Count::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::Count::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::Count::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "collaborator-name")
    {
        collaborator_name = value;
        collaborator_name.value_namespace = name_space;
        collaborator_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-up")
    {
        is_up = value;
        is_up.value_namespace = name_space;
        is_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::Count::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "collaborator-name")
    {
        collaborator_name.yfilter = yfilter;
    }
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "is-up")
    {
        is_up.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::L2VpnCollaborators::CollaboratorStatistics::Count::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collaborator-name" || name == "down" || name == "is-up" || name == "up")
        return true;
    return false;
}

L2Vpnv2::Standby::L2VpnPbbBsa::L2VpnPbbBsa()
    :
    bmac_sa{YType::str, "bmac-sa"},
    chassis_is_provisioned{YType::boolean, "chassis-is-provisioned"},
    chassis_mac{YType::str, "chassis-mac"},
    provisioned{YType::boolean, "provisioned"}
{

    yang_name = "l2vpn-pbb-bsa"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::L2VpnPbbBsa::~L2VpnPbbBsa()
{
}

bool L2Vpnv2::Standby::L2VpnPbbBsa::has_data() const
{
    return bmac_sa.is_set
	|| chassis_is_provisioned.is_set
	|| chassis_mac.is_set
	|| provisioned.is_set;
}

bool L2Vpnv2::Standby::L2VpnPbbBsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bmac_sa.yfilter)
	|| ydk::is_set(chassis_is_provisioned.yfilter)
	|| ydk::is_set(chassis_mac.yfilter)
	|| ydk::is_set(provisioned.yfilter);
}

std::string L2Vpnv2::Standby::L2VpnPbbBsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::L2VpnPbbBsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-pbb-bsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::L2VpnPbbBsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bmac_sa.is_set || is_set(bmac_sa.yfilter)) leaf_name_data.push_back(bmac_sa.get_name_leafdata());
    if (chassis_is_provisioned.is_set || is_set(chassis_is_provisioned.yfilter)) leaf_name_data.push_back(chassis_is_provisioned.get_name_leafdata());
    if (chassis_mac.is_set || is_set(chassis_mac.yfilter)) leaf_name_data.push_back(chassis_mac.get_name_leafdata());
    if (provisioned.is_set || is_set(provisioned.yfilter)) leaf_name_data.push_back(provisioned.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::L2VpnPbbBsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::L2VpnPbbBsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::L2VpnPbbBsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bmac-sa")
    {
        bmac_sa = value;
        bmac_sa.value_namespace = name_space;
        bmac_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-is-provisioned")
    {
        chassis_is_provisioned = value;
        chassis_is_provisioned.value_namespace = name_space;
        chassis_is_provisioned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "chassis-mac")
    {
        chassis_mac = value;
        chassis_mac.value_namespace = name_space;
        chassis_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provisioned")
    {
        provisioned = value;
        provisioned.value_namespace = name_space;
        provisioned.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::L2VpnPbbBsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bmac-sa")
    {
        bmac_sa.yfilter = yfilter;
    }
    if(value_path == "chassis-is-provisioned")
    {
        chassis_is_provisioned.yfilter = yfilter;
    }
    if(value_path == "chassis-mac")
    {
        chassis_mac.yfilter = yfilter;
    }
    if(value_path == "provisioned")
    {
        provisioned.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::L2VpnPbbBsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bmac-sa" || name == "chassis-is-provisioned" || name == "chassis-mac" || name == "provisioned")
        return true;
    return false;
}

L2Vpnv2::Standby::L2VpnResourceState::L2VpnResourceState()
    :
    resource_out_of_memory_state{YType::uint32, "resource-out-of-memory-state"}
{

    yang_name = "l2vpn-resource-state"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::L2VpnResourceState::~L2VpnResourceState()
{
}

bool L2Vpnv2::Standby::L2VpnResourceState::has_data() const
{
    return resource_out_of_memory_state.is_set;
}

bool L2Vpnv2::Standby::L2VpnResourceState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(resource_out_of_memory_state.yfilter);
}

std::string L2Vpnv2::Standby::L2VpnResourceState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::L2VpnResourceState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-resource-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::L2VpnResourceState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (resource_out_of_memory_state.is_set || is_set(resource_out_of_memory_state.yfilter)) leaf_name_data.push_back(resource_out_of_memory_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::L2VpnResourceState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::L2VpnResourceState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::L2VpnResourceState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "resource-out-of-memory-state")
    {
        resource_out_of_memory_state = value;
        resource_out_of_memory_state.value_namespace = name_space;
        resource_out_of_memory_state.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::L2VpnResourceState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "resource-out-of-memory-state")
    {
        resource_out_of_memory_state.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::L2VpnResourceState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resource-out-of-memory-state")
        return true;
    return false;
}

L2Vpnv2::Standby::MainInterfaces::MainInterfaces()
{

    yang_name = "main-interfaces"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::MainInterfaces::~MainInterfaces()
{
}

bool L2Vpnv2::Standby::MainInterfaces::has_data() const
{
    for (std::size_t index=0; index<main_interface.size(); index++)
    {
        if(main_interface[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::MainInterfaces::has_operation() const
{
    for (std::size_t index=0; index<main_interface.size(); index++)
    {
        if(main_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::MainInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::MainInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::MainInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::MainInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-interface")
    {
        for(auto const & c : main_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::MainInterfaces::MainInterface>();
        c->parent = this;
        main_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::MainInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : main_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::MainInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::MainInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::MainInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface")
        return true;
    return false;
}

L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    main_interface_info(std::make_shared<L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInfo>())
	,main_interface_instances(std::make_shared<L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances>())
{
    main_interface_info->parent = this;
    main_interface_instances->parent = this;

    yang_name = "main-interface"; yang_parent_name = "main-interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::MainInterfaces::MainInterface::~MainInterface()
{
}

bool L2Vpnv2::Standby::MainInterfaces::MainInterface::has_data() const
{
    return interface_name.is_set
	|| (main_interface_info !=  nullptr && main_interface_info->has_data())
	|| (main_interface_instances !=  nullptr && main_interface_instances->has_data());
}

bool L2Vpnv2::Standby::MainInterfaces::MainInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (main_interface_info !=  nullptr && main_interface_info->has_operation())
	|| (main_interface_instances !=  nullptr && main_interface_instances->has_operation());
}

std::string L2Vpnv2::Standby::MainInterfaces::MainInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/main-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::MainInterfaces::MainInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::MainInterfaces::MainInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::MainInterfaces::MainInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-interface-info")
    {
        if(main_interface_info == nullptr)
        {
            main_interface_info = std::make_shared<L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInfo>();
        }
        return main_interface_info;
    }

    if(child_yang_name == "main-interface-instances")
    {
        if(main_interface_instances == nullptr)
        {
            main_interface_instances = std::make_shared<L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances>();
        }
        return main_interface_instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::MainInterfaces::MainInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(main_interface_info != nullptr)
    {
        children["main-interface-info"] = main_interface_info;
    }

    if(main_interface_instances != nullptr)
    {
        children["main-interface-instances"] = main_interface_instances;
    }

    return children;
}

void L2Vpnv2::Standby::MainInterfaces::MainInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::MainInterfaces::MainInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::MainInterfaces::MainInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface-info" || name == "main-interface-instances" || name == "interface-name")
        return true;
    return false;
}

L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInfo::MainInterfaceInfo()
    :
    interface_count{YType::uint32, "interface-count"},
    main_interface_handle{YType::str, "main-interface-handle"},
    protected_{YType::enumeration, "protected"}
{

    yang_name = "main-interface-info"; yang_parent_name = "main-interface"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInfo::~MainInterfaceInfo()
{
}

bool L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInfo::has_data() const
{
    return interface_count.is_set
	|| main_interface_handle.is_set
	|| protected_.is_set;
}

bool L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(main_interface_handle.yfilter)
	|| ydk::is_set(protected_.yfilter);
}

std::string L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (main_interface_handle.is_set || is_set(main_interface_handle.yfilter)) leaf_name_data.push_back(main_interface_handle.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-interface-handle")
    {
        main_interface_handle = value;
        main_interface_handle.value_namespace = name_space;
        main_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected")
    {
        protected_ = value;
        protected_.value_namespace = name_space;
        protected_.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "main-interface-handle")
    {
        main_interface_handle.yfilter = yfilter;
    }
    if(value_path == "protected")
    {
        protected_.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-count" || name == "main-interface-handle" || name == "protected")
        return true;
    return false;
}

L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstances()
{

    yang_name = "main-interface-instances"; yang_parent_name = "main-interface"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::~MainInterfaceInstances()
{
}

bool L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::has_data() const
{
    for (std::size_t index=0; index<main_interface_instance.size(); index++)
    {
        if(main_interface_instance[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::has_operation() const
{
    for (std::size_t index=0; index<main_interface_instance.size(); index++)
    {
        if(main_interface_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-interface-instance")
    {
        for(auto const & c : main_interface_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance>();
        c->parent = this;
        main_interface_instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : main_interface_instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface-instance")
        return true;
    return false;
}

L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstance()
    :
    instance{YType::int32, "instance"}
    	,
    main_interface_instance_bridge_ports(std::make_shared<L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts>())
	,main_interface_instance_info(std::make_shared<L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo>())
{
    main_interface_instance_bridge_ports->parent = this;
    main_interface_instance_info->parent = this;

    yang_name = "main-interface-instance"; yang_parent_name = "main-interface-instances"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::~MainInterfaceInstance()
{
}

bool L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::has_data() const
{
    return instance.is_set
	|| (main_interface_instance_bridge_ports !=  nullptr && main_interface_instance_bridge_ports->has_data())
	|| (main_interface_instance_info !=  nullptr && main_interface_instance_info->has_data());
}

bool L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance.yfilter)
	|| (main_interface_instance_bridge_ports !=  nullptr && main_interface_instance_bridge_ports->has_operation())
	|| (main_interface_instance_info !=  nullptr && main_interface_instance_info->has_operation());
}

std::string L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instance" <<"[instance='" <<instance <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-interface-instance-bridge-ports")
    {
        if(main_interface_instance_bridge_ports == nullptr)
        {
            main_interface_instance_bridge_ports = std::make_shared<L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts>();
        }
        return main_interface_instance_bridge_ports;
    }

    if(child_yang_name == "main-interface-instance-info")
    {
        if(main_interface_instance_info == nullptr)
        {
            main_interface_instance_info = std::make_shared<L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo>();
        }
        return main_interface_instance_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(main_interface_instance_bridge_ports != nullptr)
    {
        children["main-interface-instance-bridge-ports"] = main_interface_instance_bridge_ports;
    }

    if(main_interface_instance_info != nullptr)
    {
        children["main-interface-instance-info"] = main_interface_instance_info;
    }

    return children;
}

void L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface-instance-bridge-ports" || name == "main-interface-instance-info" || name == "instance")
        return true;
    return false;
}

L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePorts()
{

    yang_name = "main-interface-instance-bridge-ports"; yang_parent_name = "main-interface-instance"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::~MainInterfaceInstanceBridgePorts()
{
}

bool L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::has_data() const
{
    for (std::size_t index=0; index<main_interface_instance_bridge_port.size(); index++)
    {
        if(main_interface_instance_bridge_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::has_operation() const
{
    for (std::size_t index=0; index<main_interface_instance_bridge_port.size(); index++)
    {
        if(main_interface_instance_bridge_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instance-bridge-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-interface-instance-bridge-port")
    {
        for(auto const & c : main_interface_instance_bridge_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort>();
        c->parent = this;
        main_interface_instance_bridge_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : main_interface_instance_bridge_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface-instance-bridge-port")
        return true;
    return false;
}

L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::MainInterfaceInstanceBridgePort()
    :
    bridge_port{YType::str, "bridge-port"},
    bridge_port_xr{YType::str, "bridge-port-xr"},
    instance_id{YType::uint32, "instance-id"}
{

    yang_name = "main-interface-instance-bridge-port"; yang_parent_name = "main-interface-instance-bridge-ports"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::~MainInterfaceInstanceBridgePort()
{
}

bool L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::has_data() const
{
    return bridge_port.is_set
	|| bridge_port_xr.is_set
	|| instance_id.is_set;
}

bool L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_port.yfilter)
	|| ydk::is_set(bridge_port_xr.yfilter)
	|| ydk::is_set(instance_id.yfilter);
}

std::string L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instance-bridge-port" <<"[bridge-port='" <<bridge_port <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_port.is_set || is_set(bridge_port.yfilter)) leaf_name_data.push_back(bridge_port.get_name_leafdata());
    if (bridge_port_xr.is_set || is_set(bridge_port_xr.yfilter)) leaf_name_data.push_back(bridge_port_xr.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-port")
    {
        bridge_port = value;
        bridge_port.value_namespace = name_space;
        bridge_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-port-xr")
    {
        bridge_port_xr = value;
        bridge_port_xr.value_namespace = name_space;
        bridge_port_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-port")
    {
        bridge_port.yfilter = yfilter;
    }
    if(value_path == "bridge-port-xr")
    {
        bridge_port_xr.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-port" || name == "bridge-port-xr" || name == "instance-id")
        return true;
    return false;
}

L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::MainInterfaceInstanceInfo()
    :
    configured_instance{YType::uint32, "configured-instance"},
    flush_count{YType::uint32, "flush-count"},
    instance_flags{YType::uint32, "instance-flags"},
    instance_id{YType::uint32, "instance-id"},
    instance_state{YType::enumeration, "instance-state"},
    interface_count{YType::uint32, "interface-count"}
{

    yang_name = "main-interface-instance-info"; yang_parent_name = "main-interface-instance"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::~MainInterfaceInstanceInfo()
{
}

bool L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::has_data() const
{
    return configured_instance.is_set
	|| flush_count.is_set
	|| instance_flags.is_set
	|| instance_id.is_set
	|| instance_state.is_set
	|| interface_count.is_set;
}

bool L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configured_instance.yfilter)
	|| ydk::is_set(flush_count.yfilter)
	|| ydk::is_set(instance_flags.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(instance_state.yfilter)
	|| ydk::is_set(interface_count.yfilter);
}

std::string L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instance-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_instance.is_set || is_set(configured_instance.yfilter)) leaf_name_data.push_back(configured_instance.get_name_leafdata());
    if (flush_count.is_set || is_set(flush_count.yfilter)) leaf_name_data.push_back(flush_count.get_name_leafdata());
    if (instance_flags.is_set || is_set(instance_flags.yfilter)) leaf_name_data.push_back(instance_flags.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (instance_state.is_set || is_set(instance_state.yfilter)) leaf_name_data.push_back(instance_state.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-instance")
    {
        configured_instance = value;
        configured_instance.value_namespace = name_space;
        configured_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flush-count")
    {
        flush_count = value;
        flush_count.value_namespace = name_space;
        flush_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-flags")
    {
        instance_flags = value;
        instance_flags.value_namespace = name_space;
        instance_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-state")
    {
        instance_state = value;
        instance_state.value_namespace = name_space;
        instance_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-instance")
    {
        configured_instance.yfilter = yfilter;
    }
    if(value_path == "flush-count")
    {
        flush_count.yfilter = yfilter;
    }
    if(value_path == "instance-flags")
    {
        instance_flags.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "instance-state")
    {
        instance_state.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-instance" || name == "flush-count" || name == "instance-flags" || name == "instance-id" || name == "instance-state" || name == "interface-count")
        return true;
    return false;
}

L2Vpnv2::Standby::MstpPorts::MstpPorts()
{

    yang_name = "mstp-ports"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::MstpPorts::~MstpPorts()
{
}

bool L2Vpnv2::Standby::MstpPorts::has_data() const
{
    for (std::size_t index=0; index<mstp_port.size(); index++)
    {
        if(mstp_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::MstpPorts::has_operation() const
{
    for (std::size_t index=0; index<mstp_port.size(); index++)
    {
        if(mstp_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::MstpPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::MstpPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mstp-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::MstpPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::MstpPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mstp-port")
    {
        for(auto const & c : mstp_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::MstpPorts::MstpPort>();
        c->parent = this;
        mstp_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::MstpPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mstp_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::MstpPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::MstpPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::MstpPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mstp-port")
        return true;
    return false;
}

L2Vpnv2::Standby::MstpPorts::MstpPort::MstpPort()
    :
    interface{YType::str, "interface"},
    interface_name{YType::str, "interface-name"},
    mstp_interface_handle{YType::str, "mstp-interface-handle"},
    protected_{YType::boolean, "protected"},
    reference_count{YType::uint32, "reference-count"}
{

    yang_name = "mstp-port"; yang_parent_name = "mstp-ports"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::MstpPorts::MstpPort::~MstpPort()
{
}

bool L2Vpnv2::Standby::MstpPorts::MstpPort::has_data() const
{
    for (std::size_t index=0; index<msti_entry.size(); index++)
    {
        if(msti_entry[index]->has_data())
            return true;
    }
    return interface.is_set
	|| interface_name.is_set
	|| mstp_interface_handle.is_set
	|| protected_.is_set
	|| reference_count.is_set;
}

bool L2Vpnv2::Standby::MstpPorts::MstpPort::has_operation() const
{
    for (std::size_t index=0; index<msti_entry.size(); index++)
    {
        if(msti_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mstp_interface_handle.yfilter)
	|| ydk::is_set(protected_.yfilter)
	|| ydk::is_set(reference_count.yfilter);
}

std::string L2Vpnv2::Standby::MstpPorts::MstpPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/mstp-ports/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::MstpPorts::MstpPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mstp-port" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::MstpPorts::MstpPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mstp_interface_handle.is_set || is_set(mstp_interface_handle.yfilter)) leaf_name_data.push_back(mstp_interface_handle.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());
    if (reference_count.is_set || is_set(reference_count.yfilter)) leaf_name_data.push_back(reference_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::MstpPorts::MstpPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msti-entry")
    {
        for(auto const & c : msti_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry>();
        c->parent = this;
        msti_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::MstpPorts::MstpPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : msti_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::MstpPorts::MstpPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mstp-interface-handle")
    {
        mstp_interface_handle = value;
        mstp_interface_handle.value_namespace = name_space;
        mstp_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected")
    {
        protected_ = value;
        protected_.value_namespace = name_space;
        protected_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reference-count")
    {
        reference_count = value;
        reference_count.value_namespace = name_space;
        reference_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::MstpPorts::MstpPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mstp-interface-handle")
    {
        mstp_interface_handle.yfilter = yfilter;
    }
    if(value_path == "protected")
    {
        protected_.yfilter = yfilter;
    }
    if(value_path == "reference-count")
    {
        reference_count.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::MstpPorts::MstpPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msti-entry" || name == "interface" || name == "interface-name" || name == "mstp-interface-handle" || name == "protected" || name == "reference-count")
        return true;
    return false;
}

L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::MstiEntry()
    :
    ack_count{YType::uint32, "ack-count"},
    bd_count{YType::uint32, "bd-count"},
    cfg_ms_ti{YType::uint32, "cfg-ms-ti"},
    flush_count{YType::uint32, "flush-count"},
    interface_count{YType::uint32, "interface-count"},
    msti_flags{YType::uint32, "msti-flags"},
    msti_state{YType::enumeration, "msti-state"},
    nack_count{YType::uint32, "nack-count"},
    rcv_count{YType::uint32, "rcv-count"}
{

    yang_name = "msti-entry"; yang_parent_name = "mstp-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::~MstiEntry()
{
}

bool L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::has_data() const
{
    for (std::size_t index=0; index<bd_entry.size(); index++)
    {
        if(bd_entry[index]->has_data())
            return true;
    }
    return ack_count.is_set
	|| bd_count.is_set
	|| cfg_ms_ti.is_set
	|| flush_count.is_set
	|| interface_count.is_set
	|| msti_flags.is_set
	|| msti_state.is_set
	|| nack_count.is_set
	|| rcv_count.is_set;
}

bool L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::has_operation() const
{
    for (std::size_t index=0; index<bd_entry.size(); index++)
    {
        if(bd_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ack_count.yfilter)
	|| ydk::is_set(bd_count.yfilter)
	|| ydk::is_set(cfg_ms_ti.yfilter)
	|| ydk::is_set(flush_count.yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(msti_flags.yfilter)
	|| ydk::is_set(msti_state.yfilter)
	|| ydk::is_set(nack_count.yfilter)
	|| ydk::is_set(rcv_count.yfilter);
}

std::string L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msti-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack_count.is_set || is_set(ack_count.yfilter)) leaf_name_data.push_back(ack_count.get_name_leafdata());
    if (bd_count.is_set || is_set(bd_count.yfilter)) leaf_name_data.push_back(bd_count.get_name_leafdata());
    if (cfg_ms_ti.is_set || is_set(cfg_ms_ti.yfilter)) leaf_name_data.push_back(cfg_ms_ti.get_name_leafdata());
    if (flush_count.is_set || is_set(flush_count.yfilter)) leaf_name_data.push_back(flush_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (msti_flags.is_set || is_set(msti_flags.yfilter)) leaf_name_data.push_back(msti_flags.get_name_leafdata());
    if (msti_state.is_set || is_set(msti_state.yfilter)) leaf_name_data.push_back(msti_state.get_name_leafdata());
    if (nack_count.is_set || is_set(nack_count.yfilter)) leaf_name_data.push_back(nack_count.get_name_leafdata());
    if (rcv_count.is_set || is_set(rcv_count.yfilter)) leaf_name_data.push_back(rcv_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-entry")
    {
        for(auto const & c : bd_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::BdEntry>();
        c->parent = this;
        bd_entry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bd_entry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack-count")
    {
        ack_count = value;
        ack_count.value_namespace = name_space;
        ack_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-count")
    {
        bd_count = value;
        bd_count.value_namespace = name_space;
        bd_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfg-ms-ti")
    {
        cfg_ms_ti = value;
        cfg_ms_ti.value_namespace = name_space;
        cfg_ms_ti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flush-count")
    {
        flush_count = value;
        flush_count.value_namespace = name_space;
        flush_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti-flags")
    {
        msti_flags = value;
        msti_flags.value_namespace = name_space;
        msti_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti-state")
    {
        msti_state = value;
        msti_state.value_namespace = name_space;
        msti_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nack-count")
    {
        nack_count = value;
        nack_count.value_namespace = name_space;
        nack_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcv-count")
    {
        rcv_count = value;
        rcv_count.value_namespace = name_space;
        rcv_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack-count")
    {
        ack_count.yfilter = yfilter;
    }
    if(value_path == "bd-count")
    {
        bd_count.yfilter = yfilter;
    }
    if(value_path == "cfg-ms-ti")
    {
        cfg_ms_ti.yfilter = yfilter;
    }
    if(value_path == "flush-count")
    {
        flush_count.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "msti-flags")
    {
        msti_flags.yfilter = yfilter;
    }
    if(value_path == "msti-state")
    {
        msti_state.yfilter = yfilter;
    }
    if(value_path == "nack-count")
    {
        nack_count.yfilter = yfilter;
    }
    if(value_path == "rcv-count")
    {
        rcv_count.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-entry" || name == "ack-count" || name == "bd-count" || name == "cfg-ms-ti" || name == "flush-count" || name == "interface-count" || name == "msti-flags" || name == "msti-state" || name == "nack-count" || name == "rcv-count")
        return true;
    return false;
}

L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::BdEntry::BdEntry()
    :
    bdid{YType::uint32, "bdid"},
    bdif_count{YType::uint32, "bdif-count"}
{

    yang_name = "bd-entry"; yang_parent_name = "msti-entry"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::BdEntry::~BdEntry()
{
}

bool L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::BdEntry::has_data() const
{
    return bdid.is_set
	|| bdif_count.is_set;
}

bool L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::BdEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bdid.yfilter)
	|| ydk::is_set(bdif_count.yfilter);
}

std::string L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::BdEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::BdEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bdid.is_set || is_set(bdid.yfilter)) leaf_name_data.push_back(bdid.get_name_leafdata());
    if (bdif_count.is_set || is_set(bdif_count.yfilter)) leaf_name_data.push_back(bdif_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::BdEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::BdEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::BdEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bdid")
    {
        bdid = value;
        bdid.value_namespace = name_space;
        bdid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdif-count")
    {
        bdif_count = value;
        bdif_count.value_namespace = name_space;
        bdif_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::BdEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bdid")
    {
        bdid.yfilter = yfilter;
    }
    if(value_path == "bdif-count")
    {
        bdif_count.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::MstpPorts::MstpPort::MstiEntry::BdEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bdid" || name == "bdif-count")
        return true;
    return false;
}

L2Vpnv2::Standby::MstpVlans::MstpVlans()
{

    yang_name = "mstp-vlans"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::MstpVlans::~MstpVlans()
{
}

bool L2Vpnv2::Standby::MstpVlans::has_data() const
{
    for (std::size_t index=0; index<mstp_vlan.size(); index++)
    {
        if(mstp_vlan[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::MstpVlans::has_operation() const
{
    for (std::size_t index=0; index<mstp_vlan.size(); index++)
    {
        if(mstp_vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::MstpVlans::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::MstpVlans::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mstp-vlans";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::MstpVlans::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::MstpVlans::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mstp-vlan")
    {
        for(auto const & c : mstp_vlan)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::MstpVlans::MstpVlan>();
        c->parent = this;
        mstp_vlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::MstpVlans::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mstp_vlan)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::MstpVlans::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::MstpVlans::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::MstpVlans::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mstp-vlan")
        return true;
    return false;
}

L2Vpnv2::Standby::MstpVlans::MstpVlan::MstpVlan()
    :
    vlan_id{YType::uint32, "vlan-id"},
    msti_id{YType::uint32, "msti-id"},
    port_count{YType::uint32, "port-count"},
    vlan_id_xr{YType::uint32, "vlan-id-xr"}
{

    yang_name = "mstp-vlan"; yang_parent_name = "mstp-vlans"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::MstpVlans::MstpVlan::~MstpVlan()
{
}

bool L2Vpnv2::Standby::MstpVlans::MstpVlan::has_data() const
{
    for (std::size_t index=0; index<sub_interface.size(); index++)
    {
        if(sub_interface[index]->has_data())
            return true;
    }
    return vlan_id.is_set
	|| msti_id.is_set
	|| port_count.is_set
	|| vlan_id_xr.is_set;
}

bool L2Vpnv2::Standby::MstpVlans::MstpVlan::has_operation() const
{
    for (std::size_t index=0; index<sub_interface.size(); index++)
    {
        if(sub_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(msti_id.yfilter)
	|| ydk::is_set(port_count.yfilter)
	|| ydk::is_set(vlan_id_xr.yfilter);
}

std::string L2Vpnv2::Standby::MstpVlans::MstpVlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/mstp-vlans/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::MstpVlans::MstpVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mstp-vlan" <<"[vlan-id='" <<vlan_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::MstpVlans::MstpVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (msti_id.is_set || is_set(msti_id.yfilter)) leaf_name_data.push_back(msti_id.get_name_leafdata());
    if (port_count.is_set || is_set(port_count.yfilter)) leaf_name_data.push_back(port_count.get_name_leafdata());
    if (vlan_id_xr.is_set || is_set(vlan_id_xr.yfilter)) leaf_name_data.push_back(vlan_id_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::MstpVlans::MstpVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sub-interface")
    {
        for(auto const & c : sub_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::MstpVlans::MstpVlan::SubInterface>();
        c->parent = this;
        sub_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::MstpVlans::MstpVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sub_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::MstpVlans::MstpVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti-id")
    {
        msti_id = value;
        msti_id.value_namespace = name_space;
        msti_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-count")
    {
        port_count = value;
        port_count.value_namespace = name_space;
        port_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id-xr")
    {
        vlan_id_xr = value;
        vlan_id_xr.value_namespace = name_space;
        vlan_id_xr.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::MstpVlans::MstpVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "msti-id")
    {
        msti_id.yfilter = yfilter;
    }
    if(value_path == "port-count")
    {
        port_count.yfilter = yfilter;
    }
    if(value_path == "vlan-id-xr")
    {
        vlan_id_xr.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::MstpVlans::MstpVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-interface" || name == "vlan-id" || name == "msti-id" || name == "port-count" || name == "vlan-id-xr")
        return true;
    return false;
}

L2Vpnv2::Standby::MstpVlans::MstpVlan::SubInterface::SubInterface()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "sub-interface"; yang_parent_name = "mstp-vlan"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::MstpVlans::MstpVlan::SubInterface::~SubInterface()
{
}

bool L2Vpnv2::Standby::MstpVlans::MstpVlan::SubInterface::has_data() const
{
    return interface_name.is_set;
}

bool L2Vpnv2::Standby::MstpVlans::MstpVlan::SubInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string L2Vpnv2::Standby::MstpVlans::MstpVlan::SubInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::MstpVlans::MstpVlan::SubInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::MstpVlans::MstpVlan::SubInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::MstpVlans::MstpVlan::SubInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::MstpVlans::MstpVlan::SubInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::MstpVlans::MstpVlan::SubInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::MstpVlans::MstpVlan::SubInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

L2Vpnv2::Standby::Mvrp::Mvrp()
    :
    mvrp_main_ports(std::make_shared<L2Vpnv2::Standby::Mvrp::MvrpMainPorts>())
{
    mvrp_main_ports->parent = this;

    yang_name = "mvrp"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Mvrp::~Mvrp()
{
}

bool L2Vpnv2::Standby::Mvrp::has_data() const
{
    return (mvrp_main_ports !=  nullptr && mvrp_main_ports->has_data());
}

bool L2Vpnv2::Standby::Mvrp::has_operation() const
{
    return is_set(yfilter)
	|| (mvrp_main_ports !=  nullptr && mvrp_main_ports->has_operation());
}

std::string L2Vpnv2::Standby::Mvrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Mvrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Mvrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Mvrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mvrp-main-ports")
    {
        if(mvrp_main_ports == nullptr)
        {
            mvrp_main_ports = std::make_shared<L2Vpnv2::Standby::Mvrp::MvrpMainPorts>();
        }
        return mvrp_main_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Mvrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mvrp_main_ports != nullptr)
    {
        children["mvrp-main-ports"] = mvrp_main_ports;
    }

    return children;
}

void L2Vpnv2::Standby::Mvrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::Mvrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::Mvrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mvrp-main-ports")
        return true;
    return false;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPorts()
{

    yang_name = "mvrp-main-ports"; yang_parent_name = "mvrp"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::~MvrpMainPorts()
{
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::has_data() const
{
    for (std::size_t index=0; index<mvrp_main_port.size(); index++)
    {
        if(mvrp_main_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::has_operation() const
{
    for (std::size_t index=0; index<mvrp_main_port.size(); index++)
    {
        if(mvrp_main_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::Mvrp::MvrpMainPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/mvrp/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Mvrp::MvrpMainPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvrp-main-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Mvrp::MvrpMainPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mvrp-main-port")
    {
        for(auto const & c : mvrp_main_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort>();
        c->parent = this;
        mvrp_main_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mvrp_main_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mvrp-main-port")
        return true;
    return false;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPort()
    :
    main_port_interface_name{YType::str, "main-port-interface-name"}
    	,
    mvrp_bridge_ports(std::make_shared<L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts>())
	,mvrp_main_port_info(std::make_shared<L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo>())
{
    mvrp_bridge_ports->parent = this;
    mvrp_main_port_info->parent = this;

    yang_name = "mvrp-main-port"; yang_parent_name = "mvrp-main-ports"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::~MvrpMainPort()
{
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::has_data() const
{
    return main_port_interface_name.is_set
	|| (mvrp_bridge_ports !=  nullptr && mvrp_bridge_ports->has_data())
	|| (mvrp_main_port_info !=  nullptr && mvrp_main_port_info->has_data());
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(main_port_interface_name.yfilter)
	|| (mvrp_bridge_ports !=  nullptr && mvrp_bridge_ports->has_operation())
	|| (mvrp_main_port_info !=  nullptr && mvrp_main_port_info->has_operation());
}

std::string L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/mvrp/mvrp-main-ports/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvrp-main-port" <<"[main-port-interface-name='" <<main_port_interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (main_port_interface_name.is_set || is_set(main_port_interface_name.yfilter)) leaf_name_data.push_back(main_port_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mvrp-bridge-ports")
    {
        if(mvrp_bridge_ports == nullptr)
        {
            mvrp_bridge_ports = std::make_shared<L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts>();
        }
        return mvrp_bridge_ports;
    }

    if(child_yang_name == "mvrp-main-port-info")
    {
        if(mvrp_main_port_info == nullptr)
        {
            mvrp_main_port_info = std::make_shared<L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo>();
        }
        return mvrp_main_port_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mvrp_bridge_ports != nullptr)
    {
        children["mvrp-bridge-ports"] = mvrp_bridge_ports;
    }

    if(mvrp_main_port_info != nullptr)
    {
        children["mvrp-main-port-info"] = mvrp_main_port_info;
    }

    return children;
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "main-port-interface-name")
    {
        main_port_interface_name = value;
        main_port_interface_name.value_namespace = name_space;
        main_port_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "main-port-interface-name")
    {
        main_port_interface_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mvrp-bridge-ports" || name == "mvrp-main-port-info" || name == "main-port-interface-name")
        return true;
    return false;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePorts()
{

    yang_name = "mvrp-bridge-ports"; yang_parent_name = "mvrp-main-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::~MvrpBridgePorts()
{
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::has_data() const
{
    for (std::size_t index=0; index<mvrp_bridge_port.size(); index++)
    {
        if(mvrp_bridge_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::has_operation() const
{
    for (std::size_t index=0; index<mvrp_bridge_port.size(); index++)
    {
        if(mvrp_bridge_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvrp-bridge-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mvrp-bridge-port")
    {
        for(auto const & c : mvrp_bridge_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort>();
        c->parent = this;
        mvrp_bridge_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mvrp_bridge_port)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mvrp-bridge-port")
        return true;
    return false;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::MvrpBridgePort()
    :
    interface_name{YType::str, "interface-name"},
    bridge_port_interface_name{YType::str, "bridge-port-interface-name"},
    bridge_port_xconnect_id{YType::uint32, "bridge-port-xconnect-id"},
    mvrp_sequence_number{YType::uint16, "mvrp-sequence-number"}
{

    yang_name = "mvrp-bridge-port"; yang_parent_name = "mvrp-bridge-ports"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::~MvrpBridgePort()
{
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::has_data() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| bridge_port_interface_name.is_set
	|| bridge_port_xconnect_id.is_set
	|| mvrp_sequence_number.is_set;
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::has_operation() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bridge_port_interface_name.yfilter)
	|| ydk::is_set(bridge_port_xconnect_id.yfilter)
	|| ydk::is_set(mvrp_sequence_number.yfilter);
}

std::string L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvrp-bridge-port" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bridge_port_interface_name.is_set || is_set(bridge_port_interface_name.yfilter)) leaf_name_data.push_back(bridge_port_interface_name.get_name_leafdata());
    if (bridge_port_xconnect_id.is_set || is_set(bridge_port_xconnect_id.yfilter)) leaf_name_data.push_back(bridge_port_xconnect_id.get_name_leafdata());
    if (mvrp_sequence_number.is_set || is_set(mvrp_sequence_number.yfilter)) leaf_name_data.push_back(mvrp_sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange>();
        c->parent = this;
        vlan_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-port-interface-name")
    {
        bridge_port_interface_name = value;
        bridge_port_interface_name.value_namespace = name_space;
        bridge_port_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-port-xconnect-id")
    {
        bridge_port_xconnect_id = value;
        bridge_port_xconnect_id.value_namespace = name_space;
        bridge_port_xconnect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvrp-sequence-number")
    {
        mvrp_sequence_number = value;
        mvrp_sequence_number.value_namespace = name_space;
        mvrp_sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bridge-port-interface-name")
    {
        bridge_port_interface_name.yfilter = yfilter;
    }
    if(value_path == "bridge-port-xconnect-id")
    {
        bridge_port_xconnect_id.yfilter = yfilter;
    }
    if(value_path == "mvrp-sequence-number")
    {
        mvrp_sequence_number.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-range" || name == "interface-name" || name == "bridge-port-interface-name" || name == "bridge-port-xconnect-id" || name == "mvrp-sequence-number")
        return true;
    return false;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{

    yang_name = "vlan-range"; yang_parent_name = "mvrp-bridge-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::~VlanRange()
{
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter);
}

std::string L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpBridgePorts::MvrpBridgePort::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower" || name == "upper")
        return true;
    return false;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::MvrpMainPortInfo()
    :
    is_default_encap{YType::boolean, "is-default-encap"},
    is_trunk{YType::boolean, "is-trunk"},
    main_port_interface_name{YType::str, "main-port-interface-name"},
    number_of_bridge_ports{YType::uint32, "number-of-bridge-ports"}
    	,
    default_bridge_port(std::make_shared<L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort>())
{
    default_bridge_port->parent = this;

    yang_name = "mvrp-main-port-info"; yang_parent_name = "mvrp-main-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::~MvrpMainPortInfo()
{
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::has_data() const
{
    return is_default_encap.is_set
	|| is_trunk.is_set
	|| main_port_interface_name.is_set
	|| number_of_bridge_ports.is_set
	|| (default_bridge_port !=  nullptr && default_bridge_port->has_data());
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_default_encap.yfilter)
	|| ydk::is_set(is_trunk.yfilter)
	|| ydk::is_set(main_port_interface_name.yfilter)
	|| ydk::is_set(number_of_bridge_ports.yfilter)
	|| (default_bridge_port !=  nullptr && default_bridge_port->has_operation());
}

std::string L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvrp-main-port-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_default_encap.is_set || is_set(is_default_encap.yfilter)) leaf_name_data.push_back(is_default_encap.get_name_leafdata());
    if (is_trunk.is_set || is_set(is_trunk.yfilter)) leaf_name_data.push_back(is_trunk.get_name_leafdata());
    if (main_port_interface_name.is_set || is_set(main_port_interface_name.yfilter)) leaf_name_data.push_back(main_port_interface_name.get_name_leafdata());
    if (number_of_bridge_ports.is_set || is_set(number_of_bridge_ports.yfilter)) leaf_name_data.push_back(number_of_bridge_ports.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-bridge-port")
    {
        if(default_bridge_port == nullptr)
        {
            default_bridge_port = std::make_shared<L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort>();
        }
        return default_bridge_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_bridge_port != nullptr)
    {
        children["default-bridge-port"] = default_bridge_port;
    }

    return children;
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-default-encap")
    {
        is_default_encap = value;
        is_default_encap.value_namespace = name_space;
        is_default_encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-trunk")
    {
        is_trunk = value;
        is_trunk.value_namespace = name_space;
        is_trunk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-port-interface-name")
    {
        main_port_interface_name = value;
        main_port_interface_name.value_namespace = name_space;
        main_port_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-bridge-ports")
    {
        number_of_bridge_ports = value;
        number_of_bridge_ports.value_namespace = name_space;
        number_of_bridge_ports.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-default-encap")
    {
        is_default_encap.yfilter = yfilter;
    }
    if(value_path == "is-trunk")
    {
        is_trunk.yfilter = yfilter;
    }
    if(value_path == "main-port-interface-name")
    {
        main_port_interface_name.yfilter = yfilter;
    }
    if(value_path == "number-of-bridge-ports")
    {
        number_of_bridge_ports.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-bridge-port" || name == "is-default-encap" || name == "is-trunk" || name == "main-port-interface-name" || name == "number-of-bridge-ports")
        return true;
    return false;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::DefaultBridgePort()
    :
    bridge_port_interface_name{YType::str, "bridge-port-interface-name"},
    bridge_port_xconnect_id{YType::uint32, "bridge-port-xconnect-id"},
    mvrp_sequence_number{YType::uint16, "mvrp-sequence-number"}
{

    yang_name = "default-bridge-port"; yang_parent_name = "mvrp-main-port-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::~DefaultBridgePort()
{
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::has_data() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return bridge_port_interface_name.is_set
	|| bridge_port_xconnect_id.is_set
	|| mvrp_sequence_number.is_set;
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::has_operation() const
{
    for (std::size_t index=0; index<vlan_range.size(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bridge_port_interface_name.yfilter)
	|| ydk::is_set(bridge_port_xconnect_id.yfilter)
	|| ydk::is_set(mvrp_sequence_number.yfilter);
}

std::string L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-bridge-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_port_interface_name.is_set || is_set(bridge_port_interface_name.yfilter)) leaf_name_data.push_back(bridge_port_interface_name.get_name_leafdata());
    if (bridge_port_xconnect_id.is_set || is_set(bridge_port_xconnect_id.yfilter)) leaf_name_data.push_back(bridge_port_xconnect_id.get_name_leafdata());
    if (mvrp_sequence_number.is_set || is_set(mvrp_sequence_number.yfilter)) leaf_name_data.push_back(mvrp_sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange>();
        c->parent = this;
        vlan_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-port-interface-name")
    {
        bridge_port_interface_name = value;
        bridge_port_interface_name.value_namespace = name_space;
        bridge_port_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-port-xconnect-id")
    {
        bridge_port_xconnect_id = value;
        bridge_port_xconnect_id.value_namespace = name_space;
        bridge_port_xconnect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvrp-sequence-number")
    {
        mvrp_sequence_number = value;
        mvrp_sequence_number.value_namespace = name_space;
        mvrp_sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-port-interface-name")
    {
        bridge_port_interface_name.yfilter = yfilter;
    }
    if(value_path == "bridge-port-xconnect-id")
    {
        bridge_port_xconnect_id.yfilter = yfilter;
    }
    if(value_path == "mvrp-sequence-number")
    {
        mvrp_sequence_number.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-range" || name == "bridge-port-interface-name" || name == "bridge-port-xconnect-id" || name == "mvrp-sequence-number")
        return true;
    return false;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{

    yang_name = "vlan-range"; yang_parent_name = "default-bridge-port"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::~VlanRange()
{
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::has_data() const
{
    return lower.is_set
	|| upper.is_set;
}

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter);
}

std::string L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
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

bool L2Vpnv2::Standby::Mvrp::MvrpMainPorts::MvrpMainPort::MvrpMainPortInfo::DefaultBridgePort::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower" || name == "upper")
        return true;
    return false;
}

L2Vpnv2::Standby::Nsr::Nsr()
    :
    process_role{YType::uint8, "process-role"},
    process_state{YType::uint8, "process-state"},
    sw_install_in_progress{YType::boolean, "sw-install-in-progress"},
    sync_flags{YType::uint32, "sync-flags"}
    	,
    failover_status(std::make_shared<L2Vpnv2::Standby::Nsr::FailoverStatus>())
	,issu_status(std::make_shared<L2Vpnv2::Standby::Nsr::IssuStatus>())
	,nsr_status(std::make_shared<L2Vpnv2::Standby::Nsr::NsrStatus>())
{
    failover_status->parent = this;
    issu_status->parent = this;
    nsr_status->parent = this;

    yang_name = "nsr"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Nsr::~Nsr()
{
}

bool L2Vpnv2::Standby::Nsr::has_data() const
{
    for (std::size_t index=0; index<event_history.size(); index++)
    {
        if(event_history[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<report_card.size(); index++)
    {
        if(report_card[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<state_transition_time.size(); index++)
    {
        if(state_transition_time[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<xid_info.size(); index++)
    {
        if(xid_info[index]->has_data())
            return true;
    }
    return process_role.is_set
	|| process_state.is_set
	|| sw_install_in_progress.is_set
	|| sync_flags.is_set
	|| (failover_status !=  nullptr && failover_status->has_data())
	|| (issu_status !=  nullptr && issu_status->has_data())
	|| (nsr_status !=  nullptr && nsr_status->has_data());
}

bool L2Vpnv2::Standby::Nsr::has_operation() const
{
    for (std::size_t index=0; index<event_history.size(); index++)
    {
        if(event_history[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<report_card.size(); index++)
    {
        if(report_card[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<state_transition_time.size(); index++)
    {
        if(state_transition_time[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<xid_info.size(); index++)
    {
        if(xid_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_role.yfilter)
	|| ydk::is_set(process_state.yfilter)
	|| ydk::is_set(sw_install_in_progress.yfilter)
	|| ydk::is_set(sync_flags.yfilter)
	|| (failover_status !=  nullptr && failover_status->has_operation())
	|| (issu_status !=  nullptr && issu_status->has_operation())
	|| (nsr_status !=  nullptr && nsr_status->has_operation());
}

std::string L2Vpnv2::Standby::Nsr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Nsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_role.is_set || is_set(process_role.yfilter)) leaf_name_data.push_back(process_role.get_name_leafdata());
    if (process_state.is_set || is_set(process_state.yfilter)) leaf_name_data.push_back(process_state.get_name_leafdata());
    if (sw_install_in_progress.is_set || is_set(sw_install_in_progress.yfilter)) leaf_name_data.push_back(sw_install_in_progress.get_name_leafdata());
    if (sync_flags.is_set || is_set(sync_flags.yfilter)) leaf_name_data.push_back(sync_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-history")
    {
        for(auto const & c : event_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::Nsr::EventHistory>();
        c->parent = this;
        event_history.push_back(c);
        return c;
    }

    if(child_yang_name == "failover-status")
    {
        if(failover_status == nullptr)
        {
            failover_status = std::make_shared<L2Vpnv2::Standby::Nsr::FailoverStatus>();
        }
        return failover_status;
    }

    if(child_yang_name == "issu-status")
    {
        if(issu_status == nullptr)
        {
            issu_status = std::make_shared<L2Vpnv2::Standby::Nsr::IssuStatus>();
        }
        return issu_status;
    }

    if(child_yang_name == "nsr-status")
    {
        if(nsr_status == nullptr)
        {
            nsr_status = std::make_shared<L2Vpnv2::Standby::Nsr::NsrStatus>();
        }
        return nsr_status;
    }

    if(child_yang_name == "report-card")
    {
        for(auto const & c : report_card)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::Nsr::ReportCard>();
        c->parent = this;
        report_card.push_back(c);
        return c;
    }

    if(child_yang_name == "state-transition-time")
    {
        for(auto const & c : state_transition_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::Nsr::StateTransitionTime>();
        c->parent = this;
        state_transition_time.push_back(c);
        return c;
    }

    if(child_yang_name == "xid-info")
    {
        for(auto const & c : xid_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::Nsr::XidInfo>();
        c->parent = this;
        xid_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Nsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : event_history)
    {
        children[c->get_segment_path()] = c;
    }

    if(failover_status != nullptr)
    {
        children["failover-status"] = failover_status;
    }

    if(issu_status != nullptr)
    {
        children["issu-status"] = issu_status;
    }

    if(nsr_status != nullptr)
    {
        children["nsr-status"] = nsr_status;
    }

    for (auto const & c : report_card)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : state_transition_time)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : xid_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::Nsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-role")
    {
        process_role = value;
        process_role.value_namespace = name_space;
        process_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-state")
    {
        process_state = value;
        process_state.value_namespace = name_space;
        process_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-install-in-progress")
    {
        sw_install_in_progress = value;
        sw_install_in_progress.value_namespace = name_space;
        sw_install_in_progress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-flags")
    {
        sync_flags = value;
        sync_flags.value_namespace = name_space;
        sync_flags.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Nsr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-role")
    {
        process_role.yfilter = yfilter;
    }
    if(value_path == "process-state")
    {
        process_state.yfilter = yfilter;
    }
    if(value_path == "sw-install-in-progress")
    {
        sw_install_in_progress.yfilter = yfilter;
    }
    if(value_path == "sync-flags")
    {
        sync_flags.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Nsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-history" || name == "failover-status" || name == "issu-status" || name == "nsr-status" || name == "report-card" || name == "state-transition-time" || name == "xid-info" || name == "process-role" || name == "process-state" || name == "sw-install-in-progress" || name == "sync-flags")
        return true;
    return false;
}

L2Vpnv2::Standby::Nsr::EventHistory::EventHistory()
    :
    event_timestamp{YType::uint32, "event-timestamp"},
    new_state{YType::uint8, "new-state"},
    previous_state{YType::uint8, "previous-state"},
    process_collaborator{YType::uint16, "process-collaborator"},
    process_event{YType::uint16, "process-event"}
{

    yang_name = "event-history"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Nsr::EventHistory::~EventHistory()
{
}

bool L2Vpnv2::Standby::Nsr::EventHistory::has_data() const
{
    return event_timestamp.is_set
	|| new_state.is_set
	|| previous_state.is_set
	|| process_collaborator.is_set
	|| process_event.is_set;
}

bool L2Vpnv2::Standby::Nsr::EventHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_timestamp.yfilter)
	|| ydk::is_set(new_state.yfilter)
	|| ydk::is_set(previous_state.yfilter)
	|| ydk::is_set(process_collaborator.yfilter)
	|| ydk::is_set(process_event.yfilter);
}

std::string L2Vpnv2::Standby::Nsr::EventHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/nsr/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Nsr::EventHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Nsr::EventHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_timestamp.is_set || is_set(event_timestamp.yfilter)) leaf_name_data.push_back(event_timestamp.get_name_leafdata());
    if (new_state.is_set || is_set(new_state.yfilter)) leaf_name_data.push_back(new_state.get_name_leafdata());
    if (previous_state.is_set || is_set(previous_state.yfilter)) leaf_name_data.push_back(previous_state.get_name_leafdata());
    if (process_collaborator.is_set || is_set(process_collaborator.yfilter)) leaf_name_data.push_back(process_collaborator.get_name_leafdata());
    if (process_event.is_set || is_set(process_event.yfilter)) leaf_name_data.push_back(process_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Nsr::EventHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Nsr::EventHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Nsr::EventHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-timestamp")
    {
        event_timestamp = value;
        event_timestamp.value_namespace = name_space;
        event_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-state")
    {
        new_state = value;
        new_state.value_namespace = name_space;
        new_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-state")
    {
        previous_state = value;
        previous_state.value_namespace = name_space;
        previous_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-collaborator")
    {
        process_collaborator = value;
        process_collaborator.value_namespace = name_space;
        process_collaborator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-event")
    {
        process_event = value;
        process_event.value_namespace = name_space;
        process_event.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Nsr::EventHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-timestamp")
    {
        event_timestamp.yfilter = yfilter;
    }
    if(value_path == "new-state")
    {
        new_state.yfilter = yfilter;
    }
    if(value_path == "previous-state")
    {
        previous_state.yfilter = yfilter;
    }
    if(value_path == "process-collaborator")
    {
        process_collaborator.yfilter = yfilter;
    }
    if(value_path == "process-event")
    {
        process_event.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Nsr::EventHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-timestamp" || name == "new-state" || name == "previous-state" || name == "process-collaborator" || name == "process-event")
        return true;
    return false;
}

L2Vpnv2::Standby::Nsr::FailoverStatus::FailoverStatus()
    :
    master_time{YType::uint32, "master-time"},
    start_time{YType::uint32, "start-time"},
    triggered_time{YType::uint32, "triggered-time"}
{

    yang_name = "failover-status"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Nsr::FailoverStatus::~FailoverStatus()
{
}

bool L2Vpnv2::Standby::Nsr::FailoverStatus::has_data() const
{
    return master_time.is_set
	|| start_time.is_set
	|| triggered_time.is_set;
}

bool L2Vpnv2::Standby::Nsr::FailoverStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(master_time.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(triggered_time.yfilter);
}

std::string L2Vpnv2::Standby::Nsr::FailoverStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/nsr/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Nsr::FailoverStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failover-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Nsr::FailoverStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master_time.is_set || is_set(master_time.yfilter)) leaf_name_data.push_back(master_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (triggered_time.is_set || is_set(triggered_time.yfilter)) leaf_name_data.push_back(triggered_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Nsr::FailoverStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Nsr::FailoverStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Nsr::FailoverStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "master-time")
    {
        master_time = value;
        master_time.value_namespace = name_space;
        master_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "triggered-time")
    {
        triggered_time = value;
        triggered_time.value_namespace = name_space;
        triggered_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Nsr::FailoverStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "master-time")
    {
        master_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "triggered-time")
    {
        triggered_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Nsr::FailoverStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "master-time" || name == "start-time" || name == "triggered-time")
        return true;
    return false;
}

L2Vpnv2::Standby::Nsr::IssuStatus::IssuStatus()
    :
    role{YType::enumeration, "role"}
    	,
    idt_status(std::make_shared<L2Vpnv2::Standby::Nsr::IssuStatus::IdtStatus>())
	,previ_ous_idt_status(std::make_shared<L2Vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus>())
{
    idt_status->parent = this;
    previ_ous_idt_status->parent = this;

    yang_name = "issu-status"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Nsr::IssuStatus::~IssuStatus()
{
}

bool L2Vpnv2::Standby::Nsr::IssuStatus::has_data() const
{
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_data());
}

bool L2Vpnv2::Standby::Nsr::IssuStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_operation());
}

std::string L2Vpnv2::Standby::Nsr::IssuStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/nsr/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Nsr::IssuStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Nsr::IssuStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Nsr::IssuStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt-status")
    {
        if(idt_status == nullptr)
        {
            idt_status = std::make_shared<L2Vpnv2::Standby::Nsr::IssuStatus::IdtStatus>();
        }
        return idt_status;
    }

    if(child_yang_name == "previ-ous-idt-status")
    {
        if(previ_ous_idt_status == nullptr)
        {
            previ_ous_idt_status = std::make_shared<L2Vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus>();
        }
        return previ_ous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Nsr::IssuStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idt_status != nullptr)
    {
        children["idt-status"] = idt_status;
    }

    if(previ_ous_idt_status != nullptr)
    {
        children["previ-ous-idt-status"] = previ_ous_idt_status;
    }

    return children;
}

void L2Vpnv2::Standby::Nsr::IssuStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Nsr::IssuStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Nsr::IssuStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt-status" || name == "previ-ous-idt-status" || name == "role")
        return true;
    return false;
}

L2Vpnv2::Standby::Nsr::IssuStatus::IdtStatus::IdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "idt-status"; yang_parent_name = "issu-status"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Nsr::IssuStatus::IdtStatus::~IdtStatus()
{
}

bool L2Vpnv2::Standby::Nsr::IssuStatus::IdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool L2Vpnv2::Standby::Nsr::IssuStatus::IdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2Vpnv2::Standby::Nsr::IssuStatus::IdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/nsr/issu-status/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Nsr::IssuStatus::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Nsr::IssuStatus::IdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Nsr::IssuStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Nsr::IssuStatus::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Nsr::IssuStatus::IdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Nsr::IssuStatus::IdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Nsr::IssuStatus::IdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

L2Vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus::PreviOusIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previ-ous-idt-status"; yang_parent_name = "issu-status"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus::~PreviOusIdtStatus()
{
}

bool L2Vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool L2Vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2Vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/nsr/issu-status/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previ-ous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

L2Vpnv2::Standby::Nsr::NsrStatus::NsrStatus()
    :
    role{YType::enumeration, "role"}
    	,
    idt_status(std::make_shared<L2Vpnv2::Standby::Nsr::NsrStatus::IdtStatus>())
	,previ_ous_idt_status(std::make_shared<L2Vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus>())
{
    idt_status->parent = this;
    previ_ous_idt_status->parent = this;

    yang_name = "nsr-status"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Nsr::NsrStatus::~NsrStatus()
{
}

bool L2Vpnv2::Standby::Nsr::NsrStatus::has_data() const
{
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_data());
}

bool L2Vpnv2::Standby::Nsr::NsrStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_operation());
}

std::string L2Vpnv2::Standby::Nsr::NsrStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/nsr/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Nsr::NsrStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Nsr::NsrStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Nsr::NsrStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt-status")
    {
        if(idt_status == nullptr)
        {
            idt_status = std::make_shared<L2Vpnv2::Standby::Nsr::NsrStatus::IdtStatus>();
        }
        return idt_status;
    }

    if(child_yang_name == "previ-ous-idt-status")
    {
        if(previ_ous_idt_status == nullptr)
        {
            previ_ous_idt_status = std::make_shared<L2Vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus>();
        }
        return previ_ous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Nsr::NsrStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idt_status != nullptr)
    {
        children["idt-status"] = idt_status;
    }

    if(previ_ous_idt_status != nullptr)
    {
        children["previ-ous-idt-status"] = previ_ous_idt_status;
    }

    return children;
}

void L2Vpnv2::Standby::Nsr::NsrStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Nsr::NsrStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Nsr::NsrStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt-status" || name == "previ-ous-idt-status" || name == "role")
        return true;
    return false;
}

L2Vpnv2::Standby::Nsr::NsrStatus::IdtStatus::IdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "idt-status"; yang_parent_name = "nsr-status"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Nsr::NsrStatus::IdtStatus::~IdtStatus()
{
}

bool L2Vpnv2::Standby::Nsr::NsrStatus::IdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool L2Vpnv2::Standby::Nsr::NsrStatus::IdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2Vpnv2::Standby::Nsr::NsrStatus::IdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/nsr/nsr-status/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Nsr::NsrStatus::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Nsr::NsrStatus::IdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Nsr::NsrStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Nsr::NsrStatus::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Nsr::NsrStatus::IdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Nsr::NsrStatus::IdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Nsr::NsrStatus::IdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

L2Vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus::PreviOusIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previ-ous-idt-status"; yang_parent_name = "nsr-status"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus::~PreviOusIdtStatus()
{
}

bool L2Vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool L2Vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2Vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/nsr/nsr-status/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previ-ous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

L2Vpnv2::Standby::Nsr::ReportCard::ReportCard()
    :
    collaborator_idt_done{YType::boolean, "collaborator-idt-done"},
    collaborator_is_connected{YType::boolean, "collaborator-is-connected"},
    collaborator_skipped{YType::boolean, "collaborator-skipped"},
    connection_change_time{YType::uint32, "connection-change-time"},
    idt_time{YType::uint32, "idt-time"}
{

    yang_name = "report-card"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Nsr::ReportCard::~ReportCard()
{
}

bool L2Vpnv2::Standby::Nsr::ReportCard::has_data() const
{
    return collaborator_idt_done.is_set
	|| collaborator_is_connected.is_set
	|| collaborator_skipped.is_set
	|| connection_change_time.is_set
	|| idt_time.is_set;
}

bool L2Vpnv2::Standby::Nsr::ReportCard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(collaborator_idt_done.yfilter)
	|| ydk::is_set(collaborator_is_connected.yfilter)
	|| ydk::is_set(collaborator_skipped.yfilter)
	|| ydk::is_set(connection_change_time.yfilter)
	|| ydk::is_set(idt_time.yfilter);
}

std::string L2Vpnv2::Standby::Nsr::ReportCard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/nsr/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Nsr::ReportCard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "report-card";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Nsr::ReportCard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (collaborator_idt_done.is_set || is_set(collaborator_idt_done.yfilter)) leaf_name_data.push_back(collaborator_idt_done.get_name_leafdata());
    if (collaborator_is_connected.is_set || is_set(collaborator_is_connected.yfilter)) leaf_name_data.push_back(collaborator_is_connected.get_name_leafdata());
    if (collaborator_skipped.is_set || is_set(collaborator_skipped.yfilter)) leaf_name_data.push_back(collaborator_skipped.get_name_leafdata());
    if (connection_change_time.is_set || is_set(connection_change_time.yfilter)) leaf_name_data.push_back(connection_change_time.get_name_leafdata());
    if (idt_time.is_set || is_set(idt_time.yfilter)) leaf_name_data.push_back(idt_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Nsr::ReportCard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Nsr::ReportCard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Nsr::ReportCard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "collaborator-idt-done")
    {
        collaborator_idt_done = value;
        collaborator_idt_done.value_namespace = name_space;
        collaborator_idt_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collaborator-is-connected")
    {
        collaborator_is_connected = value;
        collaborator_is_connected.value_namespace = name_space;
        collaborator_is_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collaborator-skipped")
    {
        collaborator_skipped = value;
        collaborator_skipped.value_namespace = name_space;
        collaborator_skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-change-time")
    {
        connection_change_time = value;
        connection_change_time.value_namespace = name_space;
        connection_change_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-time")
    {
        idt_time = value;
        idt_time.value_namespace = name_space;
        idt_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Nsr::ReportCard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "collaborator-idt-done")
    {
        collaborator_idt_done.yfilter = yfilter;
    }
    if(value_path == "collaborator-is-connected")
    {
        collaborator_is_connected.yfilter = yfilter;
    }
    if(value_path == "collaborator-skipped")
    {
        collaborator_skipped.yfilter = yfilter;
    }
    if(value_path == "connection-change-time")
    {
        connection_change_time.yfilter = yfilter;
    }
    if(value_path == "idt-time")
    {
        idt_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Nsr::ReportCard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collaborator-idt-done" || name == "collaborator-is-connected" || name == "collaborator-skipped" || name == "connection-change-time" || name == "idt-time")
        return true;
    return false;
}

L2Vpnv2::Standby::Nsr::StateTransitionTime::StateTransitionTime()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "state-transition-time"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Nsr::StateTransitionTime::~StateTransitionTime()
{
}

bool L2Vpnv2::Standby::Nsr::StateTransitionTime::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Standby::Nsr::StateTransitionTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Standby::Nsr::StateTransitionTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/nsr/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Nsr::StateTransitionTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-transition-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Nsr::StateTransitionTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Nsr::StateTransitionTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Nsr::StateTransitionTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Nsr::StateTransitionTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Nsr::StateTransitionTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Nsr::StateTransitionTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Standby::Nsr::XidInfo::XidInfo()
    :
    app_type{YType::enumeration, "app-type"},
    sent_ids{YType::uint32, "sent-ids"}
{

    yang_name = "xid-info"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Nsr::XidInfo::~XidInfo()
{
}

bool L2Vpnv2::Standby::Nsr::XidInfo::has_data() const
{
    return app_type.is_set
	|| sent_ids.is_set;
}

bool L2Vpnv2::Standby::Nsr::XidInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(app_type.yfilter)
	|| ydk::is_set(sent_ids.yfilter);
}

std::string L2Vpnv2::Standby::Nsr::XidInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/nsr/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Nsr::XidInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xid-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Nsr::XidInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_type.is_set || is_set(app_type.yfilter)) leaf_name_data.push_back(app_type.get_name_leafdata());
    if (sent_ids.is_set || is_set(sent_ids.yfilter)) leaf_name_data.push_back(sent_ids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Nsr::XidInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Nsr::XidInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Nsr::XidInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app-type")
    {
        app_type = value;
        app_type.value_namespace = name_space;
        app_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-ids")
    {
        sent_ids = value;
        sent_ids.value_namespace = name_space;
        sent_ids.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Nsr::XidInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app-type")
    {
        app_type.yfilter = yfilter;
    }
    if(value_path == "sent-ids")
    {
        sent_ids.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Nsr::XidInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app-type" || name == "sent-ids")
        return true;
    return false;
}

L2Vpnv2::Standby::PreferredPaths::PreferredPaths()
{

    yang_name = "preferred-paths"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::PreferredPaths::~PreferredPaths()
{
}

bool L2Vpnv2::Standby::PreferredPaths::has_data() const
{
    for (std::size_t index=0; index<preferred_path.size(); index++)
    {
        if(preferred_path[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::PreferredPaths::has_operation() const
{
    for (std::size_t index=0; index<preferred_path.size(); index++)
    {
        if(preferred_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::PreferredPaths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::PreferredPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::PreferredPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::PreferredPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "preferred-path")
    {
        for(auto const & c : preferred_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::PreferredPaths::PreferredPath>();
        c->parent = this;
        preferred_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::PreferredPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : preferred_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::PreferredPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::PreferredPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::PreferredPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preferred-path")
        return true;
    return false;
}

L2Vpnv2::Standby::PreferredPaths::PreferredPath::PreferredPath()
    :
    available_bandwidth{YType::uint32, "available-bandwidth"},
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    preferred_type{YType::enumeration, "preferred-type"},
    reserved_bandwidth{YType::uint32, "reserved-bandwidth"},
    total_bandwidth{YType::uint32, "total-bandwidth"},
    type{YType::enumeration, "type"}
{

    yang_name = "preferred-path"; yang_parent_name = "preferred-paths"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::PreferredPaths::PreferredPath::~PreferredPath()
{
}

bool L2Vpnv2::Standby::PreferredPaths::PreferredPath::has_data() const
{
    for (std::size_t index=0; index<virtual_circuit.size(); index++)
    {
        if(virtual_circuit[index]->has_data())
            return true;
    }
    return available_bandwidth.is_set
	|| interface_name.is_set
	|| interface_name_xr.is_set
	|| preferred_type.is_set
	|| reserved_bandwidth.is_set
	|| total_bandwidth.is_set
	|| type.is_set;
}

bool L2Vpnv2::Standby::PreferredPaths::PreferredPath::has_operation() const
{
    for (std::size_t index=0; index<virtual_circuit.size(); index++)
    {
        if(virtual_circuit[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(preferred_type.yfilter)
	|| ydk::is_set(reserved_bandwidth.yfilter)
	|| ydk::is_set(total_bandwidth.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string L2Vpnv2::Standby::PreferredPaths::PreferredPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/preferred-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::PreferredPaths::PreferredPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::PreferredPaths::PreferredPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (preferred_type.is_set || is_set(preferred_type.yfilter)) leaf_name_data.push_back(preferred_type.get_name_leafdata());
    if (reserved_bandwidth.is_set || is_set(reserved_bandwidth.yfilter)) leaf_name_data.push_back(reserved_bandwidth.get_name_leafdata());
    if (total_bandwidth.is_set || is_set(total_bandwidth.yfilter)) leaf_name_data.push_back(total_bandwidth.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::PreferredPaths::PreferredPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-circuit")
    {
        for(auto const & c : virtual_circuit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::PreferredPaths::PreferredPath::VirtualCircuit>();
        c->parent = this;
        virtual_circuit.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::PreferredPaths::PreferredPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : virtual_circuit)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::PreferredPaths::PreferredPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "preferred-type")
    {
        preferred_type = value;
        preferred_type.value_namespace = name_space;
        preferred_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth = value;
        reserved_bandwidth.value_namespace = name_space;
        reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-bandwidth")
    {
        total_bandwidth = value;
        total_bandwidth.value_namespace = name_space;
        total_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::PreferredPaths::PreferredPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "preferred-type")
    {
        preferred_type.yfilter = yfilter;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "total-bandwidth")
    {
        total_bandwidth.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::PreferredPaths::PreferredPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-circuit" || name == "available-bandwidth" || name == "interface-name" || name == "interface-name-xr" || name == "preferred-type" || name == "reserved-bandwidth" || name == "total-bandwidth" || name == "type")
        return true;
    return false;
}

L2Vpnv2::Standby::PreferredPaths::PreferredPath::VirtualCircuit::VirtualCircuit()
    :
    fe_ctype{YType::enumeration, "fe-ctype"},
    peer_id{YType::str, "peer-id"},
    pwid{YType::uint64, "pwid"},
    pwid_type{YType::enumeration, "pwid-type"},
    source_address{YType::str, "source-address"}
{

    yang_name = "virtual-circuit"; yang_parent_name = "preferred-path"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::PreferredPaths::PreferredPath::VirtualCircuit::~VirtualCircuit()
{
}

bool L2Vpnv2::Standby::PreferredPaths::PreferredPath::VirtualCircuit::has_data() const
{
    return fe_ctype.is_set
	|| peer_id.is_set
	|| pwid.is_set
	|| pwid_type.is_set
	|| source_address.is_set;
}

bool L2Vpnv2::Standby::PreferredPaths::PreferredPath::VirtualCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fe_ctype.yfilter)
	|| ydk::is_set(peer_id.yfilter)
	|| ydk::is_set(pwid.yfilter)
	|| ydk::is_set(pwid_type.yfilter)
	|| ydk::is_set(source_address.yfilter);
}

std::string L2Vpnv2::Standby::PreferredPaths::PreferredPath::VirtualCircuit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/preferred-paths/preferred-path/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::PreferredPaths::PreferredPath::VirtualCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::PreferredPaths::PreferredPath::VirtualCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fe_ctype.is_set || is_set(fe_ctype.yfilter)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());
    if (peer_id.is_set || is_set(peer_id.yfilter)) leaf_name_data.push_back(peer_id.get_name_leafdata());
    if (pwid.is_set || is_set(pwid.yfilter)) leaf_name_data.push_back(pwid.get_name_leafdata());
    if (pwid_type.is_set || is_set(pwid_type.yfilter)) leaf_name_data.push_back(pwid_type.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::PreferredPaths::PreferredPath::VirtualCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::PreferredPaths::PreferredPath::VirtualCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::PreferredPaths::PreferredPath::VirtualCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
        fe_ctype.value_namespace = name_space;
        fe_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-id")
    {
        peer_id = value;
        peer_id.value_namespace = name_space;
        peer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwid")
    {
        pwid = value;
        pwid.value_namespace = name_space;
        pwid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwid-type")
    {
        pwid_type = value;
        pwid_type.value_namespace = name_space;
        pwid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::PreferredPaths::PreferredPath::VirtualCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fe-ctype")
    {
        fe_ctype.yfilter = yfilter;
    }
    if(value_path == "peer-id")
    {
        peer_id.yfilter = yfilter;
    }
    if(value_path == "pwid")
    {
        pwid.yfilter = yfilter;
    }
    if(value_path == "pwid-type")
    {
        pwid_type.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::PreferredPaths::PreferredPath::VirtualCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fe-ctype" || name == "peer-id" || name == "pwid" || name == "pwid-type" || name == "source-address")
        return true;
    return false;
}

L2Vpnv2::Standby::ProcFsm::ProcFsm()
    :
    process_role{YType::uint8, "process-role"},
    process_state{YType::uint8, "process-state"},
    sw_install_in_progress{YType::boolean, "sw-install-in-progress"},
    sync_flags{YType::uint32, "sync-flags"}
    	,
    failover_status(std::make_shared<L2Vpnv2::Standby::ProcFsm::FailoverStatus>())
	,issu_status(std::make_shared<L2Vpnv2::Standby::ProcFsm::IssuStatus>())
	,nsr_status(std::make_shared<L2Vpnv2::Standby::ProcFsm::NsrStatus>())
{
    failover_status->parent = this;
    issu_status->parent = this;
    nsr_status->parent = this;

    yang_name = "proc-fsm"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::ProcFsm::~ProcFsm()
{
}

bool L2Vpnv2::Standby::ProcFsm::has_data() const
{
    for (std::size_t index=0; index<event_history.size(); index++)
    {
        if(event_history[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<report_card.size(); index++)
    {
        if(report_card[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<state_transition_time.size(); index++)
    {
        if(state_transition_time[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<xid_info.size(); index++)
    {
        if(xid_info[index]->has_data())
            return true;
    }
    return process_role.is_set
	|| process_state.is_set
	|| sw_install_in_progress.is_set
	|| sync_flags.is_set
	|| (failover_status !=  nullptr && failover_status->has_data())
	|| (issu_status !=  nullptr && issu_status->has_data())
	|| (nsr_status !=  nullptr && nsr_status->has_data());
}

bool L2Vpnv2::Standby::ProcFsm::has_operation() const
{
    for (std::size_t index=0; index<event_history.size(); index++)
    {
        if(event_history[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<report_card.size(); index++)
    {
        if(report_card[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<state_transition_time.size(); index++)
    {
        if(state_transition_time[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<xid_info.size(); index++)
    {
        if(xid_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_role.yfilter)
	|| ydk::is_set(process_state.yfilter)
	|| ydk::is_set(sw_install_in_progress.yfilter)
	|| ydk::is_set(sync_flags.yfilter)
	|| (failover_status !=  nullptr && failover_status->has_operation())
	|| (issu_status !=  nullptr && issu_status->has_operation())
	|| (nsr_status !=  nullptr && nsr_status->has_operation());
}

std::string L2Vpnv2::Standby::ProcFsm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::ProcFsm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proc-fsm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::ProcFsm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_role.is_set || is_set(process_role.yfilter)) leaf_name_data.push_back(process_role.get_name_leafdata());
    if (process_state.is_set || is_set(process_state.yfilter)) leaf_name_data.push_back(process_state.get_name_leafdata());
    if (sw_install_in_progress.is_set || is_set(sw_install_in_progress.yfilter)) leaf_name_data.push_back(sw_install_in_progress.get_name_leafdata());
    if (sync_flags.is_set || is_set(sync_flags.yfilter)) leaf_name_data.push_back(sync_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::ProcFsm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-history")
    {
        for(auto const & c : event_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::ProcFsm::EventHistory>();
        c->parent = this;
        event_history.push_back(c);
        return c;
    }

    if(child_yang_name == "failover-status")
    {
        if(failover_status == nullptr)
        {
            failover_status = std::make_shared<L2Vpnv2::Standby::ProcFsm::FailoverStatus>();
        }
        return failover_status;
    }

    if(child_yang_name == "issu-status")
    {
        if(issu_status == nullptr)
        {
            issu_status = std::make_shared<L2Vpnv2::Standby::ProcFsm::IssuStatus>();
        }
        return issu_status;
    }

    if(child_yang_name == "nsr-status")
    {
        if(nsr_status == nullptr)
        {
            nsr_status = std::make_shared<L2Vpnv2::Standby::ProcFsm::NsrStatus>();
        }
        return nsr_status;
    }

    if(child_yang_name == "report-card")
    {
        for(auto const & c : report_card)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::ProcFsm::ReportCard>();
        c->parent = this;
        report_card.push_back(c);
        return c;
    }

    if(child_yang_name == "state-transition-time")
    {
        for(auto const & c : state_transition_time)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::ProcFsm::StateTransitionTime>();
        c->parent = this;
        state_transition_time.push_back(c);
        return c;
    }

    if(child_yang_name == "xid-info")
    {
        for(auto const & c : xid_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::ProcFsm::XidInfo>();
        c->parent = this;
        xid_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::ProcFsm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : event_history)
    {
        children[c->get_segment_path()] = c;
    }

    if(failover_status != nullptr)
    {
        children["failover-status"] = failover_status;
    }

    if(issu_status != nullptr)
    {
        children["issu-status"] = issu_status;
    }

    if(nsr_status != nullptr)
    {
        children["nsr-status"] = nsr_status;
    }

    for (auto const & c : report_card)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : state_transition_time)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : xid_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::ProcFsm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-role")
    {
        process_role = value;
        process_role.value_namespace = name_space;
        process_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-state")
    {
        process_state = value;
        process_state.value_namespace = name_space;
        process_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-install-in-progress")
    {
        sw_install_in_progress = value;
        sw_install_in_progress.value_namespace = name_space;
        sw_install_in_progress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-flags")
    {
        sync_flags = value;
        sync_flags.value_namespace = name_space;
        sync_flags.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::ProcFsm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-role")
    {
        process_role.yfilter = yfilter;
    }
    if(value_path == "process-state")
    {
        process_state.yfilter = yfilter;
    }
    if(value_path == "sw-install-in-progress")
    {
        sw_install_in_progress.yfilter = yfilter;
    }
    if(value_path == "sync-flags")
    {
        sync_flags.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::ProcFsm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-history" || name == "failover-status" || name == "issu-status" || name == "nsr-status" || name == "report-card" || name == "state-transition-time" || name == "xid-info" || name == "process-role" || name == "process-state" || name == "sw-install-in-progress" || name == "sync-flags")
        return true;
    return false;
}

L2Vpnv2::Standby::ProcFsm::EventHistory::EventHistory()
    :
    event_timestamp{YType::uint32, "event-timestamp"},
    new_state{YType::uint8, "new-state"},
    previous_state{YType::uint8, "previous-state"},
    process_collaborator{YType::uint16, "process-collaborator"},
    process_event{YType::uint16, "process-event"}
{

    yang_name = "event-history"; yang_parent_name = "proc-fsm"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::ProcFsm::EventHistory::~EventHistory()
{
}

bool L2Vpnv2::Standby::ProcFsm::EventHistory::has_data() const
{
    return event_timestamp.is_set
	|| new_state.is_set
	|| previous_state.is_set
	|| process_collaborator.is_set
	|| process_event.is_set;
}

bool L2Vpnv2::Standby::ProcFsm::EventHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_timestamp.yfilter)
	|| ydk::is_set(new_state.yfilter)
	|| ydk::is_set(previous_state.yfilter)
	|| ydk::is_set(process_collaborator.yfilter)
	|| ydk::is_set(process_event.yfilter);
}

std::string L2Vpnv2::Standby::ProcFsm::EventHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/proc-fsm/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::ProcFsm::EventHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::ProcFsm::EventHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_timestamp.is_set || is_set(event_timestamp.yfilter)) leaf_name_data.push_back(event_timestamp.get_name_leafdata());
    if (new_state.is_set || is_set(new_state.yfilter)) leaf_name_data.push_back(new_state.get_name_leafdata());
    if (previous_state.is_set || is_set(previous_state.yfilter)) leaf_name_data.push_back(previous_state.get_name_leafdata());
    if (process_collaborator.is_set || is_set(process_collaborator.yfilter)) leaf_name_data.push_back(process_collaborator.get_name_leafdata());
    if (process_event.is_set || is_set(process_event.yfilter)) leaf_name_data.push_back(process_event.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::ProcFsm::EventHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::ProcFsm::EventHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::ProcFsm::EventHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-timestamp")
    {
        event_timestamp = value;
        event_timestamp.value_namespace = name_space;
        event_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-state")
    {
        new_state = value;
        new_state.value_namespace = name_space;
        new_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-state")
    {
        previous_state = value;
        previous_state.value_namespace = name_space;
        previous_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-collaborator")
    {
        process_collaborator = value;
        process_collaborator.value_namespace = name_space;
        process_collaborator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-event")
    {
        process_event = value;
        process_event.value_namespace = name_space;
        process_event.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::ProcFsm::EventHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-timestamp")
    {
        event_timestamp.yfilter = yfilter;
    }
    if(value_path == "new-state")
    {
        new_state.yfilter = yfilter;
    }
    if(value_path == "previous-state")
    {
        previous_state.yfilter = yfilter;
    }
    if(value_path == "process-collaborator")
    {
        process_collaborator.yfilter = yfilter;
    }
    if(value_path == "process-event")
    {
        process_event.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::ProcFsm::EventHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-timestamp" || name == "new-state" || name == "previous-state" || name == "process-collaborator" || name == "process-event")
        return true;
    return false;
}

L2Vpnv2::Standby::ProcFsm::FailoverStatus::FailoverStatus()
    :
    master_time{YType::uint32, "master-time"},
    start_time{YType::uint32, "start-time"},
    triggered_time{YType::uint32, "triggered-time"}
{

    yang_name = "failover-status"; yang_parent_name = "proc-fsm"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::ProcFsm::FailoverStatus::~FailoverStatus()
{
}

bool L2Vpnv2::Standby::ProcFsm::FailoverStatus::has_data() const
{
    return master_time.is_set
	|| start_time.is_set
	|| triggered_time.is_set;
}

bool L2Vpnv2::Standby::ProcFsm::FailoverStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(master_time.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(triggered_time.yfilter);
}

std::string L2Vpnv2::Standby::ProcFsm::FailoverStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/proc-fsm/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::ProcFsm::FailoverStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failover-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::ProcFsm::FailoverStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master_time.is_set || is_set(master_time.yfilter)) leaf_name_data.push_back(master_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (triggered_time.is_set || is_set(triggered_time.yfilter)) leaf_name_data.push_back(triggered_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::ProcFsm::FailoverStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::ProcFsm::FailoverStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::ProcFsm::FailoverStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "master-time")
    {
        master_time = value;
        master_time.value_namespace = name_space;
        master_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "triggered-time")
    {
        triggered_time = value;
        triggered_time.value_namespace = name_space;
        triggered_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::ProcFsm::FailoverStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "master-time")
    {
        master_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "triggered-time")
    {
        triggered_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::ProcFsm::FailoverStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "master-time" || name == "start-time" || name == "triggered-time")
        return true;
    return false;
}

L2Vpnv2::Standby::ProcFsm::IssuStatus::IssuStatus()
    :
    role{YType::enumeration, "role"}
    	,
    idt_status(std::make_shared<L2Vpnv2::Standby::ProcFsm::IssuStatus::IdtStatus>())
	,previ_ous_idt_status(std::make_shared<L2Vpnv2::Standby::ProcFsm::IssuStatus::PreviOusIdtStatus>())
{
    idt_status->parent = this;
    previ_ous_idt_status->parent = this;

    yang_name = "issu-status"; yang_parent_name = "proc-fsm"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::ProcFsm::IssuStatus::~IssuStatus()
{
}

bool L2Vpnv2::Standby::ProcFsm::IssuStatus::has_data() const
{
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_data());
}

bool L2Vpnv2::Standby::ProcFsm::IssuStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_operation());
}

std::string L2Vpnv2::Standby::ProcFsm::IssuStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/proc-fsm/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::ProcFsm::IssuStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::ProcFsm::IssuStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::ProcFsm::IssuStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt-status")
    {
        if(idt_status == nullptr)
        {
            idt_status = std::make_shared<L2Vpnv2::Standby::ProcFsm::IssuStatus::IdtStatus>();
        }
        return idt_status;
    }

    if(child_yang_name == "previ-ous-idt-status")
    {
        if(previ_ous_idt_status == nullptr)
        {
            previ_ous_idt_status = std::make_shared<L2Vpnv2::Standby::ProcFsm::IssuStatus::PreviOusIdtStatus>();
        }
        return previ_ous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::ProcFsm::IssuStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idt_status != nullptr)
    {
        children["idt-status"] = idt_status;
    }

    if(previ_ous_idt_status != nullptr)
    {
        children["previ-ous-idt-status"] = previ_ous_idt_status;
    }

    return children;
}

void L2Vpnv2::Standby::ProcFsm::IssuStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::ProcFsm::IssuStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::ProcFsm::IssuStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt-status" || name == "previ-ous-idt-status" || name == "role")
        return true;
    return false;
}

L2Vpnv2::Standby::ProcFsm::IssuStatus::IdtStatus::IdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "idt-status"; yang_parent_name = "issu-status"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::ProcFsm::IssuStatus::IdtStatus::~IdtStatus()
{
}

bool L2Vpnv2::Standby::ProcFsm::IssuStatus::IdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool L2Vpnv2::Standby::ProcFsm::IssuStatus::IdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2Vpnv2::Standby::ProcFsm::IssuStatus::IdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/proc-fsm/issu-status/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::ProcFsm::IssuStatus::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::ProcFsm::IssuStatus::IdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::ProcFsm::IssuStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::ProcFsm::IssuStatus::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::ProcFsm::IssuStatus::IdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::ProcFsm::IssuStatus::IdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::ProcFsm::IssuStatus::IdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

L2Vpnv2::Standby::ProcFsm::IssuStatus::PreviOusIdtStatus::PreviOusIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previ-ous-idt-status"; yang_parent_name = "issu-status"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::ProcFsm::IssuStatus::PreviOusIdtStatus::~PreviOusIdtStatus()
{
}

bool L2Vpnv2::Standby::ProcFsm::IssuStatus::PreviOusIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool L2Vpnv2::Standby::ProcFsm::IssuStatus::PreviOusIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2Vpnv2::Standby::ProcFsm::IssuStatus::PreviOusIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/proc-fsm/issu-status/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::ProcFsm::IssuStatus::PreviOusIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previ-ous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::ProcFsm::IssuStatus::PreviOusIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::ProcFsm::IssuStatus::PreviOusIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::ProcFsm::IssuStatus::PreviOusIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::ProcFsm::IssuStatus::PreviOusIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::ProcFsm::IssuStatus::PreviOusIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::ProcFsm::IssuStatus::PreviOusIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

L2Vpnv2::Standby::ProcFsm::NsrStatus::NsrStatus()
    :
    role{YType::enumeration, "role"}
    	,
    idt_status(std::make_shared<L2Vpnv2::Standby::ProcFsm::NsrStatus::IdtStatus>())
	,previ_ous_idt_status(std::make_shared<L2Vpnv2::Standby::ProcFsm::NsrStatus::PreviOusIdtStatus>())
{
    idt_status->parent = this;
    previ_ous_idt_status->parent = this;

    yang_name = "nsr-status"; yang_parent_name = "proc-fsm"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::ProcFsm::NsrStatus::~NsrStatus()
{
}

bool L2Vpnv2::Standby::ProcFsm::NsrStatus::has_data() const
{
    return role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_data());
}

bool L2Vpnv2::Standby::ProcFsm::NsrStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_operation());
}

std::string L2Vpnv2::Standby::ProcFsm::NsrStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/proc-fsm/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::ProcFsm::NsrStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::ProcFsm::NsrStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::ProcFsm::NsrStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt-status")
    {
        if(idt_status == nullptr)
        {
            idt_status = std::make_shared<L2Vpnv2::Standby::ProcFsm::NsrStatus::IdtStatus>();
        }
        return idt_status;
    }

    if(child_yang_name == "previ-ous-idt-status")
    {
        if(previ_ous_idt_status == nullptr)
        {
            previ_ous_idt_status = std::make_shared<L2Vpnv2::Standby::ProcFsm::NsrStatus::PreviOusIdtStatus>();
        }
        return previ_ous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::ProcFsm::NsrStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idt_status != nullptr)
    {
        children["idt-status"] = idt_status;
    }

    if(previ_ous_idt_status != nullptr)
    {
        children["previ-ous-idt-status"] = previ_ous_idt_status;
    }

    return children;
}

void L2Vpnv2::Standby::ProcFsm::NsrStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::ProcFsm::NsrStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::ProcFsm::NsrStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt-status" || name == "previ-ous-idt-status" || name == "role")
        return true;
    return false;
}

L2Vpnv2::Standby::ProcFsm::NsrStatus::IdtStatus::IdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "idt-status"; yang_parent_name = "nsr-status"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::ProcFsm::NsrStatus::IdtStatus::~IdtStatus()
{
}

bool L2Vpnv2::Standby::ProcFsm::NsrStatus::IdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool L2Vpnv2::Standby::ProcFsm::NsrStatus::IdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2Vpnv2::Standby::ProcFsm::NsrStatus::IdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/proc-fsm/nsr-status/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::ProcFsm::NsrStatus::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::ProcFsm::NsrStatus::IdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::ProcFsm::NsrStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::ProcFsm::NsrStatus::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::ProcFsm::NsrStatus::IdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::ProcFsm::NsrStatus::IdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::ProcFsm::NsrStatus::IdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

L2Vpnv2::Standby::ProcFsm::NsrStatus::PreviOusIdtStatus::PreviOusIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    sync_status{YType::enumeration, "sync-status"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previ-ous-idt-status"; yang_parent_name = "nsr-status"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::ProcFsm::NsrStatus::PreviOusIdtStatus::~PreviOusIdtStatus()
{
}

bool L2Vpnv2::Standby::ProcFsm::NsrStatus::PreviOusIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| not_ready_reason.is_set
	|| sync_status.is_set
	|| withdraw_time.is_set;
}

bool L2Vpnv2::Standby::ProcFsm::NsrStatus::PreviOusIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2Vpnv2::Standby::ProcFsm::NsrStatus::PreviOusIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/proc-fsm/nsr-status/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::ProcFsm::NsrStatus::PreviOusIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previ-ous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::ProcFsm::NsrStatus::PreviOusIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::ProcFsm::NsrStatus::PreviOusIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::ProcFsm::NsrStatus::PreviOusIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::ProcFsm::NsrStatus::PreviOusIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::ProcFsm::NsrStatus::PreviOusIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::ProcFsm::NsrStatus::PreviOusIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "declare-time" || name == "idt-end-time" || name == "idt-start-time" || name == "not-ready-reason" || name == "sync-status" || name == "withdraw-time")
        return true;
    return false;
}

L2Vpnv2::Standby::ProcFsm::ReportCard::ReportCard()
    :
    collaborator_idt_done{YType::boolean, "collaborator-idt-done"},
    collaborator_is_connected{YType::boolean, "collaborator-is-connected"},
    collaborator_skipped{YType::boolean, "collaborator-skipped"},
    connection_change_time{YType::uint32, "connection-change-time"},
    idt_time{YType::uint32, "idt-time"}
{

    yang_name = "report-card"; yang_parent_name = "proc-fsm"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::ProcFsm::ReportCard::~ReportCard()
{
}

bool L2Vpnv2::Standby::ProcFsm::ReportCard::has_data() const
{
    return collaborator_idt_done.is_set
	|| collaborator_is_connected.is_set
	|| collaborator_skipped.is_set
	|| connection_change_time.is_set
	|| idt_time.is_set;
}

bool L2Vpnv2::Standby::ProcFsm::ReportCard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(collaborator_idt_done.yfilter)
	|| ydk::is_set(collaborator_is_connected.yfilter)
	|| ydk::is_set(collaborator_skipped.yfilter)
	|| ydk::is_set(connection_change_time.yfilter)
	|| ydk::is_set(idt_time.yfilter);
}

std::string L2Vpnv2::Standby::ProcFsm::ReportCard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/proc-fsm/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::ProcFsm::ReportCard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "report-card";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::ProcFsm::ReportCard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (collaborator_idt_done.is_set || is_set(collaborator_idt_done.yfilter)) leaf_name_data.push_back(collaborator_idt_done.get_name_leafdata());
    if (collaborator_is_connected.is_set || is_set(collaborator_is_connected.yfilter)) leaf_name_data.push_back(collaborator_is_connected.get_name_leafdata());
    if (collaborator_skipped.is_set || is_set(collaborator_skipped.yfilter)) leaf_name_data.push_back(collaborator_skipped.get_name_leafdata());
    if (connection_change_time.is_set || is_set(connection_change_time.yfilter)) leaf_name_data.push_back(connection_change_time.get_name_leafdata());
    if (idt_time.is_set || is_set(idt_time.yfilter)) leaf_name_data.push_back(idt_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::ProcFsm::ReportCard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::ProcFsm::ReportCard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::ProcFsm::ReportCard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "collaborator-idt-done")
    {
        collaborator_idt_done = value;
        collaborator_idt_done.value_namespace = name_space;
        collaborator_idt_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collaborator-is-connected")
    {
        collaborator_is_connected = value;
        collaborator_is_connected.value_namespace = name_space;
        collaborator_is_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collaborator-skipped")
    {
        collaborator_skipped = value;
        collaborator_skipped.value_namespace = name_space;
        collaborator_skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-change-time")
    {
        connection_change_time = value;
        connection_change_time.value_namespace = name_space;
        connection_change_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-time")
    {
        idt_time = value;
        idt_time.value_namespace = name_space;
        idt_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::ProcFsm::ReportCard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "collaborator-idt-done")
    {
        collaborator_idt_done.yfilter = yfilter;
    }
    if(value_path == "collaborator-is-connected")
    {
        collaborator_is_connected.yfilter = yfilter;
    }
    if(value_path == "collaborator-skipped")
    {
        collaborator_skipped.yfilter = yfilter;
    }
    if(value_path == "connection-change-time")
    {
        connection_change_time.yfilter = yfilter;
    }
    if(value_path == "idt-time")
    {
        idt_time.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::ProcFsm::ReportCard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collaborator-idt-done" || name == "collaborator-is-connected" || name == "collaborator-skipped" || name == "connection-change-time" || name == "idt-time")
        return true;
    return false;
}

L2Vpnv2::Standby::ProcFsm::StateTransitionTime::StateTransitionTime()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "state-transition-time"; yang_parent_name = "proc-fsm"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::ProcFsm::StateTransitionTime::~StateTransitionTime()
{
}

bool L2Vpnv2::Standby::ProcFsm::StateTransitionTime::has_data() const
{
    return entry.is_set;
}

bool L2Vpnv2::Standby::ProcFsm::StateTransitionTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2Vpnv2::Standby::ProcFsm::StateTransitionTime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/proc-fsm/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::ProcFsm::StateTransitionTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-transition-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::ProcFsm::StateTransitionTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::ProcFsm::StateTransitionTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::ProcFsm::StateTransitionTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::ProcFsm::StateTransitionTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::ProcFsm::StateTransitionTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::ProcFsm::StateTransitionTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2Vpnv2::Standby::ProcFsm::XidInfo::XidInfo()
    :
    app_type{YType::enumeration, "app-type"},
    sent_ids{YType::uint32, "sent-ids"}
{

    yang_name = "xid-info"; yang_parent_name = "proc-fsm"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::ProcFsm::XidInfo::~XidInfo()
{
}

bool L2Vpnv2::Standby::ProcFsm::XidInfo::has_data() const
{
    return app_type.is_set
	|| sent_ids.is_set;
}

bool L2Vpnv2::Standby::ProcFsm::XidInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(app_type.yfilter)
	|| ydk::is_set(sent_ids.yfilter);
}

std::string L2Vpnv2::Standby::ProcFsm::XidInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/proc-fsm/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::ProcFsm::XidInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xid-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::ProcFsm::XidInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_type.is_set || is_set(app_type.yfilter)) leaf_name_data.push_back(app_type.get_name_leafdata());
    if (sent_ids.is_set || is_set(sent_ids.yfilter)) leaf_name_data.push_back(sent_ids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::ProcFsm::XidInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::ProcFsm::XidInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::ProcFsm::XidInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app-type")
    {
        app_type = value;
        app_type.value_namespace = name_space;
        app_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-ids")
    {
        sent_ids = value;
        sent_ids.value_namespace = name_space;
        sent_ids.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::ProcFsm::XidInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app-type")
    {
        app_type.yfilter = yfilter;
    }
    if(value_path == "sent-ids")
    {
        sent_ids.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::ProcFsm::XidInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app-type" || name == "sent-ids")
        return true;
    return false;
}

L2Vpnv2::Standby::PseudowireClasses::PseudowireClasses()
{

    yang_name = "pseudowire-classes"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::PseudowireClasses::~PseudowireClasses()
{
}

bool L2Vpnv2::Standby::PseudowireClasses::has_data() const
{
    for (std::size_t index=0; index<pseudowire_class.size(); index++)
    {
        if(pseudowire_class[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpnv2::Standby::PseudowireClasses::has_operation() const
{
    for (std::size_t index=0; index<pseudowire_class.size(); index++)
    {
        if(pseudowire_class[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2Vpnv2::Standby::PseudowireClasses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::PseudowireClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::PseudowireClasses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::PseudowireClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire-class")
    {
        for(auto const & c : pseudowire_class)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<L2Vpnv2::Standby::PseudowireClasses::PseudowireClass>();
        c->parent = this;
        pseudowire_class.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::PseudowireClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pseudowire_class)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void L2Vpnv2::Standby::PseudowireClasses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::PseudowireClasses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::PseudowireClasses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-class")
        return true;
    return false;
}

L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PseudowireClass()
    :
    pseudowire_class_name{YType::str, "pseudowire-class-name"},
    backup_mac_withdraw{YType::boolean, "backup-mac-withdraw"},
    control_word{YType::enumeration, "control-word"},
    disable_delay{YType::uint8, "disable-delay"},
    disable_never{YType::boolean, "disable-never"},
    is_flow_label_static{YType::boolean, "is-flow-label-static"},
    load_balance{YType::enumeration, "load-balance"},
    preferred_path_disable_fallback{YType::boolean, "preferred-path-disable-fallback"},
    protocol{YType::enumeration, "protocol"},
    pw_class_name{YType::str, "pw-class-name"},
    pw_flow_label_code17_disabled{YType::boolean, "pw-flow-label-code17-disabled"},
    pw_flow_label_type_cfg{YType::enumeration, "pw-flow-label-type-cfg"},
    resync_enabled{YType::boolean, "resync-enabled"},
    resync_threshold{YType::uint32, "resync-threshold"},
    sequencing_type{YType::enumeration, "sequencing-type"},
    tag_rewrite{YType::uint16, "tag-rewrite"},
    transport_mode{YType::enumeration, "transport-mode"}
    	,
    encapsulation_info(std::make_shared<L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo>())
	,local_source_address(std::make_shared<L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::LocalSourceAddress>())
	,preferred_path(std::make_shared<L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath>())
{
    encapsulation_info->parent = this;
    local_source_address->parent = this;
    preferred_path->parent = this;

    yang_name = "pseudowire-class"; yang_parent_name = "pseudowire-classes"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::~PseudowireClass()
{
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::has_data() const
{
    return pseudowire_class_name.is_set
	|| backup_mac_withdraw.is_set
	|| control_word.is_set
	|| disable_delay.is_set
	|| disable_never.is_set
	|| is_flow_label_static.is_set
	|| load_balance.is_set
	|| preferred_path_disable_fallback.is_set
	|| protocol.is_set
	|| pw_class_name.is_set
	|| pw_flow_label_code17_disabled.is_set
	|| pw_flow_label_type_cfg.is_set
	|| resync_enabled.is_set
	|| resync_threshold.is_set
	|| sequencing_type.is_set
	|| tag_rewrite.is_set
	|| transport_mode.is_set
	|| (encapsulation_info !=  nullptr && encapsulation_info->has_data())
	|| (local_source_address !=  nullptr && local_source_address->has_data())
	|| (preferred_path !=  nullptr && preferred_path->has_data());
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pseudowire_class_name.yfilter)
	|| ydk::is_set(backup_mac_withdraw.yfilter)
	|| ydk::is_set(control_word.yfilter)
	|| ydk::is_set(disable_delay.yfilter)
	|| ydk::is_set(disable_never.yfilter)
	|| ydk::is_set(is_flow_label_static.yfilter)
	|| ydk::is_set(load_balance.yfilter)
	|| ydk::is_set(preferred_path_disable_fallback.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(pw_class_name.yfilter)
	|| ydk::is_set(pw_flow_label_code17_disabled.yfilter)
	|| ydk::is_set(pw_flow_label_type_cfg.yfilter)
	|| ydk::is_set(resync_enabled.yfilter)
	|| ydk::is_set(resync_threshold.yfilter)
	|| ydk::is_set(sequencing_type.yfilter)
	|| ydk::is_set(tag_rewrite.yfilter)
	|| ydk::is_set(transport_mode.yfilter)
	|| (encapsulation_info !=  nullptr && encapsulation_info->has_operation())
	|| (local_source_address !=  nullptr && local_source_address->has_operation())
	|| (preferred_path !=  nullptr && preferred_path->has_operation());
}

std::string L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pseudowire-classes/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-class" <<"[pseudowire-class-name='" <<pseudowire_class_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pseudowire_class_name.is_set || is_set(pseudowire_class_name.yfilter)) leaf_name_data.push_back(pseudowire_class_name.get_name_leafdata());
    if (backup_mac_withdraw.is_set || is_set(backup_mac_withdraw.yfilter)) leaf_name_data.push_back(backup_mac_withdraw.get_name_leafdata());
    if (control_word.is_set || is_set(control_word.yfilter)) leaf_name_data.push_back(control_word.get_name_leafdata());
    if (disable_delay.is_set || is_set(disable_delay.yfilter)) leaf_name_data.push_back(disable_delay.get_name_leafdata());
    if (disable_never.is_set || is_set(disable_never.yfilter)) leaf_name_data.push_back(disable_never.get_name_leafdata());
    if (is_flow_label_static.is_set || is_set(is_flow_label_static.yfilter)) leaf_name_data.push_back(is_flow_label_static.get_name_leafdata());
    if (load_balance.is_set || is_set(load_balance.yfilter)) leaf_name_data.push_back(load_balance.get_name_leafdata());
    if (preferred_path_disable_fallback.is_set || is_set(preferred_path_disable_fallback.yfilter)) leaf_name_data.push_back(preferred_path_disable_fallback.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (pw_class_name.is_set || is_set(pw_class_name.yfilter)) leaf_name_data.push_back(pw_class_name.get_name_leafdata());
    if (pw_flow_label_code17_disabled.is_set || is_set(pw_flow_label_code17_disabled.yfilter)) leaf_name_data.push_back(pw_flow_label_code17_disabled.get_name_leafdata());
    if (pw_flow_label_type_cfg.is_set || is_set(pw_flow_label_type_cfg.yfilter)) leaf_name_data.push_back(pw_flow_label_type_cfg.get_name_leafdata());
    if (resync_enabled.is_set || is_set(resync_enabled.yfilter)) leaf_name_data.push_back(resync_enabled.get_name_leafdata());
    if (resync_threshold.is_set || is_set(resync_threshold.yfilter)) leaf_name_data.push_back(resync_threshold.get_name_leafdata());
    if (sequencing_type.is_set || is_set(sequencing_type.yfilter)) leaf_name_data.push_back(sequencing_type.get_name_leafdata());
    if (tag_rewrite.is_set || is_set(tag_rewrite.yfilter)) leaf_name_data.push_back(tag_rewrite.get_name_leafdata());
    if (transport_mode.is_set || is_set(transport_mode.yfilter)) leaf_name_data.push_back(transport_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation-info")
    {
        if(encapsulation_info == nullptr)
        {
            encapsulation_info = std::make_shared<L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo>();
        }
        return encapsulation_info;
    }

    if(child_yang_name == "local-source-address")
    {
        if(local_source_address == nullptr)
        {
            local_source_address = std::make_shared<L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::LocalSourceAddress>();
        }
        return local_source_address;
    }

    if(child_yang_name == "preferred-path")
    {
        if(preferred_path == nullptr)
        {
            preferred_path = std::make_shared<L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath>();
        }
        return preferred_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation_info != nullptr)
    {
        children["encapsulation-info"] = encapsulation_info;
    }

    if(local_source_address != nullptr)
    {
        children["local-source-address"] = local_source_address;
    }

    if(preferred_path != nullptr)
    {
        children["preferred-path"] = preferred_path;
    }

    return children;
}

void L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pseudowire-class-name")
    {
        pseudowire_class_name = value;
        pseudowire_class_name.value_namespace = name_space;
        pseudowire_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-mac-withdraw")
    {
        backup_mac_withdraw = value;
        backup_mac_withdraw.value_namespace = name_space;
        backup_mac_withdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-word")
    {
        control_word = value;
        control_word.value_namespace = name_space;
        control_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-delay")
    {
        disable_delay = value;
        disable_delay.value_namespace = name_space;
        disable_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-never")
    {
        disable_never = value;
        disable_never.value_namespace = name_space;
        disable_never.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-flow-label-static")
    {
        is_flow_label_static = value;
        is_flow_label_static.value_namespace = name_space;
        is_flow_label_static.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance")
    {
        load_balance = value;
        load_balance.value_namespace = name_space;
        load_balance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preferred-path-disable-fallback")
    {
        preferred_path_disable_fallback = value;
        preferred_path_disable_fallback.value_namespace = name_space;
        preferred_path_disable_fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class-name")
    {
        pw_class_name = value;
        pw_class_name.value_namespace = name_space;
        pw_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-code17-disabled")
    {
        pw_flow_label_code17_disabled = value;
        pw_flow_label_code17_disabled.value_namespace = name_space;
        pw_flow_label_code17_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-flow-label-type-cfg")
    {
        pw_flow_label_type_cfg = value;
        pw_flow_label_type_cfg.value_namespace = name_space;
        pw_flow_label_type_cfg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resync-enabled")
    {
        resync_enabled = value;
        resync_enabled.value_namespace = name_space;
        resync_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resync-threshold")
    {
        resync_threshold = value;
        resync_threshold.value_namespace = name_space;
        resync_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequencing-type")
    {
        sequencing_type = value;
        sequencing_type.value_namespace = name_space;
        sequencing_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-rewrite")
    {
        tag_rewrite = value;
        tag_rewrite.value_namespace = name_space;
        tag_rewrite.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-mode")
    {
        transport_mode = value;
        transport_mode.value_namespace = name_space;
        transport_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pseudowire-class-name")
    {
        pseudowire_class_name.yfilter = yfilter;
    }
    if(value_path == "backup-mac-withdraw")
    {
        backup_mac_withdraw.yfilter = yfilter;
    }
    if(value_path == "control-word")
    {
        control_word.yfilter = yfilter;
    }
    if(value_path == "disable-delay")
    {
        disable_delay.yfilter = yfilter;
    }
    if(value_path == "disable-never")
    {
        disable_never.yfilter = yfilter;
    }
    if(value_path == "is-flow-label-static")
    {
        is_flow_label_static.yfilter = yfilter;
    }
    if(value_path == "load-balance")
    {
        load_balance.yfilter = yfilter;
    }
    if(value_path == "preferred-path-disable-fallback")
    {
        preferred_path_disable_fallback.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "pw-class-name")
    {
        pw_class_name.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-code17-disabled")
    {
        pw_flow_label_code17_disabled.yfilter = yfilter;
    }
    if(value_path == "pw-flow-label-type-cfg")
    {
        pw_flow_label_type_cfg.yfilter = yfilter;
    }
    if(value_path == "resync-enabled")
    {
        resync_enabled.yfilter = yfilter;
    }
    if(value_path == "resync-threshold")
    {
        resync_threshold.yfilter = yfilter;
    }
    if(value_path == "sequencing-type")
    {
        sequencing_type.yfilter = yfilter;
    }
    if(value_path == "tag-rewrite")
    {
        tag_rewrite.yfilter = yfilter;
    }
    if(value_path == "transport-mode")
    {
        transport_mode.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation-info" || name == "local-source-address" || name == "preferred-path" || name == "pseudowire-class-name" || name == "backup-mac-withdraw" || name == "control-word" || name == "disable-delay" || name == "disable-never" || name == "is-flow-label-static" || name == "load-balance" || name == "preferred-path-disable-fallback" || name == "protocol" || name == "pw-class-name" || name == "pw-flow-label-code17-disabled" || name == "pw-flow-label-type-cfg" || name == "resync-enabled" || name == "resync-threshold" || name == "sequencing-type" || name == "tag-rewrite" || name == "transport-mode")
        return true;
    return false;
}

L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::EncapsulationInfo()
    :
    encapsulation{YType::enumeration, "encapsulation"}
    	,
    l2tpv3(std::make_shared<L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3>())
{
    l2tpv3->parent = this;

    yang_name = "encapsulation-info"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::~EncapsulationInfo()
{
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::has_data() const
{
    return encapsulation.is_set
	|| (l2tpv3 !=  nullptr && l2tpv3->has_data());
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| (l2tpv3 !=  nullptr && l2tpv3->has_operation());
}

std::string L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2tpv3")
    {
        if(l2tpv3 == nullptr)
        {
            l2tpv3 = std::make_shared<L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3>();
        }
        return l2tpv3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2tpv3 != nullptr)
    {
        children["l2tpv3"] = l2tpv3;
    }

    return children;
}

void L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2tpv3" || name == "encapsulation")
        return true;
    return false;
}

L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::L2Tpv3()
    :
    cookie_size{YType::uint8, "cookie-size"},
    dont_fragment_bit{YType::boolean, "dont-fragment-bit"},
    ipv4_source_address{YType::str, "ipv4-source-address"},
    l2tp_class_name{YType::str, "l2tp-class-name"},
    path_mtu_enabled{YType::boolean, "path-mtu-enabled"},
    path_mtu_max_value{YType::uint16, "path-mtu-max-value"},
    tos{YType::uint8, "tos"},
    tos_mode{YType::enumeration, "tos-mode"},
    ttl{YType::uint8, "ttl"}
{

    yang_name = "l2tpv3"; yang_parent_name = "encapsulation-info"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::~L2Tpv3()
{
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::has_data() const
{
    return cookie_size.is_set
	|| dont_fragment_bit.is_set
	|| ipv4_source_address.is_set
	|| l2tp_class_name.is_set
	|| path_mtu_enabled.is_set
	|| path_mtu_max_value.is_set
	|| tos.is_set
	|| tos_mode.is_set
	|| ttl.is_set;
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cookie_size.yfilter)
	|| ydk::is_set(dont_fragment_bit.yfilter)
	|| ydk::is_set(ipv4_source_address.yfilter)
	|| ydk::is_set(l2tp_class_name.yfilter)
	|| ydk::is_set(path_mtu_enabled.yfilter)
	|| ydk::is_set(path_mtu_max_value.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(tos_mode.yfilter)
	|| ydk::is_set(ttl.yfilter);
}

std::string L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_size.is_set || is_set(cookie_size.yfilter)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (dont_fragment_bit.is_set || is_set(dont_fragment_bit.yfilter)) leaf_name_data.push_back(dont_fragment_bit.get_name_leafdata());
    if (ipv4_source_address.is_set || is_set(ipv4_source_address.yfilter)) leaf_name_data.push_back(ipv4_source_address.get_name_leafdata());
    if (l2tp_class_name.is_set || is_set(l2tp_class_name.yfilter)) leaf_name_data.push_back(l2tp_class_name.get_name_leafdata());
    if (path_mtu_enabled.is_set || is_set(path_mtu_enabled.yfilter)) leaf_name_data.push_back(path_mtu_enabled.get_name_leafdata());
    if (path_mtu_max_value.is_set || is_set(path_mtu_max_value.yfilter)) leaf_name_data.push_back(path_mtu_max_value.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (tos_mode.is_set || is_set(tos_mode.yfilter)) leaf_name_data.push_back(tos_mode.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cookie-size")
    {
        cookie_size = value;
        cookie_size.value_namespace = name_space;
        cookie_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dont-fragment-bit")
    {
        dont_fragment_bit = value;
        dont_fragment_bit.value_namespace = name_space;
        dont_fragment_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-source-address")
    {
        ipv4_source_address = value;
        ipv4_source_address.value_namespace = name_space;
        ipv4_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tp-class-name")
    {
        l2tp_class_name = value;
        l2tp_class_name.value_namespace = name_space;
        l2tp_class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu-enabled")
    {
        path_mtu_enabled = value;
        path_mtu_enabled.value_namespace = name_space;
        path_mtu_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-mtu-max-value")
    {
        path_mtu_max_value = value;
        path_mtu_max_value.value_namespace = name_space;
        path_mtu_max_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-mode")
    {
        tos_mode = value;
        tos_mode.value_namespace = name_space;
        tos_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cookie-size")
    {
        cookie_size.yfilter = yfilter;
    }
    if(value_path == "dont-fragment-bit")
    {
        dont_fragment_bit.yfilter = yfilter;
    }
    if(value_path == "ipv4-source-address")
    {
        ipv4_source_address.yfilter = yfilter;
    }
    if(value_path == "l2tp-class-name")
    {
        l2tp_class_name.yfilter = yfilter;
    }
    if(value_path == "path-mtu-enabled")
    {
        path_mtu_enabled.yfilter = yfilter;
    }
    if(value_path == "path-mtu-max-value")
    {
        path_mtu_max_value.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "tos-mode")
    {
        tos_mode.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::EncapsulationInfo::L2Tpv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cookie-size" || name == "dont-fragment-bit" || name == "ipv4-source-address" || name == "l2tp-class-name" || name == "path-mtu-enabled" || name == "path-mtu-max-value" || name == "tos" || name == "tos-mode" || name == "ttl")
        return true;
    return false;
}

L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::LocalSourceAddress::LocalSourceAddress()
    :
    address{YType::str, "address"},
    configuration{YType::enumeration, "configuration"}
{

    yang_name = "local-source-address"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::LocalSourceAddress::~LocalSourceAddress()
{
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::LocalSourceAddress::has_data() const
{
    return address.is_set
	|| configuration.is_set;
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::LocalSourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(configuration.yfilter);
}

std::string L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::LocalSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::LocalSourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (configuration.is_set || is_set(configuration.yfilter)) leaf_name_data.push_back(configuration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::LocalSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::LocalSourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::LocalSourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration")
    {
        configuration = value;
        configuration.value_namespace = name_space;
        configuration.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::LocalSourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "configuration")
    {
        configuration.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::LocalSourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "configuration")
        return true;
    return false;
}

L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::PreferredPath()
    :
    ip_tunnel_interface_number{YType::uint32, "ip-tunnel-interface-number"},
    next_hop_ip{YType::uint32, "next-hop-ip"},
    option{YType::enumeration, "option"},
    te_tunnel_interface_number{YType::uint32, "te-tunnel-interface-number"},
    tp_tunnel_interface_number{YType::uint32, "tp-tunnel-interface-number"}
    	,
    srte_policy(std::make_shared<L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy>())
{
    srte_policy->parent = this;

    yang_name = "preferred-path"; yang_parent_name = "pseudowire-class"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::~PreferredPath()
{
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::has_data() const
{
    return ip_tunnel_interface_number.is_set
	|| next_hop_ip.is_set
	|| option.is_set
	|| te_tunnel_interface_number.is_set
	|| tp_tunnel_interface_number.is_set
	|| (srte_policy !=  nullptr && srte_policy->has_data());
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_tunnel_interface_number.yfilter)
	|| ydk::is_set(next_hop_ip.yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(te_tunnel_interface_number.yfilter)
	|| ydk::is_set(tp_tunnel_interface_number.yfilter)
	|| (srte_policy !=  nullptr && srte_policy->has_operation());
}

std::string L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_tunnel_interface_number.is_set || is_set(ip_tunnel_interface_number.yfilter)) leaf_name_data.push_back(ip_tunnel_interface_number.get_name_leafdata());
    if (next_hop_ip.is_set || is_set(next_hop_ip.yfilter)) leaf_name_data.push_back(next_hop_ip.get_name_leafdata());
    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (te_tunnel_interface_number.is_set || is_set(te_tunnel_interface_number.yfilter)) leaf_name_data.push_back(te_tunnel_interface_number.get_name_leafdata());
    if (tp_tunnel_interface_number.is_set || is_set(tp_tunnel_interface_number.yfilter)) leaf_name_data.push_back(tp_tunnel_interface_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srte-policy")
    {
        if(srte_policy == nullptr)
        {
            srte_policy = std::make_shared<L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy>();
        }
        return srte_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(srte_policy != nullptr)
    {
        children["srte-policy"] = srte_policy;
    }

    return children;
}

void L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-tunnel-interface-number")
    {
        ip_tunnel_interface_number = value;
        ip_tunnel_interface_number.value_namespace = name_space;
        ip_tunnel_interface_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip = value;
        next_hop_ip.value_namespace = name_space;
        next_hop_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-tunnel-interface-number")
    {
        te_tunnel_interface_number = value;
        te_tunnel_interface_number.value_namespace = name_space;
        te_tunnel_interface_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tp-tunnel-interface-number")
    {
        tp_tunnel_interface_number = value;
        tp_tunnel_interface_number.value_namespace = name_space;
        tp_tunnel_interface_number.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-tunnel-interface-number")
    {
        ip_tunnel_interface_number.yfilter = yfilter;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip.yfilter = yfilter;
    }
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "te-tunnel-interface-number")
    {
        te_tunnel_interface_number.yfilter = yfilter;
    }
    if(value_path == "tp-tunnel-interface-number")
    {
        tp_tunnel_interface_number.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srte-policy" || name == "ip-tunnel-interface-number" || name == "next-hop-ip" || name == "option" || name == "te-tunnel-interface-number" || name == "tp-tunnel-interface-number")
        return true;
    return false;
}

L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::SrtePolicy()
    :
    policy_name{YType::str, "policy-name"}
{

    yang_name = "srte-policy"; yang_parent_name = "preferred-path"; is_top_level_class = false; has_list_ancestor = true;
}

L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::~SrtePolicy()
{
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::has_data() const
{
    return policy_name.is_set;
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter);
}

std::string L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srte-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::PseudowireClasses::PseudowireClass::PreferredPath::SrtePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name")
        return true;
    return false;
}

L2Vpnv2::Standby::Pwr::Pwr()
    :
    summary(std::make_shared<L2Vpnv2::Standby::Pwr::Summary>())
{
    summary->parent = this;

    yang_name = "pwr"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Pwr::~Pwr()
{
}

bool L2Vpnv2::Standby::Pwr::has_data() const
{
    return (summary !=  nullptr && summary->has_data());
}

bool L2Vpnv2::Standby::Pwr::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string L2Vpnv2::Standby::Pwr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Pwr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Pwr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Pwr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<L2Vpnv2::Standby::Pwr::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Pwr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void L2Vpnv2::Standby::Pwr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2Vpnv2::Standby::Pwr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2Vpnv2::Standby::Pwr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary")
        return true;
    return false;
}

L2Vpnv2::Standby::Pwr::Summary::Summary()
    :
    bgp_as{YType::uint32, "bgp-as"},
    bgp_router_id{YType::str, "bgp-router-id"},
    cfg_global_id{YType::uint32, "cfg-global-id"},
    cfg_router_id{YType::str, "cfg-router-id"},
    l2vpn_has_bgp_eod{YType::boolean, "l2vpn-has-bgp-eod"}
    	,
    rd_auto(std::make_shared<L2Vpnv2::Standby::Pwr::Summary::RdAuto>())
	,rd_configured(std::make_shared<L2Vpnv2::Standby::Pwr::Summary::RdConfigured>())
{
    rd_auto->parent = this;
    rd_configured->parent = this;

    yang_name = "summary"; yang_parent_name = "pwr"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Pwr::Summary::~Summary()
{
}

bool L2Vpnv2::Standby::Pwr::Summary::has_data() const
{
    return bgp_as.is_set
	|| bgp_router_id.is_set
	|| cfg_global_id.is_set
	|| cfg_router_id.is_set
	|| l2vpn_has_bgp_eod.is_set
	|| (rd_auto !=  nullptr && rd_auto->has_data())
	|| (rd_configured !=  nullptr && rd_configured->has_data());
}

bool L2Vpnv2::Standby::Pwr::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_as.yfilter)
	|| ydk::is_set(bgp_router_id.yfilter)
	|| ydk::is_set(cfg_global_id.yfilter)
	|| ydk::is_set(cfg_router_id.yfilter)
	|| ydk::is_set(l2vpn_has_bgp_eod.yfilter)
	|| (rd_auto !=  nullptr && rd_auto->has_operation())
	|| (rd_configured !=  nullptr && rd_configured->has_operation());
}

std::string L2Vpnv2::Standby::Pwr::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pwr/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Pwr::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Pwr::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_as.is_set || is_set(bgp_as.yfilter)) leaf_name_data.push_back(bgp_as.get_name_leafdata());
    if (bgp_router_id.is_set || is_set(bgp_router_id.yfilter)) leaf_name_data.push_back(bgp_router_id.get_name_leafdata());
    if (cfg_global_id.is_set || is_set(cfg_global_id.yfilter)) leaf_name_data.push_back(cfg_global_id.get_name_leafdata());
    if (cfg_router_id.is_set || is_set(cfg_router_id.yfilter)) leaf_name_data.push_back(cfg_router_id.get_name_leafdata());
    if (l2vpn_has_bgp_eod.is_set || is_set(l2vpn_has_bgp_eod.yfilter)) leaf_name_data.push_back(l2vpn_has_bgp_eod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Pwr::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rd-auto")
    {
        if(rd_auto == nullptr)
        {
            rd_auto = std::make_shared<L2Vpnv2::Standby::Pwr::Summary::RdAuto>();
        }
        return rd_auto;
    }

    if(child_yang_name == "rd-configured")
    {
        if(rd_configured == nullptr)
        {
            rd_configured = std::make_shared<L2Vpnv2::Standby::Pwr::Summary::RdConfigured>();
        }
        return rd_configured;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Pwr::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rd_auto != nullptr)
    {
        children["rd-auto"] = rd_auto;
    }

    if(rd_configured != nullptr)
    {
        children["rd-configured"] = rd_configured;
    }

    return children;
}

void L2Vpnv2::Standby::Pwr::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-as")
    {
        bgp_as = value;
        bgp_as.value_namespace = name_space;
        bgp_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-router-id")
    {
        bgp_router_id = value;
        bgp_router_id.value_namespace = name_space;
        bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfg-global-id")
    {
        cfg_global_id = value;
        cfg_global_id.value_namespace = name_space;
        cfg_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfg-router-id")
    {
        cfg_router_id = value;
        cfg_router_id.value_namespace = name_space;
        cfg_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-has-bgp-eod")
    {
        l2vpn_has_bgp_eod = value;
        l2vpn_has_bgp_eod.value_namespace = name_space;
        l2vpn_has_bgp_eod.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Pwr::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-as")
    {
        bgp_as.yfilter = yfilter;
    }
    if(value_path == "bgp-router-id")
    {
        bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "cfg-global-id")
    {
        cfg_global_id.yfilter = yfilter;
    }
    if(value_path == "cfg-router-id")
    {
        cfg_router_id.yfilter = yfilter;
    }
    if(value_path == "l2vpn-has-bgp-eod")
    {
        l2vpn_has_bgp_eod.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Pwr::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rd-auto" || name == "rd-configured" || name == "bgp-as" || name == "bgp-router-id" || name == "cfg-global-id" || name == "cfg-router-id" || name == "l2vpn-has-bgp-eod")
        return true;
    return false;
}

L2Vpnv2::Standby::Pwr::Summary::RdAuto::RdAuto()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<L2Vpnv2::Standby::Pwr::Summary::RdAuto::Auto_>())
	,four_byte_as(std::make_shared<L2Vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs>())
	,two_byte_as(std::make_shared<L2Vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr>())
{
    auto_->parent = this;
    four_byte_as->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "rd-auto"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Pwr::Summary::RdAuto::~RdAuto()
{
}

bool L2Vpnv2::Standby::Pwr::Summary::RdAuto::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Standby::Pwr::Summary::RdAuto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Standby::Pwr::Summary::RdAuto::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pwr/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Pwr::Summary::RdAuto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Pwr::Summary::RdAuto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Pwr::Summary::RdAuto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Standby::Pwr::Summary::RdAuto::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Pwr::Summary::RdAuto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Standby::Pwr::Summary::RdAuto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Pwr::Summary::RdAuto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Pwr::Summary::RdAuto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "four-byte-as" || name == "two-byte-as" || name == "v4-addr" || name == "rd")
        return true;
    return false;
}

L2Vpnv2::Standby::Pwr::Summary::RdAuto::Auto_::Auto_()
    :
    auto_index{YType::uint16, "auto-index"},
    router_id{YType::str, "router-id"}
{

    yang_name = "auto"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Pwr::Summary::RdAuto::Auto_::~Auto_()
{
}

bool L2Vpnv2::Standby::Pwr::Summary::RdAuto::Auto_::has_data() const
{
    return auto_index.is_set
	|| router_id.is_set;
}

bool L2Vpnv2::Standby::Pwr::Summary::RdAuto::Auto_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_index.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string L2Vpnv2::Standby::Pwr::Summary::RdAuto::Auto_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pwr/summary/rd-auto/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Pwr::Summary::RdAuto::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Pwr::Summary::RdAuto::Auto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_index.is_set || is_set(auto_index.yfilter)) leaf_name_data.push_back(auto_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Pwr::Summary::RdAuto::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Pwr::Summary::RdAuto::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Pwr::Summary::RdAuto::Auto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-index")
    {
        auto_index = value;
        auto_index.value_namespace = name_space;
        auto_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Pwr::Summary::RdAuto::Auto_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-index")
    {
        auto_index.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Pwr::Summary::RdAuto::Auto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-index" || name == "router-id")
        return true;
    return false;
}

L2Vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pwr/summary/rd-auto/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_index.yfilter)
	|| ydk::is_set(two_byte_as.yfilter);
}

std::string L2Vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pwr/summary/rd-auto/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-index" || name == "two-byte-as")
        return true;
    return false;
}

L2Vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pwr/summary/rd-auto/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::Pwr::Summary::RdConfigured::RdConfigured()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<L2Vpnv2::Standby::Pwr::Summary::RdConfigured::Auto_>())
	,four_byte_as(std::make_shared<L2Vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs>())
	,two_byte_as(std::make_shared<L2Vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs>())
	,v4_addr(std::make_shared<L2Vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr>())
{
    auto_->parent = this;
    four_byte_as->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "rd-configured"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Pwr::Summary::RdConfigured::~RdConfigured()
{
}

bool L2Vpnv2::Standby::Pwr::Summary::RdConfigured::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2Vpnv2::Standby::Pwr::Summary::RdConfigured::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2Vpnv2::Standby::Pwr::Summary::RdConfigured::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pwr/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Pwr::Summary::RdConfigured::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-configured";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Pwr::Summary::RdConfigured::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Pwr::Summary::RdConfigured::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2Vpnv2::Standby::Pwr::Summary::RdConfigured::Auto_>();
        }
        return auto_;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2Vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2Vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2Vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Pwr::Summary::RdConfigured::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_ != nullptr)
    {
        children["auto"] = auto_;
    }

    if(four_byte_as != nullptr)
    {
        children["four-byte-as"] = four_byte_as;
    }

    if(two_byte_as != nullptr)
    {
        children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        children["v4-addr"] = v4_addr;
    }

    return children;
}

void L2Vpnv2::Standby::Pwr::Summary::RdConfigured::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Pwr::Summary::RdConfigured::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Pwr::Summary::RdConfigured::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "four-byte-as" || name == "two-byte-as" || name == "v4-addr" || name == "rd")
        return true;
    return false;
}

L2Vpnv2::Standby::Pwr::Summary::RdConfigured::Auto_::Auto_()
    :
    auto_index{YType::uint16, "auto-index"},
    router_id{YType::str, "router-id"}
{

    yang_name = "auto"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Pwr::Summary::RdConfigured::Auto_::~Auto_()
{
}

bool L2Vpnv2::Standby::Pwr::Summary::RdConfigured::Auto_::has_data() const
{
    return auto_index.is_set
	|| router_id.is_set;
}

bool L2Vpnv2::Standby::Pwr::Summary::RdConfigured::Auto_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_index.yfilter)
	|| ydk::is_set(router_id.yfilter);
}

std::string L2Vpnv2::Standby::Pwr::Summary::RdConfigured::Auto_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pwr/summary/rd-configured/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Pwr::Summary::RdConfigured::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Pwr::Summary::RdConfigured::Auto_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_index.is_set || is_set(auto_index.yfilter)) leaf_name_data.push_back(auto_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Pwr::Summary::RdConfigured::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Pwr::Summary::RdConfigured::Auto_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Pwr::Summary::RdConfigured::Auto_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto-index")
    {
        auto_index = value;
        auto_index.value_namespace = name_space;
        auto_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Pwr::Summary::RdConfigured::Auto_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto-index")
    {
        auto_index.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Pwr::Summary::RdConfigured::Auto_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-index" || name == "router-id")
        return true;
    return false;
}

L2Vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs::~FourByteAs()
{
}

bool L2Vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pwr/summary/rd-configured/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs::~TwoByteAs()
{
}

bool L2Vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool L2Vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_index.yfilter)
	|| ydk::is_set(two_byte_as.yfilter);
}

std::string L2Vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pwr/summary/rd-configured/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-index" || name == "two-byte-as")
        return true;
    return false;
}

L2Vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr::~V4Addr()
{
}

bool L2Vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2Vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2Vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pwr/summary/rd-configured/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void L2Vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2Vpnv2::Standby::XconnectBrief::XconnectBrief()
    :
    main_total_down{YType::uint32, "main-total-down"},
    main_total_unresolved{YType::uint32, "main-total-unresolved"},
    main_total_up{YType::uint32, "main-total-up"},
    memory_state{YType::enumeration, "memory-state"},
    undefined_xc{YType::uint32, "undefined-xc"}
{

    yang_name = "xconnect-brief"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

L2Vpnv2::Standby::XconnectBrief::~XconnectBrief()
{
}

bool L2Vpnv2::Standby::XconnectBrief::has_data() const
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
    return main_total_down.is_set
	|| main_total_unresolved.is_set
	|| main_total_up.is_set
	|| memory_state.is_set
	|| undefined_xc.is_set;
}

bool L2Vpnv2::Standby::XconnectBrief::has_operation() const
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
	|| ydk::is_set(main_total_down.yfilter)
	|| ydk::is_set(main_total_unresolved.yfilter)
	|| ydk::is_set(main_total_up.yfilter)
	|| ydk::is_set(memory_state.yfilter)
	|| ydk::is_set(undefined_xc.yfilter);
}

std::string L2Vpnv2::Standby::XconnectBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2Vpnv2::Standby::XconnectBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2Vpnv2::Standby::XconnectBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (main_total_down.is_set || is_set(main_total_down.yfilter)) leaf_name_data.push_back(main_total_down.get_name_leafdata());
    if (main_total_unresolved.is_set || is_set(main_total_unresolved.yfilter)) leaf_name_data.push_back(main_total_unresolved.get_name_leafdata());
    if (main_total_up.is_set || is_set(main_total_up.yfilter)) leaf_name_data.push_back(main_total_up.get_name_leafdata());
    if (memory_state.is_set || is_set(memory_state.yfilter)) leaf_name_data.push_back(memory_state.get_name_leafdata());
    if (undefined_xc.is_set || is_set(undefined_xc.yfilter)) leaf_name_data.push_back(undefined_xc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2Vpnv2::Standby::XconnectBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<L2Vpnv2::Standby::XconnectBrief::EncapsulationReportMatrix>();
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
        auto c = std::make_shared<L2Vpnv2::Standby::XconnectBrief::EncapsulationTotal>();
        c->parent = this;
        encapsulation_total.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2Vpnv2::Standby::XconnectBrief::get_children() const
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

void L2Vpnv2::Standby::XconnectBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "main-total-up")
    {
        main_total_up = value;
        main_total_up.value_namespace = name_space;
        main_total_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-state")
    {
        memory_state = value;
        memory_state.value_namespace = name_space;
        memory_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "undefined-xc")
    {
        undefined_xc = value;
        undefined_xc.value_namespace = name_space;
        undefined_xc.value_namespace_prefix = name_space_prefix;
    }
}

void L2Vpnv2::Standby::XconnectBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "main-total-down")
    {
        main_total_down.yfilter = yfilter;
    }
    if(value_path == "main-total-unresolved")
    {
        main_total_unresolved.yfilter = yfilter;
    }
    if(value_path == "main-total-up")
    {
        main_total_up.yfilter = yfilter;
    }
    if(value_path == "memory-state")
    {
        memory_state.yfilter = yfilter;
    }
    if(value_path == "undefined-xc")
    {
        undefined_xc.yfilter = yfilter;
    }
}

bool L2Vpnv2::Standby::XconnectBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation-report-matrix" || name == "encapsulation-total" || name == "main-total-down" || name == "main-total-unresolved" || name == "main-total-up" || name == "memory-state" || name == "undefined-xc")
        return true;
    return false;
}


}
}

