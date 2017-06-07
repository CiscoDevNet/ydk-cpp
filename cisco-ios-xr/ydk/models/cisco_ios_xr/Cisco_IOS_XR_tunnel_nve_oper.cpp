
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_tunnel_nve_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_tunnel_nve_oper {

Nve::Nve()
    :
    interfaces(std::make_shared<Nve::Interfaces>())
	,vnis(std::make_shared<Nve::Vnis>())
{
    interfaces->parent = this;

    vnis->parent = this;

    yang_name = "nve"; yang_parent_name = "Cisco-IOS-XR-tunnel-nve-oper";
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
    return is_set(operation)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (vnis !=  nullptr && vnis->has_operation());
}

std::string Nve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-nve-oper:nve";

    return path_buffer.str();

}

const EntityPath Nve::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Nve::set_value(const std::string & value_path, std::string value)
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

Nve::Vnis::Vnis()
{
    yang_name = "vnis"; yang_parent_name = "nve";
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
    return is_set(operation);
}

std::string Nve::Vnis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vnis";

    return path_buffer.str();

}

const EntityPath Nve::Vnis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-nve-oper:nve/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Nve::Vnis::set_value(const std::string & value_path, std::string value)
{
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
    yang_name = "vni"; yang_parent_name = "vnis";
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
    return is_set(operation)
	|| is_set(vni.operation)
	|| is_set(bvi_ifh.operation)
	|| is_set(bvi_mac.operation)
	|| is_set(bvi_state.operation)
	|| is_set(flags.operation)
	|| is_set(interface_name.operation)
	|| is_set(ipv4_tbl_id.operation)
	|| is_set(ipv6_tbl_id.operation)
	|| is_set(mcast_flags.operation)
	|| is_set(mcast_ipv4_address.operation)
	|| is_set(state.operation)
	|| is_set(topo_id.operation)
	|| is_set(topo_name.operation)
	|| is_set(topo_valid.operation)
	|| is_set(udp_port.operation)
	|| is_set(vni_max.operation)
	|| is_set(vni_min.operation)
	|| is_set(vni_xr.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_name.operation)
	|| is_set(vrf_vni.operation);
}

std::string Nve::Vnis::Vni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vni" <<"[vni='" <<vni <<"']";

    return path_buffer.str();

}

const EntityPath Nve::Vnis::Vni::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-nve-oper:nve/vnis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vni.is_set || is_set(vni.operation)) leaf_name_data.push_back(vni.get_name_leafdata());
    if (bvi_ifh.is_set || is_set(bvi_ifh.operation)) leaf_name_data.push_back(bvi_ifh.get_name_leafdata());
    if (bvi_mac.is_set || is_set(bvi_mac.operation)) leaf_name_data.push_back(bvi_mac.get_name_leafdata());
    if (bvi_state.is_set || is_set(bvi_state.operation)) leaf_name_data.push_back(bvi_state.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ipv4_tbl_id.is_set || is_set(ipv4_tbl_id.operation)) leaf_name_data.push_back(ipv4_tbl_id.get_name_leafdata());
    if (ipv6_tbl_id.is_set || is_set(ipv6_tbl_id.operation)) leaf_name_data.push_back(ipv6_tbl_id.get_name_leafdata());
    if (mcast_flags.is_set || is_set(mcast_flags.operation)) leaf_name_data.push_back(mcast_flags.get_name_leafdata());
    if (mcast_ipv4_address.is_set || is_set(mcast_ipv4_address.operation)) leaf_name_data.push_back(mcast_ipv4_address.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (topo_id.is_set || is_set(topo_id.operation)) leaf_name_data.push_back(topo_id.get_name_leafdata());
    if (topo_name.is_set || is_set(topo_name.operation)) leaf_name_data.push_back(topo_name.get_name_leafdata());
    if (topo_valid.is_set || is_set(topo_valid.operation)) leaf_name_data.push_back(topo_valid.get_name_leafdata());
    if (udp_port.is_set || is_set(udp_port.operation)) leaf_name_data.push_back(udp_port.get_name_leafdata());
    if (vni_max.is_set || is_set(vni_max.operation)) leaf_name_data.push_back(vni_max.get_name_leafdata());
    if (vni_min.is_set || is_set(vni_min.operation)) leaf_name_data.push_back(vni_min.get_name_leafdata());
    if (vni_xr.is_set || is_set(vni_xr.operation)) leaf_name_data.push_back(vni_xr.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrf_vni.is_set || is_set(vrf_vni.operation)) leaf_name_data.push_back(vrf_vni.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Nve::Vnis::Vni::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vni")
    {
        vni = value;
    }
    if(value_path == "bvi-ifh")
    {
        bvi_ifh = value;
    }
    if(value_path == "bvi-mac")
    {
        bvi_mac = value;
    }
    if(value_path == "bvi-state")
    {
        bvi_state = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "ipv4-tbl-id")
    {
        ipv4_tbl_id = value;
    }
    if(value_path == "ipv6-tbl-id")
    {
        ipv6_tbl_id = value;
    }
    if(value_path == "mcast-flags")
    {
        mcast_flags = value;
    }
    if(value_path == "mcast-ipv4-address")
    {
        mcast_ipv4_address = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "topo-id")
    {
        topo_id = value;
    }
    if(value_path == "topo-name")
    {
        topo_name = value;
    }
    if(value_path == "topo-valid")
    {
        topo_valid = value;
    }
    if(value_path == "udp-port")
    {
        udp_port = value;
    }
    if(value_path == "vni-max")
    {
        vni_max = value;
    }
    if(value_path == "vni-min")
    {
        vni_min = value;
    }
    if(value_path == "vni-xr")
    {
        vni_xr = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "vrf-vni")
    {
        vrf_vni = value;
    }
}

Nve::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "nve";
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
    return is_set(operation);
}

