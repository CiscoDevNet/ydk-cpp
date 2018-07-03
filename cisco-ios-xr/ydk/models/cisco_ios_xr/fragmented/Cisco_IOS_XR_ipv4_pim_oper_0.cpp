
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_1.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_pim_oper {

PimMa::PimMa()
    :
    active(std::make_shared<PimMa::Active>())
    , standby(std::make_shared<PimMa::Standby>())
{
    active->parent = this;
    standby->parent = this;

    yang_name = "pim-ma"; yang_parent_name = "Cisco-IOS-XR-ipv4-pim-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

PimMa::~PimMa()
{
}

bool PimMa::has_data() const
{
    if (is_presence_container) return true;
    return (active !=  nullptr && active->has_data())
	|| (standby !=  nullptr && standby->has_data());
}

bool PimMa::has_operation() const
{
    return is_set(yfilter)
	|| (active !=  nullptr && active->has_operation())
	|| (standby !=  nullptr && standby->has_operation());
}

std::string PimMa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<PimMa::Active>();
        }
        return active;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<PimMa::Standby>();
        }
        return standby;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(standby != nullptr)
    {
        children["standby"] = standby;
    }

    return children;
}

void PimMa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PimMa::clone_ptr() const
{
    return std::make_shared<PimMa>();
}

std::string PimMa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string PimMa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function PimMa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PimMa::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool PimMa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "standby")
        return true;
    return false;
}

PimMa::Active::Active()
    :
    interface_table(std::make_shared<PimMa::Active::InterfaceTable>())
    , pim_ma_summary(std::make_shared<PimMa::Active::PimMaSummary>())
{
    interface_table->parent = this;
    pim_ma_summary->parent = this;

    yang_name = "active"; yang_parent_name = "pim-ma"; is_top_level_class = false; has_list_ancestor = false; 
}

PimMa::Active::~Active()
{
}

bool PimMa::Active::has_data() const
{
    if (is_presence_container) return true;
    return (interface_table !=  nullptr && interface_table->has_data())
	|| (pim_ma_summary !=  nullptr && pim_ma_summary->has_data());
}

bool PimMa::Active::has_operation() const
{
    return is_set(yfilter)
	|| (interface_table !=  nullptr && interface_table->has_operation())
	|| (pim_ma_summary !=  nullptr && pim_ma_summary->has_operation());
}

std::string PimMa::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-table")
    {
        if(interface_table == nullptr)
        {
            interface_table = std::make_shared<PimMa::Active::InterfaceTable>();
        }
        return interface_table;
    }

    if(child_yang_name == "pim-ma-summary")
    {
        if(pim_ma_summary == nullptr)
        {
            pim_ma_summary = std::make_shared<PimMa::Active::PimMaSummary>();
        }
        return pim_ma_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_table != nullptr)
    {
        children["interface-table"] = interface_table;
    }

    if(pim_ma_summary != nullptr)
    {
        children["pim-ma-summary"] = pim_ma_summary;
    }

    return children;
}

void PimMa::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMa::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PimMa::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-table" || name == "pim-ma-summary")
        return true;
    return false;
}

PimMa::Active::InterfaceTable::InterfaceTable()
    :
    interface_by_handles(std::make_shared<PimMa::Active::InterfaceTable::InterfaceByHandles>())
    , interface_by_names(std::make_shared<PimMa::Active::InterfaceTable::InterfaceByNames>())
{
    interface_by_handles->parent = this;
    interface_by_names->parent = this;

    yang_name = "interface-table"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

PimMa::Active::InterfaceTable::~InterfaceTable()
{
}

bool PimMa::Active::InterfaceTable::has_data() const
{
    if (is_presence_container) return true;
    return (interface_by_handles !=  nullptr && interface_by_handles->has_data())
	|| (interface_by_names !=  nullptr && interface_by_names->has_data());
}

bool PimMa::Active::InterfaceTable::has_operation() const
{
    return is_set(yfilter)
	|| (interface_by_handles !=  nullptr && interface_by_handles->has_operation())
	|| (interface_by_names !=  nullptr && interface_by_names->has_operation());
}

std::string PimMa::Active::InterfaceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/active/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Active::InterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Active::InterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-handles")
    {
        if(interface_by_handles == nullptr)
        {
            interface_by_handles = std::make_shared<PimMa::Active::InterfaceTable::InterfaceByHandles>();
        }
        return interface_by_handles;
    }

    if(child_yang_name == "interface-by-names")
    {
        if(interface_by_names == nullptr)
        {
            interface_by_names = std::make_shared<PimMa::Active::InterfaceTable::InterfaceByNames>();
        }
        return interface_by_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Active::InterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_by_handles != nullptr)
    {
        children["interface-by-handles"] = interface_by_handles;
    }

    if(interface_by_names != nullptr)
    {
        children["interface-by-names"] = interface_by_names;
    }

    return children;
}

void PimMa::Active::InterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMa::Active::InterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PimMa::Active::InterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-by-handles" || name == "interface-by-names")
        return true;
    return false;
}

PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandles()
    :
    interface_by_handle(this, {"interface_handle"})
{

    yang_name = "interface-by-handles"; yang_parent_name = "interface-table"; is_top_level_class = false; has_list_ancestor = false; 
}

PimMa::Active::InterfaceTable::InterfaceByHandles::~InterfaceByHandles()
{
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_by_handle.len(); index++)
    {
        if(interface_by_handle[index]->has_data())
            return true;
    }
    return false;
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::has_operation() const
{
    for (std::size_t index=0; index<interface_by_handle.len(); index++)
    {
        if(interface_by_handle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PimMa::Active::InterfaceTable::InterfaceByHandles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/active/interface-table/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Active::InterfaceTable::InterfaceByHandles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-handles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Active::InterfaceTable::InterfaceByHandles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::InterfaceByHandles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-handle")
    {
        auto c = std::make_shared<PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle>();
        c->parent = this;
        interface_by_handle.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Active::InterfaceTable::InterfaceByHandles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_by_handle.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PimMa::Active::InterfaceTable::InterfaceByHandles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMa::Active::InterfaceTable::InterfaceByHandles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-by-handle")
        return true;
    return false;
}

PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::InterfaceByHandle()
    :
    interface_handle{YType::uint32, "interface-handle"},
    interface_name_xr{YType::str, "interface-name-xr"},
    vrf_name{YType::str, "vrf-name"},
    interface_type{YType::enumeration, "interface-type"}
        ,
    rp_address(std::make_shared<PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress>())
    , source_address(std::make_shared<PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress>())
{
    rp_address->parent = this;
    source_address->parent = this;

    yang_name = "interface-by-handle"; yang_parent_name = "interface-by-handles"; is_top_level_class = false; has_list_ancestor = false; 
}

PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::~InterfaceByHandle()
{
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_data() const
{
    if (is_presence_container) return true;
    return interface_handle.is_set
	|| interface_name_xr.is_set
	|| vrf_name.is_set
	|| interface_type.is_set
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/active/interface-table/interface-by-handles/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-handle";
    ADD_KEY_TOKEN(interface_handle, "interface-handle");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "source-address" || name == "interface-handle" || name == "interface-name-xr" || name == "vrf-name" || name == "interface-type")
        return true;
    return false;
}

PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "interface-by-handle"; is_top_level_class = false; has_list_ancestor = true; 
}

PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::~RpAddress()
{
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "interface-by-handle"; is_top_level_class = false; has_list_ancestor = true; 
}

PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::~SourceAddress()
{
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool PimMa::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByNames()
    :
    interface_by_name(this, {"interface_name"})
{

    yang_name = "interface-by-names"; yang_parent_name = "interface-table"; is_top_level_class = false; has_list_ancestor = false; 
}

PimMa::Active::InterfaceTable::InterfaceByNames::~InterfaceByNames()
{
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_by_name.len(); index++)
    {
        if(interface_by_name[index]->has_data())
            return true;
    }
    return false;
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::has_operation() const
{
    for (std::size_t index=0; index<interface_by_name.len(); index++)
    {
        if(interface_by_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PimMa::Active::InterfaceTable::InterfaceByNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/active/interface-table/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Active::InterfaceTable::InterfaceByNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Active::InterfaceTable::InterfaceByNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::InterfaceByNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-name")
    {
        auto c = std::make_shared<PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName>();
        c->parent = this;
        interface_by_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Active::InterfaceTable::InterfaceByNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_by_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PimMa::Active::InterfaceTable::InterfaceByNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMa::Active::InterfaceTable::InterfaceByNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-by-name")
        return true;
    return false;
}

PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::InterfaceByName()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    vrf_name{YType::str, "vrf-name"},
    interface_type{YType::enumeration, "interface-type"}
        ,
    rp_address(std::make_shared<PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress>())
    , source_address(std::make_shared<PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress>())
{
    rp_address->parent = this;
    source_address->parent = this;

    yang_name = "interface-by-name"; yang_parent_name = "interface-by-names"; is_top_level_class = false; has_list_ancestor = false; 
}

PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::~InterfaceByName()
{
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| vrf_name.is_set
	|| interface_type.is_set
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/active/interface-table/interface-by-names/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-name";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "source-address" || name == "interface-name" || name == "interface-name-xr" || name == "vrf-name" || name == "interface-type")
        return true;
    return false;
}

PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "interface-by-name"; is_top_level_class = false; has_list_ancestor = true; 
}

PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::~RpAddress()
{
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "interface-by-name"; is_top_level_class = false; has_list_ancestor = true; 
}

PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::~SourceAddress()
{
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool PimMa::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

PimMa::Active::PimMaSummary::PimMaSummary()
    :
    is_im_connection_open{YType::boolean, "is-im-connection-open"},
    is_netio_connection_open{YType::boolean, "is-netio-connection-open"},
    is_edm_connection_open{YType::boolean, "is-edm-connection-open"},
    is_standby_edm_connection_open{YType::boolean, "is-standby-edm-connection-open"},
    encap_interface_count{YType::uint32, "encap-interface-count"},
    decap_interface_count{YType::uint32, "decap-interface-count"},
    mdt_interface_count{YType::uint32, "mdt-interface-count"}
{

    yang_name = "pim-ma-summary"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

PimMa::Active::PimMaSummary::~PimMaSummary()
{
}

bool PimMa::Active::PimMaSummary::has_data() const
{
    if (is_presence_container) return true;
    return is_im_connection_open.is_set
	|| is_netio_connection_open.is_set
	|| is_edm_connection_open.is_set
	|| is_standby_edm_connection_open.is_set
	|| encap_interface_count.is_set
	|| decap_interface_count.is_set
	|| mdt_interface_count.is_set;
}

bool PimMa::Active::PimMaSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_im_connection_open.yfilter)
	|| ydk::is_set(is_netio_connection_open.yfilter)
	|| ydk::is_set(is_edm_connection_open.yfilter)
	|| ydk::is_set(is_standby_edm_connection_open.yfilter)
	|| ydk::is_set(encap_interface_count.yfilter)
	|| ydk::is_set(decap_interface_count.yfilter)
	|| ydk::is_set(mdt_interface_count.yfilter);
}

std::string PimMa::Active::PimMaSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/active/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Active::PimMaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim-ma-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Active::PimMaSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_im_connection_open.is_set || is_set(is_im_connection_open.yfilter)) leaf_name_data.push_back(is_im_connection_open.get_name_leafdata());
    if (is_netio_connection_open.is_set || is_set(is_netio_connection_open.yfilter)) leaf_name_data.push_back(is_netio_connection_open.get_name_leafdata());
    if (is_edm_connection_open.is_set || is_set(is_edm_connection_open.yfilter)) leaf_name_data.push_back(is_edm_connection_open.get_name_leafdata());
    if (is_standby_edm_connection_open.is_set || is_set(is_standby_edm_connection_open.yfilter)) leaf_name_data.push_back(is_standby_edm_connection_open.get_name_leafdata());
    if (encap_interface_count.is_set || is_set(encap_interface_count.yfilter)) leaf_name_data.push_back(encap_interface_count.get_name_leafdata());
    if (decap_interface_count.is_set || is_set(decap_interface_count.yfilter)) leaf_name_data.push_back(decap_interface_count.get_name_leafdata());
    if (mdt_interface_count.is_set || is_set(mdt_interface_count.yfilter)) leaf_name_data.push_back(mdt_interface_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Active::PimMaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Active::PimMaSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PimMa::Active::PimMaSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-im-connection-open")
    {
        is_im_connection_open = value;
        is_im_connection_open.value_namespace = name_space;
        is_im_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-netio-connection-open")
    {
        is_netio_connection_open = value;
        is_netio_connection_open.value_namespace = name_space;
        is_netio_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-edm-connection-open")
    {
        is_edm_connection_open = value;
        is_edm_connection_open.value_namespace = name_space;
        is_edm_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-standby-edm-connection-open")
    {
        is_standby_edm_connection_open = value;
        is_standby_edm_connection_open.value_namespace = name_space;
        is_standby_edm_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap-interface-count")
    {
        encap_interface_count = value;
        encap_interface_count.value_namespace = name_space;
        encap_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decap-interface-count")
    {
        decap_interface_count = value;
        decap_interface_count.value_namespace = name_space;
        decap_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-interface-count")
    {
        mdt_interface_count = value;
        mdt_interface_count.value_namespace = name_space;
        mdt_interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Active::PimMaSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-im-connection-open")
    {
        is_im_connection_open.yfilter = yfilter;
    }
    if(value_path == "is-netio-connection-open")
    {
        is_netio_connection_open.yfilter = yfilter;
    }
    if(value_path == "is-edm-connection-open")
    {
        is_edm_connection_open.yfilter = yfilter;
    }
    if(value_path == "is-standby-edm-connection-open")
    {
        is_standby_edm_connection_open.yfilter = yfilter;
    }
    if(value_path == "encap-interface-count")
    {
        encap_interface_count.yfilter = yfilter;
    }
    if(value_path == "decap-interface-count")
    {
        decap_interface_count.yfilter = yfilter;
    }
    if(value_path == "mdt-interface-count")
    {
        mdt_interface_count.yfilter = yfilter;
    }
}

bool PimMa::Active::PimMaSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-im-connection-open" || name == "is-netio-connection-open" || name == "is-edm-connection-open" || name == "is-standby-edm-connection-open" || name == "encap-interface-count" || name == "decap-interface-count" || name == "mdt-interface-count")
        return true;
    return false;
}

PimMa::Standby::Standby()
    :
    interface_table(std::make_shared<PimMa::Standby::InterfaceTable>())
    , pim_ma_summary(std::make_shared<PimMa::Standby::PimMaSummary>())
{
    interface_table->parent = this;
    pim_ma_summary->parent = this;

    yang_name = "standby"; yang_parent_name = "pim-ma"; is_top_level_class = false; has_list_ancestor = false; 
}

PimMa::Standby::~Standby()
{
}

bool PimMa::Standby::has_data() const
{
    if (is_presence_container) return true;
    return (interface_table !=  nullptr && interface_table->has_data())
	|| (pim_ma_summary !=  nullptr && pim_ma_summary->has_data());
}

bool PimMa::Standby::has_operation() const
{
    return is_set(yfilter)
	|| (interface_table !=  nullptr && interface_table->has_operation())
	|| (pim_ma_summary !=  nullptr && pim_ma_summary->has_operation());
}

std::string PimMa::Standby::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Standby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-table")
    {
        if(interface_table == nullptr)
        {
            interface_table = std::make_shared<PimMa::Standby::InterfaceTable>();
        }
        return interface_table;
    }

    if(child_yang_name == "pim-ma-summary")
    {
        if(pim_ma_summary == nullptr)
        {
            pim_ma_summary = std::make_shared<PimMa::Standby::PimMaSummary>();
        }
        return pim_ma_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_table != nullptr)
    {
        children["interface-table"] = interface_table;
    }

    if(pim_ma_summary != nullptr)
    {
        children["pim-ma-summary"] = pim_ma_summary;
    }

    return children;
}

void PimMa::Standby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMa::Standby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PimMa::Standby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-table" || name == "pim-ma-summary")
        return true;
    return false;
}

PimMa::Standby::InterfaceTable::InterfaceTable()
    :
    interface_by_handles(std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByHandles>())
    , interface_by_names(std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByNames>())
{
    interface_by_handles->parent = this;
    interface_by_names->parent = this;

    yang_name = "interface-table"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

PimMa::Standby::InterfaceTable::~InterfaceTable()
{
}

bool PimMa::Standby::InterfaceTable::has_data() const
{
    if (is_presence_container) return true;
    return (interface_by_handles !=  nullptr && interface_by_handles->has_data())
	|| (interface_by_names !=  nullptr && interface_by_names->has_data());
}

bool PimMa::Standby::InterfaceTable::has_operation() const
{
    return is_set(yfilter)
	|| (interface_by_handles !=  nullptr && interface_by_handles->has_operation())
	|| (interface_by_names !=  nullptr && interface_by_names->has_operation());
}

std::string PimMa::Standby::InterfaceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Standby::InterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Standby::InterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-handles")
    {
        if(interface_by_handles == nullptr)
        {
            interface_by_handles = std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByHandles>();
        }
        return interface_by_handles;
    }

    if(child_yang_name == "interface-by-names")
    {
        if(interface_by_names == nullptr)
        {
            interface_by_names = std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByNames>();
        }
        return interface_by_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Standby::InterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_by_handles != nullptr)
    {
        children["interface-by-handles"] = interface_by_handles;
    }

    if(interface_by_names != nullptr)
    {
        children["interface-by-names"] = interface_by_names;
    }

    return children;
}

void PimMa::Standby::InterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMa::Standby::InterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PimMa::Standby::InterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-by-handles" || name == "interface-by-names")
        return true;
    return false;
}

PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandles()
    :
    interface_by_handle(this, {"interface_handle"})
{

    yang_name = "interface-by-handles"; yang_parent_name = "interface-table"; is_top_level_class = false; has_list_ancestor = false; 
}

PimMa::Standby::InterfaceTable::InterfaceByHandles::~InterfaceByHandles()
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_by_handle.len(); index++)
    {
        if(interface_by_handle[index]->has_data())
            return true;
    }
    return false;
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::has_operation() const
{
    for (std::size_t index=0; index<interface_by_handle.len(); index++)
    {
        if(interface_by_handle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PimMa::Standby::InterfaceTable::InterfaceByHandles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/standby/interface-table/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Standby::InterfaceTable::InterfaceByHandles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-handles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Standby::InterfaceTable::InterfaceByHandles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::InterfaceByHandles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-handle")
    {
        auto c = std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle>();
        c->parent = this;
        interface_by_handle.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Standby::InterfaceTable::InterfaceByHandles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_by_handle.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PimMa::Standby::InterfaceTable::InterfaceByHandles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMa::Standby::InterfaceTable::InterfaceByHandles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-by-handle")
        return true;
    return false;
}

PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::InterfaceByHandle()
    :
    interface_handle{YType::uint32, "interface-handle"},
    interface_name_xr{YType::str, "interface-name-xr"},
    vrf_name{YType::str, "vrf-name"},
    interface_type{YType::enumeration, "interface-type"}
        ,
    rp_address(std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress>())
    , source_address(std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress>())
{
    rp_address->parent = this;
    source_address->parent = this;

    yang_name = "interface-by-handle"; yang_parent_name = "interface-by-handles"; is_top_level_class = false; has_list_ancestor = false; 
}

PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::~InterfaceByHandle()
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_data() const
{
    if (is_presence_container) return true;
    return interface_handle.is_set
	|| interface_name_xr.is_set
	|| vrf_name.is_set
	|| interface_type.is_set
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/standby/interface-table/interface-by-handles/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-handle";
    ADD_KEY_TOKEN(interface_handle, "interface-handle");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "source-address" || name == "interface-handle" || name == "interface-name-xr" || name == "vrf-name" || name == "interface-type")
        return true;
    return false;
}

PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "interface-by-handle"; is_top_level_class = false; has_list_ancestor = true; 
}

PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::~RpAddress()
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "interface-by-handle"; is_top_level_class = false; has_list_ancestor = true; 
}

PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::~SourceAddress()
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool PimMa::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByNames()
    :
    interface_by_name(this, {"interface_name"})
{

    yang_name = "interface-by-names"; yang_parent_name = "interface-table"; is_top_level_class = false; has_list_ancestor = false; 
}

PimMa::Standby::InterfaceTable::InterfaceByNames::~InterfaceByNames()
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_by_name.len(); index++)
    {
        if(interface_by_name[index]->has_data())
            return true;
    }
    return false;
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::has_operation() const
{
    for (std::size_t index=0; index<interface_by_name.len(); index++)
    {
        if(interface_by_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PimMa::Standby::InterfaceTable::InterfaceByNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/standby/interface-table/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Standby::InterfaceTable::InterfaceByNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Standby::InterfaceTable::InterfaceByNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::InterfaceByNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-name")
    {
        auto c = std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName>();
        c->parent = this;
        interface_by_name.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Standby::InterfaceTable::InterfaceByNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_by_name.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PimMa::Standby::InterfaceTable::InterfaceByNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PimMa::Standby::InterfaceTable::InterfaceByNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-by-name")
        return true;
    return false;
}

PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::InterfaceByName()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    vrf_name{YType::str, "vrf-name"},
    interface_type{YType::enumeration, "interface-type"}
        ,
    rp_address(std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress>())
    , source_address(std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress>())
{
    rp_address->parent = this;
    source_address->parent = this;

    yang_name = "interface-by-name"; yang_parent_name = "interface-by-names"; is_top_level_class = false; has_list_ancestor = false; 
}

PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::~InterfaceByName()
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| vrf_name.is_set
	|| interface_type.is_set
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/standby/interface-table/interface-by-names/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-name";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "source-address" || name == "interface-name" || name == "interface-name-xr" || name == "vrf-name" || name == "interface-type")
        return true;
    return false;
}

PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "interface-by-name"; is_top_level_class = false; has_list_ancestor = true; 
}

PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::~RpAddress()
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "interface-by-name"; is_top_level_class = false; has_list_ancestor = true; 
}

PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::~SourceAddress()
{
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool PimMa::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

PimMa::Standby::PimMaSummary::PimMaSummary()
    :
    is_im_connection_open{YType::boolean, "is-im-connection-open"},
    is_netio_connection_open{YType::boolean, "is-netio-connection-open"},
    is_edm_connection_open{YType::boolean, "is-edm-connection-open"},
    is_standby_edm_connection_open{YType::boolean, "is-standby-edm-connection-open"},
    encap_interface_count{YType::uint32, "encap-interface-count"},
    decap_interface_count{YType::uint32, "decap-interface-count"},
    mdt_interface_count{YType::uint32, "mdt-interface-count"}
{

    yang_name = "pim-ma-summary"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

PimMa::Standby::PimMaSummary::~PimMaSummary()
{
}

bool PimMa::Standby::PimMaSummary::has_data() const
{
    if (is_presence_container) return true;
    return is_im_connection_open.is_set
	|| is_netio_connection_open.is_set
	|| is_edm_connection_open.is_set
	|| is_standby_edm_connection_open.is_set
	|| encap_interface_count.is_set
	|| decap_interface_count.is_set
	|| mdt_interface_count.is_set;
}

bool PimMa::Standby::PimMaSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_im_connection_open.yfilter)
	|| ydk::is_set(is_netio_connection_open.yfilter)
	|| ydk::is_set(is_edm_connection_open.yfilter)
	|| ydk::is_set(is_standby_edm_connection_open.yfilter)
	|| ydk::is_set(encap_interface_count.yfilter)
	|| ydk::is_set(decap_interface_count.yfilter)
	|| ydk::is_set(mdt_interface_count.yfilter);
}

std::string PimMa::Standby::PimMaSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim-ma/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string PimMa::Standby::PimMaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim-ma-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PimMa::Standby::PimMaSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_im_connection_open.is_set || is_set(is_im_connection_open.yfilter)) leaf_name_data.push_back(is_im_connection_open.get_name_leafdata());
    if (is_netio_connection_open.is_set || is_set(is_netio_connection_open.yfilter)) leaf_name_data.push_back(is_netio_connection_open.get_name_leafdata());
    if (is_edm_connection_open.is_set || is_set(is_edm_connection_open.yfilter)) leaf_name_data.push_back(is_edm_connection_open.get_name_leafdata());
    if (is_standby_edm_connection_open.is_set || is_set(is_standby_edm_connection_open.yfilter)) leaf_name_data.push_back(is_standby_edm_connection_open.get_name_leafdata());
    if (encap_interface_count.is_set || is_set(encap_interface_count.yfilter)) leaf_name_data.push_back(encap_interface_count.get_name_leafdata());
    if (decap_interface_count.is_set || is_set(decap_interface_count.yfilter)) leaf_name_data.push_back(decap_interface_count.get_name_leafdata());
    if (mdt_interface_count.is_set || is_set(mdt_interface_count.yfilter)) leaf_name_data.push_back(mdt_interface_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PimMa::Standby::PimMaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PimMa::Standby::PimMaSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PimMa::Standby::PimMaSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-im-connection-open")
    {
        is_im_connection_open = value;
        is_im_connection_open.value_namespace = name_space;
        is_im_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-netio-connection-open")
    {
        is_netio_connection_open = value;
        is_netio_connection_open.value_namespace = name_space;
        is_netio_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-edm-connection-open")
    {
        is_edm_connection_open = value;
        is_edm_connection_open.value_namespace = name_space;
        is_edm_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-standby-edm-connection-open")
    {
        is_standby_edm_connection_open = value;
        is_standby_edm_connection_open.value_namespace = name_space;
        is_standby_edm_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap-interface-count")
    {
        encap_interface_count = value;
        encap_interface_count.value_namespace = name_space;
        encap_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decap-interface-count")
    {
        decap_interface_count = value;
        decap_interface_count.value_namespace = name_space;
        decap_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-interface-count")
    {
        mdt_interface_count = value;
        mdt_interface_count.value_namespace = name_space;
        mdt_interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void PimMa::Standby::PimMaSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-im-connection-open")
    {
        is_im_connection_open.yfilter = yfilter;
    }
    if(value_path == "is-netio-connection-open")
    {
        is_netio_connection_open.yfilter = yfilter;
    }
    if(value_path == "is-edm-connection-open")
    {
        is_edm_connection_open.yfilter = yfilter;
    }
    if(value_path == "is-standby-edm-connection-open")
    {
        is_standby_edm_connection_open.yfilter = yfilter;
    }
    if(value_path == "encap-interface-count")
    {
        encap_interface_count.yfilter = yfilter;
    }
    if(value_path == "decap-interface-count")
    {
        decap_interface_count.yfilter = yfilter;
    }
    if(value_path == "mdt-interface-count")
    {
        mdt_interface_count.yfilter = yfilter;
    }
}

bool PimMa::Standby::PimMaSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-im-connection-open" || name == "is-netio-connection-open" || name == "is-edm-connection-open" || name == "is-standby-edm-connection-open" || name == "encap-interface-count" || name == "decap-interface-count" || name == "mdt-interface-count")
        return true;
    return false;
}

Pim::Pim()
    :
    standby(std::make_shared<Pim::Standby>())
    , active(std::make_shared<Pim::Active>())
{
    standby->parent = this;
    active->parent = this;

    yang_name = "pim"; yang_parent_name = "Cisco-IOS-XR-ipv4-pim-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Pim::~Pim()
{
}

bool Pim::has_data() const
{
    if (is_presence_container) return true;
    return (standby !=  nullptr && standby->has_data())
	|| (active !=  nullptr && active->has_data());
}

bool Pim::has_operation() const
{
    return is_set(yfilter)
	|| (standby !=  nullptr && standby->has_operation())
	|| (active !=  nullptr && active->has_operation());
}

std::string Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Pim::Standby>();
        }
        return standby;
    }

    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<Pim::Active>();
        }
        return active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
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

void Pim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Pim::clone_ptr() const
{
    return std::make_shared<Pim>();
}

std::string Pim::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Pim::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Pim::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Pim::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Pim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "standby" || name == "active")
        return true;
    return false;
}

Pim::Standby::Standby()
    :
    default_context(std::make_shared<Pim::Standby::DefaultContext>())
    , process(std::make_shared<Pim::Standby::Process>())
    , vrfs(std::make_shared<Pim::Standby::Vrfs>())
{
    default_context->parent = this;
    process->parent = this;
    vrfs->parent = this;

    yang_name = "standby"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::~Standby()
{
}

bool Pim::Standby::has_data() const
{
    if (is_presence_container) return true;
    return (default_context !=  nullptr && default_context->has_data())
	|| (process !=  nullptr && process->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Pim::Standby::has_operation() const
{
    return is_set(yfilter)
	|| (default_context !=  nullptr && default_context->has_operation())
	|| (process !=  nullptr && process->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Pim::Standby::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-context")
    {
        if(default_context == nullptr)
        {
            default_context = std::make_shared<Pim::Standby::DefaultContext>();
        }
        return default_context;
    }

    if(child_yang_name == "process")
    {
        if(process == nullptr)
        {
            process = std::make_shared<Pim::Standby::Process>();
        }
        return process;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Pim::Standby::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_context != nullptr)
    {
        children["default-context"] = default_context;
    }

    if(process != nullptr)
    {
        children["process"] = process;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Pim::Standby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-context" || name == "process" || name == "vrfs")
        return true;
    return false;
}

Pim::Standby::DefaultContext::DefaultContext()
    :
    global_interfaces(std::make_shared<Pim::Standby::DefaultContext::GlobalInterfaces>())
    , ifrs_interfaces(std::make_shared<Pim::Standby::DefaultContext::IfrsInterfaces>())
    , safs(std::make_shared<Pim::Standby::DefaultContext::Safs>())
    , interface_statistics(std::make_shared<Pim::Standby::DefaultContext::InterfaceStatistics>())
    , topology_route_count(std::make_shared<Pim::Standby::DefaultContext::TopologyRouteCount>())
    , jp_statistics(std::make_shared<Pim::Standby::DefaultContext::JpStatistics>())
    , mib_databases(std::make_shared<Pim::Standby::DefaultContext::MibDatabases>())
    , neighbor_old_formats(std::make_shared<Pim::Standby::DefaultContext::NeighborOldFormats>())
    , ifrs_summary(std::make_shared<Pim::Standby::DefaultContext::IfrsSummary>())
    , ranges(std::make_shared<Pim::Standby::DefaultContext::Ranges>())
    , interface_old_formats(std::make_shared<Pim::Standby::DefaultContext::InterfaceOldFormats>())
    , bsr(std::make_shared<Pim::Standby::DefaultContext::Bsr>())
    , route_policy(std::make_shared<Pim::Standby::DefaultContext::RoutePolicy>())
    , rpf_summary(std::make_shared<Pim::Standby::DefaultContext::RpfSummary>())
    , interfaces(std::make_shared<Pim::Standby::DefaultContext::Interfaces>())
    , net_io_tunnels(std::make_shared<Pim::Standby::DefaultContext::NetIoTunnels>())
    , bidir_df_states(std::make_shared<Pim::Standby::DefaultContext::BidirDfStates>())
    , topologies(std::make_shared<Pim::Standby::DefaultContext::Topologies>())
    , bgp_afs(std::make_shared<Pim::Standby::DefaultContext::BgpAfs>())
    , auto_rp(std::make_shared<Pim::Standby::DefaultContext::AutoRp>())
    , topology_interface_flag_route_counts(std::make_shared<Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts>())
    , group_map_sources(std::make_shared<Pim::Standby::DefaultContext::GroupMapSources>())
    , traffic_counters(std::make_shared<Pim::Standby::DefaultContext::TrafficCounters>())
    , group_map_rpfs(std::make_shared<Pim::Standby::DefaultContext::GroupMapRpfs>())
    , summary(std::make_shared<Pim::Standby::DefaultContext::Summary>())
    , gre(std::make_shared<Pim::Standby::DefaultContext::Gre>())
    , bidir_df_winners(std::make_shared<Pim::Standby::DefaultContext::BidirDfWinners>())
    , table_contexts(std::make_shared<Pim::Standby::DefaultContext::TableContexts>())
    , neighbor_summaries(std::make_shared<Pim::Standby::DefaultContext::NeighborSummaries>())
    , context(std::make_shared<Pim::Standby::DefaultContext::Context>())
    , topology_entry_flag_route_counts(std::make_shared<Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts>())
    , rpf_redirect(std::make_shared<Pim::Standby::DefaultContext::RpfRedirect>())
    , tunnels(std::make_shared<Pim::Standby::DefaultContext::Tunnels>())
    , multicast_static_routes(std::make_shared<Pim::Standby::DefaultContext::MulticastStaticRoutes>())
    , neighbors(std::make_shared<Pim::Standby::DefaultContext::Neighbors>())
{
    global_interfaces->parent = this;
    ifrs_interfaces->parent = this;
    safs->parent = this;
    interface_statistics->parent = this;
    topology_route_count->parent = this;
    jp_statistics->parent = this;
    mib_databases->parent = this;
    neighbor_old_formats->parent = this;
    ifrs_summary->parent = this;
    ranges->parent = this;
    interface_old_formats->parent = this;
    bsr->parent = this;
    route_policy->parent = this;
    rpf_summary->parent = this;
    interfaces->parent = this;
    net_io_tunnels->parent = this;
    bidir_df_states->parent = this;
    topologies->parent = this;
    bgp_afs->parent = this;
    auto_rp->parent = this;
    topology_interface_flag_route_counts->parent = this;
    group_map_sources->parent = this;
    traffic_counters->parent = this;
    group_map_rpfs->parent = this;
    summary->parent = this;
    gre->parent = this;
    bidir_df_winners->parent = this;
    table_contexts->parent = this;
    neighbor_summaries->parent = this;
    context->parent = this;
    topology_entry_flag_route_counts->parent = this;
    rpf_redirect->parent = this;
    tunnels->parent = this;
    multicast_static_routes->parent = this;
    neighbors->parent = this;

    yang_name = "default-context"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::~DefaultContext()
{
}

bool Pim::Standby::DefaultContext::has_data() const
{
    if (is_presence_container) return true;
    return (global_interfaces !=  nullptr && global_interfaces->has_data())
	|| (ifrs_interfaces !=  nullptr && ifrs_interfaces->has_data())
	|| (safs !=  nullptr && safs->has_data())
	|| (interface_statistics !=  nullptr && interface_statistics->has_data())
	|| (topology_route_count !=  nullptr && topology_route_count->has_data())
	|| (jp_statistics !=  nullptr && jp_statistics->has_data())
	|| (mib_databases !=  nullptr && mib_databases->has_data())
	|| (neighbor_old_formats !=  nullptr && neighbor_old_formats->has_data())
	|| (ifrs_summary !=  nullptr && ifrs_summary->has_data())
	|| (ranges !=  nullptr && ranges->has_data())
	|| (interface_old_formats !=  nullptr && interface_old_formats->has_data())
	|| (bsr !=  nullptr && bsr->has_data())
	|| (route_policy !=  nullptr && route_policy->has_data())
	|| (rpf_summary !=  nullptr && rpf_summary->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (net_io_tunnels !=  nullptr && net_io_tunnels->has_data())
	|| (bidir_df_states !=  nullptr && bidir_df_states->has_data())
	|| (topologies !=  nullptr && topologies->has_data())
	|| (bgp_afs !=  nullptr && bgp_afs->has_data())
	|| (auto_rp !=  nullptr && auto_rp->has_data())
	|| (topology_interface_flag_route_counts !=  nullptr && topology_interface_flag_route_counts->has_data())
	|| (group_map_sources !=  nullptr && group_map_sources->has_data())
	|| (traffic_counters !=  nullptr && traffic_counters->has_data())
	|| (group_map_rpfs !=  nullptr && group_map_rpfs->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (gre !=  nullptr && gre->has_data())
	|| (bidir_df_winners !=  nullptr && bidir_df_winners->has_data())
	|| (table_contexts !=  nullptr && table_contexts->has_data())
	|| (neighbor_summaries !=  nullptr && neighbor_summaries->has_data())
	|| (context !=  nullptr && context->has_data())
	|| (topology_entry_flag_route_counts !=  nullptr && topology_entry_flag_route_counts->has_data())
	|| (rpf_redirect !=  nullptr && rpf_redirect->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data())
	|| (multicast_static_routes !=  nullptr && multicast_static_routes->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data());
}

bool Pim::Standby::DefaultContext::has_operation() const
{
    return is_set(yfilter)
	|| (global_interfaces !=  nullptr && global_interfaces->has_operation())
	|| (ifrs_interfaces !=  nullptr && ifrs_interfaces->has_operation())
	|| (safs !=  nullptr && safs->has_operation())
	|| (interface_statistics !=  nullptr && interface_statistics->has_operation())
	|| (topology_route_count !=  nullptr && topology_route_count->has_operation())
	|| (jp_statistics !=  nullptr && jp_statistics->has_operation())
	|| (mib_databases !=  nullptr && mib_databases->has_operation())
	|| (neighbor_old_formats !=  nullptr && neighbor_old_formats->has_operation())
	|| (ifrs_summary !=  nullptr && ifrs_summary->has_operation())
	|| (ranges !=  nullptr && ranges->has_operation())
	|| (interface_old_formats !=  nullptr && interface_old_formats->has_operation())
	|| (bsr !=  nullptr && bsr->has_operation())
	|| (route_policy !=  nullptr && route_policy->has_operation())
	|| (rpf_summary !=  nullptr && rpf_summary->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (net_io_tunnels !=  nullptr && net_io_tunnels->has_operation())
	|| (bidir_df_states !=  nullptr && bidir_df_states->has_operation())
	|| (topologies !=  nullptr && topologies->has_operation())
	|| (bgp_afs !=  nullptr && bgp_afs->has_operation())
	|| (auto_rp !=  nullptr && auto_rp->has_operation())
	|| (topology_interface_flag_route_counts !=  nullptr && topology_interface_flag_route_counts->has_operation())
	|| (group_map_sources !=  nullptr && group_map_sources->has_operation())
	|| (traffic_counters !=  nullptr && traffic_counters->has_operation())
	|| (group_map_rpfs !=  nullptr && group_map_rpfs->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (gre !=  nullptr && gre->has_operation())
	|| (bidir_df_winners !=  nullptr && bidir_df_winners->has_operation())
	|| (table_contexts !=  nullptr && table_contexts->has_operation())
	|| (neighbor_summaries !=  nullptr && neighbor_summaries->has_operation())
	|| (context !=  nullptr && context->has_operation())
	|| (topology_entry_flag_route_counts !=  nullptr && topology_entry_flag_route_counts->has_operation())
	|| (rpf_redirect !=  nullptr && rpf_redirect->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation())
	|| (multicast_static_routes !=  nullptr && multicast_static_routes->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation());
}

std::string Pim::Standby::DefaultContext::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-interfaces")
    {
        if(global_interfaces == nullptr)
        {
            global_interfaces = std::make_shared<Pim::Standby::DefaultContext::GlobalInterfaces>();
        }
        return global_interfaces;
    }

    if(child_yang_name == "ifrs-interfaces")
    {
        if(ifrs_interfaces == nullptr)
        {
            ifrs_interfaces = std::make_shared<Pim::Standby::DefaultContext::IfrsInterfaces>();
        }
        return ifrs_interfaces;
    }

    if(child_yang_name == "safs")
    {
        if(safs == nullptr)
        {
            safs = std::make_shared<Pim::Standby::DefaultContext::Safs>();
        }
        return safs;
    }

    if(child_yang_name == "interface-statistics")
    {
        if(interface_statistics == nullptr)
        {
            interface_statistics = std::make_shared<Pim::Standby::DefaultContext::InterfaceStatistics>();
        }
        return interface_statistics;
    }

    if(child_yang_name == "topology-route-count")
    {
        if(topology_route_count == nullptr)
        {
            topology_route_count = std::make_shared<Pim::Standby::DefaultContext::TopologyRouteCount>();
        }
        return topology_route_count;
    }

    if(child_yang_name == "jp-statistics")
    {
        if(jp_statistics == nullptr)
        {
            jp_statistics = std::make_shared<Pim::Standby::DefaultContext::JpStatistics>();
        }
        return jp_statistics;
    }

    if(child_yang_name == "mib-databases")
    {
        if(mib_databases == nullptr)
        {
            mib_databases = std::make_shared<Pim::Standby::DefaultContext::MibDatabases>();
        }
        return mib_databases;
    }

    if(child_yang_name == "neighbor-old-formats")
    {
        if(neighbor_old_formats == nullptr)
        {
            neighbor_old_formats = std::make_shared<Pim::Standby::DefaultContext::NeighborOldFormats>();
        }
        return neighbor_old_formats;
    }

    if(child_yang_name == "ifrs-summary")
    {
        if(ifrs_summary == nullptr)
        {
            ifrs_summary = std::make_shared<Pim::Standby::DefaultContext::IfrsSummary>();
        }
        return ifrs_summary;
    }

    if(child_yang_name == "ranges")
    {
        if(ranges == nullptr)
        {
            ranges = std::make_shared<Pim::Standby::DefaultContext::Ranges>();
        }
        return ranges;
    }

    if(child_yang_name == "interface-old-formats")
    {
        if(interface_old_formats == nullptr)
        {
            interface_old_formats = std::make_shared<Pim::Standby::DefaultContext::InterfaceOldFormats>();
        }
        return interface_old_formats;
    }

    if(child_yang_name == "bsr")
    {
        if(bsr == nullptr)
        {
            bsr = std::make_shared<Pim::Standby::DefaultContext::Bsr>();
        }
        return bsr;
    }

    if(child_yang_name == "route-policy")
    {
        if(route_policy == nullptr)
        {
            route_policy = std::make_shared<Pim::Standby::DefaultContext::RoutePolicy>();
        }
        return route_policy;
    }

    if(child_yang_name == "rpf-summary")
    {
        if(rpf_summary == nullptr)
        {
            rpf_summary = std::make_shared<Pim::Standby::DefaultContext::RpfSummary>();
        }
        return rpf_summary;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Pim::Standby::DefaultContext::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "net-io-tunnels")
    {
        if(net_io_tunnels == nullptr)
        {
            net_io_tunnels = std::make_shared<Pim::Standby::DefaultContext::NetIoTunnels>();
        }
        return net_io_tunnels;
    }

    if(child_yang_name == "bidir-df-states")
    {
        if(bidir_df_states == nullptr)
        {
            bidir_df_states = std::make_shared<Pim::Standby::DefaultContext::BidirDfStates>();
        }
        return bidir_df_states;
    }

    if(child_yang_name == "topologies")
    {
        if(topologies == nullptr)
        {
            topologies = std::make_shared<Pim::Standby::DefaultContext::Topologies>();
        }
        return topologies;
    }

    if(child_yang_name == "bgp-afs")
    {
        if(bgp_afs == nullptr)
        {
            bgp_afs = std::make_shared<Pim::Standby::DefaultContext::BgpAfs>();
        }
        return bgp_afs;
    }

    if(child_yang_name == "auto-rp")
    {
        if(auto_rp == nullptr)
        {
            auto_rp = std::make_shared<Pim::Standby::DefaultContext::AutoRp>();
        }
        return auto_rp;
    }

    if(child_yang_name == "topology-interface-flag-route-counts")
    {
        if(topology_interface_flag_route_counts == nullptr)
        {
            topology_interface_flag_route_counts = std::make_shared<Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts>();
        }
        return topology_interface_flag_route_counts;
    }

    if(child_yang_name == "group-map-sources")
    {
        if(group_map_sources == nullptr)
        {
            group_map_sources = std::make_shared<Pim::Standby::DefaultContext::GroupMapSources>();
        }
        return group_map_sources;
    }

    if(child_yang_name == "traffic-counters")
    {
        if(traffic_counters == nullptr)
        {
            traffic_counters = std::make_shared<Pim::Standby::DefaultContext::TrafficCounters>();
        }
        return traffic_counters;
    }

    if(child_yang_name == "group-map-rpfs")
    {
        if(group_map_rpfs == nullptr)
        {
            group_map_rpfs = std::make_shared<Pim::Standby::DefaultContext::GroupMapRpfs>();
        }
        return group_map_rpfs;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Pim::Standby::DefaultContext::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "gre")
    {
        if(gre == nullptr)
        {
            gre = std::make_shared<Pim::Standby::DefaultContext::Gre>();
        }
        return gre;
    }

    if(child_yang_name == "bidir-df-winners")
    {
        if(bidir_df_winners == nullptr)
        {
            bidir_df_winners = std::make_shared<Pim::Standby::DefaultContext::BidirDfWinners>();
        }
        return bidir_df_winners;
    }

    if(child_yang_name == "table-contexts")
    {
        if(table_contexts == nullptr)
        {
            table_contexts = std::make_shared<Pim::Standby::DefaultContext::TableContexts>();
        }
        return table_contexts;
    }

    if(child_yang_name == "neighbor-summaries")
    {
        if(neighbor_summaries == nullptr)
        {
            neighbor_summaries = std::make_shared<Pim::Standby::DefaultContext::NeighborSummaries>();
        }
        return neighbor_summaries;
    }

    if(child_yang_name == "context")
    {
        if(context == nullptr)
        {
            context = std::make_shared<Pim::Standby::DefaultContext::Context>();
        }
        return context;
    }

    if(child_yang_name == "topology-entry-flag-route-counts")
    {
        if(topology_entry_flag_route_counts == nullptr)
        {
            topology_entry_flag_route_counts = std::make_shared<Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts>();
        }
        return topology_entry_flag_route_counts;
    }

    if(child_yang_name == "rpf-redirect")
    {
        if(rpf_redirect == nullptr)
        {
            rpf_redirect = std::make_shared<Pim::Standby::DefaultContext::RpfRedirect>();
        }
        return rpf_redirect;
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels == nullptr)
        {
            tunnels = std::make_shared<Pim::Standby::DefaultContext::Tunnels>();
        }
        return tunnels;
    }

    if(child_yang_name == "multicast-static-routes")
    {
        if(multicast_static_routes == nullptr)
        {
            multicast_static_routes = std::make_shared<Pim::Standby::DefaultContext::MulticastStaticRoutes>();
        }
        return multicast_static_routes;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Pim::Standby::DefaultContext::Neighbors>();
        }
        return neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(global_interfaces != nullptr)
    {
        children["global-interfaces"] = global_interfaces;
    }

    if(ifrs_interfaces != nullptr)
    {
        children["ifrs-interfaces"] = ifrs_interfaces;
    }

    if(safs != nullptr)
    {
        children["safs"] = safs;
    }

    if(interface_statistics != nullptr)
    {
        children["interface-statistics"] = interface_statistics;
    }

    if(topology_route_count != nullptr)
    {
        children["topology-route-count"] = topology_route_count;
    }

    if(jp_statistics != nullptr)
    {
        children["jp-statistics"] = jp_statistics;
    }

    if(mib_databases != nullptr)
    {
        children["mib-databases"] = mib_databases;
    }

    if(neighbor_old_formats != nullptr)
    {
        children["neighbor-old-formats"] = neighbor_old_formats;
    }

    if(ifrs_summary != nullptr)
    {
        children["ifrs-summary"] = ifrs_summary;
    }

    if(ranges != nullptr)
    {
        children["ranges"] = ranges;
    }

    if(interface_old_formats != nullptr)
    {
        children["interface-old-formats"] = interface_old_formats;
    }

    if(bsr != nullptr)
    {
        children["bsr"] = bsr;
    }

    if(route_policy != nullptr)
    {
        children["route-policy"] = route_policy;
    }

    if(rpf_summary != nullptr)
    {
        children["rpf-summary"] = rpf_summary;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(net_io_tunnels != nullptr)
    {
        children["net-io-tunnels"] = net_io_tunnels;
    }

    if(bidir_df_states != nullptr)
    {
        children["bidir-df-states"] = bidir_df_states;
    }

    if(topologies != nullptr)
    {
        children["topologies"] = topologies;
    }

    if(bgp_afs != nullptr)
    {
        children["bgp-afs"] = bgp_afs;
    }

    if(auto_rp != nullptr)
    {
        children["auto-rp"] = auto_rp;
    }

    if(topology_interface_flag_route_counts != nullptr)
    {
        children["topology-interface-flag-route-counts"] = topology_interface_flag_route_counts;
    }

    if(group_map_sources != nullptr)
    {
        children["group-map-sources"] = group_map_sources;
    }

    if(traffic_counters != nullptr)
    {
        children["traffic-counters"] = traffic_counters;
    }

    if(group_map_rpfs != nullptr)
    {
        children["group-map-rpfs"] = group_map_rpfs;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(gre != nullptr)
    {
        children["gre"] = gre;
    }

    if(bidir_df_winners != nullptr)
    {
        children["bidir-df-winners"] = bidir_df_winners;
    }

    if(table_contexts != nullptr)
    {
        children["table-contexts"] = table_contexts;
    }

    if(neighbor_summaries != nullptr)
    {
        children["neighbor-summaries"] = neighbor_summaries;
    }

    if(context != nullptr)
    {
        children["context"] = context;
    }

    if(topology_entry_flag_route_counts != nullptr)
    {
        children["topology-entry-flag-route-counts"] = topology_entry_flag_route_counts;
    }

    if(rpf_redirect != nullptr)
    {
        children["rpf-redirect"] = rpf_redirect;
    }

    if(tunnels != nullptr)
    {
        children["tunnels"] = tunnels;
    }

    if(multicast_static_routes != nullptr)
    {
        children["multicast-static-routes"] = multicast_static_routes;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    return children;
}

void Pim::Standby::DefaultContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-interfaces" || name == "ifrs-interfaces" || name == "safs" || name == "interface-statistics" || name == "topology-route-count" || name == "jp-statistics" || name == "mib-databases" || name == "neighbor-old-formats" || name == "ifrs-summary" || name == "ranges" || name == "interface-old-formats" || name == "bsr" || name == "route-policy" || name == "rpf-summary" || name == "interfaces" || name == "net-io-tunnels" || name == "bidir-df-states" || name == "topologies" || name == "bgp-afs" || name == "auto-rp" || name == "topology-interface-flag-route-counts" || name == "group-map-sources" || name == "traffic-counters" || name == "group-map-rpfs" || name == "summary" || name == "gre" || name == "bidir-df-winners" || name == "table-contexts" || name == "neighbor-summaries" || name == "context" || name == "topology-entry-flag-route-counts" || name == "rpf-redirect" || name == "tunnels" || name == "multicast-static-routes" || name == "neighbors")
        return true;
    return false;
}

Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterfaces()
    :
    global_interface(this, {"interface_name"})
{

    yang_name = "global-interfaces"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::GlobalInterfaces::~GlobalInterfaces()
{
}

bool Pim::Standby::DefaultContext::GlobalInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<global_interface.len(); index++)
    {
        if(global_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::GlobalInterfaces::has_operation() const
{
    for (std::size_t index=0; index<global_interface.len(); index++)
    {
        if(global_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::GlobalInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::GlobalInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::GlobalInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GlobalInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global-interface")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface>();
        c->parent = this;
        global_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GlobalInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : global_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::GlobalInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::GlobalInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::GlobalInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-interface")
        return true;
    return false;
}

Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::GlobalInterface()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_address_mask{YType::uint8, "interface-address-mask"},
    is_enabled{YType::boolean, "is-enabled"},
    neighbor_count{YType::uint16, "neighbor-count"},
    external_neighbor_count{YType::uint16, "external-neighbor-count"},
    hello_interval{YType::uint16, "hello-interval"},
    dr_priority{YType::uint32, "dr-priority"},
    hello_expiry{YType::uint64, "hello-expiry"},
    are_we_dr{YType::boolean, "are-we-dr"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    virtual_interface{YType::boolean, "virtual-interface"},
    passive_interface{YType::boolean, "passive-interface"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    join_prune_interval{YType::uint16, "join-prune-interval"},
    prune_delay_enabled{YType::boolean, "prune-delay-enabled"},
    configured_propagation_delay{YType::uint16, "configured-propagation-delay"},
    propagation_delay{YType::uint16, "propagation-delay"},
    configured_override_interval{YType::uint16, "configured-override-interval"},
    override_interval{YType::uint16, "override-interval"},
    generation_id{YType::uint32, "generation-id"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    idb_oor_enabled{YType::boolean, "idb-oor-enabled"},
    idb_acl_provided{YType::boolean, "idb-acl-provided"},
    idb_max_count{YType::uint32, "idb-max-count"},
    idb_threshold_count{YType::uint32, "idb-threshold-count"},
    idb_current_count{YType::uint32, "idb-current-count"},
    idb_acl_name{YType::str, "idb-acl-name"}
        ,
    dr_address(std::make_shared<Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress>())
    , interface_address(this, {})
{
    dr_address->parent = this;

    yang_name = "global-interface"; yang_parent_name = "global-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::~GlobalInterface()
{
}

bool Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_address.len(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_address_mask.is_set
	|| is_enabled.is_set
	|| neighbor_count.is_set
	|| external_neighbor_count.is_set
	|| hello_interval.is_set
	|| dr_priority.is_set
	|| hello_expiry.is_set
	|| are_we_dr.is_set
	|| bfd_enabled.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| virtual_interface.is_set
	|| passive_interface.is_set
	|| neighbor_filter_name.is_set
	|| join_prune_interval.is_set
	|| prune_delay_enabled.is_set
	|| configured_propagation_delay.is_set
	|| propagation_delay.is_set
	|| configured_override_interval.is_set
	|| override_interval.is_set
	|| generation_id.is_set
	|| is_bidirectional_capable.is_set
	|| is_proxy_capable.is_set
	|| is_batch_asserts_capable.is_set
	|| idb_oor_enabled.is_set
	|| idb_acl_provided.is_set
	|| idb_max_count.is_set
	|| idb_threshold_count.is_set
	|| idb_current_count.is_set
	|| idb_acl_name.is_set
	|| (dr_address !=  nullptr && dr_address->has_data());
}

bool Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::has_operation() const
{
    for (std::size_t index=0; index<interface_address.len(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_address_mask.yfilter)
	|| ydk::is_set(is_enabled.yfilter)
	|| ydk::is_set(neighbor_count.yfilter)
	|| ydk::is_set(external_neighbor_count.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(hello_expiry.yfilter)
	|| ydk::is_set(are_we_dr.yfilter)
	|| ydk::is_set(bfd_enabled.yfilter)
	|| ydk::is_set(bfd_interval.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(virtual_interface.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(neighbor_filter_name.yfilter)
	|| ydk::is_set(join_prune_interval.yfilter)
	|| ydk::is_set(prune_delay_enabled.yfilter)
	|| ydk::is_set(configured_propagation_delay.yfilter)
	|| ydk::is_set(propagation_delay.yfilter)
	|| ydk::is_set(configured_override_interval.yfilter)
	|| ydk::is_set(override_interval.yfilter)
	|| ydk::is_set(generation_id.yfilter)
	|| ydk::is_set(is_bidirectional_capable.yfilter)
	|| ydk::is_set(is_proxy_capable.yfilter)
	|| ydk::is_set(is_batch_asserts_capable.yfilter)
	|| ydk::is_set(idb_oor_enabled.yfilter)
	|| ydk::is_set(idb_acl_provided.yfilter)
	|| ydk::is_set(idb_max_count.yfilter)
	|| ydk::is_set(idb_threshold_count.yfilter)
	|| ydk::is_set(idb_current_count.yfilter)
	|| ydk::is_set(idb_acl_name.yfilter)
	|| (dr_address !=  nullptr && dr_address->has_operation());
}

std::string Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/global-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_address_mask.is_set || is_set(interface_address_mask.yfilter)) leaf_name_data.push_back(interface_address_mask.get_name_leafdata());
    if (is_enabled.is_set || is_set(is_enabled.yfilter)) leaf_name_data.push_back(is_enabled.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.yfilter)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (external_neighbor_count.is_set || is_set(external_neighbor_count.yfilter)) leaf_name_data.push_back(external_neighbor_count.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (hello_expiry.is_set || is_set(hello_expiry.yfilter)) leaf_name_data.push_back(hello_expiry.get_name_leafdata());
    if (are_we_dr.is_set || is_set(are_we_dr.yfilter)) leaf_name_data.push_back(are_we_dr.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.yfilter)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.yfilter)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.yfilter)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.yfilter)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (join_prune_interval.is_set || is_set(join_prune_interval.yfilter)) leaf_name_data.push_back(join_prune_interval.get_name_leafdata());
    if (prune_delay_enabled.is_set || is_set(prune_delay_enabled.yfilter)) leaf_name_data.push_back(prune_delay_enabled.get_name_leafdata());
    if (configured_propagation_delay.is_set || is_set(configured_propagation_delay.yfilter)) leaf_name_data.push_back(configured_propagation_delay.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (configured_override_interval.is_set || is_set(configured_override_interval.yfilter)) leaf_name_data.push_back(configured_override_interval.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (generation_id.is_set || is_set(generation_id.yfilter)) leaf_name_data.push_back(generation_id.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.yfilter)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.yfilter)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.yfilter)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (idb_oor_enabled.is_set || is_set(idb_oor_enabled.yfilter)) leaf_name_data.push_back(idb_oor_enabled.get_name_leafdata());
    if (idb_acl_provided.is_set || is_set(idb_acl_provided.yfilter)) leaf_name_data.push_back(idb_acl_provided.get_name_leafdata());
    if (idb_max_count.is_set || is_set(idb_max_count.yfilter)) leaf_name_data.push_back(idb_max_count.get_name_leafdata());
    if (idb_threshold_count.is_set || is_set(idb_threshold_count.yfilter)) leaf_name_data.push_back(idb_threshold_count.get_name_leafdata());
    if (idb_current_count.is_set || is_set(idb_current_count.yfilter)) leaf_name_data.push_back(idb_current_count.get_name_leafdata());
    if (idb_acl_name.is_set || is_set(idb_acl_name.yfilter)) leaf_name_data.push_back(idb_acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dr-address")
    {
        if(dr_address == nullptr)
        {
            dr_address = std::make_shared<Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress>();
        }
        return dr_address;
    }

    if(child_yang_name == "interface-address")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress>();
        c->parent = this;
        interface_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dr_address != nullptr)
    {
        children["dr-address"] = dr_address;
    }

    count = 0;
    for (auto c : interface_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "interface-address-mask")
    {
        interface_address_mask = value;
        interface_address_mask.value_namespace = name_space;
        interface_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-enabled")
    {
        is_enabled = value;
        is_enabled.value_namespace = name_space;
        is_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
        neighbor_count.value_namespace = name_space;
        neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count = value;
        external_neighbor_count.value_namespace = name_space;
        external_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry = value;
        hello_expiry.value_namespace = name_space;
        hello_expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr = value;
        are_we_dr.value_namespace = name_space;
        are_we_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
        bfd_enabled.value_namespace = name_space;
        bfd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
        bfd_interval.value_namespace = name_space;
        bfd_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
        virtual_interface.value_namespace = name_space;
        virtual_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
        neighbor_filter_name.value_namespace = name_space;
        neighbor_filter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval = value;
        join_prune_interval.value_namespace = name_space;
        join_prune_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled = value;
        prune_delay_enabled.value_namespace = name_space;
        prune_delay_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay = value;
        configured_propagation_delay.value_namespace = name_space;
        configured_propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval = value;
        configured_override_interval.value_namespace = name_space;
        configured_override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation-id")
    {
        generation_id = value;
        generation_id.value_namespace = name_space;
        generation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
        is_bidirectional_capable.value_namespace = name_space;
        is_bidirectional_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
        is_proxy_capable.value_namespace = name_space;
        is_proxy_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
        is_batch_asserts_capable.value_namespace = name_space;
        is_batch_asserts_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled = value;
        idb_oor_enabled.value_namespace = name_space;
        idb_oor_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided = value;
        idb_acl_provided.value_namespace = name_space;
        idb_acl_provided.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count = value;
        idb_max_count.value_namespace = name_space;
        idb_max_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count = value;
        idb_threshold_count.value_namespace = name_space;
        idb_threshold_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count = value;
        idb_current_count.value_namespace = name_space;
        idb_current_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name = value;
        idb_acl_name.value_namespace = name_space;
        idb_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask.yfilter = yfilter;
    }
    if(value_path == "is-enabled")
    {
        is_enabled.yfilter = yfilter;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count.yfilter = yfilter;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry.yfilter = yfilter;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr.yfilter = yfilter;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled.yfilter = yfilter;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name.yfilter = yfilter;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval.yfilter = yfilter;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled.yfilter = yfilter;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
    if(value_path == "generation-id")
    {
        generation_id.yfilter = yfilter;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable.yfilter = yfilter;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable.yfilter = yfilter;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable.yfilter = yfilter;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled.yfilter = yfilter;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided.yfilter = yfilter;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count.yfilter = yfilter;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count.yfilter = yfilter;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count.yfilter = yfilter;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dr-address" || name == "interface-address" || name == "interface-name" || name == "interface-name-xr" || name == "interface-address-mask" || name == "is-enabled" || name == "neighbor-count" || name == "external-neighbor-count" || name == "hello-interval" || name == "dr-priority" || name == "hello-expiry" || name == "are-we-dr" || name == "bfd-enabled" || name == "bfd-interval" || name == "bfd-multiplier" || name == "virtual-interface" || name == "passive-interface" || name == "neighbor-filter-name" || name == "join-prune-interval" || name == "prune-delay-enabled" || name == "configured-propagation-delay" || name == "propagation-delay" || name == "configured-override-interval" || name == "override-interval" || name == "generation-id" || name == "is-bidirectional-capable" || name == "is-proxy-capable" || name == "is-batch-asserts-capable" || name == "idb-oor-enabled" || name == "idb-acl-provided" || name == "idb-max-count" || name == "idb-threshold-count" || name == "idb-current-count" || name == "idb-acl-name")
        return true;
    return false;
}

Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::DrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "dr-address"; yang_parent_name = "global-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::~DrAddress()
{
}

bool Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dr-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::InterfaceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "interface-address"; yang_parent_name = "global-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::~InterfaceAddress()
{
}

bool Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterfaces()
    :
    ifrs_interface(this, {"interface_name"})
{

    yang_name = "ifrs-interfaces"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::IfrsInterfaces::~IfrsInterfaces()
{
}

bool Pim::Standby::DefaultContext::IfrsInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ifrs_interface.len(); index++)
    {
        if(ifrs_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::IfrsInterfaces::has_operation() const
{
    for (std::size_t index=0; index<ifrs_interface.len(); index++)
    {
        if(ifrs_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::IfrsInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::IfrsInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::IfrsInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::IfrsInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifrs-interface")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface>();
        c->parent = this;
        ifrs_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::IfrsInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ifrs_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::IfrsInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::IfrsInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::IfrsInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifrs-interface")
        return true;
    return false;
}

Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IfrsInterface()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_address_mask{YType::uint8, "interface-address-mask"},
    is_enabled{YType::boolean, "is-enabled"},
    neighbor_count{YType::uint16, "neighbor-count"},
    external_neighbor_count{YType::uint16, "external-neighbor-count"},
    hello_interval{YType::uint16, "hello-interval"},
    dr_priority{YType::uint32, "dr-priority"},
    hello_expiry{YType::uint64, "hello-expiry"},
    are_we_dr{YType::boolean, "are-we-dr"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    virtual_interface{YType::boolean, "virtual-interface"},
    passive_interface{YType::boolean, "passive-interface"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    join_prune_interval{YType::uint16, "join-prune-interval"},
    prune_delay_enabled{YType::boolean, "prune-delay-enabled"},
    configured_propagation_delay{YType::uint16, "configured-propagation-delay"},
    propagation_delay{YType::uint16, "propagation-delay"},
    configured_override_interval{YType::uint16, "configured-override-interval"},
    override_interval{YType::uint16, "override-interval"},
    generation_id{YType::uint32, "generation-id"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    idb_oor_enabled{YType::boolean, "idb-oor-enabled"},
    idb_acl_provided{YType::boolean, "idb-acl-provided"},
    idb_max_count{YType::uint32, "idb-max-count"},
    idb_threshold_count{YType::uint32, "idb-threshold-count"},
    idb_current_count{YType::uint32, "idb-current-count"},
    idb_acl_name{YType::str, "idb-acl-name"}
        ,
    dr_address(std::make_shared<Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress>())
    , interface_address(this, {})
{
    dr_address->parent = this;

    yang_name = "ifrs-interface"; yang_parent_name = "ifrs-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::~IfrsInterface()
{
}

bool Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_address.len(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_address_mask.is_set
	|| is_enabled.is_set
	|| neighbor_count.is_set
	|| external_neighbor_count.is_set
	|| hello_interval.is_set
	|| dr_priority.is_set
	|| hello_expiry.is_set
	|| are_we_dr.is_set
	|| bfd_enabled.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| virtual_interface.is_set
	|| passive_interface.is_set
	|| neighbor_filter_name.is_set
	|| join_prune_interval.is_set
	|| prune_delay_enabled.is_set
	|| configured_propagation_delay.is_set
	|| propagation_delay.is_set
	|| configured_override_interval.is_set
	|| override_interval.is_set
	|| generation_id.is_set
	|| is_bidirectional_capable.is_set
	|| is_proxy_capable.is_set
	|| is_batch_asserts_capable.is_set
	|| idb_oor_enabled.is_set
	|| idb_acl_provided.is_set
	|| idb_max_count.is_set
	|| idb_threshold_count.is_set
	|| idb_current_count.is_set
	|| idb_acl_name.is_set
	|| (dr_address !=  nullptr && dr_address->has_data());
}

bool Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::has_operation() const
{
    for (std::size_t index=0; index<interface_address.len(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_address_mask.yfilter)
	|| ydk::is_set(is_enabled.yfilter)
	|| ydk::is_set(neighbor_count.yfilter)
	|| ydk::is_set(external_neighbor_count.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(hello_expiry.yfilter)
	|| ydk::is_set(are_we_dr.yfilter)
	|| ydk::is_set(bfd_enabled.yfilter)
	|| ydk::is_set(bfd_interval.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(virtual_interface.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(neighbor_filter_name.yfilter)
	|| ydk::is_set(join_prune_interval.yfilter)
	|| ydk::is_set(prune_delay_enabled.yfilter)
	|| ydk::is_set(configured_propagation_delay.yfilter)
	|| ydk::is_set(propagation_delay.yfilter)
	|| ydk::is_set(configured_override_interval.yfilter)
	|| ydk::is_set(override_interval.yfilter)
	|| ydk::is_set(generation_id.yfilter)
	|| ydk::is_set(is_bidirectional_capable.yfilter)
	|| ydk::is_set(is_proxy_capable.yfilter)
	|| ydk::is_set(is_batch_asserts_capable.yfilter)
	|| ydk::is_set(idb_oor_enabled.yfilter)
	|| ydk::is_set(idb_acl_provided.yfilter)
	|| ydk::is_set(idb_max_count.yfilter)
	|| ydk::is_set(idb_threshold_count.yfilter)
	|| ydk::is_set(idb_current_count.yfilter)
	|| ydk::is_set(idb_acl_name.yfilter)
	|| (dr_address !=  nullptr && dr_address->has_operation());
}

std::string Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/ifrs-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_address_mask.is_set || is_set(interface_address_mask.yfilter)) leaf_name_data.push_back(interface_address_mask.get_name_leafdata());
    if (is_enabled.is_set || is_set(is_enabled.yfilter)) leaf_name_data.push_back(is_enabled.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.yfilter)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (external_neighbor_count.is_set || is_set(external_neighbor_count.yfilter)) leaf_name_data.push_back(external_neighbor_count.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (hello_expiry.is_set || is_set(hello_expiry.yfilter)) leaf_name_data.push_back(hello_expiry.get_name_leafdata());
    if (are_we_dr.is_set || is_set(are_we_dr.yfilter)) leaf_name_data.push_back(are_we_dr.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.yfilter)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.yfilter)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.yfilter)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.yfilter)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (join_prune_interval.is_set || is_set(join_prune_interval.yfilter)) leaf_name_data.push_back(join_prune_interval.get_name_leafdata());
    if (prune_delay_enabled.is_set || is_set(prune_delay_enabled.yfilter)) leaf_name_data.push_back(prune_delay_enabled.get_name_leafdata());
    if (configured_propagation_delay.is_set || is_set(configured_propagation_delay.yfilter)) leaf_name_data.push_back(configured_propagation_delay.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (configured_override_interval.is_set || is_set(configured_override_interval.yfilter)) leaf_name_data.push_back(configured_override_interval.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (generation_id.is_set || is_set(generation_id.yfilter)) leaf_name_data.push_back(generation_id.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.yfilter)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.yfilter)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.yfilter)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (idb_oor_enabled.is_set || is_set(idb_oor_enabled.yfilter)) leaf_name_data.push_back(idb_oor_enabled.get_name_leafdata());
    if (idb_acl_provided.is_set || is_set(idb_acl_provided.yfilter)) leaf_name_data.push_back(idb_acl_provided.get_name_leafdata());
    if (idb_max_count.is_set || is_set(idb_max_count.yfilter)) leaf_name_data.push_back(idb_max_count.get_name_leafdata());
    if (idb_threshold_count.is_set || is_set(idb_threshold_count.yfilter)) leaf_name_data.push_back(idb_threshold_count.get_name_leafdata());
    if (idb_current_count.is_set || is_set(idb_current_count.yfilter)) leaf_name_data.push_back(idb_current_count.get_name_leafdata());
    if (idb_acl_name.is_set || is_set(idb_acl_name.yfilter)) leaf_name_data.push_back(idb_acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dr-address")
    {
        if(dr_address == nullptr)
        {
            dr_address = std::make_shared<Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress>();
        }
        return dr_address;
    }

    if(child_yang_name == "interface-address")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress>();
        c->parent = this;
        interface_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dr_address != nullptr)
    {
        children["dr-address"] = dr_address;
    }

    count = 0;
    for (auto c : interface_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "interface-address-mask")
    {
        interface_address_mask = value;
        interface_address_mask.value_namespace = name_space;
        interface_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-enabled")
    {
        is_enabled = value;
        is_enabled.value_namespace = name_space;
        is_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
        neighbor_count.value_namespace = name_space;
        neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count = value;
        external_neighbor_count.value_namespace = name_space;
        external_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry = value;
        hello_expiry.value_namespace = name_space;
        hello_expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr = value;
        are_we_dr.value_namespace = name_space;
        are_we_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
        bfd_enabled.value_namespace = name_space;
        bfd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
        bfd_interval.value_namespace = name_space;
        bfd_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
        virtual_interface.value_namespace = name_space;
        virtual_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
        neighbor_filter_name.value_namespace = name_space;
        neighbor_filter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval = value;
        join_prune_interval.value_namespace = name_space;
        join_prune_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled = value;
        prune_delay_enabled.value_namespace = name_space;
        prune_delay_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay = value;
        configured_propagation_delay.value_namespace = name_space;
        configured_propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval = value;
        configured_override_interval.value_namespace = name_space;
        configured_override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation-id")
    {
        generation_id = value;
        generation_id.value_namespace = name_space;
        generation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
        is_bidirectional_capable.value_namespace = name_space;
        is_bidirectional_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
        is_proxy_capable.value_namespace = name_space;
        is_proxy_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
        is_batch_asserts_capable.value_namespace = name_space;
        is_batch_asserts_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled = value;
        idb_oor_enabled.value_namespace = name_space;
        idb_oor_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided = value;
        idb_acl_provided.value_namespace = name_space;
        idb_acl_provided.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count = value;
        idb_max_count.value_namespace = name_space;
        idb_max_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count = value;
        idb_threshold_count.value_namespace = name_space;
        idb_threshold_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count = value;
        idb_current_count.value_namespace = name_space;
        idb_current_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name = value;
        idb_acl_name.value_namespace = name_space;
        idb_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask.yfilter = yfilter;
    }
    if(value_path == "is-enabled")
    {
        is_enabled.yfilter = yfilter;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count.yfilter = yfilter;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry.yfilter = yfilter;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr.yfilter = yfilter;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled.yfilter = yfilter;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name.yfilter = yfilter;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval.yfilter = yfilter;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled.yfilter = yfilter;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
    if(value_path == "generation-id")
    {
        generation_id.yfilter = yfilter;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable.yfilter = yfilter;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable.yfilter = yfilter;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable.yfilter = yfilter;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled.yfilter = yfilter;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided.yfilter = yfilter;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count.yfilter = yfilter;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count.yfilter = yfilter;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count.yfilter = yfilter;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dr-address" || name == "interface-address" || name == "interface-name" || name == "interface-name-xr" || name == "interface-address-mask" || name == "is-enabled" || name == "neighbor-count" || name == "external-neighbor-count" || name == "hello-interval" || name == "dr-priority" || name == "hello-expiry" || name == "are-we-dr" || name == "bfd-enabled" || name == "bfd-interval" || name == "bfd-multiplier" || name == "virtual-interface" || name == "passive-interface" || name == "neighbor-filter-name" || name == "join-prune-interval" || name == "prune-delay-enabled" || name == "configured-propagation-delay" || name == "propagation-delay" || name == "configured-override-interval" || name == "override-interval" || name == "generation-id" || name == "is-bidirectional-capable" || name == "is-proxy-capable" || name == "is-batch-asserts-capable" || name == "idb-oor-enabled" || name == "idb-acl-provided" || name == "idb-max-count" || name == "idb-threshold-count" || name == "idb-current-count" || name == "idb-acl-name")
        return true;
    return false;
}

Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::DrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "dr-address"; yang_parent_name = "ifrs-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::~DrAddress()
{
}

bool Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dr-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::InterfaceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "interface-address"; yang_parent_name = "ifrs-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::~InterfaceAddress()
{
}

bool Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Safs::Safs()
    :
    saf(this, {})
{

    yang_name = "safs"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Safs::~Safs()
{
}

bool Pim::Standby::DefaultContext::Safs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<saf.len(); index++)
    {
        if(saf[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Safs::has_operation() const
{
    for (std::size_t index=0; index<saf.len(); index++)
    {
        if(saf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::Safs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Safs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "safs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Safs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "saf")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf>();
        c->parent = this;
        saf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Safs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : saf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::Safs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::Safs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::Safs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "saf")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Safs::Saf::Saf()
    :
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"}
        ,
    rpf_hash_source_groups(std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups>())
    , rpf_hash_sources(std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources>())
    , rpfs(std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::Rpfs>())
{
    rpf_hash_source_groups->parent = this;
    rpf_hash_sources->parent = this;
    rpfs->parent = this;

    yang_name = "saf"; yang_parent_name = "safs"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Safs::Saf::~Saf()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::has_data() const
{
    if (is_presence_container) return true;
    return saf_name.is_set
	|| topology_name.is_set
	|| (rpf_hash_source_groups !=  nullptr && rpf_hash_source_groups->has_data())
	|| (rpf_hash_sources !=  nullptr && rpf_hash_sources->has_data())
	|| (rpfs !=  nullptr && rpfs->has_data());
}

bool Pim::Standby::DefaultContext::Safs::Saf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| (rpf_hash_source_groups !=  nullptr && rpf_hash_source_groups->has_operation())
	|| (rpf_hash_sources !=  nullptr && rpf_hash_sources->has_operation())
	|| (rpfs !=  nullptr && rpfs->has_operation());
}

std::string Pim::Standby::DefaultContext::Safs::Saf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/safs/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Safs::Saf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "saf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Safs::Saf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-hash-source-groups")
    {
        if(rpf_hash_source_groups == nullptr)
        {
            rpf_hash_source_groups = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups>();
        }
        return rpf_hash_source_groups;
    }

    if(child_yang_name == "rpf-hash-sources")
    {
        if(rpf_hash_sources == nullptr)
        {
            rpf_hash_sources = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources>();
        }
        return rpf_hash_sources;
    }

    if(child_yang_name == "rpfs")
    {
        if(rpfs == nullptr)
        {
            rpfs = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::Rpfs>();
        }
        return rpfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Safs::Saf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rpf_hash_source_groups != nullptr)
    {
        children["rpf-hash-source-groups"] = rpf_hash_source_groups;
    }

    if(rpf_hash_sources != nullptr)
    {
        children["rpf-hash-sources"] = rpf_hash_sources;
    }

    if(rpfs != nullptr)
    {
        children["rpfs"] = rpfs;
    }

    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Safs::Saf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Safs::Saf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf-hash-source-groups" || name == "rpf-hash-sources" || name == "rpfs" || name == "saf-name" || name == "topology-name")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroups()
    :
    rpf_hash_source_group(this, {})
{

    yang_name = "rpf-hash-source-groups"; yang_parent_name = "saf"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::~RpfHashSourceGroups()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpf_hash_source_group.len(); index++)
    {
        if(rpf_hash_source_group[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::has_operation() const
{
    for (std::size_t index=0; index<rpf_hash_source_group.len(); index++)
    {
        if(rpf_hash_source_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/safs/saf/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-hash-source-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-hash-source-group")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup>();
        c->parent = this;
        rpf_hash_source_group.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rpf_hash_source_group.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf-hash-source-group")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::RpfHashSourceGroup()
    :
    source_address{YType::str, "source-address"},
    group_address{YType::str, "group-address"},
    mask_length{YType::uint32, "mask-length"},
    mofrr{YType::uint32, "mofrr"},
    next_hop_multipath_enabled{YType::boolean, "next-hop-multipath-enabled"},
    next_hop_interface{YType::str, "next-hop-interface"},
    secondary_next_hop_interface{YType::str, "secondary-next-hop-interface"}
        ,
    next_hop_address(std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress>())
    , secondary_next_hop_address(std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress>())
{
    next_hop_address->parent = this;
    secondary_next_hop_address->parent = this;

    yang_name = "rpf-hash-source-group"; yang_parent_name = "rpf-hash-source-groups"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::~RpfHashSourceGroup()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| group_address.is_set
	|| mask_length.is_set
	|| mofrr.is_set
	|| next_hop_multipath_enabled.is_set
	|| next_hop_interface.is_set
	|| secondary_next_hop_interface.is_set
	|| (next_hop_address !=  nullptr && next_hop_address->has_data())
	|| (secondary_next_hop_address !=  nullptr && secondary_next_hop_address->has_data());
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(mask_length.yfilter)
	|| ydk::is_set(mofrr.yfilter)
	|| ydk::is_set(next_hop_multipath_enabled.yfilter)
	|| ydk::is_set(next_hop_interface.yfilter)
	|| ydk::is_set(secondary_next_hop_interface.yfilter)
	|| (next_hop_address !=  nullptr && next_hop_address->has_operation())
	|| (secondary_next_hop_address !=  nullptr && secondary_next_hop_address->has_operation());
}

std::string Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/safs/saf/rpf-hash-source-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-hash-source-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (mask_length.is_set || is_set(mask_length.yfilter)) leaf_name_data.push_back(mask_length.get_name_leafdata());
    if (mofrr.is_set || is_set(mofrr.yfilter)) leaf_name_data.push_back(mofrr.get_name_leafdata());
    if (next_hop_multipath_enabled.is_set || is_set(next_hop_multipath_enabled.yfilter)) leaf_name_data.push_back(next_hop_multipath_enabled.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.yfilter)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (secondary_next_hop_interface.is_set || is_set(secondary_next_hop_interface.yfilter)) leaf_name_data.push_back(secondary_next_hop_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-address")
    {
        if(next_hop_address == nullptr)
        {
            next_hop_address = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress>();
        }
        return next_hop_address;
    }

    if(child_yang_name == "secondary-next-hop-address")
    {
        if(secondary_next_hop_address == nullptr)
        {
            secondary_next_hop_address = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress>();
        }
        return secondary_next_hop_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(next_hop_address != nullptr)
    {
        children["next-hop-address"] = next_hop_address;
    }

    if(secondary_next_hop_address != nullptr)
    {
        children["secondary-next-hop-address"] = secondary_next_hop_address;
    }

    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask-length")
    {
        mask_length = value;
        mask_length.value_namespace = name_space;
        mask_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mofrr")
    {
        mofrr = value;
        mofrr.value_namespace = name_space;
        mofrr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-multipath-enabled")
    {
        next_hop_multipath_enabled = value;
        next_hop_multipath_enabled.value_namespace = name_space;
        next_hop_multipath_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
        next_hop_interface.value_namespace = name_space;
        next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-next-hop-interface")
    {
        secondary_next_hop_interface = value;
        secondary_next_hop_interface.value_namespace = name_space;
        secondary_next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "mask-length")
    {
        mask_length.yfilter = yfilter;
    }
    if(value_path == "mofrr")
    {
        mofrr.yfilter = yfilter;
    }
    if(value_path == "next-hop-multipath-enabled")
    {
        next_hop_multipath_enabled.yfilter = yfilter;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface.yfilter = yfilter;
    }
    if(value_path == "secondary-next-hop-interface")
    {
        secondary_next_hop_interface.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "secondary-next-hop-address" || name == "source-address" || name == "group-address" || name == "mask-length" || name == "mofrr" || name == "next-hop-multipath-enabled" || name == "next-hop-interface" || name == "secondary-next-hop-interface")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::NextHopAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop-address"; yang_parent_name = "rpf-hash-source-group"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::~NextHopAddress()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/safs/saf/rpf-hash-source-groups/rpf-hash-source-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::SecondaryNextHopAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "secondary-next-hop-address"; yang_parent_name = "rpf-hash-source-group"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::~SecondaryNextHopAddress()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/safs/saf/rpf-hash-source-groups/rpf-hash-source-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-next-hop-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSources()
    :
    rpf_hash_source(this, {})
{

    yang_name = "rpf-hash-sources"; yang_parent_name = "saf"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::~RpfHashSources()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpf_hash_source.len(); index++)
    {
        if(rpf_hash_source[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::has_operation() const
{
    for (std::size_t index=0; index<rpf_hash_source.len(); index++)
    {
        if(rpf_hash_source[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/safs/saf/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-hash-sources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-hash-source")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource>();
        c->parent = this;
        rpf_hash_source.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rpf_hash_source.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf-hash-source")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::RpfHashSource()
    :
    source_address{YType::str, "source-address"},
    mofrr{YType::uint32, "mofrr"},
    next_hop_multipath_enabled{YType::boolean, "next-hop-multipath-enabled"},
    next_hop_interface{YType::str, "next-hop-interface"},
    secondary_next_hop_interface{YType::str, "secondary-next-hop-interface"}
        ,
    next_hop_address(std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress>())
    , secondary_next_hop_address(std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress>())
{
    next_hop_address->parent = this;
    secondary_next_hop_address->parent = this;

    yang_name = "rpf-hash-source"; yang_parent_name = "rpf-hash-sources"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::~RpfHashSource()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| mofrr.is_set
	|| next_hop_multipath_enabled.is_set
	|| next_hop_interface.is_set
	|| secondary_next_hop_interface.is_set
	|| (next_hop_address !=  nullptr && next_hop_address->has_data())
	|| (secondary_next_hop_address !=  nullptr && secondary_next_hop_address->has_data());
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(mofrr.yfilter)
	|| ydk::is_set(next_hop_multipath_enabled.yfilter)
	|| ydk::is_set(next_hop_interface.yfilter)
	|| ydk::is_set(secondary_next_hop_interface.yfilter)
	|| (next_hop_address !=  nullptr && next_hop_address->has_operation())
	|| (secondary_next_hop_address !=  nullptr && secondary_next_hop_address->has_operation());
}

std::string Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/safs/saf/rpf-hash-sources/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-hash-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (mofrr.is_set || is_set(mofrr.yfilter)) leaf_name_data.push_back(mofrr.get_name_leafdata());
    if (next_hop_multipath_enabled.is_set || is_set(next_hop_multipath_enabled.yfilter)) leaf_name_data.push_back(next_hop_multipath_enabled.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.yfilter)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (secondary_next_hop_interface.is_set || is_set(secondary_next_hop_interface.yfilter)) leaf_name_data.push_back(secondary_next_hop_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-address")
    {
        if(next_hop_address == nullptr)
        {
            next_hop_address = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress>();
        }
        return next_hop_address;
    }

    if(child_yang_name == "secondary-next-hop-address")
    {
        if(secondary_next_hop_address == nullptr)
        {
            secondary_next_hop_address = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress>();
        }
        return secondary_next_hop_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(next_hop_address != nullptr)
    {
        children["next-hop-address"] = next_hop_address;
    }

    if(secondary_next_hop_address != nullptr)
    {
        children["secondary-next-hop-address"] = secondary_next_hop_address;
    }

    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mofrr")
    {
        mofrr = value;
        mofrr.value_namespace = name_space;
        mofrr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-multipath-enabled")
    {
        next_hop_multipath_enabled = value;
        next_hop_multipath_enabled.value_namespace = name_space;
        next_hop_multipath_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
        next_hop_interface.value_namespace = name_space;
        next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-next-hop-interface")
    {
        secondary_next_hop_interface = value;
        secondary_next_hop_interface.value_namespace = name_space;
        secondary_next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "mofrr")
    {
        mofrr.yfilter = yfilter;
    }
    if(value_path == "next-hop-multipath-enabled")
    {
        next_hop_multipath_enabled.yfilter = yfilter;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface.yfilter = yfilter;
    }
    if(value_path == "secondary-next-hop-interface")
    {
        secondary_next_hop_interface.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "secondary-next-hop-address" || name == "source-address" || name == "mofrr" || name == "next-hop-multipath-enabled" || name == "next-hop-interface" || name == "secondary-next-hop-interface")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::NextHopAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop-address"; yang_parent_name = "rpf-hash-source"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::~NextHopAddress()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/safs/saf/rpf-hash-sources/rpf-hash-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::SecondaryNextHopAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "secondary-next-hop-address"; yang_parent_name = "rpf-hash-source"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::~SecondaryNextHopAddress()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/safs/saf/rpf-hash-sources/rpf-hash-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-next-hop-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpfs()
    :
    rpf(this, {"registered_address"})
{

    yang_name = "rpfs"; yang_parent_name = "saf"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Safs::Saf::Rpfs::~Rpfs()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpf.len(); index++)
    {
        if(rpf[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::has_operation() const
{
    for (std::size_t index=0; index<rpf.len(); index++)
    {
        if(rpf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::Safs::Saf::Rpfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/safs/saf/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Safs::Saf::Rpfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Safs::Saf::Rpfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::Rpfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf>();
        c->parent = this;
        rpf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Safs::Saf::Rpfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rpf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::Rpfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::Safs::Saf::Rpfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::Rpf()
    :
    registered_address{YType::str, "registered-address"},
    metric{YType::uint32, "metric"},
    metric_preference{YType::uint32, "metric-preference"},
    is_connected{YType::uint8, "is-connected"},
    is_rpf_bgp_route{YType::boolean, "is-rpf-bgp-route"}
        ,
    registered_address_xr(std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr>())
    , rpf_path(this, {})
{
    registered_address_xr->parent = this;

    yang_name = "rpf"; yang_parent_name = "rpfs"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::~Rpf()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpf_path.len(); index++)
    {
        if(rpf_path[index]->has_data())
            return true;
    }
    return registered_address.is_set
	|| metric.is_set
	|| metric_preference.is_set
	|| is_connected.is_set
	|| is_rpf_bgp_route.is_set
	|| (registered_address_xr !=  nullptr && registered_address_xr->has_data());
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::has_operation() const
{
    for (std::size_t index=0; index<rpf_path.len(); index++)
    {
        if(rpf_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(registered_address.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_preference.yfilter)
	|| ydk::is_set(is_connected.yfilter)
	|| ydk::is_set(is_rpf_bgp_route.yfilter)
	|| (registered_address_xr !=  nullptr && registered_address_xr->has_operation());
}

std::string Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/safs/saf/rpfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf";
    ADD_KEY_TOKEN(registered_address, "registered-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (registered_address.is_set || is_set(registered_address.yfilter)) leaf_name_data.push_back(registered_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_preference.is_set || is_set(metric_preference.yfilter)) leaf_name_data.push_back(metric_preference.get_name_leafdata());
    if (is_connected.is_set || is_set(is_connected.yfilter)) leaf_name_data.push_back(is_connected.get_name_leafdata());
    if (is_rpf_bgp_route.is_set || is_set(is_rpf_bgp_route.yfilter)) leaf_name_data.push_back(is_rpf_bgp_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "registered-address-xr")
    {
        if(registered_address_xr == nullptr)
        {
            registered_address_xr = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr>();
        }
        return registered_address_xr;
    }

    if(child_yang_name == "rpf-path")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath>();
        c->parent = this;
        rpf_path.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(registered_address_xr != nullptr)
    {
        children["registered-address-xr"] = registered_address_xr;
    }

    count = 0;
    for (auto c : rpf_path.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "registered-address")
    {
        registered_address = value;
        registered_address.value_namespace = name_space;
        registered_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-preference")
    {
        metric_preference = value;
        metric_preference.value_namespace = name_space;
        metric_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connected")
    {
        is_connected = value;
        is_connected.value_namespace = name_space;
        is_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rpf-bgp-route")
    {
        is_rpf_bgp_route = value;
        is_rpf_bgp_route.value_namespace = name_space;
        is_rpf_bgp_route.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "registered-address")
    {
        registered_address.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-preference")
    {
        metric_preference.yfilter = yfilter;
    }
    if(value_path == "is-connected")
    {
        is_connected.yfilter = yfilter;
    }
    if(value_path == "is-rpf-bgp-route")
    {
        is_rpf_bgp_route.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "registered-address-xr" || name == "rpf-path" || name == "registered-address" || name == "metric" || name == "metric-preference" || name == "is-connected" || name == "is-rpf-bgp-route")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::RegisteredAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "registered-address-xr"; yang_parent_name = "rpf"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::~RegisteredAddressXr()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfPath()
    :
    rpf_interface_name{YType::str, "rpf-interface-name"},
    is_rpf_interface_disabled{YType::boolean, "is-rpf-interface-disabled"},
    is_via_lsm{YType::boolean, "is-via-lsm"},
    is_via_mlsm{YType::boolean, "is-via-mlsm"},
    is_connector_attribute_present{YType::boolean, "is-connector-attribute-present"},
    connector{YType::str, "connector"},
    extranet_vrf_name{YType::str, "extranet-vrf-name"}
        ,
    rpf_neighbor(std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor>())
    , rpf_nexthop(std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop>())
{
    rpf_neighbor->parent = this;
    rpf_nexthop->parent = this;

    yang_name = "rpf-path"; yang_parent_name = "rpf"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::~RpfPath()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::has_data() const
{
    if (is_presence_container) return true;
    return rpf_interface_name.is_set
	|| is_rpf_interface_disabled.is_set
	|| is_via_lsm.is_set
	|| is_via_mlsm.is_set
	|| is_connector_attribute_present.is_set
	|| connector.is_set
	|| extranet_vrf_name.is_set
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data())
	|| (rpf_nexthop !=  nullptr && rpf_nexthop->has_data());
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rpf_interface_name.yfilter)
	|| ydk::is_set(is_rpf_interface_disabled.yfilter)
	|| ydk::is_set(is_via_lsm.yfilter)
	|| ydk::is_set(is_via_mlsm.yfilter)
	|| ydk::is_set(is_connector_attribute_present.yfilter)
	|| ydk::is_set(connector.yfilter)
	|| ydk::is_set(extranet_vrf_name.yfilter)
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation())
	|| (rpf_nexthop !=  nullptr && rpf_nexthop->has_operation());
}

std::string Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rpf_interface_name.is_set || is_set(rpf_interface_name.yfilter)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());
    if (is_rpf_interface_disabled.is_set || is_set(is_rpf_interface_disabled.yfilter)) leaf_name_data.push_back(is_rpf_interface_disabled.get_name_leafdata());
    if (is_via_lsm.is_set || is_set(is_via_lsm.yfilter)) leaf_name_data.push_back(is_via_lsm.get_name_leafdata());
    if (is_via_mlsm.is_set || is_set(is_via_mlsm.yfilter)) leaf_name_data.push_back(is_via_mlsm.get_name_leafdata());
    if (is_connector_attribute_present.is_set || is_set(is_connector_attribute_present.yfilter)) leaf_name_data.push_back(is_connector_attribute_present.get_name_leafdata());
    if (connector.is_set || is_set(connector.yfilter)) leaf_name_data.push_back(connector.get_name_leafdata());
    if (extranet_vrf_name.is_set || is_set(extranet_vrf_name.yfilter)) leaf_name_data.push_back(extranet_vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor == nullptr)
        {
            rpf_neighbor = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor>();
        }
        return rpf_neighbor;
    }

    if(child_yang_name == "rpf-nexthop")
    {
        if(rpf_nexthop == nullptr)
        {
            rpf_nexthop = std::make_shared<Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop>();
        }
        return rpf_nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rpf_neighbor != nullptr)
    {
        children["rpf-neighbor"] = rpf_neighbor;
    }

    if(rpf_nexthop != nullptr)
    {
        children["rpf-nexthop"] = rpf_nexthop;
    }

    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name = value;
        rpf_interface_name.value_namespace = name_space;
        rpf_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rpf-interface-disabled")
    {
        is_rpf_interface_disabled = value;
        is_rpf_interface_disabled.value_namespace = name_space;
        is_rpf_interface_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm = value;
        is_via_lsm.value_namespace = name_space;
        is_via_lsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-via-mlsm")
    {
        is_via_mlsm = value;
        is_via_mlsm.value_namespace = name_space;
        is_via_mlsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connector-attribute-present")
    {
        is_connector_attribute_present = value;
        is_connector_attribute_present.value_namespace = name_space;
        is_connector_attribute_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connector")
    {
        connector = value;
        connector.value_namespace = name_space;
        connector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extranet-vrf-name")
    {
        extranet_vrf_name = value;
        extranet_vrf_name.value_namespace = name_space;
        extranet_vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name.yfilter = yfilter;
    }
    if(value_path == "is-rpf-interface-disabled")
    {
        is_rpf_interface_disabled.yfilter = yfilter;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm.yfilter = yfilter;
    }
    if(value_path == "is-via-mlsm")
    {
        is_via_mlsm.yfilter = yfilter;
    }
    if(value_path == "is-connector-attribute-present")
    {
        is_connector_attribute_present.yfilter = yfilter;
    }
    if(value_path == "connector")
    {
        connector.yfilter = yfilter;
    }
    if(value_path == "extranet-vrf-name")
    {
        extranet_vrf_name.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf-neighbor" || name == "rpf-nexthop" || name == "rpf-interface-name" || name == "is-rpf-interface-disabled" || name == "is-via-lsm" || name == "is-via-mlsm" || name == "is-connector-attribute-present" || name == "connector" || name == "extranet-vrf-name")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-neighbor"; yang_parent_name = "rpf-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::RpfNexthop()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-nexthop"; yang_parent_name = "rpf-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::~RpfNexthop()
{
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistics()
    :
    interface_statistic(this, {"interface_name"})
{

    yang_name = "interface-statistics"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::InterfaceStatistics::~InterfaceStatistics()
{
}

bool Pim::Standby::DefaultContext::InterfaceStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_statistic.len(); index++)
    {
        if(interface_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::InterfaceStatistics::has_operation() const
{
    for (std::size_t index=0; index<interface_statistic.len(); index++)
    {
        if(interface_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::InterfaceStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::InterfaceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::InterfaceStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::InterfaceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-statistic")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic>();
        c->parent = this;
        interface_statistic.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::InterfaceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_statistic.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::InterfaceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::InterfaceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::InterfaceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-statistic")
        return true;
    return false;
}

Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic::InterfaceStatistic()
    :
    interface_name{YType::str, "interface-name"},
    input_hello{YType::uint32, "input-hello"},
    output_hello{YType::uint32, "output-hello"},
    input_register{YType::uint32, "input-register"},
    output_register{YType::uint32, "output-register"},
    input_register_stop{YType::uint32, "input-register-stop"},
    output_register_stop{YType::uint32, "output-register-stop"},
    input_jp{YType::uint32, "input-jp"},
    output_jp{YType::uint32, "output-jp"},
    input_bsr_message{YType::uint32, "input-bsr-message"},
    output_bsr_message{YType::uint32, "output-bsr-message"},
    input_assert{YType::uint32, "input-assert"},
    output_assert{YType::uint32, "output-assert"},
    input_graft_message{YType::uint32, "input-graft-message"},
    output_graft_message{YType::uint32, "output-graft-message"},
    input_graft_ack_message{YType::uint32, "input-graft-ack-message"},
    output_graft_ack_message{YType::uint32, "output-graft-ack-message"},
    input_candidate_rp_advertisement{YType::uint32, "input-candidate-rp-advertisement"},
    output_candidate_rp_advertisement{YType::uint32, "output-candidate-rp-advertisement"},
    input_df_election{YType::uint32, "input-df-election"},
    output_df_election{YType::uint32, "output-df-election"},
    input_miscellaneous{YType::uint32, "input-miscellaneous"}
{

    yang_name = "interface-statistic"; yang_parent_name = "interface-statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic::~InterfaceStatistic()
{
}

bool Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| input_hello.is_set
	|| output_hello.is_set
	|| input_register.is_set
	|| output_register.is_set
	|| input_register_stop.is_set
	|| output_register_stop.is_set
	|| input_jp.is_set
	|| output_jp.is_set
	|| input_bsr_message.is_set
	|| output_bsr_message.is_set
	|| input_assert.is_set
	|| output_assert.is_set
	|| input_graft_message.is_set
	|| output_graft_message.is_set
	|| input_graft_ack_message.is_set
	|| output_graft_ack_message.is_set
	|| input_candidate_rp_advertisement.is_set
	|| output_candidate_rp_advertisement.is_set
	|| input_df_election.is_set
	|| output_df_election.is_set
	|| input_miscellaneous.is_set;
}

bool Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(input_hello.yfilter)
	|| ydk::is_set(output_hello.yfilter)
	|| ydk::is_set(input_register.yfilter)
	|| ydk::is_set(output_register.yfilter)
	|| ydk::is_set(input_register_stop.yfilter)
	|| ydk::is_set(output_register_stop.yfilter)
	|| ydk::is_set(input_jp.yfilter)
	|| ydk::is_set(output_jp.yfilter)
	|| ydk::is_set(input_bsr_message.yfilter)
	|| ydk::is_set(output_bsr_message.yfilter)
	|| ydk::is_set(input_assert.yfilter)
	|| ydk::is_set(output_assert.yfilter)
	|| ydk::is_set(input_graft_message.yfilter)
	|| ydk::is_set(output_graft_message.yfilter)
	|| ydk::is_set(input_graft_ack_message.yfilter)
	|| ydk::is_set(output_graft_ack_message.yfilter)
	|| ydk::is_set(input_candidate_rp_advertisement.yfilter)
	|| ydk::is_set(output_candidate_rp_advertisement.yfilter)
	|| ydk::is_set(input_df_election.yfilter)
	|| ydk::is_set(output_df_election.yfilter)
	|| ydk::is_set(input_miscellaneous.yfilter);
}

std::string Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/interface-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistic";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (input_hello.is_set || is_set(input_hello.yfilter)) leaf_name_data.push_back(input_hello.get_name_leafdata());
    if (output_hello.is_set || is_set(output_hello.yfilter)) leaf_name_data.push_back(output_hello.get_name_leafdata());
    if (input_register.is_set || is_set(input_register.yfilter)) leaf_name_data.push_back(input_register.get_name_leafdata());
    if (output_register.is_set || is_set(output_register.yfilter)) leaf_name_data.push_back(output_register.get_name_leafdata());
    if (input_register_stop.is_set || is_set(input_register_stop.yfilter)) leaf_name_data.push_back(input_register_stop.get_name_leafdata());
    if (output_register_stop.is_set || is_set(output_register_stop.yfilter)) leaf_name_data.push_back(output_register_stop.get_name_leafdata());
    if (input_jp.is_set || is_set(input_jp.yfilter)) leaf_name_data.push_back(input_jp.get_name_leafdata());
    if (output_jp.is_set || is_set(output_jp.yfilter)) leaf_name_data.push_back(output_jp.get_name_leafdata());
    if (input_bsr_message.is_set || is_set(input_bsr_message.yfilter)) leaf_name_data.push_back(input_bsr_message.get_name_leafdata());
    if (output_bsr_message.is_set || is_set(output_bsr_message.yfilter)) leaf_name_data.push_back(output_bsr_message.get_name_leafdata());
    if (input_assert.is_set || is_set(input_assert.yfilter)) leaf_name_data.push_back(input_assert.get_name_leafdata());
    if (output_assert.is_set || is_set(output_assert.yfilter)) leaf_name_data.push_back(output_assert.get_name_leafdata());
    if (input_graft_message.is_set || is_set(input_graft_message.yfilter)) leaf_name_data.push_back(input_graft_message.get_name_leafdata());
    if (output_graft_message.is_set || is_set(output_graft_message.yfilter)) leaf_name_data.push_back(output_graft_message.get_name_leafdata());
    if (input_graft_ack_message.is_set || is_set(input_graft_ack_message.yfilter)) leaf_name_data.push_back(input_graft_ack_message.get_name_leafdata());
    if (output_graft_ack_message.is_set || is_set(output_graft_ack_message.yfilter)) leaf_name_data.push_back(output_graft_ack_message.get_name_leafdata());
    if (input_candidate_rp_advertisement.is_set || is_set(input_candidate_rp_advertisement.yfilter)) leaf_name_data.push_back(input_candidate_rp_advertisement.get_name_leafdata());
    if (output_candidate_rp_advertisement.is_set || is_set(output_candidate_rp_advertisement.yfilter)) leaf_name_data.push_back(output_candidate_rp_advertisement.get_name_leafdata());
    if (input_df_election.is_set || is_set(input_df_election.yfilter)) leaf_name_data.push_back(input_df_election.get_name_leafdata());
    if (output_df_election.is_set || is_set(output_df_election.yfilter)) leaf_name_data.push_back(output_df_election.get_name_leafdata());
    if (input_miscellaneous.is_set || is_set(input_miscellaneous.yfilter)) leaf_name_data.push_back(input_miscellaneous.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-hello")
    {
        input_hello = value;
        input_hello.value_namespace = name_space;
        input_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-hello")
    {
        output_hello = value;
        output_hello.value_namespace = name_space;
        output_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-register")
    {
        input_register = value;
        input_register.value_namespace = name_space;
        input_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-register")
    {
        output_register = value;
        output_register.value_namespace = name_space;
        output_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-register-stop")
    {
        input_register_stop = value;
        input_register_stop.value_namespace = name_space;
        input_register_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-register-stop")
    {
        output_register_stop = value;
        output_register_stop.value_namespace = name_space;
        output_register_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-jp")
    {
        input_jp = value;
        input_jp.value_namespace = name_space;
        input_jp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-jp")
    {
        output_jp = value;
        output_jp.value_namespace = name_space;
        output_jp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-bsr-message")
    {
        input_bsr_message = value;
        input_bsr_message.value_namespace = name_space;
        input_bsr_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-bsr-message")
    {
        output_bsr_message = value;
        output_bsr_message.value_namespace = name_space;
        output_bsr_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-assert")
    {
        input_assert = value;
        input_assert.value_namespace = name_space;
        input_assert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-assert")
    {
        output_assert = value;
        output_assert.value_namespace = name_space;
        output_assert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-graft-message")
    {
        input_graft_message = value;
        input_graft_message.value_namespace = name_space;
        input_graft_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-graft-message")
    {
        output_graft_message = value;
        output_graft_message.value_namespace = name_space;
        output_graft_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-graft-ack-message")
    {
        input_graft_ack_message = value;
        input_graft_ack_message.value_namespace = name_space;
        input_graft_ack_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-graft-ack-message")
    {
        output_graft_ack_message = value;
        output_graft_ack_message.value_namespace = name_space;
        output_graft_ack_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-candidate-rp-advertisement")
    {
        input_candidate_rp_advertisement = value;
        input_candidate_rp_advertisement.value_namespace = name_space;
        input_candidate_rp_advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-candidate-rp-advertisement")
    {
        output_candidate_rp_advertisement = value;
        output_candidate_rp_advertisement.value_namespace = name_space;
        output_candidate_rp_advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-df-election")
    {
        input_df_election = value;
        input_df_election.value_namespace = name_space;
        input_df_election.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-df-election")
    {
        output_df_election = value;
        output_df_election.value_namespace = name_space;
        output_df_election.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-miscellaneous")
    {
        input_miscellaneous = value;
        input_miscellaneous.value_namespace = name_space;
        input_miscellaneous.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "input-hello")
    {
        input_hello.yfilter = yfilter;
    }
    if(value_path == "output-hello")
    {
        output_hello.yfilter = yfilter;
    }
    if(value_path == "input-register")
    {
        input_register.yfilter = yfilter;
    }
    if(value_path == "output-register")
    {
        output_register.yfilter = yfilter;
    }
    if(value_path == "input-register-stop")
    {
        input_register_stop.yfilter = yfilter;
    }
    if(value_path == "output-register-stop")
    {
        output_register_stop.yfilter = yfilter;
    }
    if(value_path == "input-jp")
    {
        input_jp.yfilter = yfilter;
    }
    if(value_path == "output-jp")
    {
        output_jp.yfilter = yfilter;
    }
    if(value_path == "input-bsr-message")
    {
        input_bsr_message.yfilter = yfilter;
    }
    if(value_path == "output-bsr-message")
    {
        output_bsr_message.yfilter = yfilter;
    }
    if(value_path == "input-assert")
    {
        input_assert.yfilter = yfilter;
    }
    if(value_path == "output-assert")
    {
        output_assert.yfilter = yfilter;
    }
    if(value_path == "input-graft-message")
    {
        input_graft_message.yfilter = yfilter;
    }
    if(value_path == "output-graft-message")
    {
        output_graft_message.yfilter = yfilter;
    }
    if(value_path == "input-graft-ack-message")
    {
        input_graft_ack_message.yfilter = yfilter;
    }
    if(value_path == "output-graft-ack-message")
    {
        output_graft_ack_message.yfilter = yfilter;
    }
    if(value_path == "input-candidate-rp-advertisement")
    {
        input_candidate_rp_advertisement.yfilter = yfilter;
    }
    if(value_path == "output-candidate-rp-advertisement")
    {
        output_candidate_rp_advertisement.yfilter = yfilter;
    }
    if(value_path == "input-df-election")
    {
        input_df_election.yfilter = yfilter;
    }
    if(value_path == "output-df-election")
    {
        output_df_election.yfilter = yfilter;
    }
    if(value_path == "input-miscellaneous")
    {
        input_miscellaneous.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "input-hello" || name == "output-hello" || name == "input-register" || name == "output-register" || name == "input-register-stop" || name == "output-register-stop" || name == "input-jp" || name == "output-jp" || name == "input-bsr-message" || name == "output-bsr-message" || name == "input-assert" || name == "output-assert" || name == "input-graft-message" || name == "output-graft-message" || name == "input-graft-ack-message" || name == "output-graft-ack-message" || name == "input-candidate-rp-advertisement" || name == "output-candidate-rp-advertisement" || name == "input-df-election" || name == "output-df-election" || name == "input-miscellaneous")
        return true;
    return false;
}

Pim::Standby::DefaultContext::TopologyRouteCount::TopologyRouteCount()
    :
    group_ranges{YType::uint32, "group-ranges"},
    active_group_ranges{YType::uint32, "active-group-ranges"},
    groute_count{YType::uint32, "groute-count"},
    sg_route_count{YType::uint32, "sg-route-count"},
    sgr_route_count{YType::uint32, "sgr-route-count"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"}
{

    yang_name = "topology-route-count"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::TopologyRouteCount::~TopologyRouteCount()
{
}

bool Pim::Standby::DefaultContext::TopologyRouteCount::has_data() const
{
    if (is_presence_container) return true;
    return group_ranges.is_set
	|| active_group_ranges.is_set
	|| groute_count.is_set
	|| sg_route_count.is_set
	|| sgr_route_count.is_set
	|| is_node_low_memory.is_set;
}

bool Pim::Standby::DefaultContext::TopologyRouteCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_ranges.yfilter)
	|| ydk::is_set(active_group_ranges.yfilter)
	|| ydk::is_set(groute_count.yfilter)
	|| ydk::is_set(sg_route_count.yfilter)
	|| ydk::is_set(sgr_route_count.yfilter)
	|| ydk::is_set(is_node_low_memory.yfilter);
}

std::string Pim::Standby::DefaultContext::TopologyRouteCount::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::TopologyRouteCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-route-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::TopologyRouteCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_ranges.is_set || is_set(group_ranges.yfilter)) leaf_name_data.push_back(group_ranges.get_name_leafdata());
    if (active_group_ranges.is_set || is_set(active_group_ranges.yfilter)) leaf_name_data.push_back(active_group_ranges.get_name_leafdata());
    if (groute_count.is_set || is_set(groute_count.yfilter)) leaf_name_data.push_back(groute_count.get_name_leafdata());
    if (sg_route_count.is_set || is_set(sg_route_count.yfilter)) leaf_name_data.push_back(sg_route_count.get_name_leafdata());
    if (sgr_route_count.is_set || is_set(sgr_route_count.yfilter)) leaf_name_data.push_back(sgr_route_count.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.yfilter)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::TopologyRouteCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::TopologyRouteCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::TopologyRouteCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-ranges")
    {
        group_ranges = value;
        group_ranges.value_namespace = name_space;
        group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges = value;
        active_group_ranges.value_namespace = name_space;
        active_group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groute-count")
    {
        groute_count = value;
        groute_count.value_namespace = name_space;
        groute_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count = value;
        sg_route_count.value_namespace = name_space;
        sg_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count = value;
        sgr_route_count.value_namespace = name_space;
        sgr_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
        is_node_low_memory.value_namespace = name_space;
        is_node_low_memory.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::TopologyRouteCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-ranges")
    {
        group_ranges.yfilter = yfilter;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges.yfilter = yfilter;
    }
    if(value_path == "groute-count")
    {
        groute_count.yfilter = yfilter;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count.yfilter = yfilter;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count.yfilter = yfilter;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::TopologyRouteCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-ranges" || name == "active-group-ranges" || name == "groute-count" || name == "sg-route-count" || name == "sgr-route-count" || name == "is-node-low-memory")
        return true;
    return false;
}

Pim::Standby::DefaultContext::JpStatistics::JpStatistics()
    :
    jp_statistic(this, {"interface_name"})
{

    yang_name = "jp-statistics"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::JpStatistics::~JpStatistics()
{
}

bool Pim::Standby::DefaultContext::JpStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<jp_statistic.len(); index++)
    {
        if(jp_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::JpStatistics::has_operation() const
{
    for (std::size_t index=0; index<jp_statistic.len(); index++)
    {
        if(jp_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::JpStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::JpStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jp-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::JpStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::JpStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "jp-statistic")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::JpStatistics::JpStatistic>();
        c->parent = this;
        jp_statistic.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::JpStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : jp_statistic.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::JpStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::JpStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::JpStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "jp-statistic")
        return true;
    return false;
}

Pim::Standby::DefaultContext::JpStatistics::JpStatistic::JpStatistic()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    mtu{YType::uint32, "mtu"},
    transmitted{YType::uint32, "transmitted"},
    transmitted100{YType::uint16, "transmitted100"},
    transmitted_1k{YType::uint16, "transmitted-1k"},
    transmitted_10k{YType::uint16, "transmitted-10k"},
    transmitted_50k{YType::uint16, "transmitted-50k"},
    received{YType::uint32, "received"},
    received100{YType::uint16, "received100"},
    received_1k{YType::uint16, "received-1k"},
    received_10k{YType::uint16, "received-10k"},
    received_50k{YType::uint16, "received-50k"}
{

    yang_name = "jp-statistic"; yang_parent_name = "jp-statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::JpStatistics::JpStatistic::~JpStatistic()
{
}

bool Pim::Standby::DefaultContext::JpStatistics::JpStatistic::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| mtu.is_set
	|| transmitted.is_set
	|| transmitted100.is_set
	|| transmitted_1k.is_set
	|| transmitted_10k.is_set
	|| transmitted_50k.is_set
	|| received.is_set
	|| received100.is_set
	|| received_1k.is_set
	|| received_10k.is_set
	|| received_50k.is_set;
}

bool Pim::Standby::DefaultContext::JpStatistics::JpStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(transmitted.yfilter)
	|| ydk::is_set(transmitted100.yfilter)
	|| ydk::is_set(transmitted_1k.yfilter)
	|| ydk::is_set(transmitted_10k.yfilter)
	|| ydk::is_set(transmitted_50k.yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(received100.yfilter)
	|| ydk::is_set(received_1k.yfilter)
	|| ydk::is_set(received_10k.yfilter)
	|| ydk::is_set(received_50k.yfilter);
}

std::string Pim::Standby::DefaultContext::JpStatistics::JpStatistic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/jp-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::JpStatistics::JpStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jp-statistic";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::JpStatistics::JpStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (transmitted.is_set || is_set(transmitted.yfilter)) leaf_name_data.push_back(transmitted.get_name_leafdata());
    if (transmitted100.is_set || is_set(transmitted100.yfilter)) leaf_name_data.push_back(transmitted100.get_name_leafdata());
    if (transmitted_1k.is_set || is_set(transmitted_1k.yfilter)) leaf_name_data.push_back(transmitted_1k.get_name_leafdata());
    if (transmitted_10k.is_set || is_set(transmitted_10k.yfilter)) leaf_name_data.push_back(transmitted_10k.get_name_leafdata());
    if (transmitted_50k.is_set || is_set(transmitted_50k.yfilter)) leaf_name_data.push_back(transmitted_50k.get_name_leafdata());
    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (received100.is_set || is_set(received100.yfilter)) leaf_name_data.push_back(received100.get_name_leafdata());
    if (received_1k.is_set || is_set(received_1k.yfilter)) leaf_name_data.push_back(received_1k.get_name_leafdata());
    if (received_10k.is_set || is_set(received_10k.yfilter)) leaf_name_data.push_back(received_10k.get_name_leafdata());
    if (received_50k.is_set || is_set(received_50k.yfilter)) leaf_name_data.push_back(received_50k.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::JpStatistics::JpStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::JpStatistics::JpStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::JpStatistics::JpStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted")
    {
        transmitted = value;
        transmitted.value_namespace = name_space;
        transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted100")
    {
        transmitted100 = value;
        transmitted100.value_namespace = name_space;
        transmitted100.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-1k")
    {
        transmitted_1k = value;
        transmitted_1k.value_namespace = name_space;
        transmitted_1k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-10k")
    {
        transmitted_10k = value;
        transmitted_10k.value_namespace = name_space;
        transmitted_10k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-50k")
    {
        transmitted_50k = value;
        transmitted_50k.value_namespace = name_space;
        transmitted_50k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received100")
    {
        received100 = value;
        received100.value_namespace = name_space;
        received100.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-1k")
    {
        received_1k = value;
        received_1k.value_namespace = name_space;
        received_1k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-10k")
    {
        received_10k = value;
        received_10k.value_namespace = name_space;
        received_10k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-50k")
    {
        received_50k = value;
        received_50k.value_namespace = name_space;
        received_50k.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::JpStatistics::JpStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "transmitted")
    {
        transmitted.yfilter = yfilter;
    }
    if(value_path == "transmitted100")
    {
        transmitted100.yfilter = yfilter;
    }
    if(value_path == "transmitted-1k")
    {
        transmitted_1k.yfilter = yfilter;
    }
    if(value_path == "transmitted-10k")
    {
        transmitted_10k.yfilter = yfilter;
    }
    if(value_path == "transmitted-50k")
    {
        transmitted_50k.yfilter = yfilter;
    }
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "received100")
    {
        received100.yfilter = yfilter;
    }
    if(value_path == "received-1k")
    {
        received_1k.yfilter = yfilter;
    }
    if(value_path == "received-10k")
    {
        received_10k.yfilter = yfilter;
    }
    if(value_path == "received-50k")
    {
        received_50k.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::JpStatistics::JpStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface-name-xr" || name == "mtu" || name == "transmitted" || name == "transmitted100" || name == "transmitted-1k" || name == "transmitted-10k" || name == "transmitted-50k" || name == "received" || name == "received100" || name == "received-1k" || name == "received-10k" || name == "received-50k")
        return true;
    return false;
}

Pim::Standby::DefaultContext::MibDatabases::MibDatabases()
    :
    mib_database(this, {})
{

    yang_name = "mib-databases"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::MibDatabases::~MibDatabases()
{
}

bool Pim::Standby::DefaultContext::MibDatabases::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mib_database.len(); index++)
    {
        if(mib_database[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::MibDatabases::has_operation() const
{
    for (std::size_t index=0; index<mib_database.len(); index++)
    {
        if(mib_database[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::MibDatabases::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::MibDatabases::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib-databases";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::MibDatabases::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::MibDatabases::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mib-database")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::MibDatabases::MibDatabase>();
        c->parent = this;
        mib_database.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::MibDatabases::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mib_database.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::MibDatabases::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::MibDatabases::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::MibDatabases::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mib-database")
        return true;
    return false;
}

Pim::Standby::DefaultContext::MibDatabases::MibDatabase::MibDatabase()
    :
    source_address{YType::str, "source-address"},
    group_address{YType::str, "group-address"},
    source_netmask{YType::uint32, "source-netmask"},
    upstream_assert_timer{YType::int32, "upstream-assert-timer"},
    assert_metric{YType::uint32, "assert-metric"},
    assert_metric_preference{YType::uint32, "assert-metric-preference"},
    assert_rpt_bit{YType::boolean, "assert-rpt-bit"},
    spt_bit{YType::boolean, "spt-bit"},
    rpf_mask{YType::uint32, "rpf-mask"},
    rpf_safi{YType::uint8, "rpf-safi"},
    rpf_table_name{YType::str, "rpf-table-name"},
    rpf_drop{YType::boolean, "rpf-drop"},
    rpf_extranet{YType::boolean, "rpf-extranet"},
    rpf_interface_name{YType::str, "rpf-interface-name"},
    rpf_vrf_name{YType::str, "rpf-vrf-name"},
    bidirectional_route{YType::boolean, "bidirectional-route"},
    uptime{YType::uint64, "uptime"},
    protocol{YType::enumeration, "protocol"}
        ,
    source_address_xr(std::make_shared<Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr>())
    , group_address_xr(std::make_shared<Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr>())
    , rpf_neighbor(std::make_shared<Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor>())
    , rpf_root(std::make_shared<Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot>())
{
    source_address_xr->parent = this;
    group_address_xr->parent = this;
    rpf_neighbor->parent = this;
    rpf_root->parent = this;

    yang_name = "mib-database"; yang_parent_name = "mib-databases"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::MibDatabases::MibDatabase::~MibDatabase()
{
}

bool Pim::Standby::DefaultContext::MibDatabases::MibDatabase::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| group_address.is_set
	|| source_netmask.is_set
	|| upstream_assert_timer.is_set
	|| assert_metric.is_set
	|| assert_metric_preference.is_set
	|| assert_rpt_bit.is_set
	|| spt_bit.is_set
	|| rpf_mask.is_set
	|| rpf_safi.is_set
	|| rpf_table_name.is_set
	|| rpf_drop.is_set
	|| rpf_extranet.is_set
	|| rpf_interface_name.is_set
	|| rpf_vrf_name.is_set
	|| bidirectional_route.is_set
	|| uptime.is_set
	|| protocol.is_set
	|| (source_address_xr !=  nullptr && source_address_xr->has_data())
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data())
	|| (rpf_root !=  nullptr && rpf_root->has_data());
}

bool Pim::Standby::DefaultContext::MibDatabases::MibDatabase::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(source_netmask.yfilter)
	|| ydk::is_set(upstream_assert_timer.yfilter)
	|| ydk::is_set(assert_metric.yfilter)
	|| ydk::is_set(assert_metric_preference.yfilter)
	|| ydk::is_set(assert_rpt_bit.yfilter)
	|| ydk::is_set(spt_bit.yfilter)
	|| ydk::is_set(rpf_mask.yfilter)
	|| ydk::is_set(rpf_safi.yfilter)
	|| ydk::is_set(rpf_table_name.yfilter)
	|| ydk::is_set(rpf_drop.yfilter)
	|| ydk::is_set(rpf_extranet.yfilter)
	|| ydk::is_set(rpf_interface_name.yfilter)
	|| ydk::is_set(rpf_vrf_name.yfilter)
	|| ydk::is_set(bidirectional_route.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| (source_address_xr !=  nullptr && source_address_xr->has_operation())
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation())
	|| (rpf_root !=  nullptr && rpf_root->has_operation());
}

std::string Pim::Standby::DefaultContext::MibDatabases::MibDatabase::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/mib-databases/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::MibDatabases::MibDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib-database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::MibDatabases::MibDatabase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_netmask.is_set || is_set(source_netmask.yfilter)) leaf_name_data.push_back(source_netmask.get_name_leafdata());
    if (upstream_assert_timer.is_set || is_set(upstream_assert_timer.yfilter)) leaf_name_data.push_back(upstream_assert_timer.get_name_leafdata());
    if (assert_metric.is_set || is_set(assert_metric.yfilter)) leaf_name_data.push_back(assert_metric.get_name_leafdata());
    if (assert_metric_preference.is_set || is_set(assert_metric_preference.yfilter)) leaf_name_data.push_back(assert_metric_preference.get_name_leafdata());
    if (assert_rpt_bit.is_set || is_set(assert_rpt_bit.yfilter)) leaf_name_data.push_back(assert_rpt_bit.get_name_leafdata());
    if (spt_bit.is_set || is_set(spt_bit.yfilter)) leaf_name_data.push_back(spt_bit.get_name_leafdata());
    if (rpf_mask.is_set || is_set(rpf_mask.yfilter)) leaf_name_data.push_back(rpf_mask.get_name_leafdata());
    if (rpf_safi.is_set || is_set(rpf_safi.yfilter)) leaf_name_data.push_back(rpf_safi.get_name_leafdata());
    if (rpf_table_name.is_set || is_set(rpf_table_name.yfilter)) leaf_name_data.push_back(rpf_table_name.get_name_leafdata());
    if (rpf_drop.is_set || is_set(rpf_drop.yfilter)) leaf_name_data.push_back(rpf_drop.get_name_leafdata());
    if (rpf_extranet.is_set || is_set(rpf_extranet.yfilter)) leaf_name_data.push_back(rpf_extranet.get_name_leafdata());
    if (rpf_interface_name.is_set || is_set(rpf_interface_name.yfilter)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());
    if (rpf_vrf_name.is_set || is_set(rpf_vrf_name.yfilter)) leaf_name_data.push_back(rpf_vrf_name.get_name_leafdata());
    if (bidirectional_route.is_set || is_set(bidirectional_route.yfilter)) leaf_name_data.push_back(bidirectional_route.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::MibDatabases::MibDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-address-xr")
    {
        if(source_address_xr == nullptr)
        {
            source_address_xr = std::make_shared<Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr>();
        }
        return source_address_xr;
    }

    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor == nullptr)
        {
            rpf_neighbor = std::make_shared<Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor>();
        }
        return rpf_neighbor;
    }

    if(child_yang_name == "rpf-root")
    {
        if(rpf_root == nullptr)
        {
            rpf_root = std::make_shared<Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot>();
        }
        return rpf_root;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::MibDatabases::MibDatabase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source_address_xr != nullptr)
    {
        children["source-address-xr"] = source_address_xr;
    }

    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    if(rpf_neighbor != nullptr)
    {
        children["rpf-neighbor"] = rpf_neighbor;
    }

    if(rpf_root != nullptr)
    {
        children["rpf-root"] = rpf_root;
    }

    return children;
}

void Pim::Standby::DefaultContext::MibDatabases::MibDatabase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-netmask")
    {
        source_netmask = value;
        source_netmask.value_namespace = name_space;
        source_netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upstream-assert-timer")
    {
        upstream_assert_timer = value;
        upstream_assert_timer.value_namespace = name_space;
        upstream_assert_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assert-metric")
    {
        assert_metric = value;
        assert_metric.value_namespace = name_space;
        assert_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assert-metric-preference")
    {
        assert_metric_preference = value;
        assert_metric_preference.value_namespace = name_space;
        assert_metric_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assert-rpt-bit")
    {
        assert_rpt_bit = value;
        assert_rpt_bit.value_namespace = name_space;
        assert_rpt_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spt-bit")
    {
        spt_bit = value;
        spt_bit.value_namespace = name_space;
        spt_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-mask")
    {
        rpf_mask = value;
        rpf_mask.value_namespace = name_space;
        rpf_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-safi")
    {
        rpf_safi = value;
        rpf_safi.value_namespace = name_space;
        rpf_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-table-name")
    {
        rpf_table_name = value;
        rpf_table_name.value_namespace = name_space;
        rpf_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-drop")
    {
        rpf_drop = value;
        rpf_drop.value_namespace = name_space;
        rpf_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-extranet")
    {
        rpf_extranet = value;
        rpf_extranet.value_namespace = name_space;
        rpf_extranet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name = value;
        rpf_interface_name.value_namespace = name_space;
        rpf_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name = value;
        rpf_vrf_name.value_namespace = name_space;
        rpf_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidirectional-route")
    {
        bidirectional_route = value;
        bidirectional_route.value_namespace = name_space;
        bidirectional_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::MibDatabases::MibDatabase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "source-netmask")
    {
        source_netmask.yfilter = yfilter;
    }
    if(value_path == "upstream-assert-timer")
    {
        upstream_assert_timer.yfilter = yfilter;
    }
    if(value_path == "assert-metric")
    {
        assert_metric.yfilter = yfilter;
    }
    if(value_path == "assert-metric-preference")
    {
        assert_metric_preference.yfilter = yfilter;
    }
    if(value_path == "assert-rpt-bit")
    {
        assert_rpt_bit.yfilter = yfilter;
    }
    if(value_path == "spt-bit")
    {
        spt_bit.yfilter = yfilter;
    }
    if(value_path == "rpf-mask")
    {
        rpf_mask.yfilter = yfilter;
    }
    if(value_path == "rpf-safi")
    {
        rpf_safi.yfilter = yfilter;
    }
    if(value_path == "rpf-table-name")
    {
        rpf_table_name.yfilter = yfilter;
    }
    if(value_path == "rpf-drop")
    {
        rpf_drop.yfilter = yfilter;
    }
    if(value_path == "rpf-extranet")
    {
        rpf_extranet.yfilter = yfilter;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name.yfilter = yfilter;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name.yfilter = yfilter;
    }
    if(value_path == "bidirectional-route")
    {
        bidirectional_route.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::MibDatabases::MibDatabase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address-xr" || name == "group-address-xr" || name == "rpf-neighbor" || name == "rpf-root" || name == "source-address" || name == "group-address" || name == "source-netmask" || name == "upstream-assert-timer" || name == "assert-metric" || name == "assert-metric-preference" || name == "assert-rpt-bit" || name == "spt-bit" || name == "rpf-mask" || name == "rpf-safi" || name == "rpf-table-name" || name == "rpf-drop" || name == "rpf-extranet" || name == "rpf-interface-name" || name == "rpf-vrf-name" || name == "bidirectional-route" || name == "uptime" || name == "protocol")
        return true;
    return false;
}

Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::SourceAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address-xr"; yang_parent_name = "mib-database"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::~SourceAddressXr()
{
}

bool Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/mib-databases/mib-database/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "mib-database"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::~GroupAddressXr()
{
}

bool Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/mib-databases/mib-database/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-neighbor"; yang_parent_name = "mib-database"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/mib-databases/mib-database/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot::RpfRoot()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-root"; yang_parent_name = "mib-database"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot::~RpfRoot()
{
}

bool Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/mib-databases/mib-database/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-root";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormats()
    :
    neighbor_old_format(this, {})
{

    yang_name = "neighbor-old-formats"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::NeighborOldFormats::~NeighborOldFormats()
{
}

bool Pim::Standby::DefaultContext::NeighborOldFormats::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_old_format.len(); index++)
    {
        if(neighbor_old_format[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::NeighborOldFormats::has_operation() const
{
    for (std::size_t index=0; index<neighbor_old_format.len(); index++)
    {
        if(neighbor_old_format[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::NeighborOldFormats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::NeighborOldFormats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-old-formats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::NeighborOldFormats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::NeighborOldFormats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-old-format")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat>();
        c->parent = this;
        neighbor_old_format.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::NeighborOldFormats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : neighbor_old_format.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::NeighborOldFormats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::NeighborOldFormats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::NeighborOldFormats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-old-format")
        return true;
    return false;
}

Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborOldFormat()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    interface_name_xr{YType::str, "interface-name-xr"},
    uptime{YType::uint64, "uptime"},
    expires{YType::uint64, "expires"},
    expiry_timer{YType::uint64, "expiry-timer"},
    is_this_neighbor_us{YType::boolean, "is-this-neighbor-us"},
    is_this_neighbor_dr{YType::boolean, "is-this-neighbor-dr"},
    is_dr_priority_capable{YType::boolean, "is-dr-priority-capable"},
    dr_priority{YType::uint32, "dr-priority"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    is_ecmp_redirect_capable{YType::boolean, "is-ecmp-redirect-capable"},
    is_bfd_state{YType::boolean, "is-bfd-state"},
    propagation_delay{YType::uint16, "propagation-delay"},
    override_interval{YType::uint16, "override-interval"}
        ,
    neighbor_address_xr(this, {})
{

    yang_name = "neighbor-old-format"; yang_parent_name = "neighbor-old-formats"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::~NeighborOldFormat()
{
}

bool Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_address_xr.len(); index++)
    {
        if(neighbor_address_xr[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| neighbor_address.is_set
	|| interface_name_xr.is_set
	|| uptime.is_set
	|| expires.is_set
	|| expiry_timer.is_set
	|| is_this_neighbor_us.is_set
	|| is_this_neighbor_dr.is_set
	|| is_dr_priority_capable.is_set
	|| dr_priority.is_set
	|| is_bidirectional_capable.is_set
	|| is_proxy_capable.is_set
	|| is_batch_asserts_capable.is_set
	|| is_ecmp_redirect_capable.is_set
	|| is_bfd_state.is_set
	|| propagation_delay.is_set
	|| override_interval.is_set;
}

bool Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::has_operation() const
{
    for (std::size_t index=0; index<neighbor_address_xr.len(); index++)
    {
        if(neighbor_address_xr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(expires.yfilter)
	|| ydk::is_set(expiry_timer.yfilter)
	|| ydk::is_set(is_this_neighbor_us.yfilter)
	|| ydk::is_set(is_this_neighbor_dr.yfilter)
	|| ydk::is_set(is_dr_priority_capable.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(is_bidirectional_capable.yfilter)
	|| ydk::is_set(is_proxy_capable.yfilter)
	|| ydk::is_set(is_batch_asserts_capable.yfilter)
	|| ydk::is_set(is_ecmp_redirect_capable.yfilter)
	|| ydk::is_set(is_bfd_state.yfilter)
	|| ydk::is_set(propagation_delay.yfilter)
	|| ydk::is_set(override_interval.yfilter);
}

std::string Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/neighbor-old-formats/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-old-format";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (expires.is_set || is_set(expires.yfilter)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (expiry_timer.is_set || is_set(expiry_timer.yfilter)) leaf_name_data.push_back(expiry_timer.get_name_leafdata());
    if (is_this_neighbor_us.is_set || is_set(is_this_neighbor_us.yfilter)) leaf_name_data.push_back(is_this_neighbor_us.get_name_leafdata());
    if (is_this_neighbor_dr.is_set || is_set(is_this_neighbor_dr.yfilter)) leaf_name_data.push_back(is_this_neighbor_dr.get_name_leafdata());
    if (is_dr_priority_capable.is_set || is_set(is_dr_priority_capable.yfilter)) leaf_name_data.push_back(is_dr_priority_capable.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.yfilter)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.yfilter)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.yfilter)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (is_ecmp_redirect_capable.is_set || is_set(is_ecmp_redirect_capable.yfilter)) leaf_name_data.push_back(is_ecmp_redirect_capable.get_name_leafdata());
    if (is_bfd_state.is_set || is_set(is_bfd_state.yfilter)) leaf_name_data.push_back(is_bfd_state.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address-xr")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr>();
        c->parent = this;
        neighbor_address_xr.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : neighbor_address_xr.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expires")
    {
        expires = value;
        expires.value_namespace = name_space;
        expires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-timer")
    {
        expiry_timer = value;
        expiry_timer.value_namespace = name_space;
        expiry_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-this-neighbor-us")
    {
        is_this_neighbor_us = value;
        is_this_neighbor_us.value_namespace = name_space;
        is_this_neighbor_us.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-this-neighbor-dr")
    {
        is_this_neighbor_dr = value;
        is_this_neighbor_dr.value_namespace = name_space;
        is_this_neighbor_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dr-priority-capable")
    {
        is_dr_priority_capable = value;
        is_dr_priority_capable.value_namespace = name_space;
        is_dr_priority_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
        is_bidirectional_capable.value_namespace = name_space;
        is_bidirectional_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
        is_proxy_capable.value_namespace = name_space;
        is_proxy_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
        is_batch_asserts_capable.value_namespace = name_space;
        is_batch_asserts_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ecmp-redirect-capable")
    {
        is_ecmp_redirect_capable = value;
        is_ecmp_redirect_capable.value_namespace = name_space;
        is_ecmp_redirect_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bfd-state")
    {
        is_bfd_state = value;
        is_bfd_state.value_namespace = name_space;
        is_bfd_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "expires")
    {
        expires.yfilter = yfilter;
    }
    if(value_path == "expiry-timer")
    {
        expiry_timer.yfilter = yfilter;
    }
    if(value_path == "is-this-neighbor-us")
    {
        is_this_neighbor_us.yfilter = yfilter;
    }
    if(value_path == "is-this-neighbor-dr")
    {
        is_this_neighbor_dr.yfilter = yfilter;
    }
    if(value_path == "is-dr-priority-capable")
    {
        is_dr_priority_capable.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable.yfilter = yfilter;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable.yfilter = yfilter;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable.yfilter = yfilter;
    }
    if(value_path == "is-ecmp-redirect-capable")
    {
        is_ecmp_redirect_capable.yfilter = yfilter;
    }
    if(value_path == "is-bfd-state")
    {
        is_bfd_state.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address-xr" || name == "interface-name" || name == "neighbor-address" || name == "interface-name-xr" || name == "uptime" || name == "expires" || name == "expiry-timer" || name == "is-this-neighbor-us" || name == "is-this-neighbor-dr" || name == "is-dr-priority-capable" || name == "dr-priority" || name == "is-bidirectional-capable" || name == "is-proxy-capable" || name == "is-batch-asserts-capable" || name == "is-ecmp-redirect-capable" || name == "is-bfd-state" || name == "propagation-delay" || name == "override-interval")
        return true;
    return false;
}

Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::NeighborAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "neighbor-address-xr"; yang_parent_name = "neighbor-old-format"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::~NeighborAddressXr()
{
}

bool Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/neighbor-old-formats/neighbor-old-format/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::IfrsSummary::IfrsSummary()
    :
    interface_count{YType::uint32, "interface-count"},
    configuration_count{YType::uint32, "configuration-count"}
{

    yang_name = "ifrs-summary"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::IfrsSummary::~IfrsSummary()
{
}

bool Pim::Standby::DefaultContext::IfrsSummary::has_data() const
{
    if (is_presence_container) return true;
    return interface_count.is_set
	|| configuration_count.is_set;
}

bool Pim::Standby::DefaultContext::IfrsSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(configuration_count.yfilter);
}

std::string Pim::Standby::DefaultContext::IfrsSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::IfrsSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::IfrsSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (configuration_count.is_set || is_set(configuration_count.yfilter)) leaf_name_data.push_back(configuration_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::IfrsSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::IfrsSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::IfrsSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-count")
    {
        configuration_count = value;
        configuration_count.value_namespace = name_space;
        configuration_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::IfrsSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "configuration-count")
    {
        configuration_count.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::IfrsSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-count" || name == "configuration-count")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Ranges::Ranges()
    :
    range(this, {})
{

    yang_name = "ranges"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Ranges::~Ranges()
{
}

bool Pim::Standby::DefaultContext::Ranges::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Ranges::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::Ranges::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Ranges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::Ranges::Range>();
        c->parent = this;
        range.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Ranges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : range.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::Ranges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::Ranges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::Ranges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Ranges::Range::Range()
    :
    rp_address{YType::str, "rp-address"},
    client{YType::enumeration, "client"},
    protocol{YType::enumeration, "protocol"},
    client_xr{YType::enumeration, "client-xr"},
    expires{YType::uint64, "expires"}
        ,
    rp_address_xr(std::make_shared<Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr>())
    , source_of_information(std::make_shared<Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation>())
    , group_range(this, {})
{
    rp_address_xr->parent = this;
    source_of_information->parent = this;

    yang_name = "range"; yang_parent_name = "ranges"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Ranges::Range::~Range()
{
}

bool Pim::Standby::DefaultContext::Ranges::Range::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_range.len(); index++)
    {
        if(group_range[index]->has_data())
            return true;
    }
    return rp_address.is_set
	|| client.is_set
	|| protocol.is_set
	|| client_xr.is_set
	|| expires.is_set
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_data())
	|| (source_of_information !=  nullptr && source_of_information->has_data());
}

bool Pim::Standby::DefaultContext::Ranges::Range::has_operation() const
{
    for (std::size_t index=0; index<group_range.len(); index++)
    {
        if(group_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(client_xr.yfilter)
	|| ydk::is_set(expires.yfilter)
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_operation())
	|| (source_of_information !=  nullptr && source_of_information->has_operation());
}

std::string Pim::Standby::DefaultContext::Ranges::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/ranges/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Ranges::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Ranges::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (client_xr.is_set || is_set(client_xr.yfilter)) leaf_name_data.push_back(client_xr.get_name_leafdata());
    if (expires.is_set || is_set(expires.yfilter)) leaf_name_data.push_back(expires.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Ranges::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address-xr")
    {
        if(rp_address_xr == nullptr)
        {
            rp_address_xr = std::make_shared<Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr>();
        }
        return rp_address_xr;
    }

    if(child_yang_name == "source-of-information")
    {
        if(source_of_information == nullptr)
        {
            source_of_information = std::make_shared<Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation>();
        }
        return source_of_information;
    }

    if(child_yang_name == "group-range")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::Ranges::Range::GroupRange>();
        c->parent = this;
        group_range.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Ranges::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rp_address_xr != nullptr)
    {
        children["rp-address-xr"] = rp_address_xr;
    }

    if(source_of_information != nullptr)
    {
        children["source-of-information"] = source_of_information;
    }

    count = 0;
    for (auto c : group_range.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::Ranges::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-xr")
    {
        client_xr = value;
        client_xr.value_namespace = name_space;
        client_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expires")
    {
        expires = value;
        expires.value_namespace = name_space;
        expires.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Ranges::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "client-xr")
    {
        client_xr.yfilter = yfilter;
    }
    if(value_path == "expires")
    {
        expires.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Ranges::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address-xr" || name == "source-of-information" || name == "group-range" || name == "rp-address" || name == "client" || name == "protocol" || name == "client-xr" || name == "expires")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr::RpAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address-xr"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr::~RpAddressXr()
{
}

bool Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/ranges/range/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation::SourceOfInformation()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-of-information"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation::~SourceOfInformation()
{
}

bool Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/ranges/range/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-of-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Ranges::Range::GroupRange::GroupRange()
    :
    prefix_length{YType::int32, "prefix-length"},
    uptime{YType::uint64, "uptime"},
    expires{YType::uint64, "expires"}
        ,
    prefix(std::make_shared<Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix>())
    , source_of_information(std::make_shared<Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation>())
{
    prefix->parent = this;
    source_of_information->parent = this;

    yang_name = "group-range"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Ranges::Range::GroupRange::~GroupRange()
{
}

bool Pim::Standby::DefaultContext::Ranges::Range::GroupRange::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| uptime.is_set
	|| expires.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (source_of_information !=  nullptr && source_of_information->has_data());
}

bool Pim::Standby::DefaultContext::Ranges::Range::GroupRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(expires.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (source_of_information !=  nullptr && source_of_information->has_operation());
}

std::string Pim::Standby::DefaultContext::Ranges::Range::GroupRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/ranges/range/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Ranges::Range::GroupRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Ranges::Range::GroupRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (expires.is_set || is_set(expires.yfilter)) leaf_name_data.push_back(expires.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Ranges::Range::GroupRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "source-of-information")
    {
        if(source_of_information == nullptr)
        {
            source_of_information = std::make_shared<Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation>();
        }
        return source_of_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Ranges::Range::GroupRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(source_of_information != nullptr)
    {
        children["source-of-information"] = source_of_information;
    }

    return children;
}

void Pim::Standby::DefaultContext::Ranges::Range::GroupRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expires")
    {
        expires = value;
        expires.value_namespace = name_space;
        expires.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Ranges::Range::GroupRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "expires")
    {
        expires.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Ranges::Range::GroupRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "source-of-information" || name == "prefix-length" || name == "uptime" || name == "expires")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "group-range"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix::~Prefix()
{
}

bool Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/ranges/range/group-range/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::SourceOfInformation()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-of-information"; yang_parent_name = "group-range"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::~SourceOfInformation()
{
}

bool Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/ranges/range/group-range/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-of-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormats()
    :
    interface_old_format(this, {"interface_name"})
{

    yang_name = "interface-old-formats"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::InterfaceOldFormats::~InterfaceOldFormats()
{
}

bool Pim::Standby::DefaultContext::InterfaceOldFormats::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_old_format.len(); index++)
    {
        if(interface_old_format[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::InterfaceOldFormats::has_operation() const
{
    for (std::size_t index=0; index<interface_old_format.len(); index++)
    {
        if(interface_old_format[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::InterfaceOldFormats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::InterfaceOldFormats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-formats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::InterfaceOldFormats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::InterfaceOldFormats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-old-format")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat>();
        c->parent = this;
        interface_old_format.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::InterfaceOldFormats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface_old_format.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::InterfaceOldFormats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::InterfaceOldFormats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::InterfaceOldFormats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-old-format")
        return true;
    return false;
}

Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceOldFormat()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_address_mask{YType::uint8, "interface-address-mask"},
    is_enabled{YType::boolean, "is-enabled"},
    neighbor_count{YType::uint16, "neighbor-count"},
    external_neighbor_count{YType::uint16, "external-neighbor-count"},
    hello_interval{YType::uint16, "hello-interval"},
    dr_priority{YType::uint32, "dr-priority"},
    hello_expiry{YType::uint64, "hello-expiry"},
    are_we_dr{YType::boolean, "are-we-dr"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    virtual_interface{YType::boolean, "virtual-interface"},
    passive_interface{YType::boolean, "passive-interface"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    join_prune_interval{YType::uint16, "join-prune-interval"},
    prune_delay_enabled{YType::boolean, "prune-delay-enabled"},
    configured_propagation_delay{YType::uint16, "configured-propagation-delay"},
    propagation_delay{YType::uint16, "propagation-delay"},
    configured_override_interval{YType::uint16, "configured-override-interval"},
    override_interval{YType::uint16, "override-interval"},
    generation_id{YType::uint32, "generation-id"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    idb_oor_enabled{YType::boolean, "idb-oor-enabled"},
    idb_acl_provided{YType::boolean, "idb-acl-provided"},
    idb_max_count{YType::uint32, "idb-max-count"},
    idb_threshold_count{YType::uint32, "idb-threshold-count"},
    idb_current_count{YType::uint32, "idb-current-count"},
    idb_acl_name{YType::str, "idb-acl-name"}
        ,
    dr_address(std::make_shared<Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress>())
    , interface_address(this, {})
{
    dr_address->parent = this;

    yang_name = "interface-old-format"; yang_parent_name = "interface-old-formats"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::~InterfaceOldFormat()
{
}

bool Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_address.len(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_address_mask.is_set
	|| is_enabled.is_set
	|| neighbor_count.is_set
	|| external_neighbor_count.is_set
	|| hello_interval.is_set
	|| dr_priority.is_set
	|| hello_expiry.is_set
	|| are_we_dr.is_set
	|| bfd_enabled.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| virtual_interface.is_set
	|| passive_interface.is_set
	|| neighbor_filter_name.is_set
	|| join_prune_interval.is_set
	|| prune_delay_enabled.is_set
	|| configured_propagation_delay.is_set
	|| propagation_delay.is_set
	|| configured_override_interval.is_set
	|| override_interval.is_set
	|| generation_id.is_set
	|| is_bidirectional_capable.is_set
	|| is_proxy_capable.is_set
	|| is_batch_asserts_capable.is_set
	|| idb_oor_enabled.is_set
	|| idb_acl_provided.is_set
	|| idb_max_count.is_set
	|| idb_threshold_count.is_set
	|| idb_current_count.is_set
	|| idb_acl_name.is_set
	|| (dr_address !=  nullptr && dr_address->has_data());
}

bool Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::has_operation() const
{
    for (std::size_t index=0; index<interface_address.len(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_address_mask.yfilter)
	|| ydk::is_set(is_enabled.yfilter)
	|| ydk::is_set(neighbor_count.yfilter)
	|| ydk::is_set(external_neighbor_count.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(hello_expiry.yfilter)
	|| ydk::is_set(are_we_dr.yfilter)
	|| ydk::is_set(bfd_enabled.yfilter)
	|| ydk::is_set(bfd_interval.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(virtual_interface.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(neighbor_filter_name.yfilter)
	|| ydk::is_set(join_prune_interval.yfilter)
	|| ydk::is_set(prune_delay_enabled.yfilter)
	|| ydk::is_set(configured_propagation_delay.yfilter)
	|| ydk::is_set(propagation_delay.yfilter)
	|| ydk::is_set(configured_override_interval.yfilter)
	|| ydk::is_set(override_interval.yfilter)
	|| ydk::is_set(generation_id.yfilter)
	|| ydk::is_set(is_bidirectional_capable.yfilter)
	|| ydk::is_set(is_proxy_capable.yfilter)
	|| ydk::is_set(is_batch_asserts_capable.yfilter)
	|| ydk::is_set(idb_oor_enabled.yfilter)
	|| ydk::is_set(idb_acl_provided.yfilter)
	|| ydk::is_set(idb_max_count.yfilter)
	|| ydk::is_set(idb_threshold_count.yfilter)
	|| ydk::is_set(idb_current_count.yfilter)
	|| ydk::is_set(idb_acl_name.yfilter)
	|| (dr_address !=  nullptr && dr_address->has_operation());
}

std::string Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/interface-old-formats/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-format";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_address_mask.is_set || is_set(interface_address_mask.yfilter)) leaf_name_data.push_back(interface_address_mask.get_name_leafdata());
    if (is_enabled.is_set || is_set(is_enabled.yfilter)) leaf_name_data.push_back(is_enabled.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.yfilter)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (external_neighbor_count.is_set || is_set(external_neighbor_count.yfilter)) leaf_name_data.push_back(external_neighbor_count.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (hello_expiry.is_set || is_set(hello_expiry.yfilter)) leaf_name_data.push_back(hello_expiry.get_name_leafdata());
    if (are_we_dr.is_set || is_set(are_we_dr.yfilter)) leaf_name_data.push_back(are_we_dr.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.yfilter)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.yfilter)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.yfilter)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.yfilter)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (join_prune_interval.is_set || is_set(join_prune_interval.yfilter)) leaf_name_data.push_back(join_prune_interval.get_name_leafdata());
    if (prune_delay_enabled.is_set || is_set(prune_delay_enabled.yfilter)) leaf_name_data.push_back(prune_delay_enabled.get_name_leafdata());
    if (configured_propagation_delay.is_set || is_set(configured_propagation_delay.yfilter)) leaf_name_data.push_back(configured_propagation_delay.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (configured_override_interval.is_set || is_set(configured_override_interval.yfilter)) leaf_name_data.push_back(configured_override_interval.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (generation_id.is_set || is_set(generation_id.yfilter)) leaf_name_data.push_back(generation_id.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.yfilter)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.yfilter)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.yfilter)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (idb_oor_enabled.is_set || is_set(idb_oor_enabled.yfilter)) leaf_name_data.push_back(idb_oor_enabled.get_name_leafdata());
    if (idb_acl_provided.is_set || is_set(idb_acl_provided.yfilter)) leaf_name_data.push_back(idb_acl_provided.get_name_leafdata());
    if (idb_max_count.is_set || is_set(idb_max_count.yfilter)) leaf_name_data.push_back(idb_max_count.get_name_leafdata());
    if (idb_threshold_count.is_set || is_set(idb_threshold_count.yfilter)) leaf_name_data.push_back(idb_threshold_count.get_name_leafdata());
    if (idb_current_count.is_set || is_set(idb_current_count.yfilter)) leaf_name_data.push_back(idb_current_count.get_name_leafdata());
    if (idb_acl_name.is_set || is_set(idb_acl_name.yfilter)) leaf_name_data.push_back(idb_acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dr-address")
    {
        if(dr_address == nullptr)
        {
            dr_address = std::make_shared<Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress>();
        }
        return dr_address;
    }

    if(child_yang_name == "interface-address")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress>();
        c->parent = this;
        interface_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dr_address != nullptr)
    {
        children["dr-address"] = dr_address;
    }

    count = 0;
    for (auto c : interface_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "interface-address-mask")
    {
        interface_address_mask = value;
        interface_address_mask.value_namespace = name_space;
        interface_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-enabled")
    {
        is_enabled = value;
        is_enabled.value_namespace = name_space;
        is_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
        neighbor_count.value_namespace = name_space;
        neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count = value;
        external_neighbor_count.value_namespace = name_space;
        external_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry = value;
        hello_expiry.value_namespace = name_space;
        hello_expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr = value;
        are_we_dr.value_namespace = name_space;
        are_we_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
        bfd_enabled.value_namespace = name_space;
        bfd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
        bfd_interval.value_namespace = name_space;
        bfd_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
        virtual_interface.value_namespace = name_space;
        virtual_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
        neighbor_filter_name.value_namespace = name_space;
        neighbor_filter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval = value;
        join_prune_interval.value_namespace = name_space;
        join_prune_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled = value;
        prune_delay_enabled.value_namespace = name_space;
        prune_delay_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay = value;
        configured_propagation_delay.value_namespace = name_space;
        configured_propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval = value;
        configured_override_interval.value_namespace = name_space;
        configured_override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation-id")
    {
        generation_id = value;
        generation_id.value_namespace = name_space;
        generation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
        is_bidirectional_capable.value_namespace = name_space;
        is_bidirectional_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
        is_proxy_capable.value_namespace = name_space;
        is_proxy_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
        is_batch_asserts_capable.value_namespace = name_space;
        is_batch_asserts_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled = value;
        idb_oor_enabled.value_namespace = name_space;
        idb_oor_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided = value;
        idb_acl_provided.value_namespace = name_space;
        idb_acl_provided.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count = value;
        idb_max_count.value_namespace = name_space;
        idb_max_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count = value;
        idb_threshold_count.value_namespace = name_space;
        idb_threshold_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count = value;
        idb_current_count.value_namespace = name_space;
        idb_current_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name = value;
        idb_acl_name.value_namespace = name_space;
        idb_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask.yfilter = yfilter;
    }
    if(value_path == "is-enabled")
    {
        is_enabled.yfilter = yfilter;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count.yfilter = yfilter;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry.yfilter = yfilter;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr.yfilter = yfilter;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled.yfilter = yfilter;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name.yfilter = yfilter;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval.yfilter = yfilter;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled.yfilter = yfilter;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
    if(value_path == "generation-id")
    {
        generation_id.yfilter = yfilter;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable.yfilter = yfilter;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable.yfilter = yfilter;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable.yfilter = yfilter;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled.yfilter = yfilter;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided.yfilter = yfilter;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count.yfilter = yfilter;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count.yfilter = yfilter;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count.yfilter = yfilter;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dr-address" || name == "interface-address" || name == "interface-name" || name == "interface-name-xr" || name == "interface-address-mask" || name == "is-enabled" || name == "neighbor-count" || name == "external-neighbor-count" || name == "hello-interval" || name == "dr-priority" || name == "hello-expiry" || name == "are-we-dr" || name == "bfd-enabled" || name == "bfd-interval" || name == "bfd-multiplier" || name == "virtual-interface" || name == "passive-interface" || name == "neighbor-filter-name" || name == "join-prune-interval" || name == "prune-delay-enabled" || name == "configured-propagation-delay" || name == "propagation-delay" || name == "configured-override-interval" || name == "override-interval" || name == "generation-id" || name == "is-bidirectional-capable" || name == "is-proxy-capable" || name == "is-batch-asserts-capable" || name == "idb-oor-enabled" || name == "idb-acl-provided" || name == "idb-max-count" || name == "idb-threshold-count" || name == "idb-current-count" || name == "idb-acl-name")
        return true;
    return false;
}

Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::DrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "dr-address"; yang_parent_name = "interface-old-format"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::~DrAddress()
{
}

bool Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dr-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::InterfaceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "interface-address"; yang_parent_name = "interface-old-format"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::~InterfaceAddress()
{
}

bool Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Bsr::Bsr()
    :
    rp_caches(std::make_shared<Pim::Standby::DefaultContext::Bsr::RpCaches>())
    , candidate_rps(std::make_shared<Pim::Standby::DefaultContext::Bsr::CandidateRps>())
    , bsr_elections(std::make_shared<Pim::Standby::DefaultContext::Bsr::BsrElections>())
{
    rp_caches->parent = this;
    candidate_rps->parent = this;
    bsr_elections->parent = this;

    yang_name = "bsr"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Bsr::~Bsr()
{
}

bool Pim::Standby::DefaultContext::Bsr::has_data() const
{
    if (is_presence_container) return true;
    return (rp_caches !=  nullptr && rp_caches->has_data())
	|| (candidate_rps !=  nullptr && candidate_rps->has_data())
	|| (bsr_elections !=  nullptr && bsr_elections->has_data());
}

bool Pim::Standby::DefaultContext::Bsr::has_operation() const
{
    return is_set(yfilter)
	|| (rp_caches !=  nullptr && rp_caches->has_operation())
	|| (candidate_rps !=  nullptr && candidate_rps->has_operation())
	|| (bsr_elections !=  nullptr && bsr_elections->has_operation());
}

std::string Pim::Standby::DefaultContext::Bsr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Bsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Bsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-caches")
    {
        if(rp_caches == nullptr)
        {
            rp_caches = std::make_shared<Pim::Standby::DefaultContext::Bsr::RpCaches>();
        }
        return rp_caches;
    }

    if(child_yang_name == "candidate-rps")
    {
        if(candidate_rps == nullptr)
        {
            candidate_rps = std::make_shared<Pim::Standby::DefaultContext::Bsr::CandidateRps>();
        }
        return candidate_rps;
    }

    if(child_yang_name == "bsr-elections")
    {
        if(bsr_elections == nullptr)
        {
            bsr_elections = std::make_shared<Pim::Standby::DefaultContext::Bsr::BsrElections>();
        }
        return bsr_elections;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Bsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rp_caches != nullptr)
    {
        children["rp-caches"] = rp_caches;
    }

    if(candidate_rps != nullptr)
    {
        children["candidate-rps"] = candidate_rps;
    }

    if(bsr_elections != nullptr)
    {
        children["bsr-elections"] = bsr_elections;
    }

    return children;
}

void Pim::Standby::DefaultContext::Bsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::Bsr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::Bsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-caches" || name == "candidate-rps" || name == "bsr-elections")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Bsr::RpCaches::RpCaches()
    :
    rp_cache(this, {"group_prefix"})
{

    yang_name = "rp-caches"; yang_parent_name = "bsr"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Bsr::RpCaches::~RpCaches()
{
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rp_cache.len(); index++)
    {
        if(rp_cache[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::has_operation() const
{
    for (std::size_t index=0; index<rp_cache.len(); index++)
    {
        if(rp_cache[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::Bsr::RpCaches::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bsr/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Bsr::RpCaches::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-caches";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Bsr::RpCaches::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::RpCaches::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-cache")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache>();
        c->parent = this;
        rp_cache.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Bsr::RpCaches::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : rp_cache.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::Bsr::RpCaches::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::Bsr::RpCaches::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-cache")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::RpCache()
    :
    group_prefix{YType::str, "group-prefix"},
    group_prefix_length{YType::uint32, "group-prefix-length"},
    candidate_rp_group_count{YType::uint32, "candidate-rp-group-count"}
        ,
    group_prefix_xr(std::make_shared<Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr>())
    , candidate_rp_list(std::make_shared<Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList>())
{
    group_prefix_xr->parent = this;
    candidate_rp_list->parent = this;

    yang_name = "rp-cache"; yang_parent_name = "rp-caches"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::~RpCache()
{
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::has_data() const
{
    if (is_presence_container) return true;
    return group_prefix.is_set
	|| group_prefix_length.is_set
	|| candidate_rp_group_count.is_set
	|| (group_prefix_xr !=  nullptr && group_prefix_xr->has_data())
	|| (candidate_rp_list !=  nullptr && candidate_rp_list->has_data());
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_prefix.yfilter)
	|| ydk::is_set(group_prefix_length.yfilter)
	|| ydk::is_set(candidate_rp_group_count.yfilter)
	|| (group_prefix_xr !=  nullptr && group_prefix_xr->has_operation())
	|| (candidate_rp_list !=  nullptr && candidate_rp_list->has_operation());
}

std::string Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bsr/rp-caches/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-cache";
    ADD_KEY_TOKEN(group_prefix, "group-prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_prefix.is_set || is_set(group_prefix.yfilter)) leaf_name_data.push_back(group_prefix.get_name_leafdata());
    if (group_prefix_length.is_set || is_set(group_prefix_length.yfilter)) leaf_name_data.push_back(group_prefix_length.get_name_leafdata());
    if (candidate_rp_group_count.is_set || is_set(candidate_rp_group_count.yfilter)) leaf_name_data.push_back(candidate_rp_group_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-prefix-xr")
    {
        if(group_prefix_xr == nullptr)
        {
            group_prefix_xr = std::make_shared<Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr>();
        }
        return group_prefix_xr;
    }

    if(child_yang_name == "candidate-rp-list")
    {
        if(candidate_rp_list == nullptr)
        {
            candidate_rp_list = std::make_shared<Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList>();
        }
        return candidate_rp_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(group_prefix_xr != nullptr)
    {
        children["group-prefix-xr"] = group_prefix_xr;
    }

    if(candidate_rp_list != nullptr)
    {
        children["candidate-rp-list"] = candidate_rp_list;
    }

    return children;
}

void Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-prefix")
    {
        group_prefix = value;
        group_prefix.value_namespace = name_space;
        group_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-prefix-length")
    {
        group_prefix_length = value;
        group_prefix_length.value_namespace = name_space;
        group_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-group-count")
    {
        candidate_rp_group_count = value;
        candidate_rp_group_count.value_namespace = name_space;
        candidate_rp_group_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-prefix")
    {
        group_prefix.yfilter = yfilter;
    }
    if(value_path == "group-prefix-length")
    {
        group_prefix_length.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-group-count")
    {
        candidate_rp_group_count.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-prefix-xr" || name == "candidate-rp-list" || name == "group-prefix" || name == "group-prefix-length" || name == "candidate-rp-group-count")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::GroupPrefixXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-prefix-xr"; yang_parent_name = "rp-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::~GroupPrefixXr()
{
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-prefix-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::CandidateRpList()
    :
    pim_bsr_crp_bag(this, {})
{

    yang_name = "candidate-rp-list"; yang_parent_name = "rp-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::~CandidateRpList()
{
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pim_bsr_crp_bag.len(); index++)
    {
        if(pim_bsr_crp_bag[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::has_operation() const
{
    for (std::size_t index=0; index<pim_bsr_crp_bag.len(); index++)
    {
        if(pim_bsr_crp_bag[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pim-bsr-crp-bag")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag>();
        c->parent = this;
        pim_bsr_crp_bag.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pim_bsr_crp_bag.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pim-bsr-crp-bag")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::PimBsrCrpBag()
    :
    candidate_rp_holdtime{YType::uint16, "candidate-rp-holdtime"},
    candidate_rp_priority{YType::uint8, "candidate-rp-priority"},
    candidate_rp_up_time{YType::uint16, "candidate-rp-up-time"},
    candidate_rp_expires{YType::uint16, "candidate-rp-expires"},
    protocol{YType::enumeration, "protocol"}
        ,
    candidate_rp_address(std::make_shared<Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress>())
{
    candidate_rp_address->parent = this;

    yang_name = "pim-bsr-crp-bag"; yang_parent_name = "candidate-rp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::~PimBsrCrpBag()
{
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::has_data() const
{
    if (is_presence_container) return true;
    return candidate_rp_holdtime.is_set
	|| candidate_rp_priority.is_set
	|| candidate_rp_up_time.is_set
	|| candidate_rp_expires.is_set
	|| protocol.is_set
	|| (candidate_rp_address !=  nullptr && candidate_rp_address->has_data());
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(candidate_rp_holdtime.yfilter)
	|| ydk::is_set(candidate_rp_priority.yfilter)
	|| ydk::is_set(candidate_rp_up_time.yfilter)
	|| ydk::is_set(candidate_rp_expires.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| (candidate_rp_address !=  nullptr && candidate_rp_address->has_operation());
}

std::string Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim-bsr-crp-bag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate_rp_holdtime.is_set || is_set(candidate_rp_holdtime.yfilter)) leaf_name_data.push_back(candidate_rp_holdtime.get_name_leafdata());
    if (candidate_rp_priority.is_set || is_set(candidate_rp_priority.yfilter)) leaf_name_data.push_back(candidate_rp_priority.get_name_leafdata());
    if (candidate_rp_up_time.is_set || is_set(candidate_rp_up_time.yfilter)) leaf_name_data.push_back(candidate_rp_up_time.get_name_leafdata());
    if (candidate_rp_expires.is_set || is_set(candidate_rp_expires.yfilter)) leaf_name_data.push_back(candidate_rp_expires.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-rp-address")
    {
        if(candidate_rp_address == nullptr)
        {
            candidate_rp_address = std::make_shared<Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress>();
        }
        return candidate_rp_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(candidate_rp_address != nullptr)
    {
        children["candidate-rp-address"] = candidate_rp_address;
    }

    return children;
}

void Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "candidate-rp-holdtime")
    {
        candidate_rp_holdtime = value;
        candidate_rp_holdtime.value_namespace = name_space;
        candidate_rp_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-priority")
    {
        candidate_rp_priority = value;
        candidate_rp_priority.value_namespace = name_space;
        candidate_rp_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-up-time")
    {
        candidate_rp_up_time = value;
        candidate_rp_up_time.value_namespace = name_space;
        candidate_rp_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-expires")
    {
        candidate_rp_expires = value;
        candidate_rp_expires.value_namespace = name_space;
        candidate_rp_expires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "candidate-rp-holdtime")
    {
        candidate_rp_holdtime.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-priority")
    {
        candidate_rp_priority.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-up-time")
    {
        candidate_rp_up_time.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-expires")
    {
        candidate_rp_expires.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-rp-address" || name == "candidate-rp-holdtime" || name == "candidate-rp-priority" || name == "candidate-rp-up-time" || name == "candidate-rp-expires" || name == "protocol")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::CandidateRpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "candidate-rp-address"; yang_parent_name = "pim-bsr-crp-bag"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::~CandidateRpAddress()
{
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRps()
    :
    candidate_rp(this, {"rp_address"})
{

    yang_name = "candidate-rps"; yang_parent_name = "bsr"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Bsr::CandidateRps::~CandidateRps()
{
}

bool Pim::Standby::DefaultContext::Bsr::CandidateRps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<candidate_rp.len(); index++)
    {
        if(candidate_rp[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Bsr::CandidateRps::has_operation() const
{
    for (std::size_t index=0; index<candidate_rp.len(); index++)
    {
        if(candidate_rp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::Bsr::CandidateRps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bsr/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Bsr::CandidateRps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Bsr::CandidateRps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::CandidateRps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-rp")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp>();
        c->parent = this;
        candidate_rp.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Bsr::CandidateRps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : candidate_rp.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::Bsr::CandidateRps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::Bsr::CandidateRps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::Bsr::CandidateRps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-rp")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp()
    :
    rp_address{YType::str, "rp-address"},
    candidate_rp_mode{YType::enumeration, "candidate-rp-mode"},
    candidate_rp_scope{YType::int32, "candidate-rp-scope"},
    crp_priority{YType::uint8, "crp-priority"},
    crp_holdtime{YType::uint16, "crp-holdtime"},
    candidate_rp_advance_interval{YType::uint16, "candidate-rp-advance-interval"},
    candidate_rp_uptime{YType::uint16, "candidate-rp-uptime"},
    acl_name{YType::str, "acl-name"}
        ,
    candidate_rp(std::make_shared<Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_>())
    , crp_access(this, {})
{
    candidate_rp->parent = this;

    yang_name = "candidate-rp"; yang_parent_name = "candidate-rps"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::~CandidateRp()
{
}

bool Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<crp_access.len(); index++)
    {
        if(crp_access[index]->has_data())
            return true;
    }
    return rp_address.is_set
	|| candidate_rp_mode.is_set
	|| candidate_rp_scope.is_set
	|| crp_priority.is_set
	|| crp_holdtime.is_set
	|| candidate_rp_advance_interval.is_set
	|| candidate_rp_uptime.is_set
	|| acl_name.is_set
	|| (candidate_rp !=  nullptr && candidate_rp->has_data());
}

bool Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::has_operation() const
{
    for (std::size_t index=0; index<crp_access.len(); index++)
    {
        if(crp_access[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(candidate_rp_mode.yfilter)
	|| ydk::is_set(candidate_rp_scope.yfilter)
	|| ydk::is_set(crp_priority.yfilter)
	|| ydk::is_set(crp_holdtime.yfilter)
	|| ydk::is_set(candidate_rp_advance_interval.yfilter)
	|| ydk::is_set(candidate_rp_uptime.yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| (candidate_rp !=  nullptr && candidate_rp->has_operation());
}

std::string Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bsr/candidate-rps/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp";
    ADD_KEY_TOKEN(rp_address, "rp-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (candidate_rp_mode.is_set || is_set(candidate_rp_mode.yfilter)) leaf_name_data.push_back(candidate_rp_mode.get_name_leafdata());
    if (candidate_rp_scope.is_set || is_set(candidate_rp_scope.yfilter)) leaf_name_data.push_back(candidate_rp_scope.get_name_leafdata());
    if (crp_priority.is_set || is_set(crp_priority.yfilter)) leaf_name_data.push_back(crp_priority.get_name_leafdata());
    if (crp_holdtime.is_set || is_set(crp_holdtime.yfilter)) leaf_name_data.push_back(crp_holdtime.get_name_leafdata());
    if (candidate_rp_advance_interval.is_set || is_set(candidate_rp_advance_interval.yfilter)) leaf_name_data.push_back(candidate_rp_advance_interval.get_name_leafdata());
    if (candidate_rp_uptime.is_set || is_set(candidate_rp_uptime.yfilter)) leaf_name_data.push_back(candidate_rp_uptime.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-rp")
    {
        if(candidate_rp == nullptr)
        {
            candidate_rp = std::make_shared<Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_>();
        }
        return candidate_rp;
    }

    if(child_yang_name == "crp-access")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess>();
        c->parent = this;
        crp_access.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(candidate_rp != nullptr)
    {
        children["candidate-rp"] = candidate_rp;
    }

    count = 0;
    for (auto c : crp_access.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-mode")
    {
        candidate_rp_mode = value;
        candidate_rp_mode.value_namespace = name_space;
        candidate_rp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-scope")
    {
        candidate_rp_scope = value;
        candidate_rp_scope.value_namespace = name_space;
        candidate_rp_scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crp-priority")
    {
        crp_priority = value;
        crp_priority.value_namespace = name_space;
        crp_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crp-holdtime")
    {
        crp_holdtime = value;
        crp_holdtime.value_namespace = name_space;
        crp_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-advance-interval")
    {
        candidate_rp_advance_interval = value;
        candidate_rp_advance_interval.value_namespace = name_space;
        candidate_rp_advance_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-uptime")
    {
        candidate_rp_uptime = value;
        candidate_rp_uptime.value_namespace = name_space;
        candidate_rp_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-mode")
    {
        candidate_rp_mode.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-scope")
    {
        candidate_rp_scope.yfilter = yfilter;
    }
    if(value_path == "crp-priority")
    {
        crp_priority.yfilter = yfilter;
    }
    if(value_path == "crp-holdtime")
    {
        crp_holdtime.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-advance-interval")
    {
        candidate_rp_advance_interval.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-uptime")
    {
        candidate_rp_uptime.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-rp" || name == "crp-access" || name == "rp-address" || name == "candidate-rp-mode" || name == "candidate-rp-scope" || name == "crp-priority" || name == "crp-holdtime" || name == "candidate-rp-advance-interval" || name == "candidate-rp-uptime" || name == "acl-name")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::CandidateRp_()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "candidate-rp"; yang_parent_name = "candidate-rp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::~CandidateRp_()
{
}

bool Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::CrpAccess()
    :
    candidate_rp_mode{YType::enumeration, "candidate-rp-mode"},
    acl_name{YType::str, "acl-name"}
{

    yang_name = "crp-access"; yang_parent_name = "candidate-rp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::~CrpAccess()
{
}

bool Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::has_data() const
{
    if (is_presence_container) return true;
    return candidate_rp_mode.is_set
	|| acl_name.is_set;
}

bool Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(candidate_rp_mode.yfilter)
	|| ydk::is_set(acl_name.yfilter);
}

std::string Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crp-access";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate_rp_mode.is_set || is_set(candidate_rp_mode.yfilter)) leaf_name_data.push_back(candidate_rp_mode.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "candidate-rp-mode")
    {
        candidate_rp_mode = value;
        candidate_rp_mode.value_namespace = name_space;
        candidate_rp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "candidate-rp-mode")
    {
        candidate_rp_mode.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-rp-mode" || name == "acl-name")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElections()
    :
    bsr_election(this, {"pim_scope"})
{

    yang_name = "bsr-elections"; yang_parent_name = "bsr"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Bsr::BsrElections::~BsrElections()
{
}

bool Pim::Standby::DefaultContext::Bsr::BsrElections::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bsr_election.len(); index++)
    {
        if(bsr_election[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Bsr::BsrElections::has_operation() const
{
    for (std::size_t index=0; index<bsr_election.len(); index++)
    {
        if(bsr_election[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::Bsr::BsrElections::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bsr/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Bsr::BsrElections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-elections";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Bsr::BsrElections::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::BsrElections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsr-election")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection>();
        c->parent = this;
        bsr_election.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Bsr::BsrElections::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bsr_election.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::Bsr::BsrElections::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::Bsr::BsrElections::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::Bsr::BsrElections::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-election")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrElection()
    :
    pim_scope{YType::uint32, "pim-scope"},
    bsr_priority{YType::uint8, "bsr-priority"},
    bsr_mask_length{YType::uint8, "bsr-mask-length"},
    bsr_up_time{YType::uint16, "bsr-up-time"},
    bootstrap_timeout{YType::uint16, "bootstrap-timeout"},
    candidate_bsr_state{YType::uint32, "candidate-bsr-state"},
    bsr_election_state{YType::uint32, "bsr-election-state"},
    bsr_scope{YType::uint16, "bsr-scope"},
    candidate_bsr_flag{YType::boolean, "candidate-bsr-flag"},
    candidate_bsr_priority{YType::uint8, "candidate-bsr-priority"},
    candidate_bsr_mask_length{YType::uint8, "candidate-bsr-mask-length"}
        ,
    bsr_address(std::make_shared<Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress>())
    , candidate_bsr_address(std::make_shared<Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress>())
{
    bsr_address->parent = this;
    candidate_bsr_address->parent = this;

    yang_name = "bsr-election"; yang_parent_name = "bsr-elections"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::~BsrElection()
{
}

bool Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::has_data() const
{
    if (is_presence_container) return true;
    return pim_scope.is_set
	|| bsr_priority.is_set
	|| bsr_mask_length.is_set
	|| bsr_up_time.is_set
	|| bootstrap_timeout.is_set
	|| candidate_bsr_state.is_set
	|| bsr_election_state.is_set
	|| bsr_scope.is_set
	|| candidate_bsr_flag.is_set
	|| candidate_bsr_priority.is_set
	|| candidate_bsr_mask_length.is_set
	|| (bsr_address !=  nullptr && bsr_address->has_data())
	|| (candidate_bsr_address !=  nullptr && candidate_bsr_address->has_data());
}

bool Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pim_scope.yfilter)
	|| ydk::is_set(bsr_priority.yfilter)
	|| ydk::is_set(bsr_mask_length.yfilter)
	|| ydk::is_set(bsr_up_time.yfilter)
	|| ydk::is_set(bootstrap_timeout.yfilter)
	|| ydk::is_set(candidate_bsr_state.yfilter)
	|| ydk::is_set(bsr_election_state.yfilter)
	|| ydk::is_set(bsr_scope.yfilter)
	|| ydk::is_set(candidate_bsr_flag.yfilter)
	|| ydk::is_set(candidate_bsr_priority.yfilter)
	|| ydk::is_set(candidate_bsr_mask_length.yfilter)
	|| (bsr_address !=  nullptr && bsr_address->has_operation())
	|| (candidate_bsr_address !=  nullptr && candidate_bsr_address->has_operation());
}

std::string Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bsr/bsr-elections/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-election";
    ADD_KEY_TOKEN(pim_scope, "pim-scope");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pim_scope.is_set || is_set(pim_scope.yfilter)) leaf_name_data.push_back(pim_scope.get_name_leafdata());
    if (bsr_priority.is_set || is_set(bsr_priority.yfilter)) leaf_name_data.push_back(bsr_priority.get_name_leafdata());
    if (bsr_mask_length.is_set || is_set(bsr_mask_length.yfilter)) leaf_name_data.push_back(bsr_mask_length.get_name_leafdata());
    if (bsr_up_time.is_set || is_set(bsr_up_time.yfilter)) leaf_name_data.push_back(bsr_up_time.get_name_leafdata());
    if (bootstrap_timeout.is_set || is_set(bootstrap_timeout.yfilter)) leaf_name_data.push_back(bootstrap_timeout.get_name_leafdata());
    if (candidate_bsr_state.is_set || is_set(candidate_bsr_state.yfilter)) leaf_name_data.push_back(candidate_bsr_state.get_name_leafdata());
    if (bsr_election_state.is_set || is_set(bsr_election_state.yfilter)) leaf_name_data.push_back(bsr_election_state.get_name_leafdata());
    if (bsr_scope.is_set || is_set(bsr_scope.yfilter)) leaf_name_data.push_back(bsr_scope.get_name_leafdata());
    if (candidate_bsr_flag.is_set || is_set(candidate_bsr_flag.yfilter)) leaf_name_data.push_back(candidate_bsr_flag.get_name_leafdata());
    if (candidate_bsr_priority.is_set || is_set(candidate_bsr_priority.yfilter)) leaf_name_data.push_back(candidate_bsr_priority.get_name_leafdata());
    if (candidate_bsr_mask_length.is_set || is_set(candidate_bsr_mask_length.yfilter)) leaf_name_data.push_back(candidate_bsr_mask_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsr-address")
    {
        if(bsr_address == nullptr)
        {
            bsr_address = std::make_shared<Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress>();
        }
        return bsr_address;
    }

    if(child_yang_name == "candidate-bsr-address")
    {
        if(candidate_bsr_address == nullptr)
        {
            candidate_bsr_address = std::make_shared<Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress>();
        }
        return candidate_bsr_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bsr_address != nullptr)
    {
        children["bsr-address"] = bsr_address;
    }

    if(candidate_bsr_address != nullptr)
    {
        children["candidate-bsr-address"] = candidate_bsr_address;
    }

    return children;
}

void Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pim-scope")
    {
        pim_scope = value;
        pim_scope.value_namespace = name_space;
        pim_scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-priority")
    {
        bsr_priority = value;
        bsr_priority.value_namespace = name_space;
        bsr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-mask-length")
    {
        bsr_mask_length = value;
        bsr_mask_length.value_namespace = name_space;
        bsr_mask_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-up-time")
    {
        bsr_up_time = value;
        bsr_up_time.value_namespace = name_space;
        bsr_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bootstrap-timeout")
    {
        bootstrap_timeout = value;
        bootstrap_timeout.value_namespace = name_space;
        bootstrap_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-bsr-state")
    {
        candidate_bsr_state = value;
        candidate_bsr_state.value_namespace = name_space;
        candidate_bsr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-election-state")
    {
        bsr_election_state = value;
        bsr_election_state.value_namespace = name_space;
        bsr_election_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-scope")
    {
        bsr_scope = value;
        bsr_scope.value_namespace = name_space;
        bsr_scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-bsr-flag")
    {
        candidate_bsr_flag = value;
        candidate_bsr_flag.value_namespace = name_space;
        candidate_bsr_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-bsr-priority")
    {
        candidate_bsr_priority = value;
        candidate_bsr_priority.value_namespace = name_space;
        candidate_bsr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-bsr-mask-length")
    {
        candidate_bsr_mask_length = value;
        candidate_bsr_mask_length.value_namespace = name_space;
        candidate_bsr_mask_length.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pim-scope")
    {
        pim_scope.yfilter = yfilter;
    }
    if(value_path == "bsr-priority")
    {
        bsr_priority.yfilter = yfilter;
    }
    if(value_path == "bsr-mask-length")
    {
        bsr_mask_length.yfilter = yfilter;
    }
    if(value_path == "bsr-up-time")
    {
        bsr_up_time.yfilter = yfilter;
    }
    if(value_path == "bootstrap-timeout")
    {
        bootstrap_timeout.yfilter = yfilter;
    }
    if(value_path == "candidate-bsr-state")
    {
        candidate_bsr_state.yfilter = yfilter;
    }
    if(value_path == "bsr-election-state")
    {
        bsr_election_state.yfilter = yfilter;
    }
    if(value_path == "bsr-scope")
    {
        bsr_scope.yfilter = yfilter;
    }
    if(value_path == "candidate-bsr-flag")
    {
        candidate_bsr_flag.yfilter = yfilter;
    }
    if(value_path == "candidate-bsr-priority")
    {
        candidate_bsr_priority.yfilter = yfilter;
    }
    if(value_path == "candidate-bsr-mask-length")
    {
        candidate_bsr_mask_length.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-address" || name == "candidate-bsr-address" || name == "pim-scope" || name == "bsr-priority" || name == "bsr-mask-length" || name == "bsr-up-time" || name == "bootstrap-timeout" || name == "candidate-bsr-state" || name == "bsr-election-state" || name == "bsr-scope" || name == "candidate-bsr-flag" || name == "candidate-bsr-priority" || name == "candidate-bsr-mask-length")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::BsrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "bsr-address"; yang_parent_name = "bsr-election"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::~BsrAddress()
{
}

bool Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::CandidateBsrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "candidate-bsr-address"; yang_parent_name = "bsr-election"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::~CandidateBsrAddress()
{
}

bool Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-bsr-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::RoutePolicy::RoutePolicy()
    :
    route_policy_statistics(std::make_shared<Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics>())
    , route_policy_tests(std::make_shared<Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests>())
{
    route_policy_statistics->parent = this;
    route_policy_tests->parent = this;

    yang_name = "route-policy"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::RoutePolicy::~RoutePolicy()
{
}

bool Pim::Standby::DefaultContext::RoutePolicy::has_data() const
{
    if (is_presence_container) return true;
    return (route_policy_statistics !=  nullptr && route_policy_statistics->has_data())
	|| (route_policy_tests !=  nullptr && route_policy_tests->has_data());
}

bool Pim::Standby::DefaultContext::RoutePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (route_policy_statistics !=  nullptr && route_policy_statistics->has_operation())
	|| (route_policy_tests !=  nullptr && route_policy_tests->has_operation());
}

std::string Pim::Standby::DefaultContext::RoutePolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::RoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::RoutePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::RoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-policy-statistics")
    {
        if(route_policy_statistics == nullptr)
        {
            route_policy_statistics = std::make_shared<Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics>();
        }
        return route_policy_statistics;
    }

    if(child_yang_name == "route-policy-tests")
    {
        if(route_policy_tests == nullptr)
        {
            route_policy_tests = std::make_shared<Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests>();
        }
        return route_policy_tests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::RoutePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_policy_statistics != nullptr)
    {
        children["route-policy-statistics"] = route_policy_statistics;
    }

    if(route_policy_tests != nullptr)
    {
        children["route-policy-tests"] = route_policy_tests;
    }

    return children;
}

void Pim::Standby::DefaultContext::RoutePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::RoutePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::RoutePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-statistics" || name == "route-policy-tests")
        return true;
    return false;
}

Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics::RoutePolicyStatistics()
    :
    policy_name{YType::str, "policy-name"},
    requests{YType::uint32, "requests"},
    pass{YType::uint32, "pass"},
    drop{YType::uint32, "drop"},
    default_table{YType::uint32, "default-table"},
    any_table{YType::uint32, "any-table"}
{

    yang_name = "route-policy-statistics"; yang_parent_name = "route-policy"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics::~RoutePolicyStatistics()
{
}

bool Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics::has_data() const
{
    if (is_presence_container) return true;
    return policy_name.is_set
	|| requests.is_set
	|| pass.is_set
	|| drop.is_set
	|| default_table.is_set
	|| any_table.is_set;
}

bool Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(requests.yfilter)
	|| ydk::is_set(pass.yfilter)
	|| ydk::is_set(drop.yfilter)
	|| ydk::is_set(default_table.yfilter)
	|| ydk::is_set(any_table.yfilter);
}

std::string Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/route-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());
    if (pass.is_set || is_set(pass.yfilter)) leaf_name_data.push_back(pass.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (default_table.is_set || is_set(default_table.yfilter)) leaf_name_data.push_back(default_table.get_name_leafdata());
    if (any_table.is_set || is_set(any_table.yfilter)) leaf_name_data.push_back(any_table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requests")
    {
        requests = value;
        requests.value_namespace = name_space;
        requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pass")
    {
        pass = value;
        pass.value_namespace = name_space;
        pass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-table")
    {
        default_table = value;
        default_table.value_namespace = name_space;
        default_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any-table")
    {
        any_table = value;
        any_table.value_namespace = name_space;
        any_table.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "requests")
    {
        requests.yfilter = yfilter;
    }
    if(value_path == "pass")
    {
        pass.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
    if(value_path == "default-table")
    {
        default_table.yfilter = yfilter;
    }
    if(value_path == "any-table")
    {
        any_table.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name" || name == "requests" || name == "pass" || name == "drop" || name == "default-table" || name == "any-table")
        return true;
    return false;
}

Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTests()
    :
    route_policy_test(this, {})
{

    yang_name = "route-policy-tests"; yang_parent_name = "route-policy"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::~RoutePolicyTests()
{
}

bool Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<route_policy_test.len(); index++)
    {
        if(route_policy_test[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::has_operation() const
{
    for (std::size_t index=0; index<route_policy_test.len(); index++)
    {
        if(route_policy_test[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/route-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy-tests";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-policy-test")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest>();
        c->parent = this;
        route_policy_test.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : route_policy_test.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-test")
        return true;
    return false;
}

Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::RoutePolicyTest()
    :
    source_address{YType::str, "source-address"},
    group_address{YType::str, "group-address"},
    ext_comm{YType::str, "ext-comm"},
    policy_name{YType::str, "policy-name"},
    extended_community_rt{YType::str, "extended-community-rt"},
    pass{YType::boolean, "pass"},
    default_table{YType::boolean, "default-table"},
    vrf_name{YType::str, "vrf-name"},
    afi{YType::uint32, "afi"},
    safi{YType::uint32, "safi"},
    table_name{YType::str, "table-name"},
    table_exists{YType::boolean, "table-exists"},
    table_active{YType::boolean, "table-active"}
        ,
    source_address_xr(std::make_shared<Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr>())
    , group_address_xr(std::make_shared<Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr>())
{
    source_address_xr->parent = this;
    group_address_xr->parent = this;

    yang_name = "route-policy-test"; yang_parent_name = "route-policy-tests"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::~RoutePolicyTest()
{
}

bool Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| group_address.is_set
	|| ext_comm.is_set
	|| policy_name.is_set
	|| extended_community_rt.is_set
	|| pass.is_set
	|| default_table.is_set
	|| vrf_name.is_set
	|| afi.is_set
	|| safi.is_set
	|| table_name.is_set
	|| table_exists.is_set
	|| table_active.is_set
	|| (source_address_xr !=  nullptr && source_address_xr->has_data())
	|| (group_address_xr !=  nullptr && group_address_xr->has_data());
}

bool Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(ext_comm.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(extended_community_rt.yfilter)
	|| ydk::is_set(pass.yfilter)
	|| ydk::is_set(default_table.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(safi.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(table_exists.yfilter)
	|| ydk::is_set(table_active.yfilter)
	|| (source_address_xr !=  nullptr && source_address_xr->has_operation())
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/route-policy/route-policy-tests/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy-test";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (ext_comm.is_set || is_set(ext_comm.yfilter)) leaf_name_data.push_back(ext_comm.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (extended_community_rt.is_set || is_set(extended_community_rt.yfilter)) leaf_name_data.push_back(extended_community_rt.get_name_leafdata());
    if (pass.is_set || is_set(pass.yfilter)) leaf_name_data.push_back(pass.get_name_leafdata());
    if (default_table.is_set || is_set(default_table.yfilter)) leaf_name_data.push_back(default_table.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (safi.is_set || is_set(safi.yfilter)) leaf_name_data.push_back(safi.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (table_exists.is_set || is_set(table_exists.yfilter)) leaf_name_data.push_back(table_exists.get_name_leafdata());
    if (table_active.is_set || is_set(table_active.yfilter)) leaf_name_data.push_back(table_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-address-xr")
    {
        if(source_address_xr == nullptr)
        {
            source_address_xr = std::make_shared<Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr>();
        }
        return source_address_xr;
    }

    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr>();
        }
        return group_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source_address_xr != nullptr)
    {
        children["source-address-xr"] = source_address_xr;
    }

    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    return children;
}

void Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ext-comm")
    {
        ext_comm = value;
        ext_comm.value_namespace = name_space;
        ext_comm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-rt")
    {
        extended_community_rt = value;
        extended_community_rt.value_namespace = name_space;
        extended_community_rt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pass")
    {
        pass = value;
        pass.value_namespace = name_space;
        pass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-table")
    {
        default_table = value;
        default_table.value_namespace = name_space;
        default_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safi")
    {
        safi = value;
        safi.value_namespace = name_space;
        safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-exists")
    {
        table_exists = value;
        table_exists.value_namespace = name_space;
        table_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-active")
    {
        table_active = value;
        table_active.value_namespace = name_space;
        table_active.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "ext-comm")
    {
        ext_comm.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "extended-community-rt")
    {
        extended_community_rt.yfilter = yfilter;
    }
    if(value_path == "pass")
    {
        pass.yfilter = yfilter;
    }
    if(value_path == "default-table")
    {
        default_table.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "safi")
    {
        safi.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "table-exists")
    {
        table_exists.yfilter = yfilter;
    }
    if(value_path == "table-active")
    {
        table_active.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address-xr" || name == "group-address-xr" || name == "source-address" || name == "group-address" || name == "ext-comm" || name == "policy-name" || name == "extended-community-rt" || name == "pass" || name == "default-table" || name == "vrf-name" || name == "afi" || name == "safi" || name == "table-name" || name == "table-exists" || name == "table-active")
        return true;
    return false;
}

Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::SourceAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address-xr"; yang_parent_name = "route-policy-test"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::~SourceAddressXr()
{
}

bool Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/route-policy/route-policy-tests/route-policy-test/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "route-policy-test"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::~GroupAddressXr()
{
}

bool Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/route-policy/route-policy-tests/route-policy-test/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::RpfSummary::RpfSummary()
    :
    default_safi{YType::uint32, "default-safi"},
    default_table_name{YType::str, "default-table-name"},
    is_mbgp_configured{YType::boolean, "is-mbgp-configured"},
    is_ospf_te_configured{YType::boolean, "is-ospf-te-configured"},
    is_isis_te_configured{YType::boolean, "is-isis-te-configured"},
    is_isis_mtr_configured{YType::boolean, "is-isis-mtr-configured"},
    mo_frr_configured{YType::boolean, "mo-frr-configured"},
    rib_mo_frr_configured{YType::boolean, "rib-mo-frr-configured"},
    rump_enabled{YType::boolean, "rump-enabled"},
    rib_convergence_timeout{YType::uint32, "rib-convergence-timeout"},
    rib_convergence_time_left{YType::uint32, "rib-convergence-time-left"},
    is_multipath_enabled{YType::boolean, "is-multipath-enabled"},
    is_multipath_interface_hash_enabled{YType::boolean, "is-multipath-interface-hash-enabled"},
    is_multipath_source_hash_enabled{YType::boolean, "is-multipath-source-hash-enabled"},
    is_multipath_source_next_hop_hash_enabled{YType::boolean, "is-multipath-source-next-hop-hash-enabled"},
    rpf_registrations{YType::uint32, "rpf-registrations"},
    is_rib_convergence{YType::boolean, "is-rib-convergence"}
{

    yang_name = "rpf-summary"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::RpfSummary::~RpfSummary()
{
}

bool Pim::Standby::DefaultContext::RpfSummary::has_data() const
{
    if (is_presence_container) return true;
    return default_safi.is_set
	|| default_table_name.is_set
	|| is_mbgp_configured.is_set
	|| is_ospf_te_configured.is_set
	|| is_isis_te_configured.is_set
	|| is_isis_mtr_configured.is_set
	|| mo_frr_configured.is_set
	|| rib_mo_frr_configured.is_set
	|| rump_enabled.is_set
	|| rib_convergence_timeout.is_set
	|| rib_convergence_time_left.is_set
	|| is_multipath_enabled.is_set
	|| is_multipath_interface_hash_enabled.is_set
	|| is_multipath_source_hash_enabled.is_set
	|| is_multipath_source_next_hop_hash_enabled.is_set
	|| rpf_registrations.is_set
	|| is_rib_convergence.is_set;
}

bool Pim::Standby::DefaultContext::RpfSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_safi.yfilter)
	|| ydk::is_set(default_table_name.yfilter)
	|| ydk::is_set(is_mbgp_configured.yfilter)
	|| ydk::is_set(is_ospf_te_configured.yfilter)
	|| ydk::is_set(is_isis_te_configured.yfilter)
	|| ydk::is_set(is_isis_mtr_configured.yfilter)
	|| ydk::is_set(mo_frr_configured.yfilter)
	|| ydk::is_set(rib_mo_frr_configured.yfilter)
	|| ydk::is_set(rump_enabled.yfilter)
	|| ydk::is_set(rib_convergence_timeout.yfilter)
	|| ydk::is_set(rib_convergence_time_left.yfilter)
	|| ydk::is_set(is_multipath_enabled.yfilter)
	|| ydk::is_set(is_multipath_interface_hash_enabled.yfilter)
	|| ydk::is_set(is_multipath_source_hash_enabled.yfilter)
	|| ydk::is_set(is_multipath_source_next_hop_hash_enabled.yfilter)
	|| ydk::is_set(rpf_registrations.yfilter)
	|| ydk::is_set(is_rib_convergence.yfilter);
}

std::string Pim::Standby::DefaultContext::RpfSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::RpfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::RpfSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_safi.is_set || is_set(default_safi.yfilter)) leaf_name_data.push_back(default_safi.get_name_leafdata());
    if (default_table_name.is_set || is_set(default_table_name.yfilter)) leaf_name_data.push_back(default_table_name.get_name_leafdata());
    if (is_mbgp_configured.is_set || is_set(is_mbgp_configured.yfilter)) leaf_name_data.push_back(is_mbgp_configured.get_name_leafdata());
    if (is_ospf_te_configured.is_set || is_set(is_ospf_te_configured.yfilter)) leaf_name_data.push_back(is_ospf_te_configured.get_name_leafdata());
    if (is_isis_te_configured.is_set || is_set(is_isis_te_configured.yfilter)) leaf_name_data.push_back(is_isis_te_configured.get_name_leafdata());
    if (is_isis_mtr_configured.is_set || is_set(is_isis_mtr_configured.yfilter)) leaf_name_data.push_back(is_isis_mtr_configured.get_name_leafdata());
    if (mo_frr_configured.is_set || is_set(mo_frr_configured.yfilter)) leaf_name_data.push_back(mo_frr_configured.get_name_leafdata());
    if (rib_mo_frr_configured.is_set || is_set(rib_mo_frr_configured.yfilter)) leaf_name_data.push_back(rib_mo_frr_configured.get_name_leafdata());
    if (rump_enabled.is_set || is_set(rump_enabled.yfilter)) leaf_name_data.push_back(rump_enabled.get_name_leafdata());
    if (rib_convergence_timeout.is_set || is_set(rib_convergence_timeout.yfilter)) leaf_name_data.push_back(rib_convergence_timeout.get_name_leafdata());
    if (rib_convergence_time_left.is_set || is_set(rib_convergence_time_left.yfilter)) leaf_name_data.push_back(rib_convergence_time_left.get_name_leafdata());
    if (is_multipath_enabled.is_set || is_set(is_multipath_enabled.yfilter)) leaf_name_data.push_back(is_multipath_enabled.get_name_leafdata());
    if (is_multipath_interface_hash_enabled.is_set || is_set(is_multipath_interface_hash_enabled.yfilter)) leaf_name_data.push_back(is_multipath_interface_hash_enabled.get_name_leafdata());
    if (is_multipath_source_hash_enabled.is_set || is_set(is_multipath_source_hash_enabled.yfilter)) leaf_name_data.push_back(is_multipath_source_hash_enabled.get_name_leafdata());
    if (is_multipath_source_next_hop_hash_enabled.is_set || is_set(is_multipath_source_next_hop_hash_enabled.yfilter)) leaf_name_data.push_back(is_multipath_source_next_hop_hash_enabled.get_name_leafdata());
    if (rpf_registrations.is_set || is_set(rpf_registrations.yfilter)) leaf_name_data.push_back(rpf_registrations.get_name_leafdata());
    if (is_rib_convergence.is_set || is_set(is_rib_convergence.yfilter)) leaf_name_data.push_back(is_rib_convergence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::RpfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::RpfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::RpfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-safi")
    {
        default_safi = value;
        default_safi.value_namespace = name_space;
        default_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-table-name")
    {
        default_table_name = value;
        default_table_name.value_namespace = name_space;
        default_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mbgp-configured")
    {
        is_mbgp_configured = value;
        is_mbgp_configured.value_namespace = name_space;
        is_mbgp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ospf-te-configured")
    {
        is_ospf_te_configured = value;
        is_ospf_te_configured.value_namespace = name_space;
        is_ospf_te_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-isis-te-configured")
    {
        is_isis_te_configured = value;
        is_isis_te_configured.value_namespace = name_space;
        is_isis_te_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-isis-mtr-configured")
    {
        is_isis_mtr_configured = value;
        is_isis_mtr_configured.value_namespace = name_space;
        is_isis_mtr_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mo-frr-configured")
    {
        mo_frr_configured = value;
        mo_frr_configured.value_namespace = name_space;
        mo_frr_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-mo-frr-configured")
    {
        rib_mo_frr_configured = value;
        rib_mo_frr_configured.value_namespace = name_space;
        rib_mo_frr_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rump-enabled")
    {
        rump_enabled = value;
        rump_enabled.value_namespace = name_space;
        rump_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-convergence-timeout")
    {
        rib_convergence_timeout = value;
        rib_convergence_timeout.value_namespace = name_space;
        rib_convergence_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-convergence-time-left")
    {
        rib_convergence_time_left = value;
        rib_convergence_time_left.value_namespace = name_space;
        rib_convergence_time_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multipath-enabled")
    {
        is_multipath_enabled = value;
        is_multipath_enabled.value_namespace = name_space;
        is_multipath_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multipath-interface-hash-enabled")
    {
        is_multipath_interface_hash_enabled = value;
        is_multipath_interface_hash_enabled.value_namespace = name_space;
        is_multipath_interface_hash_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multipath-source-hash-enabled")
    {
        is_multipath_source_hash_enabled = value;
        is_multipath_source_hash_enabled.value_namespace = name_space;
        is_multipath_source_hash_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multipath-source-next-hop-hash-enabled")
    {
        is_multipath_source_next_hop_hash_enabled = value;
        is_multipath_source_next_hop_hash_enabled.value_namespace = name_space;
        is_multipath_source_next_hop_hash_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations = value;
        rpf_registrations.value_namespace = name_space;
        rpf_registrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence = value;
        is_rib_convergence.value_namespace = name_space;
        is_rib_convergence.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::RpfSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-safi")
    {
        default_safi.yfilter = yfilter;
    }
    if(value_path == "default-table-name")
    {
        default_table_name.yfilter = yfilter;
    }
    if(value_path == "is-mbgp-configured")
    {
        is_mbgp_configured.yfilter = yfilter;
    }
    if(value_path == "is-ospf-te-configured")
    {
        is_ospf_te_configured.yfilter = yfilter;
    }
    if(value_path == "is-isis-te-configured")
    {
        is_isis_te_configured.yfilter = yfilter;
    }
    if(value_path == "is-isis-mtr-configured")
    {
        is_isis_mtr_configured.yfilter = yfilter;
    }
    if(value_path == "mo-frr-configured")
    {
        mo_frr_configured.yfilter = yfilter;
    }
    if(value_path == "rib-mo-frr-configured")
    {
        rib_mo_frr_configured.yfilter = yfilter;
    }
    if(value_path == "rump-enabled")
    {
        rump_enabled.yfilter = yfilter;
    }
    if(value_path == "rib-convergence-timeout")
    {
        rib_convergence_timeout.yfilter = yfilter;
    }
    if(value_path == "rib-convergence-time-left")
    {
        rib_convergence_time_left.yfilter = yfilter;
    }
    if(value_path == "is-multipath-enabled")
    {
        is_multipath_enabled.yfilter = yfilter;
    }
    if(value_path == "is-multipath-interface-hash-enabled")
    {
        is_multipath_interface_hash_enabled.yfilter = yfilter;
    }
    if(value_path == "is-multipath-source-hash-enabled")
    {
        is_multipath_source_hash_enabled.yfilter = yfilter;
    }
    if(value_path == "is-multipath-source-next-hop-hash-enabled")
    {
        is_multipath_source_next_hop_hash_enabled.yfilter = yfilter;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations.yfilter = yfilter;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::RpfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-safi" || name == "default-table-name" || name == "is-mbgp-configured" || name == "is-ospf-te-configured" || name == "is-isis-te-configured" || name == "is-isis-mtr-configured" || name == "mo-frr-configured" || name == "rib-mo-frr-configured" || name == "rump-enabled" || name == "rib-convergence-timeout" || name == "rib-convergence-time-left" || name == "is-multipath-enabled" || name == "is-multipath-interface-hash-enabled" || name == "is-multipath-source-hash-enabled" || name == "is-multipath-source-next-hop-hash-enabled" || name == "rpf-registrations" || name == "is-rib-convergence")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Interfaces::~Interfaces()
{
}

bool Pim::Standby::DefaultContext::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::Interfaces::Interface>();
        c->parent = this;
        interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface_address_mask{YType::uint8, "interface-address-mask"},
    is_enabled{YType::boolean, "is-enabled"},
    neighbor_count{YType::uint16, "neighbor-count"},
    external_neighbor_count{YType::uint16, "external-neighbor-count"},
    hello_interval{YType::uint16, "hello-interval"},
    dr_priority{YType::uint32, "dr-priority"},
    hello_expiry{YType::uint64, "hello-expiry"},
    are_we_dr{YType::boolean, "are-we-dr"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    virtual_interface{YType::boolean, "virtual-interface"},
    passive_interface{YType::boolean, "passive-interface"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    join_prune_interval{YType::uint16, "join-prune-interval"},
    prune_delay_enabled{YType::boolean, "prune-delay-enabled"},
    configured_propagation_delay{YType::uint16, "configured-propagation-delay"},
    propagation_delay{YType::uint16, "propagation-delay"},
    configured_override_interval{YType::uint16, "configured-override-interval"},
    override_interval{YType::uint16, "override-interval"},
    generation_id{YType::uint32, "generation-id"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    idb_oor_enabled{YType::boolean, "idb-oor-enabled"},
    idb_acl_provided{YType::boolean, "idb-acl-provided"},
    idb_max_count{YType::uint32, "idb-max-count"},
    idb_threshold_count{YType::uint32, "idb-threshold-count"},
    idb_current_count{YType::uint32, "idb-current-count"},
    idb_acl_name{YType::str, "idb-acl-name"}
        ,
    dr_address(std::make_shared<Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress>())
    , interface_address(this, {})
{
    dr_address->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Interfaces::Interface::~Interface()
{
}

bool Pim::Standby::DefaultContext::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_address.len(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| interface_address_mask.is_set
	|| is_enabled.is_set
	|| neighbor_count.is_set
	|| external_neighbor_count.is_set
	|| hello_interval.is_set
	|| dr_priority.is_set
	|| hello_expiry.is_set
	|| are_we_dr.is_set
	|| bfd_enabled.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| virtual_interface.is_set
	|| passive_interface.is_set
	|| neighbor_filter_name.is_set
	|| join_prune_interval.is_set
	|| prune_delay_enabled.is_set
	|| configured_propagation_delay.is_set
	|| propagation_delay.is_set
	|| configured_override_interval.is_set
	|| override_interval.is_set
	|| generation_id.is_set
	|| is_bidirectional_capable.is_set
	|| is_proxy_capable.is_set
	|| is_batch_asserts_capable.is_set
	|| idb_oor_enabled.is_set
	|| idb_acl_provided.is_set
	|| idb_max_count.is_set
	|| idb_threshold_count.is_set
	|| idb_current_count.is_set
	|| idb_acl_name.is_set
	|| (dr_address !=  nullptr && dr_address->has_data());
}

bool Pim::Standby::DefaultContext::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<interface_address.len(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface_address_mask.yfilter)
	|| ydk::is_set(is_enabled.yfilter)
	|| ydk::is_set(neighbor_count.yfilter)
	|| ydk::is_set(external_neighbor_count.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(hello_expiry.yfilter)
	|| ydk::is_set(are_we_dr.yfilter)
	|| ydk::is_set(bfd_enabled.yfilter)
	|| ydk::is_set(bfd_interval.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(virtual_interface.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(neighbor_filter_name.yfilter)
	|| ydk::is_set(join_prune_interval.yfilter)
	|| ydk::is_set(prune_delay_enabled.yfilter)
	|| ydk::is_set(configured_propagation_delay.yfilter)
	|| ydk::is_set(propagation_delay.yfilter)
	|| ydk::is_set(configured_override_interval.yfilter)
	|| ydk::is_set(override_interval.yfilter)
	|| ydk::is_set(generation_id.yfilter)
	|| ydk::is_set(is_bidirectional_capable.yfilter)
	|| ydk::is_set(is_proxy_capable.yfilter)
	|| ydk::is_set(is_batch_asserts_capable.yfilter)
	|| ydk::is_set(idb_oor_enabled.yfilter)
	|| ydk::is_set(idb_acl_provided.yfilter)
	|| ydk::is_set(idb_max_count.yfilter)
	|| ydk::is_set(idb_threshold_count.yfilter)
	|| ydk::is_set(idb_current_count.yfilter)
	|| ydk::is_set(idb_acl_name.yfilter)
	|| (dr_address !=  nullptr && dr_address->has_operation());
}

std::string Pim::Standby::DefaultContext::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface_address_mask.is_set || is_set(interface_address_mask.yfilter)) leaf_name_data.push_back(interface_address_mask.get_name_leafdata());
    if (is_enabled.is_set || is_set(is_enabled.yfilter)) leaf_name_data.push_back(is_enabled.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.yfilter)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (external_neighbor_count.is_set || is_set(external_neighbor_count.yfilter)) leaf_name_data.push_back(external_neighbor_count.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (hello_expiry.is_set || is_set(hello_expiry.yfilter)) leaf_name_data.push_back(hello_expiry.get_name_leafdata());
    if (are_we_dr.is_set || is_set(are_we_dr.yfilter)) leaf_name_data.push_back(are_we_dr.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.yfilter)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.yfilter)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.yfilter)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.yfilter)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (join_prune_interval.is_set || is_set(join_prune_interval.yfilter)) leaf_name_data.push_back(join_prune_interval.get_name_leafdata());
    if (prune_delay_enabled.is_set || is_set(prune_delay_enabled.yfilter)) leaf_name_data.push_back(prune_delay_enabled.get_name_leafdata());
    if (configured_propagation_delay.is_set || is_set(configured_propagation_delay.yfilter)) leaf_name_data.push_back(configured_propagation_delay.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (configured_override_interval.is_set || is_set(configured_override_interval.yfilter)) leaf_name_data.push_back(configured_override_interval.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (generation_id.is_set || is_set(generation_id.yfilter)) leaf_name_data.push_back(generation_id.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.yfilter)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.yfilter)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.yfilter)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (idb_oor_enabled.is_set || is_set(idb_oor_enabled.yfilter)) leaf_name_data.push_back(idb_oor_enabled.get_name_leafdata());
    if (idb_acl_provided.is_set || is_set(idb_acl_provided.yfilter)) leaf_name_data.push_back(idb_acl_provided.get_name_leafdata());
    if (idb_max_count.is_set || is_set(idb_max_count.yfilter)) leaf_name_data.push_back(idb_max_count.get_name_leafdata());
    if (idb_threshold_count.is_set || is_set(idb_threshold_count.yfilter)) leaf_name_data.push_back(idb_threshold_count.get_name_leafdata());
    if (idb_current_count.is_set || is_set(idb_current_count.yfilter)) leaf_name_data.push_back(idb_current_count.get_name_leafdata());
    if (idb_acl_name.is_set || is_set(idb_acl_name.yfilter)) leaf_name_data.push_back(idb_acl_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dr-address")
    {
        if(dr_address == nullptr)
        {
            dr_address = std::make_shared<Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress>();
        }
        return dr_address;
    }

    if(child_yang_name == "interface-address")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress>();
        c->parent = this;
        interface_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dr_address != nullptr)
    {
        children["dr-address"] = dr_address;
    }

    count = 0;
    for (auto c : interface_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "interface-address-mask")
    {
        interface_address_mask = value;
        interface_address_mask.value_namespace = name_space;
        interface_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-enabled")
    {
        is_enabled = value;
        is_enabled.value_namespace = name_space;
        is_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
        neighbor_count.value_namespace = name_space;
        neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count = value;
        external_neighbor_count.value_namespace = name_space;
        external_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry = value;
        hello_expiry.value_namespace = name_space;
        hello_expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr = value;
        are_we_dr.value_namespace = name_space;
        are_we_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
        bfd_enabled.value_namespace = name_space;
        bfd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
        bfd_interval.value_namespace = name_space;
        bfd_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
        virtual_interface.value_namespace = name_space;
        virtual_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
        neighbor_filter_name.value_namespace = name_space;
        neighbor_filter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval = value;
        join_prune_interval.value_namespace = name_space;
        join_prune_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled = value;
        prune_delay_enabled.value_namespace = name_space;
        prune_delay_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay = value;
        configured_propagation_delay.value_namespace = name_space;
        configured_propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval = value;
        configured_override_interval.value_namespace = name_space;
        configured_override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation-id")
    {
        generation_id = value;
        generation_id.value_namespace = name_space;
        generation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
        is_bidirectional_capable.value_namespace = name_space;
        is_bidirectional_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
        is_proxy_capable.value_namespace = name_space;
        is_proxy_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
        is_batch_asserts_capable.value_namespace = name_space;
        is_batch_asserts_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled = value;
        idb_oor_enabled.value_namespace = name_space;
        idb_oor_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided = value;
        idb_acl_provided.value_namespace = name_space;
        idb_acl_provided.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count = value;
        idb_max_count.value_namespace = name_space;
        idb_max_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count = value;
        idb_threshold_count.value_namespace = name_space;
        idb_threshold_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count = value;
        idb_current_count.value_namespace = name_space;
        idb_current_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name = value;
        idb_acl_name.value_namespace = name_space;
        idb_acl_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask.yfilter = yfilter;
    }
    if(value_path == "is-enabled")
    {
        is_enabled.yfilter = yfilter;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count.yfilter = yfilter;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry.yfilter = yfilter;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr.yfilter = yfilter;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled.yfilter = yfilter;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name.yfilter = yfilter;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval.yfilter = yfilter;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled.yfilter = yfilter;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
    if(value_path == "generation-id")
    {
        generation_id.yfilter = yfilter;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable.yfilter = yfilter;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable.yfilter = yfilter;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable.yfilter = yfilter;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled.yfilter = yfilter;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided.yfilter = yfilter;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count.yfilter = yfilter;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count.yfilter = yfilter;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count.yfilter = yfilter;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dr-address" || name == "interface-address" || name == "interface-name" || name == "interface-name-xr" || name == "interface-address-mask" || name == "is-enabled" || name == "neighbor-count" || name == "external-neighbor-count" || name == "hello-interval" || name == "dr-priority" || name == "hello-expiry" || name == "are-we-dr" || name == "bfd-enabled" || name == "bfd-interval" || name == "bfd-multiplier" || name == "virtual-interface" || name == "passive-interface" || name == "neighbor-filter-name" || name == "join-prune-interval" || name == "prune-delay-enabled" || name == "configured-propagation-delay" || name == "propagation-delay" || name == "configured-override-interval" || name == "override-interval" || name == "generation-id" || name == "is-bidirectional-capable" || name == "is-proxy-capable" || name == "is-batch-asserts-capable" || name == "idb-oor-enabled" || name == "idb-acl-provided" || name == "idb-max-count" || name == "idb-threshold-count" || name == "idb-current-count" || name == "idb-acl-name")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress::DrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "dr-address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress::~DrAddress()
{
}

bool Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dr-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress::InterfaceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "interface-address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress::~InterfaceAddress()
{
}

bool Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnels()
    :
    net_io_tunnel(this, {"tunnel_name"})
{

    yang_name = "net-io-tunnels"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::NetIoTunnels::~NetIoTunnels()
{
}

bool Pim::Standby::DefaultContext::NetIoTunnels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<net_io_tunnel.len(); index++)
    {
        if(net_io_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::NetIoTunnels::has_operation() const
{
    for (std::size_t index=0; index<net_io_tunnel.len(); index++)
    {
        if(net_io_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::NetIoTunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::NetIoTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "net-io-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::NetIoTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::NetIoTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "net-io-tunnel")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel>();
        c->parent = this;
        net_io_tunnel.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::NetIoTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : net_io_tunnel.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::NetIoTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::NetIoTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::NetIoTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "net-io-tunnel")
        return true;
    return false;
}

Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::NetIoTunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    vrf_name{YType::str, "vrf-name"}
        ,
    source_address(std::make_shared<Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress>())
    , rp_address(std::make_shared<Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress>())
    , source_address_netio(std::make_shared<Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio>())
    , group_address_netio(std::make_shared<Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio>())
{
    source_address->parent = this;
    rp_address->parent = this;
    source_address_netio->parent = this;
    group_address_netio->parent = this;

    yang_name = "net-io-tunnel"; yang_parent_name = "net-io-tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::~NetIoTunnel()
{
}

bool Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_name.is_set
	|| vrf_name.is_set
	|| (source_address !=  nullptr && source_address->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address_netio !=  nullptr && source_address_netio->has_data())
	|| (group_address_netio !=  nullptr && group_address_netio->has_data());
}

bool Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address_netio !=  nullptr && source_address_netio->has_operation())
	|| (group_address_netio !=  nullptr && group_address_netio->has_operation());
}

std::string Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/net-io-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "net-io-tunnel";
    ADD_KEY_TOKEN(tunnel_name, "tunnel-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address-netio")
    {
        if(source_address_netio == nullptr)
        {
            source_address_netio = std::make_shared<Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio>();
        }
        return source_address_netio;
    }

    if(child_yang_name == "group-address-netio")
    {
        if(group_address_netio == nullptr)
        {
            group_address_netio = std::make_shared<Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio>();
        }
        return group_address_netio;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address_netio != nullptr)
    {
        children["source-address-netio"] = source_address_netio;
    }

    if(group_address_netio != nullptr)
    {
        children["group-address-netio"] = group_address_netio;
    }

    return children;
}

void Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "rp-address" || name == "source-address-netio" || name == "group-address-netio" || name == "tunnel-name" || name == "vrf-name")
        return true;
    return false;
}

Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "net-io-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::~SourceAddress()
{
}

bool Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "net-io-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::~RpAddress()
{
}

bool Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::SourceAddressNetio()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address-netio"; yang_parent_name = "net-io-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::~SourceAddressNetio()
{
}

bool Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-netio";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::GroupAddressNetio()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-netio"; yang_parent_name = "net-io-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::~GroupAddressNetio()
{
}

bool Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-netio";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::BidirDfStates::BidirDfStates()
    :
    bidir_df_state(this, {})
{

    yang_name = "bidir-df-states"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::BidirDfStates::~BidirDfStates()
{
}

bool Pim::Standby::DefaultContext::BidirDfStates::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bidir_df_state.len(); index++)
    {
        if(bidir_df_state[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::BidirDfStates::has_operation() const
{
    for (std::size_t index=0; index<bidir_df_state.len(); index++)
    {
        if(bidir_df_state[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::BidirDfStates::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::BidirDfStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-df-states";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::BidirDfStates::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BidirDfStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bidir-df-state")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::BidirDfStates::BidirDfState>();
        c->parent = this;
        bidir_df_state.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::BidirDfStates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bidir_df_state.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::BidirDfStates::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::BidirDfStates::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::BidirDfStates::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bidir-df-state")
        return true;
    return false;
}

Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::BidirDfState()
    :
    rp_address{YType::str, "rp-address"},
    interface_name{YType::str, "interface-name"},
    pim_interface_name{YType::str, "pim-interface-name"},
    election_state{YType::str, "election-state"},
    time_seconds{YType::uint64, "time-seconds"},
    time_nano_seconds{YType::uint64, "time-nano-seconds"},
    our_metric{YType::uint32, "our-metric"},
    our_metric_preference{YType::uint32, "our-metric-preference"}
        ,
    rp_address_xr(std::make_shared<Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr>())
{
    rp_address_xr->parent = this;

    yang_name = "bidir-df-state"; yang_parent_name = "bidir-df-states"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::~BidirDfState()
{
}

bool Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::has_data() const
{
    if (is_presence_container) return true;
    return rp_address.is_set
	|| interface_name.is_set
	|| pim_interface_name.is_set
	|| election_state.is_set
	|| time_seconds.is_set
	|| time_nano_seconds.is_set
	|| our_metric.is_set
	|| our_metric_preference.is_set
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_data());
}

bool Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(pim_interface_name.yfilter)
	|| ydk::is_set(election_state.yfilter)
	|| ydk::is_set(time_seconds.yfilter)
	|| ydk::is_set(time_nano_seconds.yfilter)
	|| ydk::is_set(our_metric.yfilter)
	|| ydk::is_set(our_metric_preference.yfilter)
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_operation());
}

std::string Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bidir-df-states/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-df-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (pim_interface_name.is_set || is_set(pim_interface_name.yfilter)) leaf_name_data.push_back(pim_interface_name.get_name_leafdata());
    if (election_state.is_set || is_set(election_state.yfilter)) leaf_name_data.push_back(election_state.get_name_leafdata());
    if (time_seconds.is_set || is_set(time_seconds.yfilter)) leaf_name_data.push_back(time_seconds.get_name_leafdata());
    if (time_nano_seconds.is_set || is_set(time_nano_seconds.yfilter)) leaf_name_data.push_back(time_nano_seconds.get_name_leafdata());
    if (our_metric.is_set || is_set(our_metric.yfilter)) leaf_name_data.push_back(our_metric.get_name_leafdata());
    if (our_metric_preference.is_set || is_set(our_metric_preference.yfilter)) leaf_name_data.push_back(our_metric_preference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address-xr")
    {
        if(rp_address_xr == nullptr)
        {
            rp_address_xr = std::make_shared<Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr>();
        }
        return rp_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rp_address_xr != nullptr)
    {
        children["rp-address-xr"] = rp_address_xr;
    }

    return children;
}

void Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim-interface-name")
    {
        pim_interface_name = value;
        pim_interface_name.value_namespace = name_space;
        pim_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "election-state")
    {
        election_state = value;
        election_state.value_namespace = name_space;
        election_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-seconds")
    {
        time_seconds = value;
        time_seconds.value_namespace = name_space;
        time_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-nano-seconds")
    {
        time_nano_seconds = value;
        time_nano_seconds.value_namespace = name_space;
        time_nano_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "our-metric")
    {
        our_metric = value;
        our_metric.value_namespace = name_space;
        our_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "our-metric-preference")
    {
        our_metric_preference = value;
        our_metric_preference.value_namespace = name_space;
        our_metric_preference.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "pim-interface-name")
    {
        pim_interface_name.yfilter = yfilter;
    }
    if(value_path == "election-state")
    {
        election_state.yfilter = yfilter;
    }
    if(value_path == "time-seconds")
    {
        time_seconds.yfilter = yfilter;
    }
    if(value_path == "time-nano-seconds")
    {
        time_nano_seconds.yfilter = yfilter;
    }
    if(value_path == "our-metric")
    {
        our_metric.yfilter = yfilter;
    }
    if(value_path == "our-metric-preference")
    {
        our_metric_preference.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address-xr" || name == "rp-address" || name == "interface-name" || name == "pim-interface-name" || name == "election-state" || name == "time-seconds" || name == "time-nano-seconds" || name == "our-metric" || name == "our-metric-preference")
        return true;
    return false;
}

Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::RpAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address-xr"; yang_parent_name = "bidir-df-state"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::~RpAddressXr()
{
}

bool Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bidir-df-states/bidir-df-state/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Topologies::Topologies()
    :
    topology(this, {})
{

    yang_name = "topologies"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Topologies::~Topologies()
{
}

bool Pim::Standby::DefaultContext::Topologies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<topology.len(); index++)
    {
        if(topology[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Topologies::has_operation() const
{
    for (std::size_t index=0; index<topology.len(); index++)
    {
        if(topology[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::Topologies::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Topologies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topologies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Topologies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Topologies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology>();
        c->parent = this;
        topology.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Topologies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : topology.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::Topologies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::Topologies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::Topologies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Topologies::Topology::Topology()
    :
    source_address{YType::str, "source-address"},
    group_address{YType::str, "group-address"},
    rpt{YType::uint32, "rpt"},
    limit_reached{YType::boolean, "limit-reached"},
    low_memory{YType::boolean, "low-memory"},
    protocol{YType::enumeration, "protocol"},
    wildcard{YType::boolean, "wildcard"},
    rpt_xr{YType::boolean, "rpt-xr"},
    spt{YType::boolean, "spt"},
    uptime{YType::uint64, "uptime"},
    expiry{YType::uint64, "expiry"},
    alive{YType::int32, "alive"},
    register_received_timer{YType::int32, "register-received-timer"},
    remote_source{YType::boolean, "remote-source"},
    crossed_threshold{YType::boolean, "crossed-threshold"},
    data_mdt_addr_assigned{YType::boolean, "data-mdt-addr-assigned"},
    rpf_interface_name{YType::str, "rpf-interface-name"},
    rpf_vrf_name{YType::str, "rpf-vrf-name"},
    rpf_safi{YType::uint8, "rpf-safi"},
    rpf_table_name{YType::str, "rpf-table-name"},
    rpf_drop{YType::boolean, "rpf-drop"},
    rpf_extranet{YType::boolean, "rpf-extranet"},
    is_via_lsm{YType::boolean, "is-via-lsm"},
    secondary_rpf_interface_name{YType::str, "secondary-rpf-interface-name"},
    connected{YType::boolean, "connected"},
    proxy{YType::boolean, "proxy"},
    rpf_proxy_enabled{YType::boolean, "rpf-proxy-enabled"},
    mofrr_enabled{YType::boolean, "mofrr-enabled"},
    rib_mo_frr_enabled{YType::boolean, "rib-mo-frr-enabled"},
    jp_timer{YType::int32, "jp-timer"},
    jp_status{YType::int32, "jp-status"},
    suppress_registers{YType::int32, "suppress-registers"},
    assume_alive{YType::boolean, "assume-alive"},
    probe_alive{YType::boolean, "probe-alive"},
    really_alive{YType::boolean, "really-alive"},
    inherit_alive{YType::boolean, "inherit-alive"},
    inherit_spt{YType::boolean, "inherit-spt"},
    signal_sources{YType::boolean, "signal-sources"},
    dont_check_connected{YType::boolean, "dont-check-connected"},
    register_received{YType::boolean, "register-received"},
    last_hop{YType::boolean, "last-hop"},
    sending_registers{YType::boolean, "sending-registers"},
    sending_null_registers{YType::boolean, "sending-null-registers"},
    sa_sent{YType::boolean, "sa-sent"},
    sa_received{YType::boolean, "sa-received"},
    sa_joined{YType::boolean, "sa-joined"},
    anycast_rp_match{YType::boolean, "anycast-rp-match"},
    anycast_rp_route_target{YType::str, "anycast-rp-route-target"},
    bgp_join{YType::boolean, "bgp-join"},
    bgp_jp_time{YType::uint64, "bgp-jp-time"},
    customer_routing_type{YType::int32, "customer-routing-type"},
    extranet_route{YType::boolean, "extranet-route"},
    mofrr_active{YType::boolean, "mofrr-active"},
    mofrr_primary{YType::boolean, "mofrr-primary"},
    mofrr_backup{YType::boolean, "mofrr-backup"},
    vxlan{YType::boolean, "vxlan"},
    kat_state{YType::boolean, "kat-state"}
        ,
    group_address_xr(std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr>())
    , source_address_xr(std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr>())
    , rp_address(std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::RpAddress>())
    , rpf_neighbor(std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor>())
    , secondary_rpf_neighbor(std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor>())
    , rpf_root(std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot>())
    , proxy_address(std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress>())
    , orig_src_address(std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress>())
    , outgoing_interface(this, {})
{
    group_address_xr->parent = this;
    source_address_xr->parent = this;
    rp_address->parent = this;
    rpf_neighbor->parent = this;
    secondary_rpf_neighbor->parent = this;
    rpf_root->parent = this;
    proxy_address->parent = this;
    orig_src_address->parent = this;

    yang_name = "topology"; yang_parent_name = "topologies"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Topologies::Topology::~Topology()
{
}

bool Pim::Standby::DefaultContext::Topologies::Topology::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<outgoing_interface.len(); index++)
    {
        if(outgoing_interface[index]->has_data())
            return true;
    }
    return source_address.is_set
	|| group_address.is_set
	|| rpt.is_set
	|| limit_reached.is_set
	|| low_memory.is_set
	|| protocol.is_set
	|| wildcard.is_set
	|| rpt_xr.is_set
	|| spt.is_set
	|| uptime.is_set
	|| expiry.is_set
	|| alive.is_set
	|| register_received_timer.is_set
	|| remote_source.is_set
	|| crossed_threshold.is_set
	|| data_mdt_addr_assigned.is_set
	|| rpf_interface_name.is_set
	|| rpf_vrf_name.is_set
	|| rpf_safi.is_set
	|| rpf_table_name.is_set
	|| rpf_drop.is_set
	|| rpf_extranet.is_set
	|| is_via_lsm.is_set
	|| secondary_rpf_interface_name.is_set
	|| connected.is_set
	|| proxy.is_set
	|| rpf_proxy_enabled.is_set
	|| mofrr_enabled.is_set
	|| rib_mo_frr_enabled.is_set
	|| jp_timer.is_set
	|| jp_status.is_set
	|| suppress_registers.is_set
	|| assume_alive.is_set
	|| probe_alive.is_set
	|| really_alive.is_set
	|| inherit_alive.is_set
	|| inherit_spt.is_set
	|| signal_sources.is_set
	|| dont_check_connected.is_set
	|| register_received.is_set
	|| last_hop.is_set
	|| sending_registers.is_set
	|| sending_null_registers.is_set
	|| sa_sent.is_set
	|| sa_received.is_set
	|| sa_joined.is_set
	|| anycast_rp_match.is_set
	|| anycast_rp_route_target.is_set
	|| bgp_join.is_set
	|| bgp_jp_time.is_set
	|| customer_routing_type.is_set
	|| extranet_route.is_set
	|| mofrr_active.is_set
	|| mofrr_primary.is_set
	|| mofrr_backup.is_set
	|| vxlan.is_set
	|| kat_state.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (source_address_xr !=  nullptr && source_address_xr->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data())
	|| (secondary_rpf_neighbor !=  nullptr && secondary_rpf_neighbor->has_data())
	|| (rpf_root !=  nullptr && rpf_root->has_data())
	|| (proxy_address !=  nullptr && proxy_address->has_data())
	|| (orig_src_address !=  nullptr && orig_src_address->has_data());
}

bool Pim::Standby::DefaultContext::Topologies::Topology::has_operation() const
{
    for (std::size_t index=0; index<outgoing_interface.len(); index++)
    {
        if(outgoing_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(rpt.yfilter)
	|| ydk::is_set(limit_reached.yfilter)
	|| ydk::is_set(low_memory.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(wildcard.yfilter)
	|| ydk::is_set(rpt_xr.yfilter)
	|| ydk::is_set(spt.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(expiry.yfilter)
	|| ydk::is_set(alive.yfilter)
	|| ydk::is_set(register_received_timer.yfilter)
	|| ydk::is_set(remote_source.yfilter)
	|| ydk::is_set(crossed_threshold.yfilter)
	|| ydk::is_set(data_mdt_addr_assigned.yfilter)
	|| ydk::is_set(rpf_interface_name.yfilter)
	|| ydk::is_set(rpf_vrf_name.yfilter)
	|| ydk::is_set(rpf_safi.yfilter)
	|| ydk::is_set(rpf_table_name.yfilter)
	|| ydk::is_set(rpf_drop.yfilter)
	|| ydk::is_set(rpf_extranet.yfilter)
	|| ydk::is_set(is_via_lsm.yfilter)
	|| ydk::is_set(secondary_rpf_interface_name.yfilter)
	|| ydk::is_set(connected.yfilter)
	|| ydk::is_set(proxy.yfilter)
	|| ydk::is_set(rpf_proxy_enabled.yfilter)
	|| ydk::is_set(mofrr_enabled.yfilter)
	|| ydk::is_set(rib_mo_frr_enabled.yfilter)
	|| ydk::is_set(jp_timer.yfilter)
	|| ydk::is_set(jp_status.yfilter)
	|| ydk::is_set(suppress_registers.yfilter)
	|| ydk::is_set(assume_alive.yfilter)
	|| ydk::is_set(probe_alive.yfilter)
	|| ydk::is_set(really_alive.yfilter)
	|| ydk::is_set(inherit_alive.yfilter)
	|| ydk::is_set(inherit_spt.yfilter)
	|| ydk::is_set(signal_sources.yfilter)
	|| ydk::is_set(dont_check_connected.yfilter)
	|| ydk::is_set(register_received.yfilter)
	|| ydk::is_set(last_hop.yfilter)
	|| ydk::is_set(sending_registers.yfilter)
	|| ydk::is_set(sending_null_registers.yfilter)
	|| ydk::is_set(sa_sent.yfilter)
	|| ydk::is_set(sa_received.yfilter)
	|| ydk::is_set(sa_joined.yfilter)
	|| ydk::is_set(anycast_rp_match.yfilter)
	|| ydk::is_set(anycast_rp_route_target.yfilter)
	|| ydk::is_set(bgp_join.yfilter)
	|| ydk::is_set(bgp_jp_time.yfilter)
	|| ydk::is_set(customer_routing_type.yfilter)
	|| ydk::is_set(extranet_route.yfilter)
	|| ydk::is_set(mofrr_active.yfilter)
	|| ydk::is_set(mofrr_primary.yfilter)
	|| ydk::is_set(mofrr_backup.yfilter)
	|| ydk::is_set(vxlan.yfilter)
	|| ydk::is_set(kat_state.yfilter)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (source_address_xr !=  nullptr && source_address_xr->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation())
	|| (secondary_rpf_neighbor !=  nullptr && secondary_rpf_neighbor->has_operation())
	|| (rpf_root !=  nullptr && rpf_root->has_operation())
	|| (proxy_address !=  nullptr && proxy_address->has_operation())
	|| (orig_src_address !=  nullptr && orig_src_address->has_operation());
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/topologies/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Topologies::Topology::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (rpt.is_set || is_set(rpt.yfilter)) leaf_name_data.push_back(rpt.get_name_leafdata());
    if (limit_reached.is_set || is_set(limit_reached.yfilter)) leaf_name_data.push_back(limit_reached.get_name_leafdata());
    if (low_memory.is_set || is_set(low_memory.yfilter)) leaf_name_data.push_back(low_memory.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (wildcard.is_set || is_set(wildcard.yfilter)) leaf_name_data.push_back(wildcard.get_name_leafdata());
    if (rpt_xr.is_set || is_set(rpt_xr.yfilter)) leaf_name_data.push_back(rpt_xr.get_name_leafdata());
    if (spt.is_set || is_set(spt.yfilter)) leaf_name_data.push_back(spt.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (alive.is_set || is_set(alive.yfilter)) leaf_name_data.push_back(alive.get_name_leafdata());
    if (register_received_timer.is_set || is_set(register_received_timer.yfilter)) leaf_name_data.push_back(register_received_timer.get_name_leafdata());
    if (remote_source.is_set || is_set(remote_source.yfilter)) leaf_name_data.push_back(remote_source.get_name_leafdata());
    if (crossed_threshold.is_set || is_set(crossed_threshold.yfilter)) leaf_name_data.push_back(crossed_threshold.get_name_leafdata());
    if (data_mdt_addr_assigned.is_set || is_set(data_mdt_addr_assigned.yfilter)) leaf_name_data.push_back(data_mdt_addr_assigned.get_name_leafdata());
    if (rpf_interface_name.is_set || is_set(rpf_interface_name.yfilter)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());
    if (rpf_vrf_name.is_set || is_set(rpf_vrf_name.yfilter)) leaf_name_data.push_back(rpf_vrf_name.get_name_leafdata());
    if (rpf_safi.is_set || is_set(rpf_safi.yfilter)) leaf_name_data.push_back(rpf_safi.get_name_leafdata());
    if (rpf_table_name.is_set || is_set(rpf_table_name.yfilter)) leaf_name_data.push_back(rpf_table_name.get_name_leafdata());
    if (rpf_drop.is_set || is_set(rpf_drop.yfilter)) leaf_name_data.push_back(rpf_drop.get_name_leafdata());
    if (rpf_extranet.is_set || is_set(rpf_extranet.yfilter)) leaf_name_data.push_back(rpf_extranet.get_name_leafdata());
    if (is_via_lsm.is_set || is_set(is_via_lsm.yfilter)) leaf_name_data.push_back(is_via_lsm.get_name_leafdata());
    if (secondary_rpf_interface_name.is_set || is_set(secondary_rpf_interface_name.yfilter)) leaf_name_data.push_back(secondary_rpf_interface_name.get_name_leafdata());
    if (connected.is_set || is_set(connected.yfilter)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (proxy.is_set || is_set(proxy.yfilter)) leaf_name_data.push_back(proxy.get_name_leafdata());
    if (rpf_proxy_enabled.is_set || is_set(rpf_proxy_enabled.yfilter)) leaf_name_data.push_back(rpf_proxy_enabled.get_name_leafdata());
    if (mofrr_enabled.is_set || is_set(mofrr_enabled.yfilter)) leaf_name_data.push_back(mofrr_enabled.get_name_leafdata());
    if (rib_mo_frr_enabled.is_set || is_set(rib_mo_frr_enabled.yfilter)) leaf_name_data.push_back(rib_mo_frr_enabled.get_name_leafdata());
    if (jp_timer.is_set || is_set(jp_timer.yfilter)) leaf_name_data.push_back(jp_timer.get_name_leafdata());
    if (jp_status.is_set || is_set(jp_status.yfilter)) leaf_name_data.push_back(jp_status.get_name_leafdata());
    if (suppress_registers.is_set || is_set(suppress_registers.yfilter)) leaf_name_data.push_back(suppress_registers.get_name_leafdata());
    if (assume_alive.is_set || is_set(assume_alive.yfilter)) leaf_name_data.push_back(assume_alive.get_name_leafdata());
    if (probe_alive.is_set || is_set(probe_alive.yfilter)) leaf_name_data.push_back(probe_alive.get_name_leafdata());
    if (really_alive.is_set || is_set(really_alive.yfilter)) leaf_name_data.push_back(really_alive.get_name_leafdata());
    if (inherit_alive.is_set || is_set(inherit_alive.yfilter)) leaf_name_data.push_back(inherit_alive.get_name_leafdata());
    if (inherit_spt.is_set || is_set(inherit_spt.yfilter)) leaf_name_data.push_back(inherit_spt.get_name_leafdata());
    if (signal_sources.is_set || is_set(signal_sources.yfilter)) leaf_name_data.push_back(signal_sources.get_name_leafdata());
    if (dont_check_connected.is_set || is_set(dont_check_connected.yfilter)) leaf_name_data.push_back(dont_check_connected.get_name_leafdata());
    if (register_received.is_set || is_set(register_received.yfilter)) leaf_name_data.push_back(register_received.get_name_leafdata());
    if (last_hop.is_set || is_set(last_hop.yfilter)) leaf_name_data.push_back(last_hop.get_name_leafdata());
    if (sending_registers.is_set || is_set(sending_registers.yfilter)) leaf_name_data.push_back(sending_registers.get_name_leafdata());
    if (sending_null_registers.is_set || is_set(sending_null_registers.yfilter)) leaf_name_data.push_back(sending_null_registers.get_name_leafdata());
    if (sa_sent.is_set || is_set(sa_sent.yfilter)) leaf_name_data.push_back(sa_sent.get_name_leafdata());
    if (sa_received.is_set || is_set(sa_received.yfilter)) leaf_name_data.push_back(sa_received.get_name_leafdata());
    if (sa_joined.is_set || is_set(sa_joined.yfilter)) leaf_name_data.push_back(sa_joined.get_name_leafdata());
    if (anycast_rp_match.is_set || is_set(anycast_rp_match.yfilter)) leaf_name_data.push_back(anycast_rp_match.get_name_leafdata());
    if (anycast_rp_route_target.is_set || is_set(anycast_rp_route_target.yfilter)) leaf_name_data.push_back(anycast_rp_route_target.get_name_leafdata());
    if (bgp_join.is_set || is_set(bgp_join.yfilter)) leaf_name_data.push_back(bgp_join.get_name_leafdata());
    if (bgp_jp_time.is_set || is_set(bgp_jp_time.yfilter)) leaf_name_data.push_back(bgp_jp_time.get_name_leafdata());
    if (customer_routing_type.is_set || is_set(customer_routing_type.yfilter)) leaf_name_data.push_back(customer_routing_type.get_name_leafdata());
    if (extranet_route.is_set || is_set(extranet_route.yfilter)) leaf_name_data.push_back(extranet_route.get_name_leafdata());
    if (mofrr_active.is_set || is_set(mofrr_active.yfilter)) leaf_name_data.push_back(mofrr_active.get_name_leafdata());
    if (mofrr_primary.is_set || is_set(mofrr_primary.yfilter)) leaf_name_data.push_back(mofrr_primary.get_name_leafdata());
    if (mofrr_backup.is_set || is_set(mofrr_backup.yfilter)) leaf_name_data.push_back(mofrr_backup.get_name_leafdata());
    if (vxlan.is_set || is_set(vxlan.yfilter)) leaf_name_data.push_back(vxlan.get_name_leafdata());
    if (kat_state.is_set || is_set(kat_state.yfilter)) leaf_name_data.push_back(kat_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Topologies::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "source-address-xr")
    {
        if(source_address_xr == nullptr)
        {
            source_address_xr = std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr>();
        }
        return source_address_xr;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor == nullptr)
        {
            rpf_neighbor = std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor>();
        }
        return rpf_neighbor;
    }

    if(child_yang_name == "secondary-rpf-neighbor")
    {
        if(secondary_rpf_neighbor == nullptr)
        {
            secondary_rpf_neighbor = std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor>();
        }
        return secondary_rpf_neighbor;
    }

    if(child_yang_name == "rpf-root")
    {
        if(rpf_root == nullptr)
        {
            rpf_root = std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot>();
        }
        return rpf_root;
    }

    if(child_yang_name == "proxy-address")
    {
        if(proxy_address == nullptr)
        {
            proxy_address = std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress>();
        }
        return proxy_address;
    }

    if(child_yang_name == "orig-src-address")
    {
        if(orig_src_address == nullptr)
        {
            orig_src_address = std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress>();
        }
        return orig_src_address;
    }

    if(child_yang_name == "outgoing-interface")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface>();
        c->parent = this;
        outgoing_interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Topologies::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    if(source_address_xr != nullptr)
    {
        children["source-address-xr"] = source_address_xr;
    }

    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(rpf_neighbor != nullptr)
    {
        children["rpf-neighbor"] = rpf_neighbor;
    }

    if(secondary_rpf_neighbor != nullptr)
    {
        children["secondary-rpf-neighbor"] = secondary_rpf_neighbor;
    }

    if(rpf_root != nullptr)
    {
        children["rpf-root"] = rpf_root;
    }

    if(proxy_address != nullptr)
    {
        children["proxy-address"] = proxy_address;
    }

    if(orig_src_address != nullptr)
    {
        children["orig-src-address"] = orig_src_address;
    }

    count = 0;
    for (auto c : outgoing_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::Topologies::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpt")
    {
        rpt = value;
        rpt.value_namespace = name_space;
        rpt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit-reached")
    {
        limit_reached = value;
        limit_reached.value_namespace = name_space;
        limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-memory")
    {
        low_memory = value;
        low_memory.value_namespace = name_space;
        low_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wildcard")
    {
        wildcard = value;
        wildcard.value_namespace = name_space;
        wildcard.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpt-xr")
    {
        rpt_xr = value;
        rpt_xr.value_namespace = name_space;
        rpt_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spt")
    {
        spt = value;
        spt.value_namespace = name_space;
        spt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alive")
    {
        alive = value;
        alive.value_namespace = name_space;
        alive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-received-timer")
    {
        register_received_timer = value;
        register_received_timer.value_namespace = name_space;
        register_received_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-source")
    {
        remote_source = value;
        remote_source.value_namespace = name_space;
        remote_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crossed-threshold")
    {
        crossed_threshold = value;
        crossed_threshold.value_namespace = name_space;
        crossed_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-mdt-addr-assigned")
    {
        data_mdt_addr_assigned = value;
        data_mdt_addr_assigned.value_namespace = name_space;
        data_mdt_addr_assigned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name = value;
        rpf_interface_name.value_namespace = name_space;
        rpf_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name = value;
        rpf_vrf_name.value_namespace = name_space;
        rpf_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-safi")
    {
        rpf_safi = value;
        rpf_safi.value_namespace = name_space;
        rpf_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-table-name")
    {
        rpf_table_name = value;
        rpf_table_name.value_namespace = name_space;
        rpf_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-drop")
    {
        rpf_drop = value;
        rpf_drop.value_namespace = name_space;
        rpf_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-extranet")
    {
        rpf_extranet = value;
        rpf_extranet.value_namespace = name_space;
        rpf_extranet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm = value;
        is_via_lsm.value_namespace = name_space;
        is_via_lsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-rpf-interface-name")
    {
        secondary_rpf_interface_name = value;
        secondary_rpf_interface_name.value_namespace = name_space;
        secondary_rpf_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected")
    {
        connected = value;
        connected.value_namespace = name_space;
        connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy")
    {
        proxy = value;
        proxy.value_namespace = name_space;
        proxy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-proxy-enabled")
    {
        rpf_proxy_enabled = value;
        rpf_proxy_enabled.value_namespace = name_space;
        rpf_proxy_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mofrr-enabled")
    {
        mofrr_enabled = value;
        mofrr_enabled.value_namespace = name_space;
        mofrr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-mo-frr-enabled")
    {
        rib_mo_frr_enabled = value;
        rib_mo_frr_enabled.value_namespace = name_space;
        rib_mo_frr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jp-timer")
    {
        jp_timer = value;
        jp_timer.value_namespace = name_space;
        jp_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jp-status")
    {
        jp_status = value;
        jp_status.value_namespace = name_space;
        jp_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-registers")
    {
        suppress_registers = value;
        suppress_registers.value_namespace = name_space;
        suppress_registers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assume-alive")
    {
        assume_alive = value;
        assume_alive.value_namespace = name_space;
        assume_alive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "probe-alive")
    {
        probe_alive = value;
        probe_alive.value_namespace = name_space;
        probe_alive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "really-alive")
    {
        really_alive = value;
        really_alive.value_namespace = name_space;
        really_alive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inherit-alive")
    {
        inherit_alive = value;
        inherit_alive.value_namespace = name_space;
        inherit_alive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inherit-spt")
    {
        inherit_spt = value;
        inherit_spt.value_namespace = name_space;
        inherit_spt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signal-sources")
    {
        signal_sources = value;
        signal_sources.value_namespace = name_space;
        signal_sources.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dont-check-connected")
    {
        dont_check_connected = value;
        dont_check_connected.value_namespace = name_space;
        dont_check_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-received")
    {
        register_received = value;
        register_received.value_namespace = name_space;
        register_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-hop")
    {
        last_hop = value;
        last_hop.value_namespace = name_space;
        last_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sending-registers")
    {
        sending_registers = value;
        sending_registers.value_namespace = name_space;
        sending_registers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sending-null-registers")
    {
        sending_null_registers = value;
        sending_null_registers.value_namespace = name_space;
        sending_null_registers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-sent")
    {
        sa_sent = value;
        sa_sent.value_namespace = name_space;
        sa_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-received")
    {
        sa_received = value;
        sa_received.value_namespace = name_space;
        sa_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-joined")
    {
        sa_joined = value;
        sa_joined.value_namespace = name_space;
        sa_joined.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-rp-match")
    {
        anycast_rp_match = value;
        anycast_rp_match.value_namespace = name_space;
        anycast_rp_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-rp-route-target")
    {
        anycast_rp_route_target = value;
        anycast_rp_route_target.value_namespace = name_space;
        anycast_rp_route_target.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-join")
    {
        bgp_join = value;
        bgp_join.value_namespace = name_space;
        bgp_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-jp-time")
    {
        bgp_jp_time = value;
        bgp_jp_time.value_namespace = name_space;
        bgp_jp_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "customer-routing-type")
    {
        customer_routing_type = value;
        customer_routing_type.value_namespace = name_space;
        customer_routing_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extranet-route")
    {
        extranet_route = value;
        extranet_route.value_namespace = name_space;
        extranet_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mofrr-active")
    {
        mofrr_active = value;
        mofrr_active.value_namespace = name_space;
        mofrr_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mofrr-primary")
    {
        mofrr_primary = value;
        mofrr_primary.value_namespace = name_space;
        mofrr_primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mofrr-backup")
    {
        mofrr_backup = value;
        mofrr_backup.value_namespace = name_space;
        mofrr_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vxlan")
    {
        vxlan = value;
        vxlan.value_namespace = name_space;
        vxlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kat-state")
    {
        kat_state = value;
        kat_state.value_namespace = name_space;
        kat_state.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Topologies::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "rpt")
    {
        rpt.yfilter = yfilter;
    }
    if(value_path == "limit-reached")
    {
        limit_reached.yfilter = yfilter;
    }
    if(value_path == "low-memory")
    {
        low_memory.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "wildcard")
    {
        wildcard.yfilter = yfilter;
    }
    if(value_path == "rpt-xr")
    {
        rpt_xr.yfilter = yfilter;
    }
    if(value_path == "spt")
    {
        spt.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
    if(value_path == "alive")
    {
        alive.yfilter = yfilter;
    }
    if(value_path == "register-received-timer")
    {
        register_received_timer.yfilter = yfilter;
    }
    if(value_path == "remote-source")
    {
        remote_source.yfilter = yfilter;
    }
    if(value_path == "crossed-threshold")
    {
        crossed_threshold.yfilter = yfilter;
    }
    if(value_path == "data-mdt-addr-assigned")
    {
        data_mdt_addr_assigned.yfilter = yfilter;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name.yfilter = yfilter;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name.yfilter = yfilter;
    }
    if(value_path == "rpf-safi")
    {
        rpf_safi.yfilter = yfilter;
    }
    if(value_path == "rpf-table-name")
    {
        rpf_table_name.yfilter = yfilter;
    }
    if(value_path == "rpf-drop")
    {
        rpf_drop.yfilter = yfilter;
    }
    if(value_path == "rpf-extranet")
    {
        rpf_extranet.yfilter = yfilter;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm.yfilter = yfilter;
    }
    if(value_path == "secondary-rpf-interface-name")
    {
        secondary_rpf_interface_name.yfilter = yfilter;
    }
    if(value_path == "connected")
    {
        connected.yfilter = yfilter;
    }
    if(value_path == "proxy")
    {
        proxy.yfilter = yfilter;
    }
    if(value_path == "rpf-proxy-enabled")
    {
        rpf_proxy_enabled.yfilter = yfilter;
    }
    if(value_path == "mofrr-enabled")
    {
        mofrr_enabled.yfilter = yfilter;
    }
    if(value_path == "rib-mo-frr-enabled")
    {
        rib_mo_frr_enabled.yfilter = yfilter;
    }
    if(value_path == "jp-timer")
    {
        jp_timer.yfilter = yfilter;
    }
    if(value_path == "jp-status")
    {
        jp_status.yfilter = yfilter;
    }
    if(value_path == "suppress-registers")
    {
        suppress_registers.yfilter = yfilter;
    }
    if(value_path == "assume-alive")
    {
        assume_alive.yfilter = yfilter;
    }
    if(value_path == "probe-alive")
    {
        probe_alive.yfilter = yfilter;
    }
    if(value_path == "really-alive")
    {
        really_alive.yfilter = yfilter;
    }
    if(value_path == "inherit-alive")
    {
        inherit_alive.yfilter = yfilter;
    }
    if(value_path == "inherit-spt")
    {
        inherit_spt.yfilter = yfilter;
    }
    if(value_path == "signal-sources")
    {
        signal_sources.yfilter = yfilter;
    }
    if(value_path == "dont-check-connected")
    {
        dont_check_connected.yfilter = yfilter;
    }
    if(value_path == "register-received")
    {
        register_received.yfilter = yfilter;
    }
    if(value_path == "last-hop")
    {
        last_hop.yfilter = yfilter;
    }
    if(value_path == "sending-registers")
    {
        sending_registers.yfilter = yfilter;
    }
    if(value_path == "sending-null-registers")
    {
        sending_null_registers.yfilter = yfilter;
    }
    if(value_path == "sa-sent")
    {
        sa_sent.yfilter = yfilter;
    }
    if(value_path == "sa-received")
    {
        sa_received.yfilter = yfilter;
    }
    if(value_path == "sa-joined")
    {
        sa_joined.yfilter = yfilter;
    }
    if(value_path == "anycast-rp-match")
    {
        anycast_rp_match.yfilter = yfilter;
    }
    if(value_path == "anycast-rp-route-target")
    {
        anycast_rp_route_target.yfilter = yfilter;
    }
    if(value_path == "bgp-join")
    {
        bgp_join.yfilter = yfilter;
    }
    if(value_path == "bgp-jp-time")
    {
        bgp_jp_time.yfilter = yfilter;
    }
    if(value_path == "customer-routing-type")
    {
        customer_routing_type.yfilter = yfilter;
    }
    if(value_path == "extranet-route")
    {
        extranet_route.yfilter = yfilter;
    }
    if(value_path == "mofrr-active")
    {
        mofrr_active.yfilter = yfilter;
    }
    if(value_path == "mofrr-primary")
    {
        mofrr_primary.yfilter = yfilter;
    }
    if(value_path == "mofrr-backup")
    {
        mofrr_backup.yfilter = yfilter;
    }
    if(value_path == "vxlan")
    {
        vxlan.yfilter = yfilter;
    }
    if(value_path == "kat-state")
    {
        kat_state.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Topologies::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "source-address-xr" || name == "rp-address" || name == "rpf-neighbor" || name == "secondary-rpf-neighbor" || name == "rpf-root" || name == "proxy-address" || name == "orig-src-address" || name == "outgoing-interface" || name == "source-address" || name == "group-address" || name == "rpt" || name == "limit-reached" || name == "low-memory" || name == "protocol" || name == "wildcard" || name == "rpt-xr" || name == "spt" || name == "uptime" || name == "expiry" || name == "alive" || name == "register-received-timer" || name == "remote-source" || name == "crossed-threshold" || name == "data-mdt-addr-assigned" || name == "rpf-interface-name" || name == "rpf-vrf-name" || name == "rpf-safi" || name == "rpf-table-name" || name == "rpf-drop" || name == "rpf-extranet" || name == "is-via-lsm" || name == "secondary-rpf-interface-name" || name == "connected" || name == "proxy" || name == "rpf-proxy-enabled" || name == "mofrr-enabled" || name == "rib-mo-frr-enabled" || name == "jp-timer" || name == "jp-status" || name == "suppress-registers" || name == "assume-alive" || name == "probe-alive" || name == "really-alive" || name == "inherit-alive" || name == "inherit-spt" || name == "signal-sources" || name == "dont-check-connected" || name == "register-received" || name == "last-hop" || name == "sending-registers" || name == "sending-null-registers" || name == "sa-sent" || name == "sa-received" || name == "sa-joined" || name == "anycast-rp-match" || name == "anycast-rp-route-target" || name == "bgp-join" || name == "bgp-jp-time" || name == "customer-routing-type" || name == "extranet-route" || name == "mofrr-active" || name == "mofrr-primary" || name == "mofrr-backup" || name == "vxlan" || name == "kat-state")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr::~GroupAddressXr()
{
}

bool Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/topologies/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr::SourceAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address-xr"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr::~SourceAddressXr()
{
}

bool Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/topologies/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Topologies::Topology::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Topologies::Topology::RpAddress::~RpAddress()
{
}

bool Pim::Standby::DefaultContext::Topologies::Topology::RpAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Topologies::Topology::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::RpAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/topologies/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Topologies::Topology::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Topologies::Topology::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Topologies::Topology::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Topologies::Topology::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Topologies::Topology::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Topologies::Topology::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-neighbor"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/topologies/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::SecondaryRpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "secondary-rpf-neighbor"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::~SecondaryRpfNeighbor()
{
}

bool Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/topologies/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-rpf-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot::RpfRoot()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-root"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot::~RpfRoot()
{
}

bool Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/topologies/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-root";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress::ProxyAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "proxy-address"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress::~ProxyAddress()
{
}

bool Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/topologies/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress::OrigSrcAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "orig-src-address"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress::~OrigSrcAddress()
{
}

bool Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/topologies/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "orig-src-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::OutgoingInterface()
    :
    interface_name{YType::str, "interface-name"},
    uptime{YType::uint64, "uptime"},
    expiry{YType::uint64, "expiry"},
    bgp_c_mcast_prune_delay_timer{YType::uint64, "bgp-c-mcast-prune-delay-timer"},
    jp_timer{YType::int32, "jp-timer"},
    jp_state{YType::int32, "jp-state"},
    assert_timer{YType::int32, "assert-timer"},
    local_members{YType::int32, "local-members"},
    internal_interest_info{YType::int32, "internal-interest-info"},
    forwarding_state{YType::int32, "forwarding-state"},
    immediate_state{YType::int32, "immediate-state"},
    last_hop{YType::boolean, "last-hop"},
    mldp_inband_mdt{YType::boolean, "mldp-inband-mdt"},
    mldp_stale{YType::boolean, "mldp-stale"},
    sa_prune{YType::boolean, "sa-prune"},
    admin_boundary{YType::boolean, "admin-boundary"},
    igmp_membership{YType::boolean, "igmp-membership"},
    mdt_safi_join{YType::boolean, "mdt-safi-join"},
    mvpn_safi_join{YType::boolean, "mvpn-safi-join"},
    local_mdt_join{YType::boolean, "local-mdt-join"},
    data_mdt_join{YType::boolean, "data-mdt-join"},
    mvpnv6_safi_join{YType::boolean, "mvpnv6-safi-join"},
    bgp_c_mcast_join{YType::boolean, "bgp-c-mcast-join"},
    vrf_name{YType::str, "vrf-name"},
    extranet_interface{YType::boolean, "extranet-interface"},
    internal_interest_information{YType::enumeration, "internal-interest-information"},
    local_members_information{YType::enumeration, "local-members-information"},
    assert_state{YType::boolean, "assert-state"}
        ,
    assert_winner(std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner>())
{
    assert_winner->parent = this;

    yang_name = "outgoing-interface"; yang_parent_name = "topology"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::~OutgoingInterface()
{
}

bool Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| uptime.is_set
	|| expiry.is_set
	|| bgp_c_mcast_prune_delay_timer.is_set
	|| jp_timer.is_set
	|| jp_state.is_set
	|| assert_timer.is_set
	|| local_members.is_set
	|| internal_interest_info.is_set
	|| forwarding_state.is_set
	|| immediate_state.is_set
	|| last_hop.is_set
	|| mldp_inband_mdt.is_set
	|| mldp_stale.is_set
	|| sa_prune.is_set
	|| admin_boundary.is_set
	|| igmp_membership.is_set
	|| mdt_safi_join.is_set
	|| mvpn_safi_join.is_set
	|| local_mdt_join.is_set
	|| data_mdt_join.is_set
	|| mvpnv6_safi_join.is_set
	|| bgp_c_mcast_join.is_set
	|| vrf_name.is_set
	|| extranet_interface.is_set
	|| internal_interest_information.is_set
	|| local_members_information.is_set
	|| assert_state.is_set
	|| (assert_winner !=  nullptr && assert_winner->has_data());
}

bool Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(expiry.yfilter)
	|| ydk::is_set(bgp_c_mcast_prune_delay_timer.yfilter)
	|| ydk::is_set(jp_timer.yfilter)
	|| ydk::is_set(jp_state.yfilter)
	|| ydk::is_set(assert_timer.yfilter)
	|| ydk::is_set(local_members.yfilter)
	|| ydk::is_set(internal_interest_info.yfilter)
	|| ydk::is_set(forwarding_state.yfilter)
	|| ydk::is_set(immediate_state.yfilter)
	|| ydk::is_set(last_hop.yfilter)
	|| ydk::is_set(mldp_inband_mdt.yfilter)
	|| ydk::is_set(mldp_stale.yfilter)
	|| ydk::is_set(sa_prune.yfilter)
	|| ydk::is_set(admin_boundary.yfilter)
	|| ydk::is_set(igmp_membership.yfilter)
	|| ydk::is_set(mdt_safi_join.yfilter)
	|| ydk::is_set(mvpn_safi_join.yfilter)
	|| ydk::is_set(local_mdt_join.yfilter)
	|| ydk::is_set(data_mdt_join.yfilter)
	|| ydk::is_set(mvpnv6_safi_join.yfilter)
	|| ydk::is_set(bgp_c_mcast_join.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(extranet_interface.yfilter)
	|| ydk::is_set(internal_interest_information.yfilter)
	|| ydk::is_set(local_members_information.yfilter)
	|| ydk::is_set(assert_state.yfilter)
	|| (assert_winner !=  nullptr && assert_winner->has_operation());
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/topologies/topology/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (bgp_c_mcast_prune_delay_timer.is_set || is_set(bgp_c_mcast_prune_delay_timer.yfilter)) leaf_name_data.push_back(bgp_c_mcast_prune_delay_timer.get_name_leafdata());
    if (jp_timer.is_set || is_set(jp_timer.yfilter)) leaf_name_data.push_back(jp_timer.get_name_leafdata());
    if (jp_state.is_set || is_set(jp_state.yfilter)) leaf_name_data.push_back(jp_state.get_name_leafdata());
    if (assert_timer.is_set || is_set(assert_timer.yfilter)) leaf_name_data.push_back(assert_timer.get_name_leafdata());
    if (local_members.is_set || is_set(local_members.yfilter)) leaf_name_data.push_back(local_members.get_name_leafdata());
    if (internal_interest_info.is_set || is_set(internal_interest_info.yfilter)) leaf_name_data.push_back(internal_interest_info.get_name_leafdata());
    if (forwarding_state.is_set || is_set(forwarding_state.yfilter)) leaf_name_data.push_back(forwarding_state.get_name_leafdata());
    if (immediate_state.is_set || is_set(immediate_state.yfilter)) leaf_name_data.push_back(immediate_state.get_name_leafdata());
    if (last_hop.is_set || is_set(last_hop.yfilter)) leaf_name_data.push_back(last_hop.get_name_leafdata());
    if (mldp_inband_mdt.is_set || is_set(mldp_inband_mdt.yfilter)) leaf_name_data.push_back(mldp_inband_mdt.get_name_leafdata());
    if (mldp_stale.is_set || is_set(mldp_stale.yfilter)) leaf_name_data.push_back(mldp_stale.get_name_leafdata());
    if (sa_prune.is_set || is_set(sa_prune.yfilter)) leaf_name_data.push_back(sa_prune.get_name_leafdata());
    if (admin_boundary.is_set || is_set(admin_boundary.yfilter)) leaf_name_data.push_back(admin_boundary.get_name_leafdata());
    if (igmp_membership.is_set || is_set(igmp_membership.yfilter)) leaf_name_data.push_back(igmp_membership.get_name_leafdata());
    if (mdt_safi_join.is_set || is_set(mdt_safi_join.yfilter)) leaf_name_data.push_back(mdt_safi_join.get_name_leafdata());
    if (mvpn_safi_join.is_set || is_set(mvpn_safi_join.yfilter)) leaf_name_data.push_back(mvpn_safi_join.get_name_leafdata());
    if (local_mdt_join.is_set || is_set(local_mdt_join.yfilter)) leaf_name_data.push_back(local_mdt_join.get_name_leafdata());
    if (data_mdt_join.is_set || is_set(data_mdt_join.yfilter)) leaf_name_data.push_back(data_mdt_join.get_name_leafdata());
    if (mvpnv6_safi_join.is_set || is_set(mvpnv6_safi_join.yfilter)) leaf_name_data.push_back(mvpnv6_safi_join.get_name_leafdata());
    if (bgp_c_mcast_join.is_set || is_set(bgp_c_mcast_join.yfilter)) leaf_name_data.push_back(bgp_c_mcast_join.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (extranet_interface.is_set || is_set(extranet_interface.yfilter)) leaf_name_data.push_back(extranet_interface.get_name_leafdata());
    if (internal_interest_information.is_set || is_set(internal_interest_information.yfilter)) leaf_name_data.push_back(internal_interest_information.get_name_leafdata());
    if (local_members_information.is_set || is_set(local_members_information.yfilter)) leaf_name_data.push_back(local_members_information.get_name_leafdata());
    if (assert_state.is_set || is_set(assert_state.yfilter)) leaf_name_data.push_back(assert_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "assert-winner")
    {
        if(assert_winner == nullptr)
        {
            assert_winner = std::make_shared<Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner>();
        }
        return assert_winner;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(assert_winner != nullptr)
    {
        children["assert-winner"] = assert_winner;
    }

    return children;
}

void Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-c-mcast-prune-delay-timer")
    {
        bgp_c_mcast_prune_delay_timer = value;
        bgp_c_mcast_prune_delay_timer.value_namespace = name_space;
        bgp_c_mcast_prune_delay_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jp-timer")
    {
        jp_timer = value;
        jp_timer.value_namespace = name_space;
        jp_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jp-state")
    {
        jp_state = value;
        jp_state.value_namespace = name_space;
        jp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assert-timer")
    {
        assert_timer = value;
        assert_timer.value_namespace = name_space;
        assert_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-members")
    {
        local_members = value;
        local_members.value_namespace = name_space;
        local_members.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-interest-info")
    {
        internal_interest_info = value;
        internal_interest_info.value_namespace = name_space;
        internal_interest_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-state")
    {
        forwarding_state = value;
        forwarding_state.value_namespace = name_space;
        forwarding_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "immediate-state")
    {
        immediate_state = value;
        immediate_state.value_namespace = name_space;
        immediate_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-hop")
    {
        last_hop = value;
        last_hop.value_namespace = name_space;
        last_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-inband-mdt")
    {
        mldp_inband_mdt = value;
        mldp_inband_mdt.value_namespace = name_space;
        mldp_inband_mdt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-stale")
    {
        mldp_stale = value;
        mldp_stale.value_namespace = name_space;
        mldp_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa-prune")
    {
        sa_prune = value;
        sa_prune.value_namespace = name_space;
        sa_prune.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-boundary")
    {
        admin_boundary = value;
        admin_boundary.value_namespace = name_space;
        admin_boundary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-membership")
    {
        igmp_membership = value;
        igmp_membership.value_namespace = name_space;
        igmp_membership.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-safi-join")
    {
        mdt_safi_join = value;
        mdt_safi_join.value_namespace = name_space;
        mdt_safi_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-safi-join")
    {
        mvpn_safi_join = value;
        mvpn_safi_join.value_namespace = name_space;
        mvpn_safi_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-mdt-join")
    {
        local_mdt_join = value;
        local_mdt_join.value_namespace = name_space;
        local_mdt_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-mdt-join")
    {
        data_mdt_join = value;
        data_mdt_join.value_namespace = name_space;
        data_mdt_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpnv6-safi-join")
    {
        mvpnv6_safi_join = value;
        mvpnv6_safi_join.value_namespace = name_space;
        mvpnv6_safi_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-c-mcast-join")
    {
        bgp_c_mcast_join = value;
        bgp_c_mcast_join.value_namespace = name_space;
        bgp_c_mcast_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extranet-interface")
    {
        extranet_interface = value;
        extranet_interface.value_namespace = name_space;
        extranet_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-interest-information")
    {
        internal_interest_information = value;
        internal_interest_information.value_namespace = name_space;
        internal_interest_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-members-information")
    {
        local_members_information = value;
        local_members_information.value_namespace = name_space;
        local_members_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assert-state")
    {
        assert_state = value;
        assert_state.value_namespace = name_space;
        assert_state.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
    if(value_path == "bgp-c-mcast-prune-delay-timer")
    {
        bgp_c_mcast_prune_delay_timer.yfilter = yfilter;
    }
    if(value_path == "jp-timer")
    {
        jp_timer.yfilter = yfilter;
    }
    if(value_path == "jp-state")
    {
        jp_state.yfilter = yfilter;
    }
    if(value_path == "assert-timer")
    {
        assert_timer.yfilter = yfilter;
    }
    if(value_path == "local-members")
    {
        local_members.yfilter = yfilter;
    }
    if(value_path == "internal-interest-info")
    {
        internal_interest_info.yfilter = yfilter;
    }
    if(value_path == "forwarding-state")
    {
        forwarding_state.yfilter = yfilter;
    }
    if(value_path == "immediate-state")
    {
        immediate_state.yfilter = yfilter;
    }
    if(value_path == "last-hop")
    {
        last_hop.yfilter = yfilter;
    }
    if(value_path == "mldp-inband-mdt")
    {
        mldp_inband_mdt.yfilter = yfilter;
    }
    if(value_path == "mldp-stale")
    {
        mldp_stale.yfilter = yfilter;
    }
    if(value_path == "sa-prune")
    {
        sa_prune.yfilter = yfilter;
    }
    if(value_path == "admin-boundary")
    {
        admin_boundary.yfilter = yfilter;
    }
    if(value_path == "igmp-membership")
    {
        igmp_membership.yfilter = yfilter;
    }
    if(value_path == "mdt-safi-join")
    {
        mdt_safi_join.yfilter = yfilter;
    }
    if(value_path == "mvpn-safi-join")
    {
        mvpn_safi_join.yfilter = yfilter;
    }
    if(value_path == "local-mdt-join")
    {
        local_mdt_join.yfilter = yfilter;
    }
    if(value_path == "data-mdt-join")
    {
        data_mdt_join.yfilter = yfilter;
    }
    if(value_path == "mvpnv6-safi-join")
    {
        mvpnv6_safi_join.yfilter = yfilter;
    }
    if(value_path == "bgp-c-mcast-join")
    {
        bgp_c_mcast_join.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "extranet-interface")
    {
        extranet_interface.yfilter = yfilter;
    }
    if(value_path == "internal-interest-information")
    {
        internal_interest_information.yfilter = yfilter;
    }
    if(value_path == "local-members-information")
    {
        local_members_information.yfilter = yfilter;
    }
    if(value_path == "assert-state")
    {
        assert_state.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "assert-winner" || name == "interface-name" || name == "uptime" || name == "expiry" || name == "bgp-c-mcast-prune-delay-timer" || name == "jp-timer" || name == "jp-state" || name == "assert-timer" || name == "local-members" || name == "internal-interest-info" || name == "forwarding-state" || name == "immediate-state" || name == "last-hop" || name == "mldp-inband-mdt" || name == "mldp-stale" || name == "sa-prune" || name == "admin-boundary" || name == "igmp-membership" || name == "mdt-safi-join" || name == "mvpn-safi-join" || name == "local-mdt-join" || name == "data-mdt-join" || name == "mvpnv6-safi-join" || name == "bgp-c-mcast-join" || name == "vrf-name" || name == "extranet-interface" || name == "internal-interest-information" || name == "local-members-information" || name == "assert-state")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::AssertWinner()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "assert-winner"; yang_parent_name = "outgoing-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::~AssertWinner()
{
}

bool Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/topologies/topology/outgoing-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "assert-winner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::BgpAfs::BgpAfs()
    :
    bgp_af(this, {})
{

    yang_name = "bgp-afs"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::BgpAfs::~BgpAfs()
{
}

bool Pim::Standby::DefaultContext::BgpAfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp_af.len(); index++)
    {
        if(bgp_af[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::BgpAfs::has_operation() const
{
    for (std::size_t index=0; index<bgp_af.len(); index++)
    {
        if(bgp_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::BgpAfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::BgpAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::BgpAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BgpAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-af")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::BgpAfs::BgpAf>();
        c->parent = this;
        bgp_af.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::BgpAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bgp_af.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::BgpAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::BgpAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::BgpAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-af")
        return true;
    return false;
}

Pim::Standby::DefaultContext::BgpAfs::BgpAf::BgpAf()
    :
    source_address{YType::str, "source-address"},
    group_address{YType::str, "group-address"},
    route_distinguisher{YType::str, "route-distinguisher"},
    extranet_path_count{YType::uint32, "extranet-path-count"},
    is_bgp_added{YType::boolean, "is-bgp-added"}
        ,
    source(std::make_shared<Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source>())
    , group(std::make_shared<Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group>())
    , next_hop(std::make_shared<Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop>())
{
    source->parent = this;
    group->parent = this;
    next_hop->parent = this;

    yang_name = "bgp-af"; yang_parent_name = "bgp-afs"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::BgpAfs::BgpAf::~BgpAf()
{
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| group_address.is_set
	|| route_distinguisher.is_set
	|| extranet_path_count.is_set
	|| is_bgp_added.is_set
	|| (source !=  nullptr && source->has_data())
	|| (group !=  nullptr && group->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter)
	|| ydk::is_set(extranet_path_count.yfilter)
	|| ydk::is_set(is_bgp_added.yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (group !=  nullptr && group->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string Pim::Standby::DefaultContext::BgpAfs::BgpAf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bgp-afs/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::BgpAfs::BgpAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-af";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::BgpAfs::BgpAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (extranet_path_count.is_set || is_set(extranet_path_count.yfilter)) leaf_name_data.push_back(extranet_path_count.get_name_leafdata());
    if (is_bgp_added.is_set || is_set(is_bgp_added.yfilter)) leaf_name_data.push_back(is_bgp_added.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BgpAfs::BgpAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source>();
        }
        return source;
    }

    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group>();
        }
        return group;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::BgpAfs::BgpAf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(next_hop != nullptr)
    {
        children["next-hop"] = next_hop;
    }

    return children;
}

void Pim::Standby::DefaultContext::BgpAfs::BgpAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
        route_distinguisher.value_namespace = name_space;
        route_distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extranet-path-count")
    {
        extranet_path_count = value;
        extranet_path_count.value_namespace = name_space;
        extranet_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bgp-added")
    {
        is_bgp_added = value;
        is_bgp_added.value_namespace = name_space;
        is_bgp_added.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::BgpAfs::BgpAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher.yfilter = yfilter;
    }
    if(value_path == "extranet-path-count")
    {
        extranet_path_count.yfilter = yfilter;
    }
    if(value_path == "is-bgp-added")
    {
        is_bgp_added.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "group" || name == "next-hop" || name == "source-address" || name == "group-address" || name == "route-distinguisher" || name == "extranet-path-count" || name == "is-bgp-added")
        return true;
    return false;
}

Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::Source()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source"; yang_parent_name = "bgp-af"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::~Source()
{
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bgp-afs/bgp-af/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::Group()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group"; yang_parent_name = "bgp-af"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::~Group()
{
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bgp-afs/bgp-af/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::NextHop()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "next-hop"; yang_parent_name = "bgp-af"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::~NextHop()
{
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bgp-afs/bgp-af/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::AutoRp::AutoRp()
{

    yang_name = "auto-rp"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::AutoRp::~AutoRp()
{
}

bool Pim::Standby::DefaultContext::AutoRp::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Pim::Standby::DefaultContext::AutoRp::has_operation() const
{
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::AutoRp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::AutoRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-rp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::AutoRp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::AutoRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::AutoRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::AutoRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::AutoRp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::AutoRp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCounts()
    :
    topology_interface_flag_route_count(this, {"interface_flag"})
{

    yang_name = "topology-interface-flag-route-counts"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::~TopologyInterfaceFlagRouteCounts()
{
}

bool Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<topology_interface_flag_route_count.len(); index++)
    {
        if(topology_interface_flag_route_count[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::has_operation() const
{
    for (std::size_t index=0; index<topology_interface_flag_route_count.len(); index++)
    {
        if(topology_interface_flag_route_count[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-interface-flag-route-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-interface-flag-route-count")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount>();
        c->parent = this;
        topology_interface_flag_route_count.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : topology_interface_flag_route_count.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-interface-flag-route-count")
        return true;
    return false;
}

Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::TopologyInterfaceFlagRouteCount()
    :
    interface_flag{YType::enumeration, "interface-flag"},
    group_ranges{YType::uint32, "group-ranges"},
    active_group_ranges{YType::uint32, "active-group-ranges"},
    groute_count{YType::uint32, "groute-count"},
    sg_route_count{YType::uint32, "sg-route-count"},
    sgr_route_count{YType::uint32, "sgr-route-count"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"}
{

    yang_name = "topology-interface-flag-route-count"; yang_parent_name = "topology-interface-flag-route-counts"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::~TopologyInterfaceFlagRouteCount()
{
}

bool Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::has_data() const
{
    if (is_presence_container) return true;
    return interface_flag.is_set
	|| group_ranges.is_set
	|| active_group_ranges.is_set
	|| groute_count.is_set
	|| sg_route_count.is_set
	|| sgr_route_count.is_set
	|| is_node_low_memory.is_set;
}

bool Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_flag.yfilter)
	|| ydk::is_set(group_ranges.yfilter)
	|| ydk::is_set(active_group_ranges.yfilter)
	|| ydk::is_set(groute_count.yfilter)
	|| ydk::is_set(sg_route_count.yfilter)
	|| ydk::is_set(sgr_route_count.yfilter)
	|| ydk::is_set(is_node_low_memory.yfilter);
}

std::string Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/topology-interface-flag-route-counts/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-interface-flag-route-count";
    ADD_KEY_TOKEN(interface_flag, "interface-flag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_flag.is_set || is_set(interface_flag.yfilter)) leaf_name_data.push_back(interface_flag.get_name_leafdata());
    if (group_ranges.is_set || is_set(group_ranges.yfilter)) leaf_name_data.push_back(group_ranges.get_name_leafdata());
    if (active_group_ranges.is_set || is_set(active_group_ranges.yfilter)) leaf_name_data.push_back(active_group_ranges.get_name_leafdata());
    if (groute_count.is_set || is_set(groute_count.yfilter)) leaf_name_data.push_back(groute_count.get_name_leafdata());
    if (sg_route_count.is_set || is_set(sg_route_count.yfilter)) leaf_name_data.push_back(sg_route_count.get_name_leafdata());
    if (sgr_route_count.is_set || is_set(sgr_route_count.yfilter)) leaf_name_data.push_back(sgr_route_count.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.yfilter)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-flag")
    {
        interface_flag = value;
        interface_flag.value_namespace = name_space;
        interface_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-ranges")
    {
        group_ranges = value;
        group_ranges.value_namespace = name_space;
        group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges = value;
        active_group_ranges.value_namespace = name_space;
        active_group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groute-count")
    {
        groute_count = value;
        groute_count.value_namespace = name_space;
        groute_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count = value;
        sg_route_count.value_namespace = name_space;
        sg_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count = value;
        sgr_route_count.value_namespace = name_space;
        sgr_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
        is_node_low_memory.value_namespace = name_space;
        is_node_low_memory.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-flag")
    {
        interface_flag.yfilter = yfilter;
    }
    if(value_path == "group-ranges")
    {
        group_ranges.yfilter = yfilter;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges.yfilter = yfilter;
    }
    if(value_path == "groute-count")
    {
        groute_count.yfilter = yfilter;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count.yfilter = yfilter;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count.yfilter = yfilter;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-flag" || name == "group-ranges" || name == "active-group-ranges" || name == "groute-count" || name == "sg-route-count" || name == "sgr-route-count" || name == "is-node-low-memory")
        return true;
    return false;
}

Pim::Standby::DefaultContext::GroupMapSources::GroupMapSources()
    :
    group_map_source(this, {})
{

    yang_name = "group-map-sources"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::GroupMapSources::~GroupMapSources()
{
}

bool Pim::Standby::DefaultContext::GroupMapSources::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_map_source.len(); index++)
    {
        if(group_map_source[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::GroupMapSources::has_operation() const
{
    for (std::size_t index=0; index<group_map_source.len(); index++)
    {
        if(group_map_source[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::GroupMapSources::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::GroupMapSources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-sources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::GroupMapSources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapSources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-map-source")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource>();
        c->parent = this;
        group_map_source.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GroupMapSources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : group_map_source.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::GroupMapSources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::GroupMapSources::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::GroupMapSources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-map-source")
        return true;
    return false;
}

Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapSource()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    client{YType::enumeration, "client"},
    protocol{YType::enumeration, "protocol"},
    rp_address{YType::str, "rp-address"},
    priority{YType::uint32, "priority"},
    holdtime{YType::int32, "holdtime"},
    expires{YType::uint64, "expires"},
    uptime{YType::uint64, "uptime"}
        ,
    source_of_information(std::make_shared<Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation>())
    , group_map_information(std::make_shared<Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation>())
{
    source_of_information->parent = this;
    group_map_information->parent = this;

    yang_name = "group-map-source"; yang_parent_name = "group-map-sources"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::~GroupMapSource()
{
}

bool Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| client.is_set
	|| protocol.is_set
	|| rp_address.is_set
	|| priority.is_set
	|| holdtime.is_set
	|| expires.is_set
	|| uptime.is_set
	|| (source_of_information !=  nullptr && source_of_information->has_data())
	|| (group_map_information !=  nullptr && group_map_information->has_data());
}

bool Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(expires.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (source_of_information !=  nullptr && source_of_information->has_operation())
	|| (group_map_information !=  nullptr && group_map_information->has_operation());
}

std::string Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/group-map-sources/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (expires.is_set || is_set(expires.yfilter)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-of-information")
    {
        if(source_of_information == nullptr)
        {
            source_of_information = std::make_shared<Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation>();
        }
        return source_of_information;
    }

    if(child_yang_name == "group-map-information")
    {
        if(group_map_information == nullptr)
        {
            group_map_information = std::make_shared<Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation>();
        }
        return group_map_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source_of_information != nullptr)
    {
        children["source-of-information"] = source_of_information;
    }

    if(group_map_information != nullptr)
    {
        children["group-map-information"] = group_map_information;
    }

    return children;
}

void Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expires")
    {
        expires = value;
        expires.value_namespace = name_space;
        expires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "expires")
    {
        expires.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-of-information" || name == "group-map-information" || name == "prefix" || name == "prefix-length" || name == "client" || name == "protocol" || name == "rp-address" || name == "priority" || name == "holdtime" || name == "expires" || name == "uptime")
        return true;
    return false;
}

Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::SourceOfInformation()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-of-information"; yang_parent_name = "group-map-source"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::~SourceOfInformation()
{
}

bool Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/group-map-sources/group-map-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-of-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::GroupMapInformation()
    :
    prefix_length{YType::int32, "prefix-length"},
    client{YType::enumeration, "client"},
    protocol{YType::enumeration, "protocol"},
    group_count{YType::uint32, "group-count"},
    is_used{YType::boolean, "is-used"},
    mrib_active{YType::boolean, "mrib-active"},
    is_override{YType::boolean, "is-override"},
    priority{YType::uint32, "priority"}
        ,
    prefix(std::make_shared<Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix>())
    , rp_address(std::make_shared<Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress>())
{
    prefix->parent = this;
    rp_address->parent = this;

    yang_name = "group-map-information"; yang_parent_name = "group-map-source"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::~GroupMapInformation()
{
}

bool Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| client.is_set
	|| protocol.is_set
	|| group_count.is_set
	|| is_used.is_set
	|| mrib_active.is_set
	|| is_override.is_set
	|| priority.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data());
}

bool Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(mrib_active.yfilter)
	|| ydk::is_set(is_override.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation());
}

std::string Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/group-map-sources/group-map-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (mrib_active.is_set || is_set(mrib_active.yfilter)) leaf_name_data.push_back(mrib_active.get_name_leafdata());
    if (is_override.is_set || is_set(is_override.yfilter)) leaf_name_data.push_back(is_override.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress>();
        }
        return rp_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    return children;
}

void Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mrib-active")
    {
        mrib_active = value;
        mrib_active.value_namespace = name_space;
        mrib_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-override")
    {
        is_override = value;
        is_override.value_namespace = name_space;
        is_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "mrib-active")
    {
        mrib_active.yfilter = yfilter;
    }
    if(value_path == "is-override")
    {
        is_override.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "rp-address" || name == "prefix-length" || name == "client" || name == "protocol" || name == "group-count" || name == "is-used" || name == "mrib-active" || name == "is-override" || name == "priority")
        return true;
    return false;
}

Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "group-map-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::~Prefix()
{
}

bool Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/group-map-sources/group-map-source/group-map-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "group-map-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::~RpAddress()
{
}

bool Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/group-map-sources/group-map-source/group-map-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::TrafficCounters::TrafficCounters()
    :
    elapsed_time{YType::uint32, "elapsed-time"},
    inputs{YType::uint32, "inputs"},
    outputs{YType::uint32, "outputs"},
    format_error{YType::uint32, "format-error"},
    pakman_error{YType::uint32, "pakman-error"},
    standby_packets_error{YType::uint32, "standby-packets-error"},
    checksum_error{YType::uint32, "checksum-error"},
    socket_error{YType::uint32, "socket-error"},
    send_queue_full{YType::uint32, "send-queue-full"},
    boundary_acl_rx_drop{YType::uint32, "boundary-acl-rx-drop"},
    boundary_acl_tx_drop{YType::uint32, "boundary-acl-tx-drop"},
    no_socket_connection{YType::uint32, "no-socket-connection"},
    no_source_address{YType::uint32, "no-source-address"},
    input_hello{YType::uint32, "input-hello"},
    output_hello{YType::uint32, "output-hello"},
    input_jp{YType::uint32, "input-jp"},
    output_jp{YType::uint32, "output-jp"},
    input_data_register{YType::uint32, "input-data-register"},
    input_null_register{YType::uint32, "input-null-register"},
    output_null_register{YType::uint32, "output-null-register"},
    input_register_stop{YType::uint32, "input-register-stop"},
    output_register_stop{YType::uint32, "output-register-stop"},
    input_assert{YType::uint32, "input-assert"},
    input_assert_batched{YType::uint32, "input-assert-batched"},
    output_assert{YType::uint32, "output-assert"},
    output_assert_batched{YType::uint32, "output-assert-batched"},
    input_df_election{YType::uint32, "input-df-election"},
    output_df_election{YType::uint32, "output-df-election"},
    input_bsr_message{YType::uint32, "input-bsr-message"},
    output_bsr_message{YType::uint32, "output-bsr-message"},
    input_candidate_rp_advertisement{YType::uint32, "input-candidate-rp-advertisement"},
    output_candidate_rp_advertisement{YType::uint32, "output-candidate-rp-advertisement"},
    input_ecmp_redirect{YType::uint32, "input-ecmp-redirect"},
    output_ecmp_redirect{YType::uint32, "output-ecmp-redirect"},
    output_loop_error{YType::uint32, "output-loop-error"},
    mldp_mdt_invalid_lsm_identifier{YType::uint32, "mldp-mdt-invalid-lsm-identifier"},
    input_no_idb_error{YType::uint32, "input-no-idb-error"},
    input_no_vrf_error{YType::uint32, "input-no-vrf-error"},
    input_no_pim_error{YType::uint32, "input-no-pim-error"},
    input_pim_version_error{YType::uint32, "input-pim-version-error"},
    output_join_group{YType::uint32, "output-join-group"},
    output_prune_group{YType::uint32, "output-prune-group"},
    output_join_prune_bytes{YType::uint32, "output-join-prune-bytes"},
    output_hello_bytes{YType::uint32, "output-hello-bytes"},
    non_supported_packets{YType::uint32, "non-supported-packets"},
    invalid_registers{YType::uint32, "invalid-registers"},
    invalid_join_prunes{YType::uint32, "invalid-join-prunes"},
    packet_packman_error{YType::uint32, "packet-packman-error"},
    packet_read_socket_error{YType::uint32, "packet-read-socket-error"},
    packet_queue_last_clear{YType::uint32, "packet-queue-last-clear"},
    packets_standby{YType::uint32, "packets-standby"},
    no_mdt_socket_connection{YType::uint32, "no-mdt-socket-connection"},
    mdt_send_queue_full{YType::uint32, "mdt-send-queue-full"},
    mdt_socket_error{YType::uint32, "mdt-socket-error"},
    mdt_join_tlv_sent{YType::uint32, "mdt-join-tlv-sent"},
    mdt_join_tlv_received{YType::uint32, "mdt-join-tlv-received"},
    mdt_join_bad_type{YType::uint32, "mdt-join-bad-type"},
    mdt_drop_local_source_address{YType::uint32, "mdt-drop-local-source-address"},
    mdt_drop_null_local_address{YType::uint32, "mdt-drop-null-local-address"},
    mdt_drop_no_idb{YType::uint32, "mdt-drop-no-idb"},
    mdt_drop_no_vrf{YType::uint32, "mdt-drop-no-vrf"},
    invalid_destination_packets{YType::uint32, "invalid-destination-packets"},
    mdt_joins_drop_multiple_encapsulation{YType::uint32, "mdt-joins-drop-multiple-encapsulation"},
    truncated_pim_packets{YType::uint32, "truncated-pim-packets"}
        ,
    packet_queue(this, {})
{

    yang_name = "traffic-counters"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::TrafficCounters::~TrafficCounters()
{
}

bool Pim::Standby::DefaultContext::TrafficCounters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<packet_queue.len(); index++)
    {
        if(packet_queue[index]->has_data())
            return true;
    }
    return elapsed_time.is_set
	|| inputs.is_set
	|| outputs.is_set
	|| format_error.is_set
	|| pakman_error.is_set
	|| standby_packets_error.is_set
	|| checksum_error.is_set
	|| socket_error.is_set
	|| send_queue_full.is_set
	|| boundary_acl_rx_drop.is_set
	|| boundary_acl_tx_drop.is_set
	|| no_socket_connection.is_set
	|| no_source_address.is_set
	|| input_hello.is_set
	|| output_hello.is_set
	|| input_jp.is_set
	|| output_jp.is_set
	|| input_data_register.is_set
	|| input_null_register.is_set
	|| output_null_register.is_set
	|| input_register_stop.is_set
	|| output_register_stop.is_set
	|| input_assert.is_set
	|| input_assert_batched.is_set
	|| output_assert.is_set
	|| output_assert_batched.is_set
	|| input_df_election.is_set
	|| output_df_election.is_set
	|| input_bsr_message.is_set
	|| output_bsr_message.is_set
	|| input_candidate_rp_advertisement.is_set
	|| output_candidate_rp_advertisement.is_set
	|| input_ecmp_redirect.is_set
	|| output_ecmp_redirect.is_set
	|| output_loop_error.is_set
	|| mldp_mdt_invalid_lsm_identifier.is_set
	|| input_no_idb_error.is_set
	|| input_no_vrf_error.is_set
	|| input_no_pim_error.is_set
	|| input_pim_version_error.is_set
	|| output_join_group.is_set
	|| output_prune_group.is_set
	|| output_join_prune_bytes.is_set
	|| output_hello_bytes.is_set
	|| non_supported_packets.is_set
	|| invalid_registers.is_set
	|| invalid_join_prunes.is_set
	|| packet_packman_error.is_set
	|| packet_read_socket_error.is_set
	|| packet_queue_last_clear.is_set
	|| packets_standby.is_set
	|| no_mdt_socket_connection.is_set
	|| mdt_send_queue_full.is_set
	|| mdt_socket_error.is_set
	|| mdt_join_tlv_sent.is_set
	|| mdt_join_tlv_received.is_set
	|| mdt_join_bad_type.is_set
	|| mdt_drop_local_source_address.is_set
	|| mdt_drop_null_local_address.is_set
	|| mdt_drop_no_idb.is_set
	|| mdt_drop_no_vrf.is_set
	|| invalid_destination_packets.is_set
	|| mdt_joins_drop_multiple_encapsulation.is_set
	|| truncated_pim_packets.is_set;
}

bool Pim::Standby::DefaultContext::TrafficCounters::has_operation() const
{
    for (std::size_t index=0; index<packet_queue.len(); index++)
    {
        if(packet_queue[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(elapsed_time.yfilter)
	|| ydk::is_set(inputs.yfilter)
	|| ydk::is_set(outputs.yfilter)
	|| ydk::is_set(format_error.yfilter)
	|| ydk::is_set(pakman_error.yfilter)
	|| ydk::is_set(standby_packets_error.yfilter)
	|| ydk::is_set(checksum_error.yfilter)
	|| ydk::is_set(socket_error.yfilter)
	|| ydk::is_set(send_queue_full.yfilter)
	|| ydk::is_set(boundary_acl_rx_drop.yfilter)
	|| ydk::is_set(boundary_acl_tx_drop.yfilter)
	|| ydk::is_set(no_socket_connection.yfilter)
	|| ydk::is_set(no_source_address.yfilter)
	|| ydk::is_set(input_hello.yfilter)
	|| ydk::is_set(output_hello.yfilter)
	|| ydk::is_set(input_jp.yfilter)
	|| ydk::is_set(output_jp.yfilter)
	|| ydk::is_set(input_data_register.yfilter)
	|| ydk::is_set(input_null_register.yfilter)
	|| ydk::is_set(output_null_register.yfilter)
	|| ydk::is_set(input_register_stop.yfilter)
	|| ydk::is_set(output_register_stop.yfilter)
	|| ydk::is_set(input_assert.yfilter)
	|| ydk::is_set(input_assert_batched.yfilter)
	|| ydk::is_set(output_assert.yfilter)
	|| ydk::is_set(output_assert_batched.yfilter)
	|| ydk::is_set(input_df_election.yfilter)
	|| ydk::is_set(output_df_election.yfilter)
	|| ydk::is_set(input_bsr_message.yfilter)
	|| ydk::is_set(output_bsr_message.yfilter)
	|| ydk::is_set(input_candidate_rp_advertisement.yfilter)
	|| ydk::is_set(output_candidate_rp_advertisement.yfilter)
	|| ydk::is_set(input_ecmp_redirect.yfilter)
	|| ydk::is_set(output_ecmp_redirect.yfilter)
	|| ydk::is_set(output_loop_error.yfilter)
	|| ydk::is_set(mldp_mdt_invalid_lsm_identifier.yfilter)
	|| ydk::is_set(input_no_idb_error.yfilter)
	|| ydk::is_set(input_no_vrf_error.yfilter)
	|| ydk::is_set(input_no_pim_error.yfilter)
	|| ydk::is_set(input_pim_version_error.yfilter)
	|| ydk::is_set(output_join_group.yfilter)
	|| ydk::is_set(output_prune_group.yfilter)
	|| ydk::is_set(output_join_prune_bytes.yfilter)
	|| ydk::is_set(output_hello_bytes.yfilter)
	|| ydk::is_set(non_supported_packets.yfilter)
	|| ydk::is_set(invalid_registers.yfilter)
	|| ydk::is_set(invalid_join_prunes.yfilter)
	|| ydk::is_set(packet_packman_error.yfilter)
	|| ydk::is_set(packet_read_socket_error.yfilter)
	|| ydk::is_set(packet_queue_last_clear.yfilter)
	|| ydk::is_set(packets_standby.yfilter)
	|| ydk::is_set(no_mdt_socket_connection.yfilter)
	|| ydk::is_set(mdt_send_queue_full.yfilter)
	|| ydk::is_set(mdt_socket_error.yfilter)
	|| ydk::is_set(mdt_join_tlv_sent.yfilter)
	|| ydk::is_set(mdt_join_tlv_received.yfilter)
	|| ydk::is_set(mdt_join_bad_type.yfilter)
	|| ydk::is_set(mdt_drop_local_source_address.yfilter)
	|| ydk::is_set(mdt_drop_null_local_address.yfilter)
	|| ydk::is_set(mdt_drop_no_idb.yfilter)
	|| ydk::is_set(mdt_drop_no_vrf.yfilter)
	|| ydk::is_set(invalid_destination_packets.yfilter)
	|| ydk::is_set(mdt_joins_drop_multiple_encapsulation.yfilter)
	|| ydk::is_set(truncated_pim_packets.yfilter);
}

std::string Pim::Standby::DefaultContext::TrafficCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::TrafficCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::TrafficCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (elapsed_time.is_set || is_set(elapsed_time.yfilter)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (inputs.is_set || is_set(inputs.yfilter)) leaf_name_data.push_back(inputs.get_name_leafdata());
    if (outputs.is_set || is_set(outputs.yfilter)) leaf_name_data.push_back(outputs.get_name_leafdata());
    if (format_error.is_set || is_set(format_error.yfilter)) leaf_name_data.push_back(format_error.get_name_leafdata());
    if (pakman_error.is_set || is_set(pakman_error.yfilter)) leaf_name_data.push_back(pakman_error.get_name_leafdata());
    if (standby_packets_error.is_set || is_set(standby_packets_error.yfilter)) leaf_name_data.push_back(standby_packets_error.get_name_leafdata());
    if (checksum_error.is_set || is_set(checksum_error.yfilter)) leaf_name_data.push_back(checksum_error.get_name_leafdata());
    if (socket_error.is_set || is_set(socket_error.yfilter)) leaf_name_data.push_back(socket_error.get_name_leafdata());
    if (send_queue_full.is_set || is_set(send_queue_full.yfilter)) leaf_name_data.push_back(send_queue_full.get_name_leafdata());
    if (boundary_acl_rx_drop.is_set || is_set(boundary_acl_rx_drop.yfilter)) leaf_name_data.push_back(boundary_acl_rx_drop.get_name_leafdata());
    if (boundary_acl_tx_drop.is_set || is_set(boundary_acl_tx_drop.yfilter)) leaf_name_data.push_back(boundary_acl_tx_drop.get_name_leafdata());
    if (no_socket_connection.is_set || is_set(no_socket_connection.yfilter)) leaf_name_data.push_back(no_socket_connection.get_name_leafdata());
    if (no_source_address.is_set || is_set(no_source_address.yfilter)) leaf_name_data.push_back(no_source_address.get_name_leafdata());
    if (input_hello.is_set || is_set(input_hello.yfilter)) leaf_name_data.push_back(input_hello.get_name_leafdata());
    if (output_hello.is_set || is_set(output_hello.yfilter)) leaf_name_data.push_back(output_hello.get_name_leafdata());
    if (input_jp.is_set || is_set(input_jp.yfilter)) leaf_name_data.push_back(input_jp.get_name_leafdata());
    if (output_jp.is_set || is_set(output_jp.yfilter)) leaf_name_data.push_back(output_jp.get_name_leafdata());
    if (input_data_register.is_set || is_set(input_data_register.yfilter)) leaf_name_data.push_back(input_data_register.get_name_leafdata());
    if (input_null_register.is_set || is_set(input_null_register.yfilter)) leaf_name_data.push_back(input_null_register.get_name_leafdata());
    if (output_null_register.is_set || is_set(output_null_register.yfilter)) leaf_name_data.push_back(output_null_register.get_name_leafdata());
    if (input_register_stop.is_set || is_set(input_register_stop.yfilter)) leaf_name_data.push_back(input_register_stop.get_name_leafdata());
    if (output_register_stop.is_set || is_set(output_register_stop.yfilter)) leaf_name_data.push_back(output_register_stop.get_name_leafdata());
    if (input_assert.is_set || is_set(input_assert.yfilter)) leaf_name_data.push_back(input_assert.get_name_leafdata());
    if (input_assert_batched.is_set || is_set(input_assert_batched.yfilter)) leaf_name_data.push_back(input_assert_batched.get_name_leafdata());
    if (output_assert.is_set || is_set(output_assert.yfilter)) leaf_name_data.push_back(output_assert.get_name_leafdata());
    if (output_assert_batched.is_set || is_set(output_assert_batched.yfilter)) leaf_name_data.push_back(output_assert_batched.get_name_leafdata());
    if (input_df_election.is_set || is_set(input_df_election.yfilter)) leaf_name_data.push_back(input_df_election.get_name_leafdata());
    if (output_df_election.is_set || is_set(output_df_election.yfilter)) leaf_name_data.push_back(output_df_election.get_name_leafdata());
    if (input_bsr_message.is_set || is_set(input_bsr_message.yfilter)) leaf_name_data.push_back(input_bsr_message.get_name_leafdata());
    if (output_bsr_message.is_set || is_set(output_bsr_message.yfilter)) leaf_name_data.push_back(output_bsr_message.get_name_leafdata());
    if (input_candidate_rp_advertisement.is_set || is_set(input_candidate_rp_advertisement.yfilter)) leaf_name_data.push_back(input_candidate_rp_advertisement.get_name_leafdata());
    if (output_candidate_rp_advertisement.is_set || is_set(output_candidate_rp_advertisement.yfilter)) leaf_name_data.push_back(output_candidate_rp_advertisement.get_name_leafdata());
    if (input_ecmp_redirect.is_set || is_set(input_ecmp_redirect.yfilter)) leaf_name_data.push_back(input_ecmp_redirect.get_name_leafdata());
    if (output_ecmp_redirect.is_set || is_set(output_ecmp_redirect.yfilter)) leaf_name_data.push_back(output_ecmp_redirect.get_name_leafdata());
    if (output_loop_error.is_set || is_set(output_loop_error.yfilter)) leaf_name_data.push_back(output_loop_error.get_name_leafdata());
    if (mldp_mdt_invalid_lsm_identifier.is_set || is_set(mldp_mdt_invalid_lsm_identifier.yfilter)) leaf_name_data.push_back(mldp_mdt_invalid_lsm_identifier.get_name_leafdata());
    if (input_no_idb_error.is_set || is_set(input_no_idb_error.yfilter)) leaf_name_data.push_back(input_no_idb_error.get_name_leafdata());
    if (input_no_vrf_error.is_set || is_set(input_no_vrf_error.yfilter)) leaf_name_data.push_back(input_no_vrf_error.get_name_leafdata());
    if (input_no_pim_error.is_set || is_set(input_no_pim_error.yfilter)) leaf_name_data.push_back(input_no_pim_error.get_name_leafdata());
    if (input_pim_version_error.is_set || is_set(input_pim_version_error.yfilter)) leaf_name_data.push_back(input_pim_version_error.get_name_leafdata());
    if (output_join_group.is_set || is_set(output_join_group.yfilter)) leaf_name_data.push_back(output_join_group.get_name_leafdata());
    if (output_prune_group.is_set || is_set(output_prune_group.yfilter)) leaf_name_data.push_back(output_prune_group.get_name_leafdata());
    if (output_join_prune_bytes.is_set || is_set(output_join_prune_bytes.yfilter)) leaf_name_data.push_back(output_join_prune_bytes.get_name_leafdata());
    if (output_hello_bytes.is_set || is_set(output_hello_bytes.yfilter)) leaf_name_data.push_back(output_hello_bytes.get_name_leafdata());
    if (non_supported_packets.is_set || is_set(non_supported_packets.yfilter)) leaf_name_data.push_back(non_supported_packets.get_name_leafdata());
    if (invalid_registers.is_set || is_set(invalid_registers.yfilter)) leaf_name_data.push_back(invalid_registers.get_name_leafdata());
    if (invalid_join_prunes.is_set || is_set(invalid_join_prunes.yfilter)) leaf_name_data.push_back(invalid_join_prunes.get_name_leafdata());
    if (packet_packman_error.is_set || is_set(packet_packman_error.yfilter)) leaf_name_data.push_back(packet_packman_error.get_name_leafdata());
    if (packet_read_socket_error.is_set || is_set(packet_read_socket_error.yfilter)) leaf_name_data.push_back(packet_read_socket_error.get_name_leafdata());
    if (packet_queue_last_clear.is_set || is_set(packet_queue_last_clear.yfilter)) leaf_name_data.push_back(packet_queue_last_clear.get_name_leafdata());
    if (packets_standby.is_set || is_set(packets_standby.yfilter)) leaf_name_data.push_back(packets_standby.get_name_leafdata());
    if (no_mdt_socket_connection.is_set || is_set(no_mdt_socket_connection.yfilter)) leaf_name_data.push_back(no_mdt_socket_connection.get_name_leafdata());
    if (mdt_send_queue_full.is_set || is_set(mdt_send_queue_full.yfilter)) leaf_name_data.push_back(mdt_send_queue_full.get_name_leafdata());
    if (mdt_socket_error.is_set || is_set(mdt_socket_error.yfilter)) leaf_name_data.push_back(mdt_socket_error.get_name_leafdata());
    if (mdt_join_tlv_sent.is_set || is_set(mdt_join_tlv_sent.yfilter)) leaf_name_data.push_back(mdt_join_tlv_sent.get_name_leafdata());
    if (mdt_join_tlv_received.is_set || is_set(mdt_join_tlv_received.yfilter)) leaf_name_data.push_back(mdt_join_tlv_received.get_name_leafdata());
    if (mdt_join_bad_type.is_set || is_set(mdt_join_bad_type.yfilter)) leaf_name_data.push_back(mdt_join_bad_type.get_name_leafdata());
    if (mdt_drop_local_source_address.is_set || is_set(mdt_drop_local_source_address.yfilter)) leaf_name_data.push_back(mdt_drop_local_source_address.get_name_leafdata());
    if (mdt_drop_null_local_address.is_set || is_set(mdt_drop_null_local_address.yfilter)) leaf_name_data.push_back(mdt_drop_null_local_address.get_name_leafdata());
    if (mdt_drop_no_idb.is_set || is_set(mdt_drop_no_idb.yfilter)) leaf_name_data.push_back(mdt_drop_no_idb.get_name_leafdata());
    if (mdt_drop_no_vrf.is_set || is_set(mdt_drop_no_vrf.yfilter)) leaf_name_data.push_back(mdt_drop_no_vrf.get_name_leafdata());
    if (invalid_destination_packets.is_set || is_set(invalid_destination_packets.yfilter)) leaf_name_data.push_back(invalid_destination_packets.get_name_leafdata());
    if (mdt_joins_drop_multiple_encapsulation.is_set || is_set(mdt_joins_drop_multiple_encapsulation.yfilter)) leaf_name_data.push_back(mdt_joins_drop_multiple_encapsulation.get_name_leafdata());
    if (truncated_pim_packets.is_set || is_set(truncated_pim_packets.yfilter)) leaf_name_data.push_back(truncated_pim_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::TrafficCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet-queue")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::TrafficCounters::PacketQueue>();
        c->parent = this;
        packet_queue.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::TrafficCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : packet_queue.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::TrafficCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
        elapsed_time.value_namespace = name_space;
        elapsed_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inputs")
    {
        inputs = value;
        inputs.value_namespace = name_space;
        inputs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outputs")
    {
        outputs = value;
        outputs.value_namespace = name_space;
        outputs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format-error")
    {
        format_error = value;
        format_error.value_namespace = name_space;
        format_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pakman-error")
    {
        pakman_error = value;
        pakman_error.value_namespace = name_space;
        pakman_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-packets-error")
    {
        standby_packets_error = value;
        standby_packets_error.value_namespace = name_space;
        standby_packets_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum-error")
    {
        checksum_error = value;
        checksum_error.value_namespace = name_space;
        checksum_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-error")
    {
        socket_error = value;
        socket_error.value_namespace = name_space;
        socket_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-queue-full")
    {
        send_queue_full = value;
        send_queue_full.value_namespace = name_space;
        send_queue_full.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boundary-acl-rx-drop")
    {
        boundary_acl_rx_drop = value;
        boundary_acl_rx_drop.value_namespace = name_space;
        boundary_acl_rx_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boundary-acl-tx-drop")
    {
        boundary_acl_tx_drop = value;
        boundary_acl_tx_drop.value_namespace = name_space;
        boundary_acl_tx_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-socket-connection")
    {
        no_socket_connection = value;
        no_socket_connection.value_namespace = name_space;
        no_socket_connection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-source-address")
    {
        no_source_address = value;
        no_source_address.value_namespace = name_space;
        no_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-hello")
    {
        input_hello = value;
        input_hello.value_namespace = name_space;
        input_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-hello")
    {
        output_hello = value;
        output_hello.value_namespace = name_space;
        output_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-jp")
    {
        input_jp = value;
        input_jp.value_namespace = name_space;
        input_jp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-jp")
    {
        output_jp = value;
        output_jp.value_namespace = name_space;
        output_jp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-data-register")
    {
        input_data_register = value;
        input_data_register.value_namespace = name_space;
        input_data_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-null-register")
    {
        input_null_register = value;
        input_null_register.value_namespace = name_space;
        input_null_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-null-register")
    {
        output_null_register = value;
        output_null_register.value_namespace = name_space;
        output_null_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-register-stop")
    {
        input_register_stop = value;
        input_register_stop.value_namespace = name_space;
        input_register_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-register-stop")
    {
        output_register_stop = value;
        output_register_stop.value_namespace = name_space;
        output_register_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-assert")
    {
        input_assert = value;
        input_assert.value_namespace = name_space;
        input_assert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-assert-batched")
    {
        input_assert_batched = value;
        input_assert_batched.value_namespace = name_space;
        input_assert_batched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-assert")
    {
        output_assert = value;
        output_assert.value_namespace = name_space;
        output_assert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-assert-batched")
    {
        output_assert_batched = value;
        output_assert_batched.value_namespace = name_space;
        output_assert_batched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-df-election")
    {
        input_df_election = value;
        input_df_election.value_namespace = name_space;
        input_df_election.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-df-election")
    {
        output_df_election = value;
        output_df_election.value_namespace = name_space;
        output_df_election.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-bsr-message")
    {
        input_bsr_message = value;
        input_bsr_message.value_namespace = name_space;
        input_bsr_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-bsr-message")
    {
        output_bsr_message = value;
        output_bsr_message.value_namespace = name_space;
        output_bsr_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-candidate-rp-advertisement")
    {
        input_candidate_rp_advertisement = value;
        input_candidate_rp_advertisement.value_namespace = name_space;
        input_candidate_rp_advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-candidate-rp-advertisement")
    {
        output_candidate_rp_advertisement = value;
        output_candidate_rp_advertisement.value_namespace = name_space;
        output_candidate_rp_advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-ecmp-redirect")
    {
        input_ecmp_redirect = value;
        input_ecmp_redirect.value_namespace = name_space;
        input_ecmp_redirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-ecmp-redirect")
    {
        output_ecmp_redirect = value;
        output_ecmp_redirect.value_namespace = name_space;
        output_ecmp_redirect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-loop-error")
    {
        output_loop_error = value;
        output_loop_error.value_namespace = name_space;
        output_loop_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-mdt-invalid-lsm-identifier")
    {
        mldp_mdt_invalid_lsm_identifier = value;
        mldp_mdt_invalid_lsm_identifier.value_namespace = name_space;
        mldp_mdt_invalid_lsm_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-no-idb-error")
    {
        input_no_idb_error = value;
        input_no_idb_error.value_namespace = name_space;
        input_no_idb_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-no-vrf-error")
    {
        input_no_vrf_error = value;
        input_no_vrf_error.value_namespace = name_space;
        input_no_vrf_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-no-pim-error")
    {
        input_no_pim_error = value;
        input_no_pim_error.value_namespace = name_space;
        input_no_pim_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-pim-version-error")
    {
        input_pim_version_error = value;
        input_pim_version_error.value_namespace = name_space;
        input_pim_version_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-join-group")
    {
        output_join_group = value;
        output_join_group.value_namespace = name_space;
        output_join_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-prune-group")
    {
        output_prune_group = value;
        output_prune_group.value_namespace = name_space;
        output_prune_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-join-prune-bytes")
    {
        output_join_prune_bytes = value;
        output_join_prune_bytes.value_namespace = name_space;
        output_join_prune_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-hello-bytes")
    {
        output_hello_bytes = value;
        output_hello_bytes.value_namespace = name_space;
        output_hello_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-supported-packets")
    {
        non_supported_packets = value;
        non_supported_packets.value_namespace = name_space;
        non_supported_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-registers")
    {
        invalid_registers = value;
        invalid_registers.value_namespace = name_space;
        invalid_registers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-join-prunes")
    {
        invalid_join_prunes = value;
        invalid_join_prunes.value_namespace = name_space;
        invalid_join_prunes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-packman-error")
    {
        packet_packman_error = value;
        packet_packman_error.value_namespace = name_space;
        packet_packman_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-read-socket-error")
    {
        packet_read_socket_error = value;
        packet_read_socket_error.value_namespace = name_space;
        packet_read_socket_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-queue-last-clear")
    {
        packet_queue_last_clear = value;
        packet_queue_last_clear.value_namespace = name_space;
        packet_queue_last_clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-standby")
    {
        packets_standby = value;
        packets_standby.value_namespace = name_space;
        packets_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-mdt-socket-connection")
    {
        no_mdt_socket_connection = value;
        no_mdt_socket_connection.value_namespace = name_space;
        no_mdt_socket_connection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-send-queue-full")
    {
        mdt_send_queue_full = value;
        mdt_send_queue_full.value_namespace = name_space;
        mdt_send_queue_full.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-socket-error")
    {
        mdt_socket_error = value;
        mdt_socket_error.value_namespace = name_space;
        mdt_socket_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-join-tlv-sent")
    {
        mdt_join_tlv_sent = value;
        mdt_join_tlv_sent.value_namespace = name_space;
        mdt_join_tlv_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-join-tlv-received")
    {
        mdt_join_tlv_received = value;
        mdt_join_tlv_received.value_namespace = name_space;
        mdt_join_tlv_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-join-bad-type")
    {
        mdt_join_bad_type = value;
        mdt_join_bad_type.value_namespace = name_space;
        mdt_join_bad_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-drop-local-source-address")
    {
        mdt_drop_local_source_address = value;
        mdt_drop_local_source_address.value_namespace = name_space;
        mdt_drop_local_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-drop-null-local-address")
    {
        mdt_drop_null_local_address = value;
        mdt_drop_null_local_address.value_namespace = name_space;
        mdt_drop_null_local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-drop-no-idb")
    {
        mdt_drop_no_idb = value;
        mdt_drop_no_idb.value_namespace = name_space;
        mdt_drop_no_idb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-drop-no-vrf")
    {
        mdt_drop_no_vrf = value;
        mdt_drop_no_vrf.value_namespace = name_space;
        mdt_drop_no_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-destination-packets")
    {
        invalid_destination_packets = value;
        invalid_destination_packets.value_namespace = name_space;
        invalid_destination_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-joins-drop-multiple-encapsulation")
    {
        mdt_joins_drop_multiple_encapsulation = value;
        mdt_joins_drop_multiple_encapsulation.value_namespace = name_space;
        mdt_joins_drop_multiple_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "truncated-pim-packets")
    {
        truncated_pim_packets = value;
        truncated_pim_packets.value_namespace = name_space;
        truncated_pim_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::TrafficCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "elapsed-time")
    {
        elapsed_time.yfilter = yfilter;
    }
    if(value_path == "inputs")
    {
        inputs.yfilter = yfilter;
    }
    if(value_path == "outputs")
    {
        outputs.yfilter = yfilter;
    }
    if(value_path == "format-error")
    {
        format_error.yfilter = yfilter;
    }
    if(value_path == "pakman-error")
    {
        pakman_error.yfilter = yfilter;
    }
    if(value_path == "standby-packets-error")
    {
        standby_packets_error.yfilter = yfilter;
    }
    if(value_path == "checksum-error")
    {
        checksum_error.yfilter = yfilter;
    }
    if(value_path == "socket-error")
    {
        socket_error.yfilter = yfilter;
    }
    if(value_path == "send-queue-full")
    {
        send_queue_full.yfilter = yfilter;
    }
    if(value_path == "boundary-acl-rx-drop")
    {
        boundary_acl_rx_drop.yfilter = yfilter;
    }
    if(value_path == "boundary-acl-tx-drop")
    {
        boundary_acl_tx_drop.yfilter = yfilter;
    }
    if(value_path == "no-socket-connection")
    {
        no_socket_connection.yfilter = yfilter;
    }
    if(value_path == "no-source-address")
    {
        no_source_address.yfilter = yfilter;
    }
    if(value_path == "input-hello")
    {
        input_hello.yfilter = yfilter;
    }
    if(value_path == "output-hello")
    {
        output_hello.yfilter = yfilter;
    }
    if(value_path == "input-jp")
    {
        input_jp.yfilter = yfilter;
    }
    if(value_path == "output-jp")
    {
        output_jp.yfilter = yfilter;
    }
    if(value_path == "input-data-register")
    {
        input_data_register.yfilter = yfilter;
    }
    if(value_path == "input-null-register")
    {
        input_null_register.yfilter = yfilter;
    }
    if(value_path == "output-null-register")
    {
        output_null_register.yfilter = yfilter;
    }
    if(value_path == "input-register-stop")
    {
        input_register_stop.yfilter = yfilter;
    }
    if(value_path == "output-register-stop")
    {
        output_register_stop.yfilter = yfilter;
    }
    if(value_path == "input-assert")
    {
        input_assert.yfilter = yfilter;
    }
    if(value_path == "input-assert-batched")
    {
        input_assert_batched.yfilter = yfilter;
    }
    if(value_path == "output-assert")
    {
        output_assert.yfilter = yfilter;
    }
    if(value_path == "output-assert-batched")
    {
        output_assert_batched.yfilter = yfilter;
    }
    if(value_path == "input-df-election")
    {
        input_df_election.yfilter = yfilter;
    }
    if(value_path == "output-df-election")
    {
        output_df_election.yfilter = yfilter;
    }
    if(value_path == "input-bsr-message")
    {
        input_bsr_message.yfilter = yfilter;
    }
    if(value_path == "output-bsr-message")
    {
        output_bsr_message.yfilter = yfilter;
    }
    if(value_path == "input-candidate-rp-advertisement")
    {
        input_candidate_rp_advertisement.yfilter = yfilter;
    }
    if(value_path == "output-candidate-rp-advertisement")
    {
        output_candidate_rp_advertisement.yfilter = yfilter;
    }
    if(value_path == "input-ecmp-redirect")
    {
        input_ecmp_redirect.yfilter = yfilter;
    }
    if(value_path == "output-ecmp-redirect")
    {
        output_ecmp_redirect.yfilter = yfilter;
    }
    if(value_path == "output-loop-error")
    {
        output_loop_error.yfilter = yfilter;
    }
    if(value_path == "mldp-mdt-invalid-lsm-identifier")
    {
        mldp_mdt_invalid_lsm_identifier.yfilter = yfilter;
    }
    if(value_path == "input-no-idb-error")
    {
        input_no_idb_error.yfilter = yfilter;
    }
    if(value_path == "input-no-vrf-error")
    {
        input_no_vrf_error.yfilter = yfilter;
    }
    if(value_path == "input-no-pim-error")
    {
        input_no_pim_error.yfilter = yfilter;
    }
    if(value_path == "input-pim-version-error")
    {
        input_pim_version_error.yfilter = yfilter;
    }
    if(value_path == "output-join-group")
    {
        output_join_group.yfilter = yfilter;
    }
    if(value_path == "output-prune-group")
    {
        output_prune_group.yfilter = yfilter;
    }
    if(value_path == "output-join-prune-bytes")
    {
        output_join_prune_bytes.yfilter = yfilter;
    }
    if(value_path == "output-hello-bytes")
    {
        output_hello_bytes.yfilter = yfilter;
    }
    if(value_path == "non-supported-packets")
    {
        non_supported_packets.yfilter = yfilter;
    }
    if(value_path == "invalid-registers")
    {
        invalid_registers.yfilter = yfilter;
    }
    if(value_path == "invalid-join-prunes")
    {
        invalid_join_prunes.yfilter = yfilter;
    }
    if(value_path == "packet-packman-error")
    {
        packet_packman_error.yfilter = yfilter;
    }
    if(value_path == "packet-read-socket-error")
    {
        packet_read_socket_error.yfilter = yfilter;
    }
    if(value_path == "packet-queue-last-clear")
    {
        packet_queue_last_clear.yfilter = yfilter;
    }
    if(value_path == "packets-standby")
    {
        packets_standby.yfilter = yfilter;
    }
    if(value_path == "no-mdt-socket-connection")
    {
        no_mdt_socket_connection.yfilter = yfilter;
    }
    if(value_path == "mdt-send-queue-full")
    {
        mdt_send_queue_full.yfilter = yfilter;
    }
    if(value_path == "mdt-socket-error")
    {
        mdt_socket_error.yfilter = yfilter;
    }
    if(value_path == "mdt-join-tlv-sent")
    {
        mdt_join_tlv_sent.yfilter = yfilter;
    }
    if(value_path == "mdt-join-tlv-received")
    {
        mdt_join_tlv_received.yfilter = yfilter;
    }
    if(value_path == "mdt-join-bad-type")
    {
        mdt_join_bad_type.yfilter = yfilter;
    }
    if(value_path == "mdt-drop-local-source-address")
    {
        mdt_drop_local_source_address.yfilter = yfilter;
    }
    if(value_path == "mdt-drop-null-local-address")
    {
        mdt_drop_null_local_address.yfilter = yfilter;
    }
    if(value_path == "mdt-drop-no-idb")
    {
        mdt_drop_no_idb.yfilter = yfilter;
    }
    if(value_path == "mdt-drop-no-vrf")
    {
        mdt_drop_no_vrf.yfilter = yfilter;
    }
    if(value_path == "invalid-destination-packets")
    {
        invalid_destination_packets.yfilter = yfilter;
    }
    if(value_path == "mdt-joins-drop-multiple-encapsulation")
    {
        mdt_joins_drop_multiple_encapsulation.yfilter = yfilter;
    }
    if(value_path == "truncated-pim-packets")
    {
        truncated_pim_packets.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::TrafficCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-queue" || name == "elapsed-time" || name == "inputs" || name == "outputs" || name == "format-error" || name == "pakman-error" || name == "standby-packets-error" || name == "checksum-error" || name == "socket-error" || name == "send-queue-full" || name == "boundary-acl-rx-drop" || name == "boundary-acl-tx-drop" || name == "no-socket-connection" || name == "no-source-address" || name == "input-hello" || name == "output-hello" || name == "input-jp" || name == "output-jp" || name == "input-data-register" || name == "input-null-register" || name == "output-null-register" || name == "input-register-stop" || name == "output-register-stop" || name == "input-assert" || name == "input-assert-batched" || name == "output-assert" || name == "output-assert-batched" || name == "input-df-election" || name == "output-df-election" || name == "input-bsr-message" || name == "output-bsr-message" || name == "input-candidate-rp-advertisement" || name == "output-candidate-rp-advertisement" || name == "input-ecmp-redirect" || name == "output-ecmp-redirect" || name == "output-loop-error" || name == "mldp-mdt-invalid-lsm-identifier" || name == "input-no-idb-error" || name == "input-no-vrf-error" || name == "input-no-pim-error" || name == "input-pim-version-error" || name == "output-join-group" || name == "output-prune-group" || name == "output-join-prune-bytes" || name == "output-hello-bytes" || name == "non-supported-packets" || name == "invalid-registers" || name == "invalid-join-prunes" || name == "packet-packman-error" || name == "packet-read-socket-error" || name == "packet-queue-last-clear" || name == "packets-standby" || name == "no-mdt-socket-connection" || name == "mdt-send-queue-full" || name == "mdt-socket-error" || name == "mdt-join-tlv-sent" || name == "mdt-join-tlv-received" || name == "mdt-join-bad-type" || name == "mdt-drop-local-source-address" || name == "mdt-drop-null-local-address" || name == "mdt-drop-no-idb" || name == "mdt-drop-no-vrf" || name == "invalid-destination-packets" || name == "mdt-joins-drop-multiple-encapsulation" || name == "truncated-pim-packets")
        return true;
    return false;
}

Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueue()
    :
    packet_queue_priority{YType::uint32, "packet-queue-priority"}
        ,
    packet_queue_state(std::make_shared<Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState>())
    , packet_queue_stats(std::make_shared<Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats>())
{
    packet_queue_state->parent = this;
    packet_queue_stats->parent = this;

    yang_name = "packet-queue"; yang_parent_name = "traffic-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::~PacketQueue()
{
}

bool Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::has_data() const
{
    if (is_presence_container) return true;
    return packet_queue_priority.is_set
	|| (packet_queue_state !=  nullptr && packet_queue_state->has_data())
	|| (packet_queue_stats !=  nullptr && packet_queue_stats->has_data());
}

bool Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_queue_priority.yfilter)
	|| (packet_queue_state !=  nullptr && packet_queue_state->has_operation())
	|| (packet_queue_stats !=  nullptr && packet_queue_stats->has_operation());
}

std::string Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/traffic-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_queue_priority.is_set || is_set(packet_queue_priority.yfilter)) leaf_name_data.push_back(packet_queue_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet-queue-state")
    {
        if(packet_queue_state == nullptr)
        {
            packet_queue_state = std::make_shared<Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState>();
        }
        return packet_queue_state;
    }

    if(child_yang_name == "packet-queue-stats")
    {
        if(packet_queue_stats == nullptr)
        {
            packet_queue_stats = std::make_shared<Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats>();
        }
        return packet_queue_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(packet_queue_state != nullptr)
    {
        children["packet-queue-state"] = packet_queue_state;
    }

    if(packet_queue_stats != nullptr)
    {
        children["packet-queue-stats"] = packet_queue_stats;
    }

    return children;
}

void Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-queue-priority")
    {
        packet_queue_priority = value;
        packet_queue_priority.value_namespace = name_space;
        packet_queue_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-queue-priority")
    {
        packet_queue_priority.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-queue-state" || name == "packet-queue-stats" || name == "packet-queue-priority")
        return true;
    return false;
}

Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::PacketQueueState()
    :
    max_queue_size{YType::uint32, "max-queue-size"},
    queue_size_bytes{YType::uint32, "queue-size-bytes"},
    queue_size_packets{YType::uint32, "queue-size-packets"}
{

    yang_name = "packet-queue-state"; yang_parent_name = "packet-queue"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::~PacketQueueState()
{
}

bool Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::has_data() const
{
    if (is_presence_container) return true;
    return max_queue_size.is_set
	|| queue_size_bytes.is_set
	|| queue_size_packets.is_set;
}

bool Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_queue_size.yfilter)
	|| ydk::is_set(queue_size_bytes.yfilter)
	|| ydk::is_set(queue_size_packets.yfilter);
}

std::string Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/traffic-counters/packet-queue/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-queue-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_queue_size.is_set || is_set(max_queue_size.yfilter)) leaf_name_data.push_back(max_queue_size.get_name_leafdata());
    if (queue_size_bytes.is_set || is_set(queue_size_bytes.yfilter)) leaf_name_data.push_back(queue_size_bytes.get_name_leafdata());
    if (queue_size_packets.is_set || is_set(queue_size_packets.yfilter)) leaf_name_data.push_back(queue_size_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-queue-size")
    {
        max_queue_size = value;
        max_queue_size.value_namespace = name_space;
        max_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-size-bytes")
    {
        queue_size_bytes = value;
        queue_size_bytes.value_namespace = name_space;
        queue_size_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-size-packets")
    {
        queue_size_packets = value;
        queue_size_packets.value_namespace = name_space;
        queue_size_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-queue-size")
    {
        max_queue_size.yfilter = yfilter;
    }
    if(value_path == "queue-size-bytes")
    {
        queue_size_bytes.yfilter = yfilter;
    }
    if(value_path == "queue-size-packets")
    {
        queue_size_packets.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-queue-size" || name == "queue-size-bytes" || name == "queue-size-packets")
        return true;
    return false;
}

Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::PacketQueueStats()
    :
    enqueued_packets{YType::uint32, "enqueued-packets"},
    dequeued_packets{YType::uint32, "dequeued-packets"},
    high_water_mark_packets{YType::uint32, "high-water-mark-packets"},
    high_water_mark_bytes{YType::uint32, "high-water-mark-bytes"},
    tail_drops{YType::uint32, "tail-drops"}
{

    yang_name = "packet-queue-stats"; yang_parent_name = "packet-queue"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::~PacketQueueStats()
{
}

bool Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::has_data() const
{
    if (is_presence_container) return true;
    return enqueued_packets.is_set
	|| dequeued_packets.is_set
	|| high_water_mark_packets.is_set
	|| high_water_mark_bytes.is_set
	|| tail_drops.is_set;
}

bool Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enqueued_packets.yfilter)
	|| ydk::is_set(dequeued_packets.yfilter)
	|| ydk::is_set(high_water_mark_packets.yfilter)
	|| ydk::is_set(high_water_mark_bytes.yfilter)
	|| ydk::is_set(tail_drops.yfilter);
}

std::string Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/traffic-counters/packet-queue/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-queue-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enqueued_packets.is_set || is_set(enqueued_packets.yfilter)) leaf_name_data.push_back(enqueued_packets.get_name_leafdata());
    if (dequeued_packets.is_set || is_set(dequeued_packets.yfilter)) leaf_name_data.push_back(dequeued_packets.get_name_leafdata());
    if (high_water_mark_packets.is_set || is_set(high_water_mark_packets.yfilter)) leaf_name_data.push_back(high_water_mark_packets.get_name_leafdata());
    if (high_water_mark_bytes.is_set || is_set(high_water_mark_bytes.yfilter)) leaf_name_data.push_back(high_water_mark_bytes.get_name_leafdata());
    if (tail_drops.is_set || is_set(tail_drops.yfilter)) leaf_name_data.push_back(tail_drops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enqueued-packets")
    {
        enqueued_packets = value;
        enqueued_packets.value_namespace = name_space;
        enqueued_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dequeued-packets")
    {
        dequeued_packets = value;
        dequeued_packets.value_namespace = name_space;
        dequeued_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-water-mark-packets")
    {
        high_water_mark_packets = value;
        high_water_mark_packets.value_namespace = name_space;
        high_water_mark_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-water-mark-bytes")
    {
        high_water_mark_bytes = value;
        high_water_mark_bytes.value_namespace = name_space;
        high_water_mark_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tail-drops")
    {
        tail_drops = value;
        tail_drops.value_namespace = name_space;
        tail_drops.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enqueued-packets")
    {
        enqueued_packets.yfilter = yfilter;
    }
    if(value_path == "dequeued-packets")
    {
        dequeued_packets.yfilter = yfilter;
    }
    if(value_path == "high-water-mark-packets")
    {
        high_water_mark_packets.yfilter = yfilter;
    }
    if(value_path == "high-water-mark-bytes")
    {
        high_water_mark_bytes.yfilter = yfilter;
    }
    if(value_path == "tail-drops")
    {
        tail_drops.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::TrafficCounters::PacketQueue::PacketQueueStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enqueued-packets" || name == "dequeued-packets" || name == "high-water-mark-packets" || name == "high-water-mark-bytes" || name == "tail-drops")
        return true;
    return false;
}

Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpfs()
    :
    group_map_rpf(this, {})
{

    yang_name = "group-map-rpfs"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::GroupMapRpfs::~GroupMapRpfs()
{
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group_map_rpf.len(); index++)
    {
        if(group_map_rpf[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::has_operation() const
{
    for (std::size_t index=0; index<group_map_rpf.len(); index++)
    {
        if(group_map_rpf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::GroupMapRpfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::GroupMapRpfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-rpfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::GroupMapRpfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapRpfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-map-rpf")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf>();
        c->parent = this;
        group_map_rpf.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GroupMapRpfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : group_map_rpf.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::GroupMapRpfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::GroupMapRpfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-map-rpf")
        return true;
    return false;
}

Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapRpf()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint32, "prefix-length"},
    client{YType::enumeration, "client"},
    protocol{YType::enumeration, "protocol"},
    rp_address{YType::str, "rp-address"},
    rp_priority{YType::uint32, "rp-priority"},
    are_we_rp{YType::boolean, "are-we-rp"},
    rpf_interface_name{YType::str, "rpf-interface-name"},
    rpf_vrf_name{YType::str, "rpf-vrf-name"}
        ,
    rpf_neighbor(std::make_shared<Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor>())
    , group_map_information(std::make_shared<Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation>())
{
    rpf_neighbor->parent = this;
    group_map_information->parent = this;

    yang_name = "group-map-rpf"; yang_parent_name = "group-map-rpfs"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::~GroupMapRpf()
{
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| client.is_set
	|| protocol.is_set
	|| rp_address.is_set
	|| rp_priority.is_set
	|| are_we_rp.is_set
	|| rpf_interface_name.is_set
	|| rpf_vrf_name.is_set
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data())
	|| (group_map_information !=  nullptr && group_map_information->has_data());
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(rp_priority.yfilter)
	|| ydk::is_set(are_we_rp.yfilter)
	|| ydk::is_set(rpf_interface_name.yfilter)
	|| ydk::is_set(rpf_vrf_name.yfilter)
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation())
	|| (group_map_information !=  nullptr && group_map_information->has_operation());
}

std::string Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/group-map-rpfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-rpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (rp_priority.is_set || is_set(rp_priority.yfilter)) leaf_name_data.push_back(rp_priority.get_name_leafdata());
    if (are_we_rp.is_set || is_set(are_we_rp.yfilter)) leaf_name_data.push_back(are_we_rp.get_name_leafdata());
    if (rpf_interface_name.is_set || is_set(rpf_interface_name.yfilter)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());
    if (rpf_vrf_name.is_set || is_set(rpf_vrf_name.yfilter)) leaf_name_data.push_back(rpf_vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor == nullptr)
        {
            rpf_neighbor = std::make_shared<Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor>();
        }
        return rpf_neighbor;
    }

    if(child_yang_name == "group-map-information")
    {
        if(group_map_information == nullptr)
        {
            group_map_information = std::make_shared<Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation>();
        }
        return group_map_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rpf_neighbor != nullptr)
    {
        children["rpf-neighbor"] = rpf_neighbor;
    }

    if(group_map_information != nullptr)
    {
        children["group-map-information"] = group_map_information;
    }

    return children;
}

void Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-priority")
    {
        rp_priority = value;
        rp_priority.value_namespace = name_space;
        rp_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "are-we-rp")
    {
        are_we_rp = value;
        are_we_rp.value_namespace = name_space;
        are_we_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name = value;
        rpf_interface_name.value_namespace = name_space;
        rpf_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name = value;
        rpf_vrf_name.value_namespace = name_space;
        rpf_vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "rp-priority")
    {
        rp_priority.yfilter = yfilter;
    }
    if(value_path == "are-we-rp")
    {
        are_we_rp.yfilter = yfilter;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name.yfilter = yfilter;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf-neighbor" || name == "group-map-information" || name == "prefix" || name == "prefix-length" || name == "client" || name == "protocol" || name == "rp-address" || name == "rp-priority" || name == "are-we-rp" || name == "rpf-interface-name" || name == "rpf-vrf-name")
        return true;
    return false;
}

Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-neighbor"; yang_parent_name = "group-map-rpf"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/group-map-rpfs/group-map-rpf/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::GroupMapInformation()
    :
    prefix_length{YType::int32, "prefix-length"},
    client{YType::enumeration, "client"},
    protocol{YType::enumeration, "protocol"},
    group_count{YType::uint32, "group-count"},
    is_used{YType::boolean, "is-used"},
    mrib_active{YType::boolean, "mrib-active"},
    is_override{YType::boolean, "is-override"},
    priority{YType::uint32, "priority"}
        ,
    prefix(std::make_shared<Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix>())
    , rp_address(std::make_shared<Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress>())
{
    prefix->parent = this;
    rp_address->parent = this;

    yang_name = "group-map-information"; yang_parent_name = "group-map-rpf"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::~GroupMapInformation()
{
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| client.is_set
	|| protocol.is_set
	|| group_count.is_set
	|| is_used.is_set
	|| mrib_active.is_set
	|| is_override.is_set
	|| priority.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data());
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(mrib_active.yfilter)
	|| ydk::is_set(is_override.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation());
}

std::string Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/group-map-rpfs/group-map-rpf/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (mrib_active.is_set || is_set(mrib_active.yfilter)) leaf_name_data.push_back(mrib_active.get_name_leafdata());
    if (is_override.is_set || is_set(is_override.yfilter)) leaf_name_data.push_back(is_override.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress>();
        }
        return rp_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    return children;
}

void Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mrib-active")
    {
        mrib_active = value;
        mrib_active.value_namespace = name_space;
        mrib_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-override")
    {
        is_override = value;
        is_override.value_namespace = name_space;
        is_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "mrib-active")
    {
        mrib_active.yfilter = yfilter;
    }
    if(value_path == "is-override")
    {
        is_override.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "rp-address" || name == "prefix-length" || name == "client" || name == "protocol" || name == "group-count" || name == "is-used" || name == "mrib-active" || name == "is-override" || name == "priority")
        return true;
    return false;
}

Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "group-map-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::~Prefix()
{
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/group-map-rpfs/group-map-rpf/group-map-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "group-map-information"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::~RpAddress()
{
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/group-map-rpfs/group-map-rpf/group-map-information/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Summary::Summary()
    :
    route_limit{YType::uint32, "route-limit"},
    route_count{YType::uint32, "route-count"},
    route_low_water_mark{YType::uint32, "route-low-water-mark"},
    is_route_limit_reached{YType::boolean, "is-route-limit-reached"},
    topology_interface_state_limit{YType::uint32, "topology-interface-state-limit"},
    topology_interface_state_count{YType::uint32, "topology-interface-state-count"},
    rxi_low_water_mark{YType::uint32, "rxi-low-water-mark"},
    rxi_limit_reached{YType::boolean, "rxi-limit-reached"},
    register_limit{YType::uint32, "register-limit"},
    register_count{YType::uint32, "register-count"},
    register_limit_reached{YType::boolean, "register-limit-reached"},
    ranges_limit{YType::uint32, "ranges-limit"},
    ranges_count{YType::uint32, "ranges-count"},
    ranges_threshold{YType::uint32, "ranges-threshold"},
    is_ranges_limit_reached{YType::boolean, "is-ranges-limit-reached"},
    bsr_ranges_limit{YType::uint32, "bsr-ranges-limit"},
    bsr_ranges_count{YType::uint32, "bsr-ranges-count"},
    bsr_range_threshold{YType::uint32, "bsr-range-threshold"},
    is_bsr_ranges_threshold_reached{YType::boolean, "is-bsr-ranges-threshold-reached"},
    bsr_candidate_rp_set_limit{YType::uint32, "bsr-candidate-rp-set-limit"},
    bsr_candidate_rp_set_count{YType::uint32, "bsr-candidate-rp-set-count"},
    bsr_candidate_rp_set_threshold{YType::uint32, "bsr-candidate-rp-set-threshold"},
    is_maximum_enforcement_disabled{YType::boolean, "is-maximum-enforcement-disabled"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"},
    route_threshold{YType::uint32, "route-threshold"},
    global_auto_rp_ranges_limit{YType::uint32, "global-auto-rp-ranges-limit"},
    is_global_auto_rp_ranges_limit_reached{YType::boolean, "is-global-auto-rp-ranges-limit-reached"},
    global_bsr_ranges_limit{YType::uint32, "global-bsr-ranges-limit"},
    global_bsr_ranges_count{YType::uint32, "global-bsr-ranges-count"},
    global_bsr_ranges_threshold{YType::uint32, "global-bsr-ranges-threshold"},
    is_global_bsr_ranges_limit_reached{YType::boolean, "is-global-bsr-ranges-limit-reached"},
    global_bsr_candidate_rp_set_limit{YType::uint32, "global-bsr-candidate-rp-set-limit"},
    global_bsr_candidate_rp_set_count{YType::uint32, "global-bsr-candidate-rp-set-count"},
    global_bsr_candidate_rp_set_threshold{YType::uint32, "global-bsr-candidate-rp-set-threshold"},
    is_global_route_limit_reached{YType::boolean, "is-global-route-limit-reached"},
    topology_interface_state_threshold{YType::uint32, "topology-interface-state-threshold"},
    is_global_rxi_limit_reached{YType::boolean, "is-global-rxi-limit-reached"},
    register_threshold{YType::uint32, "register-threshold"},
    global_register_limit{YType::uint32, "global-register-limit"},
    is_global_register_limit_reached{YType::boolean, "is-global-register-limit-reached"}
{

    yang_name = "summary"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Summary::~Summary()
{
}

bool Pim::Standby::DefaultContext::Summary::has_data() const
{
    if (is_presence_container) return true;
    return route_limit.is_set
	|| route_count.is_set
	|| route_low_water_mark.is_set
	|| is_route_limit_reached.is_set
	|| topology_interface_state_limit.is_set
	|| topology_interface_state_count.is_set
	|| rxi_low_water_mark.is_set
	|| rxi_limit_reached.is_set
	|| register_limit.is_set
	|| register_count.is_set
	|| register_limit_reached.is_set
	|| ranges_limit.is_set
	|| ranges_count.is_set
	|| ranges_threshold.is_set
	|| is_ranges_limit_reached.is_set
	|| bsr_ranges_limit.is_set
	|| bsr_ranges_count.is_set
	|| bsr_range_threshold.is_set
	|| is_bsr_ranges_threshold_reached.is_set
	|| bsr_candidate_rp_set_limit.is_set
	|| bsr_candidate_rp_set_count.is_set
	|| bsr_candidate_rp_set_threshold.is_set
	|| is_maximum_enforcement_disabled.is_set
	|| is_node_low_memory.is_set
	|| route_threshold.is_set
	|| global_auto_rp_ranges_limit.is_set
	|| is_global_auto_rp_ranges_limit_reached.is_set
	|| global_bsr_ranges_limit.is_set
	|| global_bsr_ranges_count.is_set
	|| global_bsr_ranges_threshold.is_set
	|| is_global_bsr_ranges_limit_reached.is_set
	|| global_bsr_candidate_rp_set_limit.is_set
	|| global_bsr_candidate_rp_set_count.is_set
	|| global_bsr_candidate_rp_set_threshold.is_set
	|| is_global_route_limit_reached.is_set
	|| topology_interface_state_threshold.is_set
	|| is_global_rxi_limit_reached.is_set
	|| register_threshold.is_set
	|| global_register_limit.is_set
	|| is_global_register_limit_reached.is_set;
}

bool Pim::Standby::DefaultContext::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_limit.yfilter)
	|| ydk::is_set(route_count.yfilter)
	|| ydk::is_set(route_low_water_mark.yfilter)
	|| ydk::is_set(is_route_limit_reached.yfilter)
	|| ydk::is_set(topology_interface_state_limit.yfilter)
	|| ydk::is_set(topology_interface_state_count.yfilter)
	|| ydk::is_set(rxi_low_water_mark.yfilter)
	|| ydk::is_set(rxi_limit_reached.yfilter)
	|| ydk::is_set(register_limit.yfilter)
	|| ydk::is_set(register_count.yfilter)
	|| ydk::is_set(register_limit_reached.yfilter)
	|| ydk::is_set(ranges_limit.yfilter)
	|| ydk::is_set(ranges_count.yfilter)
	|| ydk::is_set(ranges_threshold.yfilter)
	|| ydk::is_set(is_ranges_limit_reached.yfilter)
	|| ydk::is_set(bsr_ranges_limit.yfilter)
	|| ydk::is_set(bsr_ranges_count.yfilter)
	|| ydk::is_set(bsr_range_threshold.yfilter)
	|| ydk::is_set(is_bsr_ranges_threshold_reached.yfilter)
	|| ydk::is_set(bsr_candidate_rp_set_limit.yfilter)
	|| ydk::is_set(bsr_candidate_rp_set_count.yfilter)
	|| ydk::is_set(bsr_candidate_rp_set_threshold.yfilter)
	|| ydk::is_set(is_maximum_enforcement_disabled.yfilter)
	|| ydk::is_set(is_node_low_memory.yfilter)
	|| ydk::is_set(route_threshold.yfilter)
	|| ydk::is_set(global_auto_rp_ranges_limit.yfilter)
	|| ydk::is_set(is_global_auto_rp_ranges_limit_reached.yfilter)
	|| ydk::is_set(global_bsr_ranges_limit.yfilter)
	|| ydk::is_set(global_bsr_ranges_count.yfilter)
	|| ydk::is_set(global_bsr_ranges_threshold.yfilter)
	|| ydk::is_set(is_global_bsr_ranges_limit_reached.yfilter)
	|| ydk::is_set(global_bsr_candidate_rp_set_limit.yfilter)
	|| ydk::is_set(global_bsr_candidate_rp_set_count.yfilter)
	|| ydk::is_set(global_bsr_candidate_rp_set_threshold.yfilter)
	|| ydk::is_set(is_global_route_limit_reached.yfilter)
	|| ydk::is_set(topology_interface_state_threshold.yfilter)
	|| ydk::is_set(is_global_rxi_limit_reached.yfilter)
	|| ydk::is_set(register_threshold.yfilter)
	|| ydk::is_set(global_register_limit.yfilter)
	|| ydk::is_set(is_global_register_limit_reached.yfilter);
}

std::string Pim::Standby::DefaultContext::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_limit.is_set || is_set(route_limit.yfilter)) leaf_name_data.push_back(route_limit.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.yfilter)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (route_low_water_mark.is_set || is_set(route_low_water_mark.yfilter)) leaf_name_data.push_back(route_low_water_mark.get_name_leafdata());
    if (is_route_limit_reached.is_set || is_set(is_route_limit_reached.yfilter)) leaf_name_data.push_back(is_route_limit_reached.get_name_leafdata());
    if (topology_interface_state_limit.is_set || is_set(topology_interface_state_limit.yfilter)) leaf_name_data.push_back(topology_interface_state_limit.get_name_leafdata());
    if (topology_interface_state_count.is_set || is_set(topology_interface_state_count.yfilter)) leaf_name_data.push_back(topology_interface_state_count.get_name_leafdata());
    if (rxi_low_water_mark.is_set || is_set(rxi_low_water_mark.yfilter)) leaf_name_data.push_back(rxi_low_water_mark.get_name_leafdata());
    if (rxi_limit_reached.is_set || is_set(rxi_limit_reached.yfilter)) leaf_name_data.push_back(rxi_limit_reached.get_name_leafdata());
    if (register_limit.is_set || is_set(register_limit.yfilter)) leaf_name_data.push_back(register_limit.get_name_leafdata());
    if (register_count.is_set || is_set(register_count.yfilter)) leaf_name_data.push_back(register_count.get_name_leafdata());
    if (register_limit_reached.is_set || is_set(register_limit_reached.yfilter)) leaf_name_data.push_back(register_limit_reached.get_name_leafdata());
    if (ranges_limit.is_set || is_set(ranges_limit.yfilter)) leaf_name_data.push_back(ranges_limit.get_name_leafdata());
    if (ranges_count.is_set || is_set(ranges_count.yfilter)) leaf_name_data.push_back(ranges_count.get_name_leafdata());
    if (ranges_threshold.is_set || is_set(ranges_threshold.yfilter)) leaf_name_data.push_back(ranges_threshold.get_name_leafdata());
    if (is_ranges_limit_reached.is_set || is_set(is_ranges_limit_reached.yfilter)) leaf_name_data.push_back(is_ranges_limit_reached.get_name_leafdata());
    if (bsr_ranges_limit.is_set || is_set(bsr_ranges_limit.yfilter)) leaf_name_data.push_back(bsr_ranges_limit.get_name_leafdata());
    if (bsr_ranges_count.is_set || is_set(bsr_ranges_count.yfilter)) leaf_name_data.push_back(bsr_ranges_count.get_name_leafdata());
    if (bsr_range_threshold.is_set || is_set(bsr_range_threshold.yfilter)) leaf_name_data.push_back(bsr_range_threshold.get_name_leafdata());
    if (is_bsr_ranges_threshold_reached.is_set || is_set(is_bsr_ranges_threshold_reached.yfilter)) leaf_name_data.push_back(is_bsr_ranges_threshold_reached.get_name_leafdata());
    if (bsr_candidate_rp_set_limit.is_set || is_set(bsr_candidate_rp_set_limit.yfilter)) leaf_name_data.push_back(bsr_candidate_rp_set_limit.get_name_leafdata());
    if (bsr_candidate_rp_set_count.is_set || is_set(bsr_candidate_rp_set_count.yfilter)) leaf_name_data.push_back(bsr_candidate_rp_set_count.get_name_leafdata());
    if (bsr_candidate_rp_set_threshold.is_set || is_set(bsr_candidate_rp_set_threshold.yfilter)) leaf_name_data.push_back(bsr_candidate_rp_set_threshold.get_name_leafdata());
    if (is_maximum_enforcement_disabled.is_set || is_set(is_maximum_enforcement_disabled.yfilter)) leaf_name_data.push_back(is_maximum_enforcement_disabled.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.yfilter)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());
    if (route_threshold.is_set || is_set(route_threshold.yfilter)) leaf_name_data.push_back(route_threshold.get_name_leafdata());
    if (global_auto_rp_ranges_limit.is_set || is_set(global_auto_rp_ranges_limit.yfilter)) leaf_name_data.push_back(global_auto_rp_ranges_limit.get_name_leafdata());
    if (is_global_auto_rp_ranges_limit_reached.is_set || is_set(is_global_auto_rp_ranges_limit_reached.yfilter)) leaf_name_data.push_back(is_global_auto_rp_ranges_limit_reached.get_name_leafdata());
    if (global_bsr_ranges_limit.is_set || is_set(global_bsr_ranges_limit.yfilter)) leaf_name_data.push_back(global_bsr_ranges_limit.get_name_leafdata());
    if (global_bsr_ranges_count.is_set || is_set(global_bsr_ranges_count.yfilter)) leaf_name_data.push_back(global_bsr_ranges_count.get_name_leafdata());
    if (global_bsr_ranges_threshold.is_set || is_set(global_bsr_ranges_threshold.yfilter)) leaf_name_data.push_back(global_bsr_ranges_threshold.get_name_leafdata());
    if (is_global_bsr_ranges_limit_reached.is_set || is_set(is_global_bsr_ranges_limit_reached.yfilter)) leaf_name_data.push_back(is_global_bsr_ranges_limit_reached.get_name_leafdata());
    if (global_bsr_candidate_rp_set_limit.is_set || is_set(global_bsr_candidate_rp_set_limit.yfilter)) leaf_name_data.push_back(global_bsr_candidate_rp_set_limit.get_name_leafdata());
    if (global_bsr_candidate_rp_set_count.is_set || is_set(global_bsr_candidate_rp_set_count.yfilter)) leaf_name_data.push_back(global_bsr_candidate_rp_set_count.get_name_leafdata());
    if (global_bsr_candidate_rp_set_threshold.is_set || is_set(global_bsr_candidate_rp_set_threshold.yfilter)) leaf_name_data.push_back(global_bsr_candidate_rp_set_threshold.get_name_leafdata());
    if (is_global_route_limit_reached.is_set || is_set(is_global_route_limit_reached.yfilter)) leaf_name_data.push_back(is_global_route_limit_reached.get_name_leafdata());
    if (topology_interface_state_threshold.is_set || is_set(topology_interface_state_threshold.yfilter)) leaf_name_data.push_back(topology_interface_state_threshold.get_name_leafdata());
    if (is_global_rxi_limit_reached.is_set || is_set(is_global_rxi_limit_reached.yfilter)) leaf_name_data.push_back(is_global_rxi_limit_reached.get_name_leafdata());
    if (register_threshold.is_set || is_set(register_threshold.yfilter)) leaf_name_data.push_back(register_threshold.get_name_leafdata());
    if (global_register_limit.is_set || is_set(global_register_limit.yfilter)) leaf_name_data.push_back(global_register_limit.get_name_leafdata());
    if (is_global_register_limit_reached.is_set || is_set(is_global_register_limit_reached.yfilter)) leaf_name_data.push_back(is_global_register_limit_reached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim::Standby::DefaultContext::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-limit")
    {
        route_limit = value;
        route_limit.value_namespace = name_space;
        route_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-count")
    {
        route_count = value;
        route_count.value_namespace = name_space;
        route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-low-water-mark")
    {
        route_low_water_mark = value;
        route_low_water_mark.value_namespace = name_space;
        route_low_water_mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-route-limit-reached")
    {
        is_route_limit_reached = value;
        is_route_limit_reached.value_namespace = name_space;
        is_route_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-interface-state-limit")
    {
        topology_interface_state_limit = value;
        topology_interface_state_limit.value_namespace = name_space;
        topology_interface_state_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-interface-state-count")
    {
        topology_interface_state_count = value;
        topology_interface_state_count.value_namespace = name_space;
        topology_interface_state_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxi-low-water-mark")
    {
        rxi_low_water_mark = value;
        rxi_low_water_mark.value_namespace = name_space;
        rxi_low_water_mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxi-limit-reached")
    {
        rxi_limit_reached = value;
        rxi_limit_reached.value_namespace = name_space;
        rxi_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-limit")
    {
        register_limit = value;
        register_limit.value_namespace = name_space;
        register_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-count")
    {
        register_count = value;
        register_count.value_namespace = name_space;
        register_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-limit-reached")
    {
        register_limit_reached = value;
        register_limit_reached.value_namespace = name_space;
        register_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ranges-limit")
    {
        ranges_limit = value;
        ranges_limit.value_namespace = name_space;
        ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ranges-count")
    {
        ranges_count = value;
        ranges_count.value_namespace = name_space;
        ranges_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ranges-threshold")
    {
        ranges_threshold = value;
        ranges_threshold.value_namespace = name_space;
        ranges_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ranges-limit-reached")
    {
        is_ranges_limit_reached = value;
        is_ranges_limit_reached.value_namespace = name_space;
        is_ranges_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-ranges-limit")
    {
        bsr_ranges_limit = value;
        bsr_ranges_limit.value_namespace = name_space;
        bsr_ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-ranges-count")
    {
        bsr_ranges_count = value;
        bsr_ranges_count.value_namespace = name_space;
        bsr_ranges_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-range-threshold")
    {
        bsr_range_threshold = value;
        bsr_range_threshold.value_namespace = name_space;
        bsr_range_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bsr-ranges-threshold-reached")
    {
        is_bsr_ranges_threshold_reached = value;
        is_bsr_ranges_threshold_reached.value_namespace = name_space;
        is_bsr_ranges_threshold_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-candidate-rp-set-limit")
    {
        bsr_candidate_rp_set_limit = value;
        bsr_candidate_rp_set_limit.value_namespace = name_space;
        bsr_candidate_rp_set_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-candidate-rp-set-count")
    {
        bsr_candidate_rp_set_count = value;
        bsr_candidate_rp_set_count.value_namespace = name_space;
        bsr_candidate_rp_set_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-candidate-rp-set-threshold")
    {
        bsr_candidate_rp_set_threshold = value;
        bsr_candidate_rp_set_threshold.value_namespace = name_space;
        bsr_candidate_rp_set_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-enforcement-disabled")
    {
        is_maximum_enforcement_disabled = value;
        is_maximum_enforcement_disabled.value_namespace = name_space;
        is_maximum_enforcement_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
        is_node_low_memory.value_namespace = name_space;
        is_node_low_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-threshold")
    {
        route_threshold = value;
        route_threshold.value_namespace = name_space;
        route_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-auto-rp-ranges-limit")
    {
        global_auto_rp_ranges_limit = value;
        global_auto_rp_ranges_limit.value_namespace = name_space;
        global_auto_rp_ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-auto-rp-ranges-limit-reached")
    {
        is_global_auto_rp_ranges_limit_reached = value;
        is_global_auto_rp_ranges_limit_reached.value_namespace = name_space;
        is_global_auto_rp_ranges_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-ranges-limit")
    {
        global_bsr_ranges_limit = value;
        global_bsr_ranges_limit.value_namespace = name_space;
        global_bsr_ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-ranges-count")
    {
        global_bsr_ranges_count = value;
        global_bsr_ranges_count.value_namespace = name_space;
        global_bsr_ranges_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-ranges-threshold")
    {
        global_bsr_ranges_threshold = value;
        global_bsr_ranges_threshold.value_namespace = name_space;
        global_bsr_ranges_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-bsr-ranges-limit-reached")
    {
        is_global_bsr_ranges_limit_reached = value;
        is_global_bsr_ranges_limit_reached.value_namespace = name_space;
        is_global_bsr_ranges_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-candidate-rp-set-limit")
    {
        global_bsr_candidate_rp_set_limit = value;
        global_bsr_candidate_rp_set_limit.value_namespace = name_space;
        global_bsr_candidate_rp_set_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-candidate-rp-set-count")
    {
        global_bsr_candidate_rp_set_count = value;
        global_bsr_candidate_rp_set_count.value_namespace = name_space;
        global_bsr_candidate_rp_set_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-candidate-rp-set-threshold")
    {
        global_bsr_candidate_rp_set_threshold = value;
        global_bsr_candidate_rp_set_threshold.value_namespace = name_space;
        global_bsr_candidate_rp_set_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-route-limit-reached")
    {
        is_global_route_limit_reached = value;
        is_global_route_limit_reached.value_namespace = name_space;
        is_global_route_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-interface-state-threshold")
    {
        topology_interface_state_threshold = value;
        topology_interface_state_threshold.value_namespace = name_space;
        topology_interface_state_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-rxi-limit-reached")
    {
        is_global_rxi_limit_reached = value;
        is_global_rxi_limit_reached.value_namespace = name_space;
        is_global_rxi_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-threshold")
    {
        register_threshold = value;
        register_threshold.value_namespace = name_space;
        register_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-register-limit")
    {
        global_register_limit = value;
        global_register_limit.value_namespace = name_space;
        global_register_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-register-limit-reached")
    {
        is_global_register_limit_reached = value;
        is_global_register_limit_reached.value_namespace = name_space;
        is_global_register_limit_reached.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-limit")
    {
        route_limit.yfilter = yfilter;
    }
    if(value_path == "route-count")
    {
        route_count.yfilter = yfilter;
    }
    if(value_path == "route-low-water-mark")
    {
        route_low_water_mark.yfilter = yfilter;
    }
    if(value_path == "is-route-limit-reached")
    {
        is_route_limit_reached.yfilter = yfilter;
    }
    if(value_path == "topology-interface-state-limit")
    {
        topology_interface_state_limit.yfilter = yfilter;
    }
    if(value_path == "topology-interface-state-count")
    {
        topology_interface_state_count.yfilter = yfilter;
    }
    if(value_path == "rxi-low-water-mark")
    {
        rxi_low_water_mark.yfilter = yfilter;
    }
    if(value_path == "rxi-limit-reached")
    {
        rxi_limit_reached.yfilter = yfilter;
    }
    if(value_path == "register-limit")
    {
        register_limit.yfilter = yfilter;
    }
    if(value_path == "register-count")
    {
        register_count.yfilter = yfilter;
    }
    if(value_path == "register-limit-reached")
    {
        register_limit_reached.yfilter = yfilter;
    }
    if(value_path == "ranges-limit")
    {
        ranges_limit.yfilter = yfilter;
    }
    if(value_path == "ranges-count")
    {
        ranges_count.yfilter = yfilter;
    }
    if(value_path == "ranges-threshold")
    {
        ranges_threshold.yfilter = yfilter;
    }
    if(value_path == "is-ranges-limit-reached")
    {
        is_ranges_limit_reached.yfilter = yfilter;
    }
    if(value_path == "bsr-ranges-limit")
    {
        bsr_ranges_limit.yfilter = yfilter;
    }
    if(value_path == "bsr-ranges-count")
    {
        bsr_ranges_count.yfilter = yfilter;
    }
    if(value_path == "bsr-range-threshold")
    {
        bsr_range_threshold.yfilter = yfilter;
    }
    if(value_path == "is-bsr-ranges-threshold-reached")
    {
        is_bsr_ranges_threshold_reached.yfilter = yfilter;
    }
    if(value_path == "bsr-candidate-rp-set-limit")
    {
        bsr_candidate_rp_set_limit.yfilter = yfilter;
    }
    if(value_path == "bsr-candidate-rp-set-count")
    {
        bsr_candidate_rp_set_count.yfilter = yfilter;
    }
    if(value_path == "bsr-candidate-rp-set-threshold")
    {
        bsr_candidate_rp_set_threshold.yfilter = yfilter;
    }
    if(value_path == "is-maximum-enforcement-disabled")
    {
        is_maximum_enforcement_disabled.yfilter = yfilter;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory.yfilter = yfilter;
    }
    if(value_path == "route-threshold")
    {
        route_threshold.yfilter = yfilter;
    }
    if(value_path == "global-auto-rp-ranges-limit")
    {
        global_auto_rp_ranges_limit.yfilter = yfilter;
    }
    if(value_path == "is-global-auto-rp-ranges-limit-reached")
    {
        is_global_auto_rp_ranges_limit_reached.yfilter = yfilter;
    }
    if(value_path == "global-bsr-ranges-limit")
    {
        global_bsr_ranges_limit.yfilter = yfilter;
    }
    if(value_path == "global-bsr-ranges-count")
    {
        global_bsr_ranges_count.yfilter = yfilter;
    }
    if(value_path == "global-bsr-ranges-threshold")
    {
        global_bsr_ranges_threshold.yfilter = yfilter;
    }
    if(value_path == "is-global-bsr-ranges-limit-reached")
    {
        is_global_bsr_ranges_limit_reached.yfilter = yfilter;
    }
    if(value_path == "global-bsr-candidate-rp-set-limit")
    {
        global_bsr_candidate_rp_set_limit.yfilter = yfilter;
    }
    if(value_path == "global-bsr-candidate-rp-set-count")
    {
        global_bsr_candidate_rp_set_count.yfilter = yfilter;
    }
    if(value_path == "global-bsr-candidate-rp-set-threshold")
    {
        global_bsr_candidate_rp_set_threshold.yfilter = yfilter;
    }
    if(value_path == "is-global-route-limit-reached")
    {
        is_global_route_limit_reached.yfilter = yfilter;
    }
    if(value_path == "topology-interface-state-threshold")
    {
        topology_interface_state_threshold.yfilter = yfilter;
    }
    if(value_path == "is-global-rxi-limit-reached")
    {
        is_global_rxi_limit_reached.yfilter = yfilter;
    }
    if(value_path == "register-threshold")
    {
        register_threshold.yfilter = yfilter;
    }
    if(value_path == "global-register-limit")
    {
        global_register_limit.yfilter = yfilter;
    }
    if(value_path == "is-global-register-limit-reached")
    {
        is_global_register_limit_reached.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-limit" || name == "route-count" || name == "route-low-water-mark" || name == "is-route-limit-reached" || name == "topology-interface-state-limit" || name == "topology-interface-state-count" || name == "rxi-low-water-mark" || name == "rxi-limit-reached" || name == "register-limit" || name == "register-count" || name == "register-limit-reached" || name == "ranges-limit" || name == "ranges-count" || name == "ranges-threshold" || name == "is-ranges-limit-reached" || name == "bsr-ranges-limit" || name == "bsr-ranges-count" || name == "bsr-range-threshold" || name == "is-bsr-ranges-threshold-reached" || name == "bsr-candidate-rp-set-limit" || name == "bsr-candidate-rp-set-count" || name == "bsr-candidate-rp-set-threshold" || name == "is-maximum-enforcement-disabled" || name == "is-node-low-memory" || name == "route-threshold" || name == "global-auto-rp-ranges-limit" || name == "is-global-auto-rp-ranges-limit-reached" || name == "global-bsr-ranges-limit" || name == "global-bsr-ranges-count" || name == "global-bsr-ranges-threshold" || name == "is-global-bsr-ranges-limit-reached" || name == "global-bsr-candidate-rp-set-limit" || name == "global-bsr-candidate-rp-set-count" || name == "global-bsr-candidate-rp-set-threshold" || name == "is-global-route-limit-reached" || name == "topology-interface-state-threshold" || name == "is-global-rxi-limit-reached" || name == "register-threshold" || name == "global-register-limit" || name == "is-global-register-limit-reached")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Gre::Gre()
    :
    gre_hashes(std::make_shared<Pim::Standby::DefaultContext::Gre::GreHashes>())
    , gre_next_hops(std::make_shared<Pim::Standby::DefaultContext::Gre::GreNextHops>())
{
    gre_hashes->parent = this;
    gre_next_hops->parent = this;

    yang_name = "gre"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Gre::~Gre()
{
}

bool Pim::Standby::DefaultContext::Gre::has_data() const
{
    if (is_presence_container) return true;
    return (gre_hashes !=  nullptr && gre_hashes->has_data())
	|| (gre_next_hops !=  nullptr && gre_next_hops->has_data());
}

bool Pim::Standby::DefaultContext::Gre::has_operation() const
{
    return is_set(yfilter)
	|| (gre_hashes !=  nullptr && gre_hashes->has_operation())
	|| (gre_next_hops !=  nullptr && gre_next_hops->has_operation());
}

std::string Pim::Standby::DefaultContext::Gre::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Gre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Gre::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Gre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre-hashes")
    {
        if(gre_hashes == nullptr)
        {
            gre_hashes = std::make_shared<Pim::Standby::DefaultContext::Gre::GreHashes>();
        }
        return gre_hashes;
    }

    if(child_yang_name == "gre-next-hops")
    {
        if(gre_next_hops == nullptr)
        {
            gre_next_hops = std::make_shared<Pim::Standby::DefaultContext::Gre::GreNextHops>();
        }
        return gre_next_hops;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Gre::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(gre_hashes != nullptr)
    {
        children["gre-hashes"] = gre_hashes;
    }

    if(gre_next_hops != nullptr)
    {
        children["gre-next-hops"] = gre_next_hops;
    }

    return children;
}

void Pim::Standby::DefaultContext::Gre::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::Gre::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::Gre::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-hashes" || name == "gre-next-hops")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Gre::GreHashes::GreHashes()
    :
    gre_hash(this, {"source_address", "destination_address", "ifname"})
{

    yang_name = "gre-hashes"; yang_parent_name = "gre"; is_top_level_class = false; has_list_ancestor = false; 
}

Pim::Standby::DefaultContext::Gre::GreHashes::~GreHashes()
{
}

bool Pim::Standby::DefaultContext::Gre::GreHashes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<gre_hash.len(); index++)
    {
        if(gre_hash[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Gre::GreHashes::has_operation() const
{
    for (std::size_t index=0; index<gre_hash.len(); index++)
    {
        if(gre_hash[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::Gre::GreHashes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/gre/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim::Standby::DefaultContext::Gre::GreHashes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-hashes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim::Standby::DefaultContext::Gre::GreHashes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Gre::GreHashes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre-hash")
    {
        auto c = std::make_shared<Pim::Standby::DefaultContext::Gre::GreHashes::GreHash>();
        c->parent = this;
        gre_hash.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Gre::GreHashes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : gre_hash.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::Gre::GreHashes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::Gre::GreHashes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::Gre::GreHashes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-hash")
        return true;
    return false;
}

const Enum::YLeaf PimTopologyEntryFlag::kat {0, "kat"};
const Enum::YLeaf PimTopologyEntryFlag::aa {1, "aa"};
const Enum::YLeaf PimTopologyEntryFlag::pa {2, "pa"};
const Enum::YLeaf PimTopologyEntryFlag::ra {3, "ra"};
const Enum::YLeaf PimTopologyEntryFlag::ia {4, "ia"};
const Enum::YLeaf PimTopologyEntryFlag::rr {5, "rr"};
const Enum::YLeaf PimTopologyEntryFlag::lh {6, "lh"};
const Enum::YLeaf PimTopologyEntryFlag::dss {7, "dss"};
const Enum::YLeaf PimTopologyEntryFlag::dcc {8, "dcc"};
const Enum::YLeaf PimTopologyEntryFlag::sr {9, "sr"};
const Enum::YLeaf PimTopologyEntryFlag::e {10, "e"};
const Enum::YLeaf PimTopologyEntryFlag::ex {11, "ex"};
const Enum::YLeaf PimTopologyEntryFlag::ma {12, "ma"};
const Enum::YLeaf PimTopologyEntryFlag::mt {13, "mt"};
const Enum::YLeaf PimTopologyEntryFlag::mfa {14, "mfa"};
const Enum::YLeaf PimTopologyEntryFlag::mfp {15, "mfp"};
const Enum::YLeaf PimTopologyEntryFlag::mfb {16, "mfb"};

const Enum::YLeaf PimAfi::ipv4_unicast {0, "ipv4-unicast"};
const Enum::YLeaf PimAfi::ipv6_unicast {1, "ipv6-unicast"};

const Enum::YLeaf PimInterface::encap_interface {0, "encap-interface"};
const Enum::YLeaf PimInterface::decap_interface {1, "decap-interface"};
const Enum::YLeaf PimInterface::mdt_interface {2, "mdt-interface"};

const Enum::YLeaf PimShowRangeClient::no_client {0, "no-client"};
const Enum::YLeaf PimShowRangeClient::embedded_config {1, "embedded-config"};
const Enum::YLeaf PimShowRangeClient::embedded {2, "embedded"};
const Enum::YLeaf PimShowRangeClient::permanent {3, "permanent"};
const Enum::YLeaf PimShowRangeClient::auto_rp {4, "auto-rp"};
const Enum::YLeaf PimShowRangeClient::bsr {5, "bsr"};
const Enum::YLeaf PimShowRangeClient::config {6, "config"};
const Enum::YLeaf PimShowRangeClient::static_ {7, "static"};

const Enum::YLeaf PimInternalInterestInfo::null {21, "null"};
const Enum::YLeaf PimInternalInterestInfo::ii {22, "ii"};
const Enum::YLeaf PimInternalInterestInfo::id {23, "id"};

const Enum::YLeaf PimProtocol::non_routable {0, "non-routable"};
const Enum::YLeaf PimProtocol::sparse_mode {1, "sparse-mode"};
const Enum::YLeaf PimProtocol::dense_mode {2, "dense-mode"};
const Enum::YLeaf PimProtocol::bidir {3, "bidir"};
const Enum::YLeaf PimProtocol::ssm {4, "ssm"};
const Enum::YLeaf PimProtocol::maximum {5, "maximum"};
const Enum::YLeaf PimProtocol::any {6, "any"};

const Enum::YLeaf PimSafi::unicast {1, "unicast"};
const Enum::YLeaf PimSafi::multicast {2, "multicast"};
const Enum::YLeaf PimSafi::all {3, "all"};
const Enum::YLeaf PimSafi::default_ {4, "default"};

const Enum::YLeaf PimShowLocalInterest::null {1, "null"};
const Enum::YLeaf PimShowLocalInterest::li {2, "li"};
const Enum::YLeaf PimShowLocalInterest::ld {3, "ld"};

const Enum::YLeaf PimClient::none {0, "none"};
const Enum::YLeaf PimClient::configured_embedded_rp {1, "configured-embedded-rp"};
const Enum::YLeaf PimClient::embedded {2, "embedded"};
const Enum::YLeaf PimClient::permanent {3, "permanent"};
const Enum::YLeaf PimClient::auto_rp {4, "auto-rp"};
const Enum::YLeaf PimClient::bsr {5, "bsr"};
const Enum::YLeaf PimClient::configured {6, "configured"};
const Enum::YLeaf PimClient::static_ {7, "static"};

const Enum::YLeaf PimShowProtocol::no_route {0, "no-route"};
const Enum::YLeaf PimShowProtocol::sm {1, "sm"};
const Enum::YLeaf PimShowProtocol::dm {2, "dm"};
const Enum::YLeaf PimShowProtocol::bidir {3, "bidir"};
const Enum::YLeaf PimShowProtocol::ssm {4, "ssm"};
const Enum::YLeaf PimShowProtocol::maximum {5, "maximum"};
const Enum::YLeaf PimShowProtocol::any {6, "any"};

const Enum::YLeaf PimTopologyInterfaceFlag::lh {0, "lh"};
const Enum::YLeaf PimTopologyInterfaceFlag::ld {1, "ld"};
const Enum::YLeaf PimTopologyInterfaceFlag::li {2, "li"};
const Enum::YLeaf PimTopologyInterfaceFlag::ii {3, "ii"};
const Enum::YLeaf PimTopologyInterfaceFlag::id {4, "id"};
const Enum::YLeaf PimTopologyInterfaceFlag::as {5, "as"};
const Enum::YLeaf PimTopologyInterfaceFlag::ab {6, "ab"};
const Enum::YLeaf PimTopologyInterfaceFlag::ex {7, "ex"};


}
}

