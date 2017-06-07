
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_74.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Redundancy::Policy::ConfigSync::Lbl::Prc::Prc()
    :
    reload{YType::boolean, "reload"}
{
    yang_name = "prc"; yang_parent_name = "lbl";
}

Native::Redundancy::Policy::ConfigSync::Lbl::Prc::~Prc()
{
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::Prc::has_data() const
{
    return reload.is_set;
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::Prc::has_operation() const
{
    return is_set(operation)
	|| is_set(reload.operation);
}

std::string Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc";

    return path_buffer.str();

}

const EntityPath Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/config-sync/lbl/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reload.is_set || is_set(reload.operation)) leaf_name_data.push_back(reload.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Policy::ConfigSync::Lbl::Prc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reload")
    {
        reload = value;
    }
}

Native::Redundancy::Timer::Timer()
    :
    rpso{YType::uint16, "rpso"}
{
    yang_name = "timer"; yang_parent_name = "redundancy";
}

Native::Redundancy::Timer::~Timer()
{
}

bool Native::Redundancy::Timer::has_data() const
{
    return rpso.is_set;
}

bool Native::Redundancy::Timer::has_operation() const
{
    return is_set(operation)
	|| is_set(rpso.operation);
}

std::string Native::Redundancy::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";

    return path_buffer.str();

}

const EntityPath Native::Redundancy::Timer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/redundancy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rpso.is_set || is_set(rpso.operation)) leaf_name_data.push_back(rpso.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Redundancy::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Timer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rpso")
    {
        rpso = value;
    }
}

Native::Redundancy::Interchassis::Interchassis()
{
    yang_name = "interchassis"; yang_parent_name = "redundancy";
}

Native::Redundancy::Interchassis::~Interchassis()
{
}

bool Native::Redundancy::Interchassis::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Redundancy::Interchassis::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Redundancy::Interchassis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interchassis";

    return path_buffer.str();

}

const EntityPath Native::Redundancy::Interchassis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/redundancy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Redundancy::Interchassis::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Redundancy::Interchassis::set_value(const std::string & value_path, std::string value)
{
}

Native::Redundancy::Interchassis::Group::Group()
    :
    group_number{YType::uint64, "group-number"}
    	,
    backbone(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone>())
	,member(std::make_shared<Native::Redundancy::Interchassis::Group::Member>())
	,monitor(std::make_shared<Native::Redundancy::Interchassis::Group::Monitor>())
{
    backbone->parent = this;

    member->parent = this;

    monitor->parent = this;

    yang_name = "group"; yang_parent_name = "interchassis";
}

Native::Redundancy::Interchassis::Group::~Group()
{
}

bool Native::Redundancy::Interchassis::Group::has_data() const
{
    return group_number.is_set
	|| (backbone !=  nullptr && backbone->has_data())
	|| (member !=  nullptr && member->has_data())
	|| (monitor !=  nullptr && monitor->has_data());
}

bool Native::Redundancy::Interchassis::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(group_number.operation)
	|| (backbone !=  nullptr && backbone->has_operation())
	|| (member !=  nullptr && member->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation());
}

std::string Native::Redundancy::Interchassis::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-number='" <<group_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Redundancy::Interchassis::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/redundancy/interchassis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.operation)) leaf_name_data.push_back(group_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backbone")
    {
        if(backbone == nullptr)
        {
            backbone = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone>();
        }
        return backbone;
    }

    if(child_yang_name == "member")
    {
        if(member == nullptr)
        {
            member = std::make_shared<Native::Redundancy::Interchassis::Group::Member>();
        }
        return member;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Redundancy::Interchassis::Group::Monitor>();
        }
        return monitor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backbone != nullptr)
    {
        children["backbone"] = backbone;
    }

    if(member != nullptr)
    {
        children["member"] = member;
    }

    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    return children;
}

void Native::Redundancy::Interchassis::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-number")
    {
        group_number = value;
    }
}

Native::Redundancy::Interchassis::Group::Monitor::Monitor()
    :
    bfd{YType::empty, "bfd"},
    peer{YType::empty, "peer"}
{
    yang_name = "monitor"; yang_parent_name = "group";
}

Native::Redundancy::Interchassis::Group::Monitor::~Monitor()
{
}

bool Native::Redundancy::Interchassis::Group::Monitor::has_data() const
{
    return bfd.is_set
	|| peer.is_set;
}

bool Native::Redundancy::Interchassis::Group::Monitor::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd.operation)
	|| is_set(peer.operation);
}

std::string Native::Redundancy::Interchassis::Group::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";

    return path_buffer.str();

}

const EntityPath Native::Redundancy::Interchassis::Group::Monitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Monitor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.operation)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (peer.is_set || is_set(peer.operation)) leaf_name_data.push_back(peer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Interchassis::Group::Monitor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd")
    {
        bfd = value;
    }
    if(value_path == "peer")
    {
        peer = value;
    }
}

Native::Redundancy::Interchassis::Group::Member::Member()
    :
    ip{YType::str, "ip"}
{
    yang_name = "member"; yang_parent_name = "group";
}

Native::Redundancy::Interchassis::Group::Member::~Member()
{
}

bool Native::Redundancy::Interchassis::Group::Member::has_data() const
{
    return ip.is_set;
}

bool Native::Redundancy::Interchassis::Group::Member::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation);
}

std::string Native::Redundancy::Interchassis::Group::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";

    return path_buffer.str();

}

const EntityPath Native::Redundancy::Interchassis::Group::Member::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Member' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Interchassis::Group::Member::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
}

Native::Redundancy::Interchassis::Group::Backbone::Backbone()
    :
    interface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface>())
{
    interface->parent = this;

    yang_name = "backbone"; yang_parent_name = "group";
}

Native::Redundancy::Interchassis::Group::Backbone::~Backbone()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::has_data() const
{
    return (interface !=  nullptr && interface->has_data());
}

bool Native::Redundancy::Interchassis::Group::Backbone::has_operation() const
{
    return is_set(operation)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Redundancy::Interchassis::Group::Backbone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backbone";

    return path_buffer.str();

}

const EntityPath Native::Redundancy::Interchassis::Group::Backbone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backbone' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Backbone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Backbone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Redundancy::Interchassis::Group::Backbone::set_value(const std::string & value_path, std::string value)
{
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::uint16, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "backbone";
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::~Interface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Redundancy::Interchassis::Group::Backbone::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmAcrsubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Redundancy::Interchassis::Group::Backbone::Interface::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortChannelSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Interchassis::Group::Backbone::Interface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Scheduler::Scheduler()
    :
    allocate(std::make_shared<Native::Scheduler::Allocate>())
	,runtime(std::make_shared<Native::Scheduler::Runtime>())
{
    allocate->parent = this;

    runtime->parent = this;

    yang_name = "scheduler"; yang_parent_name = "native";
}

Native::Scheduler::~Scheduler()
{
}

bool Native::Scheduler::has_data() const
{
    return (allocate !=  nullptr && allocate->has_data())
	|| (runtime !=  nullptr && runtime->has_data());
}

bool Native::Scheduler::has_operation() const
{
    return is_set(operation)
	|| (allocate !=  nullptr && allocate->has_operation())
	|| (runtime !=  nullptr && runtime->has_operation());
}

std::string Native::Scheduler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scheduler";

    return path_buffer.str();

}

const EntityPath Native::Scheduler::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Scheduler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allocate")
    {
        if(allocate == nullptr)
        {
            allocate = std::make_shared<Native::Scheduler::Allocate>();
        }
        return allocate;
    }

    if(child_yang_name == "runtime")
    {
        if(runtime == nullptr)
        {
            runtime = std::make_shared<Native::Scheduler::Runtime>();
        }
        return runtime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Scheduler::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allocate != nullptr)
    {
        children["allocate"] = allocate;
    }

    if(runtime != nullptr)
    {
        children["runtime"] = runtime;
    }

    return children;
}

void Native::Scheduler::set_value(const std::string & value_path, std::string value)
{
}

Native::Scheduler::Runtime::Runtime()
    :
    netinput{YType::uint16, "netinput"}
{
    yang_name = "runtime"; yang_parent_name = "scheduler";
}

Native::Scheduler::Runtime::~Runtime()
{
}

bool Native::Scheduler::Runtime::has_data() const
{
    return netinput.is_set;
}

bool Native::Scheduler::Runtime::has_operation() const
{
    return is_set(operation)
	|| is_set(netinput.operation);
}

std::string Native::Scheduler::Runtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "runtime";

    return path_buffer.str();

}

const EntityPath Native::Scheduler::Runtime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/scheduler/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (netinput.is_set || is_set(netinput.operation)) leaf_name_data.push_back(netinput.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Scheduler::Runtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Scheduler::Runtime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Scheduler::Runtime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "netinput")
    {
        netinput = value;
    }
}

Native::Scheduler::Allocate::Allocate()
    :
    interrupt_time{YType::uint16, "interrupt-time"},
    process_time{YType::uint16, "process-time"}
{
    yang_name = "allocate"; yang_parent_name = "scheduler";
}

Native::Scheduler::Allocate::~Allocate()
{
}

bool Native::Scheduler::Allocate::has_data() const
{
    return interrupt_time.is_set
	|| process_time.is_set;
}

bool Native::Scheduler::Allocate::has_operation() const
{
    return is_set(operation)
	|| is_set(interrupt_time.operation)
	|| is_set(process_time.operation);
}

std::string Native::Scheduler::Allocate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocate";

    return path_buffer.str();

}

const EntityPath Native::Scheduler::Allocate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/scheduler/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interrupt_time.is_set || is_set(interrupt_time.operation)) leaf_name_data.push_back(interrupt_time.get_name_leafdata());
    if (process_time.is_set || is_set(process_time.operation)) leaf_name_data.push_back(process_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Scheduler::Allocate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Scheduler::Allocate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Scheduler::Allocate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interrupt-time")
    {
        interrupt_time = value;
    }
    if(value_path == "process-time")
    {
        process_time = value;
    }
}

Native::Epm::Epm()
    :
    logging{YType::empty, "logging"}
{
    yang_name = "epm"; yang_parent_name = "native";
}

Native::Epm::~Epm()
{
}

bool Native::Epm::has_data() const
{
    return logging.is_set;
}

bool Native::Epm::has_operation() const
{
    return is_set(operation)
	|| is_set(logging.operation);
}

std::string Native::Epm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "epm";

    return path_buffer.str();

}

const EntityPath Native::Epm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.operation)) leaf_name_data.push_back(logging.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Epm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Epm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Epm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "logging")
    {
        logging = value;
    }
}

Native::SpanningTree::SpanningTree()
    :
    backbonefast{YType::empty, "Cisco-IOS-XE-spanning-tree:backbonefast"},
    logging{YType::empty, "Cisco-IOS-XE-spanning-tree:logging"},
    mode{YType::enumeration, "Cisco-IOS-XE-spanning-tree:mode"}
    	,
    bridge(std::make_shared<Native::SpanningTree::Bridge>())
	,etherchannel(std::make_shared<Native::SpanningTree::Etherchannel>())
	,extend(std::make_shared<Native::SpanningTree::Extend>())
	,loopguard(std::make_shared<Native::SpanningTree::Loopguard>())
	,mst(std::make_shared<Native::SpanningTree::Mst>())
	,optimize(std::make_shared<Native::SpanningTree::Optimize>())
	,pathcost(std::make_shared<Native::SpanningTree::Pathcost>())
	,portfast(std::make_shared<Native::SpanningTree::Portfast>())
	,transmit(std::make_shared<Native::SpanningTree::Transmit>())
	,uplinkfast(nullptr) // presence node
{
    bridge->parent = this;

    etherchannel->parent = this;

    extend->parent = this;

    loopguard->parent = this;

    mst->parent = this;

    optimize->parent = this;

    pathcost->parent = this;

    portfast->parent = this;

    transmit->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "native";
}

Native::SpanningTree::~SpanningTree()
{
}

bool Native::SpanningTree::has_data() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return backbonefast.is_set
	|| logging.is_set
	|| mode.is_set
	|| (bridge !=  nullptr && bridge->has_data())
	|| (etherchannel !=  nullptr && etherchannel->has_data())
	|| (extend !=  nullptr && extend->has_data())
	|| (loopguard !=  nullptr && loopguard->has_data())
	|| (mst !=  nullptr && mst->has_data())
	|| (optimize !=  nullptr && optimize->has_data())
	|| (pathcost !=  nullptr && pathcost->has_data())
	|| (portfast !=  nullptr && portfast->has_data())
	|| (transmit !=  nullptr && transmit->has_data())
	|| (uplinkfast !=  nullptr && uplinkfast->has_data());
}

bool Native::SpanningTree::has_operation() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(backbonefast.operation)
	|| is_set(logging.operation)
	|| is_set(mode.operation)
	|| (bridge !=  nullptr && bridge->has_operation())
	|| (etherchannel !=  nullptr && etherchannel->has_operation())
	|| (extend !=  nullptr && extend->has_operation())
	|| (loopguard !=  nullptr && loopguard->has_operation())
	|| (mst !=  nullptr && mst->has_operation())
	|| (optimize !=  nullptr && optimize->has_operation())
	|| (pathcost !=  nullptr && pathcost->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation())
	|| (transmit !=  nullptr && transmit->has_operation())
	|| (uplinkfast !=  nullptr && uplinkfast->has_operation());
}

std::string Native::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";

    return path_buffer.str();

}

const EntityPath Native::SpanningTree::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backbonefast.is_set || is_set(backbonefast.operation)) leaf_name_data.push_back(backbonefast.get_name_leafdata());
    if (logging.is_set || is_set(logging.operation)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge")
    {
        if(bridge == nullptr)
        {
            bridge = std::make_shared<Native::SpanningTree::Bridge>();
        }
        return bridge;
    }

    if(child_yang_name == "etherchannel")
    {
        if(etherchannel == nullptr)
        {
            etherchannel = std::make_shared<Native::SpanningTree::Etherchannel>();
        }
        return etherchannel;
    }

    if(child_yang_name == "extend")
    {
        if(extend == nullptr)
        {
            extend = std::make_shared<Native::SpanningTree::Extend>();
        }
        return extend;
    }

    if(child_yang_name == "loopguard")
    {
        if(loopguard == nullptr)
        {
            loopguard = std::make_shared<Native::SpanningTree::Loopguard>();
        }
        return loopguard;
    }

    if(child_yang_name == "mst")
    {
        if(mst == nullptr)
        {
            mst = std::make_shared<Native::SpanningTree::Mst>();
        }
        return mst;
    }

    if(child_yang_name == "optimize")
    {
        if(optimize == nullptr)
        {
            optimize = std::make_shared<Native::SpanningTree::Optimize>();
        }
        return optimize;
    }

    if(child_yang_name == "pathcost")
    {
        if(pathcost == nullptr)
        {
            pathcost = std::make_shared<Native::SpanningTree::Pathcost>();
        }
        return pathcost;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::SpanningTree::Portfast>();
        }
        return portfast;
    }

    if(child_yang_name == "transmit")
    {
        if(transmit == nullptr)
        {
            transmit = std::make_shared<Native::SpanningTree::Transmit>();
        }
        return transmit;
    }

    if(child_yang_name == "uplinkfast")
    {
        if(uplinkfast == nullptr)
        {
            uplinkfast = std::make_shared<Native::SpanningTree::Uplinkfast>();
        }
        return uplinkfast;
    }

    if(child_yang_name == "vlan")
    {
        for(auto const & c : vlan)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SpanningTree::Vlan>();
        c->parent = this;
        vlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bridge != nullptr)
    {
        children["bridge"] = bridge;
    }

    if(etherchannel != nullptr)
    {
        children["etherchannel"] = etherchannel;
    }

    if(extend != nullptr)
    {
        children["extend"] = extend;
    }

    if(loopguard != nullptr)
    {
        children["loopguard"] = loopguard;
    }

    if(mst != nullptr)
    {
        children["mst"] = mst;
    }

    if(optimize != nullptr)
    {
        children["optimize"] = optimize;
    }

    if(pathcost != nullptr)
    {
        children["pathcost"] = pathcost;
    }

    if(portfast != nullptr)
    {
        children["portfast"] = portfast;
    }

    if(transmit != nullptr)
    {
        children["transmit"] = transmit;
    }

    if(uplinkfast != nullptr)
    {
        children["uplinkfast"] = uplinkfast;
    }

    for (auto const & c : vlan)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::SpanningTree::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backbonefast")
    {
        backbonefast = value;
    }
    if(value_path == "logging")
    {
        logging = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

Native::SpanningTree::Bridge::Bridge()
    :
    id{YType::str, "ID"},
    priority{YType::uint8, "priority"}
{
    yang_name = "bridge"; yang_parent_name = "spanning-tree";
}

Native::SpanningTree::Bridge::~Bridge()
{
}

bool Native::SpanningTree::Bridge::has_data() const
{
    return id.is_set
	|| priority.is_set;
}

bool Native::SpanningTree::Bridge::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(priority.operation);
}

std::string Native::SpanningTree::Bridge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:bridge";

    return path_buffer.str();

}

const EntityPath Native::SpanningTree::Bridge::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SpanningTree::Bridge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Bridge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Bridge::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ID")
    {
        id = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Native::SpanningTree::Etherchannel::Etherchannel()
    :
    guard(std::make_shared<Native::SpanningTree::Etherchannel::Guard>())
{
    guard->parent = this;

    yang_name = "etherchannel"; yang_parent_name = "spanning-tree";
}

Native::SpanningTree::Etherchannel::~Etherchannel()
{
}

bool Native::SpanningTree::Etherchannel::has_data() const
{
    return (guard !=  nullptr && guard->has_data());
}

bool Native::SpanningTree::Etherchannel::has_operation() const
{
    return is_set(operation)
	|| (guard !=  nullptr && guard->has_operation());
}

std::string Native::SpanningTree::Etherchannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:etherchannel";

    return path_buffer.str();

}

const EntityPath Native::SpanningTree::Etherchannel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SpanningTree::Etherchannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "guard")
    {
        if(guard == nullptr)
        {
            guard = std::make_shared<Native::SpanningTree::Etherchannel::Guard>();
        }
        return guard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Etherchannel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(guard != nullptr)
    {
        children["guard"] = guard;
    }

    return children;
}

void Native::SpanningTree::Etherchannel::set_value(const std::string & value_path, std::string value)
{
}

Native::SpanningTree::Etherchannel::Guard::Guard()
    :
    misconfig{YType::empty, "misconfig"}
{
    yang_name = "guard"; yang_parent_name = "etherchannel";
}

Native::SpanningTree::Etherchannel::Guard::~Guard()
{
}

bool Native::SpanningTree::Etherchannel::Guard::has_data() const
{
    return misconfig.is_set;
}

bool Native::SpanningTree::Etherchannel::Guard::has_operation() const
{
    return is_set(operation)
	|| is_set(misconfig.operation);
}

std::string Native::SpanningTree::Etherchannel::Guard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "guard";

    return path_buffer.str();

}

const EntityPath Native::SpanningTree::Etherchannel::Guard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:etherchannel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (misconfig.is_set || is_set(misconfig.operation)) leaf_name_data.push_back(misconfig.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SpanningTree::Etherchannel::Guard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Etherchannel::Guard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Etherchannel::Guard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "misconfig")
    {
        misconfig = value;
    }
}

Native::SpanningTree::Extend::Extend()
    :
    system_id{YType::empty, "system-id"}
{
    yang_name = "extend"; yang_parent_name = "spanning-tree";
}

Native::SpanningTree::Extend::~Extend()
{
}

bool Native::SpanningTree::Extend::has_data() const
{
    return system_id.is_set;
}

bool Native::SpanningTree::Extend::has_operation() const
{
    return is_set(operation)
	|| is_set(system_id.operation);
}

std::string Native::SpanningTree::Extend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:extend";

    return path_buffer.str();

}

const EntityPath Native::SpanningTree::Extend::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.operation)) leaf_name_data.push_back(system_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SpanningTree::Extend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Extend::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Extend::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-id")
    {
        system_id = value;
    }
}

Native::SpanningTree::Loopguard::Loopguard()
    :
    default_{YType::empty, "default"}
{
    yang_name = "loopguard"; yang_parent_name = "spanning-tree";
}

Native::SpanningTree::Loopguard::~Loopguard()
{
}

bool Native::SpanningTree::Loopguard::has_data() const
{
    return default_.is_set;
}

bool Native::SpanningTree::Loopguard::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation);
}

std::string Native::SpanningTree::Loopguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:loopguard";

    return path_buffer.str();

}

const EntityPath Native::SpanningTree::Loopguard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SpanningTree::Loopguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Loopguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Loopguard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
}

Native::SpanningTree::Mst::Mst()
    :
    forward_time{YType::uint8, "forward-time"},
    hello_time{YType::uint8, "hello-time"},
    max_age{YType::uint8, "max-age"},
    max_hops{YType::uint8, "max-hops"}
    	,
    configuration(std::make_shared<Native::SpanningTree::Mst::Configuration>())
{
    configuration->parent = this;

    yang_name = "mst"; yang_parent_name = "spanning-tree";
}

Native::SpanningTree::Mst::~Mst()
{
}

