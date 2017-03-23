
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_ntp_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_ntp_cfg {

Ntp::Ntp()
    :
    broadcast_delay{YType::uint32, "broadcast-delay"},
    log_internal_sync{YType::empty, "log-internal-sync"},
    master{YType::uint32, "master"},
    max_associations{YType::int32, "max-associations"},
    update_calendar{YType::empty, "update-calendar"}
    	,
    access_group_tables(std::make_shared<Ntp::AccessGroupTables>())
	,authentication(std::make_shared<Ntp::Authentication>())
	,dscp_ipv4(nullptr) // presence node
	,dscp_ipv6(nullptr) // presence node
	,interface_tables(std::make_shared<Ntp::InterfaceTables>())
	,passive(std::make_shared<Ntp::Passive>())
	,peer_vrfs(std::make_shared<Ntp::PeerVrfs>())
	,sources(std::make_shared<Ntp::Sources>())
{
    access_group_tables->parent = this;
    children["access-group-tables"] = access_group_tables;

    authentication->parent = this;
    children["authentication"] = authentication;

    interface_tables->parent = this;
    children["interface-tables"] = interface_tables;

    passive->parent = this;
    children["passive"] = passive;

    peer_vrfs->parent = this;
    children["peer-vrfs"] = peer_vrfs;

    sources->parent = this;
    children["sources"] = sources;

    yang_name = "ntp"; yang_parent_name = "Cisco-IOS-XR-ip-ntp-cfg";
}

Ntp::~Ntp()
{
}

bool Ntp::has_data() const
{
    return broadcast_delay.is_set
	|| log_internal_sync.is_set
	|| master.is_set
	|| max_associations.is_set
	|| update_calendar.is_set
	|| (access_group_tables !=  nullptr && access_group_tables->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (dscp_ipv4 !=  nullptr && dscp_ipv4->has_data())
	|| (dscp_ipv6 !=  nullptr && dscp_ipv6->has_data())
	|| (interface_tables !=  nullptr && interface_tables->has_data())
	|| (passive !=  nullptr && passive->has_data())
	|| (peer_vrfs !=  nullptr && peer_vrfs->has_data())
	|| (sources !=  nullptr && sources->has_data());
}

bool Ntp::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast_delay.operation)
	|| is_set(log_internal_sync.operation)
	|| is_set(master.operation)
	|| is_set(max_associations.operation)
	|| is_set(update_calendar.operation)
	|| (access_group_tables !=  nullptr && access_group_tables->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (dscp_ipv4 !=  nullptr && dscp_ipv4->has_operation())
	|| (dscp_ipv6 !=  nullptr && dscp_ipv6->has_operation())
	|| (interface_tables !=  nullptr && interface_tables->has_operation())
	|| (passive !=  nullptr && passive->has_operation())
	|| (peer_vrfs !=  nullptr && peer_vrfs->has_operation())
	|| (sources !=  nullptr && sources->has_operation());
}

std::string Ntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp";

    return path_buffer.str();

}

EntityPath Ntp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_delay.is_set || is_set(broadcast_delay.operation)) leaf_name_data.push_back(broadcast_delay.get_name_leafdata());
    if (log_internal_sync.is_set || is_set(log_internal_sync.operation)) leaf_name_data.push_back(log_internal_sync.get_name_leafdata());
    if (master.is_set || is_set(master.operation)) leaf_name_data.push_back(master.get_name_leafdata());
    if (max_associations.is_set || is_set(max_associations.operation)) leaf_name_data.push_back(max_associations.get_name_leafdata());
    if (update_calendar.is_set || is_set(update_calendar.operation)) leaf_name_data.push_back(update_calendar.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "access-group-tables")
    {
        if(access_group_tables != nullptr)
        {
            children["access-group-tables"] = access_group_tables;
        }
        else
        {
            access_group_tables = std::make_shared<Ntp::AccessGroupTables>();
            access_group_tables->parent = this;
            children["access-group-tables"] = access_group_tables;
        }
        return children.at("access-group-tables");
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
        else
        {
            authentication = std::make_shared<Ntp::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "dscp-ipv4")
    {
        if(dscp_ipv4 != nullptr)
        {
            children["dscp-ipv4"] = dscp_ipv4;
        }
        else
        {
            dscp_ipv4 = std::make_shared<Ntp::DscpIpv4>();
            dscp_ipv4->parent = this;
            children["dscp-ipv4"] = dscp_ipv4;
        }
        return children.at("dscp-ipv4");
    }

    if(child_yang_name == "dscp-ipv6")
    {
        if(dscp_ipv6 != nullptr)
        {
            children["dscp-ipv6"] = dscp_ipv6;
        }
        else
        {
            dscp_ipv6 = std::make_shared<Ntp::DscpIpv6>();
            dscp_ipv6->parent = this;
            children["dscp-ipv6"] = dscp_ipv6;
        }
        return children.at("dscp-ipv6");
    }

    if(child_yang_name == "interface-tables")
    {
        if(interface_tables != nullptr)
        {
            children["interface-tables"] = interface_tables;
        }
        else
        {
            interface_tables = std::make_shared<Ntp::InterfaceTables>();
            interface_tables->parent = this;
            children["interface-tables"] = interface_tables;
        }
        return children.at("interface-tables");
    }

    if(child_yang_name == "passive")
    {
        if(passive != nullptr)
        {
            children["passive"] = passive;
        }
        else
        {
            passive = std::make_shared<Ntp::Passive>();
            passive->parent = this;
            children["passive"] = passive;
        }
        return children.at("passive");
    }

    if(child_yang_name == "peer-vrfs")
    {
        if(peer_vrfs != nullptr)
        {
            children["peer-vrfs"] = peer_vrfs;
        }
        else
        {
            peer_vrfs = std::make_shared<Ntp::PeerVrfs>();
            peer_vrfs->parent = this;
            children["peer-vrfs"] = peer_vrfs;
        }
        return children.at("peer-vrfs");
    }

    if(child_yang_name == "sources")
    {
        if(sources != nullptr)
        {
            children["sources"] = sources;
        }
        else
        {
            sources = std::make_shared<Ntp::Sources>();
            sources->parent = this;
            children["sources"] = sources;
        }
        return children.at("sources");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::get_children()
{
    if(children.find("access-group-tables") == children.end())
    {
        if(access_group_tables != nullptr)
        {
            children["access-group-tables"] = access_group_tables;
        }
    }

    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("dscp-ipv4") == children.end())
    {
        if(dscp_ipv4 != nullptr)
        {
            children["dscp-ipv4"] = dscp_ipv4;
        }
    }

    if(children.find("dscp-ipv6") == children.end())
    {
        if(dscp_ipv6 != nullptr)
        {
            children["dscp-ipv6"] = dscp_ipv6;
        }
    }

    if(children.find("interface-tables") == children.end())
    {
        if(interface_tables != nullptr)
        {
            children["interface-tables"] = interface_tables;
        }
    }

    if(children.find("passive") == children.end())
    {
        if(passive != nullptr)
        {
            children["passive"] = passive;
        }
    }

    if(children.find("peer-vrfs") == children.end())
    {
        if(peer_vrfs != nullptr)
        {
            children["peer-vrfs"] = peer_vrfs;
        }
    }

    if(children.find("sources") == children.end())
    {
        if(sources != nullptr)
        {
            children["sources"] = sources;
        }
    }

    return children;
}

void Ntp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast-delay")
    {
        broadcast_delay = value;
    }
    if(value_path == "log-internal-sync")
    {
        log_internal_sync = value;
    }
    if(value_path == "master")
    {
        master = value;
    }
    if(value_path == "max-associations")
    {
        max_associations = value;
    }
    if(value_path == "update-calendar")
    {
        update_calendar = value;
    }
}

