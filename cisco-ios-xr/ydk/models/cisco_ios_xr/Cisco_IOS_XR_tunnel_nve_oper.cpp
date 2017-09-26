
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_tunnel_nve_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tunnel_nve_oper {

Nve::Nve()
    :
    interfaces(std::make_shared<Nve::Interfaces>())
	,vnis(std::make_shared<Nve::Vnis>())
{
    interfaces->parent = this;
    vnis->parent = this;

    yang_name = "nve"; yang_parent_name = "Cisco-IOS-XR-tunnel-nve-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Nve::~Nve()
{
}

bool Nve::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (vnis !=  nullptr && vnis->has_data());
}

bool Nve::has_operation() const
{
    return is_set(yfilter)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (vnis !=  nullptr && vnis->has_operation());
}

std::string Nve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-nve-oper:nve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Nve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Nve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Nve::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "vnis")
    {
        if(vnis == nullptr)
        {
            vnis = std::make_shared<Nve::Vnis>();
        }
        return vnis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Nve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(vnis != nullptr)
    {
        children["vnis"] = vnis;
    }

    return children;
}

void Nve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Nve::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Nve::clone_ptr() const
{
    return std::make_shared<Nve>();
}

std::string Nve::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Nve::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Nve::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Nve::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Nve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "vnis")
        return true;
    return false;
}

Nve::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "nve"; is_top_level_class = false; has_list_ancestor = false;
}

Nve::Interfaces::~Interfaces()
{
}

bool Nve::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Nve::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Nve::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-nve-oper:nve/" << get_segment_path();
    return path_buffer.str();
}

std::string Nve::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Nve::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Nve::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Nve::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Nve::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Nve::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Nve::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Nve::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Nve::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    admin_state{YType::int8, "admin-state"},
    any_cast_source_interface_name{YType::str, "any-cast-source-interface-name"},
    any_cast_source_ipv4_address{YType::str, "any-cast-source-ipv4-address"},
    any_cast_source_state{YType::int8, "any-cast-source-state"},
    encap{YType::int8, "encap"},
    flags{YType::uint32, "flags"},
    if_handle{YType::uint64, "if-handle"},
    interface_name_xr{YType::str, "interface-name-xr"},
    source_interface_name{YType::str, "source-interface-name"},
    source_ipv4_address{YType::str, "source-ipv4-address"},
    source_state{YType::int8, "source-state"},
    state{YType::int8, "state"},
    sync_mcast_flags{YType::uint32, "sync-mcast-flags"},
    sync_mcast_ipv4_address{YType::str, "sync-mcast-ipv4-address"},
    udp_port{YType::uint32, "udp-port"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Nve::Interfaces::Interface::~Interface()
{
}

bool Nve::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| admin_state.is_set
	|| any_cast_source_interface_name.is_set
	|| any_cast_source_ipv4_address.is_set
	|| any_cast_source_state.is_set
	|| encap.is_set
	|| flags.is_set
	|| if_handle.is_set
	|| interface_name_xr.is_set
	|| source_interface_name.is_set
	|| source_ipv4_address.is_set
	|| source_state.is_set
	|| state.is_set
	|| sync_mcast_flags.is_set
	|| sync_mcast_ipv4_address.is_set
	|| udp_port.is_set;
}