bool Native::SpanningTree::Mst::has_data() const
{
    for (std::size_t index=0; index<instance_range.size(); index++)
    {
        if(instance_range[index]->has_data())
            return true;
    }
    return forward_time.is_set
	|| hello_time.is_set
	|| max_age.is_set
	|| max_hops.is_set
	|| (configuration !=  nullptr && configuration->has_data());
}

bool Native::SpanningTree::Mst::has_operation() const
{
    for (std::size_t index=0; index<instance_range.size(); index++)
    {
        if(instance_range[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(forward_time.operation)
	|| is_set(hello_time.operation)
	|| is_set(max_age.operation)
	|| is_set(max_hops.operation)
	|| (configuration !=  nullptr && configuration->has_operation());
}

std::string Native::SpanningTree::Mst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:mst";

    return path_buffer.str();

}

const EntityPath Native::SpanningTree::Mst::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forward_time.is_set || is_set(forward_time.operation)) leaf_name_data.push_back(forward_time.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.operation)) leaf_name_data.push_back(hello_time.get_name_leafdata());
    if (max_age.is_set || is_set(max_age.operation)) leaf_name_data.push_back(max_age.get_name_leafdata());
    if (max_hops.is_set || is_set(max_hops.operation)) leaf_name_data.push_back(max_hops.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SpanningTree::Mst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::SpanningTree::Mst::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "instance-range")
    {
        for(auto const & c : instance_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SpanningTree::Mst::InstanceRange>();
        c->parent = this;
        instance_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Mst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    for (auto const & c : instance_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::SpanningTree::Mst::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forward-time")
    {
        forward_time = value;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
    }
    if(value_path == "max-age")
    {
        max_age = value;
    }
    if(value_path == "max-hops")
    {
        max_hops = value;
    }
}

Native::SpanningTree::Mst::InstanceRange::InstanceRange()
    :
    id{YType::str, "id"},
    priority{YType::uint16, "priority"},
    root{YType::enumeration, "root"}
{
    yang_name = "instance-range"; yang_parent_name = "mst";
}

Native::SpanningTree::Mst::InstanceRange::~InstanceRange()
{
}

bool Native::SpanningTree::Mst::InstanceRange::has_data() const
{
    return id.is_set
	|| priority.is_set
	|| root.is_set;
}

bool Native::SpanningTree::Mst::InstanceRange::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(priority.operation)
	|| is_set(root.operation);
}

std::string Native::SpanningTree::Mst::InstanceRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-range" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::SpanningTree::Mst::InstanceRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:mst/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (root.is_set || is_set(root.operation)) leaf_name_data.push_back(root.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SpanningTree::Mst::InstanceRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Mst::InstanceRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Mst::InstanceRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "root")
    {
        root = value;
    }
}

Native::SpanningTree::Mst::Configuration::Configuration()
    :
    name{YType::str, "name"},
    revision{YType::uint16, "revision"}
    	,
    private_vlan(std::make_shared<Native::SpanningTree::Mst::Configuration::PrivateVlan>())
{
    private_vlan->parent = this;

    yang_name = "configuration"; yang_parent_name = "mst";
}

Native::SpanningTree::Mst::Configuration::~Configuration()
{
}

bool Native::SpanningTree::Mst::Configuration::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return name.is_set
	|| revision.is_set
	|| (private_vlan !=  nullptr && private_vlan->has_data());
}

bool Native::SpanningTree::Mst::Configuration::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(revision.operation)
	|| (private_vlan !=  nullptr && private_vlan->has_operation());
}

std::string Native::SpanningTree::Mst::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";

    return path_buffer.str();

}

const EntityPath Native::SpanningTree::Mst::Configuration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:mst/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (revision.is_set || is_set(revision.operation)) leaf_name_data.push_back(revision.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SpanningTree::Mst::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::SpanningTree::Mst::Configuration::Instance>();
        c->parent = this;
        instance.push_back(c);
        return c;
    }

    if(child_yang_name == "private-vlan")
    {
        if(private_vlan == nullptr)
        {
            private_vlan = std::make_shared<Native::SpanningTree::Mst::Configuration::PrivateVlan>();
        }
        return private_vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Mst::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance)
    {
        children[c->get_segment_path()] = c;
    }

    if(private_vlan != nullptr)
    {
        children["private-vlan"] = private_vlan;
    }

    return children;
}

void Native::SpanningTree::Mst::Configuration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "revision")
    {
        revision = value;
    }
}

Native::SpanningTree::Mst::Configuration::Instance::Instance()
    :
    id{YType::uint16, "id"},
    vlan{YType::str, "vlan"}
{
    yang_name = "instance"; yang_parent_name = "configuration";
}

Native::SpanningTree::Mst::Configuration::Instance::~Instance()
{
}

bool Native::SpanningTree::Mst::Configuration::Instance::has_data() const
{
    for (auto const & leaf : vlan.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set;
}

bool Native::SpanningTree::Mst::Configuration::Instance::has_operation() const
{
    for (auto const & leaf : vlan.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(vlan.operation);
}

std::string Native::SpanningTree::Mst::Configuration::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::SpanningTree::Mst::Configuration::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:mst/configuration/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());

    auto vlan_name_datas = vlan.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), vlan_name_datas.begin(), vlan_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SpanningTree::Mst::Configuration::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Mst::Configuration::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Mst::Configuration::Instance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "vlan")
    {
        vlan.append(value);
    }
}

Native::SpanningTree::Mst::Configuration::PrivateVlan::PrivateVlan()
    :
    synchronize{YType::empty, "synchronize"}
{
    yang_name = "private-vlan"; yang_parent_name = "configuration";
}

Native::SpanningTree::Mst::Configuration::PrivateVlan::~PrivateVlan()
{
}

bool Native::SpanningTree::Mst::Configuration::PrivateVlan::has_data() const
{
    return synchronize.is_set;
}

bool Native::SpanningTree::Mst::Configuration::PrivateVlan::has_operation() const
{
    return is_set(operation)
	|| is_set(synchronize.operation);
}

std::string Native::SpanningTree::Mst::Configuration::PrivateVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-vlan";

    return path_buffer.str();

}

const EntityPath Native::SpanningTree::Mst::Configuration::PrivateVlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:mst/configuration/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (synchronize.is_set || is_set(synchronize.operation)) leaf_name_data.push_back(synchronize.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SpanningTree::Mst::Configuration::PrivateVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Mst::Configuration::PrivateVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Mst::Configuration::PrivateVlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "synchronize")
    {
        synchronize = value;
    }
}

Native::SpanningTree::Optimize::Optimize()
    :
    bpdu(std::make_shared<Native::SpanningTree::Optimize::Bpdu>())
{
    bpdu->parent = this;

    yang_name = "optimize"; yang_parent_name = "spanning-tree";
}

Native::SpanningTree::Optimize::~Optimize()
{
}

bool Native::SpanningTree::Optimize::has_data() const
{
    return (bpdu !=  nullptr && bpdu->has_data());
}

bool Native::SpanningTree::Optimize::has_operation() const
{
    return is_set(operation)
	|| (bpdu !=  nullptr && bpdu->has_operation());
}

std::string Native::SpanningTree::Optimize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:optimize";

    return path_buffer.str();

}

const EntityPath Native::SpanningTree::Optimize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SpanningTree::Optimize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpdu")
    {
        if(bpdu == nullptr)
        {
            bpdu = std::make_shared<Native::SpanningTree::Optimize::Bpdu>();
        }
        return bpdu;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Optimize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bpdu != nullptr)
    {
        children["bpdu"] = bpdu;
    }

    return children;
}

void Native::SpanningTree::Optimize::set_value(const std::string & value_path, std::string value)
{
}

Native::SpanningTree::Optimize::Bpdu::Bpdu()
    :
    transmission{YType::boolean, "transmission"}
{
    yang_name = "bpdu"; yang_parent_name = "optimize";
}

Native::SpanningTree::Optimize::Bpdu::~Bpdu()
{
}

bool Native::SpanningTree::Optimize::Bpdu::has_data() const
{
    return transmission.is_set;
}

bool Native::SpanningTree::Optimize::Bpdu::has_operation() const
{
    return is_set(operation)
	|| is_set(transmission.operation);
}

std::string Native::SpanningTree::Optimize::Bpdu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpdu";

    return path_buffer.str();

}

const EntityPath Native::SpanningTree::Optimize::Bpdu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:optimize/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmission.is_set || is_set(transmission.operation)) leaf_name_data.push_back(transmission.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SpanningTree::Optimize::Bpdu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Optimize::Bpdu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Optimize::Bpdu::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transmission")
    {
        transmission = value;
    }
}

Native::SpanningTree::Pathcost::Pathcost()
    :
    method(std::make_shared<Native::SpanningTree::Pathcost::Method>())
{
    method->parent = this;

    yang_name = "pathcost"; yang_parent_name = "spanning-tree";
}

Native::SpanningTree::Pathcost::~Pathcost()
{
}

bool Native::SpanningTree::Pathcost::has_data() const
{
    return (method !=  nullptr && method->has_data());
}

bool Native::SpanningTree::Pathcost::has_operation() const
{
    return is_set(operation)
	|| (method !=  nullptr && method->has_operation());
}

std::string Native::SpanningTree::Pathcost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:pathcost";

    return path_buffer.str();

}

const EntityPath Native::SpanningTree::Pathcost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SpanningTree::Pathcost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::SpanningTree::Pathcost::Method>();
        }
        return method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Pathcost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(method != nullptr)
    {
        children["method"] = method;
    }

    return children;
}

void Native::SpanningTree::Pathcost::set_value(const std::string & value_path, std::string value)
{
}

Native::SpanningTree::Pathcost::Method::Method()
    :
    long_{YType::empty, "long"},
    short{YType::empty, "short"}
{
    yang_name = "method"; yang_parent_name = "pathcost";
}

Native::SpanningTree::Pathcost::Method::~Method()
{
}

bool Native::SpanningTree::Pathcost::Method::has_data() const
{
    return long_.is_set
	|| short.is_set;
}

bool Native::SpanningTree::Pathcost::Method::has_operation() const
{
    return is_set(operation)
	|| is_set(long_.operation)
	|| is_set(short.operation);
}

std::string Native::SpanningTree::Pathcost::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";

    return path_buffer.str();

}

const EntityPath Native::SpanningTree::Pathcost::Method::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:pathcost/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.operation)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (short.is_set || is_set(short.operation)) leaf_name_data.push_back(short.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SpanningTree::Pathcost::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Pathcost::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Pathcost::Method::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "long")
    {
        long_ = value;
    }
    if(value_path == "short")
    {
        short = value;
    }
}

Native::SpanningTree::Portfast::Portfast()
    :
    bdpu{YType::enumeration, "bdpu"},
    default_{YType::empty, "default"}
{
    yang_name = "portfast"; yang_parent_name = "spanning-tree";
}

Native::SpanningTree::Portfast::~Portfast()
{
}

bool Native::SpanningTree::Portfast::has_data() const
{
    return bdpu.is_set
	|| default_.is_set;
}

bool Native::SpanningTree::Portfast::has_operation() const
{
    return is_set(operation)
	|| is_set(bdpu.operation)
	|| is_set(default_.operation);
}

std::string Native::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:portfast";

    return path_buffer.str();

}

const EntityPath Native::SpanningTree::Portfast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bdpu.is_set || is_set(bdpu.operation)) leaf_name_data.push_back(bdpu.get_name_leafdata());
    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Portfast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bdpu")
    {
        bdpu = value;
    }
    if(value_path == "default")
    {
        default_ = value;
    }
}

Native::SpanningTree::Transmit::Transmit()
    :
    hold_count{YType::uint8, "hold-count"}
{
    yang_name = "transmit"; yang_parent_name = "spanning-tree";
}

Native::SpanningTree::Transmit::~Transmit()
{
}

bool Native::SpanningTree::Transmit::has_data() const
{
    return hold_count.is_set;
}

bool Native::SpanningTree::Transmit::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_count.operation);
}

std::string Native::SpanningTree::Transmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:transmit";

    return path_buffer.str();

}

const EntityPath Native::SpanningTree::Transmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_count.is_set || is_set(hold_count.operation)) leaf_name_data.push_back(hold_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SpanningTree::Transmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Transmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Transmit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-count")
    {
        hold_count = value;
    }
}

Native::SpanningTree::Uplinkfast::Uplinkfast()
    :
    max_update_rate{YType::uint32, "max-update-rate"}
{
    yang_name = "uplinkfast"; yang_parent_name = "spanning-tree";
}

Native::SpanningTree::Uplinkfast::~Uplinkfast()
{
}

bool Native::SpanningTree::Uplinkfast::has_data() const
{
    return max_update_rate.is_set;
}

bool Native::SpanningTree::Uplinkfast::has_operation() const
{
    return is_set(operation)
	|| is_set(max_update_rate.operation);
}

std::string Native::SpanningTree::Uplinkfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:uplinkfast";

    return path_buffer.str();

}

const EntityPath Native::SpanningTree::Uplinkfast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_update_rate.is_set || is_set(max_update_rate.operation)) leaf_name_data.push_back(max_update_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SpanningTree::Uplinkfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Uplinkfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Uplinkfast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-update-rate")
    {
        max_update_rate = value;
    }
}

Native::SpanningTree::Vlan::Vlan()
    :
    id{YType::str, "id"},
    forward_time{YType::uint8, "forward-time"},
    hello_time{YType::uint8, "hello-time"},
    max_age{YType::uint8, "max-age"},
    priority{YType::uint16, "priority"}
    	,
    root(std::make_shared<Native::SpanningTree::Vlan::Root>())
{
    root->parent = this;

    yang_name = "vlan"; yang_parent_name = "spanning-tree";
}

Native::SpanningTree::Vlan::~Vlan()
{
}

bool Native::SpanningTree::Vlan::has_data() const
{
    return id.is_set
	|| forward_time.is_set
	|| hello_time.is_set
	|| max_age.is_set
	|| priority.is_set
	|| (root !=  nullptr && root->has_data());
}

bool Native::SpanningTree::Vlan::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(forward_time.operation)
	|| is_set(hello_time.operation)
	|| is_set(max_age.operation)
	|| is_set(priority.operation)
	|| (root !=  nullptr && root->has_operation());
}

std::string Native::SpanningTree::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:vlan" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::SpanningTree::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (forward_time.is_set || is_set(forward_time.operation)) leaf_name_data.push_back(forward_time.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.operation)) leaf_name_data.push_back(hello_time.get_name_leafdata());
    if (max_age.is_set || is_set(max_age.operation)) leaf_name_data.push_back(max_age.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SpanningTree::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "root")
    {
        if(root == nullptr)
        {
            root = std::make_shared<Native::SpanningTree::Vlan::Root>();
        }
        return root;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(root != nullptr)
    {
        children["root"] = root;
    }

    return children;
}

void Native::SpanningTree::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "forward-time")
    {
        forward_time = value;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
    }
    if(value_path == "max-age")
    {
        max_age = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Native::SpanningTree::Vlan::Root::Root()
    :
    primary(std::make_shared<Native::SpanningTree::Vlan::Root::Primary>())
	,secondary(std::make_shared<Native::SpanningTree::Vlan::Root::Secondary>())
{
    primary->parent = this;

    secondary->parent = this;

    yang_name = "root"; yang_parent_name = "vlan";
}

Native::SpanningTree::Vlan::Root::~Root()
{
}

bool Native::SpanningTree::Vlan::Root::has_data() const
{
    return (primary !=  nullptr && primary->has_data())
	|| (secondary !=  nullptr && secondary->has_data());
}

bool Native::SpanningTree::Vlan::Root::has_operation() const
{
    return is_set(operation)
	|| (primary !=  nullptr && primary->has_operation())
	|| (secondary !=  nullptr && secondary->has_operation());
}

std::string Native::SpanningTree::Vlan::Root::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "root";

    return path_buffer.str();

}

const EntityPath Native::SpanningTree::Vlan::Root::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Root' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SpanningTree::Vlan::Root::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::SpanningTree::Vlan::Root::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "secondary")
    {
        if(secondary == nullptr)
        {
            secondary = std::make_shared<Native::SpanningTree::Vlan::Root::Secondary>();
        }
        return secondary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Vlan::Root::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(primary != nullptr)
    {
        children["primary"] = primary;
    }

    if(secondary != nullptr)
    {
        children["secondary"] = secondary;
    }

    return children;
}

void Native::SpanningTree::Vlan::Root::set_value(const std::string & value_path, std::string value)
{
}

Native::SpanningTree::Vlan::Root::Primary::Primary()
    :
    diameter{YType::uint8, "diameter"},
    hello_time{YType::uint8, "hello-time"}
{
    yang_name = "primary"; yang_parent_name = "root";
}

Native::SpanningTree::Vlan::Root::Primary::~Primary()
{
}

bool Native::SpanningTree::Vlan::Root::Primary::has_data() const
{
    return diameter.is_set
	|| hello_time.is_set;
}

bool Native::SpanningTree::Vlan::Root::Primary::has_operation() const
{
    return is_set(operation)
	|| is_set(diameter.operation)
	|| is_set(hello_time.operation);
}

std::string Native::SpanningTree::Vlan::Root::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";

    return path_buffer.str();

}

const EntityPath Native::SpanningTree::Vlan::Root::Primary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Primary' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diameter.is_set || is_set(diameter.operation)) leaf_name_data.push_back(diameter.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.operation)) leaf_name_data.push_back(hello_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SpanningTree::Vlan::Root::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Vlan::Root::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Vlan::Root::Primary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diameter")
    {
        diameter = value;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
    }
}

Native::SpanningTree::Vlan::Root::Secondary::Secondary()
    :
    diameter{YType::uint8, "diameter"},
    hello_time{YType::uint8, "hello-time"}
{
    yang_name = "secondary"; yang_parent_name = "root";
}

Native::SpanningTree::Vlan::Root::Secondary::~Secondary()
{
}

bool Native::SpanningTree::Vlan::Root::Secondary::has_data() const
{
    return diameter.is_set
	|| hello_time.is_set;
}

bool Native::SpanningTree::Vlan::Root::Secondary::has_operation() const
{
    return is_set(operation)
	|| is_set(diameter.operation)
	|| is_set(hello_time.operation);
}

std::string Native::SpanningTree::Vlan::Root::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary";

    return path_buffer.str();

}

const EntityPath Native::SpanningTree::Vlan::Root::Secondary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Secondary' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diameter.is_set || is_set(diameter.operation)) leaf_name_data.push_back(diameter.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.operation)) leaf_name_data.push_back(hello_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::SpanningTree::Vlan::Root::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Vlan::Root::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Vlan::Root::Secondary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diameter")
    {
        diameter = value;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
    }
}

Native::Subscriber::Subscriber()
    :
    templating{YType::empty, "templating"}
{
    yang_name = "subscriber"; yang_parent_name = "native";
}

Native::Subscriber::~Subscriber()
{
}

bool Native::Subscriber::has_data() const
{
    return templating.is_set;
}

bool Native::Subscriber::has_operation() const
{
    return is_set(operation)
	|| is_set(templating.operation);
}

std::string Native::Subscriber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber";

    return path_buffer.str();

}

const EntityPath Native::Subscriber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (templating.is_set || is_set(templating.operation)) leaf_name_data.push_back(templating.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Subscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Subscriber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Subscriber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "templating")
    {
        templating = value;
    }
}

Native::Track::Track()
    :
    resolution(std::make_shared<Native::Track::Resolution>())
	,timer(std::make_shared<Native::Track::Timer>())
{
    resolution->parent = this;

    timer->parent = this;

    yang_name = "track"; yang_parent_name = "native";
}

Native::Track::~Track()
{
}

