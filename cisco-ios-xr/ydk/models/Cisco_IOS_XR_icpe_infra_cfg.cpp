
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_icpe_infra_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_icpe_infra_cfg {

NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort::CandidateFabricPort()
    :
    	port_type{YType::str, "port-type"},
	 slot{YType::uint32, "slot"},
	 sub_slot{YType::uint32, "sub-slot"},
	 port_range{YType::str, "port-range"}
{
    yang_name = "candidate-fabric-port"; yang_parent_name = "candidate-fabric-ports";
}

NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort::~CandidateFabricPort()
{
}

bool NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort::has_data() const
{
    return port_type.is_set
	|| slot.is_set
	|| sub_slot.is_set
	|| port_range.is_set;
}

bool NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort::has_operation() const
{
    return is_set(operation)
	|| is_set(port_type.operation)
	|| is_set(slot.operation)
	|| is_set(sub_slot.operation)
	|| is_set(port_range.operation);
}

std::string NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-fabric-port" <<"[port-type='" <<port_type.get() <<"']" <<"[slot='" <<slot.get() <<"']" <<"[sub-slot='" <<sub_slot.get() <<"']";

    return path_buffer.str();

}

EntityPath NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_type.is_set || is_set(port_type.operation)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (slot.is_set || is_set(slot.operation)) leaf_name_data.push_back(slot.get_name_leafdata());
    if (sub_slot.is_set || is_set(sub_slot.operation)) leaf_name_data.push_back(sub_slot.get_name_leafdata());
    if (port_range.is_set || is_set(port_range.operation)) leaf_name_data.push_back(port_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort::get_children()
{
    return children;
}

void NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-type")
    {
        port_type = value;
    }
    if(value_path == "slot")
    {
        slot = value;
    }
    if(value_path == "sub-slot")
    {
        sub_slot = value;
    }
    if(value_path == "port-range")
    {
        port_range = value;
    }
}

NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPorts()
{
    yang_name = "candidate-fabric-ports"; yang_parent_name = "nv-satellite";
}

NvSatellites::NvSatellite::CandidateFabricPorts::~CandidateFabricPorts()
{
}

bool NvSatellites::NvSatellite::CandidateFabricPorts::has_data() const
{
    for (std::size_t index=0; index<candidate_fabric_port.size(); index++)
    {
        if(candidate_fabric_port[index]->has_data())
            return true;
    }
    return false;
}

