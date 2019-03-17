
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_103.hpp"
#include "Cisco_IOS_XE_native_104.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::Tunnel::Cemoudp::Reserve::Reserve()
    :
    acr{YType::uint8, "acr"}
{

    yang_name = "reserve"; yang_parent_name = "cemoudp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Cemoudp::Reserve::~Reserve()
{
}

bool Native::Interface::Tunnel::Cemoudp::Reserve::has_data() const
{
    if (is_presence_container) return true;
    return acr.is_set;
}

bool Native::Interface::Tunnel::Cemoudp::Reserve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acr.yfilter);
}

std::string Native::Interface::Tunnel::Cemoudp::Reserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Cemoudp::Reserve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr.is_set || is_set(acr.yfilter)) leaf_name_data.push_back(acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Cemoudp::Reserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Cemoudp::Reserve::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Cemoudp::Reserve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acr")
    {
        acr = value;
        acr.value_namespace = name_space;
        acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Cemoudp::Reserve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acr")
    {
        acr.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Cemoudp::Reserve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acr")
        return true;
    return false;
}

Native::Interface::Tunnel::CwsTunnel::CwsTunnel()
    :
    in{YType::empty, "in"}
        ,
    out(std::make_shared<Native::Interface::Tunnel::CwsTunnel::Out>())
{
    out->parent = this;

    yang_name = "cws-tunnel"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::CwsTunnel::~CwsTunnel()
{
}

bool Native::Interface::Tunnel::CwsTunnel::has_data() const
{
    if (is_presence_container) return true;
    return in.is_set
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::Tunnel::CwsTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::Tunnel::CwsTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cws-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::CwsTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::CwsTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::Tunnel::CwsTunnel::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::CwsTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(out != nullptr)
    {
        _children["out"] = out;
    }

    return _children;
}

void Native::Interface::Tunnel::CwsTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::CwsTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::CwsTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out" || name == "in")
        return true;
    return false;
}

Native::Interface::Tunnel::CwsTunnel::Out::Out()
    :
    tunnel_number{YType::uint16, "tunnel-number"}
{

    yang_name = "out"; yang_parent_name = "cws-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::CwsTunnel::Out::~Out()
{
}

bool Native::Interface::Tunnel::CwsTunnel::Out::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_number.is_set;
}

bool Native::Interface::Tunnel::CwsTunnel::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_number.yfilter);
}

std::string Native::Interface::Tunnel::CwsTunnel::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::CwsTunnel::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_number.is_set || is_set(tunnel_number.yfilter)) leaf_name_data.push_back(tunnel_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::CwsTunnel::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::CwsTunnel::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::CwsTunnel::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number = value;
        tunnel_number.value_namespace = name_space;
        tunnel_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::CwsTunnel::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::CwsTunnel::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-number")
        return true;
    return false;
}

Native::Interface::Tunnel::L2protocolTunnel::L2protocolTunnel()
    :
    cdp{YType::empty, "cdp"},
    stp{YType::empty, "stp"},
    vtp{YType::empty, "vtp"}
        ,
    drop_threshold(std::make_shared<Native::Interface::Tunnel::L2protocolTunnel::DropThreshold>())
    , shutdown_threshold(std::make_shared<Native::Interface::Tunnel::L2protocolTunnel::ShutdownThreshold>())
{
    drop_threshold->parent = this;
    shutdown_threshold->parent = this;

    yang_name = "l2protocol-tunnel"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::L2protocolTunnel::~L2protocolTunnel()
{
}

bool Native::Interface::Tunnel::L2protocolTunnel::has_data() const
{
    if (is_presence_container) return true;
    return cdp.is_set
	|| stp.is_set
	|| vtp.is_set
	|| (drop_threshold !=  nullptr && drop_threshold->has_data())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_data());
}

bool Native::Interface::Tunnel::L2protocolTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter)
	|| (drop_threshold !=  nullptr && drop_threshold->has_operation())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_operation());
}

std::string Native::Interface::Tunnel::L2protocolTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2protocol-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::L2protocolTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::L2protocolTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "drop-threshold")
    {
        if(drop_threshold == nullptr)
        {
            drop_threshold = std::make_shared<Native::Interface::Tunnel::L2protocolTunnel::DropThreshold>();
        }
        return drop_threshold;
    }

    if(child_yang_name == "shutdown-threshold")
    {
        if(shutdown_threshold == nullptr)
        {
            shutdown_threshold = std::make_shared<Native::Interface::Tunnel::L2protocolTunnel::ShutdownThreshold>();
        }
        return shutdown_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::L2protocolTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(drop_threshold != nullptr)
    {
        _children["drop-threshold"] = drop_threshold;
    }

    if(shutdown_threshold != nullptr)
    {
        _children["shutdown-threshold"] = shutdown_threshold;
    }

    return _children;
}

void Native::Interface::Tunnel::L2protocolTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::L2protocolTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::L2protocolTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-threshold" || name == "shutdown-threshold" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::Tunnel::L2protocolTunnel::DropThreshold::DropThreshold()
    :
    packet_rate{YType::uint16, "packet-rate"},
    cdp{YType::uint16, "cdp"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{

    yang_name = "drop-threshold"; yang_parent_name = "l2protocol-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::L2protocolTunnel::DropThreshold::~DropThreshold()
{
}

bool Native::Interface::Tunnel::L2protocolTunnel::DropThreshold::has_data() const
{
    if (is_presence_container) return true;
    return packet_rate.is_set
	|| cdp.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::Tunnel::L2protocolTunnel::DropThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_rate.yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter);
}

std::string Native::Interface::Tunnel::L2protocolTunnel::DropThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::L2protocolTunnel::DropThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_rate.is_set || is_set(packet_rate.yfilter)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::L2protocolTunnel::DropThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::L2protocolTunnel::DropThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::L2protocolTunnel::DropThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-rate")
    {
        packet_rate = value;
        packet_rate.value_namespace = name_space;
        packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::L2protocolTunnel::DropThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-rate")
    {
        packet_rate.yfilter = yfilter;
    }
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::L2protocolTunnel::DropThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-rate" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::Tunnel::L2protocolTunnel::ShutdownThreshold::ShutdownThreshold()
    :
    packet_rate{YType::uint16, "packet-rate"},
    cdp{YType::uint16, "cdp"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{

    yang_name = "shutdown-threshold"; yang_parent_name = "l2protocol-tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::L2protocolTunnel::ShutdownThreshold::~ShutdownThreshold()
{
}

bool Native::Interface::Tunnel::L2protocolTunnel::ShutdownThreshold::has_data() const
{
    if (is_presence_container) return true;
    return packet_rate.is_set
	|| cdp.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::Tunnel::L2protocolTunnel::ShutdownThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_rate.yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter);
}

std::string Native::Interface::Tunnel::L2protocolTunnel::ShutdownThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::L2protocolTunnel::ShutdownThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_rate.is_set || is_set(packet_rate.yfilter)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::L2protocolTunnel::ShutdownThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::L2protocolTunnel::ShutdownThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::L2protocolTunnel::ShutdownThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-rate")
    {
        packet_rate = value;
        packet_rate.value_namespace = name_space;
        packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::L2protocolTunnel::ShutdownThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-rate")
    {
        packet_rate.yfilter = yfilter;
    }
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::L2protocolTunnel::ShutdownThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-rate" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::Tunnel::Encapsulation::Encapsulation()
    :
    dot1q(std::make_shared<Native::Interface::Tunnel::Encapsulation::Dot1Q>())
    , isl(std::make_shared<Native::Interface::Tunnel::Encapsulation::Isl>())
    , ppp(nullptr) // presence node
    , slip(nullptr) // presence node
    , frame_relay(nullptr) // presence node
{
    dot1q->parent = this;
    isl->parent = this;

    yang_name = "encapsulation"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Encapsulation::~Encapsulation()
{
}

bool Native::Interface::Tunnel::Encapsulation::has_data() const
{
    if (is_presence_container) return true;
    return (dot1q !=  nullptr && dot1q->has_data())
	|| (isl !=  nullptr && isl->has_data())
	|| (ppp !=  nullptr && ppp->has_data())
	|| (slip !=  nullptr && slip->has_data())
	|| (frame_relay !=  nullptr && frame_relay->has_data());
}

bool Native::Interface::Tunnel::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (isl !=  nullptr && isl->has_operation())
	|| (ppp !=  nullptr && ppp->has_operation())
	|| (slip !=  nullptr && slip->has_operation())
	|| (frame_relay !=  nullptr && frame_relay->has_operation());
}

std::string Native::Interface::Tunnel::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1Q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::Tunnel::Encapsulation::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "isl")
    {
        if(isl == nullptr)
        {
            isl = std::make_shared<Native::Interface::Tunnel::Encapsulation::Isl>();
        }
        return isl;
    }

    if(child_yang_name == "ppp")
    {
        if(ppp == nullptr)
        {
            ppp = std::make_shared<Native::Interface::Tunnel::Encapsulation::Ppp>();
        }
        return ppp;
    }

    if(child_yang_name == "slip")
    {
        if(slip == nullptr)
        {
            slip = std::make_shared<Native::Interface::Tunnel::Encapsulation::Slip>();
        }
        return slip;
    }

    if(child_yang_name == "frame-relay")
    {
        if(frame_relay == nullptr)
        {
            frame_relay = std::make_shared<Native::Interface::Tunnel::Encapsulation::FrameRelay>();
        }
        return frame_relay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dot1q != nullptr)
    {
        _children["dot1Q"] = dot1q;
    }

    if(isl != nullptr)
    {
        _children["isl"] = isl;
    }

    if(ppp != nullptr)
    {
        _children["ppp"] = ppp;
    }

    if(slip != nullptr)
    {
        _children["slip"] = slip;
    }

    if(frame_relay != nullptr)
    {
        _children["frame-relay"] = frame_relay;
    }

    return _children;
}

void Native::Interface::Tunnel::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1Q" || name == "isl" || name == "ppp" || name == "slip" || name == "frame-relay")
        return true;
    return false;
}

Native::Interface::Tunnel::Encapsulation::Dot1Q::Dot1Q()
    :
    vlan_id{YType::uint16, "vlan-id"},
    native{YType::empty, "native"}
{

    yang_name = "dot1Q"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Encapsulation::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::Tunnel::Encapsulation::Dot1Q::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set
	|| native.is_set;
}

bool Native::Interface::Tunnel::Encapsulation::Dot1Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(native.yfilter);
}

std::string Native::Interface::Tunnel::Encapsulation::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1Q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Encapsulation::Dot1Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (native.is_set || is_set(native.yfilter)) leaf_name_data.push_back(native.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Encapsulation::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Encapsulation::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Encapsulation::Dot1Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "native")
    {
        native = value;
        native.value_namespace = name_space;
        native.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Encapsulation::Dot1Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "native")
    {
        native.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Encapsulation::Dot1Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id" || name == "native")
        return true;
    return false;
}

Native::Interface::Tunnel::Encapsulation::Isl::Isl()
    :
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "isl"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Encapsulation::Isl::~Isl()
{
}

bool Native::Interface::Tunnel::Encapsulation::Isl::has_data() const
{
    if (is_presence_container) return true;
    return vlan_id.is_set;
}

bool Native::Interface::Tunnel::Encapsulation::Isl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Native::Interface::Tunnel::Encapsulation::Isl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Encapsulation::Isl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Encapsulation::Isl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Encapsulation::Isl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Encapsulation::Isl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Encapsulation::Isl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Encapsulation::Isl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id")
        return true;
    return false;
}