bool Native::Track::has_data() const
{
    for (std::size_t index=0; index<tracked_object.size(); index++)
    {
        if(tracked_object[index]->has_data())
            return true;
    }
    return (resolution !=  nullptr && resolution->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Track::has_operation() const
{
    for (std::size_t index=0; index<tracked_object.size(); index++)
    {
        if(tracked_object[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (resolution !=  nullptr && resolution->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Track::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "track";

    return path_buffer.str();

}

const EntityPath Native::Track::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "resolution")
    {
        if(resolution == nullptr)
        {
            resolution = std::make_shared<Native::Track::Resolution>();
        }
        return resolution;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Track::Timer>();
        }
        return timer;
    }

    if(child_yang_name == "tracked-object")
    {
        for(auto const & c : tracked_object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Track::TrackedObject>();
        c->parent = this;
        tracked_object.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(resolution != nullptr)
    {
        children["resolution"] = resolution;
    }

    if(timer != nullptr)
    {
        children["timer"] = timer;
    }

    for (auto const & c : tracked_object)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Track::set_value(const std::string & value_path, std::string value)
{
}

Native::Track::TrackedObject::TrackedObject()
    :
    object_number{YType::uint32, "object-number"},
    default_state{YType::enumeration, "default-state"},
    stub_object{YType::empty, "stub-object"}
    	,
    default_(std::make_shared<Native::Track::TrackedObject::Default_>())
	,delay(std::make_shared<Native::Track::TrackedObject::Delay>())
	,interface(std::make_shared<Native::Track::TrackedObject::Interface>())
	,ip(std::make_shared<Native::Track::TrackedObject::Ip>())
	,ip_object(std::make_shared<Native::Track::TrackedObject::IpObject>())
	,ipv6(std::make_shared<Native::Track::TrackedObject::Ipv6>())
	,ipv6_object(std::make_shared<Native::Track::TrackedObject::Ipv6Object>())
	,list(std::make_shared<Native::Track::TrackedObject::List>())
{
    default_->parent = this;

    delay->parent = this;

    interface->parent = this;

    ip->parent = this;

    ip_object->parent = this;

    ipv6->parent = this;

    ipv6_object->parent = this;

    list->parent = this;

    yang_name = "tracked-object"; yang_parent_name = "track";
}

Native::Track::TrackedObject::~TrackedObject()
{
}

bool Native::Track::TrackedObject::has_data() const
{
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_data())
            return true;
    }
    return object_number.is_set
	|| default_state.is_set
	|| stub_object.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ip_object !=  nullptr && ip_object->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (ipv6_object !=  nullptr && ipv6_object->has_data())
	|| (list !=  nullptr && list->has_data());
}

bool Native::Track::TrackedObject::has_operation() const
{
    for (std::size_t index=0; index<object.size(); index++)
    {
        if(object[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(object_number.operation)
	|| is_set(default_state.operation)
	|| is_set(stub_object.operation)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ip_object !=  nullptr && ip_object->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (ipv6_object !=  nullptr && ipv6_object->has_operation())
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Track::TrackedObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-track:tracked-object" <<"[object-number='" <<object_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Track::TrackedObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/track/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (object_number.is_set || is_set(object_number.operation)) leaf_name_data.push_back(object_number.get_name_leafdata());
    if (default_state.is_set || is_set(default_state.operation)) leaf_name_data.push_back(default_state.get_name_leafdata());
    if (stub_object.is_set || is_set(stub_object.operation)) leaf_name_data.push_back(stub_object.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Track::TrackedObject::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Track::TrackedObject::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Track::TrackedObject::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Track::TrackedObject::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ip-object")
    {
        if(ip_object == nullptr)
        {
            ip_object = std::make_shared<Native::Track::TrackedObject::IpObject>();
        }
        return ip_object;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Track::TrackedObject::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "ipv6-object")
    {
        if(ipv6_object == nullptr)
        {
            ipv6_object = std::make_shared<Native::Track::TrackedObject::Ipv6Object>();
        }
        return ipv6_object;
    }

    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Track::TrackedObject::List>();
        }
        return list;
    }

    if(child_yang_name == "object")
    {
        for(auto const & c : object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Track::TrackedObject::Object>();
        c->parent = this;
        object.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ip_object != nullptr)
    {
        children["ip-object"] = ip_object;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(ipv6_object != nullptr)
    {
        children["ipv6-object"] = ipv6_object;
    }

    if(list != nullptr)
    {
        children["list"] = list;
    }

    for (auto const & c : object)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Track::TrackedObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "object-number")
    {
        object_number = value;
    }
    if(value_path == "default-state")
    {
        default_state = value;
    }
    if(value_path == "stub-object")
    {
        stub_object = value;
    }
}

Native::Track::TrackedObject::Interface::Interface()
    :
    name{YType::str, "name"},
    protocol{YType::enumeration, "protocol"},
    routing{YType::empty, "routing"}
{
    yang_name = "interface"; yang_parent_name = "tracked-object";
}

Native::Track::TrackedObject::Interface::~Interface()
{
}

bool Native::Track::TrackedObject::Interface::has_data() const
{
    return name.is_set
	|| protocol.is_set
	|| routing.is_set;
}

bool Native::Track::TrackedObject::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(protocol.operation)
	|| is_set(routing.operation);
}

std::string Native::Track::TrackedObject::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Track::TrackedObject::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (routing.is_set || is_set(routing.operation)) leaf_name_data.push_back(routing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "routing")
    {
        routing = value;
    }
}

Native::Track::TrackedObject::Ip::Ip()
    :
    route(std::make_shared<Native::Track::TrackedObject::Ip::Route>())
	,sla(std::make_shared<Native::Track::TrackedObject::Ip::Sla>())
{
    route->parent = this;

    sla->parent = this;

    yang_name = "ip"; yang_parent_name = "tracked-object";
}

Native::Track::TrackedObject::Ip::~Ip()
{
}

bool Native::Track::TrackedObject::Ip::has_data() const
{
    return (route !=  nullptr && route->has_data())
	|| (sla !=  nullptr && sla->has_data());
}

bool Native::Track::TrackedObject::Ip::has_operation() const
{
    return is_set(operation)
	|| (route !=  nullptr && route->has_operation())
	|| (sla !=  nullptr && sla->has_operation());
}

std::string Native::Track::TrackedObject::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Track::TrackedObject::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Track::TrackedObject::Ip::Route>();
        }
        return route;
    }

    if(child_yang_name == "sla")
    {
        if(sla == nullptr)
        {
            sla = std::make_shared<Native::Track::TrackedObject::Ip::Sla>();
        }
        return sla;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    if(sla != nullptr)
    {
        children["sla"] = sla;
    }

    return children;
}

void Native::Track::TrackedObject::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Track::TrackedObject::Ip::Route::Route()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    metric{YType::enumeration, "metric"},
    reachability{YType::empty, "reachability"}
{
    yang_name = "route"; yang_parent_name = "ip";
}

Native::Track::TrackedObject::Ip::Route::~Route()
{
}

bool Native::Track::TrackedObject::Ip::Route::has_data() const
{
    return address.is_set
	|| mask.is_set
	|| metric.is_set
	|| reachability.is_set;
}

bool Native::Track::TrackedObject::Ip::Route::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(mask.operation)
	|| is_set(metric.operation)
	|| is_set(reachability.operation);
}

std::string Native::Track::TrackedObject::Ip::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath Native::Track::TrackedObject::Ip::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (reachability.is_set || is_set(reachability.operation)) leaf_name_data.push_back(reachability.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Ip::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Ip::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Ip::Route::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "reachability")
    {
        reachability = value;
    }
}

Native::Track::TrackedObject::Ip::Sla::Sla()
    :
    number{YType::uint32, "number"},
    reachability{YType::empty, "reachability"},
    state{YType::empty, "state"}
{
    yang_name = "sla"; yang_parent_name = "ip";
}

Native::Track::TrackedObject::Ip::Sla::~Sla()
{
}

bool Native::Track::TrackedObject::Ip::Sla::has_data() const
{
    return number.is_set
	|| reachability.is_set
	|| state.is_set;
}

bool Native::Track::TrackedObject::Ip::Sla::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(reachability.operation)
	|| is_set(state.operation);
}

std::string Native::Track::TrackedObject::Ip::Sla::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla";

    return path_buffer.str();

}

const EntityPath Native::Track::TrackedObject::Ip::Sla::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sla' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (reachability.is_set || is_set(reachability.operation)) leaf_name_data.push_back(reachability.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Ip::Sla::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Ip::Sla::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Ip::Sla::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "reachability")
    {
        reachability = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Native::Track::TrackedObject::Ipv6::Ipv6()
    :
    route(std::make_shared<Native::Track::TrackedObject::Ipv6::Route>())
{
    route->parent = this;

    yang_name = "ipv6"; yang_parent_name = "tracked-object";
}

Native::Track::TrackedObject::Ipv6::~Ipv6()
{
}

bool Native::Track::TrackedObject::Ipv6::has_data() const
{
    return (route !=  nullptr && route->has_data());
}

bool Native::Track::TrackedObject::Ipv6::has_operation() const
{
    return is_set(operation)
	|| (route !=  nullptr && route->has_operation());
}

std::string Native::Track::TrackedObject::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Track::TrackedObject::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Track::TrackedObject::Ipv6::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    return children;
}

void Native::Track::TrackedObject::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

Native::Track::TrackedObject::Ipv6::Route::Route()
    :
    address{YType::str, "address"},
    metric{YType::enumeration, "metric"},
    reachability{YType::empty, "reachability"}
{
    yang_name = "route"; yang_parent_name = "ipv6";
}

Native::Track::TrackedObject::Ipv6::Route::~Route()
{
}

bool Native::Track::TrackedObject::Ipv6::Route::has_data() const
{
    return address.is_set
	|| metric.is_set
	|| reachability.is_set;
}

bool Native::Track::TrackedObject::Ipv6::Route::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(metric.operation)
	|| is_set(reachability.operation);
}

std::string Native::Track::TrackedObject::Ipv6::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath Native::Track::TrackedObject::Ipv6::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (reachability.is_set || is_set(reachability.operation)) leaf_name_data.push_back(reachability.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Ipv6::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Ipv6::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Ipv6::Route::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "reachability")
    {
        reachability = value;
    }
}

Native::Track::TrackedObject::List::List()
    :
    boolean{YType::enumeration, "boolean"},
    threshold{YType::enumeration, "threshold"}
{
    yang_name = "list"; yang_parent_name = "tracked-object";
}

Native::Track::TrackedObject::List::~List()
{
}

bool Native::Track::TrackedObject::List::has_data() const
{
    return boolean.is_set
	|| threshold.is_set;
}

bool Native::Track::TrackedObject::List::has_operation() const
{
    return is_set(operation)
	|| is_set(boolean.operation)
	|| is_set(threshold.operation);
}

std::string Native::Track::TrackedObject::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::Track::TrackedObject::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'List' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boolean.is_set || is_set(boolean.operation)) leaf_name_data.push_back(boolean.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "boolean")
    {
        boolean = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Track::TrackedObject::Default_::Default_()
    :
    default_state{YType::enumeration, "default-state"}
    	,
    delay(nullptr) // presence node
	,ip(std::make_shared<Native::Track::TrackedObject::Default_::Ip>())
	,ipv6(std::make_shared<Native::Track::TrackedObject::Default_::Ipv6>())
{
    ip->parent = this;

    ipv6->parent = this;

    yang_name = "default"; yang_parent_name = "tracked-object";
}

Native::Track::TrackedObject::Default_::~Default_()
{
}

bool Native::Track::TrackedObject::Default_::has_data() const
{
    return default_state.is_set
	|| (delay !=  nullptr && delay->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Track::TrackedObject::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(default_state.operation)
	|| (delay !=  nullptr && delay->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Track::TrackedObject::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Track::TrackedObject::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_state.is_set || is_set(default_state.operation)) leaf_name_data.push_back(default_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Track::TrackedObject::Default_::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Track::TrackedObject::Default_::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Track::TrackedObject::Default_::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Track::TrackedObject::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-state")
    {
        default_state = value;
    }
}

Native::Track::TrackedObject::Default_::Delay::Delay()
{
    yang_name = "delay"; yang_parent_name = "default";
}

Native::Track::TrackedObject::Default_::Delay::~Delay()
{
}

bool Native::Track::TrackedObject::Default_::Delay::has_data() const
{
    return false;
}

bool Native::Track::TrackedObject::Default_::Delay::has_operation() const
{
    return is_set(operation);
}

std::string Native::Track::TrackedObject::Default_::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Track::TrackedObject::Default_::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Default_::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Default_::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Default_::Delay::set_value(const std::string & value_path, std::string value)
{
}

Native::Track::TrackedObject::Default_::Ip::Ip()
    :
    vrf{YType::empty, "vrf"}
{
    yang_name = "ip"; yang_parent_name = "default";
}

Native::Track::TrackedObject::Default_::Ip::~Ip()
{
}

bool Native::Track::TrackedObject::Default_::Ip::has_data() const
{
    return vrf.is_set;
}

bool Native::Track::TrackedObject::Default_::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf.operation);
}

std::string Native::Track::TrackedObject::Default_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Track::TrackedObject::Default_::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Default_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Default_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Default_::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Track::TrackedObject::Default_::Ipv6::Ipv6()
    :
    vrf{YType::empty, "vrf"}
{
    yang_name = "ipv6"; yang_parent_name = "default";
}

Native::Track::TrackedObject::Default_::Ipv6::~Ipv6()
{
}

bool Native::Track::TrackedObject::Default_::Ipv6::has_data() const
{
    return vrf.is_set;
}

bool Native::Track::TrackedObject::Default_::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf.operation);
}

std::string Native::Track::TrackedObject::Default_::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Track::TrackedObject::Default_::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Default_::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Default_::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Default_::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Track::TrackedObject::Delay::Delay()
    :
    down{YType::uint32, "down"},
    up{YType::uint32, "up"}
{
    yang_name = "delay"; yang_parent_name = "tracked-object";
}

Native::Track::TrackedObject::Delay::~Delay()
{
}

bool Native::Track::TrackedObject::Delay::has_data() const
{
    return down.is_set
	|| up.is_set;
}

bool Native::Track::TrackedObject::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(down.operation)
	|| is_set(up.operation);
}

std::string Native::Track::TrackedObject::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Track::TrackedObject::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Delay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.operation)) leaf_name_data.push_back(down.get_name_leafdata());
    if (up.is_set || is_set(up.operation)) leaf_name_data.push_back(up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down")
    {
        down = value;
    }
    if(value_path == "up")
    {
        up = value;
    }
}

Native::Track::TrackedObject::Object::Object()
    :
    number{YType::uint32, "number"},
    not{YType::empty, "not"}
{
    yang_name = "object"; yang_parent_name = "tracked-object";
}

Native::Track::TrackedObject::Object::~Object()
{
}

bool Native::Track::TrackedObject::Object::has_data() const
{
    return number.is_set
	|| not.is_set;
}

bool Native::Track::TrackedObject::Object::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(not.operation);
}

std::string Native::Track::TrackedObject::Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Track::TrackedObject::Object::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Object' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (not.is_set || is_set(not.operation)) leaf_name_data.push_back(not.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Object::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Object::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "not")
    {
        not = value;
    }
}

Native::Track::TrackedObject::Ipv6Object::Ipv6Object()
    :
    vrf{YType::str, "vrf"}
{
    yang_name = "ipv6-object"; yang_parent_name = "tracked-object";
}

Native::Track::TrackedObject::Ipv6Object::~Ipv6Object()
{
}

bool Native::Track::TrackedObject::Ipv6Object::has_data() const
{
    return vrf.is_set;
}

bool Native::Track::TrackedObject::Ipv6Object::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf.operation);
}

std::string Native::Track::TrackedObject::Ipv6Object::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-object";

    return path_buffer.str();

}

const EntityPath Native::Track::TrackedObject::Ipv6Object::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Object' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::Ipv6Object::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::Ipv6Object::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::Ipv6Object::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Track::TrackedObject::IpObject::IpObject()
    :
    vrf{YType::str, "vrf"}
{
    yang_name = "ip-object"; yang_parent_name = "tracked-object";
}

Native::Track::TrackedObject::IpObject::~IpObject()
{
}

bool Native::Track::TrackedObject::IpObject::has_data() const
{
    return vrf.is_set;
}

bool Native::Track::TrackedObject::IpObject::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf.operation);
}

std::string Native::Track::TrackedObject::IpObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-object";

    return path_buffer.str();

}

const EntityPath Native::Track::TrackedObject::IpObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpObject' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::TrackedObject::IpObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::TrackedObject::IpObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::TrackedObject::IpObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Track::Resolution::Resolution()
    :
    ip(std::make_shared<Native::Track::Resolution::Ip>())
{
    ip->parent = this;

    yang_name = "resolution"; yang_parent_name = "track";
}

Native::Track::Resolution::~Resolution()
{
}

bool Native::Track::Resolution::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Track::Resolution::has_operation() const
{
    return is_set(operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Track::Resolution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-track:resolution";

    return path_buffer.str();

}

const EntityPath Native::Track::Resolution::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/track/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::Resolution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Track::Resolution::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Resolution::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Track::Resolution::set_value(const std::string & value_path, std::string value)
{
}

Native::Track::Resolution::Ip::Ip()
    :
    route(std::make_shared<Native::Track::Resolution::Ip::Route>())
{
    route->parent = this;

    yang_name = "ip"; yang_parent_name = "resolution";
}

Native::Track::Resolution::Ip::~Ip()
{
}

bool Native::Track::Resolution::Ip::has_data() const
{
    return (route !=  nullptr && route->has_data());
}

bool Native::Track::Resolution::Ip::has_operation() const
{
    return is_set(operation)
	|| (route !=  nullptr && route->has_operation());
}

std::string Native::Track::Resolution::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Track::Resolution::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:resolution/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::Resolution::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Track::Resolution::Ip::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Resolution::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    return children;
}

void Native::Track::Resolution::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Track::Resolution::Ip::Route::Route()
    :
    bgp{YType::uint32, "bgp"},
    eigrp{YType::uint32, "eigrp"},
    isis{YType::uint32, "isis"},
    ospf{YType::uint32, "ospf"},
    static_{YType::uint32, "static"}
{
    yang_name = "route"; yang_parent_name = "ip";
}

Native::Track::Resolution::Ip::Route::~Route()
{
}

bool Native::Track::Resolution::Ip::Route::has_data() const
{
    return bgp.is_set
	|| eigrp.is_set
	|| isis.is_set
	|| ospf.is_set
	|| static_.is_set;
}

bool Native::Track::Resolution::Ip::Route::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp.operation)
	|| is_set(eigrp.operation)
	|| is_set(isis.operation)
	|| is_set(ospf.operation)
	|| is_set(static_.operation);
}

std::string Native::Track::Resolution::Ip::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath Native::Track::Resolution::Ip::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:resolution/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp.is_set || is_set(bgp.operation)) leaf_name_data.push_back(bgp.get_name_leafdata());
    if (eigrp.is_set || is_set(eigrp.operation)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (isis.is_set || is_set(isis.operation)) leaf_name_data.push_back(isis.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.operation)) leaf_name_data.push_back(ospf.get_name_leafdata());
    if (static_.is_set || is_set(static_.operation)) leaf_name_data.push_back(static_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::Resolution::Ip::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Resolution::Ip::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Resolution::Ip::Route::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp")
    {
        bgp = value;
    }
    if(value_path == "eigrp")
    {
        eigrp = value;
    }
    if(value_path == "isis")
    {
        isis = value;
    }
    if(value_path == "ospf")
    {
        ospf = value;
    }
    if(value_path == "static")
    {
        static_ = value;
    }
}

Native::Track::Timer::Timer()
    :
    interface(std::make_shared<Native::Track::Timer::Interface>())
	,ip(std::make_shared<Native::Track::Timer::Ip>())
	,ipv6(std::make_shared<Native::Track::Timer::Ipv6>())
	,list(std::make_shared<Native::Track::Timer::List>())
	,stub_object(std::make_shared<Native::Track::Timer::StubObject>())
{
    interface->parent = this;

    ip->parent = this;

    ipv6->parent = this;

    list->parent = this;

    stub_object->parent = this;

    yang_name = "timer"; yang_parent_name = "track";
}

Native::Track::Timer::~Timer()
{
}

bool Native::Track::Timer::has_data() const
{
    return (interface !=  nullptr && interface->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (list !=  nullptr && list->has_data())
	|| (stub_object !=  nullptr && stub_object->has_data());
}

bool Native::Track::Timer::has_operation() const
{
    return is_set(operation)
	|| (interface !=  nullptr && interface->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (list !=  nullptr && list->has_operation())
	|| (stub_object !=  nullptr && stub_object->has_operation());
}

std::string Native::Track::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-track:timer";

    return path_buffer.str();

}

const EntityPath Native::Track::Timer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/track/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Track::Timer::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Track::Timer::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Track::Timer::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Track::Timer::List>();
        }
        return list;
    }

    if(child_yang_name == "stub-object")
    {
        if(stub_object == nullptr)
        {
            stub_object = std::make_shared<Native::Track::Timer::StubObject>();
        }
        return stub_object;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(list != nullptr)
    {
        children["list"] = list;
    }

    if(stub_object != nullptr)
    {
        children["stub-object"] = stub_object;
    }

    return children;
}

void Native::Track::Timer::set_value(const std::string & value_path, std::string value)
{
}

Native::Track::Timer::Interface::Interface()
    :
    ms{YType::uint32, "ms"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "interface"; yang_parent_name = "timer";
}

Native::Track::Timer::Interface::~Interface()
{
}

bool Native::Track::Timer::Interface::has_data() const
{
    return ms.is_set
	|| seconds.is_set;
}

bool Native::Track::Timer::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(ms.operation)
	|| is_set(seconds.operation);
}

std::string Native::Track::Timer::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Track::Timer::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ms.is_set || is_set(ms.operation)) leaf_name_data.push_back(ms.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::Timer::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Timer::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ms")
    {
        ms = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Track::Timer::Ip::Ip()
    :
    route(std::make_shared<Native::Track::Timer::Ip::Route>())
	,sla(std::make_shared<Native::Track::Timer::Ip::Sla>())
{
    route->parent = this;

    sla->parent = this;

    yang_name = "ip"; yang_parent_name = "timer";
}

Native::Track::Timer::Ip::~Ip()
{
}

bool Native::Track::Timer::Ip::has_data() const
{
    return (route !=  nullptr && route->has_data())
	|| (sla !=  nullptr && sla->has_data());
}

bool Native::Track::Timer::Ip::has_operation() const
{
    return is_set(operation)
	|| (route !=  nullptr && route->has_operation())
	|| (sla !=  nullptr && sla->has_operation());
}

std::string Native::Track::Timer::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Track::Timer::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::Timer::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Track::Timer::Ip::Route>();
        }
        return route;
    }

    if(child_yang_name == "sla")
    {
        if(sla == nullptr)
        {
            sla = std::make_shared<Native::Track::Timer::Ip::Sla>();
        }
        return sla;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    if(sla != nullptr)
    {
        children["sla"] = sla;
    }

    return children;
}