bool NvSatellites::NvSatellite::CandidateFabricPorts::has_operation() const
{
    for (std::size_t index=0; index<candidate_fabric_port.size(); index++)
    {
        if(candidate_fabric_port[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NvSatellites::NvSatellite::CandidateFabricPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-fabric-ports";

    return path_buffer.str();

}

EntityPath NvSatellites::NvSatellite::CandidateFabricPorts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellites::NvSatellite::CandidateFabricPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-fabric-port")
    {
        for(auto const & c : candidate_fabric_port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort>();
        c->parent = this;
        candidate_fabric_port.push_back(std::move(c));
        children[segment_path] = candidate_fabric_port.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellites::NvSatellite::CandidateFabricPorts::get_children()
{
    for (auto const & c : candidate_fabric_port)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void NvSatellites::NvSatellite::CandidateFabricPorts::set_value(const std::string & value_path, std::string value)
{
}

NvSatellites::NvSatellite::ConnectionInfo::ConnectionInfo()
    :
    	password{YType::str, "password"},
	 username{YType::str, "username"}
{
    yang_name = "connection-info"; yang_parent_name = "nv-satellite";
}

NvSatellites::NvSatellite::ConnectionInfo::~ConnectionInfo()
{
}

bool NvSatellites::NvSatellite::ConnectionInfo::has_data() const
{
    return password.is_set
	|| username.is_set;
}

bool NvSatellites::NvSatellite::ConnectionInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(password.operation)
	|| is_set(username.operation);
}

std::string NvSatellites::NvSatellite::ConnectionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-info";

    return path_buffer.str();

}

EntityPath NvSatellites::NvSatellite::ConnectionInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellites::NvSatellite::ConnectionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & NvSatellites::NvSatellite::ConnectionInfo::get_children()
{
    return children;
}

void NvSatellites::NvSatellite::ConnectionInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
}

NvSatellites::NvSatellite::Redundancy::Redundancy()
    :
    	host_priority{YType::uint32, "host-priority"}
{
    yang_name = "redundancy"; yang_parent_name = "nv-satellite";
}

NvSatellites::NvSatellite::Redundancy::~Redundancy()
{
}

bool NvSatellites::NvSatellite::Redundancy::has_data() const
{
    return host_priority.is_set;
}

bool NvSatellites::NvSatellite::Redundancy::has_operation() const
{
    return is_set(operation)
	|| is_set(host_priority.operation);
}

std::string NvSatellites::NvSatellite::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";

    return path_buffer.str();

}

EntityPath NvSatellites::NvSatellite::Redundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_priority.is_set || is_set(host_priority.operation)) leaf_name_data.push_back(host_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellites::NvSatellite::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & NvSatellites::NvSatellite::Redundancy::get_children()
{
    return children;
}

void NvSatellites::NvSatellite::Redundancy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-priority")
    {
        host_priority = value;
    }
}

NvSatellites::NvSatellite::NvSatellite()
    :
    	satellite_id{YType::uint32, "satellite-id"},
	 delayed_switchback{YType::uint32, "delayed-switchback"},
	 description{YType::str, "description"},
	 device_name{YType::str, "device-name"},
	 disc_timeout{YType::uint32, "disc-timeout"},
	 enable{YType::empty, "enable"},
	 ip_address{YType::str, "ip-address"},
	 secret{YType::str, "secret"},
	 serial_number{YType::str, "serial-number"},
	 timeout_warning{YType::uint32, "timeout-warning"},
	 type{YType::str, "type"},
	 upgrade_on_connect{YType::uint32, "upgrade-on-connect"},
	 vrf{YType::str, "vrf"}
    	,
    candidate_fabric_ports(std::make_unique<NvSatellites::NvSatellite::CandidateFabricPorts>())
	,connection_info(std::make_unique<NvSatellites::NvSatellite::ConnectionInfo>())
	,redundancy(std::make_unique<NvSatellites::NvSatellite::Redundancy>())
{
    candidate_fabric_ports->parent = this;
    children["candidate-fabric-ports"] = candidate_fabric_ports.get();

    connection_info->parent = this;
    children["connection-info"] = connection_info.get();

    redundancy->parent = this;
    children["redundancy"] = redundancy.get();

    yang_name = "nv-satellite"; yang_parent_name = "nv-satellites";
}

NvSatellites::NvSatellite::~NvSatellite()
{
}

bool NvSatellites::NvSatellite::has_data() const
{
    return satellite_id.is_set
	|| delayed_switchback.is_set
	|| description.is_set
	|| device_name.is_set
	|| disc_timeout.is_set
	|| enable.is_set
	|| ip_address.is_set
	|| secret.is_set
	|| serial_number.is_set
	|| timeout_warning.is_set
	|| type.is_set
	|| upgrade_on_connect.is_set
	|| vrf.is_set
	|| (candidate_fabric_ports !=  nullptr && candidate_fabric_ports->has_data())
	|| (connection_info !=  nullptr && connection_info->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data());
}

bool NvSatellites::NvSatellite::has_operation() const
{
    return is_set(operation)
	|| is_set(satellite_id.operation)
	|| is_set(delayed_switchback.operation)
	|| is_set(description.operation)
	|| is_set(device_name.operation)
	|| is_set(disc_timeout.operation)
	|| is_set(enable.operation)
	|| is_set(ip_address.operation)
	|| is_set(secret.operation)
	|| is_set(serial_number.operation)
	|| is_set(timeout_warning.operation)
	|| is_set(type.operation)
	|| is_set(upgrade_on_connect.operation)
	|| is_set(vrf.operation)
	|| (candidate_fabric_ports !=  nullptr && candidate_fabric_ports->has_operation())
	|| (connection_info !=  nullptr && connection_info->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation());
}

std::string NvSatellites::NvSatellite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nv-satellite" <<"[satellite-id='" <<satellite_id.get() <<"']";

    return path_buffer.str();

}

