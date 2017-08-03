
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_87.hpp"
#include "Cisco_IOS_XE_native_139.hpp"
#include "Cisco_IOS_XE_native_116.hpp"
#include "Cisco_IOS_XE_native_158.hpp"
#include "Cisco_IOS_XE_native_113.hpp"
#include "Cisco_IOS_XE_native_118.hpp"
#include "Cisco_IOS_XE_native_165.hpp"
#include "Cisco_IOS_XE_native_160.hpp"
#include "Cisco_IOS_XE_native_98.hpp"
#include "Cisco_IOS_XE_native_88.hpp"
#include "Cisco_IOS_XE_native_120.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "unnumbered-interface";
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::AtmAcrsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/p2p/config/unnumbered-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::AtmAcrsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::AtmAcrsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::AtmAcrsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "unnumbered-interface";
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LispSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/p2p/config/unnumbered-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LispSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LispSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LispSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "unnumbered-interface";
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/p2p/config/unnumbered-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::TunnelNum()
    :
    min_max(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax>())
{
    min_max->parent = this;

    yang_name = "tunnel-num"; yang_parent_name = "p2p";
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::~TunnelNum()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::has_data() const
{
    return (min_max !=  nullptr && min_max->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::has_operation() const
{
    return is_set(yfilter)
	|| (min_max !=  nullptr && min_max->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-num";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/p2p/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min-max")
    {
        if(min_max == nullptr)
        {
            min_max = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax>();
        }
        return min_max;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min_max != nullptr)
    {
        children["min-max"] = min_max;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-max")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax::MinMax()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "min-max"; yang_parent_name = "tunnel-num";
}

Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax::~MinMax()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-max";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/p2p/tunnel-num/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum::MinMax::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Primary()
    :
    onehop{YType::empty, "onehop"}
    	,
    config(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config>())
	,timers(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers>())
	,tunnel_num(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum>())
{
    config->parent = this;

    timers->parent = this;

    tunnel_num->parent = this;

    yang_name = "primary"; yang_parent_name = "auto-tunnel";
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::~Primary()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::has_data() const
{
    return onehop.is_set
	|| (config !=  nullptr && config->has_data())
	|| (timers !=  nullptr && timers->has_data())
	|| (tunnel_num !=  nullptr && tunnel_num->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(onehop.yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (timers !=  nullptr && timers->has_operation())
	|| (tunnel_num !=  nullptr && tunnel_num->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Primary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (onehop.is_set || is_set(onehop.yfilter)) leaf_name_data.push_back(onehop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config>();
        }
        return config;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers>();
        }
        return timers;
    }

    if(child_yang_name == "tunnel-num")
    {
        if(tunnel_num == nullptr)
        {
            tunnel_num = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum>();
        }
        return tunnel_num;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    if(tunnel_num != nullptr)
    {
        children["tunnel-num"] = tunnel_num;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "onehop")
    {
        onehop = value;
        onehop.value_namespace = name_space;
        onehop.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "onehop")
    {
        onehop.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "timers" || name == "tunnel-num" || name == "onehop")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Config()
    :
    mpls(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_>())
	,unnumbered_interface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface>())
{
    mpls->parent = this;

    unnumbered_interface->parent = this;

    yang_name = "config"; yang_parent_name = "primary";
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::~Config()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::has_data() const
{
    return (mpls !=  nullptr && mpls->has_data())
	|| (unnumbered_interface !=  nullptr && unnumbered_interface->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::has_operation() const
{
    return is_set(yfilter)
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (unnumbered_interface !=  nullptr && unnumbered_interface->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_>();
        }
        return mpls;
    }

    if(child_yang_name == "unnumbered-interface")
    {
        if(unnumbered_interface == nullptr)
        {
            unnumbered_interface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface>();
        }
        return unnumbered_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(unnumbered_interface != nullptr)
    {
        children["unnumbered-interface"] = unnumbered_interface;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls" || name == "unnumbered-interface")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::Mpls_()
    :
    ip{YType::empty, "ip"}
{
    yang_name = "mpls"; yang_parent_name = "config";
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::~Mpls_()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::has_data() const
{
    return ip.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::Mpls_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::UnnumberedInterface()
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
    lisp{YType::str, "LISP"},
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
    atm_acrsubinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "unnumbered-interface"; yang_parent_name = "config";
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::~UnnumberedInterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::has_data() const
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

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-interface";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::get_children() const
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

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "unnumbered-interface";
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::AtmSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/config/unnumbered-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::AtmSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::AtmSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::AtmSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "unnumbered-interface";
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::AtmAcrsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/config/unnumbered-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::AtmAcrsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::AtmAcrsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::AtmAcrsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "unnumbered-interface";
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LispSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/config/unnumbered-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LispSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LispSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::LispSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "unnumbered-interface";
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/config/unnumbered-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Config::UnnumberedInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Timers()
    :
    removal(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal>())
{
    removal->parent = this;

    yang_name = "timers"; yang_parent_name = "primary";
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::~Timers()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::has_data() const
{
    return (removal !=  nullptr && removal->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::has_operation() const
{
    return is_set(yfilter)
	|| (removal !=  nullptr && removal->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "removal")
    {
        if(removal == nullptr)
        {
            removal = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal>();
        }
        return removal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(removal != nullptr)
    {
        children["removal"] = removal;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "removal")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::Removal()
    :
    rerouted{YType::uint32, "rerouted"}
{
    yang_name = "removal"; yang_parent_name = "timers";
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::~Removal()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::has_data() const
{
    return rerouted.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rerouted.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removal";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/timers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rerouted.is_set || is_set(rerouted.yfilter)) leaf_name_data.push_back(rerouted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rerouted")
    {
        rerouted = value;
        rerouted.value_namespace = name_space;
        rerouted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rerouted")
    {
        rerouted.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::Timers::Removal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rerouted")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::TunnelNum()
    :
    min_max(std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax>())
{
    min_max->parent = this;

    yang_name = "tunnel-num"; yang_parent_name = "primary";
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::~TunnelNum()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::has_data() const
{
    return (min_max !=  nullptr && min_max->has_data());
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::has_operation() const
{
    return is_set(yfilter)
	|| (min_max !=  nullptr && min_max->has_operation());
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-num";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min-max")
    {
        if(min_max == nullptr)
        {
            min_max = std::make_shared<Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax>();
        }
        return min_max;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min_max != nullptr)
    {
        children["min-max"] = min_max;
    }

    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min-max")
        return true;
    return false;
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::MinMax()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{
    yang_name = "min-max"; yang_parent_name = "tunnel-num";
}

Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::~MinMax()
{
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-max";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/auto-tunnel/primary/tunnel-num/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::AutoTunnel::Primary::TunnelNum::MinMax::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Mpls::TrafficEng::DsTe::DsTe()
    :
    bc_model{YType::enumeration, "bc-model"},
    mode{YType::enumeration, "mode"}
    	,
    te_classes(nullptr) // presence node
{
    yang_name = "ds-te"; yang_parent_name = "traffic-eng";
}

Native::Mpls::TrafficEng::DsTe::~DsTe()
{
}

bool Native::Mpls::TrafficEng::DsTe::has_data() const
{
    return bc_model.is_set
	|| mode.is_set
	|| (te_classes !=  nullptr && te_classes->has_data());
}

bool Native::Mpls::TrafficEng::DsTe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bc_model.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (te_classes !=  nullptr && te_classes->has_operation());
}

std::string Native::Mpls::TrafficEng::DsTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ds-te";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::DsTe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bc_model.is_set || is_set(bc_model.yfilter)) leaf_name_data.push_back(bc_model.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::DsTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-classes")
    {
        if(te_classes == nullptr)
        {
            te_classes = std::make_shared<Native::Mpls::TrafficEng::DsTe::TeClasses>();
        }
        return te_classes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::DsTe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(te_classes != nullptr)
    {
        children["te-classes"] = te_classes;
    }

    return children;
}

void Native::Mpls::TrafficEng::DsTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bc-model")
    {
        bc_model = value;
        bc_model.value_namespace = name_space;
        bc_model.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::DsTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bc-model")
    {
        bc_model.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::DsTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-classes" || name == "bc-model" || name == "mode")
        return true;
    return false;
}

Native::Mpls::TrafficEng::DsTe::TeClasses::TeClasses()
{
    yang_name = "te-classes"; yang_parent_name = "ds-te";
}

Native::Mpls::TrafficEng::DsTe::TeClasses::~TeClasses()
{
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::has_data() const
{
    for (std::size_t index=0; index<te_class.size(); index++)
    {
        if(te_class[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::has_operation() const
{
    for (std::size_t index=0; index<te_class.size(); index++)
    {
        if(te_class[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::TrafficEng::DsTe::TeClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-classes";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::DsTe::TeClasses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/ds-te/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::DsTe::TeClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-class")
    {
        for(auto const & c : te_class)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass>();
        c->parent = this;
        te_class.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::DsTe::TeClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : te_class)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::TrafficEng::DsTe::TeClasses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::DsTe::TeClasses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-class")
        return true;
    return false;
}

Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::TeClass()
    :
    te_idx{YType::uint8, "te-idx"},
    unused{YType::empty, "unused"}
    	,
    class_type(std::make_shared<Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType>())
{
    class_type->parent = this;

    yang_name = "te-class"; yang_parent_name = "te-classes";
}

Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::~TeClass()
{
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::has_data() const
{
    return te_idx.is_set
	|| unused.is_set
	|| (class_type !=  nullptr && class_type->has_data());
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_idx.yfilter)
	|| ydk::is_set(unused.yfilter)
	|| (class_type !=  nullptr && class_type->has_operation());
}

std::string Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-class" <<"[te-idx='" <<te_idx <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/ds-te/te-classes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_idx.is_set || is_set(te_idx.yfilter)) leaf_name_data.push_back(te_idx.get_name_leafdata());
    if (unused.is_set || is_set(unused.yfilter)) leaf_name_data.push_back(unused.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-type")
    {
        if(class_type == nullptr)
        {
            class_type = std::make_shared<Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType>();
        }
        return class_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(class_type != nullptr)
    {
        children["class-type"] = class_type;
    }

    return children;
}

void Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-idx")
    {
        te_idx = value;
        te_idx.value_namespace = name_space;
        te_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unused")
    {
        unused = value;
        unused.value_namespace = name_space;
        unused.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-idx")
    {
        te_idx.yfilter = yfilter;
    }
    if(value_path == "unused")
    {
        unused.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-type" || name == "te-idx" || name == "unused")
        return true;
    return false;
}

Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::ClassType()
    :
    priority{YType::uint8, "priority"},
    type{YType::uint8, "type"}
{
    yang_name = "class-type"; yang_parent_name = "te-class";
}

Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::~ClassType()
{
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::has_data() const
{
    return priority.is_set
	|| type.is_set;
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-type";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassType' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::DsTe::TeClasses::TeClass::ClassType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "type")
        return true;
    return false;
}

Native::Mpls::TrafficEng::FastReroute::FastReroute()
    :
    backup_prot_preempt(std::make_shared<Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt>())
	,timers(std::make_shared<Native::Mpls::TrafficEng::FastReroute::Timers>())
{
    backup_prot_preempt->parent = this;

    timers->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "traffic-eng";
}

Native::Mpls::TrafficEng::FastReroute::~FastReroute()
{
}

bool Native::Mpls::TrafficEng::FastReroute::has_data() const
{
    return (backup_prot_preempt !=  nullptr && backup_prot_preempt->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Mpls::TrafficEng::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| (backup_prot_preempt !=  nullptr && backup_prot_preempt->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Mpls::TrafficEng::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-prot-preempt")
    {
        if(backup_prot_preempt == nullptr)
        {
            backup_prot_preempt = std::make_shared<Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt>();
        }
        return backup_prot_preempt;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Mpls::TrafficEng::FastReroute::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup_prot_preempt != nullptr)
    {
        children["backup-prot-preempt"] = backup_prot_preempt;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Mpls::TrafficEng::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-prot-preempt" || name == "timers")
        return true;
    return false;
}

Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::BackupProtPreempt()
    :
    optimize_bw{YType::empty, "optimize-bw"}
{
    yang_name = "backup-prot-preempt"; yang_parent_name = "fast-reroute";
}

Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::~BackupProtPreempt()
{
}

bool Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::has_data() const
{
    return optimize_bw.is_set;
}

bool Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(optimize_bw.yfilter);
}

std::string Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-prot-preempt";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/fast-reroute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optimize_bw.is_set || is_set(optimize_bw.yfilter)) leaf_name_data.push_back(optimize_bw.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "optimize-bw")
    {
        optimize_bw = value;
        optimize_bw.value_namespace = name_space;
        optimize_bw.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "optimize-bw")
    {
        optimize_bw.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::FastReroute::BackupProtPreempt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optimize-bw")
        return true;
    return false;
}

Native::Mpls::TrafficEng::FastReroute::Timers::Timers()
    :
    promotion{YType::uint32, "promotion"}
{
    yang_name = "timers"; yang_parent_name = "fast-reroute";
}

Native::Mpls::TrafficEng::FastReroute::Timers::~Timers()
{
}

bool Native::Mpls::TrafficEng::FastReroute::Timers::has_data() const
{
    return promotion.is_set;
}

bool Native::Mpls::TrafficEng::FastReroute::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(promotion.yfilter);
}

std::string Native::Mpls::TrafficEng::FastReroute::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::FastReroute::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/fast-reroute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (promotion.is_set || is_set(promotion.yfilter)) leaf_name_data.push_back(promotion.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::FastReroute::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::FastReroute::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::FastReroute::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "promotion")
    {
        promotion = value;
        promotion.value_namespace = name_space;
        promotion.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::FastReroute::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "promotion")
    {
        promotion.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::FastReroute::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "promotion")
        return true;
    return false;
}

Native::Mpls::TrafficEng::LinkManagement::LinkManagement()
    :
    timers(std::make_shared<Native::Mpls::TrafficEng::LinkManagement::Timers>())
{
    timers->parent = this;

    yang_name = "link-management"; yang_parent_name = "traffic-eng";
}

Native::Mpls::TrafficEng::LinkManagement::~LinkManagement()
{
}

bool Native::Mpls::TrafficEng::LinkManagement::has_data() const
{
    return (timers !=  nullptr && timers->has_data());
}

bool Native::Mpls::TrafficEng::LinkManagement::has_operation() const
{
    return is_set(yfilter)
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Mpls::TrafficEng::LinkManagement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-management";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::LinkManagement::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::LinkManagement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Mpls::TrafficEng::LinkManagement::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::LinkManagement::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Mpls::TrafficEng::LinkManagement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::LinkManagement::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::LinkManagement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timers")
        return true;
    return false;
}

Native::Mpls::TrafficEng::LinkManagement::Timers::Timers()
    :
    bandwidth_hold{YType::uint16, "bandwidth-hold"},
    periodic_flooding{YType::uint16, "periodic-flooding"}
{
    yang_name = "timers"; yang_parent_name = "link-management";
}

Native::Mpls::TrafficEng::LinkManagement::Timers::~Timers()
{
}

bool Native::Mpls::TrafficEng::LinkManagement::Timers::has_data() const
{
    return bandwidth_hold.is_set
	|| periodic_flooding.is_set;
}

bool Native::Mpls::TrafficEng::LinkManagement::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth_hold.yfilter)
	|| ydk::is_set(periodic_flooding.yfilter);
}

std::string Native::Mpls::TrafficEng::LinkManagement::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::LinkManagement::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/link-management/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_hold.is_set || is_set(bandwidth_hold.yfilter)) leaf_name_data.push_back(bandwidth_hold.get_name_leafdata());
    if (periodic_flooding.is_set || is_set(periodic_flooding.yfilter)) leaf_name_data.push_back(periodic_flooding.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::LinkManagement::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::LinkManagement::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::LinkManagement::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth-hold")
    {
        bandwidth_hold = value;
        bandwidth_hold.value_namespace = name_space;
        bandwidth_hold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic-flooding")
    {
        periodic_flooding = value;
        periodic_flooding.value_namespace = name_space;
        periodic_flooding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::LinkManagement::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth-hold")
    {
        bandwidth_hold.yfilter = yfilter;
    }
    if(value_path == "periodic-flooding")
    {
        periodic_flooding.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::LinkManagement::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth-hold" || name == "periodic-flooding")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Logging()
    :
    lsp(std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp>())
	,tunnel(std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel>())
{
    lsp->parent = this;

    tunnel->parent = this;

    yang_name = "logging"; yang_parent_name = "traffic-eng";
}

Native::Mpls::TrafficEng::Logging::~Logging()
{
}

bool Native::Mpls::TrafficEng::Logging::has_data() const
{
    return (lsp !=  nullptr && lsp->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool Native::Mpls::TrafficEng::Logging::has_operation() const
{
    return is_set(yfilter)
	|| (lsp !=  nullptr && lsp->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string Native::Mpls::TrafficEng::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp")
    {
        if(lsp == nullptr)
        {
            lsp = std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp>();
        }
        return lsp;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel>();
        }
        return tunnel;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp != nullptr)
    {
        children["lsp"] = lsp;
    }

    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    return children;
}

void Native::Mpls::TrafficEng::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp" || name == "tunnel")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Lsp::Lsp()
    :
    path_errors(nullptr) // presence node
	,preemption(nullptr) // presence node
	,reservation_errors(nullptr) // presence node
	,setups(nullptr) // presence node
	,teardowns(nullptr) // presence node
{
    yang_name = "lsp"; yang_parent_name = "logging";
}

Native::Mpls::TrafficEng::Logging::Lsp::~Lsp()
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::has_data() const
{
    return (path_errors !=  nullptr && path_errors->has_data())
	|| (preemption !=  nullptr && preemption->has_data())
	|| (reservation_errors !=  nullptr && reservation_errors->has_data())
	|| (setups !=  nullptr && setups->has_data())
	|| (teardowns !=  nullptr && teardowns->has_data());
}

bool Native::Mpls::TrafficEng::Logging::Lsp::has_operation() const
{
    return is_set(yfilter)
	|| (path_errors !=  nullptr && path_errors->has_operation())
	|| (preemption !=  nullptr && preemption->has_operation())
	|| (reservation_errors !=  nullptr && reservation_errors->has_operation())
	|| (setups !=  nullptr && setups->has_operation())
	|| (teardowns !=  nullptr && teardowns->has_operation());
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Logging::Lsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-errors")
    {
        if(path_errors == nullptr)
        {
            path_errors = std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp::PathErrors>();
        }
        return path_errors;
    }

    if(child_yang_name == "preemption")
    {
        if(preemption == nullptr)
        {
            preemption = std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp::Preemption>();
        }
        return preemption;
    }

    if(child_yang_name == "reservation-errors")
    {
        if(reservation_errors == nullptr)
        {
            reservation_errors = std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors>();
        }
        return reservation_errors;
    }

    if(child_yang_name == "setups")
    {
        if(setups == nullptr)
        {
            setups = std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp::Setups>();
        }
        return setups;
    }

    if(child_yang_name == "teardowns")
    {
        if(teardowns == nullptr)
        {
            teardowns = std::make_shared<Native::Mpls::TrafficEng::Logging::Lsp::Teardowns>();
        }
        return teardowns;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Lsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path_errors != nullptr)
    {
        children["path-errors"] = path_errors;
    }

    if(preemption != nullptr)
    {
        children["preemption"] = preemption;
    }

    if(reservation_errors != nullptr)
    {
        children["reservation-errors"] = reservation_errors;
    }

    if(setups != nullptr)
    {
        children["setups"] = setups;
    }

    if(teardowns != nullptr)
    {
        children["teardowns"] = teardowns;
    }

    return children;
}

void Native::Mpls::TrafficEng::Logging::Lsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Logging::Lsp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-errors" || name == "preemption" || name == "reservation-errors" || name == "setups" || name == "teardowns")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::PathErrors()
    :
    access_list{YType::str, "access-list"}
{
    yang_name = "path-errors"; yang_parent_name = "lsp";
}

Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::~PathErrors()
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::has_data() const
{
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-errors";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Logging::Lsp::PathErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Lsp::Preemption::Preemption()
    :
    access_list{YType::str, "access-list"}
{
    yang_name = "preemption"; yang_parent_name = "lsp";
}

Native::Mpls::TrafficEng::Logging::Lsp::Preemption::~Preemption()
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Preemption::has_data() const
{
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Preemption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::Preemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preemption";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Logging::Lsp::Preemption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Lsp::Preemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Lsp::Preemption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Logging::Lsp::Preemption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Logging::Lsp::Preemption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Preemption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::ReservationErrors()
    :
    access_list{YType::str, "access-list"}
{
    yang_name = "reservation-errors"; yang_parent_name = "lsp";
}

Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::~ReservationErrors()
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::has_data() const
{
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reservation-errors";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Logging::Lsp::ReservationErrors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Lsp::Setups::Setups()
    :
    access_list{YType::str, "access-list"}
{
    yang_name = "setups"; yang_parent_name = "lsp";
}

Native::Mpls::TrafficEng::Logging::Lsp::Setups::~Setups()
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Setups::has_data() const
{
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Setups::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::Setups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "setups";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Logging::Lsp::Setups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Lsp::Setups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Lsp::Setups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Logging::Lsp::Setups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Logging::Lsp::Setups::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Setups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::Teardowns()
    :
    access_list{YType::str, "access-list"}
{
    yang_name = "teardowns"; yang_parent_name = "lsp";
}

Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::~Teardowns()
{
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::has_data() const
{
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "teardowns";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Logging::Lsp::Teardowns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Tunnel::Tunnel()
    :
    lsp_selection(nullptr) // presence node
	,lsp_switchover(nullptr) // presence node
	,path(std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel::Path>())
{
    path->parent = this;

    yang_name = "tunnel"; yang_parent_name = "logging";
}

Native::Mpls::TrafficEng::Logging::Tunnel::~Tunnel()
{
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::has_data() const
{
    return (lsp_selection !=  nullptr && lsp_selection->has_data())
	|| (lsp_switchover !=  nullptr && lsp_switchover->has_data())
	|| (path !=  nullptr && path->has_data());
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| (lsp_selection !=  nullptr && lsp_selection->has_operation())
	|| (lsp_switchover !=  nullptr && lsp_switchover->has_operation())
	|| (path !=  nullptr && path->has_operation());
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Logging::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-selection")
    {
        if(lsp_selection == nullptr)
        {
            lsp_selection = std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection>();
        }
        return lsp_selection;
    }

    if(child_yang_name == "lsp-switchover")
    {
        if(lsp_switchover == nullptr)
        {
            lsp_switchover = std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover>();
        }
        return lsp_switchover;
    }

    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel::Path>();
        }
        return path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lsp_selection != nullptr)
    {
        children["lsp-selection"] = lsp_selection;
    }

    if(lsp_switchover != nullptr)
    {
        children["lsp-switchover"] = lsp_switchover;
    }

    if(path != nullptr)
    {
        children["path"] = path;
    }

    return children;
}

void Native::Mpls::TrafficEng::Logging::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Logging::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-selection" || name == "lsp-switchover" || name == "path")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::LspSelection()
    :
    access_list{YType::str, "access-list"}
{
    yang_name = "lsp-selection"; yang_parent_name = "tunnel";
}

Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::~LspSelection()
{
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::has_data() const
{
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-selection";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::LspSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::LspSwitchover()
    :
    access_list{YType::str, "access-list"}
{
    yang_name = "lsp-switchover"; yang_parent_name = "tunnel";
}

Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::~LspSwitchover()
{
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::has_data() const
{
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-switchover";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::LspSwitchover::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Tunnel::Path::Path()
    :
    change(nullptr) // presence node
{
    yang_name = "path"; yang_parent_name = "tunnel";
}

Native::Mpls::TrafficEng::Logging::Tunnel::Path::~Path()
{
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::Path::has_data() const
{
    return (change !=  nullptr && change->has_data());
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::Path::has_operation() const
{
    return is_set(yfilter)
	|| (change !=  nullptr && change->has_operation());
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Logging::Tunnel::Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Tunnel::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "change")
    {
        if(change == nullptr)
        {
            change = std::make_shared<Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change>();
        }
        return change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Tunnel::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(change != nullptr)
    {
        children["change"] = change;
    }

    return children;
}

void Native::Mpls::TrafficEng::Logging::Tunnel::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Logging::Tunnel::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::Change()
    :
    access_list{YType::str, "access-list"}
{
    yang_name = "change"; yang_parent_name = "path";
}

Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::~Change()
{
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::has_data() const
{
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/logging/tunnel/path/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Logging::Tunnel::Path::Change::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Lsp()
{
    yang_name = "lsp"; yang_parent_name = "traffic-eng";
}

Native::Mpls::TrafficEng::Lsp::~Lsp()
{
}

bool Native::Mpls::TrafficEng::Lsp::has_data() const
{
    for (std::size_t index=0; index<attributes.size(); index++)
    {
        if(attributes[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::TrafficEng::Lsp::has_operation() const
{
    for (std::size_t index=0; index<attributes.size(); index++)
    {
        if(attributes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attributes")
    {
        for(auto const & c : attributes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes>();
        c->parent = this;
        attributes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : attributes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::TrafficEng::Lsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Lsp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Lsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attributes")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::Attributes()
    :
    name{YType::str, "name"}
    	,
    mpls_te_mode_config_lsp_attr(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr>())
{
    mpls_te_mode_config_lsp_attr->parent = this;

    yang_name = "attributes"; yang_parent_name = "lsp";
}

Native::Mpls::TrafficEng::Lsp::Attributes::~Attributes()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::has_data() const
{
    return name.is_set
	|| (mpls_te_mode_config_lsp_attr !=  nullptr && mpls_te_mode_config_lsp_attr->has_data());
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (mpls_te_mode_config_lsp_attr !=  nullptr && mpls_te_mode_config_lsp_attr->has_operation());
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/lsp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-te-mode-config-lsp-attr")
    {
        if(mpls_te_mode_config_lsp_attr == nullptr)
        {
            mpls_te_mode_config_lsp_attr = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr>();
        }
        return mpls_te_mode_config_lsp_attr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls_te_mode_config_lsp_attr != nullptr)
    {
        children["mpls-te-mode-config-lsp-attr"] = mpls_te_mode_config_lsp_attr;
    }

    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-te-mode-config-lsp-attr" || name == "name")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::MplsTeModeConfigLspAttr()
    :
    record_route{YType::empty, "record-route"}
    	,
    affinity_mask(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask>())
	,auto_bw(nullptr) // presence node
	,bandwidth(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth>())
	,bfd_reverse_path(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath>())
	,lockdown(nullptr) // presence node
	,path_selection(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection>())
	,pce(nullptr) // presence node
	,priority(nullptr) // presence node
	,protection(nullptr) // presence node
{
    affinity_mask->parent = this;

    bandwidth->parent = this;

    bfd_reverse_path->parent = this;

    path_selection->parent = this;

    yang_name = "mpls-te-mode-config-lsp-attr"; yang_parent_name = "attributes";
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::~MplsTeModeConfigLspAttr()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::has_data() const
{
    return record_route.is_set
	|| (affinity_mask !=  nullptr && affinity_mask->has_data())
	|| (auto_bw !=  nullptr && auto_bw->has_data())
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_data())
	|| (lockdown !=  nullptr && lockdown->has_data())
	|| (path_selection !=  nullptr && path_selection->has_data())
	|| (pce !=  nullptr && pce->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (protection !=  nullptr && protection->has_data());
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| (affinity_mask !=  nullptr && affinity_mask->has_operation())
	|| (auto_bw !=  nullptr && auto_bw->has_operation())
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_operation())
	|| (lockdown !=  nullptr && lockdown->has_operation())
	|| (path_selection !=  nullptr && path_selection->has_operation())
	|| (pce !=  nullptr && pce->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (protection !=  nullptr && protection->has_operation());
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-te-mode-config-lsp-attr";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsTeModeConfigLspAttr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity-mask")
    {
        if(affinity_mask == nullptr)
        {
            affinity_mask = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask>();
        }
        return affinity_mask;
    }

    if(child_yang_name == "auto-bw")
    {
        if(auto_bw == nullptr)
        {
            auto_bw = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw>();
        }
        return auto_bw;
    }

    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path == nullptr)
        {
            bfd_reverse_path = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath>();
        }
        return bfd_reverse_path;
    }

    if(child_yang_name == "lockdown")
    {
        if(lockdown == nullptr)
        {
            lockdown = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown>();
        }
        return lockdown;
    }

    if(child_yang_name == "path-selection")
    {
        if(path_selection == nullptr)
        {
            path_selection = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection>();
        }
        return path_selection;
    }

    if(child_yang_name == "pce")
    {
        if(pce == nullptr)
        {
            pce = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce>();
        }
        return pce;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection>();
        }
        return protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity_mask != nullptr)
    {
        children["affinity-mask"] = affinity_mask;
    }

    if(auto_bw != nullptr)
    {
        children["auto-bw"] = auto_bw;
    }

    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(bfd_reverse_path != nullptr)
    {
        children["bfd-reverse-path"] = bfd_reverse_path;
    }

    if(lockdown != nullptr)
    {
        children["lockdown"] = lockdown;
    }

    if(path_selection != nullptr)
    {
        children["path-selection"] = path_selection;
    }

    if(pce != nullptr)
    {
        children["pce"] = pce;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity-mask" || name == "auto-bw" || name == "bandwidth" || name == "bfd-reverse-path" || name == "lockdown" || name == "path-selection" || name == "pce" || name == "priority" || name == "protection" || name == "record-route")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::AffinityMask()
    :
    affinity{YType::str, "affinity"},
    mask{YType::str, "mask"}
{
    yang_name = "affinity-mask"; yang_parent_name = "mpls-te-mode-config-lsp-attr";
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::~AffinityMask()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::has_data() const
{
    return affinity.is_set
	|| mask.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(affinity.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-mask";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AffinityMask' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity.is_set || is_set(affinity.yfilter)) leaf_name_data.push_back(affinity.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity")
    {
        affinity = value;
        affinity.value_namespace = name_space;
        affinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity")
    {
        affinity.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AffinityMask::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "mask")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::AutoBw()
    :
    adjustment_threshold{YType::uint8, "adjustment-threshold"},
    collect_bw{YType::empty, "collect-bw"},
    frequency{YType::uint32, "frequency"},
    max_bw{YType::uint32, "max-bw"},
    min_bw{YType::uint32, "min-bw"}
    	,
    overflow_limit(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit>())
{
    overflow_limit->parent = this;

    yang_name = "auto-bw"; yang_parent_name = "mpls-te-mode-config-lsp-attr";
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::~AutoBw()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::has_data() const
{
    return adjustment_threshold.is_set
	|| collect_bw.is_set
	|| frequency.is_set
	|| max_bw.is_set
	|| min_bw.is_set
	|| (overflow_limit !=  nullptr && overflow_limit->has_data());
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjustment_threshold.yfilter)
	|| ydk::is_set(collect_bw.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(max_bw.yfilter)
	|| ydk::is_set(min_bw.yfilter)
	|| (overflow_limit !=  nullptr && overflow_limit->has_operation());
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-bw";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoBw' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjustment_threshold.is_set || is_set(adjustment_threshold.yfilter)) leaf_name_data.push_back(adjustment_threshold.get_name_leafdata());
    if (collect_bw.is_set || is_set(collect_bw.yfilter)) leaf_name_data.push_back(collect_bw.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (max_bw.is_set || is_set(max_bw.yfilter)) leaf_name_data.push_back(max_bw.get_name_leafdata());
    if (min_bw.is_set || is_set(min_bw.yfilter)) leaf_name_data.push_back(min_bw.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "overflow-limit")
    {
        if(overflow_limit == nullptr)
        {
            overflow_limit = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit>();
        }
        return overflow_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(overflow_limit != nullptr)
    {
        children["overflow-limit"] = overflow_limit;
    }

    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjustment-threshold")
    {
        adjustment_threshold = value;
        adjustment_threshold.value_namespace = name_space;
        adjustment_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collect-bw")
    {
        collect_bw = value;
        collect_bw.value_namespace = name_space;
        collect_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bw")
    {
        max_bw = value;
        max_bw.value_namespace = name_space;
        max_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-bw")
    {
        min_bw = value;
        min_bw.value_namespace = name_space;
        min_bw.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjustment-threshold")
    {
        adjustment_threshold.yfilter = yfilter;
    }
    if(value_path == "collect-bw")
    {
        collect_bw.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "max-bw")
    {
        max_bw.yfilter = yfilter;
    }
    if(value_path == "min-bw")
    {
        min_bw.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "overflow-limit" || name == "adjustment-threshold" || name == "collect-bw" || name == "frequency" || name == "max-bw" || name == "min-bw")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::OverflowLimit()
    :
    limit{YType::uint8, "limit"},
    overflow_threshold{YType::uint8, "overflow-threshold"}
{
    yang_name = "overflow-limit"; yang_parent_name = "auto-bw";
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::~OverflowLimit()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::has_data() const
{
    return limit.is_set
	|| overflow_threshold.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(overflow_threshold.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overflow-limit";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OverflowLimit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (overflow_threshold.is_set || is_set(overflow_threshold.yfilter)) leaf_name_data.push_back(overflow_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overflow-threshold")
    {
        overflow_threshold = value;
        overflow_threshold.value_namespace = name_space;
        overflow_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "overflow-threshold")
    {
        overflow_threshold.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::AutoBw::OverflowLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "overflow-threshold")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::Bandwidth()
    :
    bw{YType::uint32, "bw"},
    sub_pool{YType::uint32, "sub-pool"}
{
    yang_name = "bandwidth"; yang_parent_name = "mpls-te-mode-config-lsp-attr";
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::~Bandwidth()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::has_data() const
{
    return bw.is_set
	|| sub_pool.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bw.yfilter)
	|| ydk::is_set(sub_pool.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bandwidth' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (sub_pool.is_set || is_set(sub_pool.yfilter)) leaf_name_data.push_back(sub_pool.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw")
    {
        bw = value;
        bw.value_namespace = name_space;
        bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-pool")
    {
        sub_pool = value;
        sub_pool.value_namespace = name_space;
        sub_pool.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw")
    {
        bw.yfilter = yfilter;
    }
    if(value_path == "sub-pool")
    {
        sub_pool.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw" || name == "sub-pool")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::BfdReversePath()
    :
    binding_label{YType::uint32, "binding-label"}
{
    yang_name = "bfd-reverse-path"; yang_parent_name = "mpls-te-mode-config-lsp-attr";
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::~BfdReversePath()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::has_data() const
{
    return binding_label.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(binding_label.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BfdReversePath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::BfdReversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-label")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::Lockdown()
    :
    sticky{YType::empty, "sticky"}
{
    yang_name = "lockdown"; yang_parent_name = "mpls-te-mode-config-lsp-attr";
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::~Lockdown()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::has_data() const
{
    return sticky.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sticky.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lockdown";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lockdown' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sticky.is_set || is_set(sticky.yfilter)) leaf_name_data.push_back(sticky.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sticky")
    {
        sticky = value;
        sticky.value_namespace = name_space;
        sticky.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sticky")
    {
        sticky.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Lockdown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sticky")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::PathSelection()
    :
    metric{YType::enumeration, "metric"}
    	,
    invalidation(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation>())
	,segment_routing(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting>())
{
    invalidation->parent = this;

    segment_routing->parent = this;

    yang_name = "path-selection"; yang_parent_name = "mpls-te-mode-config-lsp-attr";
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::~PathSelection()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::has_data() const
{
    return metric.is_set
	|| (invalidation !=  nullptr && invalidation->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data());
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| (invalidation !=  nullptr && invalidation->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation());
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathSelection' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalidation")
    {
        if(invalidation == nullptr)
        {
            invalidation = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation>();
        }
        return invalidation;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting>();
        }
        return segment_routing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(invalidation != nullptr)
    {
        children["invalidation"] = invalidation;
    }

    if(segment_routing != nullptr)
    {
        children["segment-routing"] = segment_routing;
    }

    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalidation" || name == "segment-routing" || name == "metric")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::Invalidation()
    :
    drop{YType::empty, "drop"},
    value_{YType::int32, "value"}
{
    yang_name = "invalidation"; yang_parent_name = "path-selection";
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::~Invalidation()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::has_data() const
{
    return drop.is_set
	|| value_.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Invalidation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Invalidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop" || name == "value")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::SegmentRouting()
    :
    adjacency{YType::enumeration, "adjacency"}
{
    yang_name = "segment-routing"; yang_parent_name = "path-selection";
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::~SegmentRouting()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::has_data() const
{
    return adjacency.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SegmentRouting' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency.is_set || is_set(adjacency.yfilter)) leaf_name_data.push_back(adjacency.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency")
    {
        adjacency = value;
        adjacency.value_namespace = name_space;
        adjacency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency")
    {
        adjacency.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::Pce()
    :
    disjoint_path(std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath>())
{
    disjoint_path->parent = this;

    yang_name = "pce"; yang_parent_name = "mpls-te-mode-config-lsp-attr";
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::~Pce()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::has_data() const
{
    return (disjoint_path !=  nullptr && disjoint_path->has_data());
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::has_operation() const
{
    return is_set(yfilter)
	|| (disjoint_path !=  nullptr && disjoint_path->has_operation());
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pce";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pce' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disjoint-path")
    {
        if(disjoint_path == nullptr)
        {
            disjoint_path = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath>();
        }
        return disjoint_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(disjoint_path != nullptr)
    {
        children["disjoint-path"] = disjoint_path;
    }

    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disjoint-path")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::DisjointPath()
    :
    group_id{YType::uint32, "group-id"},
    source{YType::str, "source"},
    type{YType::enumeration, "type"}
{
    yang_name = "disjoint-path"; yang_parent_name = "pce";
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::~DisjointPath()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::has_data() const
{
    return group_id.is_set
	|| source.is_set
	|| type.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disjoint-path";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DisjointPath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-id" || name == "source" || name == "type")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::Priority()
    :
    hold_priority{YType::uint8, "hold-priority"},
    setup_priority{YType::uint8, "setup-priority"}
{
    yang_name = "priority"; yang_parent_name = "mpls-te-mode-config-lsp-attr";
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::~Priority()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::has_data() const
{
    return hold_priority.is_set
	|| setup_priority.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(setup_priority.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-priority" || name == "setup-priority")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::Protection()
    :
    fast_reroute(nullptr) // presence node
{
    yang_name = "protection"; yang_parent_name = "mpls-te-mode-config-lsp-attr";
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::~Protection()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::has_data() const
{
    return (fast_reroute !=  nullptr && fast_reroute->has_data());
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::has_operation() const
{
    return is_set(yfilter)
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation());
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protection' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute>();
        }
        return fast_reroute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast-reroute")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::FastReroute()
    :
    bw_protect{YType::empty, "bw-protect"}
{
    yang_name = "fast-reroute"; yang_parent_name = "protection";
}

Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::~FastReroute()
{
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::has_data() const
{
    return bw_protect.is_set;
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bw_protect.yfilter);
}

std::string Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw_protect.is_set || is_set(bw_protect.yfilter)) leaf_name_data.push_back(bw_protect.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw-protect")
    {
        bw_protect = value;
        bw_protect.value_namespace = name_space;
        bw_protect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw-protect")
    {
        bw_protect.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Protection::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-protect")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::PathOption()
    :
    list(std::make_shared<Native::Mpls::TrafficEng::PathOption::List>())
{
    list->parent = this;

    yang_name = "path-option"; yang_parent_name = "traffic-eng";
}

Native::Mpls::TrafficEng::PathOption::~PathOption()
{
}

bool Native::Mpls::TrafficEng::PathOption::has_data() const
{
    return (list !=  nullptr && list->has_data());
}

bool Native::Mpls::TrafficEng::PathOption::has_operation() const
{
    return is_set(yfilter)
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Mpls::TrafficEng::PathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::PathOption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Mpls::TrafficEng::PathOption::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(list != nullptr)
    {
        children["list"] = list;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::PathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::PathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::List()
{
    yang_name = "list"; yang_parent_name = "path-option";
}

Native::Mpls::TrafficEng::PathOption::List::~List()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::has_data() const
{
    for (std::size_t index=0; index<identifier.size(); index++)
    {
        if(identifier[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::TrafficEng::PathOption::List::has_operation() const
{
    for (std::size_t index=0; index<identifier.size(); index++)
    {
        if(identifier[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::PathOption::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-option/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifier")
    {
        for(auto const & c : identifier)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier>();
        c->parent = this;
        identifier.push_back(c);
        return c;
    }

    if(child_yang_name == "name")
    {
        for(auto const & c : name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name>();
        c->parent = this;
        name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : identifier)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::PathOption::List::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::PathOption::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "name")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::Identifier()
    :
    pol_num{YType::uint16, "pol-num"}
{
    yang_name = "identifier"; yang_parent_name = "list";
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::~Identifier()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::has_data() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    return pol_num.is_set;
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::has_operation() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pol_num.yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier" <<"[pol-num='" <<pol_num <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::PathOption::List::Identifier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-option/list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pol_num.is_set || is_set(pol_num.yfilter)) leaf_name_data.push_back(pol_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option")
    {
        for(auto const & c : path_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_>();
        c->parent = this;
        path_option.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_option)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pol-num")
    {
        pol_num = value;
        pol_num.value_namespace = name_space;
        pol_num.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pol-num")
    {
        pol_num.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option" || name == "pol-num")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::PathOption_()
    :
    po_num{YType::uint16, "po-num"}
    	,
    explicit_(std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_>())
{
    explicit_->parent = this;

    yang_name = "path-option"; yang_parent_name = "identifier";
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::~PathOption_()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::has_data() const
{
    return po_num.is_set
	|| (explicit_ !=  nullptr && explicit_->has_data());
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(po_num.yfilter)
	|| (explicit_ !=  nullptr && explicit_->has_operation());
}

std::string Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option" <<"[po-num='" <<po_num <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathOption_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (po_num.is_set || is_set(po_num.yfilter)) leaf_name_data.push_back(po_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "explicit")
    {
        if(explicit_ == nullptr)
        {
            explicit_ = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_>();
        }
        return explicit_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(explicit_ != nullptr)
    {
        children["explicit"] = explicit_;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "po-num")
    {
        po_num = value;
        po_num.value_namespace = name_space;
        po_num.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "po-num")
    {
        po_num.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit" || name == "po-num")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Explicit_()
    :
    identifier(std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_>())
	,name(std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name>())
{
    identifier->parent = this;

    name->parent = this;

    yang_name = "explicit"; yang_parent_name = "path-option";
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::~Explicit_()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::has_data() const
{
    return (identifier !=  nullptr && identifier->has_data())
	|| (name !=  nullptr && name->has_data());
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::has_operation() const
{
    return is_set(yfilter)
	|| (identifier !=  nullptr && identifier->has_operation())
	|| (name !=  nullptr && name->has_operation());
}

std::string Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Explicit_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifier")
    {
        if(identifier == nullptr)
        {
            identifier = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_>();
        }
        return identifier;
    }

    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name>();
        }
        return name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(identifier != nullptr)
    {
        children["identifier"] = identifier;
    }

    if(name != nullptr)
    {
        children["name"] = name;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "name")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::Identifier_()
    :
    pnum{YType::uint16, "pnum"},
    verbatim{YType::empty, "verbatim"}
{
    yang_name = "identifier"; yang_parent_name = "explicit";
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::~Identifier_()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::has_data() const
{
    return pnum.is_set
	|| verbatim.is_set;
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pnum.yfilter)
	|| ydk::is_set(verbatim.yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Identifier_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pnum.is_set || is_set(pnum.yfilter)) leaf_name_data.push_back(pnum.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pnum")
    {
        pnum = value;
        pnum.value_namespace = name_space;
        pnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pnum")
    {
        pnum.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Identifier_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pnum" || name == "verbatim")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::Name()
    :
    pname{YType::str, "pname"},
    verbatim{YType::empty, "verbatim"}
{
    yang_name = "name"; yang_parent_name = "explicit";
}

Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::~Name()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::has_data() const
{
    return pname.is_set
	|| verbatim.is_set;
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pname.yfilter)
	|| ydk::is_set(verbatim.yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Name' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pname.is_set || is_set(pname.yfilter)) leaf_name_data.push_back(pname.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pname")
    {
        pname = value;
        pname.value_namespace = name_space;
        pname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pname")
    {
        pname.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Identifier::PathOption_::Explicit_::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pname" || name == "verbatim")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Name::Name()
    :
    pol_name{YType::str, "pol-name"}
{
    yang_name = "name"; yang_parent_name = "list";
}

Native::Mpls::TrafficEng::PathOption::List::Name::~Name()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::has_data() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_data())
            return true;
    }
    return pol_name.is_set;
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::has_operation() const
{
    for (std::size_t index=0; index<path_option.size(); index++)
    {
        if(path_option[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pol_name.yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name" <<"[pol-name='" <<pol_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::PathOption::List::Name::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-option/list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pol_name.is_set || is_set(pol_name.yfilter)) leaf_name_data.push_back(pol_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-option")
    {
        for(auto const & c : path_option)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_>();
        c->parent = this;
        path_option.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_option)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pol-name")
    {
        pol_name = value;
        pol_name.value_namespace = name_space;
        pol_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pol-name")
    {
        pol_name.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-option" || name == "pol-name")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::PathOption_()
    :
    po_num{YType::uint16, "po-num"}
    	,
    explicit_(std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_>())
{
    explicit_->parent = this;

    yang_name = "path-option"; yang_parent_name = "name";
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::~PathOption_()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::has_data() const
{
    return po_num.is_set
	|| (explicit_ !=  nullptr && explicit_->has_data());
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(po_num.yfilter)
	|| (explicit_ !=  nullptr && explicit_->has_operation());
}

std::string Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option" <<"[po-num='" <<po_num <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathOption_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (po_num.is_set || is_set(po_num.yfilter)) leaf_name_data.push_back(po_num.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "explicit")
    {
        if(explicit_ == nullptr)
        {
            explicit_ = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_>();
        }
        return explicit_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(explicit_ != nullptr)
    {
        children["explicit"] = explicit_;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "po-num")
    {
        po_num = value;
        po_num.value_namespace = name_space;
        po_num.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "po-num")
    {
        po_num.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit" || name == "po-num")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Explicit_()
    :
    identifier(std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier>())
	,name(std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_>())
{
    identifier->parent = this;

    name->parent = this;

    yang_name = "explicit"; yang_parent_name = "path-option";
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::~Explicit_()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::has_data() const
{
    return (identifier !=  nullptr && identifier->has_data())
	|| (name !=  nullptr && name->has_data());
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::has_operation() const
{
    return is_set(yfilter)
	|| (identifier !=  nullptr && identifier->has_operation())
	|| (name !=  nullptr && name->has_operation());
}

std::string Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Explicit_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifier")
    {
        if(identifier == nullptr)
        {
            identifier = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier>();
        }
        return identifier;
    }

    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_>();
        }
        return name;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(identifier != nullptr)
    {
        children["identifier"] = identifier;
    }

    if(name != nullptr)
    {
        children["name"] = name;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "name")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::Identifier()
    :
    pnum{YType::uint16, "pnum"},
    verbatim{YType::empty, "verbatim"}
{
    yang_name = "identifier"; yang_parent_name = "explicit";
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::~Identifier()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::has_data() const
{
    return pnum.is_set
	|| verbatim.is_set;
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pnum.yfilter)
	|| ydk::is_set(verbatim.yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Identifier' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pnum.is_set || is_set(pnum.yfilter)) leaf_name_data.push_back(pnum.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pnum")
    {
        pnum = value;
        pnum.value_namespace = name_space;
        pnum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pnum")
    {
        pnum.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pnum" || name == "verbatim")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::Name_()
    :
    pname{YType::str, "pname"},
    verbatim{YType::empty, "verbatim"}
{
    yang_name = "name"; yang_parent_name = "explicit";
}

Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::~Name_()
{
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::has_data() const
{
    return pname.is_set
	|| verbatim.is_set;
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pname.yfilter)
	|| ydk::is_set(verbatim.yfilter);
}

std::string Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Name_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pname.is_set || is_set(pname.yfilter)) leaf_name_data.push_back(pname.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pname")
    {
        pname = value;
        pname.value_namespace = name_space;
        pname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pname")
    {
        pname.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathOption::List::Name::PathOption_::Explicit_::Name_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pname" || name == "verbatim")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathSelection::PathSelection()
    :
    metric{YType::enumeration, "metric"},
    tiebreaker{YType::enumeration, "tiebreaker"}
    	,
    invalidation(std::make_shared<Native::Mpls::TrafficEng::PathSelection::Invalidation>())
	,overload(std::make_shared<Native::Mpls::TrafficEng::PathSelection::Overload>())
{
    invalidation->parent = this;

    overload->parent = this;

    yang_name = "path-selection"; yang_parent_name = "traffic-eng";
}

Native::Mpls::TrafficEng::PathSelection::~PathSelection()
{
}

bool Native::Mpls::TrafficEng::PathSelection::has_data() const
{
    return metric.is_set
	|| tiebreaker.is_set
	|| (invalidation !=  nullptr && invalidation->has_data())
	|| (overload !=  nullptr && overload->has_data());
}

bool Native::Mpls::TrafficEng::PathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tiebreaker.yfilter)
	|| (invalidation !=  nullptr && invalidation->has_operation())
	|| (overload !=  nullptr && overload->has_operation());
}

std::string Native::Mpls::TrafficEng::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::PathSelection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tiebreaker.is_set || is_set(tiebreaker.yfilter)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalidation")
    {
        if(invalidation == nullptr)
        {
            invalidation = std::make_shared<Native::Mpls::TrafficEng::PathSelection::Invalidation>();
        }
        return invalidation;
    }

    if(child_yang_name == "overload")
    {
        if(overload == nullptr)
        {
            overload = std::make_shared<Native::Mpls::TrafficEng::PathSelection::Overload>();
        }
        return overload;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathSelection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(invalidation != nullptr)
    {
        children["invalidation"] = invalidation;
    }

    if(overload != nullptr)
    {
        children["overload"] = overload;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker = value;
        tiebreaker.value_namespace = name_space;
        tiebreaker.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalidation" || name == "overload" || name == "metric" || name == "tiebreaker")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathSelection::Invalidation::Invalidation()
    :
    drop{YType::empty, "drop"},
    value_{YType::int32, "value"}
{
    yang_name = "invalidation"; yang_parent_name = "path-selection";
}

Native::Mpls::TrafficEng::PathSelection::Invalidation::~Invalidation()
{
}

bool Native::Mpls::TrafficEng::PathSelection::Invalidation::has_data() const
{
    return drop.is_set
	|| value_.is_set;
}

bool Native::Mpls::TrafficEng::PathSelection::Invalidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Mpls::TrafficEng::PathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::PathSelection::Invalidation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-selection/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathSelection::Invalidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::PathSelection::Invalidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathSelection::Invalidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathSelection::Invalidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop" || name == "value")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathSelection::Overload::Overload()
    :
    allow(std::make_shared<Native::Mpls::TrafficEng::PathSelection::Overload::Allow>())
{
    allow->parent = this;

    yang_name = "overload"; yang_parent_name = "path-selection";
}

Native::Mpls::TrafficEng::PathSelection::Overload::~Overload()
{
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::has_data() const
{
    return (allow !=  nullptr && allow->has_data());
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::has_operation() const
{
    return is_set(yfilter)
	|| (allow !=  nullptr && allow->has_operation());
}

std::string Native::Mpls::TrafficEng::PathSelection::Overload::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "overload";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::PathSelection::Overload::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-selection/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathSelection::Overload::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allow")
    {
        if(allow == nullptr)
        {
            allow = std::make_shared<Native::Mpls::TrafficEng::PathSelection::Overload::Allow>();
        }
        return allow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathSelection::Overload::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allow != nullptr)
    {
        children["allow"] = allow;
    }

    return children;
}

void Native::Mpls::TrafficEng::PathSelection::Overload::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::PathSelection::Overload::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow")
        return true;
    return false;
}

Native::Mpls::TrafficEng::PathSelection::Overload::Allow::Allow()
    :
    head{YType::empty, "head"},
    middle{YType::empty, "middle"},
    tail{YType::empty, "tail"}
{
    yang_name = "allow"; yang_parent_name = "overload";
}

Native::Mpls::TrafficEng::PathSelection::Overload::Allow::~Allow()
{
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::Allow::has_data() const
{
    return head.is_set
	|| middle.is_set
	|| tail.is_set;
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::Allow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(head.yfilter)
	|| ydk::is_set(middle.yfilter)
	|| ydk::is_set(tail.yfilter);
}

std::string Native::Mpls::TrafficEng::PathSelection::Overload::Allow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::PathSelection::Overload::Allow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/path-selection/overload/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (head.is_set || is_set(head.yfilter)) leaf_name_data.push_back(head.get_name_leafdata());
    if (middle.is_set || is_set(middle.yfilter)) leaf_name_data.push_back(middle.get_name_leafdata());
    if (tail.is_set || is_set(tail.yfilter)) leaf_name_data.push_back(tail.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::PathSelection::Overload::Allow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::PathSelection::Overload::Allow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::PathSelection::Overload::Allow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "head")
    {
        head = value;
        head.value_namespace = name_space;
        head.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "middle")
    {
        middle = value;
        middle.value_namespace = name_space;
        middle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tail")
    {
        tail = value;
        tail.value_namespace = name_space;
        tail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::PathSelection::Overload::Allow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "head")
    {
        head.yfilter = yfilter;
    }
    if(value_path == "middle")
    {
        middle.yfilter = yfilter;
    }
    if(value_path == "tail")
    {
        tail.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::PathSelection::Overload::Allow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head" || name == "middle" || name == "tail")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Pcc::Pcc()
    :
    report_all{YType::empty, "report-all"}
    	,
    peer(std::make_shared<Native::Mpls::TrafficEng::Pcc::Peer>())
{
    peer->parent = this;

    yang_name = "pcc"; yang_parent_name = "traffic-eng";
}

Native::Mpls::TrafficEng::Pcc::~Pcc()
{
}

bool Native::Mpls::TrafficEng::Pcc::has_data() const
{
    return report_all.is_set
	|| (peer !=  nullptr && peer->has_data());
}

bool Native::Mpls::TrafficEng::Pcc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(report_all.yfilter)
	|| (peer !=  nullptr && peer->has_operation());
}

std::string Native::Mpls::TrafficEng::Pcc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcc";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Pcc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (report_all.is_set || is_set(report_all.yfilter)) leaf_name_data.push_back(report_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Pcc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Mpls::TrafficEng::Pcc::Peer>();
        }
        return peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Pcc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    return children;
}

void Native::Mpls::TrafficEng::Pcc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "report-all")
    {
        report_all = value;
        report_all.value_namespace = name_space;
        report_all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Pcc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "report-all")
    {
        report_all.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Pcc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "report-all")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Pcc::Peer::Peer()
{
    yang_name = "peer"; yang_parent_name = "pcc";
}

Native::Mpls::TrafficEng::Pcc::Peer::~Peer()
{
}

bool Native::Mpls::TrafficEng::Pcc::Peer::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Mpls::TrafficEng::Pcc::Peer::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Mpls::TrafficEng::Pcc::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Pcc::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/pcc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Pcc::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Mpls::TrafficEng::Pcc::Peer::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Pcc::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Mpls::TrafficEng::Pcc::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Pcc::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Pcc::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    keychain{YType::str, "keychain"},
    precedence{YType::uint8, "precedence"},
    source{YType::str, "source"}
    	,
    password(std::make_shared<Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password>())
{
    password->parent = this;

    yang_name = "ipv4"; yang_parent_name = "peer";
}

Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::~Ipv4()
{
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::has_data() const
{
    return ipv4.is_set
	|| keychain.is_set
	|| precedence.is_set
	|| source.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(keychain.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(source.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/pcc/peer/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (keychain.is_set || is_set(keychain.yfilter)) leaf_name_data.push_back(keychain.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain")
    {
        keychain = value;
        keychain.value_namespace = name_space;
        keychain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "keychain")
    {
        keychain.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "ipv4" || name == "keychain" || name == "precedence" || name == "source")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::Password()
    :
    clear{YType::str, "clear"},
    encrypted{YType::str, "encrypted"}
{
    yang_name = "password"; yang_parent_name = "ipv4";
}

Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::~Password()
{
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::has_data() const
{
    return clear.is_set
	|| encrypted.is_set;
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clear.yfilter)
	|| ydk::is_set(encrypted.yfilter);
}

std::string Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::get_entity_path(Entity* ancestor) const
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

    if (clear.is_set || is_set(clear.yfilter)) leaf_name_data.push_back(clear.get_name_leafdata());
    if (encrypted.is_set || is_set(encrypted.yfilter)) leaf_name_data.push_back(encrypted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clear")
    {
        clear = value;
        clear.value_namespace = name_space;
        clear.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encrypted")
    {
        encrypted = value;
        encrypted.value_namespace = name_space;
        encrypted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clear")
    {
        clear.yfilter = yfilter;
    }
    if(value_path == "encrypted")
    {
        encrypted.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Pcc::Peer::Ipv4::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clear" || name == "encrypted")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Reoptimize::Reoptimize()
    :
    events(std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Events>())
	,timers(std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Timers>())
{
    events->parent = this;

    timers->parent = this;

    yang_name = "reoptimize"; yang_parent_name = "traffic-eng";
}

Native::Mpls::TrafficEng::Reoptimize::~Reoptimize()
{
}

bool Native::Mpls::TrafficEng::Reoptimize::has_data() const
{
    return (events !=  nullptr && events->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Mpls::TrafficEng::Reoptimize::has_operation() const
{
    return is_set(yfilter)
	|| (events !=  nullptr && events->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Mpls::TrafficEng::Reoptimize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reoptimize";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Reoptimize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Reoptimize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "events")
    {
        if(events == nullptr)
        {
            events = std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Events>();
        }
        return events;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Reoptimize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(events != nullptr)
    {
        children["events"] = events;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Mpls::TrafficEng::Reoptimize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Reoptimize::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Reoptimize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "events" || name == "timers")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Reoptimize::Events::Events()
    :
    link_up{YType::empty, "link-up"}
{
    yang_name = "events"; yang_parent_name = "reoptimize";
}

Native::Mpls::TrafficEng::Reoptimize::Events::~Events()
{
}

bool Native::Mpls::TrafficEng::Reoptimize::Events::has_data() const
{
    return link_up.is_set;
}

bool Native::Mpls::TrafficEng::Reoptimize::Events::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_up.yfilter);
}

std::string Native::Mpls::TrafficEng::Reoptimize::Events::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "events";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Reoptimize::Events::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/reoptimize/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_up.is_set || is_set(link_up.yfilter)) leaf_name_data.push_back(link_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Reoptimize::Events::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Reoptimize::Events::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Reoptimize::Events::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-up")
    {
        link_up = value;
        link_up.value_namespace = name_space;
        link_up.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Reoptimize::Events::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-up")
    {
        link_up.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Reoptimize::Events::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-up")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Reoptimize::Timers::Timers()
    :
    frequency{YType::uint32, "frequency"}
    	,
    delay(std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Timers::Delay>())
{
    delay->parent = this;

    yang_name = "timers"; yang_parent_name = "reoptimize";
}

Native::Mpls::TrafficEng::Reoptimize::Timers::~Timers()
{
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::has_data() const
{
    return frequency.is_set
	|| (delay !=  nullptr && delay->has_data());
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Mpls::TrafficEng::Reoptimize::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Reoptimize::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/reoptimize/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Reoptimize::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Mpls::TrafficEng::Reoptimize::Timers::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Reoptimize::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Mpls::TrafficEng::Reoptimize::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Reoptimize::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "frequency")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::Delay()
    :
    after_frr{YType::uint8, "after-frr"},
    cleanup{YType::uint8, "cleanup"},
    installation{YType::uint16, "installation"}
{
    yang_name = "delay"; yang_parent_name = "timers";
}

Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::~Delay()
{
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::has_data() const
{
    return after_frr.is_set
	|| cleanup.is_set
	|| installation.is_set;
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(after_frr.yfilter)
	|| ydk::is_set(cleanup.yfilter)
	|| ydk::is_set(installation.yfilter);
}

std::string Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/reoptimize/timers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (after_frr.is_set || is_set(after_frr.yfilter)) leaf_name_data.push_back(after_frr.get_name_leafdata());
    if (cleanup.is_set || is_set(cleanup.yfilter)) leaf_name_data.push_back(cleanup.get_name_leafdata());
    if (installation.is_set || is_set(installation.yfilter)) leaf_name_data.push_back(installation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "after-frr")
    {
        after_frr = value;
        after_frr.value_namespace = name_space;
        after_frr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cleanup")
    {
        cleanup = value;
        cleanup.value_namespace = name_space;
        cleanup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "installation")
    {
        installation = value;
        installation.value_namespace = name_space;
        installation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "after-frr")
    {
        after_frr.yfilter = yfilter;
    }
    if(value_path == "cleanup")
    {
        cleanup.yfilter = yfilter;
    }
    if(value_path == "installation")
    {
        installation.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Reoptimize::Timers::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "after-frr" || name == "cleanup" || name == "installation")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Signalling::Signalling()
    :
    advertise(std::make_shared<Native::Mpls::TrafficEng::Signalling::Advertise>())
	,forwarding(std::make_shared<Native::Mpls::TrafficEng::Signalling::Forwarding>())
{
    advertise->parent = this;

    forwarding->parent = this;

    yang_name = "signalling"; yang_parent_name = "traffic-eng";
}

Native::Mpls::TrafficEng::Signalling::~Signalling()
{
}

bool Native::Mpls::TrafficEng::Signalling::has_data() const
{
    return (advertise !=  nullptr && advertise->has_data())
	|| (forwarding !=  nullptr && forwarding->has_data());
}

bool Native::Mpls::TrafficEng::Signalling::has_operation() const
{
    return is_set(yfilter)
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (forwarding !=  nullptr && forwarding->has_operation());
}

std::string Native::Mpls::TrafficEng::Signalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Signalling::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Signalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Mpls::TrafficEng::Signalling::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "forwarding")
    {
        if(forwarding == nullptr)
        {
            forwarding = std::make_shared<Native::Mpls::TrafficEng::Signalling::Forwarding>();
        }
        return forwarding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Signalling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertise != nullptr)
    {
        children["advertise"] = advertise;
    }

    if(forwarding != nullptr)
    {
        children["forwarding"] = forwarding;
    }

    return children;
}

void Native::Mpls::TrafficEng::Signalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Signalling::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Signalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise" || name == "forwarding")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Signalling::Advertise::Advertise()
    :
    explicit_null(nullptr) // presence node
{
    yang_name = "advertise"; yang_parent_name = "signalling";
}

Native::Mpls::TrafficEng::Signalling::Advertise::~Advertise()
{
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::has_data() const
{
    return (explicit_null !=  nullptr && explicit_null->has_data());
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| (explicit_null !=  nullptr && explicit_null->has_operation());
}

std::string Native::Mpls::TrafficEng::Signalling::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Signalling::Advertise::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/signalling/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Signalling::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "explicit-null")
    {
        if(explicit_null == nullptr)
        {
            explicit_null = std::make_shared<Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull>();
        }
        return explicit_null;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Signalling::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(explicit_null != nullptr)
    {
        children["explicit-null"] = explicit_null;
    }

    return children;
}

void Native::Mpls::TrafficEng::Signalling::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Signalling::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-null")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::ExplicitNull()
    :
    access_list{YType::str, "access-list"}
{
    yang_name = "explicit-null"; yang_parent_name = "advertise";
}

Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::~ExplicitNull()
{
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::has_data() const
{
    return access_list.is_set;
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-null";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/signalling/advertise/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Signalling::Advertise::ExplicitNull::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Signalling::Forwarding::Forwarding()
    :
    sync{YType::empty, "sync"}
{
    yang_name = "forwarding"; yang_parent_name = "signalling";
}

Native::Mpls::TrafficEng::Signalling::Forwarding::~Forwarding()
{
}

bool Native::Mpls::TrafficEng::Signalling::Forwarding::has_data() const
{
    return sync.is_set;
}

bool Native::Mpls::TrafficEng::Signalling::Forwarding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync.yfilter);
}

std::string Native::Mpls::TrafficEng::Signalling::Forwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Signalling::Forwarding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/signalling/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync.is_set || is_set(sync.yfilter)) leaf_name_data.push_back(sync.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Signalling::Forwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Signalling::Forwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Signalling::Forwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync")
    {
        sync = value;
        sync.value_namespace = name_space;
        sync.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Signalling::Forwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync")
    {
        sync.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Signalling::Forwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Topology::Topology()
    :
    holddown(std::make_shared<Native::Mpls::TrafficEng::Topology::Holddown>())
	,mesh_group(std::make_shared<Native::Mpls::TrafficEng::Topology::MeshGroup>())
{
    holddown->parent = this;

    mesh_group->parent = this;

    yang_name = "topology"; yang_parent_name = "traffic-eng";
}

Native::Mpls::TrafficEng::Topology::~Topology()
{
}

bool Native::Mpls::TrafficEng::Topology::has_data() const
{
    return (holddown !=  nullptr && holddown->has_data())
	|| (mesh_group !=  nullptr && mesh_group->has_data());
}

bool Native::Mpls::TrafficEng::Topology::has_operation() const
{
    return is_set(yfilter)
	|| (holddown !=  nullptr && holddown->has_operation())
	|| (mesh_group !=  nullptr && mesh_group->has_operation());
}

std::string Native::Mpls::TrafficEng::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "holddown")
    {
        if(holddown == nullptr)
        {
            holddown = std::make_shared<Native::Mpls::TrafficEng::Topology::Holddown>();
        }
        return holddown;
    }

    if(child_yang_name == "mesh-group")
    {
        if(mesh_group == nullptr)
        {
            mesh_group = std::make_shared<Native::Mpls::TrafficEng::Topology::MeshGroup>();
        }
        return mesh_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(holddown != nullptr)
    {
        children["holddown"] = holddown;
    }

    if(mesh_group != nullptr)
    {
        children["mesh-group"] = mesh_group;
    }

    return children;
}

void Native::Mpls::TrafficEng::Topology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Topology::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Topology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holddown" || name == "mesh-group")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Topology::Holddown::Holddown()
    :
    sigerr{YType::uint16, "sigerr"}
{
    yang_name = "holddown"; yang_parent_name = "topology";
}

Native::Mpls::TrafficEng::Topology::Holddown::~Holddown()
{
}

bool Native::Mpls::TrafficEng::Topology::Holddown::has_data() const
{
    return sigerr.is_set;
}

bool Native::Mpls::TrafficEng::Topology::Holddown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sigerr.yfilter);
}

std::string Native::Mpls::TrafficEng::Topology::Holddown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "holddown";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Topology::Holddown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sigerr.is_set || is_set(sigerr.yfilter)) leaf_name_data.push_back(sigerr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Topology::Holddown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Topology::Holddown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Topology::Holddown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sigerr")
    {
        sigerr = value;
        sigerr.value_namespace = name_space;
        sigerr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Topology::Holddown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sigerr")
    {
        sigerr.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Topology::Holddown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sigerr")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Topology::MeshGroup::MeshGroup()
    :
    accept_domain{YType::empty, "accept-domain"}
{
    yang_name = "mesh-group"; yang_parent_name = "topology";
}

Native::Mpls::TrafficEng::Topology::MeshGroup::~MeshGroup()
{
}

bool Native::Mpls::TrafficEng::Topology::MeshGroup::has_data() const
{
    return accept_domain.is_set;
}

bool Native::Mpls::TrafficEng::Topology::MeshGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accept_domain.yfilter);
}

std::string Native::Mpls::TrafficEng::Topology::MeshGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Topology::MeshGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_domain.is_set || is_set(accept_domain.yfilter)) leaf_name_data.push_back(accept_domain.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Topology::MeshGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Topology::MeshGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Topology::MeshGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accept-domain")
    {
        accept_domain = value;
        accept_domain.value_namespace = name_space;
        accept_domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Topology::MeshGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accept-domain")
    {
        accept_domain.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Topology::MeshGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-domain")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Trace::Trace()
    :
    buffer_size(std::make_shared<Native::Mpls::TrafficEng::Trace::BufferSize>())
{
    buffer_size->parent = this;

    yang_name = "trace"; yang_parent_name = "traffic-eng";
}

Native::Mpls::TrafficEng::Trace::~Trace()
{
}

bool Native::Mpls::TrafficEng::Trace::has_data() const
{
    return (buffer_size !=  nullptr && buffer_size->has_data());
}

bool Native::Mpls::TrafficEng::Trace::has_operation() const
{
    return is_set(yfilter)
	|| (buffer_size !=  nullptr && buffer_size->has_operation());
}

std::string Native::Mpls::TrafficEng::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Trace::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "buffer-size")
    {
        if(buffer_size == nullptr)
        {
            buffer_size = std::make_shared<Native::Mpls::TrafficEng::Trace::BufferSize>();
        }
        return buffer_size;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(buffer_size != nullptr)
    {
        children["buffer-size"] = buffer_size;
    }

    return children;
}

void Native::Mpls::TrafficEng::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::TrafficEng::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::TrafficEng::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "buffer-size")
        return true;
    return false;
}

Native::Mpls::TrafficEng::Trace::BufferSize::BufferSize()
    :
    error{YType::uint16, "error"},
    event{YType::uint16, "event"},
    warning{YType::uint8, "warning"}
{
    yang_name = "buffer-size"; yang_parent_name = "trace";
}

Native::Mpls::TrafficEng::Trace::BufferSize::~BufferSize()
{
}

bool Native::Mpls::TrafficEng::Trace::BufferSize::has_data() const
{
    return error.is_set
	|| event.is_set
	|| warning.is_set;
}

bool Native::Mpls::TrafficEng::Trace::BufferSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(event.yfilter)
	|| ydk::is_set(warning.yfilter);
}

std::string Native::Mpls::TrafficEng::Trace::BufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "buffer-size";

    return path_buffer.str();

}

const EntityPath Native::Mpls::TrafficEng::Trace::BufferSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/Cisco-IOS-XE-mpls:traffic-eng/trace/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (event.is_set || is_set(event.yfilter)) leaf_name_data.push_back(event.get_name_leafdata());
    if (warning.is_set || is_set(warning.yfilter)) leaf_name_data.push_back(warning.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::TrafficEng::Trace::BufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::TrafficEng::Trace::BufferSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::TrafficEng::Trace::BufferSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event")
    {
        event = value;
        event.value_namespace = name_space;
        event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning")
    {
        warning = value;
        warning.value_namespace = name_space;
        warning.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mpls::TrafficEng::Trace::BufferSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "event")
    {
        event.yfilter = yfilter;
    }
    if(value_path == "warning")
    {
        warning.yfilter = yfilter;
    }
}

bool Native::Mpls::TrafficEng::Trace::BufferSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error" || name == "event" || name == "warning")
        return true;
    return false;
}

Native::Mpls::Tp::Tp()
{
    yang_name = "tp"; yang_parent_name = "mpls";
}

Native::Mpls::Tp::~Tp()
{
}

bool Native::Mpls::Tp::has_data() const
{
    return false;
}

bool Native::Mpls::Tp::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Mpls::Tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:tp";

    return path_buffer.str();

}

const EntityPath Native::Mpls::Tp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Mpls::Tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mpls::Tp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Mpls::Tp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Mpls::Tp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Mpls::Tp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Router::Router()
    :
    isis(nullptr) // presence node
	,isis_container(std::make_shared<Native::Router::IsisContainer>())
	,lisp(nullptr) // presence node
	,rip(nullptr) // presence node
{
    isis_container->parent = this;

    yang_name = "router"; yang_parent_name = "native";
}

Native::Router::~Router()
{
}

bool Native::Router::has_data() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lisp_list.size(); index++)
    {
        if(lisp_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    return (isis !=  nullptr && isis->has_data())
	|| (isis_container !=  nullptr && isis_container->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (rip !=  nullptr && rip->has_data());
}

bool Native::Router::has_operation() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lisp_list.size(); index++)
    {
        if(lisp_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (isis_container !=  nullptr && isis_container->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (rip !=  nullptr && rip->has_operation());
}

std::string Native::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";

    return path_buffer.str();

}

const EntityPath Native::Router::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "isis-container")
    {
        if(isis_container == nullptr)
        {
            isis_container = std::make_shared<Native::Router::IsisContainer>();
        }
        return isis_container;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "lisp-list")
    {
        for(auto const & c : lisp_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::LispList>();
        c->parent = this;
        lisp_list.push_back(c);
        return c;
    }

    if(child_yang_name == "ospf")
    {
        for(auto const & c : ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "ospfv3")
    {
        for(auto const & c : ospfv3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Ospfv3>();
        c->parent = this;
        ospfv3.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Rip>();
        }
        return rip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(isis_container != nullptr)
    {
        children["isis-container"] = isis_container;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    for (auto const & c : lisp_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ospfv3)
    {
        children[c->get_segment_path()] = c;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    return children;
}

void Native::Router::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "eigrp" || name == "isis" || name == "isis-container" || name == "lisp" || name == "lisp-list" || name == "ospf" || name == "ospfv3" || name == "rip")
        return true;
    return false;
}

Native::Router::Bgp::Bgp()
    :
    id{YType::str, "id"},
    auto_summary{YType::boolean, "auto-summary"},
    default_metric{YType::uint32, "default-metric"},
    synchronization{YType::empty, "synchronization"}
    	,
    address_family(std::make_shared<Native::Router::Bgp::AddressFamily>())
	,bgp(std::make_shared<Native::Router::Bgp::Bgp_>())
	,default_information(std::make_shared<Native::Router::Bgp::DefaultInformation>())
	,distance(std::make_shared<Native::Router::Bgp::Distance>())
	,import(std::make_shared<Native::Router::Bgp::Import>())
	,maximum_paths(std::make_shared<Native::Router::Bgp::MaximumPaths>())
	,redistribute(std::make_shared<Native::Router::Bgp::Redistribute>())
	,scope(std::make_shared<Native::Router::Bgp::Scope>())
	,snmp(nullptr) // presence node
	,table_map(nullptr) // presence node
	,template_(std::make_shared<Native::Router::Bgp::Template_>())
	,timers(std::make_shared<Native::Router::Bgp::Timers>())
{
    address_family->parent = this;

    bgp->parent = this;

    default_information->parent = this;

    distance->parent = this;

    import->parent = this;

    maximum_paths->parent = this;

    redistribute->parent = this;

    scope->parent = this;

    template_->parent = this;

    timers->parent = this;

    yang_name = "bgp"; yang_parent_name = "router";
}

Native::Router::Bgp::~Bgp()
{
}

bool Native::Router::Bgp::has_data() const
{
    for (std::size_t index=0; index<distribute_list.size(); index++)
    {
        if(distribute_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return id.is_set
	|| auto_summary.is_set
	|| default_metric.is_set
	|| synchronization.is_set
	|| (address_family !=  nullptr && address_family->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (import !=  nullptr && import->has_data())
	|| (maximum_paths !=  nullptr && maximum_paths->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (scope !=  nullptr && scope->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (table_map !=  nullptr && table_map->has_data())
	|| (template_ !=  nullptr && template_->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Native::Router::Bgp::has_operation() const
{
    for (std::size_t index=0; index<distribute_list.size(); index++)
    {
        if(distribute_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(auto_summary.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(synchronization.yfilter)
	|| (address_family !=  nullptr && address_family->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (import !=  nullptr && import->has_operation())
	|| (maximum_paths !=  nullptr && maximum_paths->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (scope !=  nullptr && scope->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (table_map !=  nullptr && table_map->has_operation())
	|| (template_ !=  nullptr && template_->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Native::Router::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp:bgp" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (auto_summary.is_set || is_set(auto_summary.yfilter)) leaf_name_data.push_back(auto_summary.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (synchronization.is_set || is_set(synchronization.yfilter)) leaf_name_data.push_back(synchronization.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::Router::Bgp::AddressFamily>();
        }
        return address_family;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Bgp::Bgp_>();
        }
        return bgp;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Bgp::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "distance")
    {
        if(distance == nullptr)
        {
            distance = std::make_shared<Native::Router::Bgp::Distance>();
        }
        return distance;
    }

    if(child_yang_name == "distribute-list")
    {
        for(auto const & c : distribute_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::DistributeList>();
        c->parent = this;
        distribute_list.push_back(c);
        return c;
    }

    if(child_yang_name == "import")
    {
        if(import == nullptr)
        {
            import = std::make_shared<Native::Router::Bgp::Import>();
        }
        return import;
    }

    if(child_yang_name == "maximum-paths")
    {
        if(maximum_paths == nullptr)
        {
            maximum_paths = std::make_shared<Native::Router::Bgp::MaximumPaths>();
        }
        return maximum_paths;
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        for(auto const & c : network)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Bgp::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "scope")
    {
        if(scope == nullptr)
        {
            scope = std::make_shared<Native::Router::Bgp::Scope>();
        }
        return scope;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Router::Bgp::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "table-map")
    {
        if(table_map == nullptr)
        {
            table_map = std::make_shared<Native::Router::Bgp::TableMap>();
        }
        return table_map;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::Router::Bgp::Template_>();
        }
        return template_;
    }

    if(child_yang_name == "timers")
    {
        if(timers == nullptr)
        {
            timers = std::make_shared<Native::Router::Bgp::Timers>();
        }
        return timers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(distance != nullptr)
    {
        children["distance"] = distance;
    }

    for (auto const & c : distribute_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(import != nullptr)
    {
        children["import"] = import;
    }

    if(maximum_paths != nullptr)
    {
        children["maximum-paths"] = maximum_paths;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : network)
    {
        children[c->get_segment_path()] = c;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(scope != nullptr)
    {
        children["scope"] = scope;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    if(table_map != nullptr)
    {
        children["table-map"] = table_map;
    }

    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    if(timers != nullptr)
    {
        children["timers"] = timers;
    }

    return children;
}

void Native::Router::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-summary")
    {
        auto_summary = value;
        auto_summary.value_namespace = name_space;
        auto_summary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronization")
    {
        synchronization = value;
        synchronization.value_namespace = name_space;
        synchronization.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "auto-summary")
    {
        auto_summary.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "synchronization")
    {
        synchronization.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "bgp" || name == "default-information" || name == "distance" || name == "distribute-list" || name == "import" || name == "maximum-paths" || name == "neighbor" || name == "network" || name == "redistribute" || name == "scope" || name == "snmp" || name == "table-map" || name == "template" || name == "timers" || name == "id" || name == "auto-summary" || name == "default-metric" || name == "synchronization")
        return true;
    return false;
}

Native::Router::Bgp::Import::Import()
    :
    path(std::make_shared<Native::Router::Bgp::Import::Path>())
{
    path->parent = this;

    yang_name = "import"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Import::~Import()
{
}

bool Native::Router::Bgp::Import::has_data() const
{
    return (path !=  nullptr && path->has_data());
}

bool Native::Router::Bgp::Import::has_operation() const
{
    return is_set(yfilter)
	|| (path !=  nullptr && path->has_operation());
}

std::string Native::Router::Bgp::Import::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Import::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Import' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Import::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<Native::Router::Bgp::Import::Path>();
        }
        return path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Import::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(path != nullptr)
    {
        children["path"] = path;
    }

    return children;
}

void Native::Router::Bgp::Import::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Import::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Import::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path")
        return true;
    return false;
}

Native::Router::Bgp::Import::Path::Path()
    :
    limit{YType::uint8, "limit"}
{
    yang_name = "path"; yang_parent_name = "import";
}

Native::Router::Bgp::Import::Path::~Path()
{
}

bool Native::Router::Bgp::Import::Path::has_data() const
{
    return limit.is_set;
}

bool Native::Router::Bgp::Import::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::Router::Bgp::Import::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Import::Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Path' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Import::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Import::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Import::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Import::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Import::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Bgp_()
    :
    advertise_best_external{YType::empty, "advertise-best-external"},
    aggregate_timer{YType::uint8, "aggregate-timer"},
    always_compare_med{YType::empty, "always-compare-med"},
    cluster_id{YType::str, "cluster-id"},
    deterministic_med{YType::empty, "deterministic-med"},
    dmzlink_bw{YType::empty, "dmzlink-bw"},
    enforce_first_as{YType::empty, "enforce-first-as"},
    enhanced_error{YType::empty, "enhanced-error"},
    fast_external_fallover{YType::boolean, "fast-external-fallover"},
    log_neighbor_changes{YType::empty, "log-neighbor-changes"},
    maxas_limit{YType::uint16, "maxas-limit"},
    maxcommunity_limit{YType::uint16, "maxcommunity-limit"},
    redistribute_internal{YType::empty, "redistribute-internal"},
    router_id{YType::str, "router-id"},
    scan_time{YType::uint8, "scan-time"},
    soft_reconfig_backup{YType::empty, "soft-reconfig-backup"},
    suppress_inactive{YType::empty, "suppress-inactive"},
    update_delay{YType::uint16, "update-delay"}
    	,
    additional_paths(std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths>())
	,asnotation(std::make_shared<Native::Router::Bgp::Bgp_::Asnotation>())
	,bestpath(std::make_shared<Native::Router::Bgp::Bgp_::Bestpath>())
	,client_to_client(std::make_shared<Native::Router::Bgp::Bgp_::ClientToClient>())
	,confederation(std::make_shared<Native::Router::Bgp::Bgp_::Confederation>())
	,consistency_checker(std::make_shared<Native::Router::Bgp::Bgp_::ConsistencyChecker>())
	,dampening(nullptr) // presence node
	,default_(std::make_shared<Native::Router::Bgp::Bgp_::Default_>())
	,graceful_restart(nullptr) // presence node
	,ha_mode(std::make_shared<Native::Router::Bgp::Bgp_::HaMode>())
	,nexthop(std::make_shared<Native::Router::Bgp::Bgp_::Nexthop>())
	,nopeerup_delay(std::make_shared<Native::Router::Bgp::Bgp_::NopeerupDelay>())
	,recursion(std::make_shared<Native::Router::Bgp::Bgp_::Recursion>())
	,regexp(std::make_shared<Native::Router::Bgp::Bgp_::Regexp>())
	,route_map(std::make_shared<Native::Router::Bgp::Bgp_::RouteMap>())
	,slow_peer(std::make_shared<Native::Router::Bgp::Bgp_::SlowPeer>())
	,transport(std::make_shared<Native::Router::Bgp::Bgp_::Transport>())
	,update_group(std::make_shared<Native::Router::Bgp::Bgp_::UpdateGroup>())
{
    additional_paths->parent = this;

    asnotation->parent = this;

    bestpath->parent = this;

    client_to_client->parent = this;

    confederation->parent = this;

    consistency_checker->parent = this;

    default_->parent = this;

    ha_mode->parent = this;

    nexthop->parent = this;

    nopeerup_delay->parent = this;

    recursion->parent = this;

    regexp->parent = this;

    route_map->parent = this;

    slow_peer->parent = this;

    transport->parent = this;

    update_group->parent = this;

    yang_name = "bgp"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::~Bgp_()
{
}

bool Native::Router::Bgp::Bgp_::has_data() const
{
    for (std::size_t index=0; index<inject_map.size(); index++)
    {
        if(inject_map[index]->has_data())
            return true;
    }
    return advertise_best_external.is_set
	|| aggregate_timer.is_set
	|| always_compare_med.is_set
	|| cluster_id.is_set
	|| deterministic_med.is_set
	|| dmzlink_bw.is_set
	|| enforce_first_as.is_set
	|| enhanced_error.is_set
	|| fast_external_fallover.is_set
	|| log_neighbor_changes.is_set
	|| maxas_limit.is_set
	|| maxcommunity_limit.is_set
	|| redistribute_internal.is_set
	|| router_id.is_set
	|| scan_time.is_set
	|| soft_reconfig_backup.is_set
	|| suppress_inactive.is_set
	|| update_delay.is_set
	|| (additional_paths !=  nullptr && additional_paths->has_data())
	|| (asnotation !=  nullptr && asnotation->has_data())
	|| (bestpath !=  nullptr && bestpath->has_data())
	|| (client_to_client !=  nullptr && client_to_client->has_data())
	|| (confederation !=  nullptr && confederation->has_data())
	|| (consistency_checker !=  nullptr && consistency_checker->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (ha_mode !=  nullptr && ha_mode->has_data())
	|| (nexthop !=  nullptr && nexthop->has_data())
	|| (nopeerup_delay !=  nullptr && nopeerup_delay->has_data())
	|| (recursion !=  nullptr && recursion->has_data())
	|| (regexp !=  nullptr && regexp->has_data())
	|| (route_map !=  nullptr && route_map->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (update_group !=  nullptr && update_group->has_data());
}

bool Native::Router::Bgp::Bgp_::has_operation() const
{
    for (std::size_t index=0; index<inject_map.size(); index++)
    {
        if(inject_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(advertise_best_external.yfilter)
	|| ydk::is_set(aggregate_timer.yfilter)
	|| ydk::is_set(always_compare_med.yfilter)
	|| ydk::is_set(cluster_id.yfilter)
	|| ydk::is_set(deterministic_med.yfilter)
	|| ydk::is_set(dmzlink_bw.yfilter)
	|| ydk::is_set(enforce_first_as.yfilter)
	|| ydk::is_set(enhanced_error.yfilter)
	|| ydk::is_set(fast_external_fallover.yfilter)
	|| ydk::is_set(log_neighbor_changes.yfilter)
	|| ydk::is_set(maxas_limit.yfilter)
	|| ydk::is_set(maxcommunity_limit.yfilter)
	|| ydk::is_set(redistribute_internal.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(scan_time.yfilter)
	|| ydk::is_set(soft_reconfig_backup.yfilter)
	|| ydk::is_set(suppress_inactive.yfilter)
	|| ydk::is_set(update_delay.yfilter)
	|| (additional_paths !=  nullptr && additional_paths->has_operation())
	|| (asnotation !=  nullptr && asnotation->has_operation())
	|| (bestpath !=  nullptr && bestpath->has_operation())
	|| (client_to_client !=  nullptr && client_to_client->has_operation())
	|| (confederation !=  nullptr && confederation->has_operation())
	|| (consistency_checker !=  nullptr && consistency_checker->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (ha_mode !=  nullptr && ha_mode->has_operation())
	|| (nexthop !=  nullptr && nexthop->has_operation())
	|| (nopeerup_delay !=  nullptr && nopeerup_delay->has_operation())
	|| (recursion !=  nullptr && recursion->has_operation())
	|| (regexp !=  nullptr && regexp->has_operation())
	|| (route_map !=  nullptr && route_map->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (update_group !=  nullptr && update_group->has_operation());
}

std::string Native::Router::Bgp::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_best_external.is_set || is_set(advertise_best_external.yfilter)) leaf_name_data.push_back(advertise_best_external.get_name_leafdata());
    if (aggregate_timer.is_set || is_set(aggregate_timer.yfilter)) leaf_name_data.push_back(aggregate_timer.get_name_leafdata());
    if (always_compare_med.is_set || is_set(always_compare_med.yfilter)) leaf_name_data.push_back(always_compare_med.get_name_leafdata());
    if (cluster_id.is_set || is_set(cluster_id.yfilter)) leaf_name_data.push_back(cluster_id.get_name_leafdata());
    if (deterministic_med.is_set || is_set(deterministic_med.yfilter)) leaf_name_data.push_back(deterministic_med.get_name_leafdata());
    if (dmzlink_bw.is_set || is_set(dmzlink_bw.yfilter)) leaf_name_data.push_back(dmzlink_bw.get_name_leafdata());
    if (enforce_first_as.is_set || is_set(enforce_first_as.yfilter)) leaf_name_data.push_back(enforce_first_as.get_name_leafdata());
    if (enhanced_error.is_set || is_set(enhanced_error.yfilter)) leaf_name_data.push_back(enhanced_error.get_name_leafdata());
    if (fast_external_fallover.is_set || is_set(fast_external_fallover.yfilter)) leaf_name_data.push_back(fast_external_fallover.get_name_leafdata());
    if (log_neighbor_changes.is_set || is_set(log_neighbor_changes.yfilter)) leaf_name_data.push_back(log_neighbor_changes.get_name_leafdata());
    if (maxas_limit.is_set || is_set(maxas_limit.yfilter)) leaf_name_data.push_back(maxas_limit.get_name_leafdata());
    if (maxcommunity_limit.is_set || is_set(maxcommunity_limit.yfilter)) leaf_name_data.push_back(maxcommunity_limit.get_name_leafdata());
    if (redistribute_internal.is_set || is_set(redistribute_internal.yfilter)) leaf_name_data.push_back(redistribute_internal.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (scan_time.is_set || is_set(scan_time.yfilter)) leaf_name_data.push_back(scan_time.get_name_leafdata());
    if (soft_reconfig_backup.is_set || is_set(soft_reconfig_backup.yfilter)) leaf_name_data.push_back(soft_reconfig_backup.get_name_leafdata());
    if (suppress_inactive.is_set || is_set(suppress_inactive.yfilter)) leaf_name_data.push_back(suppress_inactive.get_name_leafdata());
    if (update_delay.is_set || is_set(update_delay.yfilter)) leaf_name_data.push_back(update_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "additional-paths")
    {
        if(additional_paths == nullptr)
        {
            additional_paths = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths>();
        }
        return additional_paths;
    }

    if(child_yang_name == "asnotation")
    {
        if(asnotation == nullptr)
        {
            asnotation = std::make_shared<Native::Router::Bgp::Bgp_::Asnotation>();
        }
        return asnotation;
    }

    if(child_yang_name == "bestpath")
    {
        if(bestpath == nullptr)
        {
            bestpath = std::make_shared<Native::Router::Bgp::Bgp_::Bestpath>();
        }
        return bestpath;
    }

    if(child_yang_name == "client-to-client")
    {
        if(client_to_client == nullptr)
        {
            client_to_client = std::make_shared<Native::Router::Bgp::Bgp_::ClientToClient>();
        }
        return client_to_client;
    }

    if(child_yang_name == "confederation")
    {
        if(confederation == nullptr)
        {
            confederation = std::make_shared<Native::Router::Bgp::Bgp_::Confederation>();
        }
        return confederation;
    }

    if(child_yang_name == "consistency-checker")
    {
        if(consistency_checker == nullptr)
        {
            consistency_checker = std::make_shared<Native::Router::Bgp::Bgp_::ConsistencyChecker>();
        }
        return consistency_checker;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::Router::Bgp::Bgp_::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Bgp::Bgp_::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Router::Bgp::Bgp_::GracefulRestart>();
        }
        return graceful_restart;
    }

    if(child_yang_name == "ha-mode")
    {
        if(ha_mode == nullptr)
        {
            ha_mode = std::make_shared<Native::Router::Bgp::Bgp_::HaMode>();
        }
        return ha_mode;
    }

    if(child_yang_name == "inject-map")
    {
        for(auto const & c : inject_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Bgp_::InjectMap>();
        c->parent = this;
        inject_map.push_back(c);
        return c;
    }

    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<Native::Router::Bgp::Bgp_::Nexthop>();
        }
        return nexthop;
    }

    if(child_yang_name == "nopeerup-delay")
    {
        if(nopeerup_delay == nullptr)
        {
            nopeerup_delay = std::make_shared<Native::Router::Bgp::Bgp_::NopeerupDelay>();
        }
        return nopeerup_delay;
    }

    if(child_yang_name == "recursion")
    {
        if(recursion == nullptr)
        {
            recursion = std::make_shared<Native::Router::Bgp::Bgp_::Recursion>();
        }
        return recursion;
    }

    if(child_yang_name == "regexp")
    {
        if(regexp == nullptr)
        {
            regexp = std::make_shared<Native::Router::Bgp::Bgp_::Regexp>();
        }
        return regexp;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::Bgp::Bgp_::RouteMap>();
        }
        return route_map;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::Bgp_::SlowPeer>();
        }
        return slow_peer;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Router::Bgp::Bgp_::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "update-group")
    {
        if(update_group == nullptr)
        {
            update_group = std::make_shared<Native::Router::Bgp::Bgp_::UpdateGroup>();
        }
        return update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(additional_paths != nullptr)
    {
        children["additional-paths"] = additional_paths;
    }

    if(asnotation != nullptr)
    {
        children["asnotation"] = asnotation;
    }

    if(bestpath != nullptr)
    {
        children["bestpath"] = bestpath;
    }

    if(client_to_client != nullptr)
    {
        children["client-to-client"] = client_to_client;
    }

    if(confederation != nullptr)
    {
        children["confederation"] = confederation;
    }

    if(consistency_checker != nullptr)
    {
        children["consistency-checker"] = consistency_checker;
    }

    if(dampening != nullptr)
    {
        children["dampening"] = dampening;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(graceful_restart != nullptr)
    {
        children["graceful-restart"] = graceful_restart;
    }

    if(ha_mode != nullptr)
    {
        children["ha-mode"] = ha_mode;
    }

    for (auto const & c : inject_map)
    {
        children[c->get_segment_path()] = c;
    }

    if(nexthop != nullptr)
    {
        children["nexthop"] = nexthop;
    }

    if(nopeerup_delay != nullptr)
    {
        children["nopeerup-delay"] = nopeerup_delay;
    }

    if(recursion != nullptr)
    {
        children["recursion"] = recursion;
    }

    if(regexp != nullptr)
    {
        children["regexp"] = regexp;
    }

    if(route_map != nullptr)
    {
        children["route-map"] = route_map;
    }

    if(slow_peer != nullptr)
    {
        children["slow-peer"] = slow_peer;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(update_group != nullptr)
    {
        children["update-group"] = update_group;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advertise-best-external")
    {
        advertise_best_external = value;
        advertise_best_external.value_namespace = name_space;
        advertise_best_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregate-timer")
    {
        aggregate_timer = value;
        aggregate_timer.value_namespace = name_space;
        aggregate_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "always-compare-med")
    {
        always_compare_med = value;
        always_compare_med.value_namespace = name_space;
        always_compare_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-id")
    {
        cluster_id = value;
        cluster_id.value_namespace = name_space;
        cluster_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deterministic-med")
    {
        deterministic_med = value;
        deterministic_med.value_namespace = name_space;
        deterministic_med.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw = value;
        dmzlink_bw.value_namespace = name_space;
        dmzlink_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as = value;
        enforce_first_as.value_namespace = name_space;
        enforce_first_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enhanced-error")
    {
        enhanced_error = value;
        enhanced_error.value_namespace = name_space;
        enhanced_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-external-fallover")
    {
        fast_external_fallover = value;
        fast_external_fallover.value_namespace = name_space;
        fast_external_fallover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes = value;
        log_neighbor_changes.value_namespace = name_space;
        log_neighbor_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxas-limit")
    {
        maxas_limit = value;
        maxas_limit.value_namespace = name_space;
        maxas_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxcommunity-limit")
    {
        maxcommunity_limit = value;
        maxcommunity_limit.value_namespace = name_space;
        maxcommunity_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribute-internal")
    {
        redistribute_internal = value;
        redistribute_internal.value_namespace = name_space;
        redistribute_internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scan-time")
    {
        scan_time = value;
        scan_time.value_namespace = name_space;
        scan_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-reconfig-backup")
    {
        soft_reconfig_backup = value;
        soft_reconfig_backup.value_namespace = name_space;
        soft_reconfig_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-inactive")
    {
        suppress_inactive = value;
        suppress_inactive.value_namespace = name_space;
        suppress_inactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-delay")
    {
        update_delay = value;
        update_delay.value_namespace = name_space;
        update_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advertise-best-external")
    {
        advertise_best_external.yfilter = yfilter;
    }
    if(value_path == "aggregate-timer")
    {
        aggregate_timer.yfilter = yfilter;
    }
    if(value_path == "always-compare-med")
    {
        always_compare_med.yfilter = yfilter;
    }
    if(value_path == "cluster-id")
    {
        cluster_id.yfilter = yfilter;
    }
    if(value_path == "deterministic-med")
    {
        deterministic_med.yfilter = yfilter;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw.yfilter = yfilter;
    }
    if(value_path == "enforce-first-as")
    {
        enforce_first_as.yfilter = yfilter;
    }
    if(value_path == "enhanced-error")
    {
        enhanced_error.yfilter = yfilter;
    }
    if(value_path == "fast-external-fallover")
    {
        fast_external_fallover.yfilter = yfilter;
    }
    if(value_path == "log-neighbor-changes")
    {
        log_neighbor_changes.yfilter = yfilter;
    }
    if(value_path == "maxas-limit")
    {
        maxas_limit.yfilter = yfilter;
    }
    if(value_path == "maxcommunity-limit")
    {
        maxcommunity_limit.yfilter = yfilter;
    }
    if(value_path == "redistribute-internal")
    {
        redistribute_internal.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "scan-time")
    {
        scan_time.yfilter = yfilter;
    }
    if(value_path == "soft-reconfig-backup")
    {
        soft_reconfig_backup.yfilter = yfilter;
    }
    if(value_path == "suppress-inactive")
    {
        suppress_inactive.yfilter = yfilter;
    }
    if(value_path == "update-delay")
    {
        update_delay.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "additional-paths" || name == "asnotation" || name == "bestpath" || name == "client-to-client" || name == "confederation" || name == "consistency-checker" || name == "dampening" || name == "default" || name == "graceful-restart" || name == "ha-mode" || name == "inject-map" || name == "nexthop" || name == "nopeerup-delay" || name == "recursion" || name == "regexp" || name == "route-map" || name == "slow-peer" || name == "transport" || name == "update-group" || name == "advertise-best-external" || name == "aggregate-timer" || name == "always-compare-med" || name == "cluster-id" || name == "deterministic-med" || name == "dmzlink-bw" || name == "enforce-first-as" || name == "enhanced-error" || name == "fast-external-fallover" || name == "log-neighbor-changes" || name == "maxas-limit" || name == "maxcommunity-limit" || name == "redistribute-internal" || name == "router-id" || name == "scan-time" || name == "soft-reconfig-backup" || name == "suppress-inactive" || name == "update-delay")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Asnotation::Asnotation()
    :
    dot{YType::empty, "dot"}
{
    yang_name = "asnotation"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::Asnotation::~Asnotation()
{
}

bool Native::Router::Bgp::Bgp_::Asnotation::has_data() const
{
    return dot.is_set;
}

bool Native::Router::Bgp::Bgp_::Asnotation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Asnotation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "asnotation";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Asnotation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Asnotation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot.is_set || is_set(dot.yfilter)) leaf_name_data.push_back(dot.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Asnotation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Asnotation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Asnotation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot")
    {
        dot = value;
        dot.value_namespace = name_space;
        dot.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Asnotation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot")
    {
        dot.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Asnotation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::NopeerupDelay::NopeerupDelay()
    :
    cold_boot{YType::uint16, "cold-boot"},
    nsf_switchover{YType::uint16, "nsf-switchover"},
    post_boot{YType::uint16, "post-boot"},
    user_initiated{YType::uint16, "user-initiated"}
{
    yang_name = "nopeerup-delay"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::NopeerupDelay::~NopeerupDelay()
{
}

bool Native::Router::Bgp::Bgp_::NopeerupDelay::has_data() const
{
    return cold_boot.is_set
	|| nsf_switchover.is_set
	|| post_boot.is_set
	|| user_initiated.is_set;
}

bool Native::Router::Bgp::Bgp_::NopeerupDelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cold_boot.yfilter)
	|| ydk::is_set(nsf_switchover.yfilter)
	|| ydk::is_set(post_boot.yfilter)
	|| ydk::is_set(user_initiated.yfilter);
}

std::string Native::Router::Bgp::Bgp_::NopeerupDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nopeerup-delay";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::NopeerupDelay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NopeerupDelay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cold_boot.is_set || is_set(cold_boot.yfilter)) leaf_name_data.push_back(cold_boot.get_name_leafdata());
    if (nsf_switchover.is_set || is_set(nsf_switchover.yfilter)) leaf_name_data.push_back(nsf_switchover.get_name_leafdata());
    if (post_boot.is_set || is_set(post_boot.yfilter)) leaf_name_data.push_back(post_boot.get_name_leafdata());
    if (user_initiated.is_set || is_set(user_initiated.yfilter)) leaf_name_data.push_back(user_initiated.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::NopeerupDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::NopeerupDelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::NopeerupDelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cold-boot")
    {
        cold_boot = value;
        cold_boot.value_namespace = name_space;
        cold_boot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-switchover")
    {
        nsf_switchover = value;
        nsf_switchover.value_namespace = name_space;
        nsf_switchover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "post-boot")
    {
        post_boot = value;
        post_boot.value_namespace = name_space;
        post_boot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-initiated")
    {
        user_initiated = value;
        user_initiated.value_namespace = name_space;
        user_initiated.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::NopeerupDelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cold-boot")
    {
        cold_boot.yfilter = yfilter;
    }
    if(value_path == "nsf-switchover")
    {
        nsf_switchover.yfilter = yfilter;
    }
    if(value_path == "post-boot")
    {
        post_boot.yfilter = yfilter;
    }
    if(value_path == "user-initiated")
    {
        user_initiated.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::NopeerupDelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cold-boot" || name == "nsf-switchover" || name == "post-boot" || name == "user-initiated")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Recursion::Recursion()
    :
    host{YType::empty, "host"}
{
    yang_name = "recursion"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::Recursion::~Recursion()
{
}

bool Native::Router::Bgp::Bgp_::Recursion::has_data() const
{
    return host.is_set;
}

bool Native::Router::Bgp::Bgp_::Recursion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Recursion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recursion";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Recursion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Recursion' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Recursion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Recursion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Recursion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Recursion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Recursion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::AdditionalPaths()
    :
    install{YType::empty, "install"},
    receive{YType::empty, "receive"}
    	,
    select(std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select>())
	,send(nullptr) // presence node
{
    select->parent = this;

    yang_name = "additional-paths"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::AdditionalPaths::~AdditionalPaths()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::has_data() const
{
    return install.is_set
	|| receive.is_set
	|| (select !=  nullptr && select->has_data())
	|| (send !=  nullptr && send->has_data());
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(install.yfilter)
	|| ydk::is_set(receive.yfilter)
	|| (select !=  nullptr && select->has_operation())
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::AdditionalPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdditionalPaths' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (install.is_set || is_set(install.yfilter)) leaf_name_data.push_back(install.get_name_leafdata());
    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "select")
    {
        if(select == nullptr)
        {
            select = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select>();
        }
        return select;
    }

    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(select != nullptr)
    {
        children["select"] = select;
    }

    if(send != nullptr)
    {
        children["send"] = send;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "install")
    {
        install = value;
        install.value_namespace = name_space;
        install.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "install")
    {
        install.yfilter = yfilter;
    }
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "select" || name == "send" || name == "install" || name == "receive")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Select()
    :
    all(nullptr) // presence node
	,backup(nullptr) // presence node
	,best(std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best>())
	,best_external(nullptr) // presence node
	,group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "select"; yang_parent_name = "additional-paths";
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::~Select()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::has_data() const
{
    return (all !=  nullptr && all->has_data())
	|| (backup !=  nullptr && backup->has_data())
	|| (best !=  nullptr && best->has_data())
	|| (best_external !=  nullptr && best_external->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (backup !=  nullptr && backup->has_operation())
	|| (best !=  nullptr && best->has_operation())
	|| (best_external !=  nullptr && best_external->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "select";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::AdditionalPaths::Select::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Select' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All>();
        }
        return all;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best>();
        }
        return best;
    }

    if(child_yang_name == "best-external")
    {
        if(best_external == nullptr)
        {
            best_external = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal>();
        }
        return best_external;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    if(best != nullptr)
    {
        children["best"] = best;
    }

    if(best_external != nullptr)
    {
        children["best-external"] = best_external;
    }

    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "backup" || name == "best" || name == "best-external" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::All()
    :
    best(std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best>())
	,group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "all"; yang_parent_name = "select";
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::~All()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::has_data() const
{
    return (best !=  nullptr && best->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::has_operation() const
{
    return is_set(yfilter)
	|| (best !=  nullptr && best->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'All' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best>();
        }
        return best;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(best != nullptr)
    {
        children["best"] = best;
    }

    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Best()
{
    yang_name = "best"; yang_parent_name = "all";
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::~Best()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Best' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::Range()
    :
    range{YType::uint8, "range"},
    group_best{YType::empty, "group-best"}
{
    yang_name = "range"; yang_parent_name = "best";
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::~Range()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::has_data() const
{
    return range.is_set
	|| group_best.is_set;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(group_best.yfilter);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (group_best.is_set || is_set(group_best.yfilter)) leaf_name_data.push_back(group_best.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-best")
    {
        group_best = value;
        group_best.value_namespace = name_space;
        group_best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "group-best")
    {
        group_best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::Best::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::GroupBest()
    :
    best{YType::uint8, "best"}
{
    yang_name = "group-best"; yang_parent_name = "all";
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::has_data() const
{
    return best.is_set;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best.yfilter);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupBest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::All::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::Backup()
    :
    best_external{YType::empty, "best-external"}
{
    yang_name = "backup"; yang_parent_name = "select";
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::~Backup()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::has_data() const
{
    return best_external.is_set;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best_external.yfilter);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_external.is_set || is_set(best_external.yfilter)) leaf_name_data.push_back(best_external.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best-external")
    {
        best_external = value;
        best_external.value_namespace = name_space;
        best_external.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best-external")
    {
        best_external.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best-external")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Best()
{
    yang_name = "best"; yang_parent_name = "select";
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::~Best()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Best' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::Range()
    :
    range{YType::uint8, "range"},
    all{YType::empty, "all"}
    	,
    group_best(nullptr) // presence node
{
    yang_name = "range"; yang_parent_name = "best";
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::~Range()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::has_data() const
{
    return range.is_set
	|| all.is_set
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(all.yfilter)
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[range='" <<range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_best != nullptr)
    {
        children["group-best"] = group_best;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-best" || name == "range" || name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::GroupBest()
    :
    all{YType::empty, "all"}
{
    yang_name = "group-best"; yang_parent_name = "range";
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::has_data() const
{
    return all.is_set;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupBest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::BestExternal()
    :
    backup{YType::empty, "backup"}
{
    yang_name = "best-external"; yang_parent_name = "select";
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::~BestExternal()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::has_data() const
{
    return backup.is_set;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup.yfilter);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-external";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BestExternal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup.is_set || is_set(backup.yfilter)) leaf_name_data.push_back(backup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup")
    {
        backup = value;
        backup.value_namespace = name_space;
        backup.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup")
    {
        backup.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::BestExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::GroupBest()
    :
    all{YType::empty, "all"},
    best{YType::uint8, "best"}
{
    yang_name = "group-best"; yang_parent_name = "select";
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::has_data() const
{
    return all.is_set
	|| best.is_set;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(best.yfilter);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupBest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Select::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "best")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Send::Send()
    :
    receive{YType::empty, "receive"}
{
    yang_name = "send"; yang_parent_name = "additional-paths";
}

Native::Router::Bgp::Bgp_::AdditionalPaths::Send::~Send()
{
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Send::has_data() const
{
    return receive.is_set;
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Send::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter);
}

std::string Native::Router::Bgp::Bgp_::AdditionalPaths::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::AdditionalPaths::Send::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Send' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::AdditionalPaths::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::AdditionalPaths::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::AdditionalPaths::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::AdditionalPaths::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Bestpath::Bestpath()
    :
    compare_routerid{YType::empty, "compare-routerid"}
    	,
    cost_community(std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::CostCommunity>())
	,igp_metric(std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::IgpMetric>())
	,med(std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::Med>())
{
    cost_community->parent = this;

    igp_metric->parent = this;

    med->parent = this;

    yang_name = "bestpath"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::Bestpath::~Bestpath()
{
}

bool Native::Router::Bgp::Bgp_::Bestpath::has_data() const
{
    return compare_routerid.is_set
	|| (cost_community !=  nullptr && cost_community->has_data())
	|| (igp_metric !=  nullptr && igp_metric->has_data())
	|| (med !=  nullptr && med->has_data());
}

bool Native::Router::Bgp::Bgp_::Bestpath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(compare_routerid.yfilter)
	|| (cost_community !=  nullptr && cost_community->has_operation())
	|| (igp_metric !=  nullptr && igp_metric->has_operation())
	|| (med !=  nullptr && med->has_operation());
}

std::string Native::Router::Bgp::Bgp_::Bestpath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bestpath";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Bestpath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bestpath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (compare_routerid.is_set || is_set(compare_routerid.yfilter)) leaf_name_data.push_back(compare_routerid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Bestpath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost-community")
    {
        if(cost_community == nullptr)
        {
            cost_community = std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::CostCommunity>();
        }
        return cost_community;
    }

    if(child_yang_name == "igp-metric")
    {
        if(igp_metric == nullptr)
        {
            igp_metric = std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::IgpMetric>();
        }
        return igp_metric;
    }

    if(child_yang_name == "med")
    {
        if(med == nullptr)
        {
            med = std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::Med>();
        }
        return med;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Bestpath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cost_community != nullptr)
    {
        children["cost-community"] = cost_community;
    }

    if(igp_metric != nullptr)
    {
        children["igp-metric"] = igp_metric;
    }

    if(med != nullptr)
    {
        children["med"] = med;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::Bestpath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "compare-routerid")
    {
        compare_routerid = value;
        compare_routerid.value_namespace = name_space;
        compare_routerid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Bestpath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "compare-routerid")
    {
        compare_routerid.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Bestpath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cost-community" || name == "igp-metric" || name == "med" || name == "compare-routerid")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::CostCommunity()
    :
    ignore{YType::empty, "ignore"}
{
    yang_name = "cost-community"; yang_parent_name = "bestpath";
}

Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::~CostCommunity()
{
}

bool Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::has_data() const
{
    return ignore.is_set;
}

bool Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost-community";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CostCommunity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Bestpath::CostCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::IgpMetric()
    :
    ignore{YType::empty, "ignore"}
{
    yang_name = "igp-metric"; yang_parent_name = "bestpath";
}

Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::~IgpMetric()
{
}

bool Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::has_data() const
{
    return ignore.is_set;
}

bool Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgpMetric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Bestpath::IgpMetric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Bestpath::Med::Med()
    :
    missing_at_worst{YType::empty, "missing-at-worst"}
    	,
    confed(nullptr) // presence node
{
    yang_name = "med"; yang_parent_name = "bestpath";
}

Native::Router::Bgp::Bgp_::Bestpath::Med::~Med()
{
}

bool Native::Router::Bgp::Bgp_::Bestpath::Med::has_data() const
{
    return missing_at_worst.is_set
	|| (confed !=  nullptr && confed->has_data());
}

bool Native::Router::Bgp::Bgp_::Bestpath::Med::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(missing_at_worst.yfilter)
	|| (confed !=  nullptr && confed->has_operation());
}

std::string Native::Router::Bgp::Bgp_::Bestpath::Med::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "med";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Bestpath::Med::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Med' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (missing_at_worst.is_set || is_set(missing_at_worst.yfilter)) leaf_name_data.push_back(missing_at_worst.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Bestpath::Med::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "confed")
    {
        if(confed == nullptr)
        {
            confed = std::make_shared<Native::Router::Bgp::Bgp_::Bestpath::Med::Confed>();
        }
        return confed;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Bestpath::Med::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(confed != nullptr)
    {
        children["confed"] = confed;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::Bestpath::Med::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "missing-at-worst")
    {
        missing_at_worst = value;
        missing_at_worst.value_namespace = name_space;
        missing_at_worst.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Bestpath::Med::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "missing-at-worst")
    {
        missing_at_worst.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Bestpath::Med::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "confed" || name == "missing-at-worst")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::Confed()
    :
    missing_at_worst{YType::empty, "missing-at-worst"}
{
    yang_name = "confed"; yang_parent_name = "med";
}

Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::~Confed()
{
}

bool Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::has_data() const
{
    return missing_at_worst.is_set;
}

bool Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(missing_at_worst.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confed";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Confed' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (missing_at_worst.is_set || is_set(missing_at_worst.yfilter)) leaf_name_data.push_back(missing_at_worst.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "missing-at-worst")
    {
        missing_at_worst = value;
        missing_at_worst.value_namespace = name_space;
        missing_at_worst.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "missing-at-worst")
    {
        missing_at_worst.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Bestpath::Med::Confed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "missing-at-worst")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::ClientToClient::ClientToClient()
    :
    reflection{YType::empty, "reflection"}
{
    yang_name = "client-to-client"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::ClientToClient::~ClientToClient()
{
}

bool Native::Router::Bgp::Bgp_::ClientToClient::has_data() const
{
    return reflection.is_set;
}

bool Native::Router::Bgp::Bgp_::ClientToClient::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reflection.yfilter);
}

std::string Native::Router::Bgp::Bgp_::ClientToClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-to-client";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::ClientToClient::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClientToClient' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reflection.is_set || is_set(reflection.yfilter)) leaf_name_data.push_back(reflection.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::ClientToClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::ClientToClient::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::ClientToClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reflection")
    {
        reflection = value;
        reflection.value_namespace = name_space;
        reflection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::ClientToClient::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reflection")
    {
        reflection.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::ClientToClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reflection")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Confederation::Confederation()
    :
    identifier{YType::uint32, "identifier"}
    	,
    peers(std::make_shared<Native::Router::Bgp::Bgp_::Confederation::Peers>())
{
    peers->parent = this;

    yang_name = "confederation"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::Confederation::~Confederation()
{
}

bool Native::Router::Bgp::Bgp_::Confederation::has_data() const
{
    return identifier.is_set
	|| (peers !=  nullptr && peers->has_data());
}

bool Native::Router::Bgp::Bgp_::Confederation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| (peers !=  nullptr && peers->has_operation());
}

std::string Native::Router::Bgp::Bgp_::Confederation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "confederation";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Confederation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Confederation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Confederation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peers")
    {
        if(peers == nullptr)
        {
            peers = std::make_shared<Native::Router::Bgp::Bgp_::Confederation::Peers>();
        }
        return peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Confederation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peers != nullptr)
    {
        children["peers"] = peers;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::Confederation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Confederation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Confederation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peers" || name == "identifier")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Confederation::Peers::Peers()
    :
    peers_as{YType::uint32, "peers-as"}
{
    yang_name = "peers"; yang_parent_name = "confederation";
}

Native::Router::Bgp::Bgp_::Confederation::Peers::~Peers()
{
}

bool Native::Router::Bgp::Bgp_::Confederation::Peers::has_data() const
{
    for (auto const & leaf : peers_as.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Bgp_::Confederation::Peers::has_operation() const
{
    for (auto const & leaf : peers_as.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(peers_as.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Confederation::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Confederation::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto peers_as_name_datas = peers_as.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), peers_as_name_datas.begin(), peers_as_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Confederation::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Confederation::Peers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Confederation::Peers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peers-as")
    {
        peers_as.append(value);
    }
}

void Native::Router::Bgp::Bgp_::Confederation::Peers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peers-as")
    {
        peers_as.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Confederation::Peers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peers-as")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::ConsistencyChecker::ConsistencyChecker()
    :
    auto_repair(nullptr) // presence node
	,error_message(nullptr) // presence node
{
    yang_name = "consistency-checker"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::ConsistencyChecker::~ConsistencyChecker()
{
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::has_data() const
{
    return (auto_repair !=  nullptr && auto_repair->has_data())
	|| (error_message !=  nullptr && error_message->has_data());
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::has_operation() const
{
    return is_set(yfilter)
	|| (auto_repair !=  nullptr && auto_repair->has_operation())
	|| (error_message !=  nullptr && error_message->has_operation());
}

std::string Native::Router::Bgp::Bgp_::ConsistencyChecker::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "consistency-checker";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::ConsistencyChecker::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConsistencyChecker' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::ConsistencyChecker::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-repair")
    {
        if(auto_repair == nullptr)
        {
            auto_repair = std::make_shared<Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair>();
        }
        return auto_repair;
    }

    if(child_yang_name == "error-message")
    {
        if(error_message == nullptr)
        {
            error_message = std::make_shared<Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage>();
        }
        return error_message;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::ConsistencyChecker::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_repair != nullptr)
    {
        children["auto-repair"] = auto_repair;
    }

    if(error_message != nullptr)
    {
        children["error-message"] = error_message;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::ConsistencyChecker::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Bgp_::ConsistencyChecker::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-repair" || name == "error-message")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::AutoRepair()
    :
    interval{YType::uint16, "interval"}
{
    yang_name = "auto-repair"; yang_parent_name = "consistency-checker";
}

Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::~AutoRepair()
{
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-repair";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoRepair' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::AutoRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::ErrorMessage()
    :
    interval{YType::uint16, "interval"}
{
    yang_name = "error-message"; yang_parent_name = "consistency-checker";
}

Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::~ErrorMessage()
{
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::has_data() const
{
    return interval.is_set;
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "error-message";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ErrorMessage' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::ConsistencyChecker::ErrorMessage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Dampening::Dampening()
    :
    route_map{YType::str, "route-map"}
    	,
    dampen(std::make_shared<Native::Router::Bgp::Bgp_::Dampening::Dampen>())
{
    dampen->parent = this;

    yang_name = "dampening"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::Dampening::~Dampening()
{
}

bool Native::Router::Bgp::Bgp_::Dampening::has_data() const
{
    return route_map.is_set
	|| (dampen !=  nullptr && dampen->has_data());
}

bool Native::Router::Bgp::Bgp_::Dampening::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (dampen !=  nullptr && dampen->has_operation());
}

std::string Native::Router::Bgp::Bgp_::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Dampening::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dampening' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dampen")
    {
        if(dampen == nullptr)
        {
            dampen = std::make_shared<Native::Router::Bgp::Bgp_::Dampening::Dampen>();
        }
        return dampen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dampen != nullptr)
    {
        children["dampen"] = dampen;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::Dampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Dampening::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Dampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dampen" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Dampening::Dampen::Dampen()
    :
    half_life_time{YType::uint8, "half-life-time"},
    max_suppress_time{YType::uint8, "max-suppress-time"},
    reuse_time{YType::uint16, "reuse-time"},
    suppress_time{YType::uint16, "suppress-time"}
{
    yang_name = "dampen"; yang_parent_name = "dampening";
}

Native::Router::Bgp::Bgp_::Dampening::Dampen::~Dampen()
{
}

bool Native::Router::Bgp::Bgp_::Dampening::Dampen::has_data() const
{
    return half_life_time.is_set
	|| max_suppress_time.is_set
	|| reuse_time.is_set
	|| suppress_time.is_set;
}

bool Native::Router::Bgp::Bgp_::Dampening::Dampen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(half_life_time.yfilter)
	|| ydk::is_set(max_suppress_time.yfilter)
	|| ydk::is_set(reuse_time.yfilter)
	|| ydk::is_set(suppress_time.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Dampening::Dampen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampen";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Dampening::Dampen::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dampen' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (half_life_time.is_set || is_set(half_life_time.yfilter)) leaf_name_data.push_back(half_life_time.get_name_leafdata());
    if (max_suppress_time.is_set || is_set(max_suppress_time.yfilter)) leaf_name_data.push_back(max_suppress_time.get_name_leafdata());
    if (reuse_time.is_set || is_set(reuse_time.yfilter)) leaf_name_data.push_back(reuse_time.get_name_leafdata());
    if (suppress_time.is_set || is_set(suppress_time.yfilter)) leaf_name_data.push_back(suppress_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Dampening::Dampen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Dampening::Dampen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Dampening::Dampen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "half-life-time")
    {
        half_life_time = value;
        half_life_time.value_namespace = name_space;
        half_life_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-suppress-time")
    {
        max_suppress_time = value;
        max_suppress_time.value_namespace = name_space;
        max_suppress_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reuse-time")
    {
        reuse_time = value;
        reuse_time.value_namespace = name_space;
        reuse_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-time")
    {
        suppress_time = value;
        suppress_time.value_namespace = name_space;
        suppress_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Dampening::Dampen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "half-life-time")
    {
        half_life_time.yfilter = yfilter;
    }
    if(value_path == "max-suppress-time")
    {
        max_suppress_time.yfilter = yfilter;
    }
    if(value_path == "reuse-time")
    {
        reuse_time.yfilter = yfilter;
    }
    if(value_path == "suppress-time")
    {
        suppress_time.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Dampening::Dampen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "half-life-time" || name == "max-suppress-time" || name == "reuse-time" || name == "suppress-time")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Default_::Default_()
    :
    ipv4_unicast{YType::boolean, "ipv4-unicast"},
    ipv6_nexthop{YType::empty, "ipv6-nexthop"},
    local_preference{YType::uint32, "local-preference"},
    route_target{YType::enumeration, "route-target"}
{
    yang_name = "default"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::Default_::~Default_()
{
}

bool Native::Router::Bgp::Bgp_::Default_::has_data() const
{
    return ipv4_unicast.is_set
	|| ipv6_nexthop.is_set
	|| local_preference.is_set
	|| route_target.is_set;
}

bool Native::Router::Bgp::Bgp_::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_unicast.yfilter)
	|| ydk::is_set(ipv6_nexthop.yfilter)
	|| ydk::is_set(local_preference.yfilter)
	|| ydk::is_set(route_target.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Default_::get_entity_path(Entity* ancestor) const
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

    if (ipv4_unicast.is_set || is_set(ipv4_unicast.yfilter)) leaf_name_data.push_back(ipv4_unicast.get_name_leafdata());
    if (ipv6_nexthop.is_set || is_set(ipv6_nexthop.yfilter)) leaf_name_data.push_back(ipv6_nexthop.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (route_target.is_set || is_set(route_target.yfilter)) leaf_name_data.push_back(route_target.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-unicast")
    {
        ipv4_unicast = value;
        ipv4_unicast.value_namespace = name_space;
        ipv4_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-nexthop")
    {
        ipv6_nexthop = value;
        ipv6_nexthop.value_namespace = name_space;
        ipv6_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-target")
    {
        route_target = value;
        route_target.value_namespace = name_space;
        route_target.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-unicast")
    {
        ipv4_unicast.yfilter = yfilter;
    }
    if(value_path == "ipv6-nexthop")
    {
        ipv6_nexthop.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
    if(value_path == "route-target")
    {
        route_target.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unicast" || name == "ipv6-nexthop" || name == "local-preference" || name == "route-target")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::GracefulRestart::GracefulRestart()
    :
    extended{YType::empty, "extended"},
    restart_time{YType::uint16, "restart-time"},
    stalepath_time{YType::uint16, "stalepath-time"}
{
    yang_name = "graceful-restart"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::GracefulRestart::~GracefulRestart()
{
}

bool Native::Router::Bgp::Bgp_::GracefulRestart::has_data() const
{
    return extended.is_set
	|| restart_time.is_set
	|| stalepath_time.is_set;
}

bool Native::Router::Bgp::Bgp_::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(stalepath_time.yfilter);
}

std::string Native::Router::Bgp::Bgp_::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulRestart' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended.is_set || is_set(extended.yfilter)) leaf_name_data.push_back(extended.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (stalepath_time.is_set || is_set(stalepath_time.yfilter)) leaf_name_data.push_back(stalepath_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended")
    {
        extended = value;
        extended.value_namespace = name_space;
        extended.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stalepath-time")
    {
        stalepath_time = value;
        stalepath_time.value_namespace = name_space;
        stalepath_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended")
    {
        extended.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "stalepath-time")
    {
        stalepath_time.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended" || name == "restart-time" || name == "stalepath-time")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::HaMode::HaMode()
    :
    sso(nullptr) // presence node
{
    yang_name = "ha-mode"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::HaMode::~HaMode()
{
}

bool Native::Router::Bgp::Bgp_::HaMode::has_data() const
{
    return (sso !=  nullptr && sso->has_data());
}

bool Native::Router::Bgp::Bgp_::HaMode::has_operation() const
{
    return is_set(yfilter)
	|| (sso !=  nullptr && sso->has_operation());
}

std::string Native::Router::Bgp::Bgp_::HaMode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-mode";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::HaMode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HaMode' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::HaMode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sso")
    {
        if(sso == nullptr)
        {
            sso = std::make_shared<Native::Router::Bgp::Bgp_::HaMode::Sso>();
        }
        return sso;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::HaMode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sso != nullptr)
    {
        children["sso"] = sso;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::HaMode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Bgp_::HaMode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Bgp_::HaMode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sso")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::HaMode::Sso::Sso()
    :
    prefer{YType::empty, "prefer"}
{
    yang_name = "sso"; yang_parent_name = "ha-mode";
}

Native::Router::Bgp::Bgp_::HaMode::Sso::~Sso()
{
}

bool Native::Router::Bgp::Bgp_::HaMode::Sso::has_data() const
{
    return prefer.is_set;
}

bool Native::Router::Bgp::Bgp_::HaMode::Sso::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefer.yfilter);
}

std::string Native::Router::Bgp::Bgp_::HaMode::Sso::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sso";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::HaMode::Sso::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sso' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::HaMode::Sso::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::HaMode::Sso::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::HaMode::Sso::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::HaMode::Sso::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::HaMode::Sso::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefer")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::InjectMap::InjectMap()
    :
    name{YType::str, "name"},
    copy_attributes{YType::empty, "copy-attributes"},
    exist_map{YType::str, "exist-map"}
{
    yang_name = "inject-map"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::InjectMap::~InjectMap()
{
}

bool Native::Router::Bgp::Bgp_::InjectMap::has_data() const
{
    return name.is_set
	|| copy_attributes.is_set
	|| exist_map.is_set;
}

bool Native::Router::Bgp::Bgp_::InjectMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(copy_attributes.yfilter)
	|| ydk::is_set(exist_map.yfilter);
}

std::string Native::Router::Bgp::Bgp_::InjectMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inject-map" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::InjectMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InjectMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (copy_attributes.is_set || is_set(copy_attributes.yfilter)) leaf_name_data.push_back(copy_attributes.get_name_leafdata());
    if (exist_map.is_set || is_set(exist_map.yfilter)) leaf_name_data.push_back(exist_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::InjectMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::InjectMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::InjectMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "copy-attributes")
    {
        copy_attributes = value;
        copy_attributes.value_namespace = name_space;
        copy_attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exist-map")
    {
        exist_map = value;
        exist_map.value_namespace = name_space;
        exist_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::InjectMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "copy-attributes")
    {
        copy_attributes.yfilter = yfilter;
    }
    if(value_path == "exist-map")
    {
        exist_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::InjectMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "copy-attributes" || name == "exist-map")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::RouteMap::RouteMap()
    :
    priority{YType::empty, "priority"}
{
    yang_name = "route-map"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::Bgp_::RouteMap::has_data() const
{
    return priority.is_set;
}

bool Native::Router::Bgp::Bgp_::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Router::Bgp::Bgp_::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::RouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
	,split_update_group(std::make_shared<Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::Bgp_::SlowPeer::has_data() const
{
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::Bgp_::SlowPeer::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::Bgp_::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::SlowPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SlowPeer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::Bgp_::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detection != nullptr)
    {
        children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        children["split-update-group"] = split_update_group;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::SlowPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Bgp_::SlowPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Bgp_::SlowPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "split-update-group")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::SlowPeer::Detection::Detection()
    :
    disable{YType::empty, "disable"},
    threshold{YType::uint16, "threshold"}
{
    yang_name = "detection"; yang_parent_name = "slow-peer";
}

Native::Router::Bgp::Bgp_::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::Bgp_::SlowPeer::Detection::has_data() const
{
    return disable.is_set
	|| threshold.is_set;
}

bool Native::Router::Bgp::Bgp_::SlowPeer::Detection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Router::Bgp::Bgp_::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::SlowPeer::Detection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Detection' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::SlowPeer::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::SlowPeer::Detection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::SlowPeer::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "threshold")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{
    yang_name = "split-update-group"; yang_parent_name = "slow-peer";
}

Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::has_data() const
{
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SplitUpdateGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{
    yang_name = "dynamic"; yang_parent_name = "split-update-group";
}

Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    return permanent.is_set;
}

bool Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permanent.yfilter);
}

std::string Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dynamic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permanent")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::UpdateGroup::UpdateGroup()
    :
    split(std::make_shared<Native::Router::Bgp::Bgp_::UpdateGroup::Split>())
{
    split->parent = this;

    yang_name = "update-group"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::UpdateGroup::~UpdateGroup()
{
}

bool Native::Router::Bgp::Bgp_::UpdateGroup::has_data() const
{
    return (split !=  nullptr && split->has_data());
}

bool Native::Router::Bgp::Bgp_::UpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (split !=  nullptr && split->has_operation());
}

std::string Native::Router::Bgp::Bgp_::UpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-group";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::UpdateGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::UpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split")
    {
        if(split == nullptr)
        {
            split = std::make_shared<Native::Router::Bgp::Bgp_::UpdateGroup::Split>();
        }
        return split;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::UpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(split != nullptr)
    {
        children["split"] = split;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::UpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Bgp_::UpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Bgp_::UpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "split")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::UpdateGroup::Split::Split()
    :
    as_override{YType::empty, "as-override"}
{
    yang_name = "split"; yang_parent_name = "update-group";
}

Native::Router::Bgp::Bgp_::UpdateGroup::Split::~Split()
{
}

bool Native::Router::Bgp::Bgp_::UpdateGroup::Split::has_data() const
{
    return as_override.is_set;
}

bool Native::Router::Bgp::Bgp_::UpdateGroup::Split::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_override.yfilter);
}

std::string Native::Router::Bgp::Bgp_::UpdateGroup::Split::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::UpdateGroup::Split::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Split' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_override.is_set || is_set(as_override.yfilter)) leaf_name_data.push_back(as_override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::UpdateGroup::Split::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::UpdateGroup::Split::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::UpdateGroup::Split::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-override")
    {
        as_override = value;
        as_override.value_namespace = name_space;
        as_override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::UpdateGroup::Split::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-override")
    {
        as_override.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::UpdateGroup::Split::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-override")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Nexthop::Nexthop()
    :
    route_map{YType::str, "route-map"}
    	,
    trigger(std::make_shared<Native::Router::Bgp::Bgp_::Nexthop::Trigger>())
{
    trigger->parent = this;

    yang_name = "nexthop"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::Nexthop::~Nexthop()
{
}

bool Native::Router::Bgp::Bgp_::Nexthop::has_data() const
{
    return route_map.is_set
	|| (trigger !=  nullptr && trigger->has_data());
}

bool Native::Router::Bgp::Bgp_::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (trigger !=  nullptr && trigger->has_operation());
}

std::string Native::Router::Bgp::Bgp_::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Nexthop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nexthop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger")
    {
        if(trigger == nullptr)
        {
            trigger = std::make_shared<Native::Router::Bgp::Bgp_::Nexthop::Trigger>();
        }
        return trigger;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trigger != nullptr)
    {
        children["trigger"] = trigger;
    }

    return children;
}

void Native::Router::Bgp::Bgp_::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trigger" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Nexthop::Trigger::Trigger()
    :
    delay{YType::uint8, "delay"},
    enable{YType::boolean, "enable"}
{
    yang_name = "trigger"; yang_parent_name = "nexthop";
}

Native::Router::Bgp::Bgp_::Nexthop::Trigger::~Trigger()
{
}

bool Native::Router::Bgp::Bgp_::Nexthop::Trigger::has_data() const
{
    return delay.is_set
	|| enable.is_set;
}

bool Native::Router::Bgp::Bgp_::Nexthop::Trigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Nexthop::Trigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Nexthop::Trigger::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trigger' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Nexthop::Trigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Nexthop::Trigger::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Nexthop::Trigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Nexthop::Trigger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Nexthop::Trigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "enable")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Regexp::Regexp()
    :
    deterministic{YType::empty, "deterministic"}
{
    yang_name = "regexp"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::Regexp::~Regexp()
{
}

bool Native::Router::Bgp::Bgp_::Regexp::has_data() const
{
    return deterministic.is_set;
}

bool Native::Router::Bgp::Bgp_::Regexp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(deterministic.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Regexp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "regexp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Regexp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Regexp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deterministic.is_set || is_set(deterministic.yfilter)) leaf_name_data.push_back(deterministic.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Regexp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Regexp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Regexp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deterministic")
    {
        deterministic = value;
        deterministic.value_namespace = name_space;
        deterministic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Regexp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deterministic")
    {
        deterministic.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Regexp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deterministic")
        return true;
    return false;
}

Native::Router::Bgp::Bgp_::Transport::Transport()
    :
    path_mtu_discovery{YType::boolean, "path-mtu-discovery"}
{
    yang_name = "transport"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Bgp_::Transport::~Transport()
{
}

bool Native::Router::Bgp::Bgp_::Transport::has_data() const
{
    return path_mtu_discovery.is_set;
}

bool Native::Router::Bgp::Bgp_::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_mtu_discovery.yfilter);
}

std::string Native::Router::Bgp::Bgp_::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Bgp_::Transport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_mtu_discovery.is_set || is_set(path_mtu_discovery.yfilter)) leaf_name_data.push_back(path_mtu_discovery.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Bgp_::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Bgp_::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Bgp_::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-mtu-discovery")
    {
        path_mtu_discovery = value;
        path_mtu_discovery.value_namespace = name_space;
        path_mtu_discovery.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Bgp_::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-mtu-discovery")
    {
        path_mtu_discovery.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Bgp_::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-mtu-discovery")
        return true;
    return false;
}

Native::Router::Bgp::DefaultInformation::DefaultInformation()
    :
    originate{YType::empty, "originate"}
{
    yang_name = "default-information"; yang_parent_name = "bgp";
}

Native::Router::Bgp::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Bgp::DefaultInformation::has_data() const
{
    return originate.is_set;
}

bool Native::Router::Bgp::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(originate.yfilter);
}

std::string Native::Router::Bgp::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::DefaultInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultInformation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originate.is_set || is_set(originate.yfilter)) leaf_name_data.push_back(originate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "originate")
    {
        originate = value;
        originate.value_namespace = name_space;
        originate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "originate")
    {
        originate.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "originate")
        return true;
    return false;
}

Native::Router::Bgp::Distance::Distance()
    :
    bgp(std::make_shared<Native::Router::Bgp::Distance::Bgp_>())
{
    bgp->parent = this;

    yang_name = "distance"; yang_parent_name = "bgp";
}

Native::Router::Bgp::Distance::~Distance()
{
}

bool Native::Router::Bgp::Distance::has_data() const
{
    for (std::size_t index=0; index<adm_distance.size(); index++)
    {
        if(adm_distance[index]->has_data())
            return true;
    }
    return (bgp !=  nullptr && bgp->has_data());
}

bool Native::Router::Bgp::Distance::has_operation() const
{
    for (std::size_t index=0; index<adm_distance.size(); index++)
    {
        if(adm_distance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Native::Router::Bgp::Distance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distance";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Distance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Distance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Distance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adm-distance")
    {
        for(auto const & c : adm_distance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Bgp::Distance::AdmDistance>();
        c->parent = this;
        adm_distance.push_back(c);
        return c;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Bgp::Distance::Bgp_>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Distance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : adm_distance)
    {
        children[c->get_segment_path()] = c;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    return children;
}

void Native::Router::Bgp::Distance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Distance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Distance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adm-distance" || name == "bgp")
        return true;
    return false;
}

Native::Router::Bgp::Distance::Bgp_::Bgp_()
    :
    extern_as{YType::uint16, "extern-as"},
    internal_as{YType::uint16, "internal-as"},
    local{YType::uint16, "local"}
{
    yang_name = "bgp"; yang_parent_name = "distance";
}

Native::Router::Bgp::Distance::Bgp_::~Bgp_()
{
}

bool Native::Router::Bgp::Distance::Bgp_::has_data() const
{
    return extern_as.is_set
	|| internal_as.is_set
	|| local.is_set;
}

bool Native::Router::Bgp::Distance::Bgp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extern_as.yfilter)
	|| ydk::is_set(internal_as.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Router::Bgp::Distance::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Distance::Bgp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extern_as.is_set || is_set(extern_as.yfilter)) leaf_name_data.push_back(extern_as.get_name_leafdata());
    if (internal_as.is_set || is_set(internal_as.yfilter)) leaf_name_data.push_back(internal_as.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Distance::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Distance::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Distance::Bgp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extern-as")
    {
        extern_as = value;
        extern_as.value_namespace = name_space;
        extern_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-as")
    {
        internal_as = value;
        internal_as.value_namespace = name_space;
        internal_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Distance::Bgp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extern-as")
    {
        extern_as.yfilter = yfilter;
    }
    if(value_path == "internal-as")
    {
        internal_as.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Distance::Bgp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extern-as" || name == "internal-as" || name == "local")
        return true;
    return false;
}

Native::Router::Bgp::Distance::AdmDistance::AdmDistance()
    :
    distance{YType::uint16, "distance"},
    srcip{YType::str, "srcip"},
    wildbits{YType::str, "wildbits"},
    acl{YType::str, "acl"}
{
    yang_name = "adm-distance"; yang_parent_name = "distance";
}

Native::Router::Bgp::Distance::AdmDistance::~AdmDistance()
{
}

bool Native::Router::Bgp::Distance::AdmDistance::has_data() const
{
    return distance.is_set
	|| srcip.is_set
	|| wildbits.is_set
	|| acl.is_set;
}

bool Native::Router::Bgp::Distance::AdmDistance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(srcip.yfilter)
	|| ydk::is_set(wildbits.yfilter)
	|| ydk::is_set(acl.yfilter);
}

std::string Native::Router::Bgp::Distance::AdmDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adm-distance" <<"[distance='" <<distance <<"']" <<"[srcip='" <<srcip <<"']" <<"[wildbits='" <<wildbits <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::Distance::AdmDistance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdmDistance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (srcip.is_set || is_set(srcip.yfilter)) leaf_name_data.push_back(srcip.get_name_leafdata());
    if (wildbits.is_set || is_set(wildbits.yfilter)) leaf_name_data.push_back(wildbits.get_name_leafdata());
    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::Distance::AdmDistance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::Distance::AdmDistance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::Distance::AdmDistance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srcip")
    {
        srcip = value;
        srcip.value_namespace = name_space;
        srcip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wildbits")
    {
        wildbits = value;
        wildbits.value_namespace = name_space;
        wildbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Distance::AdmDistance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "srcip")
    {
        srcip.yfilter = yfilter;
    }
    if(value_path == "wildbits")
    {
        wildbits.yfilter = yfilter;
    }
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Distance::AdmDistance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distance" || name == "srcip" || name == "wildbits" || name == "acl")
        return true;
    return false;
}

Native::Router::Bgp::DistributeList::DistributeList()
    :
    id{YType::str, "id"}
    	,
    in(nullptr) // presence node
	,out(nullptr) // presence node
{
    yang_name = "distribute-list"; yang_parent_name = "bgp";
}

Native::Router::Bgp::DistributeList::~DistributeList()
{
}

bool Native::Router::Bgp::DistributeList::has_data() const
{
    return id.is_set
	|| (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Router::Bgp::DistributeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Router::Bgp::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Router::Bgp::DistributeList::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Router::Bgp::DistributeList::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in != nullptr)
    {
        children["in"] = in;
    }

    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Router::Bgp::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out" || name == "id")
        return true;
    return false;
}

Native::Router::Bgp::DistributeList::In::In()
    :
    interface{YType::str, "interface"}
{
    yang_name = "in"; yang_parent_name = "distribute-list";
}

Native::Router::Bgp::DistributeList::In::~In()
{
}

bool Native::Router::Bgp::DistributeList::In::has_data() const
{
    return interface.is_set;
}

bool Native::Router::Bgp::DistributeList::In::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Router::Bgp::DistributeList::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::DistributeList::In::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'In' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::DistributeList::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::DistributeList::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::DistributeList::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::DistributeList::In::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::DistributeList::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Router::Bgp::DistributeList::Out::Out()
    :
    interface{YType::str, "interface"}
{
    yang_name = "out"; yang_parent_name = "distribute-list";
}

Native::Router::Bgp::DistributeList::Out::~Out()
{
}

bool Native::Router::Bgp::DistributeList::Out::has_data() const
{
    return interface.is_set;
}

bool Native::Router::Bgp::DistributeList::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Router::Bgp::DistributeList::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::DistributeList::Out::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Out' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::DistributeList::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::DistributeList::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::DistributeList::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::DistributeList::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::DistributeList::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Router::Bgp::MaximumPaths::MaximumPaths()
    :
    eibgp{YType::uint16, "eibgp"}
    	,
    external_rtfilter(std::make_shared<Native::Router::Bgp::MaximumPaths::ExternalRtfilter>())
	,ibgp(std::make_shared<Native::Router::Bgp::MaximumPaths::Ibgp>())
	,max_path(std::make_shared<Native::Router::Bgp::MaximumPaths::MaxPath>())
{
    external_rtfilter->parent = this;

    ibgp->parent = this;

    max_path->parent = this;

    yang_name = "maximum-paths"; yang_parent_name = "bgp";
}

Native::Router::Bgp::MaximumPaths::~MaximumPaths()
{
}

bool Native::Router::Bgp::MaximumPaths::has_data() const
{
    return eibgp.is_set
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_data())
	|| (ibgp !=  nullptr && ibgp->has_data())
	|| (max_path !=  nullptr && max_path->has_data());
}

bool Native::Router::Bgp::MaximumPaths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eibgp.yfilter)
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_operation())
	|| (ibgp !=  nullptr && ibgp->has_operation())
	|| (max_path !=  nullptr && max_path->has_operation());
}

std::string Native::Router::Bgp::MaximumPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-paths";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::MaximumPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumPaths' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eibgp.is_set || is_set(eibgp.yfilter)) leaf_name_data.push_back(eibgp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::MaximumPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external-rtfilter")
    {
        if(external_rtfilter == nullptr)
        {
            external_rtfilter = std::make_shared<Native::Router::Bgp::MaximumPaths::ExternalRtfilter>();
        }
        return external_rtfilter;
    }

    if(child_yang_name == "ibgp")
    {
        if(ibgp == nullptr)
        {
            ibgp = std::make_shared<Native::Router::Bgp::MaximumPaths::Ibgp>();
        }
        return ibgp;
    }

    if(child_yang_name == "max-path")
    {
        if(max_path == nullptr)
        {
            max_path = std::make_shared<Native::Router::Bgp::MaximumPaths::MaxPath>();
        }
        return max_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::MaximumPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external_rtfilter != nullptr)
    {
        children["external-rtfilter"] = external_rtfilter;
    }

    if(ibgp != nullptr)
    {
        children["ibgp"] = ibgp;
    }

    if(max_path != nullptr)
    {
        children["max-path"] = max_path;
    }

    return children;
}

void Native::Router::Bgp::MaximumPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eibgp")
    {
        eibgp = value;
        eibgp.value_namespace = name_space;
        eibgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::MaximumPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eibgp")
    {
        eibgp.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::MaximumPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-rtfilter" || name == "ibgp" || name == "max-path" || name == "eibgp")
        return true;
    return false;
}

Native::Router::Bgp::MaximumPaths::MaxPath::MaxPath()
    :
    max{YType::uint16, "max"}
{
    yang_name = "max-path"; yang_parent_name = "maximum-paths";
}

Native::Router::Bgp::MaximumPaths::MaxPath::~MaxPath()
{
}

bool Native::Router::Bgp::MaximumPaths::MaxPath::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::MaximumPaths::MaxPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Router::Bgp::MaximumPaths::MaxPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-path";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::MaximumPaths::MaxPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxPath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::MaximumPaths::MaxPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::MaximumPaths::MaxPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::MaximumPaths::MaxPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::MaximumPaths::MaxPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::MaximumPaths::MaxPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max")
        return true;
    return false;
}

Native::Router::Bgp::MaximumPaths::ExternalRtfilter::ExternalRtfilter()
    :
    max{YType::uint16, "max"}
{
    yang_name = "external-rtfilter"; yang_parent_name = "maximum-paths";
}

Native::Router::Bgp::MaximumPaths::ExternalRtfilter::~ExternalRtfilter()
{
}

bool Native::Router::Bgp::MaximumPaths::ExternalRtfilter::has_data() const
{
    return max.is_set;
}

bool Native::Router::Bgp::MaximumPaths::ExternalRtfilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Router::Bgp::MaximumPaths::ExternalRtfilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-rtfilter";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::MaximumPaths::ExternalRtfilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalRtfilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::MaximumPaths::ExternalRtfilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::MaximumPaths::ExternalRtfilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::MaximumPaths::ExternalRtfilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::MaximumPaths::ExternalRtfilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::MaximumPaths::ExternalRtfilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max")
        return true;
    return false;
}

Native::Router::Bgp::MaximumPaths::Ibgp::Ibgp()
    :
    max{YType::uint16, "max"},
    unequal_cost{YType::uint16, "unequal-cost"}
{
    yang_name = "ibgp"; yang_parent_name = "maximum-paths";
}

Native::Router::Bgp::MaximumPaths::Ibgp::~Ibgp()
{
}

bool Native::Router::Bgp::MaximumPaths::Ibgp::has_data() const
{
    return max.is_set
	|| unequal_cost.is_set;
}

bool Native::Router::Bgp::MaximumPaths::Ibgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(unequal_cost.yfilter);
}

std::string Native::Router::Bgp::MaximumPaths::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";

    return path_buffer.str();

}

const EntityPath Native::Router::Bgp::MaximumPaths::Ibgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ibgp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (unequal_cost.is_set || is_set(unequal_cost.yfilter)) leaf_name_data.push_back(unequal_cost.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Bgp::MaximumPaths::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Bgp::MaximumPaths::Ibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Bgp::MaximumPaths::Ibgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost = value;
        unequal_cost.value_namespace = name_space;
        unequal_cost.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::MaximumPaths::Ibgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "unequal-cost")
    {
        unequal_cost.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::MaximumPaths::Ibgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "unequal-cost")
        return true;
    return false;
}

const Enum::YLeaf Native::Mpls::TrafficEng::DsTe::BcModel::mam {0, "mam"};

const Enum::YLeaf Native::Mpls::TrafficEng::DsTe::Mode::ietf {0, "ietf"};
const Enum::YLeaf Native::Mpls::TrafficEng::DsTe::Mode::migration {1, "migration"};

const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Metric::igp {0, "igp"};
const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::Metric::te {1, "te"};

const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::Adjacency::protected_ {0, "protected"};
const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::PathSelection::SegmentRouting::Adjacency::unprotected {1, "unprotected"};

const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::Type::link {0, "link"};
const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::Type::node {1, "node"};
const Enum::YLeaf Native::Mpls::TrafficEng::Lsp::Attributes::MplsTeModeConfigLspAttr::Pce::DisjointPath::Type::srlg {2, "srlg"};

const Enum::YLeaf Native::Mpls::TrafficEng::PathSelection::Metric::igp {0, "igp"};
const Enum::YLeaf Native::Mpls::TrafficEng::PathSelection::Metric::te {1, "te"};

const Enum::YLeaf Native::Router::Bgp::Bgp_::Default_::RouteTarget::filter {0, "filter"};


}
}