void Native::Track::Timer::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Track::Timer::Ip::Route::Route()
    :
    ms{YType::uint32, "ms"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "route"; yang_parent_name = "ip";
}

Native::Track::Timer::Ip::Route::~Route()
{
}

bool Native::Track::Timer::Ip::Route::has_data() const
{
    return ms.is_set
	|| seconds.is_set;
}

bool Native::Track::Timer::Ip::Route::has_operation() const
{
    return is_set(operation)
	|| is_set(ms.operation)
	|| is_set(seconds.operation);
}

std::string Native::Track::Timer::Ip::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath Native::Track::Timer::Ip::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ms.is_set || is_set(ms.operation)) leaf_name_data.push_back(ms.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::Timer::Ip::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::Ip::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Timer::Ip::Route::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ms")
    {
        ms = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Track::Timer::Ip::Sla::Sla()
    :
    ms{YType::uint32, "ms"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "sla"; yang_parent_name = "ip";
}

Native::Track::Timer::Ip::Sla::~Sla()
{
}

bool Native::Track::Timer::Ip::Sla::has_data() const
{
    return ms.is_set
	|| seconds.is_set;
}

bool Native::Track::Timer::Ip::Sla::has_operation() const
{
    return is_set(operation)
	|| is_set(ms.operation)
	|| is_set(seconds.operation);
}

std::string Native::Track::Timer::Ip::Sla::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sla";

    return path_buffer.str();

}

const EntityPath Native::Track::Timer::Ip::Sla::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ms.is_set || is_set(ms.operation)) leaf_name_data.push_back(ms.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::Timer::Ip::Sla::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::Ip::Sla::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Timer::Ip::Sla::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ms")
    {
        ms = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Track::Timer::Ipv6::Ipv6()
    :
    route(std::make_shared<Native::Track::Timer::Ipv6::Route>())
{
    route->parent = this;

    yang_name = "ipv6"; yang_parent_name = "timer";
}

Native::Track::Timer::Ipv6::~Ipv6()
{
}

bool Native::Track::Timer::Ipv6::has_data() const
{
    return (route !=  nullptr && route->has_data());
}

bool Native::Track::Timer::Ipv6::has_operation() const
{
    return is_set(operation)
	|| (route !=  nullptr && route->has_operation());
}

std::string Native::Track::Timer::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Track::Timer::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::Timer::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Track::Timer::Ipv6::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    return children;
}

void Native::Track::Timer::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

Native::Track::Timer::Ipv6::Route::Route()
    :
    ms{YType::uint32, "ms"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "route"; yang_parent_name = "ipv6";
}

Native::Track::Timer::Ipv6::Route::~Route()
{
}

bool Native::Track::Timer::Ipv6::Route::has_data() const
{
    return ms.is_set
	|| seconds.is_set;
}

bool Native::Track::Timer::Ipv6::Route::has_operation() const
{
    return is_set(operation)
	|| is_set(ms.operation)
	|| is_set(seconds.operation);
}

std::string Native::Track::Timer::Ipv6::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath Native::Track::Timer::Ipv6::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ms.is_set || is_set(ms.operation)) leaf_name_data.push_back(ms.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::Timer::Ipv6::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::Ipv6::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Timer::Ipv6::Route::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ms")
    {
        ms = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Track::Timer::List::List()
    :
    ms{YType::uint32, "ms"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "list"; yang_parent_name = "timer";
}

Native::Track::Timer::List::~List()
{
}

bool Native::Track::Timer::List::has_data() const
{
    return ms.is_set
	|| seconds.is_set;
}

bool Native::Track::Timer::List::has_operation() const
{
    return is_set(operation)
	|| is_set(ms.operation)
	|| is_set(seconds.operation);
}

std::string Native::Track::Timer::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::Track::Timer::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ms.is_set || is_set(ms.operation)) leaf_name_data.push_back(ms.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::Timer::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Timer::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ms")
    {
        ms = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Track::Timer::StubObject::StubObject()
    :
    ms{YType::uint32, "ms"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "stub-object"; yang_parent_name = "timer";
}

Native::Track::Timer::StubObject::~StubObject()
{
}

bool Native::Track::Timer::StubObject::has_data() const
{
    return ms.is_set
	|| seconds.is_set;
}

bool Native::Track::Timer::StubObject::has_operation() const
{
    return is_set(operation)
	|| is_set(ms.operation)
	|| is_set(seconds.operation);
}

std::string Native::Track::Timer::StubObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stub-object";

    return path_buffer.str();

}

const EntityPath Native::Track::Timer::StubObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/track/Cisco-IOS-XE-track:timer/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ms.is_set || is_set(ms.operation)) leaf_name_data.push_back(ms.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Track::Timer::StubObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Track::Timer::StubObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Track::Timer::StubObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ms")
    {
        ms = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Dot1X::Dot1X()
    :
    system_auth_control{YType::empty, "Cisco-IOS-XE-dot1x:system-auth-control"}
    	,
    critical(std::make_shared<Native::Dot1X::Critical>())
	,supplicant(std::make_shared<Native::Dot1X::Supplicant>())
	,test(std::make_shared<Native::Dot1X::Test>())
{
    critical->parent = this;

    supplicant->parent = this;

    test->parent = this;

    yang_name = "dot1x"; yang_parent_name = "native";
}

Native::Dot1X::~Dot1X()
{
}

bool Native::Dot1X::has_data() const
{
    for (std::size_t index=0; index<credentials.size(); index++)
    {
        if(credentials[index]->has_data())
            return true;
    }
    return system_auth_control.is_set
	|| (critical !=  nullptr && critical->has_data())
	|| (supplicant !=  nullptr && supplicant->has_data())
	|| (test !=  nullptr && test->has_data());
}

bool Native::Dot1X::has_operation() const
{
    for (std::size_t index=0; index<credentials.size(); index++)
    {
        if(credentials[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(system_auth_control.operation)
	|| (critical !=  nullptr && critical->has_operation())
	|| (supplicant !=  nullptr && supplicant->has_operation())
	|| (test !=  nullptr && test->has_operation());
}

std::string Native::Dot1X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x";

    return path_buffer.str();

}

const EntityPath Native::Dot1X::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_auth_control.is_set || is_set(system_auth_control.operation)) leaf_name_data.push_back(system_auth_control.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Dot1X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "credentials")
    {
        for(auto const & c : credentials)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Dot1X::Credentials>();
        c->parent = this;
        credentials.push_back(c);
        return c;
    }

    if(child_yang_name == "critical")
    {
        if(critical == nullptr)
        {
            critical = std::make_shared<Native::Dot1X::Critical>();
        }
        return critical;
    }

    if(child_yang_name == "supplicant")
    {
        if(supplicant == nullptr)
        {
            supplicant = std::make_shared<Native::Dot1X::Supplicant>();
        }
        return supplicant;
    }

    if(child_yang_name == "test")
    {
        if(test == nullptr)
        {
            test = std::make_shared<Native::Dot1X::Test>();
        }
        return test;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : credentials)
    {
        children[c->get_segment_path()] = c;
    }

    if(critical != nullptr)
    {
        children["critical"] = critical;
    }

    if(supplicant != nullptr)
    {
        children["supplicant"] = supplicant;
    }

    if(test != nullptr)
    {
        children["test"] = test;
    }

    return children;
}

void Native::Dot1X::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "system-auth-control")
    {
        system_auth_control = value;
    }
}

Native::Dot1X::Credentials::Credentials()
    :
    profile_name{YType::str, "profile-name"},
    pki_trustpoint{YType::str, "pki-trustpoint"},
    username{YType::str, "username"}
    	,
    password(std::make_shared<Native::Dot1X::Credentials::Password>())
{
    password->parent = this;

    yang_name = "credentials"; yang_parent_name = "dot1x";
}

Native::Dot1X::Credentials::~Credentials()
{
}

bool Native::Dot1X::Credentials::has_data() const
{
    return profile_name.is_set
	|| pki_trustpoint.is_set
	|| username.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Dot1X::Credentials::has_operation() const
{
    return is_set(operation)
	|| is_set(profile_name.operation)
	|| is_set(pki_trustpoint.operation)
	|| is_set(username.operation)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Dot1X::Credentials::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:credentials" <<"[profile-name='" <<profile_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Dot1X::Credentials::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/dot1x/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (pki_trustpoint.is_set || is_set(pki_trustpoint.operation)) leaf_name_data.push_back(pki_trustpoint.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Dot1X::Credentials::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Dot1X::Credentials::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::Credentials::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Dot1X::Credentials::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
    if(value_path == "pki-trustpoint")
    {
        pki_trustpoint = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
}

Native::Dot1X::Credentials::Password::Password()
    :
    secret{YType::str, "secret"},
    type{YType::enumeration, "type"}
{
    yang_name = "password"; yang_parent_name = "credentials";
}

Native::Dot1X::Credentials::Password::~Password()
{
}

bool Native::Dot1X::Credentials::Password::has_data() const
{
    return secret.is_set
	|| type.is_set;
}

bool Native::Dot1X::Credentials::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(secret.operation)
	|| is_set(type.operation);
}

std::string Native::Dot1X::Credentials::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Dot1X::Credentials::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (secret.is_set || is_set(secret.operation)) leaf_name_data.push_back(secret.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Dot1X::Credentials::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::Credentials::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Dot1X::Credentials::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "secret")
    {
        secret = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Native::Dot1X::Critical::Critical()
    :
    eapol{YType::empty, "eapol"}
    	,
    recovery(std::make_shared<Native::Dot1X::Critical::Recovery>())
{
    recovery->parent = this;

    yang_name = "critical"; yang_parent_name = "dot1x";
}

Native::Dot1X::Critical::~Critical()
{
}

bool Native::Dot1X::Critical::has_data() const
{
    return eapol.is_set
	|| (recovery !=  nullptr && recovery->has_data());
}

bool Native::Dot1X::Critical::has_operation() const
{
    return is_set(operation)
	|| is_set(eapol.operation)
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::Dot1X::Critical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:critical";

    return path_buffer.str();

}

const EntityPath Native::Dot1X::Critical::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/dot1x/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eapol.is_set || is_set(eapol.operation)) leaf_name_data.push_back(eapol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Dot1X::Critical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::Dot1X::Critical::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::Critical::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(recovery != nullptr)
    {
        children["recovery"] = recovery;
    }

    return children;
}

void Native::Dot1X::Critical::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eapol")
    {
        eapol = value;
    }
}

Native::Dot1X::Critical::Recovery::Recovery()
    :
    delay{YType::uint16, "delay"}
{
    yang_name = "recovery"; yang_parent_name = "critical";
}

Native::Dot1X::Critical::Recovery::~Recovery()
{
}

bool Native::Dot1X::Critical::Recovery::has_data() const
{
    return delay.is_set;
}

bool Native::Dot1X::Critical::Recovery::has_operation() const
{
    return is_set(operation)
	|| is_set(delay.operation);
}

std::string Native::Dot1X::Critical::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";

    return path_buffer.str();

}

const EntityPath Native::Dot1X::Critical::Recovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/dot1x/Cisco-IOS-XE-dot1x:critical/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Dot1X::Critical::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::Critical::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Dot1X::Critical::Recovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delay")
    {
        delay = value;
    }
}

Native::Dot1X::Test::Test()
    :
    timeout{YType::uint16, "timeout"}
{
    yang_name = "test"; yang_parent_name = "dot1x";
}

Native::Dot1X::Test::~Test()
{
}

bool Native::Dot1X::Test::has_data() const
{
    return timeout.is_set;
}

bool Native::Dot1X::Test::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation);
}

std::string Native::Dot1X::Test::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:test";

    return path_buffer.str();

}

const EntityPath Native::Dot1X::Test::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/dot1x/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Dot1X::Test::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::Test::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Dot1X::Test::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Dot1X::Supplicant::Supplicant()
    :
    force_multicast{YType::empty, "force-multicast"}
{
    yang_name = "supplicant"; yang_parent_name = "dot1x";
}

Native::Dot1X::Supplicant::~Supplicant()
{
}

bool Native::Dot1X::Supplicant::has_data() const
{
    return force_multicast.is_set;
}

bool Native::Dot1X::Supplicant::has_operation() const
{
    return is_set(operation)
	|| is_set(force_multicast.operation);
}

std::string Native::Dot1X::Supplicant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:supplicant";

    return path_buffer.str();

}

const EntityPath Native::Dot1X::Supplicant::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/dot1x/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (force_multicast.is_set || is_set(force_multicast.operation)) leaf_name_data.push_back(force_multicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Dot1X::Supplicant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Dot1X::Supplicant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Dot1X::Supplicant::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "force-multicast")
    {
        force_multicast = value;
    }
}

Native::Fallback::Fallback()
    :
    profile(std::make_shared<Native::Fallback::Profile>())
{
    profile->parent = this;

    yang_name = "fallback"; yang_parent_name = "native";
}

Native::Fallback::~Fallback()
{
}

bool Native::Fallback::has_data() const
{
    return (profile !=  nullptr && profile->has_data());
}

bool Native::Fallback::has_operation() const
{
    return is_set(operation)
	|| (profile !=  nullptr && profile->has_operation());
}

std::string Native::Fallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback";

    return path_buffer.str();

}

const EntityPath Native::Fallback::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Native::Fallback::Profile>();
        }
        return profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(profile != nullptr)
    {
        children["profile"] = profile;
    }

    return children;
}

void Native::Fallback::set_value(const std::string & value_path, std::string value)
{
}

Native::Fallback::Profile::Profile()
{
    yang_name = "profile"; yang_parent_name = "fallback";
}

Native::Fallback::Profile::~Profile()
{
}