std::string Nve::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath Nve::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-nve-oper:nve/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Nve::Interfaces::set_value(const std::string & value_path, std::string value)
{
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
    yang_name = "interface"; yang_parent_name = "interfaces";
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
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(admin_state.operation)
	|| is_set(any_cast_source_interface_name.operation)
	|| is_set(any_cast_source_ipv4_address.operation)
	|| is_set(any_cast_source_state.operation)
	|| is_set(encap.operation)
	|| is_set(flags.operation)
	|| is_set(if_handle.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(source_interface_name.operation)
	|| is_set(source_ipv4_address.operation)
	|| is_set(source_state.operation)
	|| is_set(state.operation)
	|| is_set(sync_mcast_flags.operation)
	|| is_set(sync_mcast_ipv4_address.operation)
	|| is_set(udp_port.operation);
}

std::string Nve::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Nve::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-nve-oper:nve/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.operation)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (any_cast_source_interface_name.is_set || is_set(any_cast_source_interface_name.operation)) leaf_name_data.push_back(any_cast_source_interface_name.get_name_leafdata());
    if (any_cast_source_ipv4_address.is_set || is_set(any_cast_source_ipv4_address.operation)) leaf_name_data.push_back(any_cast_source_ipv4_address.get_name_leafdata());
    if (any_cast_source_state.is_set || is_set(any_cast_source_state.operation)) leaf_name_data.push_back(any_cast_source_state.get_name_leafdata());
    if (encap.is_set || is_set(encap.operation)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (if_handle.is_set || is_set(if_handle.operation)) leaf_name_data.push_back(if_handle.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (source_interface_name.is_set || is_set(source_interface_name.operation)) leaf_name_data.push_back(source_interface_name.get_name_leafdata());
    if (source_ipv4_address.is_set || is_set(source_ipv4_address.operation)) leaf_name_data.push_back(source_ipv4_address.get_name_leafdata());
    if (source_state.is_set || is_set(source_state.operation)) leaf_name_data.push_back(source_state.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (sync_mcast_flags.is_set || is_set(sync_mcast_flags.operation)) leaf_name_data.push_back(sync_mcast_flags.get_name_leafdata());
    if (sync_mcast_ipv4_address.is_set || is_set(sync_mcast_ipv4_address.operation)) leaf_name_data.push_back(sync_mcast_ipv4_address.get_name_leafdata());
    if (udp_port.is_set || is_set(udp_port.operation)) leaf_name_data.push_back(udp_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void Nve::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
    }
    if(value_path == "any-cast-source-interface-name")
    {
        any_cast_source_interface_name = value;
    }
    if(value_path == "any-cast-source-ipv4-address")
    {
        any_cast_source_ipv4_address = value;
    }
    if(value_path == "any-cast-source-state")
    {
        any_cast_source_state = value;
    }
    if(value_path == "encap")
    {
        encap = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "if-handle")
    {
        if_handle = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "source-interface-name")
    {
        source_interface_name = value;
    }
    if(value_path == "source-ipv4-address")
    {
        source_ipv4_address = value;
    }
    if(value_path == "source-state")
    {
        source_state = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "sync-mcast-flags")
    {
        sync_mcast_flags = value;
    }
    if(value_path == "sync-mcast-ipv4-address")
    {
        sync_mcast_ipv4_address = value;
    }
    if(value_path == "udp-port")
    {
        udp_port = value;
    }
}


}
}

