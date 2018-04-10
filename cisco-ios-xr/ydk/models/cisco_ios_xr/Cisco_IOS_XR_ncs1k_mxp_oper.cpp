
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ncs1k_mxp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ncs1k_mxp_oper {

HwModule::HwModule()
    :
    slice_ids(std::make_shared<HwModule::SliceIds>())
	,slice_all(std::make_shared<HwModule::SliceAll>())
{
    slice_ids->parent = this;
    slice_all->parent = this;

    yang_name = "hw-module"; yang_parent_name = "Cisco-IOS-XR-ncs1k-mxp-oper"; is_top_level_class = true; has_list_ancestor = false;
}

HwModule::~HwModule()
{
}

bool HwModule::has_data() const
{
    return (slice_ids !=  nullptr && slice_ids->has_data())
	|| (slice_all !=  nullptr && slice_all->has_data());
}

bool HwModule::has_operation() const
{
    return is_set(yfilter)
	|| (slice_ids !=  nullptr && slice_ids->has_operation())
	|| (slice_all !=  nullptr && slice_all->has_operation());
}

std::string HwModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-mxp-oper:hw-module";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slice-ids")
    {
        if(slice_ids == nullptr)
        {
            slice_ids = std::make_shared<HwModule::SliceIds>();
        }
        return slice_ids;
    }

    if(child_yang_name == "slice-all")
    {
        if(slice_all == nullptr)
        {
            slice_all = std::make_shared<HwModule::SliceAll>();
        }
        return slice_all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(slice_ids != nullptr)
    {
        children["slice-ids"] = slice_ids;
    }

    if(slice_all != nullptr)
    {
        children["slice-all"] = slice_all;
    }

    return children;
}

void HwModule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModule::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> HwModule::clone_ptr() const
{
    return std::make_shared<HwModule>();
}

std::string HwModule::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HwModule::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HwModule::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> HwModule::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool HwModule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slice-ids" || name == "slice-all")
        return true;
    return false;
}

HwModule::SliceIds::SliceIds()
{

    yang_name = "slice-ids"; yang_parent_name = "hw-module"; is_top_level_class = false; has_list_ancestor = false;
}

HwModule::SliceIds::~SliceIds()
{
}

bool HwModule::SliceIds::has_data() const
{
    for (std::size_t index=0; index<slice_id.size(); index++)
    {
        if(slice_id[index]->has_data())
            return true;
    }
    return false;
}