bool Native::Fallback::Profile::has_data() const
{
    for (std::size_t index=0; index<fallback_list.size(); index++)
    {
        if(fallback_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Fallback::Profile::has_operation() const
{
    for (std::size_t index=0; index<fallback_list.size(); index++)
    {
        if(fallback_list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Fallback::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:profile";

    return path_buffer.str();

}

const EntityPath Native::Fallback::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/fallback/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Fallback::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fallback-list")
    {
        for(auto const & c : fallback_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Fallback::Profile::FallbackList>();
        c->parent = this;
        fallback_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fallback::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : fallback_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Fallback::Profile::set_value(const std::string & value_path, std::string value)
{
}

Native::Fallback::Profile::FallbackList::FallbackList()
    :
    name{YType::str, "name"},
    description{YType::str, "description"}
    	,
    ip(std::make_shared<Native::Fallback::Profile::FallbackList::Ip>())
{
    ip->parent = this;

    yang_name = "fallback-list"; yang_parent_name = "profile";
}

Native::Fallback::Profile::FallbackList::~FallbackList()
{
}

bool Native::Fallback::Profile::FallbackList::has_data() const
{
    return name.is_set
	|| description.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Fallback::Profile::FallbackList::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(description.operation)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Fallback::Profile::FallbackList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback-list" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Fallback::Profile::FallbackList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/fallback/Cisco-IOS-XE-dot1x:profile/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Fallback::Profile::FallbackList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Fallback::Profile::FallbackList::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fallback::Profile::FallbackList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Fallback::Profile::FallbackList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
}

Native::Fallback::Profile::FallbackList::Ip::Ip()
    :
    admission{YType::str, "admission"}
{
    yang_name = "ip"; yang_parent_name = "fallback-list";
}

Native::Fallback::Profile::FallbackList::Ip::~Ip()
{
}

bool Native::Fallback::Profile::FallbackList::Ip::has_data() const
{
    for (std::size_t index=0; index<access_group.size(); index++)
    {
        if(access_group[index]->has_data())
            return true;
    }
    return admission.is_set;
}

bool Native::Fallback::Profile::FallbackList::Ip::has_operation() const
{
    for (std::size_t index=0; index<access_group.size(); index++)
    {
        if(access_group[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(admission.operation);
}

std::string Native::Fallback::Profile::FallbackList::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Fallback::Profile::FallbackList::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admission.is_set || is_set(admission.operation)) leaf_name_data.push_back(admission.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Fallback::Profile::FallbackList::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        for(auto const & c : access_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Fallback::Profile::FallbackList::Ip::AccessGroup>();
        c->parent = this;
        access_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fallback::Profile::FallbackList::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Fallback::Profile::FallbackList::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admission")
    {
        admission = value;
    }
}

Native::Fallback::Profile::FallbackList::Ip::AccessGroup::AccessGroup()
    :
    name{YType::str, "name"},
    in{YType::empty, "in"}
{
    yang_name = "access-group"; yang_parent_name = "ip";
}

Native::Fallback::Profile::FallbackList::Ip::AccessGroup::~AccessGroup()
{
}

bool Native::Fallback::Profile::FallbackList::Ip::AccessGroup::has_data() const
{
    return name.is_set
	|| in.is_set;
}

bool Native::Fallback::Profile::FallbackList::Ip::AccessGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(in.operation);
}

std::string Native::Fallback::Profile::FallbackList::Ip::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Fallback::Profile::FallbackList::Ip::AccessGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Fallback::Profile::FallbackList::Ip::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fallback::Profile::FallbackList::Ip::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Fallback::Profile::FallbackList::Ip::AccessGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
}

Native::ParameterMap::ParameterMap()
    :
    name{YType::str, "name"},
    alert{YType::enumeration, "Cisco-IOS-XE-policy:alert"},
    application_inspect{YType::enumeration, "Cisco-IOS-XE-policy:application-inspect"},
    audit_trail{YType::enumeration, "Cisco-IOS-XE-policy:audit-trail"},
    dns_timeout{YType::uint32, "Cisco-IOS-XE-policy:dns-timeout"},
    max_destination{YType::uint32, "Cisco-IOS-XE-policy:max-destination"},
    parameter_map_type{YType::enumeration, "parameter-map-type"},
    type{YType::enumeration, "type"},
    zone_mismatch{YType::enumeration, "Cisco-IOS-XE-policy:zone-mismatch"}
    	,
    aggressive_aging(std::make_shared<Native::ParameterMap::AggressiveAging>())
	,global(std::make_shared<Native::ParameterMap::Global>())
	,icmp(std::make_shared<Native::ParameterMap::Icmp>())
	,lisp(std::make_shared<Native::ParameterMap::Lisp>())
	,log(std::make_shared<Native::ParameterMap::Log>())
	,max_incomplete(std::make_shared<Native::ParameterMap::MaxIncomplete>())
	,one_minute(std::make_shared<Native::ParameterMap::OneMinute>())
	,sessions(std::make_shared<Native::ParameterMap::Sessions>())
	,tcp_inspect(std::make_shared<Native::ParameterMap::TcpInspect>())
	,tcp_inspect_zone(std::make_shared<Native::ParameterMap::TcpInspectZone>())
	,threat_detection(std::make_shared<Native::ParameterMap::ThreatDetection>())
	,timeout(std::make_shared<Native::ParameterMap::Timeout>())
	,udp(std::make_shared<Native::ParameterMap::Udp>())
	,vrf(std::make_shared<Native::ParameterMap::Vrf>())
	,watch_list(std::make_shared<Native::ParameterMap::WatchList>())
{
    aggressive_aging->parent = this;

    global->parent = this;

    icmp->parent = this;

    lisp->parent = this;

    log->parent = this;

    max_incomplete->parent = this;

    one_minute->parent = this;

    sessions->parent = this;

    tcp_inspect->parent = this;

    tcp_inspect_zone->parent = this;

    threat_detection->parent = this;

    timeout->parent = this;

    udp->parent = this;

    vrf->parent = this;

    watch_list->parent = this;

    yang_name = "parameter-map"; yang_parent_name = "native";
}

Native::ParameterMap::~ParameterMap()
{
}

bool Native::ParameterMap::has_data() const
{
    return name.is_set
	|| alert.is_set
	|| application_inspect.is_set
	|| audit_trail.is_set
	|| dns_timeout.is_set
	|| max_destination.is_set
	|| parameter_map_type.is_set
	|| type.is_set
	|| zone_mismatch.is_set
	|| (aggressive_aging !=  nullptr && aggressive_aging->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (icmp !=  nullptr && icmp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (log !=  nullptr && log->has_data())
	|| (max_incomplete !=  nullptr && max_incomplete->has_data())
	|| (one_minute !=  nullptr && one_minute->has_data())
	|| (sessions !=  nullptr && sessions->has_data())
	|| (tcp_inspect !=  nullptr && tcp_inspect->has_data())
	|| (tcp_inspect_zone !=  nullptr && tcp_inspect_zone->has_data())
	|| (threat_detection !=  nullptr && threat_detection->has_data())
	|| (timeout !=  nullptr && timeout->has_data())
	|| (udp !=  nullptr && udp->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (watch_list !=  nullptr && watch_list->has_data());
}

bool Native::ParameterMap::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(alert.operation)
	|| is_set(application_inspect.operation)
	|| is_set(audit_trail.operation)
	|| is_set(dns_timeout.operation)
	|| is_set(max_destination.operation)
	|| is_set(parameter_map_type.operation)
	|| is_set(type.operation)
	|| is_set(zone_mismatch.operation)
	|| (aggressive_aging !=  nullptr && aggressive_aging->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (icmp !=  nullptr && icmp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (log !=  nullptr && log->has_operation())
	|| (max_incomplete !=  nullptr && max_incomplete->has_operation())
	|| (one_minute !=  nullptr && one_minute->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (tcp_inspect !=  nullptr && tcp_inspect->has_operation())
	|| (tcp_inspect_zone !=  nullptr && tcp_inspect_zone->has_operation())
	|| (threat_detection !=  nullptr && threat_detection->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation())
	|| (udp !=  nullptr && udp->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (watch_list !=  nullptr && watch_list->has_operation());
}

std::string Native::ParameterMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameter-map" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (alert.is_set || is_set(alert.operation)) leaf_name_data.push_back(alert.get_name_leafdata());
    if (application_inspect.is_set || is_set(application_inspect.operation)) leaf_name_data.push_back(application_inspect.get_name_leafdata());
    if (audit_trail.is_set || is_set(audit_trail.operation)) leaf_name_data.push_back(audit_trail.get_name_leafdata());
    if (dns_timeout.is_set || is_set(dns_timeout.operation)) leaf_name_data.push_back(dns_timeout.get_name_leafdata());
    if (max_destination.is_set || is_set(max_destination.operation)) leaf_name_data.push_back(max_destination.get_name_leafdata());
    if (parameter_map_type.is_set || is_set(parameter_map_type.operation)) leaf_name_data.push_back(parameter_map_type.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (zone_mismatch.is_set || is_set(zone_mismatch.operation)) leaf_name_data.push_back(zone_mismatch.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggressive-aging")
    {
        if(aggressive_aging == nullptr)
        {
            aggressive_aging = std::make_shared<Native::ParameterMap::AggressiveAging>();
        }
        return aggressive_aging;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::ParameterMap::Global>();
        }
        return global;
    }

    if(child_yang_name == "icmp")
    {
        if(icmp == nullptr)
        {
            icmp = std::make_shared<Native::ParameterMap::Icmp>();
        }
        return icmp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::ParameterMap::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::ParameterMap::Log>();
        }
        return log;
    }

    if(child_yang_name == "max-incomplete")
    {
        if(max_incomplete == nullptr)
        {
            max_incomplete = std::make_shared<Native::ParameterMap::MaxIncomplete>();
        }
        return max_incomplete;
    }

    if(child_yang_name == "one-minute")
    {
        if(one_minute == nullptr)
        {
            one_minute = std::make_shared<Native::ParameterMap::OneMinute>();
        }
        return one_minute;
    }

    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<Native::ParameterMap::Sessions>();
        }
        return sessions;
    }

    if(child_yang_name == "tcp-inspect")
    {
        if(tcp_inspect == nullptr)
        {
            tcp_inspect = std::make_shared<Native::ParameterMap::TcpInspect>();
        }
        return tcp_inspect;
    }

    if(child_yang_name == "tcp-inspect-zone")
    {
        if(tcp_inspect_zone == nullptr)
        {
            tcp_inspect_zone = std::make_shared<Native::ParameterMap::TcpInspectZone>();
        }
        return tcp_inspect_zone;
    }

    if(child_yang_name == "threat-detection")
    {
        if(threat_detection == nullptr)
        {
            threat_detection = std::make_shared<Native::ParameterMap::ThreatDetection>();
        }
        return threat_detection;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::ParameterMap::Timeout>();
        }
        return timeout;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::ParameterMap::Udp>();
        }
        return udp;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::ParameterMap::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "watch-list")
    {
        if(watch_list == nullptr)
        {
            watch_list = std::make_shared<Native::ParameterMap::WatchList>();
        }
        return watch_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggressive_aging != nullptr)
    {
        children["aggressive-aging"] = aggressive_aging;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(icmp != nullptr)
    {
        children["icmp"] = icmp;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(log != nullptr)
    {
        children["log"] = log;
    }

    if(max_incomplete != nullptr)
    {
        children["max-incomplete"] = max_incomplete;
    }

    if(one_minute != nullptr)
    {
        children["one-minute"] = one_minute;
    }

    if(sessions != nullptr)
    {
        children["sessions"] = sessions;
    }

    if(tcp_inspect != nullptr)
    {
        children["tcp-inspect"] = tcp_inspect;
    }

    if(tcp_inspect_zone != nullptr)
    {
        children["tcp-inspect-zone"] = tcp_inspect_zone;
    }

    if(threat_detection != nullptr)
    {
        children["threat-detection"] = threat_detection;
    }

    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    if(watch_list != nullptr)
    {
        children["watch-list"] = watch_list;
    }

    return children;
}

void Native::ParameterMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "alert")
    {
        alert = value;
    }
    if(value_path == "application-inspect")
    {
        application_inspect = value;
    }
    if(value_path == "audit-trail")
    {
        audit_trail = value;
    }
    if(value_path == "dns-timeout")
    {
        dns_timeout = value;
    }
    if(value_path == "max-destination")
    {
        max_destination = value;
    }
    if(value_path == "parameter-map-type")
    {
        parameter_map_type = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "zone-mismatch")
    {
        zone_mismatch = value;
    }
}

Native::ParameterMap::Timeout::Timeout()
    :
    fin_wait(std::make_shared<Native::ParameterMap::Timeout::FinWait>())
	,init_state(nullptr) // presence node
{
    fin_wait->parent = this;

    yang_name = "timeout"; yang_parent_name = "parameter-map";
}

Native::ParameterMap::Timeout::~Timeout()
{
}

bool Native::ParameterMap::Timeout::has_data() const
{
    return (fin_wait !=  nullptr && fin_wait->has_data())
	|| (init_state !=  nullptr && init_state->has_data());
}

bool Native::ParameterMap::Timeout::has_operation() const
{
    return is_set(operation)
	|| (fin_wait !=  nullptr && fin_wait->has_operation())
	|| (init_state !=  nullptr && init_state->has_operation());
}

std::string Native::ParameterMap::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:timeout";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Timeout::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timeout' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fin-wait")
    {
        if(fin_wait == nullptr)
        {
            fin_wait = std::make_shared<Native::ParameterMap::Timeout::FinWait>();
        }
        return fin_wait;
    }

    if(child_yang_name == "init-state")
    {
        if(init_state == nullptr)
        {
            init_state = std::make_shared<Native::ParameterMap::Timeout::InitState>();
        }
        return init_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fin_wait != nullptr)
    {
        children["fin-wait"] = fin_wait;
    }

    if(init_state != nullptr)
    {
        children["init-state"] = init_state;
    }

    return children;
}

void Native::ParameterMap::Timeout::set_value(const std::string & value_path, std::string value)
{
}

Native::ParameterMap::Timeout::InitState::InitState()
    :
    sec{YType::uint32, "sec"}
{
    yang_name = "init-state"; yang_parent_name = "timeout";
}

Native::ParameterMap::Timeout::InitState::~InitState()
{
}

bool Native::ParameterMap::Timeout::InitState::has_data() const
{
    return sec.is_set;
}

bool Native::ParameterMap::Timeout::InitState::has_operation() const
{
    return is_set(operation)
	|| is_set(sec.operation);
}

std::string Native::ParameterMap::Timeout::InitState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-state";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Timeout::InitState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InitState' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sec.is_set || is_set(sec.operation)) leaf_name_data.push_back(sec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Timeout::InitState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Timeout::InitState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Timeout::InitState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sec")
    {
        sec = value;
    }
}

Native::ParameterMap::Timeout::FinWait::FinWait()
    :
    msec{YType::uint32, "msec"}
{
    yang_name = "fin-wait"; yang_parent_name = "timeout";
}

Native::ParameterMap::Timeout::FinWait::~FinWait()
{
}

bool Native::ParameterMap::Timeout::FinWait::has_data() const
{
    return msec.is_set;
}

bool Native::ParameterMap::Timeout::FinWait::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation);
}

std::string Native::ParameterMap::Timeout::FinWait::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fin-wait";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Timeout::FinWait::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FinWait' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Timeout::FinWait::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Timeout::FinWait::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Timeout::FinWait::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
}

Native::ParameterMap::WatchList::WatchList()
    :
    dynamic_expiry_timeout{YType::uint32, "dynamic-expiry-timeout"},
    enabled{YType::empty, "enabled"}
    	,
    add_item(std::make_shared<Native::ParameterMap::WatchList::AddItem>())
{
    add_item->parent = this;

    yang_name = "watch-list"; yang_parent_name = "parameter-map";
}

Native::ParameterMap::WatchList::~WatchList()
{
}

bool Native::ParameterMap::WatchList::has_data() const
{
    return dynamic_expiry_timeout.is_set
	|| enabled.is_set
	|| (add_item !=  nullptr && add_item->has_data());
}

bool Native::ParameterMap::WatchList::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic_expiry_timeout.operation)
	|| is_set(enabled.operation)
	|| (add_item !=  nullptr && add_item->has_operation());
}

std::string Native::ParameterMap::WatchList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:watch-list";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::WatchList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WatchList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic_expiry_timeout.is_set || is_set(dynamic_expiry_timeout.operation)) leaf_name_data.push_back(dynamic_expiry_timeout.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::WatchList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "add-item")
    {
        if(add_item == nullptr)
        {
            add_item = std::make_shared<Native::ParameterMap::WatchList::AddItem>();
        }
        return add_item;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::WatchList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(add_item != nullptr)
    {
        children["add-item"] = add_item;
    }

    return children;
}

void Native::ParameterMap::WatchList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic-expiry-timeout")
    {
        dynamic_expiry_timeout = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
}

Native::ParameterMap::WatchList::AddItem::AddItem()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "add-item"; yang_parent_name = "watch-list";
}

Native::ParameterMap::WatchList::AddItem::~AddItem()
{
}

bool Native::ParameterMap::WatchList::AddItem::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::ParameterMap::WatchList::AddItem::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::ParameterMap::WatchList::AddItem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "add-item";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::WatchList::AddItem::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddItem' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::WatchList::AddItem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::WatchList::AddItem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::WatchList::AddItem::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::ParameterMap::AggressiveAging::AggressiveAging()
    :
    high(std::make_shared<Native::ParameterMap::AggressiveAging::High>())
{
    high->parent = this;

    yang_name = "aggressive-aging"; yang_parent_name = "parameter-map";
}

Native::ParameterMap::AggressiveAging::~AggressiveAging()
{
}

bool Native::ParameterMap::AggressiveAging::has_data() const
{
    return (high !=  nullptr && high->has_data());
}

bool Native::ParameterMap::AggressiveAging::has_operation() const
{
    return is_set(operation)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::ParameterMap::AggressiveAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:aggressive-aging";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::AggressiveAging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AggressiveAging' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::AggressiveAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::ParameterMap::AggressiveAging::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::AggressiveAging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::ParameterMap::AggressiveAging::set_value(const std::string & value_path, std::string value)
{
}

Native::ParameterMap::AggressiveAging::High::High()
    :
    absolute(std::make_shared<Native::ParameterMap::AggressiveAging::High::Absolute>())
	,percent(std::make_shared<Native::ParameterMap::AggressiveAging::High::Percent>())
{
    absolute->parent = this;

    percent->parent = this;

    yang_name = "high"; yang_parent_name = "aggressive-aging";
}

Native::ParameterMap::AggressiveAging::High::~High()
{
}

bool Native::ParameterMap::AggressiveAging::High::has_data() const
{
    return (absolute !=  nullptr && absolute->has_data())
	|| (percent !=  nullptr && percent->has_data());
}

bool Native::ParameterMap::AggressiveAging::High::has_operation() const
{
    return is_set(operation)
	|| (absolute !=  nullptr && absolute->has_operation())
	|| (percent !=  nullptr && percent->has_operation());
}

std::string Native::ParameterMap::AggressiveAging::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::AggressiveAging::High::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'High' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::AggressiveAging::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::ParameterMap::AggressiveAging::High::Absolute>();
        }
        return absolute;
    }

    if(child_yang_name == "percent")
    {
        if(percent == nullptr)
        {
            percent = std::make_shared<Native::ParameterMap::AggressiveAging::High::Percent>();
        }
        return percent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::AggressiveAging::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    if(percent != nullptr)
    {
        children["percent"] = percent;
    }

    return children;
}

void Native::ParameterMap::AggressiveAging::High::set_value(const std::string & value_path, std::string value)
{
}

Native::ParameterMap::AggressiveAging::High::Absolute::Absolute()
    :
    low{YType::uint64, "low"},
    value_{YType::uint64, "value"}
{
    yang_name = "absolute"; yang_parent_name = "high";
}

Native::ParameterMap::AggressiveAging::High::Absolute::~Absolute()
{
}

bool Native::ParameterMap::AggressiveAging::High::Absolute::has_data() const
{
    return low.is_set
	|| value_.is_set;
}

bool Native::ParameterMap::AggressiveAging::High::Absolute::has_operation() const
{
    return is_set(operation)
	|| is_set(low.operation)
	|| is_set(value_.operation);
}

std::string Native::ParameterMap::AggressiveAging::High::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::AggressiveAging::High::Absolute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Absolute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::AggressiveAging::High::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::AggressiveAging::High::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::AggressiveAging::High::Absolute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "low")
    {
        low = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::ParameterMap::AggressiveAging::High::Percent::Percent()
    :
    low_percent{YType::uint8, "low_percent"},
    value_{YType::uint8, "value"}
{
    yang_name = "percent"; yang_parent_name = "high";
}

Native::ParameterMap::AggressiveAging::High::Percent::~Percent()
{
}

bool Native::ParameterMap::AggressiveAging::High::Percent::has_data() const
{
    return low_percent.is_set
	|| value_.is_set;
}

bool Native::ParameterMap::AggressiveAging::High::Percent::has_operation() const
{
    return is_set(operation)
	|| is_set(low_percent.operation)
	|| is_set(value_.operation);
}

std::string Native::ParameterMap::AggressiveAging::High::Percent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "percent";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::AggressiveAging::High::Percent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Percent' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low_percent.is_set || is_set(low_percent.operation)) leaf_name_data.push_back(low_percent.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::AggressiveAging::High::Percent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::AggressiveAging::High::Percent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::AggressiveAging::High::Percent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "low_percent")
    {
        low_percent = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::ParameterMap::Global::Global()
    :
    fail_open{YType::empty, "fail-open"},
    logging{YType::empty, "logging"},
    redirect_list{YType::str, "redirect-list"}
    	,
    license(std::make_shared<Native::ParameterMap::Global::License>())
	,primary(nullptr) // presence node
	,secondary(nullptr) // presence node
	,whitelist(nullptr) // presence node
{
    license->parent = this;

    yang_name = "global"; yang_parent_name = "parameter-map";
}

Native::ParameterMap::Global::~Global()
{
}

bool Native::ParameterMap::Global::has_data() const
{
    return fail_open.is_set
	|| logging.is_set
	|| redirect_list.is_set
	|| (license !=  nullptr && license->has_data())
	|| (primary !=  nullptr && primary->has_data())
	|| (secondary !=  nullptr && secondary->has_data())
	|| (whitelist !=  nullptr && whitelist->has_data());
}

bool Native::ParameterMap::Global::has_operation() const
{
    return is_set(operation)
	|| is_set(fail_open.operation)
	|| is_set(logging.operation)
	|| is_set(redirect_list.operation)
	|| (license !=  nullptr && license->has_operation())
	|| (primary !=  nullptr && primary->has_operation())
	|| (secondary !=  nullptr && secondary->has_operation())
	|| (whitelist !=  nullptr && whitelist->has_operation());
}

std::string Native::ParameterMap::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:global";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Global' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fail_open.is_set || is_set(fail_open.operation)) leaf_name_data.push_back(fail_open.get_name_leafdata());
    if (logging.is_set || is_set(logging.operation)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (redirect_list.is_set || is_set(redirect_list.operation)) leaf_name_data.push_back(redirect_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "license")
    {
        if(license == nullptr)
        {
            license = std::make_shared<Native::ParameterMap::Global::License>();
        }
        return license;
    }

    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::ParameterMap::Global::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "secondary")
    {
        if(secondary == nullptr)
        {
            secondary = std::make_shared<Native::ParameterMap::Global::Secondary>();
        }
        return secondary;
    }

    if(child_yang_name == "whitelist")
    {
        if(whitelist == nullptr)
        {
            whitelist = std::make_shared<Native::ParameterMap::Global::Whitelist>();
        }
        return whitelist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(license != nullptr)
    {
        children["license"] = license;
    }

    if(primary != nullptr)
    {
        children["primary"] = primary;
    }

    if(secondary != nullptr)
    {
        children["secondary"] = secondary;
    }

    if(whitelist != nullptr)
    {
        children["whitelist"] = whitelist;
    }

    return children;
}

void Native::ParameterMap::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fail-open")
    {
        fail_open = value;
    }
    if(value_path == "logging")
    {
        logging = value;
    }
    if(value_path == "redirect-list")
    {
        redirect_list = value;
    }
}

Native::ParameterMap::Global::License::License()
    :
    encrypted(std::make_shared<Native::ParameterMap::Global::License::Encrypted>())
	,unencypted(std::make_shared<Native::ParameterMap::Global::License::Unencypted>())
{
    encrypted->parent = this;

    unencypted->parent = this;

    yang_name = "license"; yang_parent_name = "global";
}

Native::ParameterMap::Global::License::~License()
{
}

bool Native::ParameterMap::Global::License::has_data() const
{
    return (encrypted !=  nullptr && encrypted->has_data())
	|| (unencypted !=  nullptr && unencypted->has_data());
}

bool Native::ParameterMap::Global::License::has_operation() const
{
    return is_set(operation)
	|| (encrypted !=  nullptr && encrypted->has_operation())
	|| (unencypted !=  nullptr && unencypted->has_operation());
}

std::string Native::ParameterMap::Global::License::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "license";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Global::License::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'License' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::License::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Encrypted")
    {
        if(encrypted == nullptr)
        {
            encrypted = std::make_shared<Native::ParameterMap::Global::License::Encrypted>();
        }
        return encrypted;
    }

    if(child_yang_name == "Unencypted")
    {
        if(unencypted == nullptr)
        {
            unencypted = std::make_shared<Native::ParameterMap::Global::License::Unencypted>();
        }
        return unencypted;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::License::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encrypted != nullptr)
    {
        children["Encrypted"] = encrypted;
    }

    if(unencypted != nullptr)
    {
        children["Unencypted"] = unencypted;
    }

    return children;
}

void Native::ParameterMap::Global::License::set_value(const std::string & value_path, std::string value)
{
}

Native::ParameterMap::Global::License::Unencypted::Unencypted()
    :
    hex_string{YType::str, "Hex-string"}
{
    yang_name = "Unencypted"; yang_parent_name = "license";
}

Native::ParameterMap::Global::License::Unencypted::~Unencypted()
{
}

bool Native::ParameterMap::Global::License::Unencypted::has_data() const
{
    return hex_string.is_set;
}

bool Native::ParameterMap::Global::License::Unencypted::has_operation() const
{
    return is_set(operation)
	|| is_set(hex_string.operation);
}

std::string Native::ParameterMap::Global::License::Unencypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Unencypted";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Global::License::Unencypted::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Unencypted' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_string.is_set || is_set(hex_string.operation)) leaf_name_data.push_back(hex_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::License::Unencypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::License::Unencypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Global::License::Unencypted::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Hex-string")
    {
        hex_string = value;
    }
}

Native::ParameterMap::Global::License::Encrypted::Encrypted()
    :
    hex_string{YType::str, "Hex-string"}
{
    yang_name = "Encrypted"; yang_parent_name = "license";
}

Native::ParameterMap::Global::License::Encrypted::~Encrypted()
{
}

bool Native::ParameterMap::Global::License::Encrypted::has_data() const
{
    return hex_string.is_set;
}

bool Native::ParameterMap::Global::License::Encrypted::has_operation() const
{
    return is_set(operation)
	|| is_set(hex_string.operation);
}

std::string Native::ParameterMap::Global::License::Encrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Encrypted";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Global::License::Encrypted::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encrypted' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_string.is_set || is_set(hex_string.operation)) leaf_name_data.push_back(hex_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::License::Encrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::License::Encrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Global::License::Encrypted::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Hex-string")
    {
        hex_string = value;
    }
}

Native::ParameterMap::Global::Primary::Primary()
    :
    tower(std::make_shared<Native::ParameterMap::Global::Primary::Tower>())
{
    tower->parent = this;

    yang_name = "primary"; yang_parent_name = "global";
}

Native::ParameterMap::Global::Primary::~Primary()
{
}

bool Native::ParameterMap::Global::Primary::has_data() const
{
    return (tower !=  nullptr && tower->has_data());
}