Native::Interface::Tunnel::Encapsulation::Ppp::Ppp()
{

    yang_name = "ppp"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Encapsulation::Ppp::~Ppp()
{
}

bool Native::Interface::Tunnel::Encapsulation::Ppp::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::Tunnel::Encapsulation::Ppp::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Encapsulation::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Encapsulation::Ppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Encapsulation::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Encapsulation::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Encapsulation::Ppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Encapsulation::Ppp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Encapsulation::Ppp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Tunnel::Encapsulation::Slip::Slip()
{

    yang_name = "slip"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Encapsulation::Slip::~Slip()
{
}

bool Native::Interface::Tunnel::Encapsulation::Slip::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::Tunnel::Encapsulation::Slip::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Encapsulation::Slip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Encapsulation::Slip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Encapsulation::Slip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Encapsulation::Slip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Encapsulation::Slip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Encapsulation::Slip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Encapsulation::Slip::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Tunnel::Encapsulation::FrameRelay::FrameRelay()
    :
    ietf{YType::empty, "ietf"}
{

    yang_name = "frame-relay"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Encapsulation::FrameRelay::~FrameRelay()
{
}

bool Native::Interface::Tunnel::Encapsulation::FrameRelay::has_data() const
{
    if (is_presence_container) return true;
    return ietf.is_set;
}

bool Native::Interface::Tunnel::Encapsulation::FrameRelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ietf.yfilter);
}

std::string Native::Interface::Tunnel::Encapsulation::FrameRelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Encapsulation::FrameRelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ietf.is_set || is_set(ietf.yfilter)) leaf_name_data.push_back(ietf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Encapsulation::FrameRelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Encapsulation::FrameRelay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Encapsulation::FrameRelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ietf")
    {
        ietf = value;
        ietf.value_namespace = name_space;
        ietf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Encapsulation::FrameRelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ietf")
    {
        ietf.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Encapsulation::FrameRelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ietf")
        return true;
    return false;
}

Native::Interface::Tunnel::FairQueueConf::FairQueueConf()
    :
    fair_queue{YType::boolean, "fair-queue"}
{

    yang_name = "fair-queue-conf"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::FairQueueConf::~FairQueueConf()
{
}

bool Native::Interface::Tunnel::FairQueueConf::has_data() const
{
    if (is_presence_container) return true;
    return fair_queue.is_set;
}

bool Native::Interface::Tunnel::FairQueueConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fair_queue.yfilter);
}

std::string Native::Interface::Tunnel::FairQueueConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::FairQueueConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fair_queue.is_set || is_set(fair_queue.yfilter)) leaf_name_data.push_back(fair_queue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::FairQueueConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::FairQueueConf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::FairQueueConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fair-queue")
    {
        fair_queue = value;
        fair_queue.value_namespace = name_space;
        fair_queue.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::FairQueueConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fair-queue")
    {
        fair_queue.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::FairQueueConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fair-queue")
        return true;
    return false;
}

Native::Interface::Tunnel::FairQueue::FairQueue()
    :
    incomplete{YType::empty, "incomplete"}
{

    yang_name = "fair-queue"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::FairQueue::~FairQueue()
{
}

bool Native::Interface::Tunnel::FairQueue::has_data() const
{
    if (is_presence_container) return true;
    return incomplete.is_set;
}

bool Native::Interface::Tunnel::FairQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incomplete.yfilter);
}

std::string Native::Interface::Tunnel::FairQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::FairQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incomplete.is_set || is_set(incomplete.yfilter)) leaf_name_data.push_back(incomplete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::FairQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::FairQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::FairQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incomplete")
    {
        incomplete = value;
        incomplete.value_namespace = name_space;
        incomplete.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::FairQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incomplete")
    {
        incomplete.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::FairQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incomplete")
        return true;
    return false;
}

Native::Interface::Tunnel::Flowcontrol::Flowcontrol()
    :
    receive{YType::enumeration, "receive"},
    send{YType::enumeration, "send"}
{

    yang_name = "flowcontrol"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Flowcontrol::~Flowcontrol()
{
}

bool Native::Interface::Tunnel::Flowcontrol::has_data() const
{
    if (is_presence_container) return true;
    return receive.is_set
	|| send.is_set;
}

bool Native::Interface::Tunnel::Flowcontrol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(send.yfilter);
}

std::string Native::Interface::Tunnel::Flowcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flowcontrol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Flowcontrol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (send.is_set || is_set(send.yfilter)) leaf_name_data.push_back(send.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Flowcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Flowcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Flowcontrol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send")
    {
        send = value;
        send.value_namespace = name_space;
        send.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Flowcontrol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "send")
    {
        send.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Flowcontrol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "send")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::Isis()
    :
    lsp_interval{YType::uint32, "Cisco-IOS-XE-isis:lsp-interval"},
    mesh_group{YType::str, "Cisco-IOS-XE-isis:mesh-group"},
    network{YType::enumeration, "Cisco-IOS-XE-isis:network"},
    protocol{YType::enumeration, "Cisco-IOS-XE-isis:protocol"},
    retransmit_interval{YType::uint16, "Cisco-IOS-XE-isis:retransmit-interval"},
    retransmit_throttle_interval{YType::uint16, "Cisco-IOS-XE-isis:retransmit-throttle-interval"},
    tag{YType::uint32, "Cisco-IOS-XE-isis:tag"}
        ,
    adjacency_filter(std::make_shared<Native::Interface::Tunnel::Isis::AdjacencyFilter>())
    , advertise(std::make_shared<Native::Interface::Tunnel::Isis::Advertise>())
    , authentication(std::make_shared<Native::Interface::Tunnel::Isis::Authentication>())
    , circuit_type(nullptr) // presence node
    , csnp_interval(std::make_shared<Native::Interface::Tunnel::Isis::CsnpInterval>())
    , hello(std::make_shared<Native::Interface::Tunnel::Isis::Hello>())
    , hello_interval(std::make_shared<Native::Interface::Tunnel::Isis::HelloInterval>())
    , hello_multiplier(std::make_shared<Native::Interface::Tunnel::Isis::HelloMultiplier>())
    , ipv6(std::make_shared<Native::Interface::Tunnel::Isis::Ipv6>())
    , metric(std::make_shared<Native::Interface::Tunnel::Isis::Metric>())
    , password(std::make_shared<Native::Interface::Tunnel::Isis::Password>())
    , priority(std::make_shared<Native::Interface::Tunnel::Isis::Priority>())
    , bfd(nullptr) // presence node
    , three_way_handshake(nullptr) // presence node
{
    adjacency_filter->parent = this;
    advertise->parent = this;
    authentication->parent = this;
    csnp_interval->parent = this;
    hello->parent = this;
    hello_interval->parent = this;
    hello_multiplier->parent = this;
    ipv6->parent = this;
    metric->parent = this;
    password->parent = this;
    priority->parent = this;

    yang_name = "isis"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Isis::~Isis()
{
}

bool Native::Interface::Tunnel::Isis::has_data() const
{
    if (is_presence_container) return true;
    return lsp_interval.is_set
	|| mesh_group.is_set
	|| network.is_set
	|| protocol.is_set
	|| retransmit_interval.is_set
	|| retransmit_throttle_interval.is_set
	|| tag.is_set
	|| (adjacency_filter !=  nullptr && adjacency_filter->has_data())
	|| (advertise !=  nullptr && advertise->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (circuit_type !=  nullptr && circuit_type->has_data())
	|| (csnp_interval !=  nullptr && csnp_interval->has_data())
	|| (hello !=  nullptr && hello->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data())
	|| (hello_multiplier !=  nullptr && hello_multiplier->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (three_way_handshake !=  nullptr && three_way_handshake->has_data());
}

bool Native::Interface::Tunnel::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_interval.yfilter)
	|| ydk::is_set(mesh_group.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(retransmit_throttle_interval.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (adjacency_filter !=  nullptr && adjacency_filter->has_operation())
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (circuit_type !=  nullptr && circuit_type->has_operation())
	|| (csnp_interval !=  nullptr && csnp_interval->has_operation())
	|| (hello !=  nullptr && hello->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (hello_multiplier !=  nullptr && hello_multiplier->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (three_way_handshake !=  nullptr && three_way_handshake->has_operation());
}

std::string Native::Interface::Tunnel::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_interval.is_set || is_set(lsp_interval.yfilter)) leaf_name_data.push_back(lsp_interval.get_name_leafdata());
    if (mesh_group.is_set || is_set(mesh_group.yfilter)) leaf_name_data.push_back(mesh_group.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (retransmit_throttle_interval.is_set || is_set(retransmit_throttle_interval.yfilter)) leaf_name_data.push_back(retransmit_throttle_interval.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-isis:adjacency-filter")
    {
        if(adjacency_filter == nullptr)
        {
            adjacency_filter = std::make_shared<Native::Interface::Tunnel::Isis::AdjacencyFilter>();
        }
        return adjacency_filter;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Interface::Tunnel::Isis::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Tunnel::Isis::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:circuit-type")
    {
        if(circuit_type == nullptr)
        {
            circuit_type = std::make_shared<Native::Interface::Tunnel::Isis::CircuitType>();
        }
        return circuit_type;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:csnp-interval")
    {
        if(csnp_interval == nullptr)
        {
            csnp_interval = std::make_shared<Native::Interface::Tunnel::Isis::CsnpInterval>();
        }
        return csnp_interval;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Interface::Tunnel::Isis::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::Tunnel::Isis::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:hello-multiplier")
    {
        if(hello_multiplier == nullptr)
        {
            hello_multiplier = std::make_shared<Native::Interface::Tunnel::Isis::HelloMultiplier>();
        }
        return hello_multiplier;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::Tunnel::Isis::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Interface::Tunnel::Isis::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Interface::Tunnel::Isis::Password>();
        }
        return password;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Isis::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::Tunnel::Isis::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "Cisco-IOS-XE-isis:three-way-handshake")
    {
        if(three_way_handshake == nullptr)
        {
            three_way_handshake = std::make_shared<Native::Interface::Tunnel::Isis::ThreeWayHandshake>();
        }
        return three_way_handshake;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(adjacency_filter != nullptr)
    {
        _children["Cisco-IOS-XE-isis:adjacency-filter"] = adjacency_filter;
    }

    if(advertise != nullptr)
    {
        _children["Cisco-IOS-XE-isis:advertise"] = advertise;
    }

    if(authentication != nullptr)
    {
        _children["Cisco-IOS-XE-isis:authentication"] = authentication;
    }

    if(circuit_type != nullptr)
    {
        _children["Cisco-IOS-XE-isis:circuit-type"] = circuit_type;
    }

    if(csnp_interval != nullptr)
    {
        _children["Cisco-IOS-XE-isis:csnp-interval"] = csnp_interval;
    }

    if(hello != nullptr)
    {
        _children["Cisco-IOS-XE-isis:hello"] = hello;
    }

    if(hello_interval != nullptr)
    {
        _children["Cisco-IOS-XE-isis:hello-interval"] = hello_interval;
    }

    if(hello_multiplier != nullptr)
    {
        _children["Cisco-IOS-XE-isis:hello-multiplier"] = hello_multiplier;
    }

    if(ipv6 != nullptr)
    {
        _children["Cisco-IOS-XE-isis:ipv6"] = ipv6;
    }

    if(metric != nullptr)
    {
        _children["Cisco-IOS-XE-isis:metric"] = metric;
    }

    if(password != nullptr)
    {
        _children["Cisco-IOS-XE-isis:password"] = password;
    }

    if(priority != nullptr)
    {
        _children["Cisco-IOS-XE-isis:priority"] = priority;
    }

    if(bfd != nullptr)
    {
        _children["Cisco-IOS-XE-isis:bfd"] = bfd;
    }

    if(three_way_handshake != nullptr)
    {
        _children["Cisco-IOS-XE-isis:three-way-handshake"] = three_way_handshake;
    }

    return _children;
}

void Native::Interface::Tunnel::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-isis:lsp-interval")
    {
        lsp_interval = value;
        lsp_interval.value_namespace = name_space;
        lsp_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-isis:mesh-group")
    {
        mesh_group = value;
        mesh_group.value_namespace = name_space;
        mesh_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-isis:network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-isis:protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-isis:retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-isis:retransmit-throttle-interval")
    {
        retransmit_throttle_interval = value;
        retransmit_throttle_interval.value_namespace = name_space;
        retransmit_throttle_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-isis:tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-interval")
    {
        lsp_interval.yfilter = yfilter;
    }
    if(value_path == "mesh-group")
    {
        mesh_group.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "retransmit-throttle-interval")
    {
        retransmit_throttle_interval.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-filter" || name == "advertise" || name == "authentication" || name == "circuit-type" || name == "csnp-interval" || name == "hello" || name == "hello-interval" || name == "hello-multiplier" || name == "ipv6" || name == "metric" || name == "password" || name == "priority" || name == "bfd" || name == "three-way-handshake" || name == "lsp-interval" || name == "mesh-group" || name == "network" || name == "protocol" || name == "retransmit-interval" || name == "retransmit-throttle-interval" || name == "tag")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::AdjacencyFilter::AdjacencyFilter()
    :
    name{YType::str, "name"},
    match_all{YType::empty, "match-all"}
{

    yang_name = "adjacency-filter"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Isis::AdjacencyFilter::~AdjacencyFilter()
{
}

bool Native::Interface::Tunnel::Isis::AdjacencyFilter::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| match_all.is_set;
}

bool Native::Interface::Tunnel::Isis::AdjacencyFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(match_all.yfilter);
}

std::string Native::Interface::Tunnel::Isis::AdjacencyFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:adjacency-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::AdjacencyFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (match_all.is_set || is_set(match_all.yfilter)) leaf_name_data.push_back(match_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::AdjacencyFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::AdjacencyFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Isis::AdjacencyFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-all")
    {
        match_all = value;
        match_all.value_namespace = name_space;
        match_all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::AdjacencyFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "match-all")
    {
        match_all.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::AdjacencyFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "match-all")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::Advertise::Advertise()
    :
    prefix{YType::empty, "prefix"}
{

    yang_name = "advertise"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Isis::Advertise::~Advertise()
{
}

bool Native::Interface::Tunnel::Isis::Advertise::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set;
}

bool Native::Interface::Tunnel::Isis::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string Native::Interface::Tunnel::Isis::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:advertise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::Advertise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Isis::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::Authentication::Authentication()
    :
    mode(std::make_shared<Native::Interface::Tunnel::Isis::Authentication::Mode>())
    , key_chain(std::make_shared<Native::Interface::Tunnel::Isis::Authentication::KeyChain>())
    , send_only(nullptr) // presence node
{
    mode->parent = this;
    key_chain->parent = this;

    yang_name = "authentication"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Isis::Authentication::~Authentication()
{
}

bool Native::Interface::Tunnel::Isis::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return (mode !=  nullptr && mode->has_data())
	|| (key_chain !=  nullptr && key_chain->has_data())
	|| (send_only !=  nullptr && send_only->has_data());
}

bool Native::Interface::Tunnel::Isis::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (send_only !=  nullptr && send_only->has_operation());
}

std::string Native::Interface::Tunnel::Isis::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::Tunnel::Isis::Authentication::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::Tunnel::Isis::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "send-only")
    {
        if(send_only == nullptr)
        {
            send_only = std::make_shared<Native::Interface::Tunnel::Isis::Authentication::SendOnly>();
        }
        return send_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    if(key_chain != nullptr)
    {
        _children["key-chain"] = key_chain;
    }

    if(send_only != nullptr)
    {
        _children["send-only"] = send_only;
    }

    return _children;
}

void Native::Interface::Tunnel::Isis::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Isis::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Isis::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "key-chain" || name == "send-only")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::Authentication::Mode::Mode()
    :
    md5(nullptr) // presence node
    , text(nullptr) // presence node
{

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Isis::Authentication::Mode::~Mode()
{
}

bool Native::Interface::Tunnel::Isis::Authentication::Mode::has_data() const
{
    if (is_presence_container) return true;
    return (md5 !=  nullptr && md5->has_data())
	|| (text !=  nullptr && text->has_data());
}

bool Native::Interface::Tunnel::Isis::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (md5 !=  nullptr && md5->has_operation())
	|| (text !=  nullptr && text->has_operation());
}

std::string Native::Interface::Tunnel::Isis::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Tunnel::Isis::Authentication::Mode::Md5>();
        }
        return md5;
    }

    if(child_yang_name == "text")
    {
        if(text == nullptr)
        {
            text = std::make_shared<Native::Interface::Tunnel::Isis::Authentication::Mode::Text>();
        }
        return text;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(md5 != nullptr)
    {
        _children["md5"] = md5;
    }

    if(text != nullptr)
    {
        _children["text"] = text;
    }

    return _children;
}

void Native::Interface::Tunnel::Isis::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Isis::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Isis::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "text")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::Authentication::Mode::Md5::Md5()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "md5"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Isis::Authentication::Mode::Md5::~Md5()
{
}

bool Native::Interface::Tunnel::Isis::Authentication::Mode::Md5::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set;
}

bool Native::Interface::Tunnel::Isis::Authentication::Mode::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Interface::Tunnel::Isis::Authentication::Mode::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::Authentication::Mode::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::Authentication::Mode::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::Authentication::Mode::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Isis::Authentication::Mode::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::Authentication::Mode::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::Authentication::Mode::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::Authentication::Mode::Text::Text()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "text"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Isis::Authentication::Mode::Text::~Text()
{
}

bool Native::Interface::Tunnel::Isis::Authentication::Mode::Text::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set;
}

bool Native::Interface::Tunnel::Isis::Authentication::Mode::Text::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Interface::Tunnel::Isis::Authentication::Mode::Text::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::Authentication::Mode::Text::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::Authentication::Mode::Text::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::Authentication::Mode::Text::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Isis::Authentication::Mode::Text::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::Authentication::Mode::Text::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::Authentication::Mode::Text::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::Authentication::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
        ,
    key_chain_list(this, {"levels"})
{

    yang_name = "key-chain"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Isis::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Interface::Tunnel::Isis::Authentication::KeyChain::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<key_chain_list.len(); index++)
    {
        if(key_chain_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Interface::Tunnel::Isis::Authentication::KeyChain::has_operation() const
{
    for (std::size_t index=0; index<key_chain_list.len(); index++)
    {
        if(key_chain_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Tunnel::Isis::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::Authentication::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain-list")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Isis::Authentication::KeyChain::KeyChainList>();
        ent_->parent = this;
        key_chain_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : key_chain_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Isis::Authentication::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::Authentication::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::Authentication::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain-list" || name == "name")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::Authentication::KeyChain::KeyChainList::KeyChainList()
    :
    levels{YType::enumeration, "levels"},
    name{YType::str, "name"}
{

    yang_name = "key-chain-list"; yang_parent_name = "key-chain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Isis::Authentication::KeyChain::KeyChainList::~KeyChainList()
{
}

bool Native::Interface::Tunnel::Isis::Authentication::KeyChain::KeyChainList::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| name.is_set;
}

bool Native::Interface::Tunnel::Isis::Authentication::KeyChain::KeyChainList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Tunnel::Isis::Authentication::KeyChain::KeyChainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain-list";
    ADD_KEY_TOKEN(levels, "levels");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::Authentication::KeyChain::KeyChainList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::Authentication::KeyChain::KeyChainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::Authentication::KeyChain::KeyChainList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Isis::Authentication::KeyChain::KeyChainList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::Authentication::KeyChain::KeyChainList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::Authentication::KeyChain::KeyChainList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "name")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::Authentication::SendOnly::SendOnly()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "send-only"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Isis::Authentication::SendOnly::~SendOnly()
{
}

bool Native::Interface::Tunnel::Isis::Authentication::SendOnly::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set;
}

bool Native::Interface::Tunnel::Isis::Authentication::SendOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Interface::Tunnel::Isis::Authentication::SendOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::Authentication::SendOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::Authentication::SendOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::Authentication::SendOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Isis::Authentication::SendOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::Authentication::SendOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::Authentication::SendOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::CircuitType::CircuitType()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "circuit-type"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Isis::CircuitType::~CircuitType()
{
}

bool Native::Interface::Tunnel::Isis::CircuitType::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set;
}

bool Native::Interface::Tunnel::Isis::CircuitType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Interface::Tunnel::Isis::CircuitType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:circuit-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::CircuitType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::CircuitType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::CircuitType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Isis::CircuitType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::CircuitType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::CircuitType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::CsnpInterval::CsnpInterval()
    :
    value_{YType::uint16, "value"}
        ,
    csnp_interval_list(this, {"levels"})
{

    yang_name = "csnp-interval"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Isis::CsnpInterval::~CsnpInterval()
{
}

bool Native::Interface::Tunnel::Isis::CsnpInterval::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<csnp_interval_list.len(); index++)
    {
        if(csnp_interval_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Tunnel::Isis::CsnpInterval::has_operation() const
{
    for (std::size_t index=0; index<csnp_interval_list.len(); index++)
    {
        if(csnp_interval_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Isis::CsnpInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:csnp-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::CsnpInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::CsnpInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csnp-interval-list")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Isis::CsnpInterval::CsnpIntervalList>();
        ent_->parent = this;
        csnp_interval_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::CsnpInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : csnp_interval_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Isis::CsnpInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::CsnpInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::CsnpInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csnp-interval-list" || name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::CsnpInterval::CsnpIntervalList::CsnpIntervalList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint16, "value"}
{

    yang_name = "csnp-interval-list"; yang_parent_name = "csnp-interval"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Isis::CsnpInterval::CsnpIntervalList::~CsnpIntervalList()
{
}

bool Native::Interface::Tunnel::Isis::CsnpInterval::CsnpIntervalList::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Tunnel::Isis::CsnpInterval::CsnpIntervalList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Isis::CsnpInterval::CsnpIntervalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csnp-interval-list";
    ADD_KEY_TOKEN(levels, "levels");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::CsnpInterval::CsnpIntervalList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::CsnpInterval::CsnpIntervalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::CsnpInterval::CsnpIntervalList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Isis::CsnpInterval::CsnpIntervalList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::CsnpInterval::CsnpIntervalList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::CsnpInterval::CsnpIntervalList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::Hello::Hello()
    :
    padding(nullptr) // presence node
{

    yang_name = "hello"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Isis::Hello::~Hello()
{
}

bool Native::Interface::Tunnel::Isis::Hello::has_data() const
{
    if (is_presence_container) return true;
    return (padding !=  nullptr && padding->has_data());
}

bool Native::Interface::Tunnel::Isis::Hello::has_operation() const
{
    return is_set(yfilter)
	|| (padding !=  nullptr && padding->has_operation());
}

std::string Native::Interface::Tunnel::Isis::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::Hello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Interface::Tunnel::Isis::Hello::Padding>();
        }
        return padding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(padding != nullptr)
    {
        _children["padding"] = padding;
    }

    return _children;
}

void Native::Interface::Tunnel::Isis::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Isis::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Isis::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "padding")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::Hello::Padding::Padding()
    :
    always{YType::empty, "always"}
{

    yang_name = "padding"; yang_parent_name = "hello"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Isis::Hello::Padding::~Padding()
{
}

bool Native::Interface::Tunnel::Isis::Hello::Padding::has_data() const
{
    if (is_presence_container) return true;
    return always.is_set;
}

bool Native::Interface::Tunnel::Isis::Hello::Padding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter);
}

std::string Native::Interface::Tunnel::Isis::Hello::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::Hello::Padding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::Hello::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::Hello::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Isis::Hello::Padding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::Hello::Padding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::Hello::Padding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::HelloInterval::HelloInterval()
    :
    value_{YType::str, "value"}
        ,
    hello_interval_list(this, {"levels"})
{

    yang_name = "hello-interval"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Isis::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::Tunnel::Isis::HelloInterval::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hello_interval_list.len(); index++)
    {
        if(hello_interval_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Tunnel::Isis::HelloInterval::has_operation() const
{
    for (std::size_t index=0; index<hello_interval_list.len(); index++)
    {
        if(hello_interval_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Isis::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interval-list")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Isis::HelloInterval::HelloIntervalList>();
        ent_->parent = this;
        hello_interval_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hello_interval_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Isis::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interval-list" || name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::HelloInterval::HelloIntervalList::HelloIntervalList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{

    yang_name = "hello-interval-list"; yang_parent_name = "hello-interval"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Isis::HelloInterval::HelloIntervalList::~HelloIntervalList()
{
}

bool Native::Interface::Tunnel::Isis::HelloInterval::HelloIntervalList::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Tunnel::Isis::HelloInterval::HelloIntervalList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Isis::HelloInterval::HelloIntervalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval-list";
    ADD_KEY_TOKEN(levels, "levels");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::HelloInterval::HelloIntervalList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::HelloInterval::HelloIntervalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::HelloInterval::HelloIntervalList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Isis::HelloInterval::HelloIntervalList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::HelloInterval::HelloIntervalList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::HelloInterval::HelloIntervalList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::HelloMultiplier::HelloMultiplier()
    :
    value_{YType::uint16, "value"}
        ,
    hello_multiplier_list(this, {"levels"})
{

    yang_name = "hello-multiplier"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Isis::HelloMultiplier::~HelloMultiplier()
{
}

bool Native::Interface::Tunnel::Isis::HelloMultiplier::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hello_multiplier_list.len(); index++)
    {
        if(hello_multiplier_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Tunnel::Isis::HelloMultiplier::has_operation() const
{
    for (std::size_t index=0; index<hello_multiplier_list.len(); index++)
    {
        if(hello_multiplier_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Isis::HelloMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::HelloMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::HelloMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-multiplier-list")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Isis::HelloMultiplier::HelloMultiplierList>();
        ent_->parent = this;
        hello_multiplier_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::HelloMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : hello_multiplier_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Isis::HelloMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::HelloMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::HelloMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-multiplier-list" || name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::HelloMultiplier::HelloMultiplierList::HelloMultiplierList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint16, "value"}
{

    yang_name = "hello-multiplier-list"; yang_parent_name = "hello-multiplier"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Isis::HelloMultiplier::HelloMultiplierList::~HelloMultiplierList()
{
}

bool Native::Interface::Tunnel::Isis::HelloMultiplier::HelloMultiplierList::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Tunnel::Isis::HelloMultiplier::HelloMultiplierList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Isis::HelloMultiplier::HelloMultiplierList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-multiplier-list";
    ADD_KEY_TOKEN(levels, "levels");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::HelloMultiplier::HelloMultiplierList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::HelloMultiplier::HelloMultiplierList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::HelloMultiplier::HelloMultiplierList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Isis::HelloMultiplier::HelloMultiplierList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::HelloMultiplier::HelloMultiplierList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::HelloMultiplier::HelloMultiplierList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::Ipv6::Ipv6()
    :
    tag{YType::uint32, "tag"}
        ,
    metric(std::make_shared<Native::Interface::Tunnel::Isis::Ipv6::Metric>())
    , bfd(nullptr) // presence node
{
    metric->parent = this;

    yang_name = "ipv6"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Isis::Ipv6::~Ipv6()
{
}

bool Native::Interface::Tunnel::Isis::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set
	|| (metric !=  nullptr && metric->has_data())
	|| (bfd !=  nullptr && bfd->has_data());
}

bool Native::Interface::Tunnel::Isis::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (metric !=  nullptr && metric->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation());
}

std::string Native::Interface::Tunnel::Isis::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Interface::Tunnel::Isis::Ipv6::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::Tunnel::Isis::Ipv6::Bfd>();
        }
        return bfd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(metric != nullptr)
    {
        _children["metric"] = metric;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    return _children;
}

void Native::Interface::Tunnel::Isis::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "bfd" || name == "tag")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::Ipv6::Metric::Metric()
    :
    value_{YType::str, "value"}
        ,
    metric_list(this, {"levels"})
{

    yang_name = "metric"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Isis::Ipv6::Metric::~Metric()
{
}

bool Native::Interface::Tunnel::Isis::Ipv6::Metric::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<metric_list.len(); index++)
    {
        if(metric_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Tunnel::Isis::Ipv6::Metric::has_operation() const
{
    for (std::size_t index=0; index<metric_list.len(); index++)
    {
        if(metric_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Isis::Ipv6::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::Ipv6::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::Ipv6::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric-list")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Isis::Ipv6::Metric::MetricList>();
        ent_->parent = this;
        metric_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::Ipv6::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : metric_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Isis::Ipv6::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::Ipv6::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::Ipv6::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-list" || name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::Ipv6::Metric::MetricList::MetricList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{

    yang_name = "metric-list"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Isis::Ipv6::Metric::MetricList::~MetricList()
{
}

bool Native::Interface::Tunnel::Isis::Ipv6::Metric::MetricList::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Tunnel::Isis::Ipv6::Metric::MetricList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Isis::Ipv6::Metric::MetricList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-list";
    ADD_KEY_TOKEN(levels, "levels");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::Ipv6::Metric::MetricList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::Ipv6::Metric::MetricList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::Ipv6::Metric::MetricList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Isis::Ipv6::Metric::MetricList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::Ipv6::Metric::MetricList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::Ipv6::Metric::MetricList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::Ipv6::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "bfd"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Isis::Ipv6::Bfd::~Bfd()
{
}

bool Native::Interface::Tunnel::Isis::Ipv6::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::Tunnel::Isis::Ipv6::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Isis::Ipv6::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::Ipv6::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::Ipv6::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::Ipv6::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Isis::Ipv6::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::Ipv6::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::Ipv6::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::Metric::Metric()
    :
    value_{YType::str, "value"}
        ,
    metric_list(this, {"levels"})
{

    yang_name = "metric"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Isis::Metric::~Metric()
{
}

bool Native::Interface::Tunnel::Isis::Metric::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<metric_list.len(); index++)
    {
        if(metric_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Tunnel::Isis::Metric::has_operation() const
{
    for (std::size_t index=0; index<metric_list.len(); index++)
    {
        if(metric_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Isis::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric-list")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Isis::Metric::MetricList>();
        ent_->parent = this;
        metric_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : metric_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Isis::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-list" || name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::Metric::MetricList::MetricList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{

    yang_name = "metric-list"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Isis::Metric::MetricList::~MetricList()
{
}

bool Native::Interface::Tunnel::Isis::Metric::MetricList::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Tunnel::Isis::Metric::MetricList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Isis::Metric::MetricList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-list";
    ADD_KEY_TOKEN(levels, "levels");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::Metric::MetricList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::Metric::MetricList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::Metric::MetricList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Isis::Metric::MetricList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::Metric::MetricList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::Metric::MetricList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::Password::Password()
    :
    password{YType::str, "password"}
        ,
    password_list(this, {"levels"})
{

    yang_name = "password"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Isis::Password::~Password()
{
}

bool Native::Interface::Tunnel::Isis::Password::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<password_list.len(); index++)
    {
        if(password_list[index]->has_data())
            return true;
    }
    return password.is_set;
}

bool Native::Interface::Tunnel::Isis::Password::has_operation() const
{
    for (std::size_t index=0; index<password_list.len(); index++)
    {
        if(password_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Interface::Tunnel::Isis::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password-list")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Isis::Password::PasswordList>();
        ent_->parent = this;
        password_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : password_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Isis::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password-list" || name == "password")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::Password::PasswordList::PasswordList()
    :
    levels{YType::enumeration, "levels"},
    password{YType::str, "password"}
{

    yang_name = "password-list"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Isis::Password::PasswordList::~PasswordList()
{
}

bool Native::Interface::Tunnel::Isis::Password::PasswordList::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| password.is_set;
}

bool Native::Interface::Tunnel::Isis::Password::PasswordList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Interface::Tunnel::Isis::Password::PasswordList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password-list";
    ADD_KEY_TOKEN(levels, "levels");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::Password::PasswordList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::Password::PasswordList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::Password::PasswordList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Isis::Password::PasswordList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::Password::PasswordList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::Password::PasswordList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "password")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::Priority::Priority()
    :
    value_{YType::uint8, "value"}
        ,
    priority_list(this, {"levels"})
{

    yang_name = "priority"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Isis::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Isis::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<priority_list.len(); index++)
    {
        if(priority_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Tunnel::Isis::Priority::has_operation() const
{
    for (std::size_t index=0; index<priority_list.len(); index++)
    {
        if(priority_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Isis::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-list")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Isis::Priority::PriorityList>();
        ent_->parent = this;
        priority_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : priority_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Isis::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-list" || name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::Priority::PriorityList::PriorityList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint8, "value"}
{

    yang_name = "priority-list"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Isis::Priority::PriorityList::~PriorityList()
{
}

bool Native::Interface::Tunnel::Isis::Priority::PriorityList::has_data() const
{
    if (is_presence_container) return true;
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Tunnel::Isis::Priority::PriorityList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Tunnel::Isis::Priority::PriorityList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-list";
    ADD_KEY_TOKEN(levels, "levels");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::Priority::PriorityList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::Priority::PriorityList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::Priority::PriorityList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Isis::Priority::PriorityList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::Priority::PriorityList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::Priority::PriorityList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "bfd"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Isis::Bfd::~Bfd()
{
}

bool Native::Interface::Tunnel::Isis::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool Native::Interface::Tunnel::Isis::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Interface::Tunnel::Isis::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Isis::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Interface::Tunnel::Isis::ThreeWayHandshake::ThreeWayHandshake()
    :
    implementor{YType::enumeration, "implementor"}
{

    yang_name = "three-way-handshake"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Isis::ThreeWayHandshake::~ThreeWayHandshake()
{
}

bool Native::Interface::Tunnel::Isis::ThreeWayHandshake::has_data() const
{
    if (is_presence_container) return true;
    return implementor.is_set;
}

bool Native::Interface::Tunnel::Isis::ThreeWayHandshake::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(implementor.yfilter);
}

std::string Native::Interface::Tunnel::Isis::ThreeWayHandshake::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:three-way-handshake";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Isis::ThreeWayHandshake::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (implementor.is_set || is_set(implementor.yfilter)) leaf_name_data.push_back(implementor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Isis::ThreeWayHandshake::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Isis::ThreeWayHandshake::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Isis::ThreeWayHandshake::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "implementor")
    {
        implementor = value;
        implementor.value_namespace = name_space;
        implementor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Isis::ThreeWayHandshake::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "implementor")
    {
        implementor.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Isis::ThreeWayHandshake::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "implementor")
        return true;
    return false;
}

Native::Interface::Tunnel::KeepaliveSettings::KeepaliveSettings()
    :
    keepalive(nullptr) // presence node
{

    yang_name = "keepalive-settings"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::KeepaliveSettings::~KeepaliveSettings()
{
}

bool Native::Interface::Tunnel::KeepaliveSettings::has_data() const
{
    if (is_presence_container) return true;
    return (keepalive !=  nullptr && keepalive->has_data());
}

bool Native::Interface::Tunnel::KeepaliveSettings::has_operation() const
{
    return is_set(yfilter)
	|| (keepalive !=  nullptr && keepalive->has_operation());
}

std::string Native::Interface::Tunnel::KeepaliveSettings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive-settings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::KeepaliveSettings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::KeepaliveSettings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Interface::Tunnel::KeepaliveSettings::Keepalive>();
        }
        return keepalive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::KeepaliveSettings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(keepalive != nullptr)
    {
        _children["keepalive"] = keepalive;
    }

    return _children;
}

void Native::Interface::Tunnel::KeepaliveSettings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::KeepaliveSettings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::KeepaliveSettings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive")
        return true;
    return false;
}

Native::Interface::Tunnel::KeepaliveSettings::Keepalive::Keepalive()
    :
    period{YType::uint16, "period"},
    retries{YType::uint8, "retries"}
{

    yang_name = "keepalive"; yang_parent_name = "keepalive-settings"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::KeepaliveSettings::Keepalive::~Keepalive()
{
}

bool Native::Interface::Tunnel::KeepaliveSettings::Keepalive::has_data() const
{
    if (is_presence_container) return true;
    return period.is_set
	|| retries.is_set;
}

bool Native::Interface::Tunnel::KeepaliveSettings::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(retries.yfilter);
}

std::string Native::Interface::Tunnel::KeepaliveSettings::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::KeepaliveSettings::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::KeepaliveSettings::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::KeepaliveSettings::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::KeepaliveSettings::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::KeepaliveSettings::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::KeepaliveSettings::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period" || name == "retries")
        return true;
    return false;
}

Native::Interface::Tunnel::Bfd::Bfd()
    :
    template_{YType::str, "Cisco-IOS-XE-bfd:template"},
    echo{YType::boolean, "Cisco-IOS-XE-bfd:echo"}
        ,
    interval(std::make_shared<Native::Interface::Tunnel::Bfd::Interval>())
{
    interval->parent = this;

    yang_name = "bfd"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Bfd::~Bfd()
{
}

bool Native::Interface::Tunnel::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return template_.is_set
	|| echo.is_set
	|| (interval !=  nullptr && interval->has_data());
}

bool Native::Interface::Tunnel::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_.yfilter)
	|| ydk::is_set(echo.yfilter)
	|| (interval !=  nullptr && interval->has_operation());
}

std::string Native::Interface::Tunnel::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_.is_set || is_set(template_.yfilter)) leaf_name_data.push_back(template_.get_name_leafdata());
    if (echo.is_set || is_set(echo.yfilter)) leaf_name_data.push_back(echo.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-bfd:interval")
    {
        if(interval == nullptr)
        {
            interval = std::make_shared<Native::Interface::Tunnel::Bfd::Interval>();
        }
        return interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interval != nullptr)
    {
        _children["Cisco-IOS-XE-bfd:interval"] = interval;
    }

    return _children;
}

void Native::Interface::Tunnel::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-bfd:template")
    {
        template_ = value;
        template_.value_namespace = name_space;
        template_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-bfd:echo")
    {
        echo = value;
        echo.value_namespace = name_space;
        echo.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template")
    {
        template_.yfilter = yfilter;
    }
    if(value_path == "echo")
    {
        echo.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "template" || name == "echo")
        return true;
    return false;
}

Native::Interface::Tunnel::Bfd::Interval::Interval()
    :
    msecs{YType::uint16, "msecs"},
    min_rx{YType::uint16, "min_rx"},
    multiplier{YType::uint8, "multiplier"}
{

    yang_name = "interval"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Bfd::Interval::~Interval()
{
}

bool Native::Interface::Tunnel::Bfd::Interval::has_data() const
{
    if (is_presence_container) return true;
    return msecs.is_set
	|| min_rx.is_set
	|| multiplier.is_set;
}

bool Native::Interface::Tunnel::Bfd::Interval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msecs.yfilter)
	|| ydk::is_set(min_rx.yfilter)
	|| ydk::is_set(multiplier.yfilter);
}

std::string Native::Interface::Tunnel::Bfd::Interval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bfd:interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Bfd::Interval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msecs.is_set || is_set(msecs.yfilter)) leaf_name_data.push_back(msecs.get_name_leafdata());
    if (min_rx.is_set || is_set(min_rx.yfilter)) leaf_name_data.push_back(min_rx.get_name_leafdata());
    if (multiplier.is_set || is_set(multiplier.yfilter)) leaf_name_data.push_back(multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Bfd::Interval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Bfd::Interval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Bfd::Interval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msecs")
    {
        msecs = value;
        msecs.value_namespace = name_space;
        msecs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min_rx")
    {
        min_rx = value;
        min_rx.value_namespace = name_space;
        min_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multiplier")
    {
        multiplier = value;
        multiplier.value_namespace = name_space;
        multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Bfd::Interval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msecs")
    {
        msecs.yfilter = yfilter;
    }
    if(value_path == "min_rx")
    {
        min_rx.yfilter = yfilter;
    }
    if(value_path == "multiplier")
    {
        multiplier.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Bfd::Interval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msecs" || name == "min_rx" || name == "multiplier")
        return true;
    return false;
}

Native::Interface::Tunnel::Bandwidth::Bandwidth()
    :
    qos_reference{YType::uint32, "qos-reference"},
    kilobits{YType::uint32, "kilobits"}
        ,
    receive(std::make_shared<Native::Interface::Tunnel::Bandwidth::Receive>())
    , inherit(nullptr) // presence node
{
    receive->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::Tunnel::Bandwidth::has_data() const
{
    if (is_presence_container) return true;
    return qos_reference.is_set
	|| kilobits.is_set
	|| (receive !=  nullptr && receive->has_data())
	|| (inherit !=  nullptr && inherit->has_data());
}

bool Native::Interface::Tunnel::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(qos_reference.yfilter)
	|| ydk::is_set(kilobits.yfilter)
	|| (receive !=  nullptr && receive->has_operation())
	|| (inherit !=  nullptr && inherit->has_operation());
}

std::string Native::Interface::Tunnel::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (qos_reference.is_set || is_set(qos_reference.yfilter)) leaf_name_data.push_back(qos_reference.get_name_leafdata());
    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<Native::Interface::Tunnel::Bandwidth::Receive>();
        }
        return receive;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Interface::Tunnel::Bandwidth::Inherit>();
        }
        return inherit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(receive != nullptr)
    {
        _children["receive"] = receive;
    }

    if(inherit != nullptr)
    {
        _children["inherit"] = inherit;
    }

    return _children;
}

void Native::Interface::Tunnel::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "qos-reference")
    {
        qos_reference = value;
        qos_reference.value_namespace = name_space;
        qos_reference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "qos-reference")
    {
        qos_reference.yfilter = yfilter;
    }
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "inherit" || name == "qos-reference" || name == "kilobits")
        return true;
    return false;
}

Native::Interface::Tunnel::Bandwidth::Receive::Receive()
    :
    inherit{YType::empty, "inherit"},
    kilobits{YType::uint32, "kilobits"}
{

    yang_name = "receive"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Bandwidth::Receive::~Receive()
{
}

bool Native::Interface::Tunnel::Bandwidth::Receive::has_data() const
{
    if (is_presence_container) return true;
    return inherit.is_set
	|| kilobits.is_set;
}

bool Native::Interface::Tunnel::Bandwidth::Receive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inherit.yfilter)
	|| ydk::is_set(kilobits.yfilter);
}

std::string Native::Interface::Tunnel::Bandwidth::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Bandwidth::Receive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inherit.is_set || is_set(inherit.yfilter)) leaf_name_data.push_back(inherit.get_name_leafdata());
    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Bandwidth::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Bandwidth::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Bandwidth::Receive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inherit")
    {
        inherit = value;
        inherit.value_namespace = name_space;
        inherit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Bandwidth::Receive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inherit")
    {
        inherit.yfilter = yfilter;
    }
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Bandwidth::Receive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inherit" || name == "kilobits")
        return true;
    return false;
}

Native::Interface::Tunnel::Bandwidth::Inherit::Inherit()
    :
    kilobits{YType::uint32, "kilobits"}
{

    yang_name = "inherit"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Bandwidth::Inherit::~Inherit()
{
}

bool Native::Interface::Tunnel::Bandwidth::Inherit::has_data() const
{
    if (is_presence_container) return true;
    return kilobits.is_set;
}

bool Native::Interface::Tunnel::Bandwidth::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kilobits.yfilter);
}

std::string Native::Interface::Tunnel::Bandwidth::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Bandwidth::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Bandwidth::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Bandwidth::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Bandwidth::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Bandwidth::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Bandwidth::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kilobits")
        return true;
    return false;
}

Native::Interface::Tunnel::Dampening::Dampening()
    :
    dampening_time{YType::uint16, "dampening-time"},
    start_reusing_time{YType::uint16, "start-reusing-time"},
    start_supressing_time{YType::uint16, "start-supressing-time"},
    maximum_supressing_time{YType::uint16, "maximum-supressing-time"}
        ,
    restart(std::make_shared<Native::Interface::Tunnel::Dampening::Restart>())
{
    restart->parent = this;

    yang_name = "dampening"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Dampening::~Dampening()
{
}

bool Native::Interface::Tunnel::Dampening::has_data() const
{
    if (is_presence_container) return true;
    return dampening_time.is_set
	|| start_reusing_time.is_set
	|| start_supressing_time.is_set
	|| maximum_supressing_time.is_set
	|| (restart !=  nullptr && restart->has_data());
}

bool Native::Interface::Tunnel::Dampening::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dampening_time.yfilter)
	|| ydk::is_set(start_reusing_time.yfilter)
	|| ydk::is_set(start_supressing_time.yfilter)
	|| ydk::is_set(maximum_supressing_time.yfilter)
	|| (restart !=  nullptr && restart->has_operation());
}

std::string Native::Interface::Tunnel::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Dampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dampening_time.is_set || is_set(dampening_time.yfilter)) leaf_name_data.push_back(dampening_time.get_name_leafdata());
    if (start_reusing_time.is_set || is_set(start_reusing_time.yfilter)) leaf_name_data.push_back(start_reusing_time.get_name_leafdata());
    if (start_supressing_time.is_set || is_set(start_supressing_time.yfilter)) leaf_name_data.push_back(start_supressing_time.get_name_leafdata());
    if (maximum_supressing_time.is_set || is_set(maximum_supressing_time.yfilter)) leaf_name_data.push_back(maximum_supressing_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "restart")
    {
        if(restart == nullptr)
        {
            restart = std::make_shared<Native::Interface::Tunnel::Dampening::Restart>();
        }
        return restart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(restart != nullptr)
    {
        _children["restart"] = restart;
    }

    return _children;
}

void Native::Interface::Tunnel::Dampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dampening-time")
    {
        dampening_time = value;
        dampening_time.value_namespace = name_space;
        dampening_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-reusing-time")
    {
        start_reusing_time = value;
        start_reusing_time.value_namespace = name_space;
        start_reusing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-supressing-time")
    {
        start_supressing_time = value;
        start_supressing_time.value_namespace = name_space;
        start_supressing_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-supressing-time")
    {
        maximum_supressing_time = value;
        maximum_supressing_time.value_namespace = name_space;
        maximum_supressing_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Dampening::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dampening-time")
    {
        dampening_time.yfilter = yfilter;
    }
    if(value_path == "start-reusing-time")
    {
        start_reusing_time.yfilter = yfilter;
    }
    if(value_path == "start-supressing-time")
    {
        start_supressing_time.yfilter = yfilter;
    }
    if(value_path == "maximum-supressing-time")
    {
        maximum_supressing_time.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Dampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restart" || name == "dampening-time" || name == "start-reusing-time" || name == "start-supressing-time" || name == "maximum-supressing-time")
        return true;
    return false;
}

Native::Interface::Tunnel::Dampening::Restart::Restart()
    :
    restart{YType::empty, "restart"},
    restart_penalty{YType::uint16, "restart-penalty"}
{

    yang_name = "restart"; yang_parent_name = "dampening"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Dampening::Restart::~Restart()
{
}

bool Native::Interface::Tunnel::Dampening::Restart::has_data() const
{
    if (is_presence_container) return true;
    return restart.is_set
	|| restart_penalty.is_set;
}

bool Native::Interface::Tunnel::Dampening::Restart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(restart_penalty.yfilter);
}

std::string Native::Interface::Tunnel::Dampening::Restart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Dampening::Restart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.yfilter)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Dampening::Restart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Dampening::Restart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Dampening::Restart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty = value;
        restart_penalty.value_namespace = name_space;
        restart_penalty.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Dampening::Restart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "restart-penalty")
    {
        restart_penalty.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Dampening::Restart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restart" || name == "restart-penalty")
        return true;
    return false;
}

Native::Interface::Tunnel::Domain::Domain()
    :
    name{YType::str, "name"},
    path{YType::str, "path"},
    internet_bound{YType::empty, "internet-bound"},
    path_id{YType::uint8, "path-id"},
    path_last_resort{YType::empty, "path-last-resort"},
    zero_sla{YType::empty, "zero-sla"}
{

    yang_name = "domain"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Domain::~Domain()
{
}

bool Native::Interface::Tunnel::Domain::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| path.is_set
	|| internet_bound.is_set
	|| path_id.is_set
	|| path_last_resort.is_set
	|| zero_sla.is_set;
}

bool Native::Interface::Tunnel::Domain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(internet_bound.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_last_resort.yfilter)
	|| ydk::is_set(zero_sla.yfilter);
}

std::string Native::Interface::Tunnel::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (internet_bound.is_set || is_set(internet_bound.yfilter)) leaf_name_data.push_back(internet_bound.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_last_resort.is_set || is_set(path_last_resort.yfilter)) leaf_name_data.push_back(path_last_resort.get_name_leafdata());
    if (zero_sla.is_set || is_set(zero_sla.yfilter)) leaf_name_data.push_back(zero_sla.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path")
    {
        path = value;
        path.value_namespace = name_space;
        path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internet-bound")
    {
        internet_bound = value;
        internet_bound.value_namespace = name_space;
        internet_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-last-resort")
    {
        path_last_resort = value;
        path_last_resort.value_namespace = name_space;
        path_last_resort.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zero-sla")
    {
        zero_sla = value;
        zero_sla.value_namespace = name_space;
        zero_sla.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
    }
    if(value_path == "internet-bound")
    {
        internet_bound.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
    if(value_path == "path-last-resort")
    {
        path_last_resort.yfilter = yfilter;
    }
    if(value_path == "zero-sla")
    {
        zero_sla.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "path" || name == "internet-bound" || name == "path-id" || name == "path-last-resort" || name == "zero-sla")
        return true;
    return false;
}

Native::Interface::Tunnel::HoldQueue::HoldQueue()
    :
    direction{YType::enumeration, "direction"},
    queue_length{YType::uint32, "queue-length"}
{

    yang_name = "hold-queue"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::HoldQueue::~HoldQueue()
{
}

bool Native::Interface::Tunnel::HoldQueue::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| queue_length.is_set;
}

bool Native::Interface::Tunnel::HoldQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(queue_length.yfilter);
}

std::string Native::Interface::Tunnel::HoldQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-queue";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::HoldQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (queue_length.is_set || is_set(queue_length.yfilter)) leaf_name_data.push_back(queue_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::HoldQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::HoldQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::HoldQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-length")
    {
        queue_length = value;
        queue_length.value_namespace = name_space;
        queue_length.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::HoldQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "queue-length")
    {
        queue_length.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::HoldQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "queue-length")
        return true;
    return false;
}

Native::Interface::Tunnel::Mpls::Mpls()
    :
    ip{YType::empty, "Cisco-IOS-XE-mpls:ip"},
    mtu{YType::str, "Cisco-IOS-XE-mpls:mtu"}
        ,
    accounting(std::make_shared<Native::Interface::Tunnel::Mpls::Accounting>())
    , bgp(std::make_shared<Native::Interface::Tunnel::Mpls::Bgp>())
    , label(std::make_shared<Native::Interface::Tunnel::Mpls::Label>())
    , ldp(std::make_shared<Native::Interface::Tunnel::Mpls::Ldp>())
    , traffic_eng(std::make_shared<Native::Interface::Tunnel::Mpls::TrafficEng>())
{
    accounting->parent = this;
    bgp->parent = this;
    label->parent = this;
    ldp->parent = this;
    traffic_eng->parent = this;

    yang_name = "mpls"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Mpls::~Mpls()
{
}

bool Native::Interface::Tunnel::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| mtu.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (label !=  nullptr && label->has_data())
	|| (ldp !=  nullptr && ldp->has_data())
	|| (traffic_eng !=  nullptr && traffic_eng->has_data());
}

bool Native::Interface::Tunnel::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (label !=  nullptr && label->has_operation())
	|| (ldp !=  nullptr && ldp->has_operation())
	|| (traffic_eng !=  nullptr && traffic_eng->has_operation());
}

std::string Native::Interface::Tunnel::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-mpls:accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Interface::Tunnel::Mpls::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "Cisco-IOS-XE-mpls:bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Interface::Tunnel::Mpls::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "Cisco-IOS-XE-mpls:label")
    {
        if(label == nullptr)
        {
            label = std::make_shared<Native::Interface::Tunnel::Mpls::Label>();
        }
        return label;
    }

    if(child_yang_name == "Cisco-IOS-XE-mpls:ldp")
    {
        if(ldp == nullptr)
        {
            ldp = std::make_shared<Native::Interface::Tunnel::Mpls::Ldp>();
        }
        return ldp;
    }

    if(child_yang_name == "Cisco-IOS-XE-mpls:traffic-eng")
    {
        if(traffic_eng == nullptr)
        {
            traffic_eng = std::make_shared<Native::Interface::Tunnel::Mpls::TrafficEng>();
        }
        return traffic_eng;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accounting != nullptr)
    {
        _children["Cisco-IOS-XE-mpls:accounting"] = accounting;
    }

    if(bgp != nullptr)
    {
        _children["Cisco-IOS-XE-mpls:bgp"] = bgp;
    }

    if(label != nullptr)
    {
        _children["Cisco-IOS-XE-mpls:label"] = label;
    }

    if(ldp != nullptr)
    {
        _children["Cisco-IOS-XE-mpls:ldp"] = ldp;
    }

    if(traffic_eng != nullptr)
    {
        _children["Cisco-IOS-XE-mpls:traffic-eng"] = traffic_eng;
    }

    return _children;
}

void Native::Interface::Tunnel::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-mpls:ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-mpls:mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "bgp" || name == "label" || name == "ldp" || name == "traffic-eng" || name == "ip" || name == "mtu")
        return true;
    return false;
}

Native::Interface::Tunnel::Mpls::Accounting::Accounting()
    :
    experimental(std::make_shared<Native::Interface::Tunnel::Mpls::Accounting::Experimental>())
{
    experimental->parent = this;

    yang_name = "accounting"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Mpls::Accounting::~Accounting()
{
}

bool Native::Interface::Tunnel::Mpls::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return (experimental !=  nullptr && experimental->has_data());
}

bool Native::Interface::Tunnel::Mpls::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| (experimental !=  nullptr && experimental->has_operation());
}

std::string Native::Interface::Tunnel::Mpls::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Mpls::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Mpls::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "experimental")
    {
        if(experimental == nullptr)
        {
            experimental = std::make_shared<Native::Interface::Tunnel::Mpls::Accounting::Experimental>();
        }
        return experimental;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Mpls::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(experimental != nullptr)
    {
        _children["experimental"] = experimental;
    }

    return _children;
}

void Native::Interface::Tunnel::Mpls::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Mpls::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Mpls::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "experimental")
        return true;
    return false;
}

Native::Interface::Tunnel::Mpls::Accounting::Experimental::Experimental()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{

    yang_name = "experimental"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Mpls::Accounting::Experimental::~Experimental()
{
}

bool Native::Interface::Tunnel::Mpls::Accounting::Experimental::has_data() const
{
    if (is_presence_container) return true;
    return input.is_set
	|| output.is_set;
}

bool Native::Interface::Tunnel::Mpls::Accounting::Experimental::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Interface::Tunnel::Mpls::Accounting::Experimental::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "experimental";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Mpls::Accounting::Experimental::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Mpls::Accounting::Experimental::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Mpls::Accounting::Experimental::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Mpls::Accounting::Experimental::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Mpls::Accounting::Experimental::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Mpls::Accounting::Experimental::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::Tunnel::Mpls::Bgp::Bgp()
    :
    forwarding{YType::empty, "forwarding"}
{

    yang_name = "bgp"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Mpls::Bgp::~Bgp()
{
}

bool Native::Interface::Tunnel::Mpls::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return forwarding.is_set;
}

bool Native::Interface::Tunnel::Mpls::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Interface::Tunnel::Mpls::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Mpls::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Mpls::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Mpls::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Mpls::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Mpls::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Mpls::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Interface::Tunnel::Mpls::Label::Label()
    :
    protocol{YType::enumeration, "protocol"}
{

    yang_name = "label"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Mpls::Label::~Label()
{
}

bool Native::Interface::Tunnel::Mpls::Label::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set;
}

bool Native::Interface::Tunnel::Mpls::Label::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter);
}

std::string Native::Interface::Tunnel::Mpls::Label::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Mpls::Label::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Mpls::Label::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Mpls::Label::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Mpls::Label::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Mpls::Label::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Mpls::Label::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol")
        return true;
    return false;
}

Native::Interface::Tunnel::Mpls::Ldp::Ldp()
    :
    discovery(std::make_shared<Native::Interface::Tunnel::Mpls::Ldp::Discovery>())
    , igp(std::make_shared<Native::Interface::Tunnel::Mpls::Ldp::Igp>())
{
    discovery->parent = this;
    igp->parent = this;

    yang_name = "ldp"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Mpls::Ldp::~Ldp()
{
}

bool Native::Interface::Tunnel::Mpls::Ldp::has_data() const
{
    if (is_presence_container) return true;
    return (discovery !=  nullptr && discovery->has_data())
	|| (igp !=  nullptr && igp->has_data());
}

bool Native::Interface::Tunnel::Mpls::Ldp::has_operation() const
{
    return is_set(yfilter)
	|| (discovery !=  nullptr && discovery->has_operation())
	|| (igp !=  nullptr && igp->has_operation());
}

std::string Native::Interface::Tunnel::Mpls::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Mpls::Ldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Mpls::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery")
    {
        if(discovery == nullptr)
        {
            discovery = std::make_shared<Native::Interface::Tunnel::Mpls::Ldp::Discovery>();
        }
        return discovery;
    }

    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Native::Interface::Tunnel::Mpls::Ldp::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Mpls::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(discovery != nullptr)
    {
        _children["discovery"] = discovery;
    }

    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    return _children;
}

void Native::Interface::Tunnel::Mpls::Ldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Mpls::Ldp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Mpls::Ldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovery" || name == "igp")
        return true;
    return false;
}

Native::Interface::Tunnel::Mpls::Ldp::Discovery::Discovery()
    :
    transport_address{YType::str, "transport-address"}
{

    yang_name = "discovery"; yang_parent_name = "ldp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Mpls::Ldp::Discovery::~Discovery()
{
}

bool Native::Interface::Tunnel::Mpls::Ldp::Discovery::has_data() const
{
    if (is_presence_container) return true;
    return transport_address.is_set;
}

bool Native::Interface::Tunnel::Mpls::Ldp::Discovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transport_address.yfilter);
}

std::string Native::Interface::Tunnel::Mpls::Ldp::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Mpls::Ldp::Discovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport_address.is_set || is_set(transport_address.yfilter)) leaf_name_data.push_back(transport_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Mpls::Ldp::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Mpls::Ldp::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Mpls::Ldp::Discovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transport-address")
    {
        transport_address = value;
        transport_address.value_namespace = name_space;
        transport_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Mpls::Ldp::Discovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport-address")
    {
        transport_address.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Mpls::Ldp::Discovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport-address")
        return true;
    return false;
}

Native::Interface::Tunnel::Mpls::Ldp::Igp::Igp()
    :
    sync(nullptr) // presence node
{

    yang_name = "igp"; yang_parent_name = "ldp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Mpls::Ldp::Igp::~Igp()
{
}

bool Native::Interface::Tunnel::Mpls::Ldp::Igp::has_data() const
{
    if (is_presence_container) return true;
    return (sync !=  nullptr && sync->has_data());
}

bool Native::Interface::Tunnel::Mpls::Ldp::Igp::has_operation() const
{
    return is_set(yfilter)
	|| (sync !=  nullptr && sync->has_operation());
}

std::string Native::Interface::Tunnel::Mpls::Ldp::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Mpls::Ldp::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Mpls::Ldp::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sync")
    {
        if(sync == nullptr)
        {
            sync = std::make_shared<Native::Interface::Tunnel::Mpls::Ldp::Igp::Sync>();
        }
        return sync;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Mpls::Ldp::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sync != nullptr)
    {
        _children["sync"] = sync;
    }

    return _children;
}

void Native::Interface::Tunnel::Mpls::Ldp::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Mpls::Ldp::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Mpls::Ldp::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync")
        return true;
    return false;
}

Native::Interface::Tunnel::Mpls::Ldp::Igp::Sync::Sync()
    :
    delay{YType::uint8, "delay"}
{

    yang_name = "sync"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Mpls::Ldp::Igp::Sync::~Sync()
{
}

bool Native::Interface::Tunnel::Mpls::Ldp::Igp::Sync::has_data() const
{
    if (is_presence_container) return true;
    return delay.is_set;
}

bool Native::Interface::Tunnel::Mpls::Ldp::Igp::Sync::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string Native::Interface::Tunnel::Mpls::Ldp::Igp::Sync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Mpls::Ldp::Igp::Sync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Mpls::Ldp::Igp::Sync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Mpls::Ldp::Igp::Sync::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Mpls::Ldp::Igp::Sync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Mpls::Ldp::Igp::Sync::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Mpls::Ldp::Igp::Sync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Interface::Tunnel::Mpls::TrafficEng::TrafficEng()
    :
    administrative_weight{YType::uint32, "administrative-weight"},
    attribute_flags{YType::str, "attribute-flags"},
    tunnels{YType::empty, "tunnels"}
        ,
    backup_path(std::make_shared<Native::Interface::Tunnel::Mpls::TrafficEng::BackupPath>())
    , flooding(std::make_shared<Native::Interface::Tunnel::Mpls::TrafficEng::Flooding>())
    , passive_interface(std::make_shared<Native::Interface::Tunnel::Mpls::TrafficEng::PassiveInterface>())
{
    backup_path->parent = this;
    flooding->parent = this;
    passive_interface->parent = this;

    yang_name = "traffic-eng"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Mpls::TrafficEng::~TrafficEng()
{
}

bool Native::Interface::Tunnel::Mpls::TrafficEng::has_data() const
{
    if (is_presence_container) return true;
    return administrative_weight.is_set
	|| attribute_flags.is_set
	|| tunnels.is_set
	|| (backup_path !=  nullptr && backup_path->has_data())
	|| (flooding !=  nullptr && flooding->has_data())
	|| (passive_interface !=  nullptr && passive_interface->has_data());
}

bool Native::Interface::Tunnel::Mpls::TrafficEng::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(administrative_weight.yfilter)
	|| ydk::is_set(attribute_flags.yfilter)
	|| ydk::is_set(tunnels.yfilter)
	|| (backup_path !=  nullptr && backup_path->has_operation())
	|| (flooding !=  nullptr && flooding->has_operation())
	|| (passive_interface !=  nullptr && passive_interface->has_operation());
}

std::string Native::Interface::Tunnel::Mpls::TrafficEng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mpls:traffic-eng";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Mpls::TrafficEng::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (administrative_weight.is_set || is_set(administrative_weight.yfilter)) leaf_name_data.push_back(administrative_weight.get_name_leafdata());
    if (attribute_flags.is_set || is_set(attribute_flags.yfilter)) leaf_name_data.push_back(attribute_flags.get_name_leafdata());
    if (tunnels.is_set || is_set(tunnels.yfilter)) leaf_name_data.push_back(tunnels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-path")
    {
        if(backup_path == nullptr)
        {
            backup_path = std::make_shared<Native::Interface::Tunnel::Mpls::TrafficEng::BackupPath>();
        }
        return backup_path;
    }

    if(child_yang_name == "flooding")
    {
        if(flooding == nullptr)
        {
            flooding = std::make_shared<Native::Interface::Tunnel::Mpls::TrafficEng::Flooding>();
        }
        return flooding;
    }

    if(child_yang_name == "passive-interface")
    {
        if(passive_interface == nullptr)
        {
            passive_interface = std::make_shared<Native::Interface::Tunnel::Mpls::TrafficEng::PassiveInterface>();
        }
        return passive_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(backup_path != nullptr)
    {
        _children["backup-path"] = backup_path;
    }

    if(flooding != nullptr)
    {
        _children["flooding"] = flooding;
    }

    if(passive_interface != nullptr)
    {
        _children["passive-interface"] = passive_interface;
    }

    return _children;
}

void Native::Interface::Tunnel::Mpls::TrafficEng::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "administrative-weight")
    {
        administrative_weight = value;
        administrative_weight.value_namespace = name_space;
        administrative_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-flags")
    {
        attribute_flags = value;
        attribute_flags.value_namespace = name_space;
        attribute_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnels")
    {
        tunnels = value;
        tunnels.value_namespace = name_space;
        tunnels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Mpls::TrafficEng::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "administrative-weight")
    {
        administrative_weight.yfilter = yfilter;
    }
    if(value_path == "attribute-flags")
    {
        attribute_flags.yfilter = yfilter;
    }
    if(value_path == "tunnels")
    {
        tunnels.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Mpls::TrafficEng::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-path" || name == "flooding" || name == "passive-interface" || name == "administrative-weight" || name == "attribute-flags" || name == "tunnels")
        return true;
    return false;
}

Native::Interface::Tunnel::Mpls::TrafficEng::BackupPath::BackupPath()
    :
    tunnel{YType::uint32, "Tunnel"}
{

    yang_name = "backup-path"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Mpls::TrafficEng::BackupPath::~BackupPath()
{
}

bool Native::Interface::Tunnel::Mpls::TrafficEng::BackupPath::has_data() const
{
    if (is_presence_container) return true;
    return tunnel.is_set;
}

bool Native::Interface::Tunnel::Mpls::TrafficEng::BackupPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Native::Interface::Tunnel::Mpls::TrafficEng::BackupPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Mpls::TrafficEng::BackupPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Mpls::TrafficEng::BackupPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Mpls::TrafficEng::BackupPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Mpls::TrafficEng::BackupPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Mpls::TrafficEng::BackupPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Mpls::TrafficEng::BackupPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Tunnel")
        return true;
    return false;
}

Native::Interface::Tunnel::Mpls::TrafficEng::Flooding::Flooding()
    :
    thresholds(std::make_shared<Native::Interface::Tunnel::Mpls::TrafficEng::Flooding::Thresholds>())
{
    thresholds->parent = this;

    yang_name = "flooding"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Mpls::TrafficEng::Flooding::~Flooding()
{
}

bool Native::Interface::Tunnel::Mpls::TrafficEng::Flooding::has_data() const
{
    if (is_presence_container) return true;
    return (thresholds !=  nullptr && thresholds->has_data());
}

bool Native::Interface::Tunnel::Mpls::TrafficEng::Flooding::has_operation() const
{
    return is_set(yfilter)
	|| (thresholds !=  nullptr && thresholds->has_operation());
}

std::string Native::Interface::Tunnel::Mpls::TrafficEng::Flooding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Mpls::TrafficEng::Flooding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Mpls::TrafficEng::Flooding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresholds")
    {
        if(thresholds == nullptr)
        {
            thresholds = std::make_shared<Native::Interface::Tunnel::Mpls::TrafficEng::Flooding::Thresholds>();
        }
        return thresholds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Mpls::TrafficEng::Flooding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(thresholds != nullptr)
    {
        _children["thresholds"] = thresholds;
    }

    return _children;
}

void Native::Interface::Tunnel::Mpls::TrafficEng::Flooding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Mpls::TrafficEng::Flooding::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Mpls::TrafficEng::Flooding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresholds")
        return true;
    return false;
}

Native::Interface::Tunnel::Mpls::TrafficEng::Flooding::Thresholds::Thresholds()
    :
    down{YType::uint8, "down"},
    up{YType::uint8, "up"}
{

    yang_name = "thresholds"; yang_parent_name = "flooding"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Mpls::TrafficEng::Flooding::Thresholds::~Thresholds()
{
}

bool Native::Interface::Tunnel::Mpls::TrafficEng::Flooding::Thresholds::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : down.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : up.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Mpls::TrafficEng::Flooding::Thresholds::has_operation() const
{
    for (auto const & leaf : down.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : up.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(up.yfilter);
}

std::string Native::Interface::Tunnel::Mpls::TrafficEng::Flooding::Thresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresholds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Mpls::TrafficEng::Flooding::Thresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto down_name_datas = down.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), down_name_datas.begin(), down_name_datas.end());
    auto up_name_datas = up.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), up_name_datas.begin(), up_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Mpls::TrafficEng::Flooding::Thresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Mpls::TrafficEng::Flooding::Thresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Mpls::TrafficEng::Flooding::Thresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down.append(value);
    }
    if(value_path == "up")
    {
        up.append(value);
    }
}

void Native::Interface::Tunnel::Mpls::TrafficEng::Flooding::Thresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Mpls::TrafficEng::Flooding::Thresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "up")
        return true;
    return false;
}

Native::Interface::Tunnel::Mpls::TrafficEng::PassiveInterface::PassiveInterface()
    :
    nbr_te_id{YType::str, "nbr-te-id"},
    nbr_if_addr{YType::str, "nbr-if-addr"}
        ,
    nbr_igp_id(std::make_shared<Native::Interface::Tunnel::Mpls::TrafficEng::PassiveInterface::NbrIgpId>())
{
    nbr_igp_id->parent = this;

    yang_name = "passive-interface"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Mpls::TrafficEng::PassiveInterface::~PassiveInterface()
{
}

bool Native::Interface::Tunnel::Mpls::TrafficEng::PassiveInterface::has_data() const
{
    if (is_presence_container) return true;
    return nbr_te_id.is_set
	|| nbr_if_addr.is_set
	|| (nbr_igp_id !=  nullptr && nbr_igp_id->has_data());
}

bool Native::Interface::Tunnel::Mpls::TrafficEng::PassiveInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nbr_te_id.yfilter)
	|| ydk::is_set(nbr_if_addr.yfilter)
	|| (nbr_igp_id !=  nullptr && nbr_igp_id->has_operation());
}

std::string Native::Interface::Tunnel::Mpls::TrafficEng::PassiveInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "passive-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Mpls::TrafficEng::PassiveInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbr_te_id.is_set || is_set(nbr_te_id.yfilter)) leaf_name_data.push_back(nbr_te_id.get_name_leafdata());
    if (nbr_if_addr.is_set || is_set(nbr_if_addr.yfilter)) leaf_name_data.push_back(nbr_if_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Mpls::TrafficEng::PassiveInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nbr-igp-id")
    {
        if(nbr_igp_id == nullptr)
        {
            nbr_igp_id = std::make_shared<Native::Interface::Tunnel::Mpls::TrafficEng::PassiveInterface::NbrIgpId>();
        }
        return nbr_igp_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Mpls::TrafficEng::PassiveInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nbr_igp_id != nullptr)
    {
        _children["nbr-igp-id"] = nbr_igp_id;
    }

    return _children;
}

void Native::Interface::Tunnel::Mpls::TrafficEng::PassiveInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nbr-te-id")
    {
        nbr_te_id = value;
        nbr_te_id.value_namespace = name_space;
        nbr_te_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-if-addr")
    {
        nbr_if_addr = value;
        nbr_if_addr.value_namespace = name_space;
        nbr_if_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Mpls::TrafficEng::PassiveInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nbr-te-id")
    {
        nbr_te_id.yfilter = yfilter;
    }
    if(value_path == "nbr-if-addr")
    {
        nbr_if_addr.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Mpls::TrafficEng::PassiveInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nbr-igp-id" || name == "nbr-te-id" || name == "nbr-if-addr")
        return true;
    return false;
}

Native::Interface::Tunnel::Mpls::TrafficEng::PassiveInterface::NbrIgpId::NbrIgpId()
    :
    isis{YType::str, "isis"},
    ospf{YType::str, "ospf"}
{

    yang_name = "nbr-igp-id"; yang_parent_name = "passive-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Mpls::TrafficEng::PassiveInterface::NbrIgpId::~NbrIgpId()
{
}

bool Native::Interface::Tunnel::Mpls::TrafficEng::PassiveInterface::NbrIgpId::has_data() const
{
    if (is_presence_container) return true;
    return isis.is_set
	|| ospf.is_set;
}

bool Native::Interface::Tunnel::Mpls::TrafficEng::PassiveInterface::NbrIgpId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis.yfilter)
	|| ydk::is_set(ospf.yfilter);
}

std::string Native::Interface::Tunnel::Mpls::TrafficEng::PassiveInterface::NbrIgpId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-igp-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Mpls::TrafficEng::PassiveInterface::NbrIgpId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis.is_set || is_set(isis.yfilter)) leaf_name_data.push_back(isis.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.yfilter)) leaf_name_data.push_back(ospf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Mpls::TrafficEng::PassiveInterface::NbrIgpId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Mpls::TrafficEng::PassiveInterface::NbrIgpId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Mpls::TrafficEng::PassiveInterface::NbrIgpId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis")
    {
        isis = value;
        isis.value_namespace = name_space;
        isis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf")
    {
        ospf = value;
        ospf.value_namespace = name_space;
        ospf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Mpls::TrafficEng::PassiveInterface::NbrIgpId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis")
    {
        isis.yfilter = yfilter;
    }
    if(value_path == "ospf")
    {
        ospf.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Mpls::TrafficEng::PassiveInterface::NbrIgpId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf")
        return true;
    return false;
}

Native::Interface::Tunnel::IpVrf::IpVrf()
    :
    ip(std::make_shared<Native::Interface::Tunnel::IpVrf::Ip>())
{
    ip->parent = this;

    yang_name = "ip-vrf"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::IpVrf::~IpVrf()
{
}

bool Native::Interface::Tunnel::IpVrf::has_data() const
{
    if (is_presence_container) return true;
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Interface::Tunnel::IpVrf::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Interface::Tunnel::IpVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::IpVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::IpVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Interface::Tunnel::IpVrf::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::IpVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Native::Interface::Tunnel::IpVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::IpVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::IpVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Interface::Tunnel::IpVrf::Ip::Ip()
    :
    vrf(std::make_shared<Native::Interface::Tunnel::IpVrf::Ip::Vrf>())
{
    vrf->parent = this;

    yang_name = "ip"; yang_parent_name = "ip-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::IpVrf::Ip::~Ip()
{
}

bool Native::Interface::Tunnel::IpVrf::Ip::has_data() const
{
    if (is_presence_container) return true;
    return (vrf !=  nullptr && vrf->has_data());
}

bool Native::Interface::Tunnel::IpVrf::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Interface::Tunnel::IpVrf::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::IpVrf::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::IpVrf::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::Tunnel::IpVrf::Ip::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::IpVrf::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    return _children;
}

void Native::Interface::Tunnel::IpVrf::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::IpVrf::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::IpVrf::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Interface::Tunnel::IpVrf::Ip::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::IpVrf::Ip::Vrf::~Vrf()
{
}

bool Native::Interface::Tunnel::IpVrf::Ip::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return forwarding.is_set;
}

bool Native::Interface::Tunnel::IpVrf::Ip::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Interface::Tunnel::IpVrf::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::IpVrf::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::IpVrf::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::IpVrf::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::IpVrf::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::IpVrf::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::IpVrf::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Interface::Tunnel::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"},
    downstream{YType::str, "downstream"}
{

    yang_name = "vrf"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Vrf::~Vrf()
{
}

bool Native::Interface::Tunnel::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return forwarding.is_set
	|| downstream.is_set;
}

bool Native::Interface::Tunnel::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter)
	|| ydk::is_set(downstream.yfilter);
}

std::string Native::Interface::Tunnel::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());
    if (downstream.is_set || is_set(downstream.yfilter)) leaf_name_data.push_back(downstream.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream")
    {
        downstream = value;
        downstream.value_namespace = name_space;
        downstream.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
    if(value_path == "downstream")
    {
        downstream.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding" || name == "downstream")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Ip()
    :
    admission{YType::str, "admission"},
    unnumbered{YType::str, "unnumbered"},
    local_proxy_arp{YType::empty, "local-proxy-arp"},
    proxy_arp{YType::boolean, "proxy-arp"},
    redirects{YType::boolean, "redirects"},
    mtu{YType::uint16, "mtu"},
    mroute_cache{YType::boolean, "mroute-cache"},
    unreachables{YType::boolean, "Cisco-IOS-XE-icmp:unreachables"}
        ,
    access_group(std::make_shared<Native::Interface::Tunnel::Ip::AccessGroup>())
    , arp(std::make_shared<Native::Interface::Tunnel::Ip::Arp>())
    , vrf(std::make_shared<Native::Interface::Tunnel::Ip::Vrf>())
    , address(std::make_shared<Native::Interface::Tunnel::Ip::Address>())
    , directed_broadcast(nullptr) // presence node
    , hello_interval(std::make_shared<Native::Interface::Tunnel::Ip::HelloInterval>())
    , authentication(std::make_shared<Native::Interface::Tunnel::Ip::Authentication>())
    , hold_time(std::make_shared<Native::Interface::Tunnel::Ip::HoldTime>())
    , helper_address(this, {"address"})
    , pim(std::make_shared<Native::Interface::Tunnel::Ip::Pim>())
    , policy(std::make_shared<Native::Interface::Tunnel::Ip::Policy>())
    , rip(std::make_shared<Native::Interface::Tunnel::Ip::Rip>())
    , route_cache_conf(std::make_shared<Native::Interface::Tunnel::Ip::RouteCacheConf>())
    , route_cache(nullptr) // presence node
    , router(std::make_shared<Native::Interface::Tunnel::Ip::Router>())
    , tcp(std::make_shared<Native::Interface::Tunnel::Ip::Tcp>())
    , virtual_reassembly(std::make_shared<Native::Interface::Tunnel::Ip::VirtualReassembly>())
    , dhcp(std::make_shared<Native::Interface::Tunnel::Ip::Dhcp>())
    , summary_address(std::make_shared<Native::Interface::Tunnel::Ip::SummaryAddress>())
    , verify(std::make_shared<Native::Interface::Tunnel::Ip::Verify>())
    , flow(std::make_shared<Native::Interface::Tunnel::Ip::Flow>())
    , igmp(std::make_shared<Native::Interface::Tunnel::Ip::Igmp>())
    , ospf(std::make_shared<Native::Interface::Tunnel::Ip::Ospf>())
    , lisp(std::make_shared<Native::Interface::Tunnel::Ip::Lisp>())
    , nhrp(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp>())
    , nbar(std::make_shared<Native::Interface::Tunnel::Ip::Nbar>())
    , rsvp(std::make_shared<Native::Interface::Tunnel::Ip::Rsvp>())
    , wccp(std::make_shared<Native::Interface::Tunnel::Ip::Wccp>())
{
    access_group->parent = this;
    arp->parent = this;
    vrf->parent = this;
    address->parent = this;
    hello_interval->parent = this;
    authentication->parent = this;
    hold_time->parent = this;
    pim->parent = this;
    policy->parent = this;
    rip->parent = this;
    route_cache_conf->parent = this;
    router->parent = this;
    tcp->parent = this;
    virtual_reassembly->parent = this;
    dhcp->parent = this;
    summary_address->parent = this;
    verify->parent = this;
    flow->parent = this;
    igmp->parent = this;
    ospf->parent = this;
    lisp->parent = this;
    nhrp->parent = this;
    nbar->parent = this;
    rsvp->parent = this;
    wccp->parent = this;

    yang_name = "ip"; yang_parent_name = "Tunnel"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::~Ip()
{
}

bool Native::Interface::Tunnel::Ip::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<helper_address.len(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return admission.is_set
	|| unnumbered.is_set
	|| local_proxy_arp.is_set
	|| proxy_arp.is_set
	|| redirects.is_set
	|| mtu.is_set
	|| mroute_cache.is_set
	|| unreachables.is_set
	|| (access_group !=  nullptr && access_group->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (address !=  nullptr && address->has_data())
	|| (directed_broadcast !=  nullptr && directed_broadcast->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (hold_time !=  nullptr && hold_time->has_data())
	|| (pim !=  nullptr && pim->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (route_cache_conf !=  nullptr && route_cache_conf->has_data())
	|| (route_cache !=  nullptr && route_cache->has_data())
	|| (router !=  nullptr && router->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (virtual_reassembly !=  nullptr && virtual_reassembly->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (summary_address !=  nullptr && summary_address->has_data())
	|| (verify !=  nullptr && verify->has_data())
	|| (flow !=  nullptr && flow->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (nhrp !=  nullptr && nhrp->has_data())
	|| (nbar !=  nullptr && nbar->has_data())
	|| (rsvp !=  nullptr && rsvp->has_data())
	|| (wccp !=  nullptr && wccp->has_data());
}

bool Native::Interface::Tunnel::Ip::has_operation() const
{
    for (std::size_t index=0; index<helper_address.len(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(admission.yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| ydk::is_set(local_proxy_arp.yfilter)
	|| ydk::is_set(proxy_arp.yfilter)
	|| ydk::is_set(redirects.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(mroute_cache.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| (access_group !=  nullptr && access_group->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (address !=  nullptr && address->has_operation())
	|| (directed_broadcast !=  nullptr && directed_broadcast->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (hold_time !=  nullptr && hold_time->has_operation())
	|| (pim !=  nullptr && pim->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (route_cache_conf !=  nullptr && route_cache_conf->has_operation())
	|| (route_cache !=  nullptr && route_cache->has_operation())
	|| (router !=  nullptr && router->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (virtual_reassembly !=  nullptr && virtual_reassembly->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (summary_address !=  nullptr && summary_address->has_operation())
	|| (verify !=  nullptr && verify->has_operation())
	|| (flow !=  nullptr && flow->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (nhrp !=  nullptr && nhrp->has_operation())
	|| (nbar !=  nullptr && nbar->has_operation())
	|| (rsvp !=  nullptr && rsvp->has_operation())
	|| (wccp !=  nullptr && wccp->has_operation());
}

std::string Native::Interface::Tunnel::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admission.is_set || is_set(admission.yfilter)) leaf_name_data.push_back(admission.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());
    if (local_proxy_arp.is_set || is_set(local_proxy_arp.yfilter)) leaf_name_data.push_back(local_proxy_arp.get_name_leafdata());
    if (proxy_arp.is_set || is_set(proxy_arp.yfilter)) leaf_name_data.push_back(proxy_arp.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.yfilter)) leaf_name_data.push_back(redirects.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (mroute_cache.is_set || is_set(mroute_cache.yfilter)) leaf_name_data.push_back(mroute_cache.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Interface::Tunnel::Ip::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::Tunnel::Ip::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::Tunnel::Ip::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::Tunnel::Ip::Address>();
        }
        return address;
    }

    if(child_yang_name == "directed-broadcast")
    {
        if(directed_broadcast == nullptr)
        {
            directed_broadcast = std::make_shared<Native::Interface::Tunnel::Ip::DirectedBroadcast>();
        }
        return directed_broadcast;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::Tunnel::Ip::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Tunnel::Ip::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Interface::Tunnel::Ip::HoldTime>();
        }
        return hold_time;
    }

    if(child_yang_name == "helper-address")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::HelperAddress>();
        ent_->parent = this;
        helper_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::Interface::Tunnel::Ip::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::Tunnel::Ip::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Interface::Tunnel::Ip::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "route-cache-conf")
    {
        if(route_cache_conf == nullptr)
        {
            route_cache_conf = std::make_shared<Native::Interface::Tunnel::Ip::RouteCacheConf>();
        }
        return route_cache_conf;
    }

    if(child_yang_name == "route-cache")
    {
        if(route_cache == nullptr)
        {
            route_cache = std::make_shared<Native::Interface::Tunnel::Ip::RouteCache>();
        }
        return route_cache;
    }

    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<Native::Interface::Tunnel::Ip::Router>();
        }
        return router;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Interface::Tunnel::Ip::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "virtual-reassembly")
    {
        if(virtual_reassembly == nullptr)
        {
            virtual_reassembly = std::make_shared<Native::Interface::Tunnel::Ip::VirtualReassembly>();
        }
        return virtual_reassembly;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "summary-address")
    {
        if(summary_address == nullptr)
        {
            summary_address = std::make_shared<Native::Interface::Tunnel::Ip::SummaryAddress>();
        }
        return summary_address;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Interface::Tunnel::Ip::Verify>();
        }
        return verify;
    }

    if(child_yang_name == "Cisco-IOS-XE-flow:flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Interface::Tunnel::Ip::Flow>();
        }
        return flow;
    }

    if(child_yang_name == "Cisco-IOS-XE-igmp:igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<Native::Interface::Tunnel::Ip::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "Cisco-IOS-XE-ospf:ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Native::Interface::Tunnel::Ip::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "Cisco-IOS-XE-lisp:lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Interface::Tunnel::Ip::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "Cisco-IOS-XE-nhrp:nhrp")
    {
        if(nhrp == nullptr)
        {
            nhrp = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp>();
        }
        return nhrp;
    }

    if(child_yang_name == "Cisco-IOS-XE-nbar:nbar")
    {
        if(nbar == nullptr)
        {
            nbar = std::make_shared<Native::Interface::Tunnel::Ip::Nbar>();
        }
        return nbar;
    }

    if(child_yang_name == "Cisco-IOS-XE-rsvp:rsvp")
    {
        if(rsvp == nullptr)
        {
            rsvp = std::make_shared<Native::Interface::Tunnel::Ip::Rsvp>();
        }
        return rsvp;
    }

    if(child_yang_name == "Cisco-IOS-XE-wccp:wccp")
    {
        if(wccp == nullptr)
        {
            wccp = std::make_shared<Native::Interface::Tunnel::Ip::Wccp>();
        }
        return wccp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access_group != nullptr)
    {
        _children["access-group"] = access_group;
    }

    if(arp != nullptr)
    {
        _children["arp"] = arp;
    }

    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    if(address != nullptr)
    {
        _children["address"] = address;
    }

    if(directed_broadcast != nullptr)
    {
        _children["directed-broadcast"] = directed_broadcast;
    }

    if(hello_interval != nullptr)
    {
        _children["hello-interval"] = hello_interval;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(hold_time != nullptr)
    {
        _children["hold-time"] = hold_time;
    }

    count_ = 0;
    for (auto ent_ : helper_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(pim != nullptr)
    {
        _children["pim"] = pim;
    }

    if(policy != nullptr)
    {
        _children["policy"] = policy;
    }

    if(rip != nullptr)
    {
        _children["rip"] = rip;
    }

    if(route_cache_conf != nullptr)
    {
        _children["route-cache-conf"] = route_cache_conf;
    }

    if(route_cache != nullptr)
    {
        _children["route-cache"] = route_cache;
    }

    if(router != nullptr)
    {
        _children["router"] = router;
    }

    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    if(virtual_reassembly != nullptr)
    {
        _children["virtual-reassembly"] = virtual_reassembly;
    }

    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    if(summary_address != nullptr)
    {
        _children["summary-address"] = summary_address;
    }

    if(verify != nullptr)
    {
        _children["verify"] = verify;
    }

    if(flow != nullptr)
    {
        _children["Cisco-IOS-XE-flow:flow"] = flow;
    }

    if(igmp != nullptr)
    {
        _children["Cisco-IOS-XE-igmp:igmp"] = igmp;
    }

    if(ospf != nullptr)
    {
        _children["Cisco-IOS-XE-ospf:ospf"] = ospf;
    }

    if(lisp != nullptr)
    {
        _children["Cisco-IOS-XE-lisp:lisp"] = lisp;
    }

    if(nhrp != nullptr)
    {
        _children["Cisco-IOS-XE-nhrp:nhrp"] = nhrp;
    }

    if(nbar != nullptr)
    {
        _children["Cisco-IOS-XE-nbar:nbar"] = nbar;
    }

    if(rsvp != nullptr)
    {
        _children["Cisco-IOS-XE-rsvp:rsvp"] = rsvp;
    }

    if(wccp != nullptr)
    {
        _children["Cisco-IOS-XE-wccp:wccp"] = wccp;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admission")
    {
        admission = value;
        admission.value_namespace = name_space;
        admission.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp = value;
        local_proxy_arp.value_namespace = name_space;
        local_proxy_arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp = value;
        proxy_arp.value_namespace = name_space;
        proxy_arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirects")
    {
        redirects = value;
        redirects.value_namespace = name_space;
        redirects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mroute-cache")
    {
        mroute_cache = value;
        mroute_cache.value_namespace = name_space;
        mroute_cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-icmp:unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admission")
    {
        admission.yfilter = yfilter;
    }
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp.yfilter = yfilter;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp.yfilter = yfilter;
    }
    if(value_path == "redirects")
    {
        redirects.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "mroute-cache")
    {
        mroute_cache.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "arp" || name == "vrf" || name == "address" || name == "directed-broadcast" || name == "hello-interval" || name == "authentication" || name == "hold-time" || name == "helper-address" || name == "pim" || name == "policy" || name == "rip" || name == "route-cache-conf" || name == "route-cache" || name == "router" || name == "tcp" || name == "virtual-reassembly" || name == "dhcp" || name == "summary-address" || name == "verify" || name == "flow" || name == "igmp" || name == "ospf" || name == "lisp" || name == "nhrp" || name == "nbar" || name == "rsvp" || name == "wccp" || name == "admission" || name == "unnumbered" || name == "local-proxy-arp" || name == "proxy-arp" || name == "redirects" || name == "mtu" || name == "mroute-cache" || name == "unreachables")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::AccessGroup::AccessGroup()
    :
    in(std::make_shared<Native::Interface::Tunnel::Ip::AccessGroup::In>())
    , out(std::make_shared<Native::Interface::Tunnel::Ip::AccessGroup::Out>())
{
    in->parent = this;
    out->parent = this;

    yang_name = "access-group"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::AccessGroup::~AccessGroup()
{
}

bool Native::Interface::Tunnel::Ip::AccessGroup::has_data() const
{
    if (is_presence_container) return true;
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::Tunnel::Ip::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::Tunnel::Ip::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Interface::Tunnel::Ip::AccessGroup::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::Tunnel::Ip::AccessGroup::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(in != nullptr)
    {
        _children["in"] = in;
    }

    if(out != nullptr)
    {
        _children["out"] = out;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::AccessGroup::In::In()
    :
    common_acl(std::make_shared<Native::Interface::Tunnel::Ip::AccessGroup::In::CommonAcl>())
    , acl(std::make_shared<Native::Interface::Tunnel::Ip::AccessGroup::In::Acl>())
{
    common_acl->parent = this;
    acl->parent = this;

    yang_name = "in"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::AccessGroup::In::~In()
{
}

bool Native::Interface::Tunnel::Ip::AccessGroup::In::has_data() const
{
    if (is_presence_container) return true;
    return (common_acl !=  nullptr && common_acl->has_data())
	|| (acl !=  nullptr && acl->has_data());
}

bool Native::Interface::Tunnel::Ip::AccessGroup::In::has_operation() const
{
    return is_set(yfilter)
	|| (common_acl !=  nullptr && common_acl->has_operation())
	|| (acl !=  nullptr && acl->has_operation());
}

std::string Native::Interface::Tunnel::Ip::AccessGroup::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::AccessGroup::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::AccessGroup::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::Tunnel::Ip::AccessGroup::In::CommonAcl>();
        }
        return common_acl;
    }

    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::Tunnel::Ip::AccessGroup::In::Acl>();
        }
        return acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::AccessGroup::In::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(common_acl != nullptr)
    {
        _children["common-acl"] = common_acl;
    }

    if(acl != nullptr)
    {
        _children["acl"] = acl;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::AccessGroup::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::AccessGroup::In::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::AccessGroup::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl" || name == "acl")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::AccessGroup::In::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    in{YType::empty, "in"}
{

    yang_name = "common-acl"; yang_parent_name = "in"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::AccessGroup::In::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::Tunnel::Ip::AccessGroup::In::CommonAcl::has_data() const
{
    if (is_presence_container) return true;
    return common.is_set
	|| in.is_set;
}

bool Native::Interface::Tunnel::Ip::AccessGroup::In::CommonAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::Tunnel::Ip::AccessGroup::In::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::AccessGroup::In::CommonAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.yfilter)) leaf_name_data.push_back(common.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::AccessGroup::In::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::AccessGroup::In::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::AccessGroup::In::CommonAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common")
    {
        common = value;
        common.value_namespace = name_space;
        common.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::AccessGroup::In::CommonAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common")
    {
        common.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::AccessGroup::In::CommonAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "in")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::AccessGroup::In::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    in{YType::empty, "in"}
{

    yang_name = "acl"; yang_parent_name = "in"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::AccessGroup::In::Acl::~Acl()
{
}

bool Native::Interface::Tunnel::Ip::AccessGroup::In::Acl::has_data() const
{
    if (is_presence_container) return true;
    return acl_name.is_set
	|| in.is_set;
}

bool Native::Interface::Tunnel::Ip::AccessGroup::In::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::Tunnel::Ip::AccessGroup::In::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::AccessGroup::In::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::AccessGroup::In::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::AccessGroup::In::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::AccessGroup::In::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::AccessGroup::In::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::AccessGroup::In::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "in")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::AccessGroup::Out::Out()
    :
    common_acl(std::make_shared<Native::Interface::Tunnel::Ip::AccessGroup::Out::CommonAcl>())
    , acl(std::make_shared<Native::Interface::Tunnel::Ip::AccessGroup::Out::Acl>())
{
    common_acl->parent = this;
    acl->parent = this;

    yang_name = "out"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::AccessGroup::Out::~Out()
{
}

bool Native::Interface::Tunnel::Ip::AccessGroup::Out::has_data() const
{
    if (is_presence_container) return true;
    return (common_acl !=  nullptr && common_acl->has_data())
	|| (acl !=  nullptr && acl->has_data());
}

bool Native::Interface::Tunnel::Ip::AccessGroup::Out::has_operation() const
{
    return is_set(yfilter)
	|| (common_acl !=  nullptr && common_acl->has_operation())
	|| (acl !=  nullptr && acl->has_operation());
}

std::string Native::Interface::Tunnel::Ip::AccessGroup::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::AccessGroup::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::AccessGroup::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::Tunnel::Ip::AccessGroup::Out::CommonAcl>();
        }
        return common_acl;
    }

    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::Tunnel::Ip::AccessGroup::Out::Acl>();
        }
        return acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::AccessGroup::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(common_acl != nullptr)
    {
        _children["common-acl"] = common_acl;
    }

    if(acl != nullptr)
    {
        _children["acl"] = acl;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::AccessGroup::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::AccessGroup::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::AccessGroup::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-acl" || name == "acl")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::AccessGroup::Out::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    out{YType::empty, "out"}
{

    yang_name = "common-acl"; yang_parent_name = "out"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::AccessGroup::Out::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::Tunnel::Ip::AccessGroup::Out::CommonAcl::has_data() const
{
    if (is_presence_container) return true;
    return common.is_set
	|| out.is_set;
}

bool Native::Interface::Tunnel::Ip::AccessGroup::Out::CommonAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::Tunnel::Ip::AccessGroup::Out::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::AccessGroup::Out::CommonAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.yfilter)) leaf_name_data.push_back(common.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::AccessGroup::Out::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::AccessGroup::Out::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::AccessGroup::Out::CommonAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common")
    {
        common = value;
        common.value_namespace = name_space;
        common.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::AccessGroup::Out::CommonAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common")
    {
        common.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::AccessGroup::Out::CommonAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "out")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::AccessGroup::Out::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    out{YType::empty, "out"}
{

    yang_name = "acl"; yang_parent_name = "out"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::AccessGroup::Out::Acl::~Acl()
{
}

bool Native::Interface::Tunnel::Ip::AccessGroup::Out::Acl::has_data() const
{
    if (is_presence_container) return true;
    return acl_name.is_set
	|| out.is_set;
}

bool Native::Interface::Tunnel::Ip::AccessGroup::Out::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::Tunnel::Ip::AccessGroup::Out::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::AccessGroup::Out::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::AccessGroup::Out::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::AccessGroup::Out::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::AccessGroup::Out::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::AccessGroup::Out::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::AccessGroup::Out::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "out")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Arp::Arp()
    :
    inspection(std::make_shared<Native::Interface::Tunnel::Ip::Arp::Inspection>())
{
    inspection->parent = this;

    yang_name = "arp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Arp::~Arp()
{
}

bool Native::Interface::Tunnel::Ip::Arp::has_data() const
{
    if (is_presence_container) return true;
    return (inspection !=  nullptr && inspection->has_data());
}

bool Native::Interface::Tunnel::Ip::Arp::has_operation() const
{
    return is_set(yfilter)
	|| (inspection !=  nullptr && inspection->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inspection")
    {
        if(inspection == nullptr)
        {
            inspection = std::make_shared<Native::Interface::Tunnel::Ip::Arp::Inspection>();
        }
        return inspection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(inspection != nullptr)
    {
        _children["inspection"] = inspection;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inspection")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Arp::Inspection::Inspection()
    :
    trust{YType::empty, "trust"}
        ,
    limit(std::make_shared<Native::Interface::Tunnel::Ip::Arp::Inspection::Limit>())
{
    limit->parent = this;

    yang_name = "inspection"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Arp::Inspection::~Inspection()
{
}

bool Native::Interface::Tunnel::Ip::Arp::Inspection::has_data() const
{
    if (is_presence_container) return true;
    return trust.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Interface::Tunnel::Ip::Arp::Inspection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Arp::Inspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Arp::Inspection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Arp::Inspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Interface::Tunnel::Ip::Arp::Inspection::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Arp::Inspection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(limit != nullptr)
    {
        _children["limit"] = limit;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Arp::Inspection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Arp::Inspection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Arp::Inspection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "trust")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Arp::Inspection::Limit::Limit()
    :
    none{YType::empty, "none"},
    rate{YType::uint32, "rate"}
{

    yang_name = "limit"; yang_parent_name = "inspection"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Arp::Inspection::Limit::~Limit()
{
}

bool Native::Interface::Tunnel::Ip::Arp::Inspection::Limit::has_data() const
{
    if (is_presence_container) return true;
    return none.is_set
	|| rate.is_set;
}

bool Native::Interface::Tunnel::Ip::Arp::Inspection::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Arp::Inspection::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Arp::Inspection::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Arp::Inspection::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Arp::Inspection::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Arp::Inspection::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Arp::Inspection::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Arp::Inspection::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "none" || name == "rate")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Vrf::Vrf()
    :
    receive{YType::str, "receive"},
    sitemap{YType::str, "sitemap"}
        ,
    forwarding(std::make_shared<Native::Interface::Tunnel::Ip::Vrf::Forwarding>())
{
    forwarding->parent = this;

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Vrf::~Vrf()
{
}

bool Native::Interface::Tunnel::Ip::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return receive.is_set
	|| sitemap.is_set
	|| (forwarding !=  nullptr && forwarding->has_data());
}

bool Native::Interface::Tunnel::Ip::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(sitemap.yfilter)
	|| (forwarding !=  nullptr && forwarding->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (sitemap.is_set || is_set(sitemap.yfilter)) leaf_name_data.push_back(sitemap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding")
    {
        if(forwarding == nullptr)
        {
            forwarding = std::make_shared<Native::Interface::Tunnel::Ip::Vrf::Forwarding>();
        }
        return forwarding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(forwarding != nullptr)
    {
        _children["forwarding"] = forwarding;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sitemap")
    {
        sitemap = value;
        sitemap.value_namespace = name_space;
        sitemap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "sitemap")
    {
        sitemap.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding" || name == "receive" || name == "sitemap")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Vrf::Forwarding::Forwarding()
    :
    liin_vrf{YType::empty, "Liin-vrf"},
    mgmtvrf{YType::empty, "mgmtVrf"},
    word{YType::str, "word"}
{

    yang_name = "forwarding"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Vrf::Forwarding::~Forwarding()
{
}

bool Native::Interface::Tunnel::Ip::Vrf::Forwarding::has_data() const
{
    if (is_presence_container) return true;
    return liin_vrf.is_set
	|| mgmtvrf.is_set
	|| word.is_set;
}

bool Native::Interface::Tunnel::Ip::Vrf::Forwarding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(liin_vrf.yfilter)
	|| ydk::is_set(mgmtvrf.yfilter)
	|| ydk::is_set(word.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Vrf::Forwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Vrf::Forwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (liin_vrf.is_set || is_set(liin_vrf.yfilter)) leaf_name_data.push_back(liin_vrf.get_name_leafdata());
    if (mgmtvrf.is_set || is_set(mgmtvrf.yfilter)) leaf_name_data.push_back(mgmtvrf.get_name_leafdata());
    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Vrf::Forwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Vrf::Forwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Vrf::Forwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Liin-vrf")
    {
        liin_vrf = value;
        liin_vrf.value_namespace = name_space;
        liin_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mgmtVrf")
    {
        mgmtvrf = value;
        mgmtvrf.value_namespace = name_space;
        mgmtvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Vrf::Forwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Liin-vrf")
    {
        liin_vrf.yfilter = yfilter;
    }
    if(value_path == "mgmtVrf")
    {
        mgmtvrf.yfilter = yfilter;
    }
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Vrf::Forwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Liin-vrf" || name == "mgmtVrf" || name == "word")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Address::Address()
    :
    negotiated{YType::empty, "negotiated"}
        ,
    secondary(this, {"address"})
    , primary(std::make_shared<Native::Interface::Tunnel::Ip::Address::Primary>())
    , dhcp(nullptr) // presence node
{
    primary->parent = this;

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Address::~Address()
{
}

bool Native::Interface::Tunnel::Ip::Address::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<secondary.len(); index++)
    {
        if(secondary[index]->has_data())
            return true;
    }
    return negotiated.is_set
	|| (primary !=  nullptr && primary->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Interface::Tunnel::Ip::Address::has_operation() const
{
    for (std::size_t index=0; index<secondary.len(); index++)
    {
        if(secondary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(negotiated.yfilter)
	|| (primary !=  nullptr && primary->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated.is_set || is_set(negotiated.yfilter)) leaf_name_data.push_back(negotiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Address::Secondary>();
        ent_->parent = this;
        secondary.append(ent_);
        return ent_;
    }

    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::Interface::Tunnel::Ip::Address::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Tunnel::Ip::Address::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : secondary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(primary != nullptr)
    {
        _children["primary"] = primary;
    }

    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated")
    {
        negotiated = value;
        negotiated.value_namespace = name_space;
        negotiated.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated")
    {
        negotiated.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary" || name == "primary" || name == "dhcp" || name == "negotiated")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Address::Secondary::Secondary()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "secondary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Address::Secondary::~Secondary()
{
}

bool Native::Interface::Tunnel::Ip::Address::Secondary::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask.is_set
	|| secondary.is_set;
}

bool Native::Interface::Tunnel::Ip::Address::Secondary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Address::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Address::Secondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Address::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Address::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Address::Secondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Address::Secondary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Address::Secondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask" || name == "secondary")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Address::Primary::Primary()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{

    yang_name = "primary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Address::Primary::~Primary()
{
}

bool Native::Interface::Tunnel::Ip::Address::Primary::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| mask.is_set;
}

bool Native::Interface::Tunnel::Ip::Address::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Address::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Address::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Address::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Address::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Address::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Address::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Address::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Address::Dhcp::Dhcp()
    :
    hostname{YType::str, "hostname"}
        ,
    client_id(std::make_shared<Native::Interface::Tunnel::Ip::Address::Dhcp::ClientId>())
{
    client_id->parent = this;

    yang_name = "dhcp"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Address::Dhcp::~Dhcp()
{
}

bool Native::Interface::Tunnel::Ip::Address::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return hostname.is_set
	|| (client_id !=  nullptr && client_id->has_data());
}

bool Native::Interface::Tunnel::Ip::Address::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| (client_id !=  nullptr && client_id->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Address::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Address::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Address::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-id")
    {
        if(client_id == nullptr)
        {
            client_id = std::make_shared<Native::Interface::Tunnel::Ip::Address::Dhcp::ClientId>();
        }
        return client_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Address::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client_id != nullptr)
    {
        _children["client-id"] = client_id;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Address::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Address::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Address::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-id" || name == "hostname")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Address::Dhcp::ClientId::ClientId()
    :
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    port_channel{YType::uint32, "Port-channel"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    vlan{YType::uint16, "vlan"}
{

    yang_name = "client-id"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Address::Dhcp::ClientId::~ClientId()
{
}

bool Native::Interface::Tunnel::Ip::Address::Dhcp::ClientId::has_data() const
{
    if (is_presence_container) return true;
    return ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| port_channel.is_set
	|| tengigabitethernet.is_set
	|| twentyfivegige.is_set
	|| fortygigabitethernet.is_set
	|| twogigabitethernet.is_set
	|| hundredgige.is_set
	|| vlan.is_set;
}

bool Native::Interface::Tunnel::Ip::Address::Dhcp::ClientId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Address::Dhcp::ClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Address::Dhcp::ClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Address::Dhcp::ClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Address::Dhcp::ClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Address::Dhcp::ClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Address::Dhcp::ClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Address::Dhcp::ClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "Port-channel" || name == "TenGigabitEthernet" || name == "TwentyFiveGigE" || name == "FortyGigabitEthernet" || name == "TwoGigabitEthernet" || name == "HundredGigE" || name == "vlan")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::DirectedBroadcast::DirectedBroadcast()
    :
    direct_broadcast{YType::str, "direct-broadcast"}
{

    yang_name = "directed-broadcast"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::DirectedBroadcast::~DirectedBroadcast()
{
}

bool Native::Interface::Tunnel::Ip::DirectedBroadcast::has_data() const
{
    if (is_presence_container) return true;
    return direct_broadcast.is_set;
}

bool Native::Interface::Tunnel::Ip::DirectedBroadcast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direct_broadcast.yfilter);
}

std::string Native::Interface::Tunnel::Ip::DirectedBroadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "directed-broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::DirectedBroadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direct_broadcast.is_set || is_set(direct_broadcast.yfilter)) leaf_name_data.push_back(direct_broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::DirectedBroadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::DirectedBroadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::DirectedBroadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direct-broadcast")
    {
        direct_broadcast = value;
        direct_broadcast.value_namespace = name_space;
        direct_broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::DirectedBroadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direct-broadcast")
    {
        direct_broadcast.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::DirectedBroadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direct-broadcast")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::HelloInterval::HelloInterval()
    :
    eigrp{YType::uint16, "eigrp"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "hello-interval"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::Tunnel::Ip::HelloInterval::has_data() const
{
    if (is_presence_container) return true;
    return eigrp.is_set
	|| seconds.is_set;
}

bool Native::Interface::Tunnel::Ip::HelloInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::Tunnel::Ip::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "seconds")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Authentication::Authentication()
    :
    key_chain(std::make_shared<Native::Interface::Tunnel::Ip::Authentication::KeyChain>())
    , mode(std::make_shared<Native::Interface::Tunnel::Ip::Authentication::Mode>())
{
    key_chain->parent = this;
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Authentication::~Authentication()
{
}

bool Native::Interface::Tunnel::Ip::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return (key_chain !=  nullptr && key_chain->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Interface::Tunnel::Ip::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::Tunnel::Ip::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::Tunnel::Ip::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(key_chain != nullptr)
    {
        _children["key-chain"] = key_chain;
    }

    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "mode")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Authentication::KeyChain::KeyChain()
    :
    eigrp{YType::uint16, "eigrp"},
    name{YType::str, "name"}
{

    yang_name = "key-chain"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Interface::Tunnel::Ip::Authentication::KeyChain::has_data() const
{
    if (is_presence_container) return true;
    return eigrp.is_set
	|| name.is_set;
}

bool Native::Interface::Tunnel::Ip::Authentication::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Authentication::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Authentication::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Authentication::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Authentication::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "name")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Authentication::Mode::Mode()
    :
    eigrp{YType::uint16, "eigrp"},
    md5{YType::empty, "md5"}
{

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Authentication::Mode::~Mode()
{
}

bool Native::Interface::Tunnel::Ip::Authentication::Mode::has_data() const
{
    if (is_presence_container) return true;
    return eigrp.is_set
	|| md5.is_set;
}

bool Native::Interface::Tunnel::Ip::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(md5.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "md5")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::HoldTime::HoldTime()
    :
    eigrp{YType::uint16, "eigrp"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "hold-time"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::HoldTime::~HoldTime()
{
}

bool Native::Interface::Tunnel::Ip::HoldTime::has_data() const
{
    if (is_presence_container) return true;
    return eigrp.is_set
	|| seconds.is_set;
}

bool Native::Interface::Tunnel::Ip::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::Tunnel::Ip::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "seconds")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::HelperAddress::HelperAddress()
    :
    address{YType::str, "address"},
    global{YType::empty, "global"},
    vrf{YType::str, "vrf"}
{

    yang_name = "helper-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::HelperAddress::~HelperAddress()
{
}

bool Native::Interface::Tunnel::Ip::HelperAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| global.is_set
	|| vrf.is_set;
}

bool Native::Interface::Tunnel::Ip::HelperAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Interface::Tunnel::Ip::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::HelperAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::HelperAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::HelperAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::HelperAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::HelperAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "global" || name == "vrf")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Pim::Pim()
    :
    pim_mode{YType::enumeration, "Cisco-IOS-XE-multicast:pim-mode"},
    nbma_mode{YType::empty, "Cisco-IOS-XE-multicast:nbma-mode"},
    dr_priority{YType::uint32, "Cisco-IOS-XE-multicast:dr-priority"},
    spt_threshold{YType::enumeration, "Cisco-IOS-XE-multicast:spt-threshold"}
        ,
    accept_register(std::make_shared<Native::Interface::Tunnel::Ip::Pim::AcceptRegister>())
    , query_interval(std::make_shared<Native::Interface::Tunnel::Ip::Pim::QueryInterval>())
{
    accept_register->parent = this;
    query_interval->parent = this;

    yang_name = "pim"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Pim::~Pim()
{
}

bool Native::Interface::Tunnel::Ip::Pim::has_data() const
{
    if (is_presence_container) return true;
    return pim_mode.is_set
	|| nbma_mode.is_set
	|| dr_priority.is_set
	|| spt_threshold.is_set
	|| (accept_register !=  nullptr && accept_register->has_data())
	|| (query_interval !=  nullptr && query_interval->has_data());
}

bool Native::Interface::Tunnel::Ip::Pim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pim_mode.yfilter)
	|| ydk::is_set(nbma_mode.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(spt_threshold.yfilter)
	|| (accept_register !=  nullptr && accept_register->has_operation())
	|| (query_interval !=  nullptr && query_interval->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Pim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pim_mode.is_set || is_set(pim_mode.yfilter)) leaf_name_data.push_back(pim_mode.get_name_leafdata());
    if (nbma_mode.is_set || is_set(nbma_mode.yfilter)) leaf_name_data.push_back(nbma_mode.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (spt_threshold.is_set || is_set(spt_threshold.yfilter)) leaf_name_data.push_back(spt_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-multicast:accept-register")
    {
        if(accept_register == nullptr)
        {
            accept_register = std::make_shared<Native::Interface::Tunnel::Ip::Pim::AcceptRegister>();
        }
        return accept_register;
    }

    if(child_yang_name == "Cisco-IOS-XE-multicast:query-interval")
    {
        if(query_interval == nullptr)
        {
            query_interval = std::make_shared<Native::Interface::Tunnel::Ip::Pim::QueryInterval>();
        }
        return query_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accept_register != nullptr)
    {
        _children["Cisco-IOS-XE-multicast:accept-register"] = accept_register;
    }

    if(query_interval != nullptr)
    {
        _children["Cisco-IOS-XE-multicast:query-interval"] = query_interval;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Pim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-multicast:pim-mode")
    {
        pim_mode = value;
        pim_mode.value_namespace = name_space;
        pim_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-multicast:nbma-mode")
    {
        nbma_mode = value;
        nbma_mode.value_namespace = name_space;
        nbma_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-multicast:dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-multicast:spt-threshold")
    {
        spt_threshold = value;
        spt_threshold.value_namespace = name_space;
        spt_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Pim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pim-mode")
    {
        pim_mode.yfilter = yfilter;
    }
    if(value_path == "nbma-mode")
    {
        nbma_mode.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "spt-threshold")
    {
        spt_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Pim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-register" || name == "query-interval" || name == "pim-mode" || name == "nbma-mode" || name == "dr-priority" || name == "spt-threshold")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Pim::AcceptRegister::AcceptRegister()
    :
    list{YType::str, "list"}
{

    yang_name = "accept-register"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Pim::AcceptRegister::~AcceptRegister()
{
}

bool Native::Interface::Tunnel::Ip::Pim::AcceptRegister::has_data() const
{
    if (is_presence_container) return true;
    return list.is_set;
}

bool Native::Interface::Tunnel::Ip::Pim::AcceptRegister::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Pim::AcceptRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:accept-register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Pim::AcceptRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Pim::AcceptRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Pim::AcceptRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Pim::AcceptRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Pim::AcceptRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Pim::AcceptRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Pim::QueryInterval::QueryInterval()
    :
    seconds_interval{YType::uint16, "seconds-interval"},
    milliseconds_interval{YType::uint16, "milliseconds-interval"},
    msec{YType::empty, "msec"}
{

    yang_name = "query-interval"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Pim::QueryInterval::~QueryInterval()
{
}

bool Native::Interface::Tunnel::Ip::Pim::QueryInterval::has_data() const
{
    if (is_presence_container) return true;
    return seconds_interval.is_set
	|| milliseconds_interval.is_set
	|| msec.is_set;
}

bool Native::Interface::Tunnel::Ip::Pim::QueryInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds_interval.yfilter)
	|| ydk::is_set(milliseconds_interval.yfilter)
	|| ydk::is_set(msec.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Pim::QueryInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:query-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Pim::QueryInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds_interval.is_set || is_set(seconds_interval.yfilter)) leaf_name_data.push_back(seconds_interval.get_name_leafdata());
    if (milliseconds_interval.is_set || is_set(milliseconds_interval.yfilter)) leaf_name_data.push_back(milliseconds_interval.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Pim::QueryInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Pim::QueryInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Pim::QueryInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds-interval")
    {
        seconds_interval = value;
        seconds_interval.value_namespace = name_space;
        seconds_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "milliseconds-interval")
    {
        milliseconds_interval = value;
        milliseconds_interval.value_namespace = name_space;
        milliseconds_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Pim::QueryInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds-interval")
    {
        seconds_interval.yfilter = yfilter;
    }
    if(value_path == "milliseconds-interval")
    {
        milliseconds_interval.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Pim::QueryInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds-interval" || name == "milliseconds-interval" || name == "msec")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Policy::Policy()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "policy"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Policy::~Policy()
{
}

bool Native::Interface::Tunnel::Ip::Policy::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Interface::Tunnel::Ip::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Rip::Rip()
    :
    authentication(std::make_shared<Native::Interface::Tunnel::Ip::Rip::Authentication>())
{
    authentication->parent = this;

    yang_name = "rip"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Rip::~Rip()
{
}

bool Native::Interface::Tunnel::Ip::Rip::has_data() const
{
    if (is_presence_container) return true;
    return (authentication !=  nullptr && authentication->has_data());
}

bool Native::Interface::Tunnel::Ip::Rip::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Tunnel::Ip::Rip::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Rip::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"}
        ,
    mode(std::make_shared<Native::Interface::Tunnel::Ip::Rip::Authentication::Mode>())
{
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Rip::Authentication::~Authentication()
{
}

bool Native::Interface::Tunnel::Ip::Rip::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return key_chain.is_set
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Interface::Tunnel::Ip::Rip::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Rip::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Rip::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Rip::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::Tunnel::Ip::Rip::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Rip::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Rip::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Rip::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Rip::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "key-chain")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Rip::Authentication::Mode::Mode()
    :
    md5{YType::empty, "md5"},
    text{YType::empty, "text"}
{

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Rip::Authentication::Mode::~Mode()
{
}

bool Native::Interface::Tunnel::Ip::Rip::Authentication::Mode::has_data() const
{
    if (is_presence_container) return true;
    return md5.is_set
	|| text.is_set;
}

bool Native::Interface::Tunnel::Ip::Rip::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Rip::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Rip::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Rip::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Rip::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Rip::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Rip::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Rip::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "text")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::RouteCacheConf::RouteCacheConf()
    :
    route_cache{YType::boolean, "route-cache"}
{

    yang_name = "route-cache-conf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::RouteCacheConf::~RouteCacheConf()
{
}

bool Native::Interface::Tunnel::Ip::RouteCacheConf::has_data() const
{
    if (is_presence_container) return true;
    return route_cache.is_set;
}

bool Native::Interface::Tunnel::Ip::RouteCacheConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_cache.yfilter);
}

std::string Native::Interface::Tunnel::Ip::RouteCacheConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-cache-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::RouteCacheConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_cache.is_set || is_set(route_cache.yfilter)) leaf_name_data.push_back(route_cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::RouteCacheConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::RouteCacheConf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::RouteCacheConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-cache")
    {
        route_cache = value;
        route_cache.value_namespace = name_space;
        route_cache.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::RouteCacheConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-cache")
    {
        route_cache.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::RouteCacheConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-cache")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::RouteCache::RouteCache()
    :
    cef{YType::boolean, "cef"},
    flow{YType::boolean, "flow"},
    policy{YType::boolean, "policy"},
    same_interface{YType::boolean, "same-interface"}
{

    yang_name = "route-cache"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::RouteCache::~RouteCache()
{
}

bool Native::Interface::Tunnel::Ip::RouteCache::has_data() const
{
    if (is_presence_container) return true;
    return cef.is_set
	|| flow.is_set
	|| policy.is_set
	|| same_interface.is_set;
}

bool Native::Interface::Tunnel::Ip::RouteCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cef.yfilter)
	|| ydk::is_set(flow.yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(same_interface.yfilter);
}

std::string Native::Interface::Tunnel::Ip::RouteCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::RouteCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cef.is_set || is_set(cef.yfilter)) leaf_name_data.push_back(cef.get_name_leafdata());
    if (flow.is_set || is_set(flow.yfilter)) leaf_name_data.push_back(flow.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (same_interface.is_set || is_set(same_interface.yfilter)) leaf_name_data.push_back(same_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::RouteCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::RouteCache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::RouteCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cef")
    {
        cef = value;
        cef.value_namespace = name_space;
        cef.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow")
    {
        flow = value;
        flow.value_namespace = name_space;
        flow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "same-interface")
    {
        same_interface = value;
        same_interface.value_namespace = name_space;
        same_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::RouteCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cef")
    {
        cef.yfilter = yfilter;
    }
    if(value_path == "flow")
    {
        flow.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "same-interface")
    {
        same_interface.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::RouteCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cef" || name == "flow" || name == "policy" || name == "same-interface")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Router::Router()
    :
    isis(nullptr) // presence node
{

    yang_name = "router"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Router::~Router()
{
}

bool Native::Interface::Tunnel::Ip::Router::has_data() const
{
    if (is_presence_container) return true;
    return (isis !=  nullptr && isis->has_data());
}

bool Native::Interface::Tunnel::Ip::Router::has_operation() const
{
    return is_set(yfilter)
	|| (isis !=  nullptr && isis->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Router::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::Tunnel::Ip::Router::Isis>();
        }
        return isis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Router::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Router::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Router::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Router::Isis::Isis()
    :
    tag{YType::str, "tag"}
{

    yang_name = "isis"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Router::Isis::~Isis()
{
}

bool Native::Interface::Tunnel::Ip::Router::Isis::has_data() const
{
    if (is_presence_container) return true;
    return tag.is_set;
}

bool Native::Interface::Tunnel::Ip::Router::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Router::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Router::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Router::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Router::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Router::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Router::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Router::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Tcp::Tcp()
    :
    adjust_mss{YType::uint16, "adjust-mss"}
{

    yang_name = "tcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Tcp::~Tcp()
{
}

bool Native::Interface::Tunnel::Ip::Tcp::has_data() const
{
    if (is_presence_container) return true;
    return adjust_mss.is_set;
}

bool Native::Interface::Tunnel::Ip::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjust_mss.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjust_mss.is_set || is_set(adjust_mss.yfilter)) leaf_name_data.push_back(adjust_mss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss = value;
        adjust_mss.value_namespace = name_space;
        adjust_mss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjust-mss")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::VirtualReassembly::VirtualReassembly()
    :
    max_reassemblies{YType::uint32, "max-reassemblies"},
    max_fragments{YType::uint32, "max-fragments"},
    timeout{YType::uint32, "timeout"},
    drop_fragments{YType::empty, "drop-fragments"},
    in{YType::empty, "in"}
{

    yang_name = "virtual-reassembly"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::VirtualReassembly::~VirtualReassembly()
{
}

bool Native::Interface::Tunnel::Ip::VirtualReassembly::has_data() const
{
    if (is_presence_container) return true;
    return max_reassemblies.is_set
	|| max_fragments.is_set
	|| timeout.is_set
	|| drop_fragments.is_set
	|| in.is_set;
}

bool Native::Interface::Tunnel::Ip::VirtualReassembly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_reassemblies.yfilter)
	|| ydk::is_set(max_fragments.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(drop_fragments.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::Tunnel::Ip::VirtualReassembly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-reassembly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::VirtualReassembly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_reassemblies.is_set || is_set(max_reassemblies.yfilter)) leaf_name_data.push_back(max_reassemblies.get_name_leafdata());
    if (max_fragments.is_set || is_set(max_fragments.yfilter)) leaf_name_data.push_back(max_fragments.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (drop_fragments.is_set || is_set(drop_fragments.yfilter)) leaf_name_data.push_back(drop_fragments.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::VirtualReassembly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::VirtualReassembly::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::VirtualReassembly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-reassemblies")
    {
        max_reassemblies = value;
        max_reassemblies.value_namespace = name_space;
        max_reassemblies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-fragments")
    {
        max_fragments = value;
        max_fragments.value_namespace = name_space;
        max_fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-fragments")
    {
        drop_fragments = value;
        drop_fragments.value_namespace = name_space;
        drop_fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::VirtualReassembly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-reassemblies")
    {
        max_reassemblies.yfilter = yfilter;
    }
    if(value_path == "max-fragments")
    {
        max_fragments.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "drop-fragments")
    {
        drop_fragments.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::VirtualReassembly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-reassemblies" || name == "max-fragments" || name == "timeout" || name == "drop-fragments" || name == "in")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Dhcp::Dhcp()
    :
    client(std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Client>())
    , relay(std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Relay>())
    , snooping(std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Snooping>())
{
    client->parent = this;
    relay->parent = this;
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Dhcp::~Dhcp()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return (client !=  nullptr && client->has_data())
	|| (relay !=  nullptr && relay->has_data())
	|| (snooping !=  nullptr && snooping->has_data());
}

bool Native::Interface::Tunnel::Ip::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (relay !=  nullptr && relay->has_operation())
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-dhcp:client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Client>();
        }
        return client;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Relay>();
        }
        return relay;
    }

    if(child_yang_name == "Cisco-IOS-XE-dhcp:snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client != nullptr)
    {
        _children["Cisco-IOS-XE-dhcp:client"] = client;
    }

    if(relay != nullptr)
    {
        _children["Cisco-IOS-XE-dhcp:relay"] = relay;
    }

    if(snooping != nullptr)
    {
        _children["Cisco-IOS-XE-dhcp:snooping"] = snooping;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "relay" || name == "snooping")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Dhcp::Client::Client()
    :
    hostname{YType::str, "hostname"}
        ,
    option(std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Client::Option>())
    , request(std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Client::Request>())
    , route(std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Client::Route>())
{
    option->parent = this;
    request->parent = this;
    route->parent = this;

    yang_name = "client"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Dhcp::Client::~Client()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Client::has_data() const
{
    if (is_presence_container) return true;
    return hostname.is_set
	|| (option !=  nullptr && option->has_data())
	|| (request !=  nullptr && request->has_data())
	|| (route !=  nullptr && route->has_data());
}

bool Native::Interface::Tunnel::Ip::Dhcp::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| (option !=  nullptr && option->has_operation())
	|| (request !=  nullptr && request->has_operation())
	|| (route !=  nullptr && route->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Dhcp::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Dhcp::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Client::Option>();
        }
        return option;
    }

    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Client::Request>();
        }
        return request;
    }

    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Client::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Dhcp::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(option != nullptr)
    {
        _children["option"] = option;
    }

    if(request != nullptr)
    {
        _children["request"] = request;
    }

    if(route != nullptr)
    {
        _children["route"] = route;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Dhcp::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Dhcp::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option" || name == "request" || name == "route" || name == "hostname")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Dhcp::Client::Option::Option()
    :
    option_range(this, {"option_range"})
{

    yang_name = "option"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Dhcp::Client::Option::~Option()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Client::Option::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<option_range.len(); index++)
    {
        if(option_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Dhcp::Client::Option::has_operation() const
{
    for (std::size_t index=0; index<option_range.len(); index++)
    {
        if(option_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Client::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Dhcp::Client::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Dhcp::Client::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option-range")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Client::Option::OptionRange>();
        ent_->parent = this;
        option_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Dhcp::Client::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : option_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Client::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Dhcp::Client::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Client::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option-range")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Dhcp::Client::Option::OptionRange::OptionRange()
    :
    option_range{YType::uint8, "option-range"},
    ascii{YType::str, "ascii"},
    hex{YType::str, "hex"},
    ip{YType::str, "ip"}
{

    yang_name = "option-range"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Dhcp::Client::Option::OptionRange::~OptionRange()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Client::Option::OptionRange::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : ip.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return option_range.is_set
	|| ascii.is_set
	|| hex.is_set;
}

bool Native::Interface::Tunnel::Ip::Dhcp::Client::Option::OptionRange::has_operation() const
{
    for (auto const & leaf : ip.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option_range.yfilter)
	|| ydk::is_set(ascii.yfilter)
	|| ydk::is_set(hex.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Client::Option::OptionRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-range";
    ADD_KEY_TOKEN(option_range, "option-range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Dhcp::Client::Option::OptionRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_range.is_set || is_set(option_range.yfilter)) leaf_name_data.push_back(option_range.get_name_leafdata());
    if (ascii.is_set || is_set(ascii.yfilter)) leaf_name_data.push_back(ascii.get_name_leafdata());
    if (hex.is_set || is_set(hex.yfilter)) leaf_name_data.push_back(hex.get_name_leafdata());

    auto ip_name_datas = ip.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ip_name_datas.begin(), ip_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Dhcp::Client::Option::OptionRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Dhcp::Client::Option::OptionRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Client::Option::OptionRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option-range")
    {
        option_range = value;
        option_range.value_namespace = name_space;
        option_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ascii")
    {
        ascii = value;
        ascii.value_namespace = name_space;
        ascii.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hex")
    {
        hex = value;
        hex.value_namespace = name_space;
        hex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip.append(value);
    }
}

void Native::Interface::Tunnel::Ip::Dhcp::Client::Option::OptionRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option-range")
    {
        option_range.yfilter = yfilter;
    }
    if(value_path == "ascii")
    {
        ascii.yfilter = yfilter;
    }
    if(value_path == "hex")
    {
        hex.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Dhcp::Client::Option::OptionRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option-range" || name == "ascii" || name == "hex" || name == "ip")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Dhcp::Client::Request::Request()
    :
    option{YType::uint8, "option"}
{

    yang_name = "request"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Dhcp::Client::Request::~Request()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Client::Request::has_data() const
{
    if (is_presence_container) return true;
    return option.is_set;
}

bool Native::Interface::Tunnel::Ip::Dhcp::Client::Request::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Client::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Dhcp::Client::Request::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Dhcp::Client::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Dhcp::Client::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Client::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Dhcp::Client::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Dhcp::Client::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Dhcp::Client::Route::Route()
    :
    distance{YType::uint8, "distance"},
    track{YType::uint16, "track"}
{

    yang_name = "route"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Dhcp::Client::Route::~Route()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Client::Route::has_data() const
{
    if (is_presence_container) return true;
    return distance.is_set
	|| track.is_set;
}

bool Native::Interface::Tunnel::Ip::Dhcp::Client::Route::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(track.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Client::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Dhcp::Client::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Dhcp::Client::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Dhcp::Client::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Client::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Dhcp::Client::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Dhcp::Client::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distance" || name == "track")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Dhcp::Relay::Relay()
    :
    source_interface{YType::str, "source-interface"}
        ,
    information(std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Relay::Information>())
{
    information->parent = this;

    yang_name = "relay"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Dhcp::Relay::~Relay()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Relay::has_data() const
{
    if (is_presence_container) return true;
    return source_interface.is_set
	|| (information !=  nullptr && information->has_data());
}

bool Native::Interface::Tunnel::Ip::Dhcp::Relay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Dhcp::Relay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Dhcp::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Relay::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Dhcp::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(information != nullptr)
    {
        _children["information"] = information;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Relay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Dhcp::Relay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Dhcp::Relay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information" || name == "source-interface")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Information()
    :
    policy_action{YType::enumeration, "policy-action"},
    trusted{YType::empty, "trusted"}
        ,
    check_reply(nullptr) // presence node
    , option(std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option>())
    , option_insert(nullptr) // presence node
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::~Information()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::has_data() const
{
    if (is_presence_container) return true;
    return policy_action.is_set
	|| trusted.is_set
	|| (check_reply !=  nullptr && check_reply->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (option_insert !=  nullptr && option_insert->has_data());
}

bool Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_action.yfilter)
	|| ydk::is_set(trusted.yfilter)
	|| (check_reply !=  nullptr && check_reply->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (option_insert !=  nullptr && option_insert->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_action.is_set || is_set(policy_action.yfilter)) leaf_name_data.push_back(policy_action.get_name_leafdata());
    if (trusted.is_set || is_set(trusted.yfilter)) leaf_name_data.push_back(trusted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "check-reply")
    {
        if(check_reply == nullptr)
        {
            check_reply = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply>();
        }
        return check_reply;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option>();
        }
        return option;
    }

    if(child_yang_name == "option-insert")
    {
        if(option_insert == nullptr)
        {
            option_insert = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert>();
        }
        return option_insert;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(check_reply != nullptr)
    {
        _children["check-reply"] = check_reply;
    }

    if(option != nullptr)
    {
        _children["option"] = option;
    }

    if(option_insert != nullptr)
    {
        _children["option-insert"] = option_insert;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-action")
    {
        policy_action = value;
        policy_action.value_namespace = name_space;
        policy_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trusted")
    {
        trusted = value;
        trusted.value_namespace = name_space;
        trusted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-action")
    {
        policy_action.yfilter = yfilter;
    }
    if(value_path == "trusted")
    {
        trusted.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "check-reply" || name == "option" || name == "option-insert" || name == "policy-action" || name == "trusted")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply::CheckReply()
    :
    none{YType::empty, "none"}
{

    yang_name = "check-reply"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply::~CheckReply()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply::has_data() const
{
    if (is_presence_container) return true;
    return none.is_set;
}

bool Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "check-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "none")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option::Option()
    :
    subscriber_id{YType::str, "subscriber-id"}
{

    yang_name = "option"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option::~Option()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option::has_data() const
{
    if (is_presence_container) return true;
    return subscriber_id.is_set;
}

bool Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_id.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_id.is_set || is_set(subscriber_id.yfilter)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
        subscriber_id.value_namespace = name_space;
        subscriber_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-id")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert::OptionInsert()
    :
    none{YType::empty, "none"}
{

    yang_name = "option-insert"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert::~OptionInsert()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert::has_data() const
{
    if (is_presence_container) return true;
    return none.is_set;
}

bool Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-insert";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "none")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::Snooping()
    :
    trust{YType::empty, "trust"}
        ,
    limit(std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit>())
    , vlan(this, {"id"})
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return trust.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::has_operation() const
{
    for (std::size_t index=0; index<vlan.len(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(trust.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Dhcp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    if(child_yang_name == "vlan")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan>();
        ent_->parent = this;
        vlan.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(limit != nullptr)
    {
        _children["limit"] = limit;
    }

    count_ = 0;
    for (auto ent_ : vlan.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "vlan" || name == "trust")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{

    yang_name = "limit"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit::has_data() const
{
    if (is_presence_container) return true;
    return rate.is_set;
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Vlan()
    :
    id{YType::uint16, "id"}
        ,
    information(std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information>())
{
    information->parent = this;

    yang_name = "vlan"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::~Vlan()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (information !=  nullptr && information->has_data());
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(information != nullptr)
    {
        _children["information"] = information;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information" || name == "id")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Information()
    :
    option(std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option>())
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::~Information()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::has_data() const
{
    if (is_presence_container) return true;
    return (option !=  nullptr && option->has_data());
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::has_operation() const
{
    return is_set(yfilter)
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(option != nullptr)
    {
        _children["option"] = option;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::Option()
    :
    format_type(std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType>())
{
    format_type->parent = this;

    yang_name = "option"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::~Option()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::has_data() const
{
    if (is_presence_container) return true;
    return (format_type !=  nullptr && format_type->has_data());
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::has_operation() const
{
    return is_set(yfilter)
	|| (format_type !=  nullptr && format_type->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format-type")
    {
        if(format_type == nullptr)
        {
            format_type = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType>();
        }
        return format_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(format_type != nullptr)
    {
        _children["format-type"] = format_type;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format-type")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::FormatType()
    :
    circuit_id(std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId>())
{
    circuit_id->parent = this;

    yang_name = "format-type"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::~FormatType()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::has_data() const
{
    if (is_presence_container) return true;
    return (circuit_id !=  nullptr && circuit_id->has_data());
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::has_operation() const
{
    return is_set(yfilter)
	|| (circuit_id !=  nullptr && circuit_id->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "circuit-id")
    {
        if(circuit_id == nullptr)
        {
            circuit_id = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId>();
        }
        return circuit_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(circuit_id != nullptr)
    {
        _children["circuit-id"] = circuit_id;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "circuit-id")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::CircuitId()
    :
    string{YType::str, "string"}
{

    yang_name = "circuit-id"; yang_parent_name = "format-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::~CircuitId()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::has_data() const
{
    if (is_presence_container) return true;
    return string.is_set;
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::SummaryAddress::SummaryAddress()
    :
    eigrp(this, {"id"})
{

    yang_name = "summary-address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::SummaryAddress::~SummaryAddress()
{
}

bool Native::Interface::Tunnel::Ip::SummaryAddress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<eigrp.len(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::SummaryAddress::has_operation() const
{
    for (std::size_t index=0; index<eigrp.len(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Ip::SummaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::SummaryAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::SummaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::SummaryAddress::Eigrp>();
        ent_->parent = this;
        eigrp.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::SummaryAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : eigrp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::SummaryAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::SummaryAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::SummaryAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::SummaryAddress::Eigrp::Eigrp()
    :
    id{YType::str, "id"},
    ip{YType::str, "ip"},
    mask{YType::str, "mask"},
    metric{YType::uint32, "metric"}
{

    yang_name = "eigrp"; yang_parent_name = "summary-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::SummaryAddress::Eigrp::~Eigrp()
{
}

bool Native::Interface::Tunnel::Ip::SummaryAddress::Eigrp::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| ip.is_set
	|| mask.is_set
	|| metric.is_set;
}

bool Native::Interface::Tunnel::Ip::SummaryAddress::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Interface::Tunnel::Ip::SummaryAddress::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::SummaryAddress::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::SummaryAddress::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::SummaryAddress::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::SummaryAddress::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::SummaryAddress::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::SummaryAddress::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "ip" || name == "mask" || name == "metric")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Verify::Verify()
    :
    source(nullptr) // presence node
    , unicast(std::make_shared<Native::Interface::Tunnel::Ip::Verify::Unicast>())
{
    unicast->parent = this;

    yang_name = "verify"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Verify::~Verify()
{
}

bool Native::Interface::Tunnel::Ip::Verify::has_data() const
{
    if (is_presence_container) return true;
    return (source !=  nullptr && source->has_data())
	|| (unicast !=  nullptr && unicast->has_data());
}

bool Native::Interface::Tunnel::Ip::Verify::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (unicast !=  nullptr && unicast->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Verify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Interface::Tunnel::Ip::Verify::Source>();
        }
        return source;
    }

    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Native::Interface::Tunnel::Ip::Verify::Unicast>();
        }
        return unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    if(unicast != nullptr)
    {
        _children["unicast"] = unicast;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Verify::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "unicast")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Verify::Source::Source()
    :
    vlan(std::make_shared<Native::Interface::Tunnel::Ip::Verify::Source::Vlan>())
{
    vlan->parent = this;

    yang_name = "source"; yang_parent_name = "verify"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Verify::Source::~Source()
{
}

bool Native::Interface::Tunnel::Ip::Verify::Source::has_data() const
{
    if (is_presence_container) return true;
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::Tunnel::Ip::Verify::Source::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Verify::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Verify::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Verify::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::Tunnel::Ip::Verify::Source::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Verify::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Verify::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Verify::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Verify::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Verify::Source::Vlan::Vlan()
    :
    dhcp_snooping(nullptr) // presence node
{

    yang_name = "vlan"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Verify::Source::Vlan::~Vlan()
{
}

bool Native::Interface::Tunnel::Ip::Verify::Source::Vlan::has_data() const
{
    if (is_presence_container) return true;
    return (dhcp_snooping !=  nullptr && dhcp_snooping->has_data());
}

bool Native::Interface::Tunnel::Ip::Verify::Source::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp_snooping !=  nullptr && dhcp_snooping->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Verify::Source::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Verify::Source::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Verify::Source::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-snooping")
    {
        if(dhcp_snooping == nullptr)
        {
            dhcp_snooping = std::make_shared<Native::Interface::Tunnel::Ip::Verify::Source::Vlan::DhcpSnooping>();
        }
        return dhcp_snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Verify::Source::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dhcp_snooping != nullptr)
    {
        _children["dhcp-snooping"] = dhcp_snooping;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Verify::Source::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Verify::Source::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Verify::Source::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-snooping")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Verify::Source::Vlan::DhcpSnooping::DhcpSnooping()
    :
    port_security{YType::empty, "port-security"}
{

    yang_name = "dhcp-snooping"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Verify::Source::Vlan::DhcpSnooping::~DhcpSnooping()
{
}

bool Native::Interface::Tunnel::Ip::Verify::Source::Vlan::DhcpSnooping::has_data() const
{
    if (is_presence_container) return true;
    return port_security.is_set;
}

bool Native::Interface::Tunnel::Ip::Verify::Source::Vlan::DhcpSnooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_security.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Verify::Source::Vlan::DhcpSnooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Verify::Source::Vlan::DhcpSnooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_security.is_set || is_set(port_security.yfilter)) leaf_name_data.push_back(port_security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Verify::Source::Vlan::DhcpSnooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Verify::Source::Vlan::DhcpSnooping::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Verify::Source::Vlan::DhcpSnooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-security")
    {
        port_security = value;
        port_security.value_namespace = name_space;
        port_security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Verify::Source::Vlan::DhcpSnooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-security")
    {
        port_security.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Verify::Source::Vlan::DhcpSnooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-security")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Verify::Unicast::Unicast()
    :
    reverse_path(nullptr) // presence node
    , source(std::make_shared<Native::Interface::Tunnel::Ip::Verify::Unicast::Source>())
{
    source->parent = this;

    yang_name = "unicast"; yang_parent_name = "verify"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Verify::Unicast::~Unicast()
{
}

bool Native::Interface::Tunnel::Ip::Verify::Unicast::has_data() const
{
    if (is_presence_container) return true;
    return (reverse_path !=  nullptr && reverse_path->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Interface::Tunnel::Ip::Verify::Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (reverse_path !=  nullptr && reverse_path->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Verify::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Verify::Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Verify::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reverse-path")
    {
        if(reverse_path == nullptr)
        {
            reverse_path = std::make_shared<Native::Interface::Tunnel::Ip::Verify::Unicast::ReversePath>();
        }
        return reverse_path;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Interface::Tunnel::Ip::Verify::Unicast::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Verify::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reverse_path != nullptr)
    {
        _children["reverse-path"] = reverse_path;
    }

    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Verify::Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Verify::Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Verify::Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reverse-path" || name == "source")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Verify::Unicast::ReversePath::ReversePath()
{

    yang_name = "reverse-path"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Interface::Tunnel::Ip::Verify::Unicast::ReversePath::~ReversePath()
{
}

bool Native::Interface::Tunnel::Ip::Verify::Unicast::ReversePath::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Interface::Tunnel::Ip::Verify::Unicast::ReversePath::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Ip::Verify::Unicast::ReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Verify::Unicast::ReversePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Verify::Unicast::ReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Verify::Unicast::ReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Verify::Unicast::ReversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Verify::Unicast::ReversePath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Verify::Unicast::ReversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Tunnel::Ip::Verify::Unicast::Source::Source()
    :
    reachable_via{YType::enumeration, "reachable-via"},
    allow_self_ping{YType::empty, "allow-self-ping"},
    allow_default{YType::empty, "allow-default"}
{

    yang_name = "source"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Verify::Unicast::Source::~Source()
{
}

bool Native::Interface::Tunnel::Ip::Verify::Unicast::Source::has_data() const
{
    if (is_presence_container) return true;
    return reachable_via.is_set
	|| allow_self_ping.is_set
	|| allow_default.is_set;
}

bool Native::Interface::Tunnel::Ip::Verify::Unicast::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reachable_via.yfilter)
	|| ydk::is_set(allow_self_ping.yfilter)
	|| ydk::is_set(allow_default.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Verify::Unicast::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Verify::Unicast::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reachable_via.is_set || is_set(reachable_via.yfilter)) leaf_name_data.push_back(reachable_via.get_name_leafdata());
    if (allow_self_ping.is_set || is_set(allow_self_ping.yfilter)) leaf_name_data.push_back(allow_self_ping.get_name_leafdata());
    if (allow_default.is_set || is_set(allow_default.yfilter)) leaf_name_data.push_back(allow_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Verify::Unicast::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Verify::Unicast::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Verify::Unicast::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reachable-via")
    {
        reachable_via = value;
        reachable_via.value_namespace = name_space;
        reachable_via.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-self-ping")
    {
        allow_self_ping = value;
        allow_self_ping.value_namespace = name_space;
        allow_self_ping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-default")
    {
        allow_default = value;
        allow_default.value_namespace = name_space;
        allow_default.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Verify::Unicast::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reachable-via")
    {
        reachable_via.yfilter = yfilter;
    }
    if(value_path == "allow-self-ping")
    {
        allow_self_ping.yfilter = yfilter;
    }
    if(value_path == "allow-default")
    {
        allow_default.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Verify::Unicast::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reachable-via" || name == "allow-self-ping" || name == "allow-default")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Flow::Flow()
    :
    ingress{YType::empty, "ingress"},
    egress{YType::empty, "egress"}
        ,
    monitor(this, {"name"})
{

    yang_name = "flow"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Flow::~Flow()
{
}

bool Native::Interface::Tunnel::Ip::Flow::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<monitor.len(); index++)
    {
        if(monitor[index]->has_data())
            return true;
    }
    return ingress.is_set
	|| egress.is_set;
}

bool Native::Interface::Tunnel::Ip::Flow::has_operation() const
{
    for (std::size_t index=0; index<monitor.len(); index++)
    {
        if(monitor[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ingress.yfilter)
	|| ydk::is_set(egress.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow:flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ingress.is_set || is_set(ingress.yfilter)) leaf_name_data.push_back(ingress.get_name_leafdata());
    if (egress.is_set || is_set(egress.yfilter)) leaf_name_data.push_back(egress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Flow::Monitor>();
        ent_->parent = this;
        monitor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : monitor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ingress")
    {
        ingress = value;
        ingress.value_namespace = name_space;
        ingress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress")
    {
        egress = value;
        egress.value_namespace = name_space;
        egress.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ingress")
    {
        ingress.yfilter = yfilter;
    }
    if(value_path == "egress")
    {
        egress.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor" || name == "ingress" || name == "egress")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Flow::Monitor::Monitor()
    :
    name{YType::str, "name"},
    input{YType::empty, "input"},
    output{YType::empty, "output"},
    multicast{YType::empty, "multicast"},
    unicast{YType::empty, "unicast"}
        ,
    sampler(this, {"direction"})
{

    yang_name = "monitor"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Flow::Monitor::~Monitor()
{
}

bool Native::Interface::Tunnel::Ip::Flow::Monitor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sampler.len(); index++)
    {
        if(sampler[index]->has_data())
            return true;
    }
    return name.is_set
	|| input.is_set
	|| output.is_set
	|| multicast.is_set
	|| unicast.is_set;
}

bool Native::Interface::Tunnel::Ip::Flow::Monitor::has_operation() const
{
    for (std::size_t index=0; index<sampler.len(); index++)
    {
        if(sampler[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter)
	|| ydk::is_set(multicast.yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Flow::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Flow::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.yfilter)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Flow::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sampler")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler>();
        ent_->parent = this;
        sampler.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Flow::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sampler.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Flow::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast")
    {
        multicast = value;
        multicast.value_namespace = name_space;
        multicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Flow::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
    if(value_path == "multicast")
    {
        multicast.yfilter = yfilter;
    }
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Flow::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sampler" || name == "name" || name == "input" || name == "output" || name == "multicast" || name == "unicast")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler::Sampler()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{

    yang_name = "sampler"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler::~Sampler()
{
}

bool Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler::has_data() const
{
    if (is_presence_container) return true;
    return direction.is_set
	|| name.is_set;
}

bool Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sampler";
    ADD_KEY_TOKEN(direction, "direction");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "name")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Igmp::Igmp()
    :
    version{YType::uint8, "version"}
        ,
    static_group(std::make_shared<Native::Interface::Tunnel::Ip::Igmp::StaticGroup>())
    , join_group(this, {"ip_group_address"})
{
    static_group->parent = this;

    yang_name = "igmp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Igmp::~Igmp()
{
}

bool Native::Interface::Tunnel::Ip::Igmp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<join_group.len(); index++)
    {
        if(join_group[index]->has_data())
            return true;
    }
    return version.is_set
	|| (static_group !=  nullptr && static_group->has_data());
}

bool Native::Interface::Tunnel::Ip::Igmp::has_operation() const
{
    for (std::size_t index=0; index<join_group.len(); index++)
    {
        if(join_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| (static_group !=  nullptr && static_group->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-igmp:igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-group")
    {
        if(static_group == nullptr)
        {
            static_group = std::make_shared<Native::Interface::Tunnel::Ip::Igmp::StaticGroup>();
        }
        return static_group;
    }

    if(child_yang_name == "join-group")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Igmp::JoinGroup>();
        ent_->parent = this;
        join_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(static_group != nullptr)
    {
        _children["static-group"] = static_group;
    }

    count_ = 0;
    for (auto ent_ : join_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-group" || name == "join-group" || name == "version")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Igmp::StaticGroup::StaticGroup()
    :
    groups(this, {"name"})
    , class_map(this, {"id"})
{

    yang_name = "static-group"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Igmp::StaticGroup::~StaticGroup()
{
}

bool Native::Interface::Tunnel::Ip::Igmp::StaticGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<groups.len(); index++)
    {
        if(groups[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<class_map.len(); index++)
    {
        if(class_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Igmp::StaticGroup::has_operation() const
{
    for (std::size_t index=0; index<groups.len(); index++)
    {
        if(groups[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<class_map.len(); index++)
    {
        if(class_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Tunnel::Ip::Igmp::StaticGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Igmp::StaticGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Igmp::StaticGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "groups")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups>();
        ent_->parent = this;
        groups.append(ent_);
        return ent_;
    }

    if(child_yang_name == "class-map")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap>();
        ent_->parent = this;
        class_map.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Igmp::StaticGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : groups.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : class_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Igmp::StaticGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Tunnel::Ip::Igmp::StaticGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Tunnel::Ip::Igmp::StaticGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groups" || name == "class-map")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups::Groups()
    :
    name{YType::str, "name"},
    source{YType::str, "source"}
{

    yang_name = "groups"; yang_parent_name = "static-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups::~Groups()
{
}

bool Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : source.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set;
}

bool Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups::has_operation() const
{
    for (auto const & leaf : source.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    auto source_name_datas = source.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), source_name_datas.begin(), source_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source.append(value);
    }
}

void Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "source")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap::ClassMap()
    :
    id{YType::str, "id"}
{

    yang_name = "class-map"; yang_parent_name = "static-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap::~ClassMap()
{
}

bool Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set;
}

bool Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Igmp::JoinGroup::JoinGroup()
    :
    ip_group_address{YType::str, "ip-group-address"},
    source{YType::str, "source"}
{

    yang_name = "join-group"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Igmp::JoinGroup::~JoinGroup()
{
}

bool Native::Interface::Tunnel::Ip::Igmp::JoinGroup::has_data() const
{
    if (is_presence_container) return true;
    return ip_group_address.is_set
	|| source.is_set;
}

bool Native::Interface::Tunnel::Ip::Igmp::JoinGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_group_address.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Interface::Tunnel::Ip::Igmp::JoinGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-group";
    ADD_KEY_TOKEN(ip_group_address, "ip-group-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Igmp::JoinGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_group_address.is_set || is_set(ip_group_address.yfilter)) leaf_name_data.push_back(ip_group_address.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Igmp::JoinGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Igmp::JoinGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Interface::Tunnel::Ip::Igmp::JoinGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-group-address")
    {
        ip_group_address = value;
        ip_group_address.value_namespace = name_space;
        ip_group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Igmp::JoinGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-group-address")
    {
        ip_group_address.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Igmp::JoinGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-group-address" || name == "source")
        return true;
    return false;
}

Native::Interface::Tunnel::Ip::Ospf::Ospf()
    :
    network{YType::enumeration, "network"},
    cost{YType::uint16, "cost"},
    flood_reduction{YType::empty, "flood-reduction"},
    hello_interval{YType::uint32, "hello-interval"},
    mtu_ignore{YType::empty, "mtu-ignore"},
    priority{YType::uint8, "priority"},
    resync_timeout{YType::uint32, "resync-timeout"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    shutdown{YType::empty, "shutdown"},
    transmit_delay{YType::uint32, "transmit-delay"}
        ,
    process_id(this, {"id"})
    , authentication(nullptr) // presence node
    , authentication_key(std::make_shared<Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey>())
    , bfd(nullptr) // presence node
    , database_filter(std::make_shared<Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter>())
    , dead_interval(std::make_shared<Native::Interface::Tunnel::Ip::Ospf::DeadInterval>())
    , demand_circuit(nullptr) // presence node
    , fast_reroute(std::make_shared<Native::Interface::Tunnel::Ip::Ospf::FastReroute>())
    , lls(nullptr) // presence node
    , message_digest_key(this, {"id"})
    , multi_area(std::make_shared<Native::Interface::Tunnel::Ip::Ospf::MultiArea>())
    , prefix_suppression(nullptr) // presence node
    , ttl_security(nullptr) // presence node
{
    authentication_key->parent = this;
    database_filter->parent = this;
    dead_interval->parent = this;
    fast_reroute->parent = this;
    multi_area->parent = this;

    yang_name = "ospf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Interface::Tunnel::Ip::Ospf::~Ospf()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<process_id.len(); index++)
    {
        if(process_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<message_digest_key.len(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    return network.is_set
	|| cost.is_set
	|| flood_reduction.is_set
	|| hello_interval.is_set
	|| mtu_ignore.is_set
	|| priority.is_set
	|| resync_timeout.is_set
	|| retransmit_interval.is_set
	|| shutdown.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (authentication_key !=  nullptr && authentication_key->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (dead_interval !=  nullptr && dead_interval->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (lls !=  nullptr && lls->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data());
}

bool Native::Interface::Tunnel::Ip::Ospf::has_operation() const
{
    for (std::size_t index=0; index<process_id.len(); index++)
    {
        if(process_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<message_digest_key.len(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(flood_reduction.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(mtu_ignore.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(resync_timeout.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(transmit_delay.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (authentication_key !=  nullptr && authentication_key->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (dead_interval !=  nullptr && dead_interval->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (lls !=  nullptr && lls->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ospf:ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Tunnel::Ip::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.yfilter)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.yfilter)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (resync_timeout.is_set || is_set(resync_timeout.yfilter)) leaf_name_data.push_back(resync_timeout.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.yfilter)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Interface::Tunnel::Ip::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process-id")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::ProcessId>();
        ent_->parent = this;
        process_id.append(ent_);
        return ent_;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "dead-interval")
    {
        if(dead_interval == nullptr)
        {
            dead_interval = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::DeadInterval>();
        }
        return dead_interval;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "lls")
    {
        if(lls == nullptr)
        {
            lls = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::Lls>();
        }
        return lls;
    }

    if(child_yang_name == "message-digest-key")
    {
        auto ent_ = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey>();
        ent_->parent = this;
        message_digest_key.append(ent_);
        return ent_;
    }

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::MultiArea>();
        }
        return multi_area;
    }

    if(child_yang_name == "prefix-suppression")
    {
        if(prefix_suppression == nullptr)
        {
            prefix_suppression = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression>();
        }
        return prefix_suppression;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::TtlSecurity>();
        }
        return ttl_security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Interface::Tunnel::Ip::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : process_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(authentication_key != nullptr)
    {
        _children["authentication-key"] = authentication_key;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(database_filter != nullptr)
    {
        _children["database-filter"] = database_filter;
    }

    if(dead_interval != nullptr)
    {
        _children["dead-interval"] = dead_interval;
    }

    if(demand_circuit != nullptr)
    {
        _children["demand-circuit"] = demand_circuit;
    }

    if(fast_reroute != nullptr)
    {
        _children["fast-reroute"] = fast_reroute;
    }

    if(lls != nullptr)
    {
        _children["lls"] = lls;
    }

    count_ = 0;
    for (auto ent_ : message_digest_key.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(multi_area != nullptr)
    {
        _children["multi-area"] = multi_area;
    }

    if(prefix_suppression != nullptr)
    {
        _children["prefix-suppression"] = prefix_suppression;
    }

    if(ttl_security != nullptr)
    {
        _children["ttl-security"] = ttl_security;
    }

    return _children;
}

void Native::Interface::Tunnel::Ip::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
        flood_reduction.value_namespace = name_space;
        flood_reduction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
        mtu_ignore.value_namespace = name_space;
        mtu_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resync-timeout")
    {
        resync_timeout = value;
        resync_timeout.value_namespace = name_space;
        resync_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
        transmit_delay.value_namespace = name_space;
        transmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Tunnel::Ip::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "resync-timeout")
    {
        resync_timeout.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay.yfilter = yfilter;
    }
}

bool Native::Interface::Tunnel::Ip::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process-id" || name == "authentication" || name == "authentication-key" || name == "bfd" || name == "database-filter" || name == "dead-interval" || name == "demand-circuit" || name == "fast-reroute" || name == "lls" || name == "message-digest-key" || name == "multi-area" || name == "prefix-suppression" || name == "ttl-security" || name == "network" || name == "cost" || name == "flood-reduction" || name == "hello-interval" || name == "mtu-ignore" || name == "priority" || name == "resync-timeout" || name == "retransmit-interval" || name == "shutdown" || name == "transmit-delay")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::Tunnel::Flowcontrol::Receive::desired {0, "desired"};
const Enum::YLeaf Native::Interface::Tunnel::Flowcontrol::Receive::off {1, "off"};
const Enum::YLeaf Native::Interface::Tunnel::Flowcontrol::Receive::on {2, "on"};

const Enum::YLeaf Native::Interface::Tunnel::Flowcontrol::Send::desired {0, "desired"};
const Enum::YLeaf Native::Interface::Tunnel::Flowcontrol::Send::off {1, "off"};
const Enum::YLeaf Native::Interface::Tunnel::Flowcontrol::Send::on {2, "on"};

const Enum::YLeaf Native::Interface::Tunnel::Isis::MeshGroup::blocked {0, "blocked"};

const Enum::YLeaf Native::Interface::Tunnel::Isis::Network::point_to_point {0, "point-to-point"};

const Enum::YLeaf Native::Interface::Tunnel::Isis::Protocol::shutdown {0, "shutdown"};

const Enum::YLeaf Native::Interface::Tunnel::Isis::CircuitType::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Tunnel::Isis::CircuitType::Levels::level_1_2 {1, "level-1-2"};
const Enum::YLeaf Native::Interface::Tunnel::Isis::CircuitType::Levels::level_2_only {2, "level-2-only"};

const Enum::YLeaf Native::Interface::Tunnel::Isis::CsnpInterval::CsnpIntervalList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Tunnel::Isis::CsnpInterval::CsnpIntervalList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Tunnel::Isis::HelloInterval::Value_::minimal {0, "minimal"};

const Enum::YLeaf Native::Interface::Tunnel::Isis::HelloInterval::HelloIntervalList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Tunnel::Isis::HelloInterval::HelloIntervalList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Tunnel::Isis::HelloInterval::HelloIntervalList::Value_::minimal {0, "minimal"};

const Enum::YLeaf Native::Interface::Tunnel::Isis::HelloMultiplier::HelloMultiplierList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Tunnel::Isis::HelloMultiplier::HelloMultiplierList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Tunnel::Isis::Ipv6::Metric::Value_::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::Tunnel::Isis::Ipv6::Metric::MetricList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Tunnel::Isis::Ipv6::Metric::MetricList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Tunnel::Isis::Ipv6::Metric::MetricList::Value_::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::Tunnel::Isis::Metric::Value_::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::Tunnel::Isis::Metric::MetricList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Tunnel::Isis::Metric::MetricList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Tunnel::Isis::Metric::MetricList::Value_::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::Tunnel::Isis::Password::PasswordList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Tunnel::Isis::Password::PasswordList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Tunnel::Isis::Priority::PriorityList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Tunnel::Isis::Priority::PriorityList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Tunnel::Isis::ThreeWayHandshake::Implementor::cisco {0, "cisco"};
const Enum::YLeaf Native::Interface::Tunnel::Isis::ThreeWayHandshake::Implementor::ietf {1, "ietf"};

const Enum::YLeaf Native::Interface::Tunnel::HoldQueue::Direction::in {0, "in"};
const Enum::YLeaf Native::Interface::Tunnel::HoldQueue::Direction::out {1, "out"};

const Enum::YLeaf Native::Interface::Tunnel::Mpls::Label::Protocol::both {0, "both"};
const Enum::YLeaf Native::Interface::Tunnel::Mpls::Label::Protocol::ldp {1, "ldp"};
const Enum::YLeaf Native::Interface::Tunnel::Mpls::Label::Protocol::tdp {2, "tdp"};

const Enum::YLeaf Native::Interface::Tunnel::Ip::Pim::PimMode::passive {0, "passive"};
const Enum::YLeaf Native::Interface::Tunnel::Ip::Pim::PimMode::dense_mode {1, "dense-mode"};
const Enum::YLeaf Native::Interface::Tunnel::Ip::Pim::PimMode::sparse_mode {2, "sparse-mode"};
const Enum::YLeaf Native::Interface::Tunnel::Ip::Pim::PimMode::sparse_dense_mode {3, "sparse-dense-mode"};

const Enum::YLeaf Native::Interface::Tunnel::Ip::Pim::SptThreshold::infinity {0, "infinity"};

const Enum::YLeaf Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::PolicyAction::drop {0, "drop"};
const Enum::YLeaf Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::PolicyAction::encapsulate {1, "encapsulate"};
const Enum::YLeaf Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::PolicyAction::keep {2, "keep"};
const Enum::YLeaf Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::PolicyAction::replace {3, "replace"};

const Enum::YLeaf Native::Interface::Tunnel::Ip::Verify::Unicast::Source::ReachableVia::any {0, "any"};
const Enum::YLeaf Native::Interface::Tunnel::Ip::Verify::Unicast::Source::ReachableVia::rx {1, "rx"};

const Enum::YLeaf Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler::Direction::input {0, "input"};
const Enum::YLeaf Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler::Direction::output {1, "output"};

const Enum::YLeaf Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups::Name::Y__STAR__ {0, "*"};

const Enum::YLeaf Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups::Source::ssm_map {0, "ssm-map"};

const Enum::YLeaf Native::Interface::Tunnel::Ip::Ospf::Network::broadcast {0, "broadcast"};
const Enum::YLeaf Native::Interface::Tunnel::Ip::Ospf::Network::non_broadcast {1, "non-broadcast"};
const Enum::YLeaf Native::Interface::Tunnel::Ip::Ospf::Network::point_to_multipoint {2, "point-to-multipoint"};
const Enum::YLeaf Native::Interface::Tunnel::Ip::Ospf::Network::point_to_point {3, "point-to-point"};


}
}