bool Nve::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(any_cast_source_interface_name.yfilter)
	|| ydk::is_set(any_cast_source_ipv4_address.yfilter)
	|| ydk::is_set(any_cast_source_state.yfilter)
	|| ydk::is_set(encap.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(if_handle.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(source_interface_name.yfilter)
	|| ydk::is_set(source_ipv4_address.yfilter)
	|| ydk::is_set(source_state.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(sync_mcast_flags.yfilter)
	|| ydk::is_set(sync_mcast_ipv4_address.yfilter)
	|| ydk::is_set(udp_port.yfilter);
}

std::string Nve::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-nve-oper:nve/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Nve::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Nve::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (any_cast_source_interface_name.is_set || is_set(any_cast_source_interface_name.yfilter)) leaf_name_data.push_back(any_cast_source_interface_name.get_name_leafdata());
    if (any_cast_source_ipv4_address.is_set || is_set(any_cast_source_ipv4_address.yfilter)) leaf_name_data.push_back(any_cast_source_ipv4_address.get_name_leafdata());
    if (any_cast_source_state.is_set || is_set(any_cast_source_state.yfilter)) leaf_name_data.push_back(any_cast_source_state.get_name_leafdata());
    if (encap.is_set || is_set(encap.yfilter)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (if_handle.is_set || is_set(if_handle.yfilter)) leaf_name_data.push_back(if_handle.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (source_interface_name.is_set || is_set(source_interface_name.yfilter)) leaf_name_data.push_back(source_interface_name.get_name_leafdata());
    if (source_ipv4_address.is_set || is_set(source_ipv4_address.yfilter)) leaf_name_data.push_back(source_ipv4_address.get_name_leafdata());
    if (source_state.is_set || is_set(source_state.yfilter)) leaf_name_data.push_back(source_state.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (sync_mcast_flags.is_set || is_set(sync_mcast_flags.yfilter)) leaf_name_data.push_back(sync_mcast_flags.get_name_leafdata());
    if (sync_mcast_ipv4_address.is_set || is_set(sync_mcast_ipv4_address.yfilter)) leaf_name_data.push_back(sync_mcast_ipv4_address.get_name_leafdata());
    if (udp_port.is_set || is_set(udp_port.yfilter)) leaf_name_data.push_back(udp_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Nve::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Nve::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Nve::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any-cast-source-interface-name")
    {
        any_cast_source_interface_name = value;
        any_cast_source_interface_name.value_namespace = name_space;
        any_cast_source_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any-cast-source-ipv4-address")
    {
        any_cast_source_ipv4_address = value;
        any_cast_source_ipv4_address.value_namespace = name_space;
        any_cast_source_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any-cast-source-state")
    {
        any_cast_source_state = value;
        any_cast_source_state.value_namespace = name_space;
        any_cast_source_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap")
    {
        encap = value;
        encap.value_namespace = name_space;
        encap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-handle")
    {
        if_handle = value;
        if_handle.value_namespace = name_space;
        if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface-name")
    {
        source_interface_name = value;
        source_interface_name.value_namespace = name_space;
        source_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ipv4-address")
    {
        source_ipv4_address = value;
        source_ipv4_address.value_namespace = name_space;
        source_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-state")
    {
        source_state = value;
        source_state.value_namespace = name_space;
        source_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-mcast-flags")
    {
        sync_mcast_flags = value;
        sync_mcast_flags.value_namespace = name_space;
        sync_mcast_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-mcast-ipv4-address")
    {
        sync_mcast_ipv4_address = value;
        sync_mcast_ipv4_address.value_namespace = name_space;
        sync_mcast_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-port")
    {
        udp_port = value;
        udp_port.value_namespace = name_space;
        udp_port.value_namespace_prefix = name_space_prefix;
    }
}

void Nve::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "any-cast-source-interface-name")
    {
        any_cast_source_interface_name.yfilter = yfilter;
    }
    if(value_path == "any-cast-source-ipv4-address")
    {
        any_cast_source_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "any-cast-source-state")
    {
        any_cast_source_state.yfilter = yfilter;
    }
    if(value_path == "encap")
    {
        encap.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "if-handle")
    {
        if_handle.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "source-interface-name")
    {
        source_interface_name.yfilter = yfilter;
    }
    if(value_path == "source-ipv4-address")
    {
        source_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "source-state")
    {
        source_state.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "sync-mcast-flags")
    {
        sync_mcast_flags.yfilter = yfilter;
    }
    if(value_path == "sync-mcast-ipv4-address")
    {
        sync_mcast_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "udp-port")
    {
        udp_port.yfilter = yfilter;
    }
}

bool Nve::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "admin-state" || name == "any-cast-source-interface-name" || name == "any-cast-source-ipv4-address" || name == "any-cast-source-state" || name == "encap" || name == "flags" || name == "if-handle" || name == "interface-name-xr" || name == "source-interface-name" || name == "source-ipv4-address" || name == "source-state" || name == "state" || name == "sync-mcast-flags" || name == "sync-mcast-ipv4-address" || name == "udp-port")
        return true;
    return false;
}

Nve::Vnis::Vnis()
{

    yang_name = "vnis"; yang_parent_name = "nve"; is_top_level_class = false; has_list_ancestor = false;
}

Nve::Vnis::~Vnis()
{
}

bool Nve::Vnis::has_data() const
{
    for (std::size_t index=0; index<vni.size(); index++)
    {
        if(vni[index]->has_data())
            return true;
    }
    return false;
}

bool Nve::Vnis::has_operation() const
{
    for (std::size_t index=0; index<vni.size(); index++)
    {
        if(vni[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Nve::Vnis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-nve-oper:nve/" << get_segment_path();
    return path_buffer.str();
}

std::string Nve::Vnis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vnis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Nve::Vnis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Nve::Vnis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vni")
    {
        for(auto const & c : vni)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Nve::Vnis::Vni>();
        c->parent = this;
        vni.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Nve::Vnis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vni)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Nve::Vnis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Nve::Vnis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Nve::Vnis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vni")
        return true;
    return false;
}

Nve::Vnis::Vni::Vni()
    :
    vni{YType::str, "vni"},
    bvi_ifh{YType::uint32, "bvi-ifh"},
    bvi_mac{YType::str, "bvi-mac"},
    bvi_state{YType::uint8, "bvi-state"},
    flags{YType::uint32, "flags"},
    interface_name{YType::str, "interface-name"},
    ipv4_tbl_id{YType::uint32, "ipv4-tbl-id"},
    ipv6_tbl_id{YType::uint32, "ipv6-tbl-id"},
    mcast_flags{YType::uint32, "mcast-flags"},
    mcast_ipv4_address{YType::str, "mcast-ipv4-address"},
    state{YType::int8, "state"},
    topo_id{YType::uint32, "topo-id"},
    topo_name{YType::str, "topo-name"},
    topo_valid{YType::boolean, "topo-valid"},
    udp_port{YType::uint32, "udp-port"},
    vni_max{YType::uint32, "vni-max"},
    vni_min{YType::uint32, "vni-min"},
    vni_xr{YType::uint32, "vni-xr"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_name{YType::str, "vrf-name"},
    vrf_vni{YType::uint32, "vrf-vni"}
{

    yang_name = "vni"; yang_parent_name = "vnis"; is_top_level_class = false; has_list_ancestor = false;
}

Nve::Vnis::Vni::~Vni()
{
}

bool Nve::Vnis::Vni::has_data() const
{
    return vni.is_set
	|| bvi_ifh.is_set
	|| bvi_mac.is_set
	|| bvi_state.is_set
	|| flags.is_set
	|| interface_name.is_set
	|| ipv4_tbl_id.is_set
	|| ipv6_tbl_id.is_set
	|| mcast_flags.is_set
	|| mcast_ipv4_address.is_set
	|| state.is_set
	|| topo_id.is_set
	|| topo_name.is_set
	|| topo_valid.is_set
	|| udp_port.is_set
	|| vni_max.is_set
	|| vni_min.is_set
	|| vni_xr.is_set
	|| vrf_id.is_set
	|| vrf_name.is_set
	|| vrf_vni.is_set;
}

bool Nve::Vnis::Vni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vni.yfilter)
	|| ydk::is_set(bvi_ifh.yfilter)
	|| ydk::is_set(bvi_mac.yfilter)
	|| ydk::is_set(bvi_state.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(ipv4_tbl_id.yfilter)
	|| ydk::is_set(ipv6_tbl_id.yfilter)
	|| ydk::is_set(mcast_flags.yfilter)
	|| ydk::is_set(mcast_ipv4_address.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(topo_id.yfilter)
	|| ydk::is_set(topo_name.yfilter)
	|| ydk::is_set(topo_valid.yfilter)
	|| ydk::is_set(udp_port.yfilter)
	|| ydk::is_set(vni_max.yfilter)
	|| ydk::is_set(vni_min.yfilter)
	|| ydk::is_set(vni_xr.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(vrf_vni.yfilter);
}

std::string Nve::Vnis::Vni::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-nve-oper:nve/vnis/" << get_segment_path();
    return path_buffer.str();
}

std::string Nve::Vnis::Vni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vni" <<"[vni='" <<vni <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Nve::Vnis::Vni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());
    if (bvi_ifh.is_set || is_set(bvi_ifh.yfilter)) leaf_name_data.push_back(bvi_ifh.get_name_leafdata());
    if (bvi_mac.is_set || is_set(bvi_mac.yfilter)) leaf_name_data.push_back(bvi_mac.get_name_leafdata());
    if (bvi_state.is_set || is_set(bvi_state.yfilter)) leaf_name_data.push_back(bvi_state.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ipv4_tbl_id.is_set || is_set(ipv4_tbl_id.yfilter)) leaf_name_data.push_back(ipv4_tbl_id.get_name_leafdata());
    if (ipv6_tbl_id.is_set || is_set(ipv6_tbl_id.yfilter)) leaf_name_data.push_back(ipv6_tbl_id.get_name_leafdata());
    if (mcast_flags.is_set || is_set(mcast_flags.yfilter)) leaf_name_data.push_back(mcast_flags.get_name_leafdata());
    if (mcast_ipv4_address.is_set || is_set(mcast_ipv4_address.yfilter)) leaf_name_data.push_back(mcast_ipv4_address.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (topo_id.is_set || is_set(topo_id.yfilter)) leaf_name_data.push_back(topo_id.get_name_leafdata());
    if (topo_name.is_set || is_set(topo_name.yfilter)) leaf_name_data.push_back(topo_name.get_name_leafdata());
    if (topo_valid.is_set || is_set(topo_valid.yfilter)) leaf_name_data.push_back(topo_valid.get_name_leafdata());
    if (udp_port.is_set || is_set(udp_port.yfilter)) leaf_name_data.push_back(udp_port.get_name_leafdata());
    if (vni_max.is_set || is_set(vni_max.yfilter)) leaf_name_data.push_back(vni_max.get_name_leafdata());
    if (vni_min.is_set || is_set(vni_min.yfilter)) leaf_name_data.push_back(vni_min.get_name_leafdata());
    if (vni_xr.is_set || is_set(vni_xr.yfilter)) leaf_name_data.push_back(vni_xr.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrf_vni.is_set || is_set(vrf_vni.yfilter)) leaf_name_data.push_back(vrf_vni.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Nve::Vnis::Vni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Nve::Vnis::Vni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Nve::Vnis::Vni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-ifh")
    {
        bvi_ifh = value;
        bvi_ifh.value_namespace = name_space;
        bvi_ifh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-mac")
    {
        bvi_mac = value;
        bvi_mac.value_namespace = name_space;
        bvi_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-state")
    {
        bvi_state = value;
        bvi_state.value_namespace = name_space;
        bvi_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tbl-id")
    {
        ipv4_tbl_id = value;
        ipv4_tbl_id.value_namespace = name_space;
        ipv4_tbl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-tbl-id")
    {
        ipv6_tbl_id = value;
        ipv6_tbl_id.value_namespace = name_space;
        ipv6_tbl_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast-flags")
    {
        mcast_flags = value;
        mcast_flags.value_namespace = name_space;
        mcast_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast-ipv4-address")
    {
        mcast_ipv4_address = value;
        mcast_ipv4_address.value_namespace = name_space;
        mcast_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-id")
    {
        topo_id = value;
        topo_id.value_namespace = name_space;
        topo_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-name")
    {
        topo_name = value;
        topo_name.value_namespace = name_space;
        topo_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topo-valid")
    {
        topo_valid = value;
        topo_valid.value_namespace = name_space;
        topo_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-port")
    {
        udp_port = value;
        udp_port.value_namespace = name_space;
        udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-max")
    {
        vni_max = value;
        vni_max.value_namespace = name_space;
        vni_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-min")
    {
        vni_min = value;
        vni_min.value_namespace = name_space;
        vni_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-xr")
    {
        vni_xr = value;
        vni_xr.value_namespace = name_space;
        vni_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-vni")
    {
        vrf_vni = value;
        vrf_vni.value_namespace = name_space;
        vrf_vni.value_namespace_prefix = name_space_prefix;
    }
}

void Nve::Vnis::Vni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
    if(value_path == "bvi-ifh")
    {
        bvi_ifh.yfilter = yfilter;
    }
    if(value_path == "bvi-mac")
    {
        bvi_mac.yfilter = yfilter;
    }
    if(value_path == "bvi-state")
    {
        bvi_state.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-tbl-id")
    {
        ipv4_tbl_id.yfilter = yfilter;
    }
    if(value_path == "ipv6-tbl-id")
    {
        ipv6_tbl_id.yfilter = yfilter;
    }
    if(value_path == "mcast-flags")
    {
        mcast_flags.yfilter = yfilter;
    }
    if(value_path == "mcast-ipv4-address")
    {
        mcast_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "topo-id")
    {
        topo_id.yfilter = yfilter;
    }
    if(value_path == "topo-name")
    {
        topo_name.yfilter = yfilter;
    }
    if(value_path == "topo-valid")
    {
        topo_valid.yfilter = yfilter;
    }
    if(value_path == "udp-port")
    {
        udp_port.yfilter = yfilter;
    }
    if(value_path == "vni-max")
    {
        vni_max.yfilter = yfilter;
    }
    if(value_path == "vni-min")
    {
        vni_min.yfilter = yfilter;
    }
    if(value_path == "vni-xr")
    {
        vni_xr.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-vni")
    {
        vrf_vni.yfilter = yfilter;
    }
}

bool Nve::Vnis::Vni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vni" || name == "bvi-ifh" || name == "bvi-mac" || name == "bvi-state" || name == "flags" || name == "interface-name" || name == "ipv4-tbl-id" || name == "ipv6-tbl-id" || name == "mcast-flags" || name == "mcast-ipv4-address" || name == "state" || name == "topo-id" || name == "topo-name" || name == "topo-valid" || name == "udp-port" || name == "vni-max" || name == "vni-min" || name == "vni-xr" || name == "vrf-id" || name == "vrf-name" || name == "vrf-vni")
        return true;
    return false;
}


}
}