bool Native::ParameterMap::Global::Primary::has_operation() const
{
    return is_set(operation)
	|| (tower !=  nullptr && tower->has_operation());
}

std::string Native::ParameterMap::Global::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Global::Primary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Primary' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tower")
    {
        if(tower == nullptr)
        {
            tower = std::make_shared<Native::ParameterMap::Global::Primary::Tower>();
        }
        return tower;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tower != nullptr)
    {
        children["tower"] = tower;
    }

    return children;
}

void Native::ParameterMap::Global::Primary::set_value(const std::string & value_path, std::string value)
{
}

Native::ParameterMap::Global::Primary::Tower::Tower()
    :
    ipv4{YType::str, "ipv4"},
    name{YType::str, "name"}
{
    yang_name = "tower"; yang_parent_name = "primary";
}

Native::ParameterMap::Global::Primary::Tower::~Tower()
{
}

bool Native::ParameterMap::Global::Primary::Tower::has_data() const
{
    return ipv4.is_set
	|| name.is_set;
}

bool Native::ParameterMap::Global::Primary::Tower::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(name.operation);
}

std::string Native::ParameterMap::Global::Primary::Tower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tower";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Global::Primary::Tower::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tower' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Primary::Tower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Primary::Tower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Global::Primary::Tower::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::ParameterMap::Global::Secondary::Secondary()
    :
    tower(std::make_shared<Native::ParameterMap::Global::Secondary::Tower>())
{
    tower->parent = this;

    yang_name = "secondary"; yang_parent_name = "global";
}

Native::ParameterMap::Global::Secondary::~Secondary()
{
}

bool Native::ParameterMap::Global::Secondary::has_data() const
{
    return (tower !=  nullptr && tower->has_data());
}

bool Native::ParameterMap::Global::Secondary::has_operation() const
{
    return is_set(operation)
	|| (tower !=  nullptr && tower->has_operation());
}

std::string Native::ParameterMap::Global::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Global::Secondary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Secondary' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tower")
    {
        if(tower == nullptr)
        {
            tower = std::make_shared<Native::ParameterMap::Global::Secondary::Tower>();
        }
        return tower;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tower != nullptr)
    {
        children["tower"] = tower;
    }

    return children;
}

void Native::ParameterMap::Global::Secondary::set_value(const std::string & value_path, std::string value)
{
}

Native::ParameterMap::Global::Secondary::Tower::Tower()
    :
    ipv4{YType::str, "ipv4"},
    name{YType::str, "name"}
{
    yang_name = "tower"; yang_parent_name = "secondary";
}

Native::ParameterMap::Global::Secondary::Tower::~Tower()
{
}

bool Native::ParameterMap::Global::Secondary::Tower::has_data() const
{
    return ipv4.is_set
	|| name.is_set;
}

bool Native::ParameterMap::Global::Secondary::Tower::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(name.operation);
}

std::string Native::ParameterMap::Global::Secondary::Tower::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tower";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Global::Secondary::Tower::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tower' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Secondary::Tower::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Secondary::Tower::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Global::Secondary::Tower::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::ParameterMap::Global::Whitelist::Whitelist()
    :
    acl(std::make_shared<Native::ParameterMap::Global::Whitelist::Acl>())
	,domain_name(std::make_shared<Native::ParameterMap::Global::Whitelist::DomainName>())
	,download(nullptr) // presence node
{
    acl->parent = this;

    domain_name->parent = this;

    yang_name = "whitelist"; yang_parent_name = "global";
}

Native::ParameterMap::Global::Whitelist::~Whitelist()
{
}

bool Native::ParameterMap::Global::Whitelist::has_data() const
{
    return (acl !=  nullptr && acl->has_data())
	|| (domain_name !=  nullptr && domain_name->has_data())
	|| (download !=  nullptr && download->has_data());
}

bool Native::ParameterMap::Global::Whitelist::has_operation() const
{
    return is_set(operation)
	|| (acl !=  nullptr && acl->has_operation())
	|| (domain_name !=  nullptr && domain_name->has_operation())
	|| (download !=  nullptr && download->has_operation());
}

std::string Native::ParameterMap::Global::Whitelist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "whitelist";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Global::Whitelist::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Whitelist' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Whitelist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::ParameterMap::Global::Whitelist::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "domain-name")
    {
        if(domain_name == nullptr)
        {
            domain_name = std::make_shared<Native::ParameterMap::Global::Whitelist::DomainName>();
        }
        return domain_name;
    }

    if(child_yang_name == "download")
    {
        if(download == nullptr)
        {
            download = std::make_shared<Native::ParameterMap::Global::Whitelist::Download>();
        }
        return download;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Whitelist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    if(domain_name != nullptr)
    {
        children["domain-name"] = domain_name;
    }

    if(download != nullptr)
    {
        children["download"] = download;
    }

    return children;
}

void Native::ParameterMap::Global::Whitelist::set_value(const std::string & value_path, std::string value)
{
}

Native::ParameterMap::Global::Whitelist::Acl::Acl()
    :
    acl_number{YType::str, "acl-number"},
    name{YType::str, "name"}
{
    yang_name = "acl"; yang_parent_name = "whitelist";
}

Native::ParameterMap::Global::Whitelist::Acl::~Acl()
{
}

bool Native::ParameterMap::Global::Whitelist::Acl::has_data() const
{
    return acl_number.is_set
	|| name.is_set;
}

bool Native::ParameterMap::Global::Whitelist::Acl::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_number.operation)
	|| is_set(name.operation);
}

std::string Native::ParameterMap::Global::Whitelist::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Global::Whitelist::Acl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Acl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_number.is_set || is_set(acl_number.operation)) leaf_name_data.push_back(acl_number.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Whitelist::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Whitelist::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Global::Whitelist::Acl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-number")
    {
        acl_number = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::ParameterMap::Global::Whitelist::DomainName::DomainName()
    :
    regex{YType::str, "regex"}
{
    yang_name = "domain-name"; yang_parent_name = "whitelist";
}

Native::ParameterMap::Global::Whitelist::DomainName::~DomainName()
{
}

bool Native::ParameterMap::Global::Whitelist::DomainName::has_data() const
{
    return regex.is_set;
}

bool Native::ParameterMap::Global::Whitelist::DomainName::has_operation() const
{
    return is_set(operation)
	|| is_set(regex.operation);
}

std::string Native::ParameterMap::Global::Whitelist::DomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Global::Whitelist::DomainName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DomainName' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (regex.is_set || is_set(regex.operation)) leaf_name_data.push_back(regex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Whitelist::DomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Whitelist::DomainName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Global::Whitelist::DomainName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "regex")
    {
        regex = value;
    }
}

Native::ParameterMap::Global::Whitelist::Download::Download()
    :
    interval{YType::uint16, "interval"}
{
    yang_name = "download"; yang_parent_name = "whitelist";
}

Native::ParameterMap::Global::Whitelist::Download::~Download()
{
}

bool Native::ParameterMap::Global::Whitelist::Download::has_data() const
{
    return interval.is_set;
}

bool Native::ParameterMap::Global::Whitelist::Download::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation);
}

std::string Native::ParameterMap::Global::Whitelist::Download::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "download";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Global::Whitelist::Download::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Download' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Global::Whitelist::Download::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Global::Whitelist::Download::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Global::Whitelist::Download::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::ParameterMap::Icmp::Icmp()
    :
    idle_time{YType::uint32, "idle-time"}
{
    yang_name = "icmp"; yang_parent_name = "parameter-map";
}

Native::ParameterMap::Icmp::~Icmp()
{
}

bool Native::ParameterMap::Icmp::has_data() const
{
    return idle_time.is_set;
}

bool Native::ParameterMap::Icmp::has_operation() const
{
    return is_set(operation)
	|| is_set(idle_time.operation);
}

std::string Native::ParameterMap::Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:icmp";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Icmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Icmp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_time.is_set || is_set(idle_time.operation)) leaf_name_data.push_back(idle_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Icmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Icmp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "idle-time")
    {
        idle_time = value;
    }
}

Native::ParameterMap::Lisp::Lisp()
    :
    inner_packet_inspection{YType::empty, "inner-packet-inspection"}
{
    yang_name = "lisp"; yang_parent_name = "parameter-map";
}

Native::ParameterMap::Lisp::~Lisp()
{
}

bool Native::ParameterMap::Lisp::has_data() const
{
    return inner_packet_inspection.is_set;
}

bool Native::ParameterMap::Lisp::has_operation() const
{
    return is_set(operation)
	|| is_set(inner_packet_inspection.operation);
}

std::string Native::ParameterMap::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:lisp";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Lisp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lisp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inner_packet_inspection.is_set || is_set(inner_packet_inspection.operation)) leaf_name_data.push_back(inner_packet_inspection.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Lisp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inner-packet-inspection")
    {
        inner_packet_inspection = value;
    }
}

Native::ParameterMap::Log::Log()
    :
    dropped_packets{YType::empty, "dropped-packets"}
    	,
    flow_export(std::make_shared<Native::ParameterMap::Log::FlowExport>())
{
    flow_export->parent = this;

    yang_name = "log"; yang_parent_name = "parameter-map";
}

Native::ParameterMap::Log::~Log()
{
}

bool Native::ParameterMap::Log::has_data() const
{
    return dropped_packets.is_set
	|| (flow_export !=  nullptr && flow_export->has_data());
}

bool Native::ParameterMap::Log::has_operation() const
{
    return is_set(operation)
	|| is_set(dropped_packets.operation)
	|| (flow_export !=  nullptr && flow_export->has_operation());
}

std::string Native::ParameterMap::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:log";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Log::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Log' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dropped_packets.is_set || is_set(dropped_packets.operation)) leaf_name_data.push_back(dropped_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-export")
    {
        if(flow_export == nullptr)
        {
            flow_export = std::make_shared<Native::ParameterMap::Log::FlowExport>();
        }
        return flow_export;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_export != nullptr)
    {
        children["flow-export"] = flow_export;
    }

    return children;
}

void Native::ParameterMap::Log::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dropped-packets")
    {
        dropped_packets = value;
    }
}

Native::ParameterMap::Log::FlowExport::FlowExport()
    :
    template_(std::make_shared<Native::ParameterMap::Log::FlowExport::Template_>())
	,v9(std::make_shared<Native::ParameterMap::Log::FlowExport::V9>())
{
    template_->parent = this;

    v9->parent = this;

    yang_name = "flow-export"; yang_parent_name = "log";
}

Native::ParameterMap::Log::FlowExport::~FlowExport()
{
}

bool Native::ParameterMap::Log::FlowExport::has_data() const
{
    return (template_ !=  nullptr && template_->has_data())
	|| (v9 !=  nullptr && v9->has_data());
}

bool Native::ParameterMap::Log::FlowExport::has_operation() const
{
    return is_set(operation)
	|| (template_ !=  nullptr && template_->has_operation())
	|| (v9 !=  nullptr && v9->has_operation());
}

std::string Native::ParameterMap::Log::FlowExport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-export";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Log::FlowExport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowExport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Log::FlowExport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::ParameterMap::Log::FlowExport::Template_>();
        }
        return template_;
    }

    if(child_yang_name == "v9")
    {
        if(v9 == nullptr)
        {
            v9 = std::make_shared<Native::ParameterMap::Log::FlowExport::V9>();
        }
        return v9;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Log::FlowExport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    if(v9 != nullptr)
    {
        children["v9"] = v9;
    }

    return children;
}

void Native::ParameterMap::Log::FlowExport::set_value(const std::string & value_path, std::string value)
{
}

Native::ParameterMap::Log::FlowExport::Template_::Template_()
    :
    timeout_rate{YType::uint32, "timeout-rate"}
{
    yang_name = "template"; yang_parent_name = "flow-export";
}

Native::ParameterMap::Log::FlowExport::Template_::~Template_()
{
}

bool Native::ParameterMap::Log::FlowExport::Template_::has_data() const
{
    return timeout_rate.is_set;
}

bool Native::ParameterMap::Log::FlowExport::Template_::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout_rate.operation);
}

std::string Native::ParameterMap::Log::FlowExport::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Log::FlowExport::Template_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Template_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout_rate.is_set || is_set(timeout_rate.operation)) leaf_name_data.push_back(timeout_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Log::FlowExport::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Log::FlowExport::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Log::FlowExport::Template_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout-rate")
    {
        timeout_rate = value;
    }
}

Native::ParameterMap::Log::FlowExport::V9::V9()
    :
    udp(std::make_shared<Native::ParameterMap::Log::FlowExport::V9::Udp>())
{
    udp->parent = this;

    yang_name = "v9"; yang_parent_name = "flow-export";
}

Native::ParameterMap::Log::FlowExport::V9::~V9()
{
}

bool Native::ParameterMap::Log::FlowExport::V9::has_data() const
{
    return (udp !=  nullptr && udp->has_data());
}

bool Native::ParameterMap::Log::FlowExport::V9::has_operation() const
{
    return is_set(operation)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Native::ParameterMap::Log::FlowExport::V9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v9";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Log::FlowExport::V9::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V9' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Log::FlowExport::V9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::ParameterMap::Log::FlowExport::V9::Udp>();
        }
        return udp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Log::FlowExport::V9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udp != nullptr)
    {
        children["udp"] = udp;
    }

    return children;
}

void Native::ParameterMap::Log::FlowExport::V9::set_value(const std::string & value_path, std::string value)
{
}

Native::ParameterMap::Log::FlowExport::V9::Udp::Udp()
    :
    destination(std::make_shared<Native::ParameterMap::Log::FlowExport::V9::Udp::Destination>())
{
    destination->parent = this;

    yang_name = "udp"; yang_parent_name = "v9";
}

Native::ParameterMap::Log::FlowExport::V9::Udp::~Udp()
{
}

bool Native::ParameterMap::Log::FlowExport::V9::Udp::has_data() const
{
    return (destination !=  nullptr && destination->has_data());
}

bool Native::ParameterMap::Log::FlowExport::V9::Udp::has_operation() const
{
    return is_set(operation)
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Native::ParameterMap::Log::FlowExport::V9::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Log::FlowExport::V9::Udp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Udp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Log::FlowExport::V9::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::ParameterMap::Log::FlowExport::V9::Udp::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Log::FlowExport::V9::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    return children;
}

void Native::ParameterMap::Log::FlowExport::V9::Udp::set_value(const std::string & value_path, std::string value)
{
}

Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::Destination()
    :
    dst_ip{YType::str, "dst-ip"},
    dst_port{YType::uint16, "dst-port"}
{
    yang_name = "destination"; yang_parent_name = "udp";
}

Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::~Destination()
{
}

bool Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::has_data() const
{
    return dst_ip.is_set
	|| dst_port.is_set;
}

bool Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::has_operation() const
{
    return is_set(operation)
	|| is_set(dst_ip.operation)
	|| is_set(dst_port.operation);
}

std::string Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Destination' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_ip.is_set || is_set(dst_ip.operation)) leaf_name_data.push_back(dst_ip.get_name_leafdata());
    if (dst_port.is_set || is_set(dst_port.operation)) leaf_name_data.push_back(dst_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Log::FlowExport::V9::Udp::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dst-ip")
    {
        dst_ip = value;
    }
    if(value_path == "dst-port")
    {
        dst_port = value;
    }
}

Native::ParameterMap::MaxIncomplete::MaxIncomplete()
    :
    high{YType::uint32, "high"},
    low{YType::uint32, "low"}
{
    yang_name = "max-incomplete"; yang_parent_name = "parameter-map";
}

Native::ParameterMap::MaxIncomplete::~MaxIncomplete()
{
}

bool Native::ParameterMap::MaxIncomplete::has_data() const
{
    return high.is_set
	|| low.is_set;
}

bool Native::ParameterMap::MaxIncomplete::has_operation() const
{
    return is_set(operation)
	|| is_set(high.operation)
	|| is_set(low.operation);
}

std::string Native::ParameterMap::MaxIncomplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:max-incomplete";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::MaxIncomplete::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxIncomplete' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::MaxIncomplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::MaxIncomplete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::MaxIncomplete::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
}

Native::ParameterMap::OneMinute::OneMinute()
    :
    high{YType::uint32, "high"},
    low{YType::uint32, "low"}
{
    yang_name = "one-minute"; yang_parent_name = "parameter-map";
}

Native::ParameterMap::OneMinute::~OneMinute()
{
}

bool Native::ParameterMap::OneMinute::has_data() const
{
    return high.is_set
	|| low.is_set;
}

bool Native::ParameterMap::OneMinute::has_operation() const
{
    return is_set(operation)
	|| is_set(high.operation)
	|| is_set(low.operation);
}

std::string Native::ParameterMap::OneMinute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:one-minute";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::OneMinute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OneMinute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high.is_set || is_set(high.operation)) leaf_name_data.push_back(high.get_name_leafdata());
    if (low.is_set || is_set(low.operation)) leaf_name_data.push_back(low.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::OneMinute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::OneMinute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::OneMinute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "high")
    {
        high = value;
    }
    if(value_path == "low")
    {
        low = value;
    }
}

Native::ParameterMap::Sessions::Sessions()
    :
    maximum{YType::uint32, "maximum"}
    	,
    queue(std::make_shared<Native::ParameterMap::Sessions::Queue>())
{
    queue->parent = this;

    yang_name = "sessions"; yang_parent_name = "parameter-map";
}

Native::ParameterMap::Sessions::~Sessions()
{
}

bool Native::ParameterMap::Sessions::has_data() const
{
    return maximum.is_set
	|| (queue !=  nullptr && queue->has_data());
}

bool Native::ParameterMap::Sessions::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum.operation)
	|| (queue !=  nullptr && queue->has_operation());
}

std::string Native::ParameterMap::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:sessions";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sessions' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<Native::ParameterMap::Sessions::Queue>();
        }
        return queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    return children;
}

void Native::ParameterMap::Sessions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum")
    {
        maximum = value;
    }
}

Native::ParameterMap::Sessions::Queue::Queue()
    :
    max_threshold{YType::uint16, "max-threshold"},
    min_threshold{YType::uint16, "min-threshold"}
{
    yang_name = "queue"; yang_parent_name = "sessions";
}

Native::ParameterMap::Sessions::Queue::~Queue()
{
}

bool Native::ParameterMap::Sessions::Queue::has_data() const
{
    return max_threshold.is_set
	|| min_threshold.is_set;
}

bool Native::ParameterMap::Sessions::Queue::has_operation() const
{
    return is_set(operation)
	|| is_set(max_threshold.operation)
	|| is_set(min_threshold.operation);
}

std::string Native::ParameterMap::Sessions::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Sessions::Queue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Queue' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_threshold.is_set || is_set(max_threshold.operation)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (min_threshold.is_set || is_set(min_threshold.operation)) leaf_name_data.push_back(min_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Sessions::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Sessions::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Sessions::Queue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-threshold")
    {
        max_threshold = value;
    }
    if(value_path == "min-threshold")
    {
        min_threshold = value;
    }
}

Native::ParameterMap::TcpInspect::TcpInspect()
    :
    tcp(std::make_shared<Native::ParameterMap::TcpInspect::Tcp>())
{
    tcp->parent = this;

    yang_name = "tcp-inspect"; yang_parent_name = "parameter-map";
}

Native::ParameterMap::TcpInspect::~TcpInspect()
{
}

bool Native::ParameterMap::TcpInspect::has_data() const
{
    return (tcp !=  nullptr && tcp->has_data());
}

bool Native::ParameterMap::TcpInspect::has_operation() const
{
    return is_set(operation)
	|| (tcp !=  nullptr && tcp->has_operation());
}

std::string Native::ParameterMap::TcpInspect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:tcp-inspect";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::TcpInspect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TcpInspect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::ParameterMap::TcpInspect::Tcp>();
        }
        return tcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    return children;
}

void Native::ParameterMap::TcpInspect::set_value(const std::string & value_path, std::string value)
{
}

Native::ParameterMap::TcpInspect::Tcp::Tcp()
    :
    finwait_time{YType::uint32, "finwait-time"},
    idle_time{YType::uint32, "idle-time"},
    synwait_time{YType::uint32, "synwait-time"}
    	,
    max_incomplete(std::make_shared<Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete>())
{
    max_incomplete->parent = this;

    yang_name = "tcp"; yang_parent_name = "tcp-inspect";
}

Native::ParameterMap::TcpInspect::Tcp::~Tcp()
{
}

bool Native::ParameterMap::TcpInspect::Tcp::has_data() const
{
    return finwait_time.is_set
	|| idle_time.is_set
	|| synwait_time.is_set
	|| (max_incomplete !=  nullptr && max_incomplete->has_data());
}

bool Native::ParameterMap::TcpInspect::Tcp::has_operation() const
{
    return is_set(operation)
	|| is_set(finwait_time.operation)
	|| is_set(idle_time.operation)
	|| is_set(synwait_time.operation)
	|| (max_incomplete !=  nullptr && max_incomplete->has_operation());
}