EntityPath NvSatellites::NvSatellite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-cfg:nv-satellites/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (satellite_id.is_set || is_set(satellite_id.operation)) leaf_name_data.push_back(satellite_id.get_name_leafdata());
    if (delayed_switchback.is_set || is_set(delayed_switchback.operation)) leaf_name_data.push_back(delayed_switchback.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (device_name.is_set || is_set(device_name.operation)) leaf_name_data.push_back(device_name.get_name_leafdata());
    if (disc_timeout.is_set || is_set(disc_timeout.operation)) leaf_name_data.push_back(disc_timeout.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (secret.is_set || is_set(secret.operation)) leaf_name_data.push_back(secret.get_name_leafdata());
    if (serial_number.is_set || is_set(serial_number.operation)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (timeout_warning.is_set || is_set(timeout_warning.operation)) leaf_name_data.push_back(timeout_warning.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (upgrade_on_connect.is_set || is_set(upgrade_on_connect.operation)) leaf_name_data.push_back(upgrade_on_connect.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellites::NvSatellite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-fabric-ports")
    {
        if(candidate_fabric_ports != nullptr)
        {
            children["candidate-fabric-ports"] = candidate_fabric_ports.get();
        }
        else
        {
            candidate_fabric_ports = std::make_unique<NvSatellites::NvSatellite::CandidateFabricPorts>();
            candidate_fabric_ports->parent = this;
            children["candidate-fabric-ports"] = candidate_fabric_ports.get();
        }
        return children.at("candidate-fabric-ports");
    }

    if(child_yang_name == "connection-info")
    {
        if(connection_info != nullptr)
        {
            children["connection-info"] = connection_info.get();
        }
        else
        {
            connection_info = std::make_unique<NvSatellites::NvSatellite::ConnectionInfo>();
            connection_info->parent = this;
            children["connection-info"] = connection_info.get();
        }
        return children.at("connection-info");
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy != nullptr)
        {
            children["redundancy"] = redundancy.get();
        }
        else
        {
            redundancy = std::make_unique<NvSatellites::NvSatellite::Redundancy>();
            redundancy->parent = this;
            children["redundancy"] = redundancy.get();
        }
        return children.at("redundancy");
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellites::NvSatellite::get_children()
{
    if(children.find("candidate-fabric-ports") == children.end())
    {
        if(candidate_fabric_ports != nullptr)
        {
            children["candidate-fabric-ports"] = candidate_fabric_ports.get();
        }
    }

    if(children.find("connection-info") == children.end())
    {
        if(connection_info != nullptr)
        {
            children["connection-info"] = connection_info.get();
        }
    }

    if(children.find("redundancy") == children.end())
    {
        if(redundancy != nullptr)
        {
            children["redundancy"] = redundancy.get();
        }
    }

    return children;
}

void NvSatellites::NvSatellite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "satellite-id")
    {
        satellite_id = value;
    }
    if(value_path == "delayed-switchback")
    {
        delayed_switchback = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "device-name")
    {
        device_name = value;
    }
    if(value_path == "disc-timeout")
    {
        disc_timeout = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "secret")
    {
        secret = value;
    }
    if(value_path == "serial-number")
    {
        serial_number = value;
    }
    if(value_path == "timeout-warning")
    {
        timeout_warning = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "upgrade-on-connect")
    {
        upgrade_on_connect = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

NvSatellites::NvSatellites()
{
    yang_name = "nv-satellites"; yang_parent_name = "Cisco-IOS-XR-icpe-infra-cfg";
}

NvSatellites::~NvSatellites()
{
}

bool NvSatellites::has_data() const
{
    for (std::size_t index=0; index<nv_satellite.size(); index++)
    {
        if(nv_satellite[index]->has_data())
            return true;
    }
    return false;
}

bool NvSatellites::has_operation() const
{
    for (std::size_t index=0; index<nv_satellite.size(); index++)
    {
        if(nv_satellite[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string NvSatellites::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-infra-cfg:nv-satellites";

    return path_buffer.str();

}

EntityPath NvSatellites::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatellites::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nv-satellite")
    {
        for(auto const & c : nv_satellite)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<NvSatellites::NvSatellite>();
        c->parent = this;
        nv_satellite.push_back(std::move(c));
        children[segment_path] = nv_satellite.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatellites::get_children()
{
    for (auto const & c : nv_satellite)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void NvSatellites::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> NvSatellites::clone_ptr()
{
    return std::make_unique<NvSatellites>();
}
NvSatelliteGlobal::ChassisMac::ChassisMac()
    :
    	mac1{YType::uint32, "mac1"},
	 mac2{YType::uint32, "mac2"},
	 mac3{YType::uint32, "mac3"}
{
    yang_name = "chassis-mac"; yang_parent_name = "nv-satellite-global";
}

NvSatelliteGlobal::ChassisMac::~ChassisMac()
{
}

bool NvSatelliteGlobal::ChassisMac::has_data() const
{
    return mac1.is_set
	|| mac2.is_set
	|| mac3.is_set;
}

bool NvSatelliteGlobal::ChassisMac::has_operation() const
{
    return is_set(operation)
	|| is_set(mac1.operation)
	|| is_set(mac2.operation)
	|| is_set(mac3.operation);
}

std::string NvSatelliteGlobal::ChassisMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chassis-mac";

    return path_buffer.str();

}

EntityPath NvSatelliteGlobal::ChassisMac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-global/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac1.is_set || is_set(mac1.operation)) leaf_name_data.push_back(mac1.get_name_leafdata());
    if (mac2.is_set || is_set(mac2.operation)) leaf_name_data.push_back(mac2.get_name_leafdata());
    if (mac3.is_set || is_set(mac3.operation)) leaf_name_data.push_back(mac3.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatelliteGlobal::ChassisMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & NvSatelliteGlobal::ChassisMac::get_children()
{
    return children;
}

void NvSatelliteGlobal::ChassisMac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac1")
    {
        mac1 = value;
    }
    if(value_path == "mac2")
    {
        mac2 = value;
    }
    if(value_path == "mac3")
    {
        mac3 = value;
    }
}

NvSatelliteGlobal::NvSatelliteGlobal()
    :
    chassis_mac(std::make_unique<NvSatelliteGlobal::ChassisMac>())
{
    chassis_mac->parent = this;
    children["chassis-mac"] = chassis_mac.get();

    yang_name = "nv-satellite-global"; yang_parent_name = "Cisco-IOS-XR-icpe-infra-cfg";
}

NvSatelliteGlobal::~NvSatelliteGlobal()
{
}

bool NvSatelliteGlobal::has_data() const
{
    return (chassis_mac !=  nullptr && chassis_mac->has_data());
}

bool NvSatelliteGlobal::has_operation() const
{
    return is_set(operation)
	|| (chassis_mac !=  nullptr && chassis_mac->has_operation());
}

std::string NvSatelliteGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-icpe-infra-cfg:nv-satellite-global";

    return path_buffer.str();

}

EntityPath NvSatelliteGlobal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* NvSatelliteGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "chassis-mac")
    {
        if(chassis_mac != nullptr)
        {
            children["chassis-mac"] = chassis_mac.get();
        }
        else
        {
            chassis_mac = std::make_unique<NvSatelliteGlobal::ChassisMac>();
            chassis_mac->parent = this;
            children["chassis-mac"] = chassis_mac.get();
        }
        return children.at("chassis-mac");
    }

    return nullptr;
}

std::map<std::string, Entity*> & NvSatelliteGlobal::get_children()
{
    if(children.find("chassis-mac") == children.end())
    {
        if(chassis_mac != nullptr)
        {
            children["chassis-mac"] = chassis_mac.get();
        }
    }

    return children;
}

void NvSatelliteGlobal::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> NvSatelliteGlobal::clone_ptr()
{
    return std::make_unique<NvSatelliteGlobal>();
}


}
}