std::shared_ptr<Entity> Ntp::clone_ptr() const
{
    return std::make_shared<Ntp>();
}

std::string Ntp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ntp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ntp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Ntp::PeerVrfs::PeerVrfs()
{
    yang_name = "peer-vrfs"; yang_parent_name = "ntp";
}

Ntp::PeerVrfs::~PeerVrfs()
{
}

bool Ntp::PeerVrfs::has_data() const
{
    for (std::size_t index=0; index<peer_vrf.size(); index++)
    {
        if(peer_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ntp::PeerVrfs::has_operation() const
{
    for (std::size_t index=0; index<peer_vrf.size(); index++)
    {
        if(peer_vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ntp::PeerVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-vrfs";

    return path_buffer.str();

}

EntityPath Ntp::PeerVrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::PeerVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-vrf")
    {
        for(auto const & c : peer_vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ntp::PeerVrfs::PeerVrf>();
        c->parent = this;
        peer_vrf.push_back(std::move(c));
        children[segment_path] = peer_vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::PeerVrfs::get_children()
{
    for (auto const & c : peer_vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ntp::PeerVrfs::set_value(const std::string & value_path, std::string value)
{
}

Ntp::PeerVrfs::PeerVrf::PeerVrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    peer_ipv4s(std::make_shared<Ntp::PeerVrfs::PeerVrf::PeerIpv4S>())
	,peer_ipv6s(std::make_shared<Ntp::PeerVrfs::PeerVrf::PeerIpv6S>())
{
    peer_ipv4s->parent = this;
    children["peer-ipv4s"] = peer_ipv4s;

    peer_ipv6s->parent = this;
    children["peer-ipv6s"] = peer_ipv6s;

    yang_name = "peer-vrf"; yang_parent_name = "peer-vrfs";
}

Ntp::PeerVrfs::PeerVrf::~PeerVrf()
{
}

bool Ntp::PeerVrfs::PeerVrf::has_data() const
{
    return vrf_name.is_set
	|| (peer_ipv4s !=  nullptr && peer_ipv4s->has_data())
	|| (peer_ipv6s !=  nullptr && peer_ipv6s->has_data());
}

bool Ntp::PeerVrfs::PeerVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (peer_ipv4s !=  nullptr && peer_ipv4s->has_operation())
	|| (peer_ipv6s !=  nullptr && peer_ipv6s->has_operation());
}

std::string Ntp::PeerVrfs::PeerVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath Ntp::PeerVrfs::PeerVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/peer-vrfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::PeerVrfs::PeerVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-ipv4s")
    {
        if(peer_ipv4s != nullptr)
        {
            children["peer-ipv4s"] = peer_ipv4s;
        }
        else
        {
            peer_ipv4s = std::make_shared<Ntp::PeerVrfs::PeerVrf::PeerIpv4S>();
            peer_ipv4s->parent = this;
            children["peer-ipv4s"] = peer_ipv4s;
        }
        return children.at("peer-ipv4s");
    }

    if(child_yang_name == "peer-ipv6s")
    {
        if(peer_ipv6s != nullptr)
        {
            children["peer-ipv6s"] = peer_ipv6s;
        }
        else
        {
            peer_ipv6s = std::make_shared<Ntp::PeerVrfs::PeerVrf::PeerIpv6S>();
            peer_ipv6s->parent = this;
            children["peer-ipv6s"] = peer_ipv6s;
        }
        return children.at("peer-ipv6s");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::PeerVrfs::PeerVrf::get_children()
{
    if(children.find("peer-ipv4s") == children.end())
    {
        if(peer_ipv4s != nullptr)
        {
            children["peer-ipv4s"] = peer_ipv4s;
        }
    }

    if(children.find("peer-ipv6s") == children.end())
    {
        if(peer_ipv6s != nullptr)
        {
            children["peer-ipv6s"] = peer_ipv6s;
        }
    }

    return children;
}

void Ntp::PeerVrfs::PeerVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4S()
{
    yang_name = "peer-ipv4s"; yang_parent_name = "peer-vrf";
}

Ntp::PeerVrfs::PeerVrf::PeerIpv4S::~PeerIpv4S()
{
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv4S::has_data() const
{
    for (std::size_t index=0; index<peer_ipv4.size(); index++)
    {
        if(peer_ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv4S::has_operation() const
{
    for (std::size_t index=0; index<peer_ipv4.size(); index++)
    {
        if(peer_ipv4[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ntp::PeerVrfs::PeerVrf::PeerIpv4S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-ipv4s";

    return path_buffer.str();

}

EntityPath Ntp::PeerVrfs::PeerVrf::PeerIpv4S::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerIpv4S' in Cisco_IOS_XR_ip_ntp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::PeerVrfs::PeerVrf::PeerIpv4S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-ipv4")
    {
        for(auto const & c : peer_ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4>();
        c->parent = this;
        peer_ipv4.push_back(std::move(c));
        children[segment_path] = peer_ipv4.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::PeerVrfs::PeerVrf::PeerIpv4S::get_children()
{
    for (auto const & c : peer_ipv4)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ntp::PeerVrfs::PeerVrf::PeerIpv4S::set_value(const std::string & value_path, std::string value)
{
}

Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4::PeerIpv4()
    :
    address_ipv4{YType::str, "address-ipv4"}
{
    yang_name = "peer-ipv4"; yang_parent_name = "peer-ipv4s";
}

Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4::~PeerIpv4()
{
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4::has_data() const
{
    for (std::size_t index=0; index<peer_type_ipv4.size(); index++)
    {
        if(peer_type_ipv4[index]->has_data())
            return true;
    }
    return address_ipv4.is_set;
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4::has_operation() const
{
    for (std::size_t index=0; index<peer_type_ipv4.size(); index++)
    {
        if(peer_type_ipv4[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(address_ipv4.operation);
}

std::string Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-ipv4" <<"[address-ipv4='" <<address_ipv4 <<"']";

    return path_buffer.str();

}

EntityPath Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerIpv4' in Cisco_IOS_XR_ip_ntp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_ipv4.is_set || is_set(address_ipv4.operation)) leaf_name_data.push_back(address_ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-type-ipv4")
    {
        for(auto const & c : peer_type_ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4::PeerTypeIpv4>();
        c->parent = this;
        peer_type_ipv4.push_back(std::move(c));
        children[segment_path] = peer_type_ipv4.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4::get_children()
{
    for (auto const & c : peer_type_ipv4)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-ipv4")
    {
        address_ipv4 = value;
    }
}

Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4::PeerTypeIpv4::PeerTypeIpv4()
    :
    peer_type{YType::enumeration, "peer-type"},
    authentication_key{YType::uint32, "authentication-key"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    max_poll{YType::uint32, "max-poll"},
    min_poll{YType::uint32, "min-poll"},
    ntp_version{YType::uint32, "ntp-version"},
    preferred_peer{YType::empty, "preferred-peer"},
    source_interface{YType::str, "source-interface"}
{
    yang_name = "peer-type-ipv4"; yang_parent_name = "peer-ipv4";
}

Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4::PeerTypeIpv4::~PeerTypeIpv4()
{
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4::PeerTypeIpv4::has_data() const
{
    return peer_type.is_set
	|| authentication_key.is_set
	|| burst.is_set
	|| iburst.is_set
	|| max_poll.is_set
	|| min_poll.is_set
	|| ntp_version.is_set
	|| preferred_peer.is_set
	|| source_interface.is_set;
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4::PeerTypeIpv4::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_type.operation)
	|| is_set(authentication_key.operation)
	|| is_set(burst.operation)
	|| is_set(iburst.operation)
	|| is_set(max_poll.operation)
	|| is_set(min_poll.operation)
	|| is_set(ntp_version.operation)
	|| is_set(preferred_peer.operation)
	|| is_set(source_interface.operation);
}

std::string Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4::PeerTypeIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-type-ipv4" <<"[peer-type='" <<peer_type <<"']";

    return path_buffer.str();

}

EntityPath Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4::PeerTypeIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerTypeIpv4' in Cisco_IOS_XR_ip_ntp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_type.is_set || is_set(peer_type.operation)) leaf_name_data.push_back(peer_type.get_name_leafdata());
    if (authentication_key.is_set || is_set(authentication_key.operation)) leaf_name_data.push_back(authentication_key.get_name_leafdata());
    if (burst.is_set || is_set(burst.operation)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.operation)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (max_poll.is_set || is_set(max_poll.operation)) leaf_name_data.push_back(max_poll.get_name_leafdata());
    if (min_poll.is_set || is_set(min_poll.operation)) leaf_name_data.push_back(min_poll.get_name_leafdata());
    if (ntp_version.is_set || is_set(ntp_version.operation)) leaf_name_data.push_back(ntp_version.get_name_leafdata());
    if (preferred_peer.is_set || is_set(preferred_peer.operation)) leaf_name_data.push_back(preferred_peer.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4::PeerTypeIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4::PeerTypeIpv4::get_children()
{
    return children;
}

void Ntp::PeerVrfs::PeerVrf::PeerIpv4S::PeerIpv4::PeerTypeIpv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-type")
    {
        peer_type = value;
    }
    if(value_path == "authentication-key")
    {
        authentication_key = value;
    }
    if(value_path == "burst")
    {
        burst = value;
    }
    if(value_path == "iburst")
    {
        iburst = value;
    }
    if(value_path == "max-poll")
    {
        max_poll = value;
    }
    if(value_path == "min-poll")
    {
        min_poll = value;
    }
    if(value_path == "ntp-version")
    {
        ntp_version = value;
    }
    if(value_path == "preferred-peer")
    {
        preferred_peer = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}

Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6S()
{
    yang_name = "peer-ipv6s"; yang_parent_name = "peer-vrf";
}

Ntp::PeerVrfs::PeerVrf::PeerIpv6S::~PeerIpv6S()
{
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv6S::has_data() const
{
    for (std::size_t index=0; index<peer_ipv6.size(); index++)
    {
        if(peer_ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv6S::has_operation() const
{
    for (std::size_t index=0; index<peer_ipv6.size(); index++)
    {
        if(peer_ipv6[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ntp::PeerVrfs::PeerVrf::PeerIpv6S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-ipv6s";

    return path_buffer.str();

}

EntityPath Ntp::PeerVrfs::PeerVrf::PeerIpv6S::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerIpv6S' in Cisco_IOS_XR_ip_ntp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::PeerVrfs::PeerVrf::PeerIpv6S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-ipv6")
    {
        for(auto const & c : peer_ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6>();
        c->parent = this;
        peer_ipv6.push_back(std::move(c));
        children[segment_path] = peer_ipv6.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::PeerVrfs::PeerVrf::PeerIpv6S::get_children()
{
    for (auto const & c : peer_ipv6)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ntp::PeerVrfs::PeerVrf::PeerIpv6S::set_value(const std::string & value_path, std::string value)
{
}

Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6::PeerIpv6()
    :
    address_ipv6{YType::str, "address-ipv6"}
{
    yang_name = "peer-ipv6"; yang_parent_name = "peer-ipv6s";
}

Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6::~PeerIpv6()
{
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6::has_data() const
{
    for (std::size_t index=0; index<peer_type_ipv6.size(); index++)
    {
        if(peer_type_ipv6[index]->has_data())
            return true;
    }
    return address_ipv6.is_set;
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6::has_operation() const
{
    for (std::size_t index=0; index<peer_type_ipv6.size(); index++)
    {
        if(peer_type_ipv6[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(address_ipv6.operation);
}

std::string Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-ipv6" <<"[address-ipv6='" <<address_ipv6 <<"']";

    return path_buffer.str();

}

EntityPath Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerIpv6' in Cisco_IOS_XR_ip_ntp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_ipv6.is_set || is_set(address_ipv6.operation)) leaf_name_data.push_back(address_ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-type-ipv6")
    {
        for(auto const & c : peer_type_ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6::PeerTypeIpv6>();
        c->parent = this;
        peer_type_ipv6.push_back(std::move(c));
        children[segment_path] = peer_type_ipv6.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6::get_children()
{
    for (auto const & c : peer_type_ipv6)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-ipv6")
    {
        address_ipv6 = value;
    }
}

Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6::PeerTypeIpv6::PeerTypeIpv6()
    :
    peer_type{YType::enumeration, "peer-type"},
    address_ipv6{YType::str, "address-ipv6"},
    authentication_key{YType::uint32, "authentication-key"},
    burst{YType::empty, "burst"},
    iburst{YType::empty, "iburst"},
    max_poll{YType::uint32, "max-poll"},
    min_poll{YType::uint32, "min-poll"},
    ntp_version{YType::uint32, "ntp-version"},
    preferred_peer{YType::empty, "preferred-peer"},
    source_interface{YType::str, "source-interface"}
{
    yang_name = "peer-type-ipv6"; yang_parent_name = "peer-ipv6";
}

Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6::PeerTypeIpv6::~PeerTypeIpv6()
{
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6::PeerTypeIpv6::has_data() const
{
    return peer_type.is_set
	|| address_ipv6.is_set
	|| authentication_key.is_set
	|| burst.is_set
	|| iburst.is_set
	|| max_poll.is_set
	|| min_poll.is_set
	|| ntp_version.is_set
	|| preferred_peer.is_set
	|| source_interface.is_set;
}

bool Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6::PeerTypeIpv6::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_type.operation)
	|| is_set(address_ipv6.operation)
	|| is_set(authentication_key.operation)
	|| is_set(burst.operation)
	|| is_set(iburst.operation)
	|| is_set(max_poll.operation)
	|| is_set(min_poll.operation)
	|| is_set(ntp_version.operation)
	|| is_set(preferred_peer.operation)
	|| is_set(source_interface.operation);
}

std::string Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6::PeerTypeIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-type-ipv6" <<"[peer-type='" <<peer_type <<"']";

    return path_buffer.str();

}

EntityPath Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6::PeerTypeIpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerTypeIpv6' in Cisco_IOS_XR_ip_ntp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_type.is_set || is_set(peer_type.operation)) leaf_name_data.push_back(peer_type.get_name_leafdata());
    if (address_ipv6.is_set || is_set(address_ipv6.operation)) leaf_name_data.push_back(address_ipv6.get_name_leafdata());
    if (authentication_key.is_set || is_set(authentication_key.operation)) leaf_name_data.push_back(authentication_key.get_name_leafdata());
    if (burst.is_set || is_set(burst.operation)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (iburst.is_set || is_set(iburst.operation)) leaf_name_data.push_back(iburst.get_name_leafdata());
    if (max_poll.is_set || is_set(max_poll.operation)) leaf_name_data.push_back(max_poll.get_name_leafdata());
    if (min_poll.is_set || is_set(min_poll.operation)) leaf_name_data.push_back(min_poll.get_name_leafdata());
    if (ntp_version.is_set || is_set(ntp_version.operation)) leaf_name_data.push_back(ntp_version.get_name_leafdata());
    if (preferred_peer.is_set || is_set(preferred_peer.operation)) leaf_name_data.push_back(preferred_peer.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6::PeerTypeIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6::PeerTypeIpv6::get_children()
{
    return children;
}

void Ntp::PeerVrfs::PeerVrf::PeerIpv6S::PeerIpv6::PeerTypeIpv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-type")
    {
        peer_type = value;
    }
    if(value_path == "address-ipv6")
    {
        address_ipv6 = value;
    }
    if(value_path == "authentication-key")
    {
        authentication_key = value;
    }
    if(value_path == "burst")
    {
        burst = value;
    }
    if(value_path == "iburst")
    {
        iburst = value;
    }
    if(value_path == "max-poll")
    {
        max_poll = value;
    }
    if(value_path == "min-poll")
    {
        min_poll = value;
    }
    if(value_path == "ntp-version")
    {
        ntp_version = value;
    }
    if(value_path == "preferred-peer")
    {
        preferred_peer = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}

Ntp::DscpIpv4::DscpIpv4()
    :
    dscp_or_precedence_value{YType::uint32, "dscp-or-precedence-value"},
    mode{YType::enumeration, "mode"}
{
    yang_name = "dscp-ipv4"; yang_parent_name = "ntp";
}

Ntp::DscpIpv4::~DscpIpv4()
{
}

bool Ntp::DscpIpv4::has_data() const
{
    return dscp_or_precedence_value.is_set
	|| mode.is_set;
}

bool Ntp::DscpIpv4::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp_or_precedence_value.operation)
	|| is_set(mode.operation);
}

std::string Ntp::DscpIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp-ipv4";

    return path_buffer.str();

}

EntityPath Ntp::DscpIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp_or_precedence_value.is_set || is_set(dscp_or_precedence_value.operation)) leaf_name_data.push_back(dscp_or_precedence_value.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::DscpIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::DscpIpv4::get_children()
{
    return children;
}

void Ntp::DscpIpv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp-or-precedence-value")
    {
        dscp_or_precedence_value = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

Ntp::DscpIpv6::DscpIpv6()
    :
    dscp_or_precedence_value{YType::uint32, "dscp-or-precedence-value"},
    mode{YType::enumeration, "mode"}
{
    yang_name = "dscp-ipv6"; yang_parent_name = "ntp";
}

Ntp::DscpIpv6::~DscpIpv6()
{
}

bool Ntp::DscpIpv6::has_data() const
{
    return dscp_or_precedence_value.is_set
	|| mode.is_set;
}

bool Ntp::DscpIpv6::has_operation() const
{
    return is_set(operation)
	|| is_set(dscp_or_precedence_value.operation)
	|| is_set(mode.operation);
}

std::string Ntp::DscpIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp-ipv6";

    return path_buffer.str();

}

EntityPath Ntp::DscpIpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp_or_precedence_value.is_set || is_set(dscp_or_precedence_value.operation)) leaf_name_data.push_back(dscp_or_precedence_value.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::DscpIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::DscpIpv6::get_children()
{
    return children;
}

void Ntp::DscpIpv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dscp-or-precedence-value")
    {
        dscp_or_precedence_value = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

Ntp::Sources::Sources()
{
    yang_name = "sources"; yang_parent_name = "ntp";
}

Ntp::Sources::~Sources()
{
}

bool Ntp::Sources::has_data() const
{
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_data())
            return true;
    }
    return false;
}

bool Ntp::Sources::has_operation() const
{
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ntp::Sources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sources";

    return path_buffer.str();

}

EntityPath Ntp::Sources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::Sources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "source")
    {
        for(auto const & c : source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ntp::Sources::Source>();
        c->parent = this;
        source.push_back(std::move(c));
        children[segment_path] = source.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::Sources::get_children()
{
    for (auto const & c : source)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ntp::Sources::set_value(const std::string & value_path, std::string value)
{
}

Ntp::Sources::Source::Source()
    :
    vrf_name{YType::str, "vrf-name"},
    source_interface{YType::str, "source-interface"}
{
    yang_name = "source"; yang_parent_name = "sources";
}

Ntp::Sources::Source::~Source()
{
}

bool Ntp::Sources::Source::has_data() const
{
    return vrf_name.is_set
	|| source_interface.is_set;
}

bool Ntp::Sources::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(source_interface.operation);
}

std::string Ntp::Sources::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath Ntp::Sources::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/sources/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::Sources::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::Sources::Source::get_children()
{
    return children;
}

void Ntp::Sources::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}

Ntp::Authentication::Authentication()
    :
    enable{YType::empty, "enable"}
    	,
    keies(std::make_shared<Ntp::Authentication::Keies>())
	,trusted_keies(std::make_shared<Ntp::Authentication::TrustedKeies>())
{
    keies->parent = this;
    children["keies"] = keies;

    trusted_keies->parent = this;
    children["trusted-keies"] = trusted_keies;

    yang_name = "authentication"; yang_parent_name = "ntp";
}

Ntp::Authentication::~Authentication()
{
}

bool Ntp::Authentication::has_data() const
{
    return enable.is_set
	|| (keies !=  nullptr && keies->has_data())
	|| (trusted_keies !=  nullptr && trusted_keies->has_data());
}

bool Ntp::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (keies !=  nullptr && keies->has_operation())
	|| (trusted_keies !=  nullptr && trusted_keies->has_operation());
}

std::string Ntp::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Ntp::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "keies")
    {
        if(keies != nullptr)
        {
            children["keies"] = keies;
        }
        else
        {
            keies = std::make_shared<Ntp::Authentication::Keies>();
            keies->parent = this;
            children["keies"] = keies;
        }
        return children.at("keies");
    }

    if(child_yang_name == "trusted-keies")
    {
        if(trusted_keies != nullptr)
        {
            children["trusted-keies"] = trusted_keies;
        }
        else
        {
            trusted_keies = std::make_shared<Ntp::Authentication::TrustedKeies>();
            trusted_keies->parent = this;
            children["trusted-keies"] = trusted_keies;
        }
        return children.at("trusted-keies");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::Authentication::get_children()
{
    if(children.find("keies") == children.end())
    {
        if(keies != nullptr)
        {
            children["keies"] = keies;
        }
    }

    if(children.find("trusted-keies") == children.end())
    {
        if(trusted_keies != nullptr)
        {
            children["trusted-keies"] = trusted_keies;
        }
    }

    return children;
}

void Ntp::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Ntp::Authentication::Keies::Keies()
{
    yang_name = "keies"; yang_parent_name = "authentication";
}

Ntp::Authentication::Keies::~Keies()
{
}

bool Ntp::Authentication::Keies::has_data() const
{
    for (std::size_t index=0; index<key.size(); index++)
    {
        if(key[index]->has_data())
            return true;
    }
    return false;
}

bool Ntp::Authentication::Keies::has_operation() const
{
    for (std::size_t index=0; index<key.size(); index++)
    {
        if(key[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ntp::Authentication::Keies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keies";

    return path_buffer.str();

}

EntityPath Ntp::Authentication::Keies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::Authentication::Keies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "key")
    {
        for(auto const & c : key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ntp::Authentication::Keies::Key>();
        c->parent = this;
        key.push_back(std::move(c));
        children[segment_path] = key.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::Authentication::Keies::get_children()
{
    for (auto const & c : key)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ntp::Authentication::Keies::set_value(const std::string & value_path, std::string value)
{
}

Ntp::Authentication::Keies::Key::Key()
    :
    key_number{YType::uint32, "key-number"},
    authentication_key{YType::str, "authentication-key"}
{
    yang_name = "key"; yang_parent_name = "keies";
}

Ntp::Authentication::Keies::Key::~Key()
{
}

bool Ntp::Authentication::Keies::Key::has_data() const
{
    return key_number.is_set
	|| authentication_key.is_set;
}

bool Ntp::Authentication::Keies::Key::has_operation() const
{
    return is_set(operation)
	|| is_set(key_number.operation)
	|| is_set(authentication_key.operation);
}

std::string Ntp::Authentication::Keies::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key" <<"[key-number='" <<key_number <<"']";

    return path_buffer.str();

}

EntityPath Ntp::Authentication::Keies::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/authentication/keies/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_number.is_set || is_set(key_number.operation)) leaf_name_data.push_back(key_number.get_name_leafdata());
    if (authentication_key.is_set || is_set(authentication_key.operation)) leaf_name_data.push_back(authentication_key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::Authentication::Keies::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::Authentication::Keies::Key::get_children()
{
    return children;
}

void Ntp::Authentication::Keies::Key::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-number")
    {
        key_number = value;
    }
    if(value_path == "authentication-key")
    {
        authentication_key = value;
    }
}

Ntp::Authentication::TrustedKeies::TrustedKeies()
{
    yang_name = "trusted-keies"; yang_parent_name = "authentication";
}

Ntp::Authentication::TrustedKeies::~TrustedKeies()
{
}

bool Ntp::Authentication::TrustedKeies::has_data() const
{
    for (std::size_t index=0; index<trusted_key.size(); index++)
    {
        if(trusted_key[index]->has_data())
            return true;
    }
    return false;
}

bool Ntp::Authentication::TrustedKeies::has_operation() const
{
    for (std::size_t index=0; index<trusted_key.size(); index++)
    {
        if(trusted_key[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ntp::Authentication::TrustedKeies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trusted-keies";

    return path_buffer.str();

}

EntityPath Ntp::Authentication::TrustedKeies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::Authentication::TrustedKeies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "trusted-key")
    {
        for(auto const & c : trusted_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ntp::Authentication::TrustedKeies::TrustedKey>();
        c->parent = this;
        trusted_key.push_back(std::move(c));
        children[segment_path] = trusted_key.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::Authentication::TrustedKeies::get_children()
{
    for (auto const & c : trusted_key)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ntp::Authentication::TrustedKeies::set_value(const std::string & value_path, std::string value)
{
}

Ntp::Authentication::TrustedKeies::TrustedKey::TrustedKey()
    :
    key_number{YType::uint32, "key-number"}
{
    yang_name = "trusted-key"; yang_parent_name = "trusted-keies";
}

Ntp::Authentication::TrustedKeies::TrustedKey::~TrustedKey()
{
}

bool Ntp::Authentication::TrustedKeies::TrustedKey::has_data() const
{
    return key_number.is_set;
}

bool Ntp::Authentication::TrustedKeies::TrustedKey::has_operation() const
{
    return is_set(operation)
	|| is_set(key_number.operation);
}

std::string Ntp::Authentication::TrustedKeies::TrustedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trusted-key" <<"[key-number='" <<key_number <<"']";

    return path_buffer.str();

}

EntityPath Ntp::Authentication::TrustedKeies::TrustedKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/authentication/trusted-keies/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_number.is_set || is_set(key_number.operation)) leaf_name_data.push_back(key_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::Authentication::TrustedKeies::TrustedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::Authentication::TrustedKeies::TrustedKey::get_children()
{
    return children;
}

void Ntp::Authentication::TrustedKeies::TrustedKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-number")
    {
        key_number = value;
    }
}

Ntp::Passive::Passive()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "passive"; yang_parent_name = "ntp";
}

Ntp::Passive::~Passive()
{
}

bool Ntp::Passive::has_data() const
{
    return enable.is_set;
}

bool Ntp::Passive::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Ntp::Passive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive";

    return path_buffer.str();

}

EntityPath Ntp::Passive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::Passive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::Passive::get_children()
{
    return children;
}

void Ntp::Passive::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Ntp::InterfaceTables::InterfaceTables()
{
    yang_name = "interface-tables"; yang_parent_name = "ntp";
}

Ntp::InterfaceTables::~InterfaceTables()
{
}

bool Ntp::InterfaceTables::has_data() const
{
    for (std::size_t index=0; index<interface_table.size(); index++)
    {
        if(interface_table[index]->has_data())
            return true;
    }
    return false;
}

bool Ntp::InterfaceTables::has_operation() const
{
    for (std::size_t index=0; index<interface_table.size(); index++)
    {
        if(interface_table[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ntp::InterfaceTables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-tables";

    return path_buffer.str();

}

EntityPath Ntp::InterfaceTables::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::InterfaceTables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-table")
    {
        for(auto const & c : interface_table)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ntp::InterfaceTables::InterfaceTable>();
        c->parent = this;
        interface_table.push_back(std::move(c));
        children[segment_path] = interface_table.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::InterfaceTables::get_children()
{
    for (auto const & c : interface_table)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ntp::InterfaceTables::set_value(const std::string & value_path, std::string value)
{
}

Ntp::InterfaceTables::InterfaceTable::InterfaceTable()
    :
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "interface-table"; yang_parent_name = "interface-tables";
}

Ntp::InterfaceTables::InterfaceTable::~InterfaceTable()
{
}

bool Ntp::InterfaceTables::InterfaceTable::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return vrf_name.is_set;
}

bool Ntp::InterfaceTables::InterfaceTable::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(vrf_name.operation);
}

std::string Ntp::InterfaceTables::InterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-table" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath Ntp::InterfaceTables::InterfaceTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/interface-tables/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::InterfaceTables::InterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::InterfaceTables::InterfaceTable::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ntp::InterfaceTables::InterfaceTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ntp::InterfaceTables::InterfaceTable::Interface::Interface()
    :
    interface{YType::str, "interface"},
    disable{YType::empty, "disable"}
    	,
    interface_broadcast(std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast>())
	,interface_multicast(std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast>())
{
    interface_broadcast->parent = this;
    children["interface-broadcast"] = interface_broadcast;

    interface_multicast->parent = this;
    children["interface-multicast"] = interface_multicast;

    yang_name = "interface"; yang_parent_name = "interface-table";
}

Ntp::InterfaceTables::InterfaceTable::Interface::~Interface()
{
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::has_data() const
{
    return interface.is_set
	|| disable.is_set
	|| (interface_broadcast !=  nullptr && interface_broadcast->has_data())
	|| (interface_multicast !=  nullptr && interface_multicast->has_data());
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(disable.operation)
	|| (interface_broadcast !=  nullptr && interface_broadcast->has_operation())
	|| (interface_multicast !=  nullptr && interface_multicast->has_operation());
}

std::string Ntp::InterfaceTables::InterfaceTable::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

EntityPath Ntp::InterfaceTables::InterfaceTable::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_ip_ntp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::InterfaceTables::InterfaceTable::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-broadcast")
    {
        if(interface_broadcast != nullptr)
        {
            children["interface-broadcast"] = interface_broadcast;
        }
        else
        {
            interface_broadcast = std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast>();
            interface_broadcast->parent = this;
            children["interface-broadcast"] = interface_broadcast;
        }
        return children.at("interface-broadcast");
    }

    if(child_yang_name == "interface-multicast")
    {
        if(interface_multicast != nullptr)
        {
            children["interface-multicast"] = interface_multicast;
        }
        else
        {
            interface_multicast = std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast>();
            interface_multicast->parent = this;
            children["interface-multicast"] = interface_multicast;
        }
        return children.at("interface-multicast");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::InterfaceTables::InterfaceTable::Interface::get_children()
{
    if(children.find("interface-broadcast") == children.end())
    {
        if(interface_broadcast != nullptr)
        {
            children["interface-broadcast"] = interface_broadcast;
        }
    }

    if(children.find("interface-multicast") == children.end())
    {
        if(interface_multicast != nullptr)
        {
            children["interface-multicast"] = interface_multicast;
        }
    }

    return children;
}

void Ntp::InterfaceTables::InterfaceTable::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::InterfaceMulticast()
    :
    multicast_clients(std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients>())
	,multicast_servers(std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers>())
{
    multicast_clients->parent = this;
    children["multicast-clients"] = multicast_clients;

    multicast_servers->parent = this;
    children["multicast-servers"] = multicast_servers;

    yang_name = "interface-multicast"; yang_parent_name = "interface";
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::~InterfaceMulticast()
{
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::has_data() const
{
    return (multicast_clients !=  nullptr && multicast_clients->has_data())
	|| (multicast_servers !=  nullptr && multicast_servers->has_data());
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::has_operation() const
{
    return is_set(operation)
	|| (multicast_clients !=  nullptr && multicast_clients->has_operation())
	|| (multicast_servers !=  nullptr && multicast_servers->has_operation());
}

std::string Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-multicast";

    return path_buffer.str();

}

EntityPath Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceMulticast' in Cisco_IOS_XR_ip_ntp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "multicast-clients")
    {
        if(multicast_clients != nullptr)
        {
            children["multicast-clients"] = multicast_clients;
        }
        else
        {
            multicast_clients = std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients>();
            multicast_clients->parent = this;
            children["multicast-clients"] = multicast_clients;
        }
        return children.at("multicast-clients");
    }

    if(child_yang_name == "multicast-servers")
    {
        if(multicast_servers != nullptr)
        {
            children["multicast-servers"] = multicast_servers;
        }
        else
        {
            multicast_servers = std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers>();
            multicast_servers->parent = this;
            children["multicast-servers"] = multicast_servers;
        }
        return children.at("multicast-servers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::get_children()
{
    if(children.find("multicast-clients") == children.end())
    {
        if(multicast_clients != nullptr)
        {
            children["multicast-clients"] = multicast_clients;
        }
    }

    if(children.find("multicast-servers") == children.end())
    {
        if(multicast_servers != nullptr)
        {
            children["multicast-servers"] = multicast_servers;
        }
    }

    return children;
}

void Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::set_value(const std::string & value_path, std::string value)
{
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClients()
{
    yang_name = "multicast-clients"; yang_parent_name = "interface-multicast";
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::~MulticastClients()
{
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::has_data() const
{
    for (std::size_t index=0; index<multicast_client.size(); index++)
    {
        if(multicast_client[index]->has_data())
            return true;
    }
    return false;
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::has_operation() const
{
    for (std::size_t index=0; index<multicast_client.size(); index++)
    {
        if(multicast_client[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-clients";

    return path_buffer.str();

}

EntityPath Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastClients' in Cisco_IOS_XR_ip_ntp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "multicast-client")
    {
        for(auto const & c : multicast_client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient>();
        c->parent = this;
        multicast_client.push_back(std::move(c));
        children[segment_path] = multicast_client.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::get_children()
{
    for (auto const & c : multicast_client)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::set_value(const std::string & value_path, std::string value)
{
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient::MulticastClient()
    :
    ip_address{YType::str, "ip-address"}
{
    yang_name = "multicast-client"; yang_parent_name = "multicast-clients";
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient::~MulticastClient()
{
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient::has_data() const
{
    return ip_address.is_set;
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation);
}

std::string Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-client" <<"[ip-address='" <<ip_address <<"']";

    return path_buffer.str();

}

EntityPath Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastClient' in Cisco_IOS_XR_ip_ntp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient::get_children()
{
    return children;
}

void Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastClients::MulticastClient::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServers()
{
    yang_name = "multicast-servers"; yang_parent_name = "interface-multicast";
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::~MulticastServers()
{
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::has_data() const
{
    for (std::size_t index=0; index<multicast_server.size(); index++)
    {
        if(multicast_server[index]->has_data())
            return true;
    }
    return false;
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::has_operation() const
{
    for (std::size_t index=0; index<multicast_server.size(); index++)
    {
        if(multicast_server[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-servers";

    return path_buffer.str();

}

EntityPath Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastServers' in Cisco_IOS_XR_ip_ntp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "multicast-server")
    {
        for(auto const & c : multicast_server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer>();
        c->parent = this;
        multicast_server.push_back(std::move(c));
        children[segment_path] = multicast_server.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::get_children()
{
    for (auto const & c : multicast_server)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::set_value(const std::string & value_path, std::string value)
{
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer::MulticastServer()
    :
    ip_address{YType::str, "ip-address"},
    authentication_key{YType::uint32, "authentication-key"},
    ttl{YType::uint32, "ttl"},
    version{YType::uint32, "version"}
{
    yang_name = "multicast-server"; yang_parent_name = "multicast-servers";
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer::~MulticastServer()
{
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer::has_data() const
{
    return ip_address.is_set
	|| authentication_key.is_set
	|| ttl.is_set
	|| version.is_set;
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_address.operation)
	|| is_set(authentication_key.operation)
	|| is_set(ttl.operation)
	|| is_set(version.operation);
}

std::string Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-server" <<"[ip-address='" <<ip_address <<"']";

    return path_buffer.str();

}

EntityPath Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastServer' in Cisco_IOS_XR_ip_ntp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (authentication_key.is_set || is_set(authentication_key.operation)) leaf_name_data.push_back(authentication_key.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer::get_children()
{
    return children;
}

void Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceMulticast::MulticastServers::MulticastServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "authentication-key")
    {
        authentication_key = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::InterfaceBroadcast()
    :
    broadcast_client{YType::empty, "broadcast-client"}
    	,
    broadcast(std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::Broadcast>())
{
    broadcast->parent = this;
    children["broadcast"] = broadcast;

    yang_name = "interface-broadcast"; yang_parent_name = "interface";
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::~InterfaceBroadcast()
{
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::has_data() const
{
    return broadcast_client.is_set
	|| (broadcast !=  nullptr && broadcast->has_data());
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast_client.operation)
	|| (broadcast !=  nullptr && broadcast->has_operation());
}

std::string Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-broadcast";

    return path_buffer.str();

}

EntityPath Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceBroadcast' in Cisco_IOS_XR_ip_ntp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_client.is_set || is_set(broadcast_client.operation)) leaf_name_data.push_back(broadcast_client.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast != nullptr)
        {
            children["broadcast"] = broadcast;
        }
        else
        {
            broadcast = std::make_shared<Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::Broadcast>();
            broadcast->parent = this;
            children["broadcast"] = broadcast;
        }
        return children.at("broadcast");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::get_children()
{
    if(children.find("broadcast") == children.end())
    {
        if(broadcast != nullptr)
        {
            children["broadcast"] = broadcast;
        }
    }

    return children;
}

void Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast-client")
    {
        broadcast_client = value;
    }
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::Broadcast::Broadcast()
    :
    address{YType::str, "address"},
    authentication_key{YType::uint32, "authentication-key"},
    ntp_version{YType::uint32, "ntp-version"}
{
    yang_name = "broadcast"; yang_parent_name = "interface-broadcast";
}

Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::Broadcast::~Broadcast()
{
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::Broadcast::has_data() const
{
    return address.is_set
	|| authentication_key.is_set
	|| ntp_version.is_set;
}

bool Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::Broadcast::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(authentication_key.operation)
	|| is_set(ntp_version.operation);
}

std::string Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";

    return path_buffer.str();

}

EntityPath Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::Broadcast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Broadcast' in Cisco_IOS_XR_ip_ntp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (authentication_key.is_set || is_set(authentication_key.operation)) leaf_name_data.push_back(authentication_key.get_name_leafdata());
    if (ntp_version.is_set || is_set(ntp_version.operation)) leaf_name_data.push_back(ntp_version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::Broadcast::get_children()
{
    return children;
}

void Ntp::InterfaceTables::InterfaceTable::Interface::InterfaceBroadcast::Broadcast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "authentication-key")
    {
        authentication_key = value;
    }
    if(value_path == "ntp-version")
    {
        ntp_version = value;
    }
}

Ntp::AccessGroupTables::AccessGroupTables()
{
    yang_name = "access-group-tables"; yang_parent_name = "ntp";
}

Ntp::AccessGroupTables::~AccessGroupTables()
{
}

bool Ntp::AccessGroupTables::has_data() const
{
    for (std::size_t index=0; index<access_group_table.size(); index++)
    {
        if(access_group_table[index]->has_data())
            return true;
    }
    return false;
}

bool Ntp::AccessGroupTables::has_operation() const
{
    for (std::size_t index=0; index<access_group_table.size(); index++)
    {
        if(access_group_table[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ntp::AccessGroupTables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group-tables";

    return path_buffer.str();

}

EntityPath Ntp::AccessGroupTables::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::AccessGroupTables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "access-group-table")
    {
        for(auto const & c : access_group_table)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ntp::AccessGroupTables::AccessGroupTable>();
        c->parent = this;
        access_group_table.push_back(std::move(c));
        children[segment_path] = access_group_table.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::AccessGroupTables::get_children()
{
    for (auto const & c : access_group_table)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ntp::AccessGroupTables::set_value(const std::string & value_path, std::string value)
{
}

Ntp::AccessGroupTables::AccessGroupTable::AccessGroupTable()
    :
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "access-group-table"; yang_parent_name = "access-group-tables";
}

Ntp::AccessGroupTables::AccessGroupTable::~AccessGroupTable()
{
}

bool Ntp::AccessGroupTables::AccessGroupTable::has_data() const
{
    for (std::size_t index=0; index<access_group_af_table.size(); index++)
    {
        if(access_group_af_table[index]->has_data())
            return true;
    }
    return vrf_name.is_set;
}

bool Ntp::AccessGroupTables::AccessGroupTable::has_operation() const
{
    for (std::size_t index=0; index<access_group_af_table.size(); index++)
    {
        if(access_group_af_table[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(vrf_name.operation);
}

std::string Ntp::AccessGroupTables::AccessGroupTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group-table" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath Ntp::AccessGroupTables::AccessGroupTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-ntp-cfg:ntp/access-group-tables/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::AccessGroupTables::AccessGroupTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "access-group-af-table")
    {
        for(auto const & c : access_group_af_table)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable>();
        c->parent = this;
        access_group_af_table.push_back(std::move(c));
        children[segment_path] = access_group_af_table.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::AccessGroupTables::AccessGroupTable::get_children()
{
    for (auto const & c : access_group_af_table)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ntp::AccessGroupTables::AccessGroupTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroupAfTable()
    :
    af{YType::enumeration, "af"}
{
    yang_name = "access-group-af-table"; yang_parent_name = "access-group-table";
}

Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::~AccessGroupAfTable()
{
}

bool Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::has_data() const
{
    for (std::size_t index=0; index<access_group.size(); index++)
    {
        if(access_group[index]->has_data())
            return true;
    }
    return af.is_set;
}

bool Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::has_operation() const
{
    for (std::size_t index=0; index<access_group.size(); index++)
    {
        if(access_group[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(af.operation);
}

std::string Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group-af-table" <<"[af='" <<af <<"']";

    return path_buffer.str();

}

EntityPath Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessGroupAfTable' in Cisco_IOS_XR_ip_ntp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.operation)) leaf_name_data.push_back(af.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "access-group")
    {
        for(auto const & c : access_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup>();
        c->parent = this;
        access_group.push_back(std::move(c));
        children[segment_path] = access_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::get_children()
{
    for (auto const & c : access_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af")
    {
        af = value;
    }
}

Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup::AccessGroup()
    :
    access_group_type{YType::enumeration, "access-group-type"},
    access_list_name{YType::str, "access-list-name"}
{
    yang_name = "access-group"; yang_parent_name = "access-group-af-table";
}

Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup::~AccessGroup()
{
}

bool Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup::has_data() const
{
    return access_group_type.is_set
	|| access_list_name.is_set;
}

bool Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(access_group_type.operation)
	|| is_set(access_list_name.operation);
}

std::string Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group" <<"[access-group-type='" <<access_group_type <<"']";

    return path_buffer.str();

}

EntityPath Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessGroup' in Cisco_IOS_XR_ip_ntp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_group_type.is_set || is_set(access_group_type.operation)) leaf_name_data.push_back(access_group_type.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup::get_children()
{
    return children;
}

void Ntp::AccessGroupTables::AccessGroupTable::AccessGroupAfTable::AccessGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-group-type")
    {
        access_group_type = value;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
}

const Enum::YLeaf NtpAccessAfEnum::ipv4 {0, "ipv4"};
const Enum::YLeaf NtpAccessAfEnum::ipv6 {1, "ipv6"};

const Enum::YLeaf NtpPeerEnum::peer {0, "peer"};
const Enum::YLeaf NtpPeerEnum::server {1, "server"};

const Enum::YLeaf NtpdscpEnum::ntp_precedence {0, "ntp-precedence"};
const Enum::YLeaf NtpdscpEnum::ntpdscp {1, "ntpdscp"};

const Enum::YLeaf NtpAccessEnum::peer {0, "peer"};
const Enum::YLeaf NtpAccessEnum::serve {1, "serve"};
const Enum::YLeaf NtpAccessEnum::serve_only {2, "serve-only"};
const Enum::YLeaf NtpAccessEnum::query_only {3, "query-only"};


}
}