std::string Native::ParameterMap::TcpInspect::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::TcpInspect::Tcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tcp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (finwait_time.is_set || is_set(finwait_time.operation)) leaf_name_data.push_back(finwait_time.get_name_leafdata());
    if (idle_time.is_set || is_set(idle_time.operation)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (synwait_time.is_set || is_set(synwait_time.operation)) leaf_name_data.push_back(synwait_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspect::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-incomplete")
    {
        if(max_incomplete == nullptr)
        {
            max_incomplete = std::make_shared<Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete>();
        }
        return max_incomplete;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspect::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(max_incomplete != nullptr)
    {
        children["max-incomplete"] = max_incomplete;
    }

    return children;
}

void Native::ParameterMap::TcpInspect::Tcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "finwait-time")
    {
        finwait_time = value;
    }
    if(value_path == "idle-time")
    {
        idle_time = value;
    }
    if(value_path == "synwait-time")
    {
        synwait_time = value;
    }
}

Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::MaxIncomplete()
    :
    host{YType::uint32, "host"}
{
    yang_name = "max-incomplete"; yang_parent_name = "tcp";
}

Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::~MaxIncomplete()
{
}

bool Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::has_data() const
{
    return host.is_set;
}

bool Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::has_operation() const
{
    return is_set(operation)
	|| is_set(host.operation);
}

std::string Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-incomplete";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxIncomplete' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::TcpInspect::Tcp::MaxIncomplete::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host")
    {
        host = value;
    }
}

Native::ParameterMap::TcpInspectZone::TcpInspectZone()
    :
    tcp(std::make_shared<Native::ParameterMap::TcpInspectZone::Tcp>())
{
    tcp->parent = this;

    yang_name = "tcp-inspect-zone"; yang_parent_name = "parameter-map";
}

Native::ParameterMap::TcpInspectZone::~TcpInspectZone()
{
}

bool Native::ParameterMap::TcpInspectZone::has_data() const
{
    return (tcp !=  nullptr && tcp->has_data());
}

bool Native::ParameterMap::TcpInspectZone::has_operation() const
{
    return is_set(operation)
	|| (tcp !=  nullptr && tcp->has_operation());
}

std::string Native::ParameterMap::TcpInspectZone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:tcp-inspect-zone";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::TcpInspectZone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TcpInspectZone' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspectZone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::ParameterMap::TcpInspectZone::Tcp>();
        }
        return tcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspectZone::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    return children;
}

void Native::ParameterMap::TcpInspectZone::set_value(const std::string & value_path, std::string value)
{
}

Native::ParameterMap::TcpInspectZone::Tcp::Tcp()
    :
    syn_flood(std::make_shared<Native::ParameterMap::TcpInspectZone::Tcp::SynFlood>())
{
    syn_flood->parent = this;

    yang_name = "tcp"; yang_parent_name = "tcp-inspect-zone";
}

Native::ParameterMap::TcpInspectZone::Tcp::~Tcp()
{
}

bool Native::ParameterMap::TcpInspectZone::Tcp::has_data() const
{
    return (syn_flood !=  nullptr && syn_flood->has_data());
}

bool Native::ParameterMap::TcpInspectZone::Tcp::has_operation() const
{
    return is_set(operation)
	|| (syn_flood !=  nullptr && syn_flood->has_operation());
}

std::string Native::ParameterMap::TcpInspectZone::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::TcpInspectZone::Tcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tcp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspectZone::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "syn-flood")
    {
        if(syn_flood == nullptr)
        {
            syn_flood = std::make_shared<Native::ParameterMap::TcpInspectZone::Tcp::SynFlood>();
        }
        return syn_flood;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspectZone::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(syn_flood != nullptr)
    {
        children["syn-flood"] = syn_flood;
    }

    return children;
}

void Native::ParameterMap::TcpInspectZone::Tcp::set_value(const std::string & value_path, std::string value)
{
}

Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::SynFlood()
    :
    rate(std::make_shared<Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate>())
{
    rate->parent = this;

    yang_name = "syn-flood"; yang_parent_name = "tcp";
}

Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::~SynFlood()
{
}

bool Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::has_data() const
{
    return (rate !=  nullptr && rate->has_data());
}

bool Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::has_operation() const
{
    return is_set(operation)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syn-flood";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SynFlood' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::set_value(const std::string & value_path, std::string value)
{
}

Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::Rate()
    :
    per_destination{YType::uint32, "per-destination"}
{
    yang_name = "rate"; yang_parent_name = "syn-flood";
}

Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::~Rate()
{
}

bool Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::has_data() const
{
    return per_destination.is_set;
}

bool Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::has_operation() const
{
    return is_set(operation)
	|| is_set(per_destination.operation);
}

std::string Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (per_destination.is_set || is_set(per_destination.operation)) leaf_name_data.push_back(per_destination.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::TcpInspectZone::Tcp::SynFlood::Rate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "per-destination")
    {
        per_destination = value;
    }
}

Native::ParameterMap::ThreatDetection::ThreatDetection()
    :
    basic_threat{YType::empty, "basic-threat"}
    	,
    rate(std::make_shared<Native::ParameterMap::ThreatDetection::Rate>())
{
    rate->parent = this;

    yang_name = "threat-detection"; yang_parent_name = "parameter-map";
}

Native::ParameterMap::ThreatDetection::~ThreatDetection()
{
}

bool Native::ParameterMap::ThreatDetection::has_data() const
{
    return basic_threat.is_set
	|| (rate !=  nullptr && rate->has_data());
}

bool Native::ParameterMap::ThreatDetection::has_operation() const
{
    return is_set(operation)
	|| is_set(basic_threat.operation)
	|| (rate !=  nullptr && rate->has_operation());
}

std::string Native::ParameterMap::ThreatDetection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:threat-detection";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::ThreatDetection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ThreatDetection' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (basic_threat.is_set || is_set(basic_threat.operation)) leaf_name_data.push_back(basic_threat.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::ThreatDetection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<Native::ParameterMap::ThreatDetection::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::ThreatDetection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void Native::ParameterMap::ThreatDetection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "basic-threat")
    {
        basic_threat = value;
    }
}

Native::ParameterMap::ThreatDetection::Rate::Rate()
    :
    fw_drop(std::make_shared<Native::ParameterMap::ThreatDetection::Rate::FwDrop>())
	,inspect_drop(std::make_shared<Native::ParameterMap::ThreatDetection::Rate::InspectDrop>())
	,syn_attack(std::make_shared<Native::ParameterMap::ThreatDetection::Rate::SynAttack>())
{
    fw_drop->parent = this;

    inspect_drop->parent = this;

    syn_attack->parent = this;

    yang_name = "rate"; yang_parent_name = "threat-detection";
}

Native::ParameterMap::ThreatDetection::Rate::~Rate()
{
}

bool Native::ParameterMap::ThreatDetection::Rate::has_data() const
{
    return (fw_drop !=  nullptr && fw_drop->has_data())
	|| (inspect_drop !=  nullptr && inspect_drop->has_data())
	|| (syn_attack !=  nullptr && syn_attack->has_data());
}

bool Native::ParameterMap::ThreatDetection::Rate::has_operation() const
{
    return is_set(operation)
	|| (fw_drop !=  nullptr && fw_drop->has_operation())
	|| (inspect_drop !=  nullptr && inspect_drop->has_operation())
	|| (syn_attack !=  nullptr && syn_attack->has_operation());
}

std::string Native::ParameterMap::ThreatDetection::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::ThreatDetection::Rate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::ThreatDetection::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fw-drop")
    {
        if(fw_drop == nullptr)
        {
            fw_drop = std::make_shared<Native::ParameterMap::ThreatDetection::Rate::FwDrop>();
        }
        return fw_drop;
    }

    if(child_yang_name == "inspect-drop")
    {
        if(inspect_drop == nullptr)
        {
            inspect_drop = std::make_shared<Native::ParameterMap::ThreatDetection::Rate::InspectDrop>();
        }
        return inspect_drop;
    }

    if(child_yang_name == "syn-attack")
    {
        if(syn_attack == nullptr)
        {
            syn_attack = std::make_shared<Native::ParameterMap::ThreatDetection::Rate::SynAttack>();
        }
        return syn_attack;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::ThreatDetection::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fw_drop != nullptr)
    {
        children["fw-drop"] = fw_drop;
    }

    if(inspect_drop != nullptr)
    {
        children["inspect-drop"] = inspect_drop;
    }

    if(syn_attack != nullptr)
    {
        children["syn-attack"] = syn_attack;
    }

    return children;
}

void Native::ParameterMap::ThreatDetection::Rate::set_value(const std::string & value_path, std::string value)
{
}

Native::ParameterMap::ThreatDetection::Rate::FwDrop::FwDrop()
    :
    average_threshold{YType::uint64, "average-threshold"},
    average_time_frame{YType::uint32, "average-time-frame"},
    burst_threshold{YType::uint64, "burst-threshold"}
{
    yang_name = "fw-drop"; yang_parent_name = "rate";
}

Native::ParameterMap::ThreatDetection::Rate::FwDrop::~FwDrop()
{
}

bool Native::ParameterMap::ThreatDetection::Rate::FwDrop::has_data() const
{
    return average_threshold.is_set
	|| average_time_frame.is_set
	|| burst_threshold.is_set;
}

bool Native::ParameterMap::ThreatDetection::Rate::FwDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(average_threshold.operation)
	|| is_set(average_time_frame.operation)
	|| is_set(burst_threshold.operation);
}

std::string Native::ParameterMap::ThreatDetection::Rate::FwDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fw-drop";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::ThreatDetection::Rate::FwDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FwDrop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_threshold.is_set || is_set(average_threshold.operation)) leaf_name_data.push_back(average_threshold.get_name_leafdata());
    if (average_time_frame.is_set || is_set(average_time_frame.operation)) leaf_name_data.push_back(average_time_frame.get_name_leafdata());
    if (burst_threshold.is_set || is_set(burst_threshold.operation)) leaf_name_data.push_back(burst_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::ThreatDetection::Rate::FwDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::ThreatDetection::Rate::FwDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::ThreatDetection::Rate::FwDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average-threshold")
    {
        average_threshold = value;
    }
    if(value_path == "average-time-frame")
    {
        average_time_frame = value;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold = value;
    }
}

Native::ParameterMap::ThreatDetection::Rate::InspectDrop::InspectDrop()
    :
    average_threshold{YType::uint64, "average-threshold"},
    average_time_frame{YType::uint32, "average-time-frame"},
    burst_threshold{YType::uint64, "burst-threshold"}
{
    yang_name = "inspect-drop"; yang_parent_name = "rate";
}

Native::ParameterMap::ThreatDetection::Rate::InspectDrop::~InspectDrop()
{
}

bool Native::ParameterMap::ThreatDetection::Rate::InspectDrop::has_data() const
{
    return average_threshold.is_set
	|| average_time_frame.is_set
	|| burst_threshold.is_set;
}

bool Native::ParameterMap::ThreatDetection::Rate::InspectDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(average_threshold.operation)
	|| is_set(average_time_frame.operation)
	|| is_set(burst_threshold.operation);
}

std::string Native::ParameterMap::ThreatDetection::Rate::InspectDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspect-drop";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::ThreatDetection::Rate::InspectDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InspectDrop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_threshold.is_set || is_set(average_threshold.operation)) leaf_name_data.push_back(average_threshold.get_name_leafdata());
    if (average_time_frame.is_set || is_set(average_time_frame.operation)) leaf_name_data.push_back(average_time_frame.get_name_leafdata());
    if (burst_threshold.is_set || is_set(burst_threshold.operation)) leaf_name_data.push_back(burst_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::ThreatDetection::Rate::InspectDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::ThreatDetection::Rate::InspectDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::ThreatDetection::Rate::InspectDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average-threshold")
    {
        average_threshold = value;
    }
    if(value_path == "average-time-frame")
    {
        average_time_frame = value;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold = value;
    }
}

Native::ParameterMap::ThreatDetection::Rate::SynAttack::SynAttack()
    :
    average_threshold{YType::uint64, "average-threshold"},
    average_time_frame{YType::uint32, "average-time-frame"},
    burst_threshold{YType::uint64, "burst-threshold"}
{
    yang_name = "syn-attack"; yang_parent_name = "rate";
}

Native::ParameterMap::ThreatDetection::Rate::SynAttack::~SynAttack()
{
}

bool Native::ParameterMap::ThreatDetection::Rate::SynAttack::has_data() const
{
    return average_threshold.is_set
	|| average_time_frame.is_set
	|| burst_threshold.is_set;
}

bool Native::ParameterMap::ThreatDetection::Rate::SynAttack::has_operation() const
{
    return is_set(operation)
	|| is_set(average_threshold.operation)
	|| is_set(average_time_frame.operation)
	|| is_set(burst_threshold.operation);
}

std::string Native::ParameterMap::ThreatDetection::Rate::SynAttack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syn-attack";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::ThreatDetection::Rate::SynAttack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SynAttack' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average_threshold.is_set || is_set(average_threshold.operation)) leaf_name_data.push_back(average_threshold.get_name_leafdata());
    if (average_time_frame.is_set || is_set(average_time_frame.operation)) leaf_name_data.push_back(average_time_frame.get_name_leafdata());
    if (burst_threshold.is_set || is_set(burst_threshold.operation)) leaf_name_data.push_back(burst_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::ThreatDetection::Rate::SynAttack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::ThreatDetection::Rate::SynAttack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::ThreatDetection::Rate::SynAttack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average-threshold")
    {
        average_threshold = value;
    }
    if(value_path == "average-time-frame")
    {
        average_time_frame = value;
    }
    if(value_path == "burst-threshold")
    {
        burst_threshold = value;
    }
}

Native::ParameterMap::Udp::Udp()
    :
    idle_time{YType::uint32, "idle-time"}
{
    yang_name = "udp"; yang_parent_name = "parameter-map";
}

Native::ParameterMap::Udp::~Udp()
{
}

bool Native::ParameterMap::Udp::has_data() const
{
    return idle_time.is_set;
}

bool Native::ParameterMap::Udp::has_operation() const
{
    return is_set(operation)
	|| is_set(idle_time.operation);
}

std::string Native::ParameterMap::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:udp";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Udp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Udp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_time.is_set || is_set(idle_time.operation)) leaf_name_data.push_back(idle_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Udp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "idle-time")
    {
        idle_time = value;
    }
}

Native::ParameterMap::Vrf::Vrf()
    :
    inspect{YType::str, "inspect"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "parameter-map";
}

Native::ParameterMap::Vrf::~Vrf()
{
}

bool Native::ParameterMap::Vrf::has_data() const
{
    return inspect.is_set
	|| name.is_set;
}

bool Native::ParameterMap::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(inspect.operation)
	|| is_set(name.operation);
}

std::string Native::ParameterMap::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:vrf";

    return path_buffer.str();

}

const EntityPath Native::ParameterMap::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inspect.is_set || is_set(inspect.operation)) leaf_name_data.push_back(inspect.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::ParameterMap::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ParameterMap::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ParameterMap::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inspect")
    {
        inspect = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Ppp::Ppp()
    :
    packet(std::make_shared<Native::Ppp::Packet>())
{
    packet->parent = this;

    yang_name = "ppp"; yang_parent_name = "native";
}

Native::Ppp::~Ppp()
{
}

bool Native::Ppp::has_data() const
{
    return (packet !=  nullptr && packet->has_data());
}

bool Native::Ppp::has_operation() const
{
    return is_set(operation)
	|| (packet !=  nullptr && packet->has_operation());
}

std::string Native::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp";

    return path_buffer.str();

}

const EntityPath Native::Ppp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "packet")
    {
        if(packet == nullptr)
        {
            packet = std::make_shared<Native::Ppp::Packet>();
        }
        return packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(packet != nullptr)
    {
        children["packet"] = packet;
    }

    return children;
}

void Native::Ppp::set_value(const std::string & value_path, std::string value)
{
}

Native::Ppp::Packet::Packet()
    :
    allow_time{YType::uint32, "allow_time"},
    block_time{YType::uint32, "block_time"},
    throttle{YType::uint32, "throttle"}
{
    yang_name = "packet"; yang_parent_name = "ppp";
}

Native::Ppp::Packet::~Packet()
{
}

bool Native::Ppp::Packet::has_data() const
{
    return allow_time.is_set
	|| block_time.is_set
	|| throttle.is_set;
}

bool Native::Ppp::Packet::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_time.operation)
	|| is_set(block_time.operation)
	|| is_set(throttle.operation);
}

std::string Native::Ppp::Packet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ppp:packet";

    return path_buffer.str();

}

const EntityPath Native::Ppp::Packet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/ppp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_time.is_set || is_set(allow_time.operation)) leaf_name_data.push_back(allow_time.get_name_leafdata());
    if (block_time.is_set || is_set(block_time.operation)) leaf_name_data.push_back(block_time.get_name_leafdata());
    if (throttle.is_set || is_set(throttle.operation)) leaf_name_data.push_back(throttle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Ppp::Packet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ppp::Packet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ppp::Packet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow_time")
    {
        allow_time = value;
    }
    if(value_path == "block_time")
    {
        block_time = value;
    }
    if(value_path == "throttle")
    {
        throttle = value;
    }
}

Native::Mac::Mac()
    :
    access_list(std::make_shared<Native::Mac::AccessList>())
	,address_table(std::make_shared<Native::Mac::AddressTable>())
{
    access_list->parent = this;

    address_table->parent = this;

    yang_name = "mac"; yang_parent_name = "native";
}

Native::Mac::~Mac()
{
}

bool Native::Mac::has_data() const
{
    return (access_list !=  nullptr && access_list->has_data())
	|| (address_table !=  nullptr && address_table->has_data());
}

bool Native::Mac::has_operation() const
{
    return is_set(operation)
	|| (access_list !=  nullptr && access_list->has_operation())
	|| (address_table !=  nullptr && address_table->has_operation());
}

std::string Native::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

const EntityPath Native::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list")
    {
        if(access_list == nullptr)
        {
            access_list = std::make_shared<Native::Mac::AccessList>();
        }
        return access_list;
    }

    if(child_yang_name == "address-table")
    {
        if(address_table == nullptr)
        {
            address_table = std::make_shared<Native::Mac::AddressTable>();
        }
        return address_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_list != nullptr)
    {
        children["access-list"] = access_list;
    }

    if(address_table != nullptr)
    {
        children["address-table"] = address_table;
    }

    return children;
}

void Native::Mac::set_value(const std::string & value_path, std::string value)
{
}

Native::Mac::AddressTable::AddressTable()
    :
    aging_time{YType::uint32, "aging-time"},
    control_packet_learn{YType::empty, "control-packet-learn"},
    routed_mac{YType::empty, "routed-mac"},
    vlan{YType::uint16, "vlan"}
    	,
    learning(std::make_shared<Native::Mac::AddressTable::Learning>())
	,notification(std::make_shared<Native::Mac::AddressTable::Notification>())
	,static_(std::make_shared<Native::Mac::AddressTable::Static_>())
{
    learning->parent = this;

    notification->parent = this;

    static_->parent = this;

    yang_name = "address-table"; yang_parent_name = "mac";
}

Native::Mac::AddressTable::~AddressTable()
{
}