bool HwModule::SliceIds::has_operation() const
{
    for (std::size_t index=0; index<slice_id.size(); index++)
    {
        if(slice_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HwModule::SliceIds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-mxp-oper:hw-module/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::SliceIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slice-ids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::SliceIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModule::SliceIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slice-id")
    {
        auto c = std::make_shared<HwModule::SliceIds::SliceId>();
        c->parent = this;
        slice_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModule::SliceIds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : slice_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HwModule::SliceIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModule::SliceIds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModule::SliceIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slice-id")
        return true;
    return false;
}

HwModule::SliceIds::SliceId::SliceId()
    :
    slice_num{YType::int32, "slice-num"},
    slice_id{YType::uint32, "slice-id"},
    client_rate{YType::enumeration, "client-rate"},
    trunk_rate{YType::enumeration, "trunk-rate"},
    hardware_status{YType::enumeration, "hardware-status"},
    dp_fpga_fw_type{YType::str, "dp-fpga-fw-type"},
    dp_fpga_fw_ver{YType::str, "dp-fpga-fw-ver"},
    need_upg{YType::uint32, "need-upg"},
    encryption_supported{YType::boolean, "encryption-supported"},
    lldp_drop_status{YType::boolean, "lldp-drop-status"}
{

    yang_name = "slice-id"; yang_parent_name = "slice-ids"; is_top_level_class = false; has_list_ancestor = false;
}

HwModule::SliceIds::SliceId::~SliceId()
{
}

bool HwModule::SliceIds::SliceId::has_data() const
{
    for (std::size_t index=0; index<client_port.size(); index++)
    {
        if(client_port[index]->has_data())
            return true;
    }
    return slice_num.is_set
	|| slice_id.is_set
	|| client_rate.is_set
	|| trunk_rate.is_set
	|| hardware_status.is_set
	|| dp_fpga_fw_type.is_set
	|| dp_fpga_fw_ver.is_set
	|| need_upg.is_set
	|| encryption_supported.is_set
	|| lldp_drop_status.is_set;
}

bool HwModule::SliceIds::SliceId::has_operation() const
{
    for (std::size_t index=0; index<client_port.size(); index++)
    {
        if(client_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(slice_num.yfilter)
	|| ydk::is_set(slice_id.yfilter)
	|| ydk::is_set(client_rate.yfilter)
	|| ydk::is_set(trunk_rate.yfilter)
	|| ydk::is_set(hardware_status.yfilter)
	|| ydk::is_set(dp_fpga_fw_type.yfilter)
	|| ydk::is_set(dp_fpga_fw_ver.yfilter)
	|| ydk::is_set(need_upg.yfilter)
	|| ydk::is_set(encryption_supported.yfilter)
	|| ydk::is_set(lldp_drop_status.yfilter);
}

std::string HwModule::SliceIds::SliceId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-mxp-oper:hw-module/slice-ids/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::SliceIds::SliceId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slice-id" <<"[slice-num='" <<slice_num <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::SliceIds::SliceId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slice_num.is_set || is_set(slice_num.yfilter)) leaf_name_data.push_back(slice_num.get_name_leafdata());
    if (slice_id.is_set || is_set(slice_id.yfilter)) leaf_name_data.push_back(slice_id.get_name_leafdata());
    if (client_rate.is_set || is_set(client_rate.yfilter)) leaf_name_data.push_back(client_rate.get_name_leafdata());
    if (trunk_rate.is_set || is_set(trunk_rate.yfilter)) leaf_name_data.push_back(trunk_rate.get_name_leafdata());
    if (hardware_status.is_set || is_set(hardware_status.yfilter)) leaf_name_data.push_back(hardware_status.get_name_leafdata());
    if (dp_fpga_fw_type.is_set || is_set(dp_fpga_fw_type.yfilter)) leaf_name_data.push_back(dp_fpga_fw_type.get_name_leafdata());
    if (dp_fpga_fw_ver.is_set || is_set(dp_fpga_fw_ver.yfilter)) leaf_name_data.push_back(dp_fpga_fw_ver.get_name_leafdata());
    if (need_upg.is_set || is_set(need_upg.yfilter)) leaf_name_data.push_back(need_upg.get_name_leafdata());
    if (encryption_supported.is_set || is_set(encryption_supported.yfilter)) leaf_name_data.push_back(encryption_supported.get_name_leafdata());
    if (lldp_drop_status.is_set || is_set(lldp_drop_status.yfilter)) leaf_name_data.push_back(lldp_drop_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModule::SliceIds::SliceId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-port")
    {
        auto c = std::make_shared<HwModule::SliceIds::SliceId::ClientPort>();
        c->parent = this;
        client_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModule::SliceIds::SliceId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : client_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HwModule::SliceIds::SliceId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slice-num")
    {
        slice_num = value;
        slice_num.value_namespace = name_space;
        slice_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slice-id")
    {
        slice_id = value;
        slice_id.value_namespace = name_space;
        slice_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-rate")
    {
        client_rate = value;
        client_rate.value_namespace = name_space;
        client_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-rate")
    {
        trunk_rate = value;
        trunk_rate.value_namespace = name_space;
        trunk_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-status")
    {
        hardware_status = value;
        hardware_status.value_namespace = name_space;
        hardware_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dp-fpga-fw-type")
    {
        dp_fpga_fw_type = value;
        dp_fpga_fw_type.value_namespace = name_space;
        dp_fpga_fw_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dp-fpga-fw-ver")
    {
        dp_fpga_fw_ver = value;
        dp_fpga_fw_ver.value_namespace = name_space;
        dp_fpga_fw_ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "need-upg")
    {
        need_upg = value;
        need_upg.value_namespace = name_space;
        need_upg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-supported")
    {
        encryption_supported = value;
        encryption_supported.value_namespace = name_space;
        encryption_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldp-drop-status")
    {
        lldp_drop_status = value;
        lldp_drop_status.value_namespace = name_space;
        lldp_drop_status.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::SliceIds::SliceId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slice-num")
    {
        slice_num.yfilter = yfilter;
    }
    if(value_path == "slice-id")
    {
        slice_id.yfilter = yfilter;
    }
    if(value_path == "client-rate")
    {
        client_rate.yfilter = yfilter;
    }
    if(value_path == "trunk-rate")
    {
        trunk_rate.yfilter = yfilter;
    }
    if(value_path == "hardware-status")
    {
        hardware_status.yfilter = yfilter;
    }
    if(value_path == "dp-fpga-fw-type")
    {
        dp_fpga_fw_type.yfilter = yfilter;
    }
    if(value_path == "dp-fpga-fw-ver")
    {
        dp_fpga_fw_ver.yfilter = yfilter;
    }
    if(value_path == "need-upg")
    {
        need_upg.yfilter = yfilter;
    }
    if(value_path == "encryption-supported")
    {
        encryption_supported.yfilter = yfilter;
    }
    if(value_path == "lldp-drop-status")
    {
        lldp_drop_status.yfilter = yfilter;
    }
}

bool HwModule::SliceIds::SliceId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-port" || name == "slice-num" || name == "slice-id" || name == "client-rate" || name == "trunk-rate" || name == "hardware-status" || name == "dp-fpga-fw-type" || name == "dp-fpga-fw-ver" || name == "need-upg" || name == "encryption-supported" || name == "lldp-drop-status")
        return true;
    return false;
}

HwModule::SliceIds::SliceId::ClientPort::ClientPort()
    :
    client_name{YType::str, "client-name"},
    if_index{YType::uint32, "if-index"}
{

    yang_name = "client-port"; yang_parent_name = "slice-id"; is_top_level_class = false; has_list_ancestor = true;
}

HwModule::SliceIds::SliceId::ClientPort::~ClientPort()
{
}

bool HwModule::SliceIds::SliceId::ClientPort::has_data() const
{
    for (std::size_t index=0; index<trunk_port.size(); index++)
    {
        if(trunk_port[index]->has_data())
            return true;
    }
    return client_name.is_set
	|| if_index.is_set;
}

bool HwModule::SliceIds::SliceId::ClientPort::has_operation() const
{
    for (std::size_t index=0; index<trunk_port.size(); index++)
    {
        if(trunk_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(client_name.yfilter)
	|| ydk::is_set(if_index.yfilter);
}

std::string HwModule::SliceIds::SliceId::ClientPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::SliceIds::SliceId::ClientPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.yfilter)) leaf_name_data.push_back(if_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModule::SliceIds::SliceId::ClientPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trunk-port")
    {
        auto c = std::make_shared<HwModule::SliceIds::SliceId::ClientPort::TrunkPort>();
        c->parent = this;
        trunk_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModule::SliceIds::SliceId::ClientPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : trunk_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HwModule::SliceIds::SliceId::ClientPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-name")
    {
        client_name = value;
        client_name.value_namespace = name_space;
        client_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-index")
    {
        if_index = value;
        if_index.value_namespace = name_space;
        if_index.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::SliceIds::SliceId::ClientPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-name")
    {
        client_name.yfilter = yfilter;
    }
    if(value_path == "if-index")
    {
        if_index.yfilter = yfilter;
    }
}

bool HwModule::SliceIds::SliceId::ClientPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trunk-port" || name == "client-name" || name == "if-index")
        return true;
    return false;
}

HwModule::SliceIds::SliceId::ClientPort::TrunkPort::TrunkPort()
    :
    trunk_name{YType::str, "trunk-name"},
    if_index{YType::uint32, "if-index"},
    percentage{YType::str, "percentage"}
{

    yang_name = "trunk-port"; yang_parent_name = "client-port"; is_top_level_class = false; has_list_ancestor = true;
}

HwModule::SliceIds::SliceId::ClientPort::TrunkPort::~TrunkPort()
{
}

bool HwModule::SliceIds::SliceId::ClientPort::TrunkPort::has_data() const
{
    return trunk_name.is_set
	|| if_index.is_set
	|| percentage.is_set;
}

bool HwModule::SliceIds::SliceId::ClientPort::TrunkPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trunk_name.yfilter)
	|| ydk::is_set(if_index.yfilter)
	|| ydk::is_set(percentage.yfilter);
}

std::string HwModule::SliceIds::SliceId::ClientPort::TrunkPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trunk-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::SliceIds::SliceId::ClientPort::TrunkPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trunk_name.is_set || is_set(trunk_name.yfilter)) leaf_name_data.push_back(trunk_name.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.yfilter)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (percentage.is_set || is_set(percentage.yfilter)) leaf_name_data.push_back(percentage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModule::SliceIds::SliceId::ClientPort::TrunkPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModule::SliceIds::SliceId::ClientPort::TrunkPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HwModule::SliceIds::SliceId::ClientPort::TrunkPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trunk-name")
    {
        trunk_name = value;
        trunk_name.value_namespace = name_space;
        trunk_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-index")
    {
        if_index = value;
        if_index.value_namespace = name_space;
        if_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percentage")
    {
        percentage = value;
        percentage.value_namespace = name_space;
        percentage.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::SliceIds::SliceId::ClientPort::TrunkPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trunk-name")
    {
        trunk_name.yfilter = yfilter;
    }
    if(value_path == "if-index")
    {
        if_index.yfilter = yfilter;
    }
    if(value_path == "percentage")
    {
        percentage.yfilter = yfilter;
    }
}

bool HwModule::SliceIds::SliceId::ClientPort::TrunkPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trunk-name" || name == "if-index" || name == "percentage")
        return true;
    return false;
}

HwModule::SliceAll::SliceAll()
{

    yang_name = "slice-all"; yang_parent_name = "hw-module"; is_top_level_class = false; has_list_ancestor = false;
}

HwModule::SliceAll::~SliceAll()
{
}

bool HwModule::SliceAll::has_data() const
{
    for (std::size_t index=0; index<slice_info.size(); index++)
    {
        if(slice_info[index]->has_data())
            return true;
    }
    return false;
}

bool HwModule::SliceAll::has_operation() const
{
    for (std::size_t index=0; index<slice_info.size(); index++)
    {
        if(slice_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HwModule::SliceAll::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-mxp-oper:hw-module/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::SliceAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slice-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::SliceAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModule::SliceAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slice-info")
    {
        auto c = std::make_shared<HwModule::SliceAll::SliceInfo>();
        c->parent = this;
        slice_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModule::SliceAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : slice_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HwModule::SliceAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModule::SliceAll::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModule::SliceAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slice-info")
        return true;
    return false;
}

HwModule::SliceAll::SliceInfo::SliceInfo()
    :
    slice_id{YType::uint32, "slice-id"},
    client_rate{YType::enumeration, "client-rate"},
    trunk_rate{YType::enumeration, "trunk-rate"},
    hardware_status{YType::enumeration, "hardware-status"},
    dp_fpga_fw_type{YType::str, "dp-fpga-fw-type"},
    dp_fpga_fw_ver{YType::str, "dp-fpga-fw-ver"},
    need_upg{YType::uint32, "need-upg"},
    encryption_supported{YType::boolean, "encryption-supported"},
    lldp_drop_status{YType::boolean, "lldp-drop-status"}
{

    yang_name = "slice-info"; yang_parent_name = "slice-all"; is_top_level_class = false; has_list_ancestor = false;
}

HwModule::SliceAll::SliceInfo::~SliceInfo()
{
}

bool HwModule::SliceAll::SliceInfo::has_data() const
{
    for (std::size_t index=0; index<client_port.size(); index++)
    {
        if(client_port[index]->has_data())
            return true;
    }
    return slice_id.is_set
	|| client_rate.is_set
	|| trunk_rate.is_set
	|| hardware_status.is_set
	|| dp_fpga_fw_type.is_set
	|| dp_fpga_fw_ver.is_set
	|| need_upg.is_set
	|| encryption_supported.is_set
	|| lldp_drop_status.is_set;
}

bool HwModule::SliceAll::SliceInfo::has_operation() const
{
    for (std::size_t index=0; index<client_port.size(); index++)
    {
        if(client_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(slice_id.yfilter)
	|| ydk::is_set(client_rate.yfilter)
	|| ydk::is_set(trunk_rate.yfilter)
	|| ydk::is_set(hardware_status.yfilter)
	|| ydk::is_set(dp_fpga_fw_type.yfilter)
	|| ydk::is_set(dp_fpga_fw_ver.yfilter)
	|| ydk::is_set(need_upg.yfilter)
	|| ydk::is_set(encryption_supported.yfilter)
	|| ydk::is_set(lldp_drop_status.yfilter);
}

std::string HwModule::SliceAll::SliceInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-mxp-oper:hw-module/slice-all/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::SliceAll::SliceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slice-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::SliceAll::SliceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slice_id.is_set || is_set(slice_id.yfilter)) leaf_name_data.push_back(slice_id.get_name_leafdata());
    if (client_rate.is_set || is_set(client_rate.yfilter)) leaf_name_data.push_back(client_rate.get_name_leafdata());
    if (trunk_rate.is_set || is_set(trunk_rate.yfilter)) leaf_name_data.push_back(trunk_rate.get_name_leafdata());
    if (hardware_status.is_set || is_set(hardware_status.yfilter)) leaf_name_data.push_back(hardware_status.get_name_leafdata());
    if (dp_fpga_fw_type.is_set || is_set(dp_fpga_fw_type.yfilter)) leaf_name_data.push_back(dp_fpga_fw_type.get_name_leafdata());
    if (dp_fpga_fw_ver.is_set || is_set(dp_fpga_fw_ver.yfilter)) leaf_name_data.push_back(dp_fpga_fw_ver.get_name_leafdata());
    if (need_upg.is_set || is_set(need_upg.yfilter)) leaf_name_data.push_back(need_upg.get_name_leafdata());
    if (encryption_supported.is_set || is_set(encryption_supported.yfilter)) leaf_name_data.push_back(encryption_supported.get_name_leafdata());
    if (lldp_drop_status.is_set || is_set(lldp_drop_status.yfilter)) leaf_name_data.push_back(lldp_drop_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModule::SliceAll::SliceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-port")
    {
        auto c = std::make_shared<HwModule::SliceAll::SliceInfo::ClientPort>();
        c->parent = this;
        client_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModule::SliceAll::SliceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : client_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HwModule::SliceAll::SliceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slice-id")
    {
        slice_id = value;
        slice_id.value_namespace = name_space;
        slice_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-rate")
    {
        client_rate = value;
        client_rate.value_namespace = name_space;
        client_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-rate")
    {
        trunk_rate = value;
        trunk_rate.value_namespace = name_space;
        trunk_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-status")
    {
        hardware_status = value;
        hardware_status.value_namespace = name_space;
        hardware_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dp-fpga-fw-type")
    {
        dp_fpga_fw_type = value;
        dp_fpga_fw_type.value_namespace = name_space;
        dp_fpga_fw_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dp-fpga-fw-ver")
    {
        dp_fpga_fw_ver = value;
        dp_fpga_fw_ver.value_namespace = name_space;
        dp_fpga_fw_ver.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "need-upg")
    {
        need_upg = value;
        need_upg.value_namespace = name_space;
        need_upg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption-supported")
    {
        encryption_supported = value;
        encryption_supported.value_namespace = name_space;
        encryption_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldp-drop-status")
    {
        lldp_drop_status = value;
        lldp_drop_status.value_namespace = name_space;
        lldp_drop_status.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::SliceAll::SliceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slice-id")
    {
        slice_id.yfilter = yfilter;
    }
    if(value_path == "client-rate")
    {
        client_rate.yfilter = yfilter;
    }
    if(value_path == "trunk-rate")
    {
        trunk_rate.yfilter = yfilter;
    }
    if(value_path == "hardware-status")
    {
        hardware_status.yfilter = yfilter;
    }
    if(value_path == "dp-fpga-fw-type")
    {
        dp_fpga_fw_type.yfilter = yfilter;
    }
    if(value_path == "dp-fpga-fw-ver")
    {
        dp_fpga_fw_ver.yfilter = yfilter;
    }
    if(value_path == "need-upg")
    {
        need_upg.yfilter = yfilter;
    }
    if(value_path == "encryption-supported")
    {
        encryption_supported.yfilter = yfilter;
    }
    if(value_path == "lldp-drop-status")
    {
        lldp_drop_status.yfilter = yfilter;
    }
}

bool HwModule::SliceAll::SliceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-port" || name == "slice-id" || name == "client-rate" || name == "trunk-rate" || name == "hardware-status" || name == "dp-fpga-fw-type" || name == "dp-fpga-fw-ver" || name == "need-upg" || name == "encryption-supported" || name == "lldp-drop-status")
        return true;
    return false;
}

HwModule::SliceAll::SliceInfo::ClientPort::ClientPort()
    :
    client_name{YType::str, "client-name"},
    if_index{YType::uint32, "if-index"}
{

    yang_name = "client-port"; yang_parent_name = "slice-info"; is_top_level_class = false; has_list_ancestor = false;
}

HwModule::SliceAll::SliceInfo::ClientPort::~ClientPort()
{
}

bool HwModule::SliceAll::SliceInfo::ClientPort::has_data() const
{
    for (std::size_t index=0; index<trunk_port.size(); index++)
    {
        if(trunk_port[index]->has_data())
            return true;
    }
    return client_name.is_set
	|| if_index.is_set;
}

bool HwModule::SliceAll::SliceInfo::ClientPort::has_operation() const
{
    for (std::size_t index=0; index<trunk_port.size(); index++)
    {
        if(trunk_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(client_name.yfilter)
	|| ydk::is_set(if_index.yfilter);
}

std::string HwModule::SliceAll::SliceInfo::ClientPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-mxp-oper:hw-module/slice-all/slice-info/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::SliceAll::SliceInfo::ClientPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::SliceAll::SliceInfo::ClientPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_name.is_set || is_set(client_name.yfilter)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.yfilter)) leaf_name_data.push_back(if_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModule::SliceAll::SliceInfo::ClientPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trunk-port")
    {
        auto c = std::make_shared<HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort>();
        c->parent = this;
        trunk_port.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModule::SliceAll::SliceInfo::ClientPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : trunk_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HwModule::SliceAll::SliceInfo::ClientPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-name")
    {
        client_name = value;
        client_name.value_namespace = name_space;
        client_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-index")
    {
        if_index = value;
        if_index.value_namespace = name_space;
        if_index.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::SliceAll::SliceInfo::ClientPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-name")
    {
        client_name.yfilter = yfilter;
    }
    if(value_path == "if-index")
    {
        if_index.yfilter = yfilter;
    }
}

bool HwModule::SliceAll::SliceInfo::ClientPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trunk-port" || name == "client-name" || name == "if-index")
        return true;
    return false;
}

HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort::TrunkPort()
    :
    trunk_name{YType::str, "trunk-name"},
    if_index{YType::uint32, "if-index"},
    percentage{YType::str, "percentage"}
{

    yang_name = "trunk-port"; yang_parent_name = "client-port"; is_top_level_class = false; has_list_ancestor = false;
}

HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort::~TrunkPort()
{
}

bool HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort::has_data() const
{
    return trunk_name.is_set
	|| if_index.is_set
	|| percentage.is_set;
}

bool HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trunk_name.yfilter)
	|| ydk::is_set(if_index.yfilter)
	|| ydk::is_set(percentage.yfilter);
}

std::string HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-mxp-oper:hw-module/slice-all/slice-info/client-port/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trunk-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trunk_name.is_set || is_set(trunk_name.yfilter)) leaf_name_data.push_back(trunk_name.get_name_leafdata());
    if (if_index.is_set || is_set(if_index.yfilter)) leaf_name_data.push_back(if_index.get_name_leafdata());
    if (percentage.is_set || is_set(percentage.yfilter)) leaf_name_data.push_back(percentage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trunk-name")
    {
        trunk_name = value;
        trunk_name.value_namespace = name_space;
        trunk_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-index")
    {
        if_index = value;
        if_index.value_namespace = name_space;
        if_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percentage")
    {
        percentage = value;
        percentage.value_namespace = name_space;
        percentage.value_namespace_prefix = name_space_prefix;
    }
}

void HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trunk-name")
    {
        trunk_name.yfilter = yfilter;
    }
    if(value_path == "if-index")
    {
        if_index.yfilter = yfilter;
    }
    if(value_path == "percentage")
    {
        percentage.yfilter = yfilter;
    }
}

bool HwModule::SliceAll::SliceInfo::ClientPort::TrunkPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trunk-name" || name == "if-index" || name == "percentage")
        return true;
    return false;
}

const Enum::YLeaf HwModuleSliceStatus::not_provisioned {0, "not-provisioned"};
const Enum::YLeaf HwModuleSliceStatus::provisioning_in_progress {1, "provisioning-in-progress"};
const Enum::YLeaf HwModuleSliceStatus::provisioned {2, "provisioned"};
const Enum::YLeaf HwModuleSliceStatus::provisioning_failed {3, "provisioning-failed"};
const Enum::YLeaf HwModuleSliceStatus::provisioning_scheduled {4, "provisioning-scheduled"};
const Enum::YLeaf HwModuleSliceStatus::reprovisioning_aborted {5, "reprovisioning-aborted"};

const Enum::YLeaf TrunkDataRate::fifty_gig {1, "fifty-gig"};
const Enum::YLeaf TrunkDataRate::hundred_gig {2, "hundred-gig"};
const Enum::YLeaf TrunkDataRate::two_hundred_gig {3, "two-hundred-gig"};
const Enum::YLeaf TrunkDataRate::two_hundred_fifty_gig {4, "two-hundred-fifty-gig"};

const Enum::YLeaf ClientDataRate::ten_gig {1, "ten-gig"};
const Enum::YLeaf ClientDataRate::forty_gig {2, "forty-gig"};
const Enum::YLeaf ClientDataRate::hundred_gig {3, "hundred-gig"};
const Enum::YLeaf ClientDataRate::ten_and_hundred_gig {4, "ten-and-hundred-gig"};


}
}