bool Native::Mac::AddressTable::has_data() const
{
    return aging_time.is_set
	|| control_packet_learn.is_set
	|| routed_mac.is_set
	|| vlan.is_set
	|| (learning !=  nullptr && learning->has_data())
	|| (notification !=  nullptr && notification->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Mac::AddressTable::has_operation() const
{
    return is_set(operation)
	|| is_set(aging_time.operation)
	|| is_set(control_packet_learn.operation)
	|| is_set(routed_mac.operation)
	|| is_set(vlan.operation)
	|| (learning !=  nullptr && learning->has_operation())
	|| (notification !=  nullptr && notification->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Mac::AddressTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-table";

    return path_buffer.str();

}

const EntityPath Native::Mac::AddressTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mac/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aging_time.is_set || is_set(aging_time.operation)) leaf_name_data.push_back(aging_time.get_name_leafdata());
    if (control_packet_learn.is_set || is_set(control_packet_learn.operation)) leaf_name_data.push_back(control_packet_learn.get_name_leafdata());
    if (routed_mac.is_set || is_set(routed_mac.operation)) leaf_name_data.push_back(routed_mac.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "learning")
    {
        if(learning == nullptr)
        {
            learning = std::make_shared<Native::Mac::AddressTable::Learning>();
        }
        return learning;
    }

    if(child_yang_name == "notification")
    {
        if(notification == nullptr)
        {
            notification = std::make_shared<Native::Mac::AddressTable::Notification>();
        }
        return notification;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Mac::AddressTable::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(learning != nullptr)
    {
        children["learning"] = learning;
    }

    if(notification != nullptr)
    {
        children["notification"] = notification;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Mac::AddressTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aging-time")
    {
        aging_time = value;
    }
    if(value_path == "control-packet-learn")
    {
        control_packet_learn = value;
    }
    if(value_path == "routed-mac")
    {
        routed_mac = value;
    }
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Mac::AddressTable::Learning::Learning()
    :
    vlan{YType::uint16, "vlan"}
{
    yang_name = "learning"; yang_parent_name = "address-table";
}

Native::Mac::AddressTable::Learning::~Learning()
{
}

bool Native::Mac::AddressTable::Learning::has_data() const
{
    return vlan.is_set;
}

bool Native::Mac::AddressTable::Learning::has_operation() const
{
    return is_set(operation)
	|| is_set(vlan.operation);
}

std::string Native::Mac::AddressTable::Learning::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "learning";

    return path_buffer.str();

}

const EntityPath Native::Mac::AddressTable::Learning::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::Learning::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::Learning::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mac::AddressTable::Learning::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Mac::AddressTable::Notification::Notification()
    :
    mac_move{YType::empty, "mac-move"}
    	,
    change(nullptr) // presence node
	,threshold(nullptr) // presence node
{
    yang_name = "notification"; yang_parent_name = "address-table";
}

Native::Mac::AddressTable::Notification::~Notification()
{
}

bool Native::Mac::AddressTable::Notification::has_data() const
{
    return mac_move.is_set
	|| (change !=  nullptr && change->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Mac::AddressTable::Notification::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_move.operation)
	|| (change !=  nullptr && change->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Mac::AddressTable::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";

    return path_buffer.str();

}

const EntityPath Native::Mac::AddressTable::Notification::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_move.is_set || is_set(mac_move.operation)) leaf_name_data.push_back(mac_move.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::Notification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "change")
    {
        if(change == nullptr)
        {
            change = std::make_shared<Native::Mac::AddressTable::Notification::Change>();
        }
        return change;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Mac::AddressTable::Notification::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::Notification::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(change != nullptr)
    {
        children["change"] = change;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Mac::AddressTable::Notification::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-move")
    {
        mac_move = value;
    }
}

Native::Mac::AddressTable::Notification::Change::Change()
    :
    history_size{YType::uint16, "history-size"},
    interval{YType::uint32, "interval"}
{
    yang_name = "change"; yang_parent_name = "notification";
}

Native::Mac::AddressTable::Notification::Change::~Change()
{
}

bool Native::Mac::AddressTable::Notification::Change::has_data() const
{
    return history_size.is_set
	|| interval.is_set;
}

bool Native::Mac::AddressTable::Notification::Change::has_operation() const
{
    return is_set(operation)
	|| is_set(history_size.operation)
	|| is_set(interval.operation);
}

std::string Native::Mac::AddressTable::Notification::Change::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change";

    return path_buffer.str();

}

const EntityPath Native::Mac::AddressTable::Notification::Change::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history_size.is_set || is_set(history_size.operation)) leaf_name_data.push_back(history_size.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::Notification::Change::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::Notification::Change::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mac::AddressTable::Notification::Change::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "history-size")
    {
        history_size = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Mac::AddressTable::Notification::Threshold::Threshold()
    :
    interval{YType::uint32, "interval"}
    	,
    limit(std::make_shared<Native::Mac::AddressTable::Notification::Threshold::Limit>())
{
    limit->parent = this;

    yang_name = "threshold"; yang_parent_name = "notification";
}

Native::Mac::AddressTable::Notification::Threshold::~Threshold()
{
}

bool Native::Mac::AddressTable::Notification::Threshold::has_data() const
{
    return interval.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Mac::AddressTable::Notification::Threshold::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Mac::AddressTable::Notification::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

const EntityPath Native::Mac::AddressTable::Notification::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/notification/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::Notification::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Mac::AddressTable::Notification::Threshold::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::Notification::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Mac::AddressTable::Notification::Threshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
}

Native::Mac::AddressTable::Notification::Threshold::Limit::Limit()
    :
    interval{YType::uint32, "interval"},
    percentage{YType::uint8, "percentage"}
{
    yang_name = "limit"; yang_parent_name = "threshold";
}

Native::Mac::AddressTable::Notification::Threshold::Limit::~Limit()
{
}

bool Native::Mac::AddressTable::Notification::Threshold::Limit::has_data() const
{
    return interval.is_set
	|| percentage.is_set;
}

bool Native::Mac::AddressTable::Notification::Threshold::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(interval.operation)
	|| is_set(percentage.operation);
}

std::string Native::Mac::AddressTable::Notification::Threshold::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Mac::AddressTable::Notification::Threshold::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/notification/threshold/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (percentage.is_set || is_set(percentage.operation)) leaf_name_data.push_back(percentage.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::Notification::Threshold::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::Notification::Threshold::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mac::AddressTable::Notification::Threshold::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "percentage")
    {
        percentage = value;
    }
}

Native::Mac::AddressTable::Static_::Static_()
    :
    drop{YType::empty, "drop"},
    interface{YType::str, "interface"},
    mac_address{YType::str, "mac-address"},
    vlan{YType::uint16, "vlan"}
{
    yang_name = "static"; yang_parent_name = "address-table";
}

Native::Mac::AddressTable::Static_::~Static_()
{
}

bool Native::Mac::AddressTable::Static_::has_data() const
{
    return drop.is_set
	|| interface.is_set
	|| mac_address.is_set
	|| vlan.is_set;
}

bool Native::Mac::AddressTable::Static_::has_operation() const
{
    return is_set(operation)
	|| is_set(drop.operation)
	|| is_set(interface.operation)
	|| is_set(mac_address.operation)
	|| is_set(vlan.operation);
}

std::string Native::Mac::AddressTable::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Mac::AddressTable::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mac/address-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mac::AddressTable::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AddressTable::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mac::AddressTable::Static_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop")
    {
        drop = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "vlan")
    {
        vlan = value;
    }
}

Native::Mac::AccessList::AccessList()
{
    yang_name = "access-list"; yang_parent_name = "mac";
}

Native::Mac::AccessList::~AccessList()
{
}

bool Native::Mac::AccessList::has_data() const
{
    for (std::size_t index=0; index<extended.size(); index++)
    {
        if(extended[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mac::AccessList::has_operation() const
{
    for (std::size_t index=0; index<extended.size(); index++)
    {
        if(extended[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Mac::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:access-list";

    return path_buffer.str();

}

const EntityPath Native::Mac::AccessList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mac/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mac::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended")
    {
        for(auto const & c : extended)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mac::AccessList::Extended>();
        c->parent = this;
        extended.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : extended)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mac::AccessList::set_value(const std::string & value_path, std::string value)
{
}

Native::Mac::AccessList::Extended::Extended()
    :
    id{YType::str, "id"}
    	,
    deny(std::make_shared<Native::Mac::AccessList::Extended::Deny>())
	,permit(std::make_shared<Native::Mac::AccessList::Extended::Permit>())
{
    deny->parent = this;

    permit->parent = this;

    yang_name = "extended"; yang_parent_name = "access-list";
}

Native::Mac::AccessList::Extended::~Extended()
{
}

bool Native::Mac::AccessList::Extended::has_data() const
{
    return id.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Mac::AccessList::Extended::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Mac::AccessList::Extended::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mac::AccessList::Extended::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mac/Cisco-IOS-XE-acl:access-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mac::AccessList::Extended::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Mac::AccessList::Extended::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Mac::AccessList::Extended::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::Extended::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Mac::AccessList::Extended::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Mac::AccessList::Extended::Deny::Deny()
    :
    ethertype{YType::str, "ethertype"}
    	,
    dest(std::make_shared<Native::Mac::AccessList::Extended::Deny::Dest>())
	,source(std::make_shared<Native::Mac::AccessList::Extended::Deny::Source>())
{
    dest->parent = this;

    source->parent = this;

    yang_name = "deny"; yang_parent_name = "extended";
}

Native::Mac::AccessList::Extended::Deny::~Deny()
{
}

bool Native::Mac::AccessList::Extended::Deny::has_data() const
{
    return ethertype.is_set
	|| (dest !=  nullptr && dest->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Mac::AccessList::Extended::Deny::has_operation() const
{
    return is_set(operation)
	|| is_set(ethertype.operation)
	|| (dest !=  nullptr && dest->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Mac::AccessList::Extended::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";

    return path_buffer.str();

}

const EntityPath Native::Mac::AccessList::Extended::Deny::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Deny' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethertype.is_set || is_set(ethertype.operation)) leaf_name_data.push_back(ethertype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mac::AccessList::Extended::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dest")
    {
        if(dest == nullptr)
        {
            dest = std::make_shared<Native::Mac::AccessList::Extended::Deny::Dest>();
        }
        return dest;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Mac::AccessList::Extended::Deny::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::Extended::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dest != nullptr)
    {
        children["dest"] = dest;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Mac::AccessList::Extended::Deny::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ethertype")
    {
        ethertype = value;
    }
}

Native::Mac::AccessList::Extended::Deny::Source::Source()
    :
    any{YType::empty, "any"},
    host{YType::str, "host"},
    mac_address{YType::str, "mac-address"}
{
    yang_name = "source"; yang_parent_name = "deny";
}

Native::Mac::AccessList::Extended::Deny::Source::~Source()
{
}

bool Native::Mac::AccessList::Extended::Deny::Source::has_data() const
{
    return any.is_set
	|| host.is_set
	|| mac_address.is_set;
}

bool Native::Mac::AccessList::Extended::Deny::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(any.operation)
	|| is_set(host.operation)
	|| is_set(mac_address.operation);
}

std::string Native::Mac::AccessList::Extended::Deny::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Mac::AccessList::Extended::Deny::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.operation)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mac::AccessList::Extended::Deny::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::Extended::Deny::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mac::AccessList::Extended::Deny::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "any")
    {
        any = value;
    }
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
}

Native::Mac::AccessList::Extended::Deny::Dest::Dest()
    :
    any{YType::empty, "any"},
    host{YType::str, "host"},
    mac_address{YType::str, "mac-address"}
{
    yang_name = "dest"; yang_parent_name = "deny";
}

Native::Mac::AccessList::Extended::Deny::Dest::~Dest()
{
}

bool Native::Mac::AccessList::Extended::Deny::Dest::has_data() const
{
    return any.is_set
	|| host.is_set
	|| mac_address.is_set;
}

bool Native::Mac::AccessList::Extended::Deny::Dest::has_operation() const
{
    return is_set(operation)
	|| is_set(any.operation)
	|| is_set(host.operation)
	|| is_set(mac_address.operation);
}

std::string Native::Mac::AccessList::Extended::Deny::Dest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest";

    return path_buffer.str();

}

const EntityPath Native::Mac::AccessList::Extended::Deny::Dest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.operation)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mac::AccessList::Extended::Deny::Dest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::Extended::Deny::Dest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mac::AccessList::Extended::Deny::Dest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "any")
    {
        any = value;
    }
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
}

Native::Mac::AccessList::Extended::Permit::Permit()
    :
    ethertype{YType::str, "ethertype"}
    	,
    dest(std::make_shared<Native::Mac::AccessList::Extended::Permit::Dest>())
	,source(std::make_shared<Native::Mac::AccessList::Extended::Permit::Source>())
{
    dest->parent = this;

    source->parent = this;

    yang_name = "permit"; yang_parent_name = "extended";
}

Native::Mac::AccessList::Extended::Permit::~Permit()
{
}

bool Native::Mac::AccessList::Extended::Permit::has_data() const
{
    return ethertype.is_set
	|| (dest !=  nullptr && dest->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Mac::AccessList::Extended::Permit::has_operation() const
{
    return is_set(operation)
	|| is_set(ethertype.operation)
	|| (dest !=  nullptr && dest->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Mac::AccessList::Extended::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

const EntityPath Native::Mac::AccessList::Extended::Permit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethertype.is_set || is_set(ethertype.operation)) leaf_name_data.push_back(ethertype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mac::AccessList::Extended::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dest")
    {
        if(dest == nullptr)
        {
            dest = std::make_shared<Native::Mac::AccessList::Extended::Permit::Dest>();
        }
        return dest;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Mac::AccessList::Extended::Permit::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::Extended::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dest != nullptr)
    {
        children["dest"] = dest;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Mac::AccessList::Extended::Permit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ethertype")
    {
        ethertype = value;
    }
}

Native::Mac::AccessList::Extended::Permit::Source::Source()
    :
    any{YType::empty, "any"},
    host{YType::str, "host"},
    mac_address{YType::str, "mac-address"}
{
    yang_name = "source"; yang_parent_name = "permit";
}

Native::Mac::AccessList::Extended::Permit::Source::~Source()
{
}

bool Native::Mac::AccessList::Extended::Permit::Source::has_data() const
{
    return any.is_set
	|| host.is_set
	|| mac_address.is_set;
}

bool Native::Mac::AccessList::Extended::Permit::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(any.operation)
	|| is_set(host.operation)
	|| is_set(mac_address.operation);
}

std::string Native::Mac::AccessList::Extended::Permit::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Mac::AccessList::Extended::Permit::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.operation)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mac::AccessList::Extended::Permit::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::Extended::Permit::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mac::AccessList::Extended::Permit::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "any")
    {
        any = value;
    }
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
}

Native::Mac::AccessList::Extended::Permit::Dest::Dest()
    :
    any{YType::empty, "any"},
    host{YType::str, "host"},
    mac_address{YType::str, "mac-address"}
{
    yang_name = "dest"; yang_parent_name = "permit";
}

Native::Mac::AccessList::Extended::Permit::Dest::~Dest()
{
}

bool Native::Mac::AccessList::Extended::Permit::Dest::has_data() const
{
    return any.is_set
	|| host.is_set
	|| mac_address.is_set;
}

bool Native::Mac::AccessList::Extended::Permit::Dest::has_operation() const
{
    return is_set(operation)
	|| is_set(any.operation)
	|| is_set(host.operation)
	|| is_set(mac_address.operation);
}

std::string Native::Mac::AccessList::Extended::Permit::Dest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest";

    return path_buffer.str();

}

const EntityPath Native::Mac::AccessList::Extended::Permit::Dest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.operation)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.operation)) leaf_name_data.push_back(host.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mac::AccessList::Extended::Permit::Dest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mac::AccessList::Extended::Permit::Dest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mac::AccessList::Extended::Permit::Dest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "any")
    {
        any = value;
    }
    if(value_path == "host")
    {
        host = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
}

Native::Tacacs::Tacacs()
{
    yang_name = "tacacs"; yang_parent_name = "native";
}

Native::Tacacs::~Tacacs()
{
}

bool Native::Tacacs::has_data() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Tacacs::has_operation() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Tacacs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacs";

    return path_buffer.str();

}

const EntityPath Native::Tacacs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Tacacs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        for(auto const & c : server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Tacacs::Server>();
        c->parent = this;
        server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Tacacs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Tacacs::set_value(const std::string & value_path, std::string value)
{
}

Native::Tacacs::Server::Server()
    :
    name{YType::str, "name"}
    	,
    address(std::make_shared<Native::Tacacs::Server::Address>())
	,key(std::make_shared<Native::Tacacs::Server::Key>())
{
    address->parent = this;

    key->parent = this;

    yang_name = "server"; yang_parent_name = "tacacs";
}

Native::Tacacs::Server::~Server()
{
}

bool Native::Tacacs::Server::has_data() const
{
    return name.is_set
	|| (address !=  nullptr && address->has_data())
	|| (key !=  nullptr && key->has_data());
}

bool Native::Tacacs::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Tacacs::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:server" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Tacacs::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/tacacs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Tacacs::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Tacacs::Server::Address>();
        }
        return address;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Tacacs::Server::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Tacacs::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Tacacs::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Tacacs::Server::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{
    yang_name = "address"; yang_parent_name = "server";
}

Native::Tacacs::Server::Address::~Address()
{
}

bool Native::Tacacs::Server::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Tacacs::Server::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation);
}

std::string Native::Tacacs::Server::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Tacacs::Server::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Tacacs::Server::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Tacacs::Server::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Tacacs::Server::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
}

Native::Tacacs::Server::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{
    yang_name = "key"; yang_parent_name = "server";
}

Native::Tacacs::Server::Key::~Key()
{
}

bool Native::Tacacs::Server::Key::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Tacacs::Server::Key::has_operation() const
{
    return is_set(operation)
	|| is_set(encryption.operation)
	|| is_set(key.operation);
}

std::string Native::Tacacs::Server::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

const EntityPath Native::Tacacs::Server::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Tacacs::Server::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Tacacs::Server::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Tacacs::Server::Key::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
}

const Enum::YLeaf Native::SpanningTree::ModeEnum::mst {0, "mst"};
const Enum::YLeaf Native::SpanningTree::ModeEnum::pvst {1, "pvst"};
const Enum::YLeaf Native::SpanningTree::ModeEnum::rapid_pvst {2, "rapid-pvst"};

const Enum::YLeaf Native::SpanningTree::Mst::InstanceRange::RootEnum::primary {0, "primary"};
const Enum::YLeaf Native::SpanningTree::Mst::InstanceRange::RootEnum::secondary {1, "secondary"};

const Enum::YLeaf Native::SpanningTree::Portfast::BdpuEnum::bpdufilter {0, "bpdufilter"};
const Enum::YLeaf Native::SpanningTree::Portfast::BdpuEnum::bpduguard {1, "bpduguard"};

const Enum::YLeaf Native::Track::TrackedObject::DefaultStateEnum::down {0, "down"};
const Enum::YLeaf Native::Track::TrackedObject::DefaultStateEnum::up {1, "up"};

const Enum::YLeaf Native::Track::TrackedObject::Interface::ProtocolEnum::ip {0, "ip"};
const Enum::YLeaf Native::Track::TrackedObject::Interface::ProtocolEnum::ipv6 {1, "ipv6"};
const Enum::YLeaf Native::Track::TrackedObject::Interface::ProtocolEnum::line_protocol {2, "line-protocol"};

const Enum::YLeaf Native::Track::TrackedObject::Ip::Route::MetricEnum::threshold {0, "threshold"};

const Enum::YLeaf Native::Track::TrackedObject::Ipv6::Route::MetricEnum::threshold {0, "threshold"};

const Enum::YLeaf Native::Track::TrackedObject::List::BooleanEnum::and_ {0, "and"};
const Enum::YLeaf Native::Track::TrackedObject::List::BooleanEnum::or_ {1, "or"};

const Enum::YLeaf Native::Track::TrackedObject::List::ThresholdEnum::percentage {0, "percentage"};
const Enum::YLeaf Native::Track::TrackedObject::List::ThresholdEnum::weight {1, "weight"};

const Enum::YLeaf Native::Track::TrackedObject::Default_::DefaultStateEnum::down {0, "down"};
const Enum::YLeaf Native::Track::TrackedObject::Default_::DefaultStateEnum::up {1, "up"};

const Enum::YLeaf Native::Dot1X::Credentials::Password::TypeEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Dot1X::Credentials::Password::TypeEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::ParameterMap::NameEnum::global {0, "global"};
const Enum::YLeaf Native::ParameterMap::NameEnum::gtp {1, "gtp"};

const Enum::YLeaf Native::ParameterMap::TypeEnum::cws_tunnel {0, "cws-tunnel"};
const Enum::YLeaf Native::ParameterMap::TypeEnum::inspect {1, "inspect"};
const Enum::YLeaf Native::ParameterMap::TypeEnum::inspect_global {2, "inspect-global"};
const Enum::YLeaf Native::ParameterMap::TypeEnum::webauth {3, "webauth"};
const Enum::YLeaf Native::ParameterMap::TypeEnum::inspect_vrf {4, "inspect-vrf"};
const Enum::YLeaf Native::ParameterMap::TypeEnum::inspect_zone {5, "inspect-zone"};
const Enum::YLeaf Native::ParameterMap::TypeEnum::regex {6, "regex"};
const Enum::YLeaf Native::ParameterMap::TypeEnum::authbypass {7, "authbypass"};

const Enum::YLeaf Native::ParameterMap::ParameterMapTypeEnum::webauth {0, "webauth"};
const Enum::YLeaf Native::ParameterMap::ParameterMapTypeEnum::authbypass {1, "authbypass"};

const Enum::YLeaf Native::ParameterMap::AlertEnum::off {0, "off"};
const Enum::YLeaf Native::ParameterMap::AlertEnum::on {1, "on"};

const Enum::YLeaf Native::ParameterMap::ApplicationInspectEnum::all {0, "all"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspectEnum::dns {1, "dns"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspectEnum::exec {2, "exec"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspectEnum::ftp {3, "ftp"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspectEnum::gtp {4, "gtp"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspectEnum::h323 {5, "h323"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspectEnum::http {6, "http"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspectEnum::imap {7, "imap"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspectEnum::login {8, "login"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspectEnum::msrpc {9, "msrpc"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspectEnum::netbios {10, "netbios"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspectEnum::pop3 {11, "pop3"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspectEnum::rtsp {12, "rtsp"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspectEnum::shell {13, "shell"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspectEnum::sip {14, "sip"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspectEnum::skinny {15, "skinny"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspectEnum::smtp {16, "smtp"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspectEnum::sunrpc {17, "sunrpc"};
const Enum::YLeaf Native::ParameterMap::ApplicationInspectEnum::tftp {18, "tftp"};

const Enum::YLeaf Native::ParameterMap::AuditTrailEnum::off {0, "off"};
const Enum::YLeaf Native::ParameterMap::AuditTrailEnum::on {1, "on"};

const Enum::YLeaf Native::ParameterMap::ZoneMismatchEnum::drop {0, "drop"};

const Enum::YLeaf Native::Tacacs::Server::Key::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Tacacs::Server::Key::EncryptionEnum::Y_7 {1, "7"};


}
}

