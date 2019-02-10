
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_11.hpp"
#include "Cisco_IOS_XE_native_12.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Ip::Nbar::Custom::Transport::Transport()
    :
    tcp(nullptr) // presence node
    , udp(nullptr) // presence node
    , udp_tcp(nullptr) // presence node
{

    yang_name = "transport"; yang_parent_name = "custom"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::~Transport()
{
}

bool Native::Ip::Nbar::Custom::Transport::has_data() const
{
    if (is_presence_container) return true;
    return (tcp !=  nullptr && tcp->has_data())
	|| (udp !=  nullptr && udp->has_data())
	|| (udp_tcp !=  nullptr && udp_tcp->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::has_operation() const
{
    return is_set(yfilter)
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (udp !=  nullptr && udp->has_operation())
	|| (udp_tcp !=  nullptr && udp_tcp->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "udp")
    {
        if(udp == nullptr)
        {
            udp = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp>();
        }
        return udp;
    }

    if(child_yang_name == "udp-tcp")
    {
        if(udp_tcp == nullptr)
        {
            udp_tcp = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp>();
        }
        return udp_tcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    if(udp != nullptr)
    {
        _children["udp"] = udp;
    }

    if(udp_tcp != nullptr)
    {
        _children["udp-tcp"] = udp_tcp;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcp" || name == "udp" || name == "udp-tcp")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Tcp()
    :
    id{YType::uint16, "id"}
        ,
    dscp(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Dscp>())
    , ip(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ip_>())
    , ipv6(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6>())
    , direction(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Direction>())
    , port(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Port>())
{
    dscp->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    direction->parent = this;
    port->parent = this;

    yang_name = "tcp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Ip::Nbar::Custom::Transport::Tcp::~Tcp()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (dscp !=  nullptr && dscp->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (direction !=  nullptr && direction->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (direction !=  nullptr && direction->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ip_>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "direction")
    {
        if(direction == nullptr)
        {
            direction = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Direction>();
        }
        return direction;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dscp != nullptr)
    {
        _children["dscp"] = dscp;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(direction != nullptr)
    {
        _children["direction"] = direction;
    }

    if(port != nullptr)
    {
        _children["port"] = port;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "ip" || name == "ipv6" || name == "direction" || name == "port" || name == "id")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::Dscp()
    :
    range{YType::uint8, "range"},
    af11{YType::empty, "af11"},
    af12{YType::empty, "af12"},
    af13{YType::empty, "af13"},
    af21{YType::empty, "af21"},
    af22{YType::empty, "af22"},
    af23{YType::empty, "af23"},
    af31{YType::empty, "af31"},
    af32{YType::empty, "af32"},
    af33{YType::empty, "af33"},
    af41{YType::empty, "af41"},
    af42{YType::empty, "af42"},
    af43{YType::empty, "af43"},
    cs1{YType::empty, "cs1"},
    cs2{YType::empty, "cs2"},
    cs3{YType::empty, "cs3"},
    cs4{YType::empty, "cs4"},
    cs5{YType::empty, "cs5"},
    cs6{YType::empty, "cs6"},
    cs7{YType::empty, "cs7"},
    default_{YType::empty, "default"},
    ef{YType::empty, "ef"}
{

    yang_name = "dscp"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::~Dscp()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| af11.is_set
	|| af12.is_set
	|| af13.is_set
	|| af21.is_set
	|| af22.is_set
	|| af23.is_set
	|| af31.is_set
	|| af32.is_set
	|| af33.is_set
	|| af41.is_set
	|| af42.is_set
	|| af43.is_set
	|| cs1.is_set
	|| cs2.is_set
	|| cs3.is_set
	|| cs4.is_set
	|| cs5.is_set
	|| cs6.is_set
	|| cs7.is_set
	|| default_.is_set
	|| ef.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(af11.yfilter)
	|| ydk::is_set(af12.yfilter)
	|| ydk::is_set(af13.yfilter)
	|| ydk::is_set(af21.yfilter)
	|| ydk::is_set(af22.yfilter)
	|| ydk::is_set(af23.yfilter)
	|| ydk::is_set(af31.yfilter)
	|| ydk::is_set(af32.yfilter)
	|| ydk::is_set(af33.yfilter)
	|| ydk::is_set(af41.yfilter)
	|| ydk::is_set(af42.yfilter)
	|| ydk::is_set(af43.yfilter)
	|| ydk::is_set(cs1.yfilter)
	|| ydk::is_set(cs2.yfilter)
	|| ydk::is_set(cs3.yfilter)
	|| ydk::is_set(cs4.yfilter)
	|| ydk::is_set(cs5.yfilter)
	|| ydk::is_set(cs6.yfilter)
	|| ydk::is_set(cs7.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(ef.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (af11.is_set || is_set(af11.yfilter)) leaf_name_data.push_back(af11.get_name_leafdata());
    if (af12.is_set || is_set(af12.yfilter)) leaf_name_data.push_back(af12.get_name_leafdata());
    if (af13.is_set || is_set(af13.yfilter)) leaf_name_data.push_back(af13.get_name_leafdata());
    if (af21.is_set || is_set(af21.yfilter)) leaf_name_data.push_back(af21.get_name_leafdata());
    if (af22.is_set || is_set(af22.yfilter)) leaf_name_data.push_back(af22.get_name_leafdata());
    if (af23.is_set || is_set(af23.yfilter)) leaf_name_data.push_back(af23.get_name_leafdata());
    if (af31.is_set || is_set(af31.yfilter)) leaf_name_data.push_back(af31.get_name_leafdata());
    if (af32.is_set || is_set(af32.yfilter)) leaf_name_data.push_back(af32.get_name_leafdata());
    if (af33.is_set || is_set(af33.yfilter)) leaf_name_data.push_back(af33.get_name_leafdata());
    if (af41.is_set || is_set(af41.yfilter)) leaf_name_data.push_back(af41.get_name_leafdata());
    if (af42.is_set || is_set(af42.yfilter)) leaf_name_data.push_back(af42.get_name_leafdata());
    if (af43.is_set || is_set(af43.yfilter)) leaf_name_data.push_back(af43.get_name_leafdata());
    if (cs1.is_set || is_set(cs1.yfilter)) leaf_name_data.push_back(cs1.get_name_leafdata());
    if (cs2.is_set || is_set(cs2.yfilter)) leaf_name_data.push_back(cs2.get_name_leafdata());
    if (cs3.is_set || is_set(cs3.yfilter)) leaf_name_data.push_back(cs3.get_name_leafdata());
    if (cs4.is_set || is_set(cs4.yfilter)) leaf_name_data.push_back(cs4.get_name_leafdata());
    if (cs5.is_set || is_set(cs5.yfilter)) leaf_name_data.push_back(cs5.get_name_leafdata());
    if (cs6.is_set || is_set(cs6.yfilter)) leaf_name_data.push_back(cs6.get_name_leafdata());
    if (cs7.is_set || is_set(cs7.yfilter)) leaf_name_data.push_back(cs7.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (ef.is_set || is_set(ef.yfilter)) leaf_name_data.push_back(ef.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af11")
    {
        af11 = value;
        af11.value_namespace = name_space;
        af11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af12")
    {
        af12 = value;
        af12.value_namespace = name_space;
        af12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af13")
    {
        af13 = value;
        af13.value_namespace = name_space;
        af13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af21")
    {
        af21 = value;
        af21.value_namespace = name_space;
        af21.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af22")
    {
        af22 = value;
        af22.value_namespace = name_space;
        af22.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af23")
    {
        af23 = value;
        af23.value_namespace = name_space;
        af23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af31")
    {
        af31 = value;
        af31.value_namespace = name_space;
        af31.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af32")
    {
        af32 = value;
        af32.value_namespace = name_space;
        af32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af33")
    {
        af33 = value;
        af33.value_namespace = name_space;
        af33.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af41")
    {
        af41 = value;
        af41.value_namespace = name_space;
        af41.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af42")
    {
        af42 = value;
        af42.value_namespace = name_space;
        af42.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af43")
    {
        af43 = value;
        af43.value_namespace = name_space;
        af43.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs1")
    {
        cs1 = value;
        cs1.value_namespace = name_space;
        cs1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs2")
    {
        cs2 = value;
        cs2.value_namespace = name_space;
        cs2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs3")
    {
        cs3 = value;
        cs3.value_namespace = name_space;
        cs3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs4")
    {
        cs4 = value;
        cs4.value_namespace = name_space;
        cs4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs5")
    {
        cs5 = value;
        cs5.value_namespace = name_space;
        cs5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs6")
    {
        cs6 = value;
        cs6.value_namespace = name_space;
        cs6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs7")
    {
        cs7 = value;
        cs7.value_namespace = name_space;
        cs7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ef")
    {
        ef = value;
        ef.value_namespace = name_space;
        ef.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "af11")
    {
        af11.yfilter = yfilter;
    }
    if(value_path == "af12")
    {
        af12.yfilter = yfilter;
    }
    if(value_path == "af13")
    {
        af13.yfilter = yfilter;
    }
    if(value_path == "af21")
    {
        af21.yfilter = yfilter;
    }
    if(value_path == "af22")
    {
        af22.yfilter = yfilter;
    }
    if(value_path == "af23")
    {
        af23.yfilter = yfilter;
    }
    if(value_path == "af31")
    {
        af31.yfilter = yfilter;
    }
    if(value_path == "af32")
    {
        af32.yfilter = yfilter;
    }
    if(value_path == "af33")
    {
        af33.yfilter = yfilter;
    }
    if(value_path == "af41")
    {
        af41.yfilter = yfilter;
    }
    if(value_path == "af42")
    {
        af42.yfilter = yfilter;
    }
    if(value_path == "af43")
    {
        af43.yfilter = yfilter;
    }
    if(value_path == "cs1")
    {
        cs1.yfilter = yfilter;
    }
    if(value_path == "cs2")
    {
        cs2.yfilter = yfilter;
    }
    if(value_path == "cs3")
    {
        cs3.yfilter = yfilter;
    }
    if(value_path == "cs4")
    {
        cs4.yfilter = yfilter;
    }
    if(value_path == "cs5")
    {
        cs5.yfilter = yfilter;
    }
    if(value_path == "cs6")
    {
        cs6.yfilter = yfilter;
    }
    if(value_path == "cs7")
    {
        cs7.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "ef")
    {
        ef.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "af11" || name == "af12" || name == "af13" || name == "af21" || name == "af22" || name == "af23" || name == "af31" || name == "af32" || name == "af33" || name == "af41" || name == "af42" || name == "af43" || name == "cs1" || name == "cs2" || name == "cs3" || name == "cs4" || name == "cs5" || name == "cs6" || name == "cs7" || name == "default" || name == "ef")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Ip_()
    :
    address(this, {"address0"})
    , subnet(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet>())
{
    subnet->parent = this;

    yang_name = "ip"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::~Ip_()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(subnet != nullptr)
    {
        _children["subnet"] = subnet;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::has_data() const
{
    if (is_presence_container) return true;
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    ADD_KEY_TOKEN(address0, "address0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::has_data() const
{
    if (is_presence_container) return true;
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ip_::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Ipv6()
    :
    address(this, {"address0"})
    , subnet(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet>())
{
    subnet->parent = this;

    yang_name = "ipv6"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::~Ipv6()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(subnet != nullptr)
    {
        _children["subnet"] = subnet;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::has_data() const
{
    if (is_presence_container) return true;
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    ADD_KEY_TOKEN(address0, "address0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::has_data() const
{
    if (is_presence_container) return true;
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Ipv6::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Direction::Direction()
    :
    any{YType::empty, "any"},
    destination{YType::empty, "destination"},
    source{YType::empty, "source"}
{

    yang_name = "direction"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Tcp::Direction::~Direction()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Direction::has_data() const
{
    if (is_presence_container) return true;
    return any.is_set
	|| destination.is_set
	|| source.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Direction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Direction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Direction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Direction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Direction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Direction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Direction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Direction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "destination" || name == "source")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Port::Port()
    :
    port_numbers(this, {"port_number0"})
    , range(std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range>())
{
    range->parent = this;

    yang_name = "port"; yang_parent_name = "tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Tcp::Port::~Port()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_numbers.len(); index++)
    {
        if(port_numbers[index]->has_data())
            return true;
    }
    return (range !=  nullptr && range->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::has_operation() const
{
    for (std::size_t index=0; index<port_numbers.len(); index++)
    {
        if(port_numbers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-numbers")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers>();
        ent_->parent = this;
        port_numbers.append(ent_);
        return ent_;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : port_numbers.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-numbers" || name == "range")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::PortNumbers()
    :
    port_number0{YType::uint16, "port-number0"},
    port_number1{YType::uint16, "port-number1"},
    port_number2{YType::uint16, "port-number2"},
    port_number3{YType::uint16, "port-number3"},
    port_number4{YType::uint16, "port-number4"},
    port_number5{YType::uint16, "port-number5"},
    port_number6{YType::uint16, "port-number6"},
    port_number7{YType::uint16, "port-number7"}
{

    yang_name = "port-numbers"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::~PortNumbers()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::has_data() const
{
    if (is_presence_container) return true;
    return port_number0.is_set
	|| port_number1.is_set
	|| port_number2.is_set
	|| port_number3.is_set
	|| port_number4.is_set
	|| port_number5.is_set
	|| port_number6.is_set
	|| port_number7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_number0.yfilter)
	|| ydk::is_set(port_number1.yfilter)
	|| ydk::is_set(port_number2.yfilter)
	|| ydk::is_set(port_number3.yfilter)
	|| ydk::is_set(port_number4.yfilter)
	|| ydk::is_set(port_number5.yfilter)
	|| ydk::is_set(port_number6.yfilter)
	|| ydk::is_set(port_number7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-numbers";
    ADD_KEY_TOKEN(port_number0, "port-number0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_number0.is_set || is_set(port_number0.yfilter)) leaf_name_data.push_back(port_number0.get_name_leafdata());
    if (port_number1.is_set || is_set(port_number1.yfilter)) leaf_name_data.push_back(port_number1.get_name_leafdata());
    if (port_number2.is_set || is_set(port_number2.yfilter)) leaf_name_data.push_back(port_number2.get_name_leafdata());
    if (port_number3.is_set || is_set(port_number3.yfilter)) leaf_name_data.push_back(port_number3.get_name_leafdata());
    if (port_number4.is_set || is_set(port_number4.yfilter)) leaf_name_data.push_back(port_number4.get_name_leafdata());
    if (port_number5.is_set || is_set(port_number5.yfilter)) leaf_name_data.push_back(port_number5.get_name_leafdata());
    if (port_number6.is_set || is_set(port_number6.yfilter)) leaf_name_data.push_back(port_number6.get_name_leafdata());
    if (port_number7.is_set || is_set(port_number7.yfilter)) leaf_name_data.push_back(port_number7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-number0")
    {
        port_number0 = value;
        port_number0.value_namespace = name_space;
        port_number0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number1")
    {
        port_number1 = value;
        port_number1.value_namespace = name_space;
        port_number1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number2")
    {
        port_number2 = value;
        port_number2.value_namespace = name_space;
        port_number2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number3")
    {
        port_number3 = value;
        port_number3.value_namespace = name_space;
        port_number3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number4")
    {
        port_number4 = value;
        port_number4.value_namespace = name_space;
        port_number4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number5")
    {
        port_number5 = value;
        port_number5.value_namespace = name_space;
        port_number5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number6")
    {
        port_number6 = value;
        port_number6.value_namespace = name_space;
        port_number6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number7")
    {
        port_number7 = value;
        port_number7.value_namespace = name_space;
        port_number7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-number0")
    {
        port_number0.yfilter = yfilter;
    }
    if(value_path == "port-number1")
    {
        port_number1.yfilter = yfilter;
    }
    if(value_path == "port-number2")
    {
        port_number2.yfilter = yfilter;
    }
    if(value_path == "port-number3")
    {
        port_number3.yfilter = yfilter;
    }
    if(value_path == "port-number4")
    {
        port_number4.yfilter = yfilter;
    }
    if(value_path == "port-number5")
    {
        port_number5.yfilter = yfilter;
    }
    if(value_path == "port-number6")
    {
        port_number6.yfilter = yfilter;
    }
    if(value_path == "port-number7")
    {
        port_number7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::PortNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-number0" || name == "port-number1" || name == "port-number2" || name == "port-number3" || name == "port-number4" || name == "port-number5" || name == "port-number6" || name == "port-number7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::Range()
    :
    start_range{YType::uint16, "start-range"},
    end_range{YType::uint16, "end-range"}
{

    yang_name = "range"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::~Range()
{
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::has_data() const
{
    if (is_presence_container) return true;
    return start_range.is_set
	|| end_range.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_range.yfilter)
	|| ydk::is_set(end_range.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_range.is_set || is_set(start_range.yfilter)) leaf_name_data.push_back(start_range.get_name_leafdata());
    if (end_range.is_set || is_set(end_range.yfilter)) leaf_name_data.push_back(end_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-range")
    {
        start_range = value;
        start_range.value_namespace = name_space;
        start_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range")
    {
        end_range = value;
        end_range.value_namespace = name_space;
        end_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-range")
    {
        start_range.yfilter = yfilter;
    }
    if(value_path == "end-range")
    {
        end_range.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Tcp::Port::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-range" || name == "end-range")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Udp()
    :
    id{YType::uint16, "id"}
        ,
    dscp(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Dscp>())
    , ip(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ip_>())
    , ipv6(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ipv6>())
    , direction(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Direction>())
    , port(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Port>())
{
    dscp->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    direction->parent = this;
    port->parent = this;

    yang_name = "udp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Ip::Nbar::Custom::Transport::Udp::~Udp()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (dscp !=  nullptr && dscp->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (direction !=  nullptr && direction->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Udp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (direction !=  nullptr && direction->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ip_>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "direction")
    {
        if(direction == nullptr)
        {
            direction = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Direction>();
        }
        return direction;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Udp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dscp != nullptr)
    {
        _children["dscp"] = dscp;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(direction != nullptr)
    {
        _children["direction"] = direction;
    }

    if(port != nullptr)
    {
        _children["port"] = port;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "ip" || name == "ipv6" || name == "direction" || name == "port" || name == "id")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Dscp::Dscp()
    :
    range{YType::uint8, "range"},
    af11{YType::empty, "af11"},
    af12{YType::empty, "af12"},
    af13{YType::empty, "af13"},
    af21{YType::empty, "af21"},
    af22{YType::empty, "af22"},
    af23{YType::empty, "af23"},
    af31{YType::empty, "af31"},
    af32{YType::empty, "af32"},
    af33{YType::empty, "af33"},
    af41{YType::empty, "af41"},
    af42{YType::empty, "af42"},
    af43{YType::empty, "af43"},
    cs1{YType::empty, "cs1"},
    cs2{YType::empty, "cs2"},
    cs3{YType::empty, "cs3"},
    cs4{YType::empty, "cs4"},
    cs5{YType::empty, "cs5"},
    cs6{YType::empty, "cs6"},
    cs7{YType::empty, "cs7"},
    default_{YType::empty, "default"},
    ef{YType::empty, "ef"}
{

    yang_name = "dscp"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Udp::Dscp::~Dscp()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Dscp::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| af11.is_set
	|| af12.is_set
	|| af13.is_set
	|| af21.is_set
	|| af22.is_set
	|| af23.is_set
	|| af31.is_set
	|| af32.is_set
	|| af33.is_set
	|| af41.is_set
	|| af42.is_set
	|| af43.is_set
	|| cs1.is_set
	|| cs2.is_set
	|| cs3.is_set
	|| cs4.is_set
	|| cs5.is_set
	|| cs6.is_set
	|| cs7.is_set
	|| default_.is_set
	|| ef.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(af11.yfilter)
	|| ydk::is_set(af12.yfilter)
	|| ydk::is_set(af13.yfilter)
	|| ydk::is_set(af21.yfilter)
	|| ydk::is_set(af22.yfilter)
	|| ydk::is_set(af23.yfilter)
	|| ydk::is_set(af31.yfilter)
	|| ydk::is_set(af32.yfilter)
	|| ydk::is_set(af33.yfilter)
	|| ydk::is_set(af41.yfilter)
	|| ydk::is_set(af42.yfilter)
	|| ydk::is_set(af43.yfilter)
	|| ydk::is_set(cs1.yfilter)
	|| ydk::is_set(cs2.yfilter)
	|| ydk::is_set(cs3.yfilter)
	|| ydk::is_set(cs4.yfilter)
	|| ydk::is_set(cs5.yfilter)
	|| ydk::is_set(cs6.yfilter)
	|| ydk::is_set(cs7.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(ef.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (af11.is_set || is_set(af11.yfilter)) leaf_name_data.push_back(af11.get_name_leafdata());
    if (af12.is_set || is_set(af12.yfilter)) leaf_name_data.push_back(af12.get_name_leafdata());
    if (af13.is_set || is_set(af13.yfilter)) leaf_name_data.push_back(af13.get_name_leafdata());
    if (af21.is_set || is_set(af21.yfilter)) leaf_name_data.push_back(af21.get_name_leafdata());
    if (af22.is_set || is_set(af22.yfilter)) leaf_name_data.push_back(af22.get_name_leafdata());
    if (af23.is_set || is_set(af23.yfilter)) leaf_name_data.push_back(af23.get_name_leafdata());
    if (af31.is_set || is_set(af31.yfilter)) leaf_name_data.push_back(af31.get_name_leafdata());
    if (af32.is_set || is_set(af32.yfilter)) leaf_name_data.push_back(af32.get_name_leafdata());
    if (af33.is_set || is_set(af33.yfilter)) leaf_name_data.push_back(af33.get_name_leafdata());
    if (af41.is_set || is_set(af41.yfilter)) leaf_name_data.push_back(af41.get_name_leafdata());
    if (af42.is_set || is_set(af42.yfilter)) leaf_name_data.push_back(af42.get_name_leafdata());
    if (af43.is_set || is_set(af43.yfilter)) leaf_name_data.push_back(af43.get_name_leafdata());
    if (cs1.is_set || is_set(cs1.yfilter)) leaf_name_data.push_back(cs1.get_name_leafdata());
    if (cs2.is_set || is_set(cs2.yfilter)) leaf_name_data.push_back(cs2.get_name_leafdata());
    if (cs3.is_set || is_set(cs3.yfilter)) leaf_name_data.push_back(cs3.get_name_leafdata());
    if (cs4.is_set || is_set(cs4.yfilter)) leaf_name_data.push_back(cs4.get_name_leafdata());
    if (cs5.is_set || is_set(cs5.yfilter)) leaf_name_data.push_back(cs5.get_name_leafdata());
    if (cs6.is_set || is_set(cs6.yfilter)) leaf_name_data.push_back(cs6.get_name_leafdata());
    if (cs7.is_set || is_set(cs7.yfilter)) leaf_name_data.push_back(cs7.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (ef.is_set || is_set(ef.yfilter)) leaf_name_data.push_back(ef.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Udp::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af11")
    {
        af11 = value;
        af11.value_namespace = name_space;
        af11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af12")
    {
        af12 = value;
        af12.value_namespace = name_space;
        af12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af13")
    {
        af13 = value;
        af13.value_namespace = name_space;
        af13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af21")
    {
        af21 = value;
        af21.value_namespace = name_space;
        af21.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af22")
    {
        af22 = value;
        af22.value_namespace = name_space;
        af22.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af23")
    {
        af23 = value;
        af23.value_namespace = name_space;
        af23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af31")
    {
        af31 = value;
        af31.value_namespace = name_space;
        af31.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af32")
    {
        af32 = value;
        af32.value_namespace = name_space;
        af32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af33")
    {
        af33 = value;
        af33.value_namespace = name_space;
        af33.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af41")
    {
        af41 = value;
        af41.value_namespace = name_space;
        af41.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af42")
    {
        af42 = value;
        af42.value_namespace = name_space;
        af42.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af43")
    {
        af43 = value;
        af43.value_namespace = name_space;
        af43.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs1")
    {
        cs1 = value;
        cs1.value_namespace = name_space;
        cs1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs2")
    {
        cs2 = value;
        cs2.value_namespace = name_space;
        cs2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs3")
    {
        cs3 = value;
        cs3.value_namespace = name_space;
        cs3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs4")
    {
        cs4 = value;
        cs4.value_namespace = name_space;
        cs4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs5")
    {
        cs5 = value;
        cs5.value_namespace = name_space;
        cs5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs6")
    {
        cs6 = value;
        cs6.value_namespace = name_space;
        cs6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs7")
    {
        cs7 = value;
        cs7.value_namespace = name_space;
        cs7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ef")
    {
        ef = value;
        ef.value_namespace = name_space;
        ef.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "af11")
    {
        af11.yfilter = yfilter;
    }
    if(value_path == "af12")
    {
        af12.yfilter = yfilter;
    }
    if(value_path == "af13")
    {
        af13.yfilter = yfilter;
    }
    if(value_path == "af21")
    {
        af21.yfilter = yfilter;
    }
    if(value_path == "af22")
    {
        af22.yfilter = yfilter;
    }
    if(value_path == "af23")
    {
        af23.yfilter = yfilter;
    }
    if(value_path == "af31")
    {
        af31.yfilter = yfilter;
    }
    if(value_path == "af32")
    {
        af32.yfilter = yfilter;
    }
    if(value_path == "af33")
    {
        af33.yfilter = yfilter;
    }
    if(value_path == "af41")
    {
        af41.yfilter = yfilter;
    }
    if(value_path == "af42")
    {
        af42.yfilter = yfilter;
    }
    if(value_path == "af43")
    {
        af43.yfilter = yfilter;
    }
    if(value_path == "cs1")
    {
        cs1.yfilter = yfilter;
    }
    if(value_path == "cs2")
    {
        cs2.yfilter = yfilter;
    }
    if(value_path == "cs3")
    {
        cs3.yfilter = yfilter;
    }
    if(value_path == "cs4")
    {
        cs4.yfilter = yfilter;
    }
    if(value_path == "cs5")
    {
        cs5.yfilter = yfilter;
    }
    if(value_path == "cs6")
    {
        cs6.yfilter = yfilter;
    }
    if(value_path == "cs7")
    {
        cs7.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "ef")
    {
        ef.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "af11" || name == "af12" || name == "af13" || name == "af21" || name == "af22" || name == "af23" || name == "af31" || name == "af32" || name == "af33" || name == "af41" || name == "af42" || name == "af43" || name == "cs1" || name == "cs2" || name == "cs3" || name == "cs4" || name == "cs5" || name == "cs6" || name == "cs7" || name == "default" || name == "ef")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Ip_()
    :
    address(this, {"address0"})
    , subnet(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet>())
{
    subnet->parent = this;

    yang_name = "ip"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Udp::Ip_::~Ip_()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Ip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Ip_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Udp::Ip_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Ip_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(subnet != nullptr)
    {
        _children["subnet"] = subnet;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ip_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ip_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::has_data() const
{
    if (is_presence_container) return true;
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    ADD_KEY_TOKEN(address0, "address0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::has_data() const
{
    if (is_presence_container) return true;
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ip_::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Ipv6()
    :
    address(this, {"address0"})
    , subnet(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet>())
{
    subnet->parent = this;

    yang_name = "ipv6"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::~Ipv6()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(subnet != nullptr)
    {
        _children["subnet"] = subnet;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::has_data() const
{
    if (is_presence_container) return true;
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    ADD_KEY_TOKEN(address0, "address0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::has_data() const
{
    if (is_presence_container) return true;
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Ipv6::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Direction::Direction()
    :
    any{YType::empty, "any"},
    destination{YType::empty, "destination"},
    source{YType::empty, "source"}
{

    yang_name = "direction"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Udp::Direction::~Direction()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Direction::has_data() const
{
    if (is_presence_container) return true;
    return any.is_set
	|| destination.is_set
	|| source.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Direction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Direction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Direction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Udp::Direction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Direction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Direction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Direction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Direction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "destination" || name == "source")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Port::Port()
    :
    port_numbers(this, {"port_number0"})
    , range(std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Port::Range>())
{
    range->parent = this;

    yang_name = "port"; yang_parent_name = "udp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Udp::Port::~Port()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_numbers.len(); index++)
    {
        if(port_numbers[index]->has_data())
            return true;
    }
    return (range !=  nullptr && range->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::has_operation() const
{
    for (std::size_t index=0; index<port_numbers.len(); index++)
    {
        if(port_numbers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Udp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-numbers")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers>();
        ent_->parent = this;
        port_numbers.append(ent_);
        return ent_;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::Nbar::Custom::Transport::Udp::Port::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : port_numbers.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::Udp::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-numbers" || name == "range")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::PortNumbers()
    :
    port_number0{YType::uint16, "port-number0"},
    port_number1{YType::uint16, "port-number1"},
    port_number2{YType::uint16, "port-number2"},
    port_number3{YType::uint16, "port-number3"},
    port_number4{YType::uint16, "port-number4"},
    port_number5{YType::uint16, "port-number5"},
    port_number6{YType::uint16, "port-number6"},
    port_number7{YType::uint16, "port-number7"}
{

    yang_name = "port-numbers"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::~PortNumbers()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::has_data() const
{
    if (is_presence_container) return true;
    return port_number0.is_set
	|| port_number1.is_set
	|| port_number2.is_set
	|| port_number3.is_set
	|| port_number4.is_set
	|| port_number5.is_set
	|| port_number6.is_set
	|| port_number7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_number0.yfilter)
	|| ydk::is_set(port_number1.yfilter)
	|| ydk::is_set(port_number2.yfilter)
	|| ydk::is_set(port_number3.yfilter)
	|| ydk::is_set(port_number4.yfilter)
	|| ydk::is_set(port_number5.yfilter)
	|| ydk::is_set(port_number6.yfilter)
	|| ydk::is_set(port_number7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-numbers";
    ADD_KEY_TOKEN(port_number0, "port-number0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_number0.is_set || is_set(port_number0.yfilter)) leaf_name_data.push_back(port_number0.get_name_leafdata());
    if (port_number1.is_set || is_set(port_number1.yfilter)) leaf_name_data.push_back(port_number1.get_name_leafdata());
    if (port_number2.is_set || is_set(port_number2.yfilter)) leaf_name_data.push_back(port_number2.get_name_leafdata());
    if (port_number3.is_set || is_set(port_number3.yfilter)) leaf_name_data.push_back(port_number3.get_name_leafdata());
    if (port_number4.is_set || is_set(port_number4.yfilter)) leaf_name_data.push_back(port_number4.get_name_leafdata());
    if (port_number5.is_set || is_set(port_number5.yfilter)) leaf_name_data.push_back(port_number5.get_name_leafdata());
    if (port_number6.is_set || is_set(port_number6.yfilter)) leaf_name_data.push_back(port_number6.get_name_leafdata());
    if (port_number7.is_set || is_set(port_number7.yfilter)) leaf_name_data.push_back(port_number7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-number0")
    {
        port_number0 = value;
        port_number0.value_namespace = name_space;
        port_number0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number1")
    {
        port_number1 = value;
        port_number1.value_namespace = name_space;
        port_number1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number2")
    {
        port_number2 = value;
        port_number2.value_namespace = name_space;
        port_number2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number3")
    {
        port_number3 = value;
        port_number3.value_namespace = name_space;
        port_number3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number4")
    {
        port_number4 = value;
        port_number4.value_namespace = name_space;
        port_number4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number5")
    {
        port_number5 = value;
        port_number5.value_namespace = name_space;
        port_number5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number6")
    {
        port_number6 = value;
        port_number6.value_namespace = name_space;
        port_number6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number7")
    {
        port_number7 = value;
        port_number7.value_namespace = name_space;
        port_number7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-number0")
    {
        port_number0.yfilter = yfilter;
    }
    if(value_path == "port-number1")
    {
        port_number1.yfilter = yfilter;
    }
    if(value_path == "port-number2")
    {
        port_number2.yfilter = yfilter;
    }
    if(value_path == "port-number3")
    {
        port_number3.yfilter = yfilter;
    }
    if(value_path == "port-number4")
    {
        port_number4.yfilter = yfilter;
    }
    if(value_path == "port-number5")
    {
        port_number5.yfilter = yfilter;
    }
    if(value_path == "port-number6")
    {
        port_number6.yfilter = yfilter;
    }
    if(value_path == "port-number7")
    {
        port_number7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::PortNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-number0" || name == "port-number1" || name == "port-number2" || name == "port-number3" || name == "port-number4" || name == "port-number5" || name == "port-number6" || name == "port-number7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::Range()
    :
    start_range{YType::uint16, "start-range"},
    end_range{YType::uint16, "end-range"}
{

    yang_name = "range"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::~Range()
{
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::has_data() const
{
    if (is_presence_container) return true;
    return start_range.is_set
	|| end_range.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_range.yfilter)
	|| ydk::is_set(end_range.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_range.is_set || is_set(start_range.yfilter)) leaf_name_data.push_back(start_range.get_name_leafdata());
    if (end_range.is_set || is_set(end_range.yfilter)) leaf_name_data.push_back(end_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-range")
    {
        start_range = value;
        start_range.value_namespace = name_space;
        start_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range")
    {
        end_range = value;
        end_range.value_namespace = name_space;
        end_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-range")
    {
        start_range.yfilter = yfilter;
    }
    if(value_path == "end-range")
    {
        end_range.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::Udp::Port::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-range" || name == "end-range")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::UdpTcp()
    :
    id{YType::uint16, "id"}
        ,
    dscp(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp>())
    , ip(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_>())
    , ipv6(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6>())
    , direction(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction>())
    , port(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Port>())
{
    dscp->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    direction->parent = this;
    port->parent = this;

    yang_name = "udp-tcp"; yang_parent_name = "transport"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::~UdpTcp()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (dscp !=  nullptr && dscp->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (direction !=  nullptr && direction->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (direction !=  nullptr && direction->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "direction")
    {
        if(direction == nullptr)
        {
            direction = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction>();
        }
        return direction;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dscp != nullptr)
    {
        _children["dscp"] = dscp;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(direction != nullptr)
    {
        _children["direction"] = direction;
    }

    if(port != nullptr)
    {
        _children["port"] = port;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "ip" || name == "ipv6" || name == "direction" || name == "port" || name == "id")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::Dscp()
    :
    range{YType::uint8, "range"},
    af11{YType::empty, "af11"},
    af12{YType::empty, "af12"},
    af13{YType::empty, "af13"},
    af21{YType::empty, "af21"},
    af22{YType::empty, "af22"},
    af23{YType::empty, "af23"},
    af31{YType::empty, "af31"},
    af32{YType::empty, "af32"},
    af33{YType::empty, "af33"},
    af41{YType::empty, "af41"},
    af42{YType::empty, "af42"},
    af43{YType::empty, "af43"},
    cs1{YType::empty, "cs1"},
    cs2{YType::empty, "cs2"},
    cs3{YType::empty, "cs3"},
    cs4{YType::empty, "cs4"},
    cs5{YType::empty, "cs5"},
    cs6{YType::empty, "cs6"},
    cs7{YType::empty, "cs7"},
    default_{YType::empty, "default"},
    ef{YType::empty, "ef"}
{

    yang_name = "dscp"; yang_parent_name = "udp-tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::~Dscp()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| af11.is_set
	|| af12.is_set
	|| af13.is_set
	|| af21.is_set
	|| af22.is_set
	|| af23.is_set
	|| af31.is_set
	|| af32.is_set
	|| af33.is_set
	|| af41.is_set
	|| af42.is_set
	|| af43.is_set
	|| cs1.is_set
	|| cs2.is_set
	|| cs3.is_set
	|| cs4.is_set
	|| cs5.is_set
	|| cs6.is_set
	|| cs7.is_set
	|| default_.is_set
	|| ef.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(af11.yfilter)
	|| ydk::is_set(af12.yfilter)
	|| ydk::is_set(af13.yfilter)
	|| ydk::is_set(af21.yfilter)
	|| ydk::is_set(af22.yfilter)
	|| ydk::is_set(af23.yfilter)
	|| ydk::is_set(af31.yfilter)
	|| ydk::is_set(af32.yfilter)
	|| ydk::is_set(af33.yfilter)
	|| ydk::is_set(af41.yfilter)
	|| ydk::is_set(af42.yfilter)
	|| ydk::is_set(af43.yfilter)
	|| ydk::is_set(cs1.yfilter)
	|| ydk::is_set(cs2.yfilter)
	|| ydk::is_set(cs3.yfilter)
	|| ydk::is_set(cs4.yfilter)
	|| ydk::is_set(cs5.yfilter)
	|| ydk::is_set(cs6.yfilter)
	|| ydk::is_set(cs7.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(ef.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (af11.is_set || is_set(af11.yfilter)) leaf_name_data.push_back(af11.get_name_leafdata());
    if (af12.is_set || is_set(af12.yfilter)) leaf_name_data.push_back(af12.get_name_leafdata());
    if (af13.is_set || is_set(af13.yfilter)) leaf_name_data.push_back(af13.get_name_leafdata());
    if (af21.is_set || is_set(af21.yfilter)) leaf_name_data.push_back(af21.get_name_leafdata());
    if (af22.is_set || is_set(af22.yfilter)) leaf_name_data.push_back(af22.get_name_leafdata());
    if (af23.is_set || is_set(af23.yfilter)) leaf_name_data.push_back(af23.get_name_leafdata());
    if (af31.is_set || is_set(af31.yfilter)) leaf_name_data.push_back(af31.get_name_leafdata());
    if (af32.is_set || is_set(af32.yfilter)) leaf_name_data.push_back(af32.get_name_leafdata());
    if (af33.is_set || is_set(af33.yfilter)) leaf_name_data.push_back(af33.get_name_leafdata());
    if (af41.is_set || is_set(af41.yfilter)) leaf_name_data.push_back(af41.get_name_leafdata());
    if (af42.is_set || is_set(af42.yfilter)) leaf_name_data.push_back(af42.get_name_leafdata());
    if (af43.is_set || is_set(af43.yfilter)) leaf_name_data.push_back(af43.get_name_leafdata());
    if (cs1.is_set || is_set(cs1.yfilter)) leaf_name_data.push_back(cs1.get_name_leafdata());
    if (cs2.is_set || is_set(cs2.yfilter)) leaf_name_data.push_back(cs2.get_name_leafdata());
    if (cs3.is_set || is_set(cs3.yfilter)) leaf_name_data.push_back(cs3.get_name_leafdata());
    if (cs4.is_set || is_set(cs4.yfilter)) leaf_name_data.push_back(cs4.get_name_leafdata());
    if (cs5.is_set || is_set(cs5.yfilter)) leaf_name_data.push_back(cs5.get_name_leafdata());
    if (cs6.is_set || is_set(cs6.yfilter)) leaf_name_data.push_back(cs6.get_name_leafdata());
    if (cs7.is_set || is_set(cs7.yfilter)) leaf_name_data.push_back(cs7.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (ef.is_set || is_set(ef.yfilter)) leaf_name_data.push_back(ef.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af11")
    {
        af11 = value;
        af11.value_namespace = name_space;
        af11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af12")
    {
        af12 = value;
        af12.value_namespace = name_space;
        af12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af13")
    {
        af13 = value;
        af13.value_namespace = name_space;
        af13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af21")
    {
        af21 = value;
        af21.value_namespace = name_space;
        af21.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af22")
    {
        af22 = value;
        af22.value_namespace = name_space;
        af22.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af23")
    {
        af23 = value;
        af23.value_namespace = name_space;
        af23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af31")
    {
        af31 = value;
        af31.value_namespace = name_space;
        af31.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af32")
    {
        af32 = value;
        af32.value_namespace = name_space;
        af32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af33")
    {
        af33 = value;
        af33.value_namespace = name_space;
        af33.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af41")
    {
        af41 = value;
        af41.value_namespace = name_space;
        af41.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af42")
    {
        af42 = value;
        af42.value_namespace = name_space;
        af42.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af43")
    {
        af43 = value;
        af43.value_namespace = name_space;
        af43.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs1")
    {
        cs1 = value;
        cs1.value_namespace = name_space;
        cs1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs2")
    {
        cs2 = value;
        cs2.value_namespace = name_space;
        cs2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs3")
    {
        cs3 = value;
        cs3.value_namespace = name_space;
        cs3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs4")
    {
        cs4 = value;
        cs4.value_namespace = name_space;
        cs4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs5")
    {
        cs5 = value;
        cs5.value_namespace = name_space;
        cs5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs6")
    {
        cs6 = value;
        cs6.value_namespace = name_space;
        cs6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs7")
    {
        cs7 = value;
        cs7.value_namespace = name_space;
        cs7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ef")
    {
        ef = value;
        ef.value_namespace = name_space;
        ef.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "af11")
    {
        af11.yfilter = yfilter;
    }
    if(value_path == "af12")
    {
        af12.yfilter = yfilter;
    }
    if(value_path == "af13")
    {
        af13.yfilter = yfilter;
    }
    if(value_path == "af21")
    {
        af21.yfilter = yfilter;
    }
    if(value_path == "af22")
    {
        af22.yfilter = yfilter;
    }
    if(value_path == "af23")
    {
        af23.yfilter = yfilter;
    }
    if(value_path == "af31")
    {
        af31.yfilter = yfilter;
    }
    if(value_path == "af32")
    {
        af32.yfilter = yfilter;
    }
    if(value_path == "af33")
    {
        af33.yfilter = yfilter;
    }
    if(value_path == "af41")
    {
        af41.yfilter = yfilter;
    }
    if(value_path == "af42")
    {
        af42.yfilter = yfilter;
    }
    if(value_path == "af43")
    {
        af43.yfilter = yfilter;
    }
    if(value_path == "cs1")
    {
        cs1.yfilter = yfilter;
    }
    if(value_path == "cs2")
    {
        cs2.yfilter = yfilter;
    }
    if(value_path == "cs3")
    {
        cs3.yfilter = yfilter;
    }
    if(value_path == "cs4")
    {
        cs4.yfilter = yfilter;
    }
    if(value_path == "cs5")
    {
        cs5.yfilter = yfilter;
    }
    if(value_path == "cs6")
    {
        cs6.yfilter = yfilter;
    }
    if(value_path == "cs7")
    {
        cs7.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "ef")
    {
        ef.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "af11" || name == "af12" || name == "af13" || name == "af21" || name == "af22" || name == "af23" || name == "af31" || name == "af32" || name == "af33" || name == "af41" || name == "af42" || name == "af43" || name == "cs1" || name == "cs2" || name == "cs3" || name == "cs4" || name == "cs5" || name == "cs6" || name == "cs7" || name == "default" || name == "ef")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Ip_()
    :
    address(this, {"address0"})
    , subnet(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet>())
{
    subnet->parent = this;

    yang_name = "ip"; yang_parent_name = "udp-tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::~Ip_()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(subnet != nullptr)
    {
        _children["subnet"] = subnet;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::has_data() const
{
    if (is_presence_container) return true;
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    ADD_KEY_TOKEN(address0, "address0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::has_data() const
{
    if (is_presence_container) return true;
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ip_::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Ipv6()
    :
    address(this, {"address0"})
    , subnet(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet>())
{
    subnet->parent = this;

    yang_name = "ipv6"; yang_parent_name = "udp-tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::~Ipv6()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(subnet != nullptr)
    {
        _children["subnet"] = subnet;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::has_data() const
{
    if (is_presence_container) return true;
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    ADD_KEY_TOKEN(address0, "address0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::has_data() const
{
    if (is_presence_container) return true;
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Ipv6::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::Direction()
    :
    any{YType::empty, "any"},
    destination{YType::empty, "destination"},
    source{YType::empty, "source"}
{

    yang_name = "direction"; yang_parent_name = "udp-tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::~Direction()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::has_data() const
{
    if (is_presence_container) return true;
    return any.is_set
	|| destination.is_set
	|| source.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Direction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "destination" || name == "source")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Port()
    :
    port_numbers(this, {"port_number0"})
    , range(std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range>())
{
    range->parent = this;

    yang_name = "port"; yang_parent_name = "udp-tcp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::~Port()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_numbers.len(); index++)
    {
        if(port_numbers[index]->has_data())
            return true;
    }
    return (range !=  nullptr && range->has_data());
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::has_operation() const
{
    for (std::size_t index=0; index<port_numbers.len(); index++)
    {
        if(port_numbers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-numbers")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers>();
        ent_->parent = this;
        port_numbers.append(ent_);
        return ent_;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : port_numbers.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-numbers" || name == "range")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::PortNumbers()
    :
    port_number0{YType::uint16, "port-number0"},
    port_number1{YType::uint16, "port-number1"},
    port_number2{YType::uint16, "port-number2"},
    port_number3{YType::uint16, "port-number3"},
    port_number4{YType::uint16, "port-number4"},
    port_number5{YType::uint16, "port-number5"},
    port_number6{YType::uint16, "port-number6"},
    port_number7{YType::uint16, "port-number7"}
{

    yang_name = "port-numbers"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::~PortNumbers()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::has_data() const
{
    if (is_presence_container) return true;
    return port_number0.is_set
	|| port_number1.is_set
	|| port_number2.is_set
	|| port_number3.is_set
	|| port_number4.is_set
	|| port_number5.is_set
	|| port_number6.is_set
	|| port_number7.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_number0.yfilter)
	|| ydk::is_set(port_number1.yfilter)
	|| ydk::is_set(port_number2.yfilter)
	|| ydk::is_set(port_number3.yfilter)
	|| ydk::is_set(port_number4.yfilter)
	|| ydk::is_set(port_number5.yfilter)
	|| ydk::is_set(port_number6.yfilter)
	|| ydk::is_set(port_number7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-numbers";
    ADD_KEY_TOKEN(port_number0, "port-number0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_number0.is_set || is_set(port_number0.yfilter)) leaf_name_data.push_back(port_number0.get_name_leafdata());
    if (port_number1.is_set || is_set(port_number1.yfilter)) leaf_name_data.push_back(port_number1.get_name_leafdata());
    if (port_number2.is_set || is_set(port_number2.yfilter)) leaf_name_data.push_back(port_number2.get_name_leafdata());
    if (port_number3.is_set || is_set(port_number3.yfilter)) leaf_name_data.push_back(port_number3.get_name_leafdata());
    if (port_number4.is_set || is_set(port_number4.yfilter)) leaf_name_data.push_back(port_number4.get_name_leafdata());
    if (port_number5.is_set || is_set(port_number5.yfilter)) leaf_name_data.push_back(port_number5.get_name_leafdata());
    if (port_number6.is_set || is_set(port_number6.yfilter)) leaf_name_data.push_back(port_number6.get_name_leafdata());
    if (port_number7.is_set || is_set(port_number7.yfilter)) leaf_name_data.push_back(port_number7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-number0")
    {
        port_number0 = value;
        port_number0.value_namespace = name_space;
        port_number0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number1")
    {
        port_number1 = value;
        port_number1.value_namespace = name_space;
        port_number1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number2")
    {
        port_number2 = value;
        port_number2.value_namespace = name_space;
        port_number2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number3")
    {
        port_number3 = value;
        port_number3.value_namespace = name_space;
        port_number3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number4")
    {
        port_number4 = value;
        port_number4.value_namespace = name_space;
        port_number4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number5")
    {
        port_number5 = value;
        port_number5.value_namespace = name_space;
        port_number5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number6")
    {
        port_number6 = value;
        port_number6.value_namespace = name_space;
        port_number6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number7")
    {
        port_number7 = value;
        port_number7.value_namespace = name_space;
        port_number7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-number0")
    {
        port_number0.yfilter = yfilter;
    }
    if(value_path == "port-number1")
    {
        port_number1.yfilter = yfilter;
    }
    if(value_path == "port-number2")
    {
        port_number2.yfilter = yfilter;
    }
    if(value_path == "port-number3")
    {
        port_number3.yfilter = yfilter;
    }
    if(value_path == "port-number4")
    {
        port_number4.yfilter = yfilter;
    }
    if(value_path == "port-number5")
    {
        port_number5.yfilter = yfilter;
    }
    if(value_path == "port-number6")
    {
        port_number6.yfilter = yfilter;
    }
    if(value_path == "port-number7")
    {
        port_number7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::PortNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-number0" || name == "port-number1" || name == "port-number2" || name == "port-number3" || name == "port-number4" || name == "port-number5" || name == "port-number6" || name == "port-number7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::Range()
    :
    start_range{YType::uint16, "start-range"},
    end_range{YType::uint16, "end-range"}
{

    yang_name = "range"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::~Range()
{
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::has_data() const
{
    if (is_presence_container) return true;
    return start_range.is_set
	|| end_range.is_set;
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_range.yfilter)
	|| ydk::is_set(end_range.yfilter);
}

std::string Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_range.is_set || is_set(start_range.yfilter)) leaf_name_data.push_back(start_range.get_name_leafdata());
    if (end_range.is_set || is_set(end_range.yfilter)) leaf_name_data.push_back(end_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-range")
    {
        start_range = value;
        start_range.value_namespace = name_space;
        start_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range")
    {
        end_range = value;
        end_range.value_namespace = name_space;
        end_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-range")
    {
        start_range.yfilter = yfilter;
    }
    if(value_path == "end-range")
    {
        end_range.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Transport::UdpTcp::Port::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-range" || name == "end-range")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Ip_()
    :
    any(nullptr) // presence node
{

    yang_name = "ip"; yang_parent_name = "custom"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Ip_::~Ip_()
{
}

bool Native::Ip::Nbar::Custom::Ip_::has_data() const
{
    if (is_presence_container) return true;
    return (any !=  nullptr && any->has_data());
}

bool Native::Ip::Nbar::Custom::Ip_::has_operation() const
{
    return is_set(yfilter)
	|| (any !=  nullptr && any->has_operation());
}

std::string Native::Ip::Nbar::Custom::Ip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ip_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "any")
    {
        if(any == nullptr)
        {
            any = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any>();
        }
        return any;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ip_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(any != nullptr)
    {
        _children["any"] = any;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Ip_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Ip_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Ip_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Any()
    :
    id{YType::uint16, "id"}
        ,
    dscp(std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Dscp>())
    , ip(std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ip_>())
    , ipv6(std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ipv6>())
    , direction(std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Direction>())
    , port(std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Port>())
{
    dscp->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    direction->parent = this;
    port->parent = this;

    yang_name = "any"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Ip::Nbar::Custom::Ip_::Any::~Any()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| (dscp !=  nullptr && dscp->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (direction !=  nullptr && direction->has_data())
	|| (port !=  nullptr && port->has_data());
}

bool Native::Ip::Nbar::Custom::Ip_::Any::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (dscp !=  nullptr && dscp->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (direction !=  nullptr && direction->has_operation())
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ip_::Any::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        if(dscp == nullptr)
        {
            dscp = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Dscp>();
        }
        return dscp;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ip_>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "direction")
    {
        if(direction == nullptr)
        {
            direction = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Direction>();
        }
        return direction;
    }

    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ip_::Any::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dscp != nullptr)
    {
        _children["dscp"] = dscp;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(direction != nullptr)
    {
        _children["direction"] = direction;
    }

    if(port != nullptr)
    {
        _children["port"] = port;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "ip" || name == "ipv6" || name == "direction" || name == "port" || name == "id")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Dscp::Dscp()
    :
    range{YType::uint8, "range"},
    af11{YType::empty, "af11"},
    af12{YType::empty, "af12"},
    af13{YType::empty, "af13"},
    af21{YType::empty, "af21"},
    af22{YType::empty, "af22"},
    af23{YType::empty, "af23"},
    af31{YType::empty, "af31"},
    af32{YType::empty, "af32"},
    af33{YType::empty, "af33"},
    af41{YType::empty, "af41"},
    af42{YType::empty, "af42"},
    af43{YType::empty, "af43"},
    cs1{YType::empty, "cs1"},
    cs2{YType::empty, "cs2"},
    cs3{YType::empty, "cs3"},
    cs4{YType::empty, "cs4"},
    cs5{YType::empty, "cs5"},
    cs6{YType::empty, "cs6"},
    cs7{YType::empty, "cs7"},
    default_{YType::empty, "default"},
    ef{YType::empty, "ef"}
{

    yang_name = "dscp"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Ip_::Any::Dscp::~Dscp()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Dscp::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| af11.is_set
	|| af12.is_set
	|| af13.is_set
	|| af21.is_set
	|| af22.is_set
	|| af23.is_set
	|| af31.is_set
	|| af32.is_set
	|| af33.is_set
	|| af41.is_set
	|| af42.is_set
	|| af43.is_set
	|| cs1.is_set
	|| cs2.is_set
	|| cs3.is_set
	|| cs4.is_set
	|| cs5.is_set
	|| cs6.is_set
	|| cs7.is_set
	|| default_.is_set
	|| ef.is_set;
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(af11.yfilter)
	|| ydk::is_set(af12.yfilter)
	|| ydk::is_set(af13.yfilter)
	|| ydk::is_set(af21.yfilter)
	|| ydk::is_set(af22.yfilter)
	|| ydk::is_set(af23.yfilter)
	|| ydk::is_set(af31.yfilter)
	|| ydk::is_set(af32.yfilter)
	|| ydk::is_set(af33.yfilter)
	|| ydk::is_set(af41.yfilter)
	|| ydk::is_set(af42.yfilter)
	|| ydk::is_set(af43.yfilter)
	|| ydk::is_set(cs1.yfilter)
	|| ydk::is_set(cs2.yfilter)
	|| ydk::is_set(cs3.yfilter)
	|| ydk::is_set(cs4.yfilter)
	|| ydk::is_set(cs5.yfilter)
	|| ydk::is_set(cs6.yfilter)
	|| ydk::is_set(cs7.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(ef.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (af11.is_set || is_set(af11.yfilter)) leaf_name_data.push_back(af11.get_name_leafdata());
    if (af12.is_set || is_set(af12.yfilter)) leaf_name_data.push_back(af12.get_name_leafdata());
    if (af13.is_set || is_set(af13.yfilter)) leaf_name_data.push_back(af13.get_name_leafdata());
    if (af21.is_set || is_set(af21.yfilter)) leaf_name_data.push_back(af21.get_name_leafdata());
    if (af22.is_set || is_set(af22.yfilter)) leaf_name_data.push_back(af22.get_name_leafdata());
    if (af23.is_set || is_set(af23.yfilter)) leaf_name_data.push_back(af23.get_name_leafdata());
    if (af31.is_set || is_set(af31.yfilter)) leaf_name_data.push_back(af31.get_name_leafdata());
    if (af32.is_set || is_set(af32.yfilter)) leaf_name_data.push_back(af32.get_name_leafdata());
    if (af33.is_set || is_set(af33.yfilter)) leaf_name_data.push_back(af33.get_name_leafdata());
    if (af41.is_set || is_set(af41.yfilter)) leaf_name_data.push_back(af41.get_name_leafdata());
    if (af42.is_set || is_set(af42.yfilter)) leaf_name_data.push_back(af42.get_name_leafdata());
    if (af43.is_set || is_set(af43.yfilter)) leaf_name_data.push_back(af43.get_name_leafdata());
    if (cs1.is_set || is_set(cs1.yfilter)) leaf_name_data.push_back(cs1.get_name_leafdata());
    if (cs2.is_set || is_set(cs2.yfilter)) leaf_name_data.push_back(cs2.get_name_leafdata());
    if (cs3.is_set || is_set(cs3.yfilter)) leaf_name_data.push_back(cs3.get_name_leafdata());
    if (cs4.is_set || is_set(cs4.yfilter)) leaf_name_data.push_back(cs4.get_name_leafdata());
    if (cs5.is_set || is_set(cs5.yfilter)) leaf_name_data.push_back(cs5.get_name_leafdata());
    if (cs6.is_set || is_set(cs6.yfilter)) leaf_name_data.push_back(cs6.get_name_leafdata());
    if (cs7.is_set || is_set(cs7.yfilter)) leaf_name_data.push_back(cs7.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (ef.is_set || is_set(ef.yfilter)) leaf_name_data.push_back(ef.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ip_::Any::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af11")
    {
        af11 = value;
        af11.value_namespace = name_space;
        af11.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af12")
    {
        af12 = value;
        af12.value_namespace = name_space;
        af12.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af13")
    {
        af13 = value;
        af13.value_namespace = name_space;
        af13.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af21")
    {
        af21 = value;
        af21.value_namespace = name_space;
        af21.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af22")
    {
        af22 = value;
        af22.value_namespace = name_space;
        af22.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af23")
    {
        af23 = value;
        af23.value_namespace = name_space;
        af23.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af31")
    {
        af31 = value;
        af31.value_namespace = name_space;
        af31.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af32")
    {
        af32 = value;
        af32.value_namespace = name_space;
        af32.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af33")
    {
        af33 = value;
        af33.value_namespace = name_space;
        af33.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af41")
    {
        af41 = value;
        af41.value_namespace = name_space;
        af41.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af42")
    {
        af42 = value;
        af42.value_namespace = name_space;
        af42.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af43")
    {
        af43 = value;
        af43.value_namespace = name_space;
        af43.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs1")
    {
        cs1 = value;
        cs1.value_namespace = name_space;
        cs1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs2")
    {
        cs2 = value;
        cs2.value_namespace = name_space;
        cs2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs3")
    {
        cs3 = value;
        cs3.value_namespace = name_space;
        cs3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs4")
    {
        cs4 = value;
        cs4.value_namespace = name_space;
        cs4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs5")
    {
        cs5 = value;
        cs5.value_namespace = name_space;
        cs5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs6")
    {
        cs6 = value;
        cs6.value_namespace = name_space;
        cs6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cs7")
    {
        cs7 = value;
        cs7.value_namespace = name_space;
        cs7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ef")
    {
        ef = value;
        ef.value_namespace = name_space;
        ef.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "af11")
    {
        af11.yfilter = yfilter;
    }
    if(value_path == "af12")
    {
        af12.yfilter = yfilter;
    }
    if(value_path == "af13")
    {
        af13.yfilter = yfilter;
    }
    if(value_path == "af21")
    {
        af21.yfilter = yfilter;
    }
    if(value_path == "af22")
    {
        af22.yfilter = yfilter;
    }
    if(value_path == "af23")
    {
        af23.yfilter = yfilter;
    }
    if(value_path == "af31")
    {
        af31.yfilter = yfilter;
    }
    if(value_path == "af32")
    {
        af32.yfilter = yfilter;
    }
    if(value_path == "af33")
    {
        af33.yfilter = yfilter;
    }
    if(value_path == "af41")
    {
        af41.yfilter = yfilter;
    }
    if(value_path == "af42")
    {
        af42.yfilter = yfilter;
    }
    if(value_path == "af43")
    {
        af43.yfilter = yfilter;
    }
    if(value_path == "cs1")
    {
        cs1.yfilter = yfilter;
    }
    if(value_path == "cs2")
    {
        cs2.yfilter = yfilter;
    }
    if(value_path == "cs3")
    {
        cs3.yfilter = yfilter;
    }
    if(value_path == "cs4")
    {
        cs4.yfilter = yfilter;
    }
    if(value_path == "cs5")
    {
        cs5.yfilter = yfilter;
    }
    if(value_path == "cs6")
    {
        cs6.yfilter = yfilter;
    }
    if(value_path == "cs7")
    {
        cs7.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "ef")
    {
        ef.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "af11" || name == "af12" || name == "af13" || name == "af21" || name == "af22" || name == "af23" || name == "af31" || name == "af32" || name == "af33" || name == "af41" || name == "af42" || name == "af43" || name == "cs1" || name == "cs2" || name == "cs3" || name == "cs4" || name == "cs5" || name == "cs6" || name == "cs7" || name == "default" || name == "ef")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Ip_()
    :
    address(this, {"address0"})
    , subnet(std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet>())
{
    subnet->parent = this;

    yang_name = "ip"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Ip_::Any::Ip_::~Ip_()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Ip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Ip_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ip_::Any::Ip_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Ip_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(subnet != nullptr)
    {
        _children["subnet"] = subnet;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ip_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ip_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::has_data() const
{
    if (is_presence_container) return true;
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    ADD_KEY_TOKEN(address0, "address0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::has_data() const
{
    if (is_presence_container) return true;
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ip_::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Ipv6()
    :
    address(this, {"address0"})
    , subnet(std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet>())
{
    subnet->parent = this;

    yang_name = "ipv6"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::~Ipv6()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return (subnet !=  nullptr && subnet->has_data());
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (subnet !=  nullptr && subnet->has_operation());
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "subnet")
    {
        if(subnet == nullptr)
        {
            subnet = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet>();
        }
        return subnet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(subnet != nullptr)
    {
        _children["subnet"] = subnet;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "subnet")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::Address()
    :
    address0{YType::str, "address0"},
    address1{YType::str, "address1"},
    address2{YType::str, "address2"},
    address3{YType::str, "address3"},
    address4{YType::str, "address4"},
    address5{YType::str, "address5"},
    address6{YType::str, "address6"},
    address7{YType::str, "address7"}
{

    yang_name = "address"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::~Address()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::has_data() const
{
    if (is_presence_container) return true;
    return address0.is_set
	|| address1.is_set
	|| address2.is_set
	|| address3.is_set
	|| address4.is_set
	|| address5.is_set
	|| address6.is_set
	|| address7.is_set;
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address0.yfilter)
	|| ydk::is_set(address1.yfilter)
	|| ydk::is_set(address2.yfilter)
	|| ydk::is_set(address3.yfilter)
	|| ydk::is_set(address4.yfilter)
	|| ydk::is_set(address5.yfilter)
	|| ydk::is_set(address6.yfilter)
	|| ydk::is_set(address7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    ADD_KEY_TOKEN(address0, "address0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address0.is_set || is_set(address0.yfilter)) leaf_name_data.push_back(address0.get_name_leafdata());
    if (address1.is_set || is_set(address1.yfilter)) leaf_name_data.push_back(address1.get_name_leafdata());
    if (address2.is_set || is_set(address2.yfilter)) leaf_name_data.push_back(address2.get_name_leafdata());
    if (address3.is_set || is_set(address3.yfilter)) leaf_name_data.push_back(address3.get_name_leafdata());
    if (address4.is_set || is_set(address4.yfilter)) leaf_name_data.push_back(address4.get_name_leafdata());
    if (address5.is_set || is_set(address5.yfilter)) leaf_name_data.push_back(address5.get_name_leafdata());
    if (address6.is_set || is_set(address6.yfilter)) leaf_name_data.push_back(address6.get_name_leafdata());
    if (address7.is_set || is_set(address7.yfilter)) leaf_name_data.push_back(address7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address0")
    {
        address0 = value;
        address0.value_namespace = name_space;
        address0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address1")
    {
        address1 = value;
        address1.value_namespace = name_space;
        address1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address2")
    {
        address2 = value;
        address2.value_namespace = name_space;
        address2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address3")
    {
        address3 = value;
        address3.value_namespace = name_space;
        address3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address4")
    {
        address4 = value;
        address4.value_namespace = name_space;
        address4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address5")
    {
        address5 = value;
        address5.value_namespace = name_space;
        address5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address6")
    {
        address6 = value;
        address6.value_namespace = name_space;
        address6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address7")
    {
        address7 = value;
        address7.value_namespace = name_space;
        address7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address0")
    {
        address0.yfilter = yfilter;
    }
    if(value_path == "address1")
    {
        address1.yfilter = yfilter;
    }
    if(value_path == "address2")
    {
        address2.yfilter = yfilter;
    }
    if(value_path == "address3")
    {
        address3.yfilter = yfilter;
    }
    if(value_path == "address4")
    {
        address4.yfilter = yfilter;
    }
    if(value_path == "address5")
    {
        address5.yfilter = yfilter;
    }
    if(value_path == "address6")
    {
        address6.yfilter = yfilter;
    }
    if(value_path == "address7")
    {
        address7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address0" || name == "address1" || name == "address2" || name == "address3" || name == "address4" || name == "address5" || name == "address6" || name == "address7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::Subnet()
    :
    subnet{YType::str, "subnet"},
    mask{YType::uint8, "mask"}
{

    yang_name = "subnet"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::~Subnet()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::has_data() const
{
    if (is_presence_container) return true;
    return subnet.is_set
	|| mask.is_set;
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subnet.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subnet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subnet.is_set || is_set(subnet.yfilter)) leaf_name_data.push_back(subnet.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subnet")
    {
        subnet = value;
        subnet.value_namespace = name_space;
        subnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subnet")
    {
        subnet.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Ipv6::Subnet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subnet" || name == "mask")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Direction::Direction()
    :
    any{YType::empty, "any"},
    destination{YType::empty, "destination"},
    source{YType::empty, "source"}
{

    yang_name = "direction"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Ip_::Any::Direction::~Direction()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Direction::has_data() const
{
    if (is_presence_container) return true;
    return any.is_set
	|| destination.is_set
	|| source.is_set;
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Direction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Direction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Direction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ip_::Any::Direction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Direction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Direction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::Direction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Direction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "destination" || name == "source")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Port::Port()
    :
    port_numbers(this, {"port_number0"})
    , range(std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Port::Range>())
{
    range->parent = this;

    yang_name = "port"; yang_parent_name = "any"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Ip_::Any::Port::~Port()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<port_numbers.len(); index++)
    {
        if(port_numbers[index]->has_data())
            return true;
    }
    return (range !=  nullptr && range->has_data());
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::has_operation() const
{
    for (std::size_t index=0; index<port_numbers.len(); index++)
    {
        if(port_numbers[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ip_::Any::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-numbers")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers>();
        ent_->parent = this;
        port_numbers.append(ent_);
        return ent_;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::Nbar::Custom::Ip_::Any::Port::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : port_numbers.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(range != nullptr)
    {
        _children["range"] = range;
    }

    return _children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::Custom::Ip_::Any::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-numbers" || name == "range")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::PortNumbers()
    :
    port_number0{YType::uint16, "port-number0"},
    port_number1{YType::uint16, "port-number1"},
    port_number2{YType::uint16, "port-number2"},
    port_number3{YType::uint16, "port-number3"},
    port_number4{YType::uint16, "port-number4"},
    port_number5{YType::uint16, "port-number5"},
    port_number6{YType::uint16, "port-number6"},
    port_number7{YType::uint16, "port-number7"}
{

    yang_name = "port-numbers"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::~PortNumbers()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::has_data() const
{
    if (is_presence_container) return true;
    return port_number0.is_set
	|| port_number1.is_set
	|| port_number2.is_set
	|| port_number3.is_set
	|| port_number4.is_set
	|| port_number5.is_set
	|| port_number6.is_set
	|| port_number7.is_set;
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_number0.yfilter)
	|| ydk::is_set(port_number1.yfilter)
	|| ydk::is_set(port_number2.yfilter)
	|| ydk::is_set(port_number3.yfilter)
	|| ydk::is_set(port_number4.yfilter)
	|| ydk::is_set(port_number5.yfilter)
	|| ydk::is_set(port_number6.yfilter)
	|| ydk::is_set(port_number7.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-numbers";
    ADD_KEY_TOKEN(port_number0, "port-number0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_number0.is_set || is_set(port_number0.yfilter)) leaf_name_data.push_back(port_number0.get_name_leafdata());
    if (port_number1.is_set || is_set(port_number1.yfilter)) leaf_name_data.push_back(port_number1.get_name_leafdata());
    if (port_number2.is_set || is_set(port_number2.yfilter)) leaf_name_data.push_back(port_number2.get_name_leafdata());
    if (port_number3.is_set || is_set(port_number3.yfilter)) leaf_name_data.push_back(port_number3.get_name_leafdata());
    if (port_number4.is_set || is_set(port_number4.yfilter)) leaf_name_data.push_back(port_number4.get_name_leafdata());
    if (port_number5.is_set || is_set(port_number5.yfilter)) leaf_name_data.push_back(port_number5.get_name_leafdata());
    if (port_number6.is_set || is_set(port_number6.yfilter)) leaf_name_data.push_back(port_number6.get_name_leafdata());
    if (port_number7.is_set || is_set(port_number7.yfilter)) leaf_name_data.push_back(port_number7.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-number0")
    {
        port_number0 = value;
        port_number0.value_namespace = name_space;
        port_number0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number1")
    {
        port_number1 = value;
        port_number1.value_namespace = name_space;
        port_number1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number2")
    {
        port_number2 = value;
        port_number2.value_namespace = name_space;
        port_number2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number3")
    {
        port_number3 = value;
        port_number3.value_namespace = name_space;
        port_number3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number4")
    {
        port_number4 = value;
        port_number4.value_namespace = name_space;
        port_number4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number5")
    {
        port_number5 = value;
        port_number5.value_namespace = name_space;
        port_number5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number6")
    {
        port_number6 = value;
        port_number6.value_namespace = name_space;
        port_number6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-number7")
    {
        port_number7 = value;
        port_number7.value_namespace = name_space;
        port_number7.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-number0")
    {
        port_number0.yfilter = yfilter;
    }
    if(value_path == "port-number1")
    {
        port_number1.yfilter = yfilter;
    }
    if(value_path == "port-number2")
    {
        port_number2.yfilter = yfilter;
    }
    if(value_path == "port-number3")
    {
        port_number3.yfilter = yfilter;
    }
    if(value_path == "port-number4")
    {
        port_number4.yfilter = yfilter;
    }
    if(value_path == "port-number5")
    {
        port_number5.yfilter = yfilter;
    }
    if(value_path == "port-number6")
    {
        port_number6.yfilter = yfilter;
    }
    if(value_path == "port-number7")
    {
        port_number7.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::PortNumbers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-number0" || name == "port-number1" || name == "port-number2" || name == "port-number3" || name == "port-number4" || name == "port-number5" || name == "port-number6" || name == "port-number7")
        return true;
    return false;
}

Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::Range()
    :
    start_range{YType::uint16, "start-range"},
    end_range{YType::uint16, "end-range"}
{

    yang_name = "range"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::~Range()
{
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::has_data() const
{
    if (is_presence_container) return true;
    return start_range.is_set
	|| end_range.is_set;
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_range.yfilter)
	|| ydk::is_set(end_range.yfilter);
}

std::string Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_range.is_set || is_set(start_range.yfilter)) leaf_name_data.push_back(start_range.get_name_leafdata());
    if (end_range.is_set || is_set(end_range.yfilter)) leaf_name_data.push_back(end_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-range")
    {
        start_range = value;
        start_range.value_namespace = name_space;
        start_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-range")
    {
        end_range = value;
        end_range.value_namespace = name_space;
        end_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-range")
    {
        start_range.yfilter = yfilter;
    }
    if(value_path == "end-range")
    {
        end_range.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::Custom::Ip_::Any::Port::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-range" || name == "end-range")
        return true;
    return false;
}

Native::Ip::Nbar::ProtocolPack::ProtocolPack()
    :
    filepath(this, {"filepath"})
{

    yang_name = "protocol-pack"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::ProtocolPack::~ProtocolPack()
{
}

bool Native::Ip::Nbar::ProtocolPack::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<filepath.len(); index++)
    {
        if(filepath[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Nbar::ProtocolPack::has_operation() const
{
    for (std::size_t index=0; index<filepath.len(); index++)
    {
        if(filepath[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Nbar::ProtocolPack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::ProtocolPack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-pack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::ProtocolPack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::ProtocolPack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filepath")
    {
        auto ent_ = std::make_shared<Native::Ip::Nbar::ProtocolPack::Filepath>();
        ent_->parent = this;
        filepath.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::ProtocolPack::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : filepath.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Nbar::ProtocolPack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Nbar::ProtocolPack::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Nbar::ProtocolPack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filepath")
        return true;
    return false;
}

Native::Ip::Nbar::ProtocolPack::Filepath::Filepath()
    :
    filepath{YType::str, "filepath"},
    force{YType::empty, "force"}
{

    yang_name = "filepath"; yang_parent_name = "protocol-pack"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Nbar::ProtocolPack::Filepath::~Filepath()
{
}

bool Native::Ip::Nbar::ProtocolPack::Filepath::has_data() const
{
    if (is_presence_container) return true;
    return filepath.is_set
	|| force.is_set;
}

bool Native::Ip::Nbar::ProtocolPack::Filepath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filepath.yfilter)
	|| ydk::is_set(force.yfilter);
}

std::string Native::Ip::Nbar::ProtocolPack::Filepath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-nbar:nbar/protocol-pack/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Nbar::ProtocolPack::Filepath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filepath";
    ADD_KEY_TOKEN(filepath, "filepath");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Nbar::ProtocolPack::Filepath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filepath.is_set || is_set(filepath.yfilter)) leaf_name_data.push_back(filepath.get_name_leafdata());
    if (force.is_set || is_set(force.yfilter)) leaf_name_data.push_back(force.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Nbar::ProtocolPack::Filepath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Nbar::ProtocolPack::Filepath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Nbar::ProtocolPack::Filepath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filepath")
    {
        filepath = value;
        filepath.value_namespace = name_space;
        filepath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "force")
    {
        force = value;
        force.value_namespace = name_space;
        force.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Nbar::ProtocolPack::Filepath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filepath")
    {
        filepath.yfilter = yfilter;
    }
    if(value_path == "force")
    {
        force.yfilter = yfilter;
    }
}

bool Native::Ip::Nbar::ProtocolPack::Filepath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filepath" || name == "force")
        return true;
    return false;
}

Native::Ip::Sla::Sla()
    :
    entry(this, {"number"})
    , enable(std::make_shared<Native::Ip::Sla::Enable>())
    , responder(nullptr) // presence node
    , logging(std::make_shared<Native::Ip::Sla::Logging>())
    , group(std::make_shared<Native::Ip::Sla::Group>())
    , schedule(this, {"entry_number"})
    , reaction_configuration(this, {"entry_number"})
    , server(std::make_shared<Native::Ip::Sla::Server>())
{
    enable->parent = this;
    logging->parent = this;
    group->parent = this;
    server->parent = this;

    yang_name = "sla"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Sla::~Sla()
{
}

bool Native::Ip::Sla::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<entry.len(); index++)
    {
        if(entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<schedule.len(); index++)
    {
        if(schedule[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reaction_configuration.len(); index++)
    {
        if(reaction_configuration[index]->has_data())
            return true;
    }
    return (enable !=  nullptr && enable->has_data())
	|| (responder !=  nullptr && responder->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (group !=  nullptr && group->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Ip::Sla::has_operation() const
{
    for (std::size_t index=0; index<entry.len(); index++)
    {
        if(entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<schedule.len(); index++)
    {
        if(schedule[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reaction_configuration.len(); index++)
    {
        if(reaction_configuration[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (enable !=  nullptr && enable->has_operation())
	|| (responder !=  nullptr && responder->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (group !=  nullptr && group->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Ip::Sla::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-sla:sla";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entry")
    {
        auto ent_ = std::make_shared<Native::Ip::Sla::Entry>();
        ent_->parent = this;
        entry.append(ent_);
        return ent_;
    }

    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Ip::Sla::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "responder")
    {
        if(responder == nullptr)
        {
            responder = std::make_shared<Native::Ip::Sla::Responder>();
        }
        return responder;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Ip::Sla::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Ip::Sla::Group>();
        }
        return group;
    }

    if(child_yang_name == "schedule")
    {
        auto ent_ = std::make_shared<Native::Ip::Sla::Schedule>();
        ent_->parent = this;
        schedule.append(ent_);
        return ent_;
    }

    if(child_yang_name == "reaction-configuration")
    {
        auto ent_ = std::make_shared<Native::Ip::Sla::ReactionConfiguration>();
        ent_->parent = this;
        reaction_configuration.append(ent_);
        return ent_;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Ip::Sla::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(enable != nullptr)
    {
        _children["enable"] = enable;
    }

    if(responder != nullptr)
    {
        _children["responder"] = responder;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(group != nullptr)
    {
        _children["group"] = group;
    }

    count_ = 0;
    for (auto ent_ : schedule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : reaction_configuration.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(server != nullptr)
    {
        _children["server"] = server;
    }

    return _children;
}

void Native::Ip::Sla::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Sla::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Sla::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry" || name == "enable" || name == "responder" || name == "logging" || name == "group" || name == "schedule" || name == "reaction-configuration" || name == "server")
        return true;
    return false;
}

Native::Ip::Sla::Entry::Entry()
    :
    number{YType::uint32, "number"}
        ,
    icmp_echo(std::make_shared<Native::Ip::Sla::Entry::IcmpEcho>())
    , path_echo(std::make_shared<Native::Ip::Sla::Entry::PathEcho>())
    , path_jitter(std::make_shared<Native::Ip::Sla::Entry::PathJitter>())
    , udp_echo(std::make_shared<Native::Ip::Sla::Entry::UdpEcho>())
    , udp_jitter(std::make_shared<Native::Ip::Sla::Entry::UdpJitter>())
    , http(std::make_shared<Native::Ip::Sla::Entry::Http>())
    , dhcp(std::make_shared<Native::Ip::Sla::Entry::Dhcp>())
    , ethernet(std::make_shared<Native::Ip::Sla::Entry::Ethernet>())
{
    icmp_echo->parent = this;
    path_echo->parent = this;
    path_jitter->parent = this;
    udp_echo->parent = this;
    udp_jitter->parent = this;
    http->parent = this;
    dhcp->parent = this;
    ethernet->parent = this;

    yang_name = "entry"; yang_parent_name = "sla"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Sla::Entry::~Entry()
{
}

bool Native::Ip::Sla::Entry::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| (icmp_echo !=  nullptr && icmp_echo->has_data())
	|| (path_echo !=  nullptr && path_echo->has_data())
	|| (path_jitter !=  nullptr && path_jitter->has_data())
	|| (udp_echo !=  nullptr && udp_echo->has_data())
	|| (udp_jitter !=  nullptr && udp_jitter->has_data())
	|| (http !=  nullptr && http->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data());
}

bool Native::Ip::Sla::Entry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (icmp_echo !=  nullptr && icmp_echo->has_operation())
	|| (path_echo !=  nullptr && path_echo->has_operation())
	|| (path_jitter !=  nullptr && path_jitter->has_operation())
	|| (udp_echo !=  nullptr && udp_echo->has_operation())
	|| (udp_jitter !=  nullptr && udp_jitter->has_operation())
	|| (http !=  nullptr && http->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation());
}

std::string Native::Ip::Sla::Entry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "icmp-echo")
    {
        if(icmp_echo == nullptr)
        {
            icmp_echo = std::make_shared<Native::Ip::Sla::Entry::IcmpEcho>();
        }
        return icmp_echo;
    }

    if(child_yang_name == "path-echo")
    {
        if(path_echo == nullptr)
        {
            path_echo = std::make_shared<Native::Ip::Sla::Entry::PathEcho>();
        }
        return path_echo;
    }

    if(child_yang_name == "path-jitter")
    {
        if(path_jitter == nullptr)
        {
            path_jitter = std::make_shared<Native::Ip::Sla::Entry::PathJitter>();
        }
        return path_jitter;
    }

    if(child_yang_name == "udp-echo")
    {
        if(udp_echo == nullptr)
        {
            udp_echo = std::make_shared<Native::Ip::Sla::Entry::UdpEcho>();
        }
        return udp_echo;
    }

    if(child_yang_name == "udp-jitter")
    {
        if(udp_jitter == nullptr)
        {
            udp_jitter = std::make_shared<Native::Ip::Sla::Entry::UdpJitter>();
        }
        return udp_jitter;
    }

    if(child_yang_name == "http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Ip::Sla::Entry::Http>();
        }
        return http;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Ip::Sla::Entry::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Ip::Sla::Entry::Ethernet>();
        }
        return ethernet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(icmp_echo != nullptr)
    {
        _children["icmp-echo"] = icmp_echo;
    }

    if(path_echo != nullptr)
    {
        _children["path-echo"] = path_echo;
    }

    if(path_jitter != nullptr)
    {
        _children["path-jitter"] = path_jitter;
    }

    if(udp_echo != nullptr)
    {
        _children["udp-echo"] = udp_echo;
    }

    if(udp_jitter != nullptr)
    {
        _children["udp-jitter"] = udp_jitter;
    }

    if(http != nullptr)
    {
        _children["http"] = http;
    }

    if(dhcp != nullptr)
    {
        _children["dhcp"] = dhcp;
    }

    if(ethernet != nullptr)
    {
        _children["ethernet"] = ethernet;
    }

    return _children;
}

void Native::Ip::Sla::Entry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "icmp-echo" || name == "path-echo" || name == "path-jitter" || name == "udp-echo" || name == "udp-jitter" || name == "http" || name == "dhcp" || name == "ethernet" || name == "number")
        return true;
    return false;
}

Native::Ip::Sla::Entry::IcmpEcho::IcmpEcho()
    :
    destination{YType::str, "destination"},
    source_interface{YType::str, "source-interface"},
    source_ip{YType::str, "source-ip"},
    data_pattern{YType::str, "data-pattern"},
    frequency{YType::uint32, "frequency"},
    owner{YType::str, "owner"},
    request_data_size{YType::uint32, "request-data-size"},
    tag{YType::str, "tag"},
    threshold{YType::uint32, "threshold"},
    timeout{YType::uint64, "timeout"},
    tos{YType::uint8, "tos"},
    verify_data{YType::empty, "verify-data"},
    vrf{YType::str, "vrf"}
        ,
    history(std::make_shared<Native::Ip::Sla::Entry::IcmpEcho::History>())
{
    history->parent = this;

    yang_name = "icmp-echo"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::Entry::IcmpEcho::~IcmpEcho()
{
}

bool Native::Ip::Sla::Entry::IcmpEcho::has_data() const
{
    if (is_presence_container) return true;
    return destination.is_set
	|| source_interface.is_set
	|| source_ip.is_set
	|| data_pattern.is_set
	|| frequency.is_set
	|| owner.is_set
	|| request_data_size.is_set
	|| tag.is_set
	|| threshold.is_set
	|| timeout.is_set
	|| tos.is_set
	|| verify_data.is_set
	|| vrf.is_set
	|| (history !=  nullptr && history->has_data());
}

bool Native::Ip::Sla::Entry::IcmpEcho::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(data_pattern.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(request_data_size.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(verify_data.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (history !=  nullptr && history->has_operation());
}

std::string Native::Ip::Sla::Entry::IcmpEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::IcmpEcho::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (data_pattern.is_set || is_set(data_pattern.yfilter)) leaf_name_data.push_back(data_pattern.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (request_data_size.is_set || is_set(request_data_size.yfilter)) leaf_name_data.push_back(request_data_size.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (verify_data.is_set || is_set(verify_data.yfilter)) leaf_name_data.push_back(verify_data.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Entry::IcmpEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Ip::Sla::Entry::IcmpEcho::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Entry::IcmpEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(history != nullptr)
    {
        _children["history"] = history;
    }

    return _children;
}

void Native::Ip::Sla::Entry::IcmpEcho::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-pattern")
    {
        data_pattern = value;
        data_pattern.value_namespace = name_space;
        data_pattern.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-data-size")
    {
        request_data_size = value;
        request_data_size.value_namespace = name_space;
        request_data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-data")
    {
        verify_data = value;
        verify_data.value_namespace = name_space;
        verify_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::IcmpEcho::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "data-pattern")
    {
        data_pattern.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "request-data-size")
    {
        request_data_size.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "verify-data")
    {
        verify_data.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::IcmpEcho::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "destination" || name == "source-interface" || name == "source-ip" || name == "data-pattern" || name == "frequency" || name == "owner" || name == "request-data-size" || name == "tag" || name == "threshold" || name == "timeout" || name == "tos" || name == "verify-data" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Sla::Entry::IcmpEcho::History::History()
    :
    buckets_kept{YType::uint8, "buckets-kept"},
    distributions_of_statistics_kept{YType::uint8, "distributions-of-statistics-kept"},
    filter{YType::enumeration, "filter"},
    hours_of_statistics_kept{YType::uint8, "hours-of-statistics-kept"},
    lives_kept{YType::uint8, "lives-kept"},
    statistics_distribution_interval{YType::uint8, "statistics-distribution-interval"}
        ,
    enhanced(std::make_shared<Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced>())
{
    enhanced->parent = this;

    yang_name = "history"; yang_parent_name = "icmp-echo"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::Entry::IcmpEcho::History::~History()
{
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::has_data() const
{
    if (is_presence_container) return true;
    return buckets_kept.is_set
	|| distributions_of_statistics_kept.is_set
	|| filter.is_set
	|| hours_of_statistics_kept.is_set
	|| lives_kept.is_set
	|| statistics_distribution_interval.is_set
	|| (enhanced !=  nullptr && enhanced->has_data());
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(buckets_kept.yfilter)
	|| ydk::is_set(distributions_of_statistics_kept.yfilter)
	|| ydk::is_set(filter.yfilter)
	|| ydk::is_set(hours_of_statistics_kept.yfilter)
	|| ydk::is_set(lives_kept.yfilter)
	|| ydk::is_set(statistics_distribution_interval.yfilter)
	|| (enhanced !=  nullptr && enhanced->has_operation());
}

std::string Native::Ip::Sla::Entry::IcmpEcho::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::IcmpEcho::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buckets_kept.is_set || is_set(buckets_kept.yfilter)) leaf_name_data.push_back(buckets_kept.get_name_leafdata());
    if (distributions_of_statistics_kept.is_set || is_set(distributions_of_statistics_kept.yfilter)) leaf_name_data.push_back(distributions_of_statistics_kept.get_name_leafdata());
    if (filter.is_set || is_set(filter.yfilter)) leaf_name_data.push_back(filter.get_name_leafdata());
    if (hours_of_statistics_kept.is_set || is_set(hours_of_statistics_kept.yfilter)) leaf_name_data.push_back(hours_of_statistics_kept.get_name_leafdata());
    if (lives_kept.is_set || is_set(lives_kept.yfilter)) leaf_name_data.push_back(lives_kept.get_name_leafdata());
    if (statistics_distribution_interval.is_set || is_set(statistics_distribution_interval.yfilter)) leaf_name_data.push_back(statistics_distribution_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Entry::IcmpEcho::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enhanced")
    {
        if(enhanced == nullptr)
        {
            enhanced = std::make_shared<Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced>();
        }
        return enhanced;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Entry::IcmpEcho::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(enhanced != nullptr)
    {
        _children["enhanced"] = enhanced;
    }

    return _children;
}

void Native::Ip::Sla::Entry::IcmpEcho::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buckets-kept")
    {
        buckets_kept = value;
        buckets_kept.value_namespace = name_space;
        buckets_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distributions-of-statistics-kept")
    {
        distributions_of_statistics_kept = value;
        distributions_of_statistics_kept.value_namespace = name_space;
        distributions_of_statistics_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter")
    {
        filter = value;
        filter.value_namespace = name_space;
        filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours-of-statistics-kept")
    {
        hours_of_statistics_kept = value;
        hours_of_statistics_kept.value_namespace = name_space;
        hours_of_statistics_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lives-kept")
    {
        lives_kept = value;
        lives_kept.value_namespace = name_space;
        lives_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statistics-distribution-interval")
    {
        statistics_distribution_interval = value;
        statistics_distribution_interval.value_namespace = name_space;
        statistics_distribution_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::IcmpEcho::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buckets-kept")
    {
        buckets_kept.yfilter = yfilter;
    }
    if(value_path == "distributions-of-statistics-kept")
    {
        distributions_of_statistics_kept.yfilter = yfilter;
    }
    if(value_path == "filter")
    {
        filter.yfilter = yfilter;
    }
    if(value_path == "hours-of-statistics-kept")
    {
        hours_of_statistics_kept.yfilter = yfilter;
    }
    if(value_path == "lives-kept")
    {
        lives_kept.yfilter = yfilter;
    }
    if(value_path == "statistics-distribution-interval")
    {
        statistics_distribution_interval.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enhanced" || name == "buckets-kept" || name == "distributions-of-statistics-kept" || name == "filter" || name == "hours-of-statistics-kept" || name == "lives-kept" || name == "statistics-distribution-interval")
        return true;
    return false;
}

Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::Enhanced()
    :
    interval{YType::uint32, "interval"},
    buckets{YType::uint8, "buckets"}
{

    yang_name = "enhanced"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::~Enhanced()
{
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| buckets.is_set;
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(buckets.yfilter);
}

std::string Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enhanced";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (buckets.is_set || is_set(buckets.yfilter)) leaf_name_data.push_back(buckets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buckets")
    {
        buckets = value;
        buckets.value_namespace = name_space;
        buckets.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "buckets")
    {
        buckets.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::IcmpEcho::History::Enhanced::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "buckets")
        return true;
    return false;
}

Native::Ip::Sla::Entry::PathEcho::PathEcho()
    :
    dst_ip{YType::str, "dst-ip"},
    source_ip{YType::str, "source-ip"},
    paths_of_statistics_kept{YType::uint8, "paths-of-statistics-kept"},
    samples_of_history_kept{YType::uint8, "samples-of-history-kept"},
    hops_of_statistics_kept{YType::uint8, "hops-of-statistics-kept"}
{

    yang_name = "path-echo"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::Entry::PathEcho::~PathEcho()
{
}

bool Native::Ip::Sla::Entry::PathEcho::has_data() const
{
    if (is_presence_container) return true;
    return dst_ip.is_set
	|| source_ip.is_set
	|| paths_of_statistics_kept.is_set
	|| samples_of_history_kept.is_set
	|| hops_of_statistics_kept.is_set;
}

bool Native::Ip::Sla::Entry::PathEcho::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dst_ip.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(paths_of_statistics_kept.yfilter)
	|| ydk::is_set(samples_of_history_kept.yfilter)
	|| ydk::is_set(hops_of_statistics_kept.yfilter);
}

std::string Native::Ip::Sla::Entry::PathEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::PathEcho::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_ip.is_set || is_set(dst_ip.yfilter)) leaf_name_data.push_back(dst_ip.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (paths_of_statistics_kept.is_set || is_set(paths_of_statistics_kept.yfilter)) leaf_name_data.push_back(paths_of_statistics_kept.get_name_leafdata());
    if (samples_of_history_kept.is_set || is_set(samples_of_history_kept.yfilter)) leaf_name_data.push_back(samples_of_history_kept.get_name_leafdata());
    if (hops_of_statistics_kept.is_set || is_set(hops_of_statistics_kept.yfilter)) leaf_name_data.push_back(hops_of_statistics_kept.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Entry::PathEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Entry::PathEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Sla::Entry::PathEcho::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-ip")
    {
        dst_ip = value;
        dst_ip.value_namespace = name_space;
        dst_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths-of-statistics-kept")
    {
        paths_of_statistics_kept = value;
        paths_of_statistics_kept.value_namespace = name_space;
        paths_of_statistics_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "samples-of-history-kept")
    {
        samples_of_history_kept = value;
        samples_of_history_kept.value_namespace = name_space;
        samples_of_history_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hops-of-statistics-kept")
    {
        hops_of_statistics_kept = value;
        hops_of_statistics_kept.value_namespace = name_space;
        hops_of_statistics_kept.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::PathEcho::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-ip")
    {
        dst_ip.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "paths-of-statistics-kept")
    {
        paths_of_statistics_kept.yfilter = yfilter;
    }
    if(value_path == "samples-of-history-kept")
    {
        samples_of_history_kept.yfilter = yfilter;
    }
    if(value_path == "hops-of-statistics-kept")
    {
        hops_of_statistics_kept.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::PathEcho::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-ip" || name == "source-ip" || name == "paths-of-statistics-kept" || name == "samples-of-history-kept" || name == "hops-of-statistics-kept")
        return true;
    return false;
}

Native::Ip::Sla::Entry::PathJitter::PathJitter()
    :
    dst_ip{YType::str, "dst-ip"},
    source_ip{YType::str, "source-ip"},
    frequency{YType::uint32, "frequency"},
    lsr_path{YType::str, "lsr-path"},
    owner{YType::str, "owner"},
    request_data_size{YType::uint32, "request-data-size"},
    tag{YType::str, "tag"},
    threshold{YType::uint32, "threshold"},
    timeout{YType::uint32, "timeout"},
    tos{YType::uint8, "tos"},
    verify_data{YType::empty, "verify-data"},
    vrf{YType::str, "vrf"}
        ,
    default_(std::make_shared<Native::Ip::Sla::Entry::PathJitter::Default>())
{
    default_->parent = this;

    yang_name = "path-jitter"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::Entry::PathJitter::~PathJitter()
{
}

bool Native::Ip::Sla::Entry::PathJitter::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : lsr_path.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return dst_ip.is_set
	|| source_ip.is_set
	|| frequency.is_set
	|| owner.is_set
	|| request_data_size.is_set
	|| tag.is_set
	|| threshold.is_set
	|| timeout.is_set
	|| tos.is_set
	|| verify_data.is_set
	|| vrf.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Ip::Sla::Entry::PathJitter::has_operation() const
{
    for (auto const & leaf : lsr_path.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dst_ip.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(lsr_path.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(request_data_size.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(verify_data.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Ip::Sla::Entry::PathJitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-jitter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::PathJitter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_ip.is_set || is_set(dst_ip.yfilter)) leaf_name_data.push_back(dst_ip.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (request_data_size.is_set || is_set(request_data_size.yfilter)) leaf_name_data.push_back(request_data_size.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (verify_data.is_set || is_set(verify_data.yfilter)) leaf_name_data.push_back(verify_data.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    auto lsr_path_name_datas = lsr_path.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lsr_path_name_datas.begin(), lsr_path_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Entry::PathJitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Ip::Sla::Entry::PathJitter::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Entry::PathJitter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Ip::Sla::Entry::PathJitter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-ip")
    {
        dst_ip = value;
        dst_ip.value_namespace = name_space;
        dst_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-path")
    {
        lsr_path.append(value);
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-data-size")
    {
        request_data_size = value;
        request_data_size.value_namespace = name_space;
        request_data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-data")
    {
        verify_data = value;
        verify_data.value_namespace = name_space;
        verify_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::PathJitter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-ip")
    {
        dst_ip.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "lsr-path")
    {
        lsr_path.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "request-data-size")
    {
        request_data_size.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "verify-data")
    {
        verify_data.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::PathJitter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "dst-ip" || name == "source-ip" || name == "frequency" || name == "lsr-path" || name == "owner" || name == "request-data-size" || name == "tag" || name == "threshold" || name == "timeout" || name == "tos" || name == "verify-data" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Sla::Entry::PathJitter::Default::Default()
    :
    frequency{YType::empty, "frequency"},
    lsr_path{YType::empty, "lsr-path"},
    owner{YType::empty, "owner"},
    request_data_size{YType::empty, "request-data-size"},
    tag{YType::empty, "tag"},
    threshold{YType::empty, "threshold"},
    timeout{YType::empty, "timeout"},
    tos{YType::empty, "tos"},
    verify_data{YType::empty, "verify-data"},
    vrf{YType::empty, "vrf"}
{

    yang_name = "default"; yang_parent_name = "path-jitter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::Entry::PathJitter::Default::~Default()
{
}

bool Native::Ip::Sla::Entry::PathJitter::Default::has_data() const
{
    if (is_presence_container) return true;
    return frequency.is_set
	|| lsr_path.is_set
	|| owner.is_set
	|| request_data_size.is_set
	|| tag.is_set
	|| threshold.is_set
	|| timeout.is_set
	|| tos.is_set
	|| verify_data.is_set
	|| vrf.is_set;
}

bool Native::Ip::Sla::Entry::PathJitter::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frequency.yfilter)
	|| ydk::is_set(lsr_path.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(request_data_size.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(verify_data.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Ip::Sla::Entry::PathJitter::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::PathJitter::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());
    if (lsr_path.is_set || is_set(lsr_path.yfilter)) leaf_name_data.push_back(lsr_path.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (request_data_size.is_set || is_set(request_data_size.yfilter)) leaf_name_data.push_back(request_data_size.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (verify_data.is_set || is_set(verify_data.yfilter)) leaf_name_data.push_back(verify_data.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Entry::PathJitter::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Entry::PathJitter::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Sla::Entry::PathJitter::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-path")
    {
        lsr_path = value;
        lsr_path.value_namespace = name_space;
        lsr_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-data-size")
    {
        request_data_size = value;
        request_data_size.value_namespace = name_space;
        request_data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verify-data")
    {
        verify_data = value;
        verify_data.value_namespace = name_space;
        verify_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::PathJitter::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
    if(value_path == "lsr-path")
    {
        lsr_path.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "request-data-size")
    {
        request_data_size.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "verify-data")
    {
        verify_data.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::PathJitter::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frequency" || name == "lsr-path" || name == "owner" || name == "request-data-size" || name == "tag" || name == "threshold" || name == "timeout" || name == "tos" || name == "verify-data" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Sla::Entry::UdpEcho::UdpEcho()
    :
    dest_addr{YType::str, "dest-addr"},
    dest_port{YType::uint16, "dest-port"},
    source_ip{YType::str, "source-ip"},
    source_port{YType::uint16, "source-port"}
{

    yang_name = "udp-echo"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::Entry::UdpEcho::~UdpEcho()
{
}

bool Native::Ip::Sla::Entry::UdpEcho::has_data() const
{
    if (is_presence_container) return true;
    return dest_addr.is_set
	|| dest_port.is_set
	|| source_ip.is_set
	|| source_port.is_set;
}

bool Native::Ip::Sla::Entry::UdpEcho::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest_addr.yfilter)
	|| ydk::is_set(dest_port.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string Native::Ip::Sla::Entry::UdpEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::UdpEcho::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_addr.is_set || is_set(dest_addr.yfilter)) leaf_name_data.push_back(dest_addr.get_name_leafdata());
    if (dest_port.is_set || is_set(dest_port.yfilter)) leaf_name_data.push_back(dest_port.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Entry::UdpEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Entry::UdpEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Sla::Entry::UdpEcho::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest-addr")
    {
        dest_addr = value;
        dest_addr.value_namespace = name_space;
        dest_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-port")
    {
        dest_port = value;
        dest_port.value_namespace = name_space;
        dest_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::UdpEcho::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest-addr")
    {
        dest_addr.yfilter = yfilter;
    }
    if(value_path == "dest-port")
    {
        dest_port.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::UdpEcho::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-addr" || name == "dest-port" || name == "source-ip" || name == "source-port")
        return true;
    return false;
}

Native::Ip::Sla::Entry::UdpJitter::UdpJitter()
    :
    dest_addr{YType::str, "dest-addr"},
    portno{YType::uint16, "portno"},
    codec{YType::enumeration, "codec"},
    advantage_factor{YType::uint16, "advantage-factor"},
    codec_interval{YType::uint32, "codec-interval"},
    codec_numpackets{YType::uint32, "codec-numpackets"},
    codec_size{YType::uint16, "codec-size"},
    num_packets{YType::uint16, "num-packets"},
    interval{YType::uint16, "interval"},
    source_ip{YType::str, "source-ip"},
    source_port{YType::uint16, "source-port"},
    control{YType::enumeration, "control"},
    owner{YType::str, "owner"},
    request_data_size{YType::uint16, "request-data-size"},
    tag{YType::str, "tag"},
    threshold{YType::uint16, "threshold"},
    timeout{YType::uint32, "timeout"},
    tos{YType::uint8, "tos"},
    traffic_class{YType::uint8, "traffic-class"},
    vrf{YType::str, "vrf"}
        ,
    history(std::make_shared<Native::Ip::Sla::Entry::UdpJitter::History>())
{
    history->parent = this;

    yang_name = "udp-jitter"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::Entry::UdpJitter::~UdpJitter()
{
}

bool Native::Ip::Sla::Entry::UdpJitter::has_data() const
{
    if (is_presence_container) return true;
    return dest_addr.is_set
	|| portno.is_set
	|| codec.is_set
	|| advantage_factor.is_set
	|| codec_interval.is_set
	|| codec_numpackets.is_set
	|| codec_size.is_set
	|| num_packets.is_set
	|| interval.is_set
	|| source_ip.is_set
	|| source_port.is_set
	|| control.is_set
	|| owner.is_set
	|| request_data_size.is_set
	|| tag.is_set
	|| threshold.is_set
	|| timeout.is_set
	|| tos.is_set
	|| traffic_class.is_set
	|| vrf.is_set
	|| (history !=  nullptr && history->has_data());
}

bool Native::Ip::Sla::Entry::UdpJitter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest_addr.yfilter)
	|| ydk::is_set(portno.yfilter)
	|| ydk::is_set(codec.yfilter)
	|| ydk::is_set(advantage_factor.yfilter)
	|| ydk::is_set(codec_interval.yfilter)
	|| ydk::is_set(codec_numpackets.yfilter)
	|| ydk::is_set(codec_size.yfilter)
	|| ydk::is_set(num_packets.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(control.yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(request_data_size.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(traffic_class.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (history !=  nullptr && history->has_operation());
}

std::string Native::Ip::Sla::Entry::UdpJitter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-jitter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::UdpJitter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_addr.is_set || is_set(dest_addr.yfilter)) leaf_name_data.push_back(dest_addr.get_name_leafdata());
    if (portno.is_set || is_set(portno.yfilter)) leaf_name_data.push_back(portno.get_name_leafdata());
    if (codec.is_set || is_set(codec.yfilter)) leaf_name_data.push_back(codec.get_name_leafdata());
    if (advantage_factor.is_set || is_set(advantage_factor.yfilter)) leaf_name_data.push_back(advantage_factor.get_name_leafdata());
    if (codec_interval.is_set || is_set(codec_interval.yfilter)) leaf_name_data.push_back(codec_interval.get_name_leafdata());
    if (codec_numpackets.is_set || is_set(codec_numpackets.yfilter)) leaf_name_data.push_back(codec_numpackets.get_name_leafdata());
    if (codec_size.is_set || is_set(codec_size.yfilter)) leaf_name_data.push_back(codec_size.get_name_leafdata());
    if (num_packets.is_set || is_set(num_packets.yfilter)) leaf_name_data.push_back(num_packets.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (control.is_set || is_set(control.yfilter)) leaf_name_data.push_back(control.get_name_leafdata());
    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (request_data_size.is_set || is_set(request_data_size.yfilter)) leaf_name_data.push_back(request_data_size.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (traffic_class.is_set || is_set(traffic_class.yfilter)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Entry::UdpJitter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Ip::Sla::Entry::UdpJitter::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Entry::UdpJitter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(history != nullptr)
    {
        _children["history"] = history;
    }

    return _children;
}

void Native::Ip::Sla::Entry::UdpJitter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest-addr")
    {
        dest_addr = value;
        dest_addr.value_namespace = name_space;
        dest_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "portno")
    {
        portno = value;
        portno.value_namespace = name_space;
        portno.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "codec")
    {
        codec = value;
        codec.value_namespace = name_space;
        codec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advantage-factor")
    {
        advantage_factor = value;
        advantage_factor.value_namespace = name_space;
        advantage_factor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "codec-interval")
    {
        codec_interval = value;
        codec_interval.value_namespace = name_space;
        codec_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "codec-numpackets")
    {
        codec_numpackets = value;
        codec_numpackets.value_namespace = name_space;
        codec_numpackets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "codec-size")
    {
        codec_size = value;
        codec_size.value_namespace = name_space;
        codec_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-packets")
    {
        num_packets = value;
        num_packets.value_namespace = name_space;
        num_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control")
    {
        control = value;
        control.value_namespace = name_space;
        control.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-data-size")
    {
        request_data_size = value;
        request_data_size.value_namespace = name_space;
        request_data_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traffic-class")
    {
        traffic_class = value;
        traffic_class.value_namespace = name_space;
        traffic_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::UdpJitter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest-addr")
    {
        dest_addr.yfilter = yfilter;
    }
    if(value_path == "portno")
    {
        portno.yfilter = yfilter;
    }
    if(value_path == "codec")
    {
        codec.yfilter = yfilter;
    }
    if(value_path == "advantage-factor")
    {
        advantage_factor.yfilter = yfilter;
    }
    if(value_path == "codec-interval")
    {
        codec_interval.yfilter = yfilter;
    }
    if(value_path == "codec-numpackets")
    {
        codec_numpackets.yfilter = yfilter;
    }
    if(value_path == "codec-size")
    {
        codec_size.yfilter = yfilter;
    }
    if(value_path == "num-packets")
    {
        num_packets.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "control")
    {
        control.yfilter = yfilter;
    }
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "request-data-size")
    {
        request_data_size.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "traffic-class")
    {
        traffic_class.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::UdpJitter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history" || name == "dest-addr" || name == "portno" || name == "codec" || name == "advantage-factor" || name == "codec-interval" || name == "codec-numpackets" || name == "codec-size" || name == "num-packets" || name == "interval" || name == "source-ip" || name == "source-port" || name == "control" || name == "owner" || name == "request-data-size" || name == "tag" || name == "threshold" || name == "timeout" || name == "tos" || name == "traffic-class" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Sla::Entry::UdpJitter::History::History()
    :
    distributions_of_statistics_kept{YType::uint8, "distributions-of-statistics-kept"},
    hours_of_statistics_kept{YType::uint8, "hours-of-statistics-kept"},
    statistics_distribution_interval{YType::uint8, "statistics-distribution-interval"}
        ,
    enhanced(std::make_shared<Native::Ip::Sla::Entry::UdpJitter::History::Enhanced>())
{
    enhanced->parent = this;

    yang_name = "history"; yang_parent_name = "udp-jitter"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::Entry::UdpJitter::History::~History()
{
}

bool Native::Ip::Sla::Entry::UdpJitter::History::has_data() const
{
    if (is_presence_container) return true;
    return distributions_of_statistics_kept.is_set
	|| hours_of_statistics_kept.is_set
	|| statistics_distribution_interval.is_set
	|| (enhanced !=  nullptr && enhanced->has_data());
}

bool Native::Ip::Sla::Entry::UdpJitter::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distributions_of_statistics_kept.yfilter)
	|| ydk::is_set(hours_of_statistics_kept.yfilter)
	|| ydk::is_set(statistics_distribution_interval.yfilter)
	|| (enhanced !=  nullptr && enhanced->has_operation());
}

std::string Native::Ip::Sla::Entry::UdpJitter::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::UdpJitter::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distributions_of_statistics_kept.is_set || is_set(distributions_of_statistics_kept.yfilter)) leaf_name_data.push_back(distributions_of_statistics_kept.get_name_leafdata());
    if (hours_of_statistics_kept.is_set || is_set(hours_of_statistics_kept.yfilter)) leaf_name_data.push_back(hours_of_statistics_kept.get_name_leafdata());
    if (statistics_distribution_interval.is_set || is_set(statistics_distribution_interval.yfilter)) leaf_name_data.push_back(statistics_distribution_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Entry::UdpJitter::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enhanced")
    {
        if(enhanced == nullptr)
        {
            enhanced = std::make_shared<Native::Ip::Sla::Entry::UdpJitter::History::Enhanced>();
        }
        return enhanced;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Entry::UdpJitter::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(enhanced != nullptr)
    {
        _children["enhanced"] = enhanced;
    }

    return _children;
}

void Native::Ip::Sla::Entry::UdpJitter::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distributions-of-statistics-kept")
    {
        distributions_of_statistics_kept = value;
        distributions_of_statistics_kept.value_namespace = name_space;
        distributions_of_statistics_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hours-of-statistics-kept")
    {
        hours_of_statistics_kept = value;
        hours_of_statistics_kept.value_namespace = name_space;
        hours_of_statistics_kept.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statistics-distribution-interval")
    {
        statistics_distribution_interval = value;
        statistics_distribution_interval.value_namespace = name_space;
        statistics_distribution_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::UdpJitter::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distributions-of-statistics-kept")
    {
        distributions_of_statistics_kept.yfilter = yfilter;
    }
    if(value_path == "hours-of-statistics-kept")
    {
        hours_of_statistics_kept.yfilter = yfilter;
    }
    if(value_path == "statistics-distribution-interval")
    {
        statistics_distribution_interval.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::UdpJitter::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enhanced" || name == "distributions-of-statistics-kept" || name == "hours-of-statistics-kept" || name == "statistics-distribution-interval")
        return true;
    return false;
}

Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::Enhanced()
    :
    interval{YType::uint16, "interval"},
    buckets{YType::uint8, "buckets"}
{

    yang_name = "enhanced"; yang_parent_name = "history"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::~Enhanced()
{
}

bool Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| buckets.is_set;
}

bool Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(buckets.yfilter);
}

std::string Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enhanced";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (buckets.is_set || is_set(buckets.yfilter)) leaf_name_data.push_back(buckets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buckets")
    {
        buckets = value;
        buckets.value_namespace = name_space;
        buckets.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "buckets")
    {
        buckets.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::UdpJitter::History::Enhanced::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "buckets")
        return true;
    return false;
}

Native::Ip::Sla::Entry::Http::Http()
    :
    owner{YType::str, "owner"},
    tag{YType::str, "tag"},
    vrf{YType::str, "vrf"}
        ,
    get(std::make_shared<Native::Ip::Sla::Entry::Http::Get>())
    , raw(std::make_shared<Native::Ip::Sla::Entry::Http::Raw>())
{
    get->parent = this;
    raw->parent = this;

    yang_name = "http"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::Entry::Http::~Http()
{
}

bool Native::Ip::Sla::Entry::Http::has_data() const
{
    if (is_presence_container) return true;
    return owner.is_set
	|| tag.is_set
	|| vrf.is_set
	|| (get !=  nullptr && get->has_data())
	|| (raw !=  nullptr && raw->has_data());
}

bool Native::Ip::Sla::Entry::Http::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(owner.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (get !=  nullptr && get->has_operation())
	|| (raw !=  nullptr && raw->has_operation());
}

std::string Native::Ip::Sla::Entry::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::Http::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (owner.is_set || is_set(owner.yfilter)) leaf_name_data.push_back(owner.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Entry::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "get")
    {
        if(get == nullptr)
        {
            get = std::make_shared<Native::Ip::Sla::Entry::Http::Get>();
        }
        return get;
    }

    if(child_yang_name == "raw")
    {
        if(raw == nullptr)
        {
            raw = std::make_shared<Native::Ip::Sla::Entry::Http::Raw>();
        }
        return raw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Entry::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(get != nullptr)
    {
        _children["get"] = get;
    }

    if(raw != nullptr)
    {
        _children["raw"] = raw;
    }

    return _children;
}

void Native::Ip::Sla::Entry::Http::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "owner")
    {
        owner = value;
        owner.value_namespace = name_space;
        owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::Http::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "owner")
    {
        owner.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::Http::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "get" || name == "raw" || name == "owner" || name == "tag" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Sla::Entry::Http::Get::Get()
    :
    url{YType::str, "url"},
    source_ip{YType::str, "source-ip"},
    source_port{YType::uint16, "source-port"},
    name_server{YType::str, "name-server"}
{

    yang_name = "get"; yang_parent_name = "http"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::Entry::Http::Get::~Get()
{
}

bool Native::Ip::Sla::Entry::Http::Get::has_data() const
{
    if (is_presence_container) return true;
    return url.is_set
	|| source_ip.is_set
	|| source_port.is_set
	|| name_server.is_set;
}

bool Native::Ip::Sla::Entry::Http::Get::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(url.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(name_server.yfilter);
}

std::string Native::Ip::Sla::Entry::Http::Get::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "get";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::Http::Get::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (name_server.is_set || is_set(name_server.yfilter)) leaf_name_data.push_back(name_server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Entry::Http::Get::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Entry::Http::Get::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Sla::Entry::Http::Get::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-server")
    {
        name_server = value;
        name_server.value_namespace = name_space;
        name_server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::Http::Get::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "name-server")
    {
        name_server.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::Http::Get::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "source-ip" || name == "source-port" || name == "name-server")
        return true;
    return false;
}

Native::Ip::Sla::Entry::Http::Raw::Raw()
    :
    url{YType::str, "url"},
    source_ip{YType::str, "source-ip"},
    source_port{YType::uint16, "source-port"},
    name_server{YType::str, "name-server"}
{

    yang_name = "raw"; yang_parent_name = "http"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::Entry::Http::Raw::~Raw()
{
}

bool Native::Ip::Sla::Entry::Http::Raw::has_data() const
{
    if (is_presence_container) return true;
    return url.is_set
	|| source_ip.is_set
	|| source_port.is_set
	|| name_server.is_set;
}

bool Native::Ip::Sla::Entry::Http::Raw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(url.yfilter)
	|| ydk::is_set(source_ip.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(name_server.yfilter);
}

std::string Native::Ip::Sla::Entry::Http::Raw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "raw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::Http::Raw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (name_server.is_set || is_set(name_server.yfilter)) leaf_name_data.push_back(name_server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Entry::Http::Raw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Entry::Http::Raw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Sla::Entry::Http::Raw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name-server")
    {
        name_server = value;
        name_server.value_namespace = name_space;
        name_server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::Http::Raw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "name-server")
    {
        name_server.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::Http::Raw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "url" || name == "source-ip" || name == "source-port" || name == "name-server")
        return true;
    return false;
}

Native::Ip::Sla::Entry::Dhcp::Dhcp()
    :
    dst_ip{YType::str, "dst-ip"},
    source_ip{YType::str, "source-ip"}
{

    yang_name = "dhcp"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::Entry::Dhcp::~Dhcp()
{
}

bool Native::Ip::Sla::Entry::Dhcp::has_data() const
{
    if (is_presence_container) return true;
    return dst_ip.is_set
	|| source_ip.is_set;
}

bool Native::Ip::Sla::Entry::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dst_ip.yfilter)
	|| ydk::is_set(source_ip.yfilter);
}

std::string Native::Ip::Sla::Entry::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_ip.is_set || is_set(dst_ip.yfilter)) leaf_name_data.push_back(dst_ip.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Entry::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Entry::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Sla::Entry::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-ip")
    {
        dst_ip = value;
        dst_ip.value_namespace = name_space;
        dst_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-ip")
    {
        dst_ip.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-ip" || name == "source-ip")
        return true;
    return false;
}

Native::Ip::Sla::Entry::Ethernet::Ethernet()
    :
    y1731(std::make_shared<Native::Ip::Sla::Entry::Ethernet::Y1731>())
    , aggregate(std::make_shared<Native::Ip::Sla::Entry::Ethernet::Aggregate>())
    , history(std::make_shared<Native::Ip::Sla::Entry::Ethernet::History>())
{
    y1731->parent = this;
    aggregate->parent = this;
    history->parent = this;

    yang_name = "ethernet"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::Entry::Ethernet::~Ethernet()
{
}

bool Native::Ip::Sla::Entry::Ethernet::has_data() const
{
    if (is_presence_container) return true;
    return (y1731 !=  nullptr && y1731->has_data())
	|| (aggregate !=  nullptr && aggregate->has_data())
	|| (history !=  nullptr && history->has_data());
}

bool Native::Ip::Sla::Entry::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| (y1731 !=  nullptr && y1731->has_operation())
	|| (aggregate !=  nullptr && aggregate->has_operation())
	|| (history !=  nullptr && history->has_operation());
}

std::string Native::Ip::Sla::Entry::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Entry::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "y1731")
    {
        if(y1731 == nullptr)
        {
            y1731 = std::make_shared<Native::Ip::Sla::Entry::Ethernet::Y1731>();
        }
        return y1731;
    }

    if(child_yang_name == "aggregate")
    {
        if(aggregate == nullptr)
        {
            aggregate = std::make_shared<Native::Ip::Sla::Entry::Ethernet::Aggregate>();
        }
        return aggregate;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Ip::Sla::Entry::Ethernet::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Entry::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(y1731 != nullptr)
    {
        _children["y1731"] = y1731;
    }

    if(aggregate != nullptr)
    {
        _children["aggregate"] = aggregate;
    }

    if(history != nullptr)
    {
        _children["history"] = history;
    }

    return _children;
}

void Native::Ip::Sla::Entry::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Sla::Entry::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Sla::Entry::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "y1731" || name == "aggregate" || name == "history")
        return true;
    return false;
}

Native::Ip::Sla::Entry::Ethernet::Y1731::Y1731()
    :
    delay(std::make_shared<Native::Ip::Sla::Entry::Ethernet::Y1731::Delay>())
{
    delay->parent = this;

    yang_name = "y1731"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::Entry::Ethernet::Y1731::~Y1731()
{
}

bool Native::Ip::Sla::Entry::Ethernet::Y1731::has_data() const
{
    if (is_presence_container) return true;
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Ip::Sla::Entry::Ethernet::Y1731::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Ip::Sla::Entry::Ethernet::Y1731::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "y1731";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::Ethernet::Y1731::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Entry::Ethernet::Y1731::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Ip::Sla::Entry::Ethernet::Y1731::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Entry::Ethernet::Y1731::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(delay != nullptr)
    {
        _children["delay"] = delay;
    }

    return _children;
}

void Native::Ip::Sla::Entry::Ethernet::Y1731::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Sla::Entry::Ethernet::Y1731::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Sla::Entry::Ethernet::Y1731::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::Delay()
    :
    name{YType::enumeration, "name"},
    burst{YType::empty, "burst"},
    domain{YType::str, "domain"},
    evc{YType::str, "evc"},
    vlan{YType::uint16, "vlan"},
    mac_address{YType::str, "mac-address"},
    mpid{YType::uint16, "mpid"},
    cos{YType::uint8, "cos"}
        ,
    source(std::make_shared<Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::Source>())
{
    source->parent = this;

    yang_name = "delay"; yang_parent_name = "y1731"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::~Delay()
{
}

bool Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| burst.is_set
	|| domain.is_set
	|| evc.is_set
	|| vlan.is_set
	|| mac_address.is_set
	|| mpid.is_set
	|| cos.is_set
	|| (source !=  nullptr && source->has_data());
}

bool Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(evc.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mpid.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (evc.is_set || is_set(evc.yfilter)) leaf_name_data.push_back(evc.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mpid.is_set || is_set(mpid.yfilter)) leaf_name_data.push_back(mpid.get_name_leafdata());
    if (cos.is_set || is_set(cos.yfilter)) leaf_name_data.push_back(cos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source != nullptr)
    {
        _children["source"] = source;
    }

    return _children;
}

void Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evc")
    {
        evc = value;
        evc.value_namespace = name_space;
        evc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpid")
    {
        mpid = value;
        mpid.value_namespace = name_space;
        mpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cos")
    {
        cos = value;
        cos.value_namespace = name_space;
        cos.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "evc")
    {
        evc.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mpid")
    {
        mpid.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "name" || name == "burst" || name == "domain" || name == "evc" || name == "vlan" || name == "mac-address" || name == "mpid" || name == "cos")
        return true;
    return false;
}

Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::Source::Source()
    :
    mac_address{YType::str, "mac-address"},
    mpid{YType::uint16, "mpid"}
{

    yang_name = "source"; yang_parent_name = "delay"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::Source::~Source()
{
}

bool Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::Source::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| mpid.is_set;
}

bool Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(mpid.yfilter);
}

std::string Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mpid.is_set || is_set(mpid.yfilter)) leaf_name_data.push_back(mpid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpid")
    {
        mpid = value;
        mpid.value_namespace = name_space;
        mpid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "mpid")
    {
        mpid.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "mpid")
        return true;
    return false;
}

Native::Ip::Sla::Entry::Ethernet::Aggregate::Aggregate()
    :
    interval{YType::uint32, "interval"}
{

    yang_name = "aggregate"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::Entry::Ethernet::Aggregate::~Aggregate()
{
}

bool Native::Ip::Sla::Entry::Ethernet::Aggregate::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set;
}

bool Native::Ip::Sla::Entry::Ethernet::Aggregate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Ip::Sla::Entry::Ethernet::Aggregate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::Ethernet::Aggregate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Entry::Ethernet::Aggregate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Entry::Ethernet::Aggregate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Sla::Entry::Ethernet::Aggregate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::Ethernet::Aggregate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::Ethernet::Aggregate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Ip::Sla::Entry::Ethernet::History::History()
    :
    interval{YType::uint8, "interval"}
{

    yang_name = "history"; yang_parent_name = "ethernet"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::Entry::Ethernet::History::~History()
{
}

bool Native::Ip::Sla::Entry::Ethernet::History::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set;
}

bool Native::Ip::Sla::Entry::Ethernet::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Ip::Sla::Entry::Ethernet::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Entry::Ethernet::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Entry::Ethernet::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Entry::Ethernet::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Sla::Entry::Ethernet::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Entry::Ethernet::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Entry::Ethernet::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Ip::Sla::Enable::Enable()
    :
    reaction_alerts{YType::empty, "reaction-alerts"}
{

    yang_name = "enable"; yang_parent_name = "sla"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Sla::Enable::~Enable()
{
}

bool Native::Ip::Sla::Enable::has_data() const
{
    if (is_presence_container) return true;
    return reaction_alerts.is_set;
}

bool Native::Ip::Sla::Enable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reaction_alerts.yfilter);
}

std::string Native::Ip::Sla::Enable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reaction_alerts.is_set || is_set(reaction_alerts.yfilter)) leaf_name_data.push_back(reaction_alerts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Sla::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reaction-alerts")
    {
        reaction_alerts = value;
        reaction_alerts.value_namespace = name_space;
        reaction_alerts.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reaction-alerts")
    {
        reaction_alerts.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reaction-alerts")
        return true;
    return false;
}

Native::Ip::Sla::Responder::Responder()
    :
    udp_echo(std::make_shared<Native::Ip::Sla::Responder::UdpEcho>())
    , tcp_connect(std::make_shared<Native::Ip::Sla::Responder::TcpConnect>())
{
    udp_echo->parent = this;
    tcp_connect->parent = this;

    yang_name = "responder"; yang_parent_name = "sla"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Sla::Responder::~Responder()
{
}

bool Native::Ip::Sla::Responder::has_data() const
{
    if (is_presence_container) return true;
    return (udp_echo !=  nullptr && udp_echo->has_data())
	|| (tcp_connect !=  nullptr && tcp_connect->has_data());
}

bool Native::Ip::Sla::Responder::has_operation() const
{
    return is_set(yfilter)
	|| (udp_echo !=  nullptr && udp_echo->has_operation())
	|| (tcp_connect !=  nullptr && tcp_connect->has_operation());
}

std::string Native::Ip::Sla::Responder::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Responder::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "responder";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Responder::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Responder::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udp-echo")
    {
        if(udp_echo == nullptr)
        {
            udp_echo = std::make_shared<Native::Ip::Sla::Responder::UdpEcho>();
        }
        return udp_echo;
    }

    if(child_yang_name == "tcp-connect")
    {
        if(tcp_connect == nullptr)
        {
            tcp_connect = std::make_shared<Native::Ip::Sla::Responder::TcpConnect>();
        }
        return tcp_connect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Responder::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(udp_echo != nullptr)
    {
        _children["udp-echo"] = udp_echo;
    }

    if(tcp_connect != nullptr)
    {
        _children["tcp-connect"] = tcp_connect;
    }

    return _children;
}

void Native::Ip::Sla::Responder::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Sla::Responder::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Sla::Responder::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp-echo" || name == "tcp-connect")
        return true;
    return false;
}

Native::Ip::Sla::Responder::UdpEcho::UdpEcho()
    :
    port{YType::uint16, "port"}
        ,
    ipaddress(this, {"host"})
{

    yang_name = "udp-echo"; yang_parent_name = "responder"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Sla::Responder::UdpEcho::~UdpEcho()
{
}

bool Native::Ip::Sla::Responder::UdpEcho::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipaddress.len(); index++)
    {
        if(ipaddress[index]->has_data())
            return true;
    }
    return port.is_set;
}

bool Native::Ip::Sla::Responder::UdpEcho::has_operation() const
{
    for (std::size_t index=0; index<ipaddress.len(); index++)
    {
        if(ipaddress[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Ip::Sla::Responder::UdpEcho::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/responder/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Responder::UdpEcho::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp-echo";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Responder::UdpEcho::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Responder::UdpEcho::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipaddress")
    {
        auto ent_ = std::make_shared<Native::Ip::Sla::Responder::UdpEcho::Ipaddress>();
        ent_->parent = this;
        ipaddress.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Responder::UdpEcho::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipaddress.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Sla::Responder::UdpEcho::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Responder::UdpEcho::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Responder::UdpEcho::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipaddress" || name == "port")
        return true;
    return false;
}

Native::Ip::Sla::Responder::UdpEcho::Ipaddress::Ipaddress()
    :
    host{YType::str, "host"},
    port{YType::uint16, "port"}
{

    yang_name = "ipaddress"; yang_parent_name = "udp-echo"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Sla::Responder::UdpEcho::Ipaddress::~Ipaddress()
{
}

bool Native::Ip::Sla::Responder::UdpEcho::Ipaddress::has_data() const
{
    if (is_presence_container) return true;
    return host.is_set
	|| port.is_set;
}

bool Native::Ip::Sla::Responder::UdpEcho::Ipaddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Ip::Sla::Responder::UdpEcho::Ipaddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/responder/udp-echo/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Responder::UdpEcho::Ipaddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipaddress";
    ADD_KEY_TOKEN(host, "host");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Responder::UdpEcho::Ipaddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Responder::UdpEcho::Ipaddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Responder::UdpEcho::Ipaddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Sla::Responder::UdpEcho::Ipaddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Responder::UdpEcho::Ipaddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Responder::UdpEcho::Ipaddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "port")
        return true;
    return false;
}

Native::Ip::Sla::Responder::TcpConnect::TcpConnect()
    :
    port{YType::uint16, "port"}
        ,
    ipaddress(this, {"host"})
{

    yang_name = "tcp-connect"; yang_parent_name = "responder"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Sla::Responder::TcpConnect::~TcpConnect()
{
}

bool Native::Ip::Sla::Responder::TcpConnect::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipaddress.len(); index++)
    {
        if(ipaddress[index]->has_data())
            return true;
    }
    return port.is_set;
}

bool Native::Ip::Sla::Responder::TcpConnect::has_operation() const
{
    for (std::size_t index=0; index<ipaddress.len(); index++)
    {
        if(ipaddress[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Ip::Sla::Responder::TcpConnect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/responder/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Responder::TcpConnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-connect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Responder::TcpConnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Responder::TcpConnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipaddress")
    {
        auto ent_ = std::make_shared<Native::Ip::Sla::Responder::TcpConnect::Ipaddress>();
        ent_->parent = this;
        ipaddress.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Responder::TcpConnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipaddress.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Sla::Responder::TcpConnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Responder::TcpConnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Responder::TcpConnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipaddress" || name == "port")
        return true;
    return false;
}

Native::Ip::Sla::Responder::TcpConnect::Ipaddress::Ipaddress()
    :
    host{YType::str, "host"},
    port{YType::uint16, "port"}
{

    yang_name = "ipaddress"; yang_parent_name = "tcp-connect"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Sla::Responder::TcpConnect::Ipaddress::~Ipaddress()
{
}

bool Native::Ip::Sla::Responder::TcpConnect::Ipaddress::has_data() const
{
    if (is_presence_container) return true;
    return host.is_set
	|| port.is_set;
}

bool Native::Ip::Sla::Responder::TcpConnect::Ipaddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Ip::Sla::Responder::TcpConnect::Ipaddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/responder/tcp-connect/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Responder::TcpConnect::Ipaddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipaddress";
    ADD_KEY_TOKEN(host, "host");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Responder::TcpConnect::Ipaddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Responder::TcpConnect::Ipaddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Responder::TcpConnect::Ipaddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Sla::Responder::TcpConnect::Ipaddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Responder::TcpConnect::Ipaddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Responder::TcpConnect::Ipaddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host" || name == "port")
        return true;
    return false;
}

Native::Ip::Sla::Logging::Logging()
    :
    traps{YType::empty, "traps"}
{

    yang_name = "logging"; yang_parent_name = "sla"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Sla::Logging::~Logging()
{
}

bool Native::Ip::Sla::Logging::has_data() const
{
    if (is_presence_container) return true;
    return traps.is_set;
}

bool Native::Ip::Sla::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traps.yfilter);
}

std::string Native::Ip::Sla::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traps.is_set || is_set(traps.yfilter)) leaf_name_data.push_back(traps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Sla::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traps")
    {
        traps = value;
        traps.value_namespace = name_space;
        traps.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traps")
    {
        traps.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traps")
        return true;
    return false;
}

Native::Ip::Sla::Group::Group()
    :
    schedule(this, {"entry_number"})
{

    yang_name = "group"; yang_parent_name = "sla"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Sla::Group::~Group()
{
}

bool Native::Ip::Sla::Group::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<schedule.len(); index++)
    {
        if(schedule[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Sla::Group::has_operation() const
{
    for (std::size_t index=0; index<schedule.len(); index++)
    {
        if(schedule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Sla::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "schedule")
    {
        auto ent_ = std::make_shared<Native::Ip::Sla::Group::Schedule>();
        ent_->parent = this;
        schedule.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : schedule.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Sla::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Sla::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Sla::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedule")
        return true;
    return false;
}

Native::Ip::Sla::Group::Schedule::Schedule()
    :
    entry_number{YType::uint32, "entry-number"}
        ,
    probe_ids(this, {"word"})
{

    yang_name = "schedule"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Sla::Group::Schedule::~Schedule()
{
}

bool Native::Ip::Sla::Group::Schedule::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<probe_ids.len(); index++)
    {
        if(probe_ids[index]->has_data())
            return true;
    }
    return entry_number.is_set;
}

bool Native::Ip::Sla::Group::Schedule::has_operation() const
{
    for (std::size_t index=0; index<probe_ids.len(); index++)
    {
        if(probe_ids[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(entry_number.yfilter);
}

std::string Native::Ip::Sla::Group::Schedule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Group::Schedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule";
    ADD_KEY_TOKEN(entry_number, "entry-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Group::Schedule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_number.is_set || is_set(entry_number.yfilter)) leaf_name_data.push_back(entry_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Group::Schedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "probe-ids")
    {
        auto ent_ = std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds>();
        ent_->parent = this;
        probe_ids.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Group::Schedule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : probe_ids.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Sla::Group::Schedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-number")
    {
        entry_number = value;
        entry_number.value_namespace = name_space;
        entry_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Group::Schedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-number")
    {
        entry_number.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Group::Schedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probe-ids" || name == "entry-number")
        return true;
    return false;
}

Native::Ip::Sla::Group::Schedule::ProbeIds::ProbeIds()
    :
    word{YType::str, "word"}
        ,
    schedule_period(std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod>())
{
    schedule_period->parent = this;

    yang_name = "probe-ids"; yang_parent_name = "schedule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::Group::Schedule::ProbeIds::~ProbeIds()
{
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::has_data() const
{
    if (is_presence_container) return true;
    return word.is_set
	|| (schedule_period !=  nullptr && schedule_period->has_data());
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| (schedule_period !=  nullptr && schedule_period->has_operation());
}

std::string Native::Ip::Sla::Group::Schedule::ProbeIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe-ids";
    ADD_KEY_TOKEN(word, "word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Group::Schedule::ProbeIds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Group::Schedule::ProbeIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "schedule-period")
    {
        if(schedule_period == nullptr)
        {
            schedule_period = std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod>();
        }
        return schedule_period;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Group::Schedule::ProbeIds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(schedule_period != nullptr)
    {
        _children["schedule-period"] = schedule_period;
    }

    return _children;
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedule-period" || name == "word")
        return true;
    return false;
}

Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::SchedulePeriod()
    :
    seconds{YType::uint32, "seconds"},
    life{YType::str, "life"}
        ,
    frequency(std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency>())
    , start_time(std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime>())
{
    frequency->parent = this;
    start_time->parent = this;

    yang_name = "schedule-period"; yang_parent_name = "probe-ids"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::~SchedulePeriod()
{
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| life.is_set
	|| (frequency !=  nullptr && frequency->has_data())
	|| (start_time !=  nullptr && start_time->has_data());
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(life.yfilter)
	|| (frequency !=  nullptr && frequency->has_operation())
	|| (start_time !=  nullptr && start_time->has_operation());
}

std::string Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule-period";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (life.is_set || is_set(life.yfilter)) leaf_name_data.push_back(life.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frequency")
    {
        if(frequency == nullptr)
        {
            frequency = std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency>();
        }
        return frequency;
    }

    if(child_yang_name == "start-time")
    {
        if(start_time == nullptr)
        {
            start_time = std::make_shared<Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime>();
        }
        return start_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(frequency != nullptr)
    {
        _children["frequency"] = frequency;
    }

    if(start_time != nullptr)
    {
        _children["start-time"] = start_time;
    }

    return _children;
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "life")
    {
        life = value;
        life.value_namespace = name_space;
        life.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "life")
    {
        life.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frequency" || name == "start-time" || name == "seconds" || name == "life")
        return true;
    return false;
}

Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::Frequency()
    :
    frequency_val{YType::uint32, "frequency-val"},
    range{YType::str, "range"}
{

    yang_name = "frequency"; yang_parent_name = "schedule-period"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::~Frequency()
{
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::has_data() const
{
    if (is_presence_container) return true;
    return frequency_val.is_set
	|| range.is_set;
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(frequency_val.yfilter)
	|| ydk::is_set(range.yfilter);
}

std::string Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frequency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frequency_val.is_set || is_set(frequency_val.yfilter)) leaf_name_data.push_back(frequency_val.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "frequency-val")
    {
        frequency_val = value;
        frequency_val.value_namespace = name_space;
        frequency_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "frequency-val")
    {
        frequency_val.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Frequency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "frequency-val" || name == "range")
        return true;
    return false;
}

Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::StartTime()
    :
    now{YType::empty, "now"}
{

    yang_name = "start-time"; yang_parent_name = "schedule-period"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::~StartTime()
{
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::has_data() const
{
    if (is_presence_container) return true;
    return now.is_set;
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(now.yfilter);
}

std::string Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (now.is_set || is_set(now.yfilter)) leaf_name_data.push_back(now.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "now")
    {
        now = value;
        now.value_namespace = name_space;
        now.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "now")
    {
        now.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::StartTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "now")
        return true;
    return false;
}

Native::Ip::Sla::Schedule::Schedule()
    :
    entry_number{YType::str, "entry-number"},
    ageout{YType::uint32, "ageout"},
    life{YType::str, "life"},
    recurring{YType::empty, "recurring"}
        ,
    start_time(std::make_shared<Native::Ip::Sla::Schedule::StartTime>())
{
    start_time->parent = this;

    yang_name = "schedule"; yang_parent_name = "sla"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Sla::Schedule::~Schedule()
{
}

bool Native::Ip::Sla::Schedule::has_data() const
{
    if (is_presence_container) return true;
    return entry_number.is_set
	|| ageout.is_set
	|| life.is_set
	|| recurring.is_set
	|| (start_time !=  nullptr && start_time->has_data());
}

bool Native::Ip::Sla::Schedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry_number.yfilter)
	|| ydk::is_set(ageout.yfilter)
	|| ydk::is_set(life.yfilter)
	|| ydk::is_set(recurring.yfilter)
	|| (start_time !=  nullptr && start_time->has_operation());
}

std::string Native::Ip::Sla::Schedule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Schedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "schedule";
    ADD_KEY_TOKEN(entry_number, "entry-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Schedule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_number.is_set || is_set(entry_number.yfilter)) leaf_name_data.push_back(entry_number.get_name_leafdata());
    if (ageout.is_set || is_set(ageout.yfilter)) leaf_name_data.push_back(ageout.get_name_leafdata());
    if (life.is_set || is_set(life.yfilter)) leaf_name_data.push_back(life.get_name_leafdata());
    if (recurring.is_set || is_set(recurring.yfilter)) leaf_name_data.push_back(recurring.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Schedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-time")
    {
        if(start_time == nullptr)
        {
            start_time = std::make_shared<Native::Ip::Sla::Schedule::StartTime>();
        }
        return start_time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Schedule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(start_time != nullptr)
    {
        _children["start-time"] = start_time;
    }

    return _children;
}

void Native::Ip::Sla::Schedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-number")
    {
        entry_number = value;
        entry_number.value_namespace = name_space;
        entry_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ageout")
    {
        ageout = value;
        ageout.value_namespace = name_space;
        ageout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "life")
    {
        life = value;
        life.value_namespace = name_space;
        life.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recurring")
    {
        recurring = value;
        recurring.value_namespace = name_space;
        recurring.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Schedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-number")
    {
        entry_number.yfilter = yfilter;
    }
    if(value_path == "ageout")
    {
        ageout.yfilter = yfilter;
    }
    if(value_path == "life")
    {
        life.yfilter = yfilter;
    }
    if(value_path == "recurring")
    {
        recurring.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Schedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "entry-number" || name == "ageout" || name == "life" || name == "recurring")
        return true;
    return false;
}

Native::Ip::Sla::Schedule::StartTime::StartTime()
    :
    after{YType::str, "after"},
    hour_min{YType::str, "hour-min"},
    hour_min_sec{YType::str, "hour-min-sec"},
    now{YType::empty, "now"},
    pending{YType::empty, "pending"},
    random{YType::uint32, "random"}
{

    yang_name = "start-time"; yang_parent_name = "schedule"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::Schedule::StartTime::~StartTime()
{
}

bool Native::Ip::Sla::Schedule::StartTime::has_data() const
{
    if (is_presence_container) return true;
    return after.is_set
	|| hour_min.is_set
	|| hour_min_sec.is_set
	|| now.is_set
	|| pending.is_set
	|| random.is_set;
}

bool Native::Ip::Sla::Schedule::StartTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(after.yfilter)
	|| ydk::is_set(hour_min.yfilter)
	|| ydk::is_set(hour_min_sec.yfilter)
	|| ydk::is_set(now.yfilter)
	|| ydk::is_set(pending.yfilter)
	|| ydk::is_set(random.yfilter);
}

std::string Native::Ip::Sla::Schedule::StartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Schedule::StartTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (after.is_set || is_set(after.yfilter)) leaf_name_data.push_back(after.get_name_leafdata());
    if (hour_min.is_set || is_set(hour_min.yfilter)) leaf_name_data.push_back(hour_min.get_name_leafdata());
    if (hour_min_sec.is_set || is_set(hour_min_sec.yfilter)) leaf_name_data.push_back(hour_min_sec.get_name_leafdata());
    if (now.is_set || is_set(now.yfilter)) leaf_name_data.push_back(now.get_name_leafdata());
    if (pending.is_set || is_set(pending.yfilter)) leaf_name_data.push_back(pending.get_name_leafdata());
    if (random.is_set || is_set(random.yfilter)) leaf_name_data.push_back(random.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Schedule::StartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Schedule::StartTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Sla::Schedule::StartTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "after")
    {
        after = value;
        after.value_namespace = name_space;
        after.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hour-min")
    {
        hour_min = value;
        hour_min.value_namespace = name_space;
        hour_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hour-min-sec")
    {
        hour_min_sec = value;
        hour_min_sec.value_namespace = name_space;
        hour_min_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "now")
    {
        now = value;
        now.value_namespace = name_space;
        now.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending")
    {
        pending = value;
        pending.value_namespace = name_space;
        pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "random")
    {
        random = value;
        random.value_namespace = name_space;
        random.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::Schedule::StartTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "after")
    {
        after.yfilter = yfilter;
    }
    if(value_path == "hour-min")
    {
        hour_min.yfilter = yfilter;
    }
    if(value_path == "hour-min-sec")
    {
        hour_min_sec.yfilter = yfilter;
    }
    if(value_path == "now")
    {
        now.yfilter = yfilter;
    }
    if(value_path == "pending")
    {
        pending.yfilter = yfilter;
    }
    if(value_path == "random")
    {
        random.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::Schedule::StartTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "after" || name == "hour-min" || name == "hour-min-sec" || name == "now" || name == "pending" || name == "random")
        return true;
    return false;
}

Native::Ip::Sla::ReactionConfiguration::ReactionConfiguration()
    :
    entry_number{YType::uint64, "entry-number"}
        ,
    react(std::make_shared<Native::Ip::Sla::ReactionConfiguration::React>())
{
    react->parent = this;

    yang_name = "reaction-configuration"; yang_parent_name = "sla"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Sla::ReactionConfiguration::~ReactionConfiguration()
{
}

bool Native::Ip::Sla::ReactionConfiguration::has_data() const
{
    if (is_presence_container) return true;
    return entry_number.is_set
	|| (react !=  nullptr && react->has_data());
}

bool Native::Ip::Sla::ReactionConfiguration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry_number.yfilter)
	|| (react !=  nullptr && react->has_operation());
}

std::string Native::Ip::Sla::ReactionConfiguration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::ReactionConfiguration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reaction-configuration";
    ADD_KEY_TOKEN(entry_number, "entry-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::ReactionConfiguration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_number.is_set || is_set(entry_number.yfilter)) leaf_name_data.push_back(entry_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::ReactionConfiguration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "react")
    {
        if(react == nullptr)
        {
            react = std::make_shared<Native::Ip::Sla::ReactionConfiguration::React>();
        }
        return react;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::ReactionConfiguration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(react != nullptr)
    {
        _children["react"] = react;
    }

    return _children;
}

void Native::Ip::Sla::ReactionConfiguration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-number")
    {
        entry_number = value;
        entry_number.value_namespace = name_space;
        entry_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::ReactionConfiguration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-number")
    {
        entry_number.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::ReactionConfiguration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "react" || name == "entry-number")
        return true;
    return false;
}

Native::Ip::Sla::ReactionConfiguration::React::React()
    :
    connectionloss(nullptr) // presence node
    , rtt(nullptr) // presence node
{

    yang_name = "react"; yang_parent_name = "reaction-configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::ReactionConfiguration::React::~React()
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::has_data() const
{
    if (is_presence_container) return true;
    return (connectionloss !=  nullptr && connectionloss->has_data())
	|| (rtt !=  nullptr && rtt->has_data());
}

bool Native::Ip::Sla::ReactionConfiguration::React::has_operation() const
{
    return is_set(yfilter)
	|| (connectionloss !=  nullptr && connectionloss->has_operation())
	|| (rtt !=  nullptr && rtt->has_operation());
}

std::string Native::Ip::Sla::ReactionConfiguration::React::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "react";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::ReactionConfiguration::React::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::ReactionConfiguration::React::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connectionLoss")
    {
        if(connectionloss == nullptr)
        {
            connectionloss = std::make_shared<Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss>();
        }
        return connectionloss;
    }

    if(child_yang_name == "rtt")
    {
        if(rtt == nullptr)
        {
            rtt = std::make_shared<Native::Ip::Sla::ReactionConfiguration::React::Rtt>();
        }
        return rtt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::ReactionConfiguration::React::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(connectionloss != nullptr)
    {
        _children["connectionLoss"] = connectionloss;
    }

    if(rtt != nullptr)
    {
        _children["rtt"] = rtt;
    }

    return _children;
}

void Native::Ip::Sla::ReactionConfiguration::React::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Sla::ReactionConfiguration::React::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connectionLoss" || name == "rtt")
        return true;
    return false;
}

Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ConnectionLoss()
    :
    threshold_type(std::make_shared<Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType>())
{
    threshold_type->parent = this;

    yang_name = "connectionLoss"; yang_parent_name = "react"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::~ConnectionLoss()
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::has_data() const
{
    if (is_presence_container) return true;
    return (threshold_type !=  nullptr && threshold_type->has_data());
}

bool Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::has_operation() const
{
    return is_set(yfilter)
	|| (threshold_type !=  nullptr && threshold_type->has_operation());
}

std::string Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connectionLoss";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-type")
    {
        if(threshold_type == nullptr)
        {
            threshold_type = std::make_shared<Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType>();
        }
        return threshold_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold_type != nullptr)
    {
        _children["threshold-type"] = threshold_type;
    }

    return _children;
}

void Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-type")
        return true;
    return false;
}

Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::ThresholdType()
    :
    xofy(std::make_shared<Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::XOfy>())
{
    xofy->parent = this;

    yang_name = "threshold-type"; yang_parent_name = "connectionLoss"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::~ThresholdType()
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::has_data() const
{
    if (is_presence_container) return true;
    return (xofy !=  nullptr && xofy->has_data());
}

bool Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::has_operation() const
{
    return is_set(yfilter)
	|| (xofy !=  nullptr && xofy->has_operation());
}

std::string Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xOfy")
    {
        if(xofy == nullptr)
        {
            xofy = std::make_shared<Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::XOfy>();
        }
        return xofy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(xofy != nullptr)
    {
        _children["xOfy"] = xofy;
    }

    return _children;
}

void Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xOfy")
        return true;
    return false;
}

Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::XOfy::XOfy()
    :
    x_val{YType::uint8, "x-val"},
    y_val{YType::uint8, "y-val"},
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "xOfy"; yang_parent_name = "threshold-type"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::XOfy::~XOfy()
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::XOfy::has_data() const
{
    if (is_presence_container) return true;
    return x_val.is_set
	|| y_val.is_set
	|| action_type.is_set;
}

bool Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::XOfy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(x_val.yfilter)
	|| ydk::is_set(y_val.yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::XOfy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xOfy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::XOfy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (x_val.is_set || is_set(x_val.yfilter)) leaf_name_data.push_back(x_val.get_name_leafdata());
    if (y_val.is_set || is_set(y_val.yfilter)) leaf_name_data.push_back(y_val.get_name_leafdata());
    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::XOfy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::XOfy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::XOfy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "x-val")
    {
        x_val = value;
        x_val.value_namespace = name_space;
        x_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "y-val")
    {
        y_val = value;
        y_val.value_namespace = name_space;
        y_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::XOfy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "x-val")
    {
        x_val.yfilter = yfilter;
    }
    if(value_path == "y-val")
    {
        y_val.yfilter = yfilter;
    }
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::XOfy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "x-val" || name == "y-val" || name == "action-type")
        return true;
    return false;
}

Native::Ip::Sla::ReactionConfiguration::React::Rtt::Rtt()
    :
    threshold_value(std::make_shared<Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue>())
{
    threshold_value->parent = this;

    yang_name = "rtt"; yang_parent_name = "react"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Ip::Sla::ReactionConfiguration::React::Rtt::~Rtt()
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::Rtt::has_data() const
{
    if (is_presence_container) return true;
    return (threshold_value !=  nullptr && threshold_value->has_data());
}

bool Native::Ip::Sla::ReactionConfiguration::React::Rtt::has_operation() const
{
    return is_set(yfilter)
	|| (threshold_value !=  nullptr && threshold_value->has_operation());
}

std::string Native::Ip::Sla::ReactionConfiguration::React::Rtt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::ReactionConfiguration::React::Rtt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::ReactionConfiguration::React::Rtt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold-value")
    {
        if(threshold_value == nullptr)
        {
            threshold_value = std::make_shared<Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue>();
        }
        return threshold_value;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::ReactionConfiguration::React::Rtt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(threshold_value != nullptr)
    {
        _children["threshold-value"] = threshold_value;
    }

    return _children;
}

void Native::Ip::Sla::ReactionConfiguration::React::Rtt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Sla::ReactionConfiguration::React::Rtt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::Rtt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold-value")
        return true;
    return false;
}

Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::ThresholdValue()
    :
    upper_limit_val{YType::uint32, "upper-limit-val"},
    lower_limit_val{YType::uint32, "lower-limit-val"},
    threshold_type{YType::enumeration, "threshold-type"},
    action_type{YType::enumeration, "action-type"}
{

    yang_name = "threshold-value"; yang_parent_name = "rtt"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::~ThresholdValue()
{
}

bool Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::has_data() const
{
    if (is_presence_container) return true;
    return upper_limit_val.is_set
	|| lower_limit_val.is_set
	|| threshold_type.is_set
	|| action_type.is_set;
}

bool Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(upper_limit_val.yfilter)
	|| ydk::is_set(lower_limit_val.yfilter)
	|| ydk::is_set(threshold_type.yfilter)
	|| ydk::is_set(action_type.yfilter);
}

std::string Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold-value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (upper_limit_val.is_set || is_set(upper_limit_val.yfilter)) leaf_name_data.push_back(upper_limit_val.get_name_leafdata());
    if (lower_limit_val.is_set || is_set(lower_limit_val.yfilter)) leaf_name_data.push_back(lower_limit_val.get_name_leafdata());
    if (threshold_type.is_set || is_set(threshold_type.yfilter)) leaf_name_data.push_back(threshold_type.get_name_leafdata());
    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "upper-limit-val")
    {
        upper_limit_val = value;
        upper_limit_val.value_namespace = name_space;
        upper_limit_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-limit-val")
    {
        lower_limit_val = value;
        lower_limit_val.value_namespace = name_space;
        lower_limit_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-type")
    {
        threshold_type = value;
        threshold_type.value_namespace = name_space;
        threshold_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "upper-limit-val")
    {
        upper_limit_val.yfilter = yfilter;
    }
    if(value_path == "lower-limit-val")
    {
        lower_limit_val.yfilter = yfilter;
    }
    if(value_path == "threshold-type")
    {
        threshold_type.yfilter = yfilter;
    }
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
}

bool Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "upper-limit-val" || name == "lower-limit-val" || name == "threshold-type" || name == "action-type")
        return true;
    return false;
}

Native::Ip::Sla::Server::Server()
    :
    twamp(nullptr) // presence node
{

    yang_name = "server"; yang_parent_name = "sla"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Sla::Server::~Server()
{
}

bool Native::Ip::Sla::Server::has_data() const
{
    if (is_presence_container) return true;
    return (twamp !=  nullptr && twamp->has_data());
}

bool Native::Ip::Sla::Server::has_operation() const
{
    return is_set(yfilter)
	|| (twamp !=  nullptr && twamp->has_operation());
}

std::string Native::Ip::Sla::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "twamp")
    {
        if(twamp == nullptr)
        {
            twamp = std::make_shared<Native::Ip::Sla::Server::Twamp>();
        }
        return twamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(twamp != nullptr)
    {
        _children["twamp"] = twamp;
    }

    return _children;
}

void Native::Ip::Sla::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Sla::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Sla::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "twamp")
        return true;
    return false;
}

Native::Ip::Sla::Server::Twamp::Twamp()
{

    yang_name = "twamp"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Sla::Server::Twamp::~Twamp()
{
}

bool Native::Ip::Sla::Server::Twamp::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool Native::Ip::Sla::Server::Twamp::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Ip::Sla::Server::Twamp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-sla:sla/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Sla::Server::Twamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "twamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Sla::Server::Twamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Sla::Server::Twamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Sla::Server::Twamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Sla::Server::Twamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Sla::Server::Twamp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Sla::Server::Twamp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Ip::Rsvp::Rsvp()
    :
    authentication(nullptr) // presence node
    , signalling(std::make_shared<Native::Ip::Rsvp::Signalling>())
{
    signalling->parent = this;

    yang_name = "rsvp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::~Rsvp()
{
}

bool Native::Ip::Rsvp::has_data() const
{
    if (is_presence_container) return true;
    return (authentication !=  nullptr && authentication->has_data())
	|| (signalling !=  nullptr && signalling->has_data());
}

bool Native::Ip::Rsvp::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (signalling !=  nullptr && signalling->has_operation());
}

std::string Native::Ip::Rsvp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rsvp:rsvp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Ip::Rsvp::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "signalling")
    {
        if(signalling == nullptr)
        {
            signalling = std::make_shared<Native::Ip::Rsvp::Signalling>();
        }
        return signalling;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(signalling != nullptr)
    {
        _children["signalling"] = signalling;
    }

    return _children;
}

void Native::Ip::Rsvp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Rsvp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Rsvp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "signalling")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Authentication()
    :
    challenge{YType::empty, "challenge"},
    key_chain{YType::str, "key-chain"},
    type{YType::enumeration, "type"},
    window_size{YType::uint8, "window-size"}
        ,
    neighbor(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor>())
    , lifetime(std::make_shared<Native::Ip::Rsvp::Authentication::Lifetime>())
{
    neighbor->parent = this;
    lifetime->parent = this;

    yang_name = "authentication"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Rsvp::Authentication::~Authentication()
{
}

bool Native::Ip::Rsvp::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return challenge.is_set
	|| key_chain.is_set
	|| type.is_set
	|| window_size.is_set
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data());
}

bool Native::Ip::Rsvp::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation());
}

std::string Native::Ip::Rsvp::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor>();
        }
        return neighbor;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Ip::Rsvp::Authentication::Lifetime>();
        }
        return lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(neighbor != nullptr)
    {
        _children["neighbor"] = neighbor;
    }

    if(lifetime != nullptr)
    {
        _children["lifetime"] = lifetime;
    }

    return _children;
}

void Native::Ip::Rsvp::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "lifetime" || name == "challenge" || name == "key-chain" || name == "type" || name == "window-size")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::Neighbor()
    :
    access_list(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList>())
    , address(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::Address>())
{
    access_list->parent = this;
    address->parent = this;

    yang_name = "neighbor"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Authentication::Neighbor::~Neighbor()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return (access_list !=  nullptr && access_list->has_data())
	|| (address !=  nullptr && address->has_data());
}

bool Native::Ip::Rsvp::Authentication::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| (access_list !=  nullptr && access_list->has_operation())
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Authentication::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list")
    {
        if(access_list == nullptr)
        {
            access_list = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList>();
        }
        return access_list;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Authentication::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(access_list != nullptr)
    {
        _children["access-list"] = access_list;
    }

    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Rsvp::Authentication::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "address")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::AccessList()
    :
    number(this, {"acl_number"})
    , name(this, {"acl_name"})
{

    yang_name = "access-list"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::~AccessList()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<number.len(); index++)
    {
        if(number[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<name.len(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::has_operation() const
{
    for (std::size_t index=0; index<number.len(); index++)
    {
        if(number[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<name.len(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::AccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "number")
    {
        auto ent_ = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number>();
        ent_->parent = this;
        number.append(ent_);
        return ent_;
    }

    if(child_yang_name == "name")
    {
        auto ent_ = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name>();
        ent_->parent = this;
        name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "name")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Number()
    :
    acl_number{YType::uint8, "acl-number"},
    challenge{YType::empty, "challenge"},
    key_chain{YType::str, "key-chain"},
    type{YType::enumeration, "type"},
    window_size{YType::uint8, "window-size"}
        ,
    lifetime(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime>())
{
    lifetime->parent = this;

    yang_name = "number"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::~Number()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::has_data() const
{
    if (is_presence_container) return true;
    return acl_number.is_set
	|| challenge.is_set
	|| key_chain.is_set
	|| type.is_set
	|| window_size.is_set
	|| (lifetime !=  nullptr && lifetime->has_data());
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_number.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| (lifetime !=  nullptr && lifetime->has_operation());
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/neighbor/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number";
    ADD_KEY_TOKEN(acl_number, "acl-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_number.is_set || is_set(acl_number.yfilter)) leaf_name_data.push_back(acl_number.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime>();
        }
        return lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lifetime != nullptr)
    {
        _children["lifetime"] = lifetime;
    }

    return _children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-number")
    {
        acl_number = value;
        acl_number.value_namespace = name_space;
        acl_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-number")
    {
        acl_number.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime" || name == "acl-number" || name == "challenge" || name == "key-chain" || name == "type" || name == "window-size")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::Lifetime()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"}
{

    yang_name = "lifetime"; yang_parent_name = "number"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::~Lifetime()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::has_data() const
{
    if (is_presence_container) return true;
    return hh_mm_ss.is_set;
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Name()
    :
    acl_name{YType::str, "acl-name"},
    challenge{YType::empty, "challenge"},
    key_chain{YType::str, "key-chain"},
    type{YType::enumeration, "type"},
    window_size{YType::uint8, "window-size"}
        ,
    lifetime(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime>())
{
    lifetime->parent = this;

    yang_name = "name"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::~Name()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::has_data() const
{
    if (is_presence_container) return true;
    return acl_name.is_set
	|| challenge.is_set
	|| key_chain.is_set
	|| type.is_set
	|| window_size.is_set
	|| (lifetime !=  nullptr && lifetime->has_data());
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| (lifetime !=  nullptr && lifetime->has_operation());
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/neighbor/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    ADD_KEY_TOKEN(acl_name, "acl-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime>();
        }
        return lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lifetime != nullptr)
    {
        _children["lifetime"] = lifetime;
    }

    return _children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime" || name == "acl-name" || name == "challenge" || name == "key-chain" || name == "type" || name == "window-size")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::Lifetime()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"}
{

    yang_name = "lifetime"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::~Lifetime()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::has_data() const
{
    if (is_presence_container) return true;
    return hh_mm_ss.is_set;
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::Address()
    :
    ipv4(this, {"ipv4_address"})
{

    yang_name = "address"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::~Address()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::has_operation() const
{
    for (std::size_t index=0; index<ipv4.len(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Authentication::Neighbor::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        auto ent_ = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4>();
        ent_->parent = this;
        ipv4.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Authentication::Neighbor::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Ipv4()
    :
    ipv4_address{YType::str, "ipv4-address"},
    challenge{YType::empty, "challenge"},
    key_chain{YType::str, "key-chain"},
    type{YType::enumeration, "type"},
    window_size{YType::uint8, "window-size"}
        ,
    lifetime(std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime>())
{
    lifetime->parent = this;

    yang_name = "ipv4"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::~Ipv4()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| challenge.is_set
	|| key_chain.is_set
	|| type.is_set
	|| window_size.is_set
	|| (lifetime !=  nullptr && lifetime->has_data());
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(challenge.yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(window_size.yfilter)
	|| (lifetime !=  nullptr && lifetime->has_operation());
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/neighbor/address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    ADD_KEY_TOKEN(ipv4_address, "ipv4-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (challenge.is_set || is_set(challenge.yfilter)) leaf_name_data.push_back(challenge.get_name_leafdata());
    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime>();
        }
        return lifetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lifetime != nullptr)
    {
        _children["lifetime"] = lifetime;
    }

    return _children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "challenge")
    {
        challenge = value;
        challenge.value_namespace = name_space;
        challenge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "challenge")
    {
        challenge.yfilter = yfilter;
    }
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifetime" || name == "ipv4-address" || name == "challenge" || name == "key-chain" || name == "type" || name == "window-size")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::Lifetime()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"}
{

    yang_name = "lifetime"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::~Lifetime()
{
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::has_data() const
{
    if (is_presence_container) return true;
    return hh_mm_ss.is_set;
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss")
        return true;
    return false;
}

Native::Ip::Rsvp::Authentication::Lifetime::Lifetime()
    :
    hh_mm_ss{YType::str, "hh-mm-ss"}
{

    yang_name = "lifetime"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Authentication::Lifetime::~Lifetime()
{
}

bool Native::Ip::Rsvp::Authentication::Lifetime::has_data() const
{
    if (is_presence_container) return true;
    return hh_mm_ss.is_set;
}

bool Native::Ip::Rsvp::Authentication::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hh_mm_ss.yfilter);
}

std::string Native::Ip::Rsvp::Authentication::Lifetime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Authentication::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Authentication::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hh_mm_ss.is_set || is_set(hh_mm_ss.yfilter)) leaf_name_data.push_back(hh_mm_ss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Authentication::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Authentication::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Rsvp::Authentication::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss = value;
        hh_mm_ss.value_namespace = name_space;
        hh_mm_ss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Authentication::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hh-mm-ss")
    {
        hh_mm_ss.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Authentication::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hh-mm-ss")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Signalling()
    :
    initial_retransmit_delay{YType::uint16, "initial-retransmit-delay"}
        ,
    fast_local_repair(std::make_shared<Native::Ip::Rsvp::Signalling::FastLocalRepair>())
    , hello(nullptr) // presence node
    , patherr(std::make_shared<Native::Ip::Rsvp::Signalling::Patherr>())
    , rate_limit(nullptr) // presence node
    , refresh(std::make_shared<Native::Ip::Rsvp::Signalling::Refresh>())
{
    fast_local_repair->parent = this;
    patherr->parent = this;
    refresh->parent = this;

    yang_name = "signalling"; yang_parent_name = "rsvp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Signalling::~Signalling()
{
}

bool Native::Ip::Rsvp::Signalling::has_data() const
{
    if (is_presence_container) return true;
    return initial_retransmit_delay.is_set
	|| (fast_local_repair !=  nullptr && fast_local_repair->has_data())
	|| (hello !=  nullptr && hello->has_data())
	|| (patherr !=  nullptr && patherr->has_data())
	|| (rate_limit !=  nullptr && rate_limit->has_data())
	|| (refresh !=  nullptr && refresh->has_data());
}

bool Native::Ip::Rsvp::Signalling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initial_retransmit_delay.yfilter)
	|| (fast_local_repair !=  nullptr && fast_local_repair->has_operation())
	|| (hello !=  nullptr && hello->has_operation())
	|| (patherr !=  nullptr && patherr->has_operation())
	|| (rate_limit !=  nullptr && rate_limit->has_operation())
	|| (refresh !=  nullptr && refresh->has_operation());
}

std::string Native::Ip::Rsvp::Signalling::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_retransmit_delay.is_set || is_set(initial_retransmit_delay.yfilter)) leaf_name_data.push_back(initial_retransmit_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Signalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fast-local-repair")
    {
        if(fast_local_repair == nullptr)
        {
            fast_local_repair = std::make_shared<Native::Ip::Rsvp::Signalling::FastLocalRepair>();
        }
        return fast_local_repair;
    }

    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Ip::Rsvp::Signalling::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "patherr")
    {
        if(patherr == nullptr)
        {
            patherr = std::make_shared<Native::Ip::Rsvp::Signalling::Patherr>();
        }
        return patherr;
    }

    if(child_yang_name == "rate-limit")
    {
        if(rate_limit == nullptr)
        {
            rate_limit = std::make_shared<Native::Ip::Rsvp::Signalling::RateLimit>();
        }
        return rate_limit;
    }

    if(child_yang_name == "refresh")
    {
        if(refresh == nullptr)
        {
            refresh = std::make_shared<Native::Ip::Rsvp::Signalling::Refresh>();
        }
        return refresh;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Signalling::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fast_local_repair != nullptr)
    {
        _children["fast-local-repair"] = fast_local_repair;
    }

    if(hello != nullptr)
    {
        _children["hello"] = hello;
    }

    if(patherr != nullptr)
    {
        _children["patherr"] = patherr;
    }

    if(rate_limit != nullptr)
    {
        _children["rate-limit"] = rate_limit;
    }

    if(refresh != nullptr)
    {
        _children["refresh"] = refresh;
    }

    return _children;
}

void Native::Ip::Rsvp::Signalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initial-retransmit-delay")
    {
        initial_retransmit_delay = value;
        initial_retransmit_delay.value_namespace = name_space;
        initial_retransmit_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initial-retransmit-delay")
    {
        initial_retransmit_delay.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fast-local-repair" || name == "hello" || name == "patherr" || name == "rate-limit" || name == "refresh" || name == "initial-retransmit-delay")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::FastLocalRepair::FastLocalRepair()
    :
    notifications{YType::uint16, "notifications"},
    rate{YType::uint16, "rate"}
{

    yang_name = "fast-local-repair"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Signalling::FastLocalRepair::~FastLocalRepair()
{
}

bool Native::Ip::Rsvp::Signalling::FastLocalRepair::has_data() const
{
    if (is_presence_container) return true;
    return notifications.is_set
	|| rate.is_set;
}

bool Native::Ip::Rsvp::Signalling::FastLocalRepair::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(notifications.yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::FastLocalRepair::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::FastLocalRepair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-local-repair";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::FastLocalRepair::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notifications.is_set || is_set(notifications.yfilter)) leaf_name_data.push_back(notifications.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Signalling::FastLocalRepair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Signalling::FastLocalRepair::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Rsvp::Signalling::FastLocalRepair::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "notifications")
    {
        notifications = value;
        notifications.value_namespace = name_space;
        notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::FastLocalRepair::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "notifications")
    {
        notifications.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::FastLocalRepair::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notifications" || name == "rate")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Hello::Hello()
    :
    bfd{YType::empty, "bfd"},
    statistics{YType::empty, "statistics"}
        ,
    graceful_restart(std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart>())
{
    graceful_restart->parent = this;

    yang_name = "hello"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Rsvp::Signalling::Hello::~Hello()
{
}

bool Native::Ip::Rsvp::Signalling::Hello::has_data() const
{
    if (is_presence_container) return true;
    return bfd.is_set
	|| statistics.is_set
	|| (graceful_restart !=  nullptr && graceful_restart->has_data());
}

bool Native::Ip::Rsvp::Signalling::Hello::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(statistics.yfilter)
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation());
}

std::string Native::Ip::Rsvp::Signalling::Hello::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Hello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (statistics.is_set || is_set(statistics.yfilter)) leaf_name_data.push_back(statistics.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Signalling::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart == nullptr)
        {
            graceful_restart = std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart>();
        }
        return graceful_restart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Signalling::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(graceful_restart != nullptr)
    {
        _children["graceful-restart"] = graceful_restart;
    }

    return _children;
}

void Native::Ip::Rsvp::Signalling::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statistics")
    {
        statistics = value;
        statistics.value_namespace = name_space;
        statistics.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "statistics")
    {
        statistics.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "graceful-restart" || name == "bfd" || name == "statistics")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::GracefulRestart()
    :
    dscp{YType::uint8, "dscp"}
        ,
    mode(std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode>())
    , refresh(std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh>())
    , send(std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send>())
{
    mode->parent = this;
    refresh->parent = this;
    send->parent = this;

    yang_name = "graceful-restart"; yang_parent_name = "hello"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::~GracefulRestart()
{
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::has_data() const
{
    if (is_presence_container) return true;
    return dscp.is_set
	|| (mode !=  nullptr && mode->has_data())
	|| (refresh !=  nullptr && refresh->has_data())
	|| (send !=  nullptr && send->has_data());
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| (mode !=  nullptr && mode->has_operation())
	|| (refresh !=  nullptr && refresh->has_operation())
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/hello/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "refresh")
    {
        if(refresh == nullptr)
        {
            refresh = std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh>();
        }
        return refresh;
    }

    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mode != nullptr)
    {
        _children["mode"] = mode;
    }

    if(refresh != nullptr)
    {
        _children["refresh"] = refresh;
    }

    if(send != nullptr)
    {
        _children["send"] = send;
    }

    return _children;
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "refresh" || name == "send" || name == "dscp")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::Mode()
    :
    full{YType::empty, "full"},
    help_neighbor{YType::empty, "help-neighbor"}
{

    yang_name = "mode"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::~Mode()
{
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::has_data() const
{
    if (is_presence_container) return true;
    return full.is_set
	|| help_neighbor.is_set;
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(full.yfilter)
	|| ydk::is_set(help_neighbor.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/hello/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full.is_set || is_set(full.yfilter)) leaf_name_data.push_back(full.get_name_leafdata());
    if (help_neighbor.is_set || is_set(help_neighbor.yfilter)) leaf_name_data.push_back(help_neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "full")
    {
        full = value;
        full.value_namespace = name_space;
        full.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "help-neighbor")
    {
        help_neighbor = value;
        help_neighbor.value_namespace = name_space;
        help_neighbor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "full")
    {
        full.yfilter = yfilter;
    }
    if(value_path == "help-neighbor")
    {
        help_neighbor.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "full" || name == "help-neighbor")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::Refresh()
    :
    interval{YType::uint16, "interval"},
    misses{YType::uint8, "misses"}
{

    yang_name = "refresh"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::~Refresh()
{
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| misses.is_set;
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(misses.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/hello/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (misses.is_set || is_set(misses.yfilter)) leaf_name_data.push_back(misses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "misses")
    {
        misses = value;
        misses.value_namespace = name_space;
        misses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "misses")
    {
        misses.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Refresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "misses")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::Send()
    :
    recovery_time{YType::uint32, "recovery-time"}
{

    yang_name = "send"; yang_parent_name = "graceful-restart"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::~Send()
{
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::has_data() const
{
    if (is_presence_container) return true;
    return recovery_time.is_set;
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(recovery_time.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/hello/graceful-restart/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (recovery_time.is_set || is_set(recovery_time.yfilter)) leaf_name_data.push_back(recovery_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "recovery-time")
    {
        recovery_time = value;
        recovery_time.value_namespace = name_space;
        recovery_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "recovery-time")
    {
        recovery_time.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Hello::GracefulRestart::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recovery-time")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Patherr::Patherr()
    :
    state_removal(nullptr) // presence node
{

    yang_name = "patherr"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Signalling::Patherr::~Patherr()
{
}

bool Native::Ip::Rsvp::Signalling::Patherr::has_data() const
{
    if (is_presence_container) return true;
    return (state_removal !=  nullptr && state_removal->has_data());
}

bool Native::Ip::Rsvp::Signalling::Patherr::has_operation() const
{
    return is_set(yfilter)
	|| (state_removal !=  nullptr && state_removal->has_operation());
}

std::string Native::Ip::Rsvp::Signalling::Patherr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Patherr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "patherr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Patherr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Signalling::Patherr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-removal")
    {
        if(state_removal == nullptr)
        {
            state_removal = std::make_shared<Native::Ip::Rsvp::Signalling::Patherr::StateRemoval>();
        }
        return state_removal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Signalling::Patherr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state_removal != nullptr)
    {
        _children["state-removal"] = state_removal;
    }

    return _children;
}

void Native::Ip::Rsvp::Signalling::Patherr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Rsvp::Signalling::Patherr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Rsvp::Signalling::Patherr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-removal")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::StateRemoval()
    :
    neighbor{YType::uint8, "neighbor"}
{

    yang_name = "state-removal"; yang_parent_name = "patherr"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::~StateRemoval()
{
}

bool Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::has_data() const
{
    if (is_presence_container) return true;
    return neighbor.is_set;
}

bool Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/patherr/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-removal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Patherr::StateRemoval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::RateLimit::RateLimit()
    :
    burst{YType::uint16, "burst"},
    limit{YType::uint16, "limit"},
    maxsize{YType::uint16, "maxsize"},
    period{YType::uint16, "period"}
{

    yang_name = "rate-limit"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Rsvp::Signalling::RateLimit::~RateLimit()
{
}

bool Native::Ip::Rsvp::Signalling::RateLimit::has_data() const
{
    if (is_presence_container) return true;
    return burst.is_set
	|| limit.is_set
	|| maxsize.is_set
	|| period.is_set;
}

bool Native::Ip::Rsvp::Signalling::RateLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(burst.yfilter)
	|| ydk::is_set(limit.yfilter)
	|| ydk::is_set(maxsize.yfilter)
	|| ydk::is_set(period.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::RateLimit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::RateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::RateLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());
    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());
    if (maxsize.is_set || is_set(maxsize.yfilter)) leaf_name_data.push_back(maxsize.get_name_leafdata());
    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Signalling::RateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Signalling::RateLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Rsvp::Signalling::RateLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maxsize")
    {
        maxsize = value;
        maxsize.value_namespace = name_space;
        maxsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::RateLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
    if(value_path == "maxsize")
    {
        maxsize.yfilter = yfilter;
    }
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::RateLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "burst" || name == "limit" || name == "maxsize" || name == "period")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Refresh::Refresh()
    :
    interval{YType::uint32, "interval"},
    misses{YType::uint8, "misses"}
        ,
    reduction(nullptr) // presence node
{

    yang_name = "refresh"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Rsvp::Signalling::Refresh::~Refresh()
{
}

bool Native::Ip::Rsvp::Signalling::Refresh::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| misses.is_set
	|| (reduction !=  nullptr && reduction->has_data());
}

bool Native::Ip::Rsvp::Signalling::Refresh::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(misses.yfilter)
	|| (reduction !=  nullptr && reduction->has_operation());
}

std::string Native::Ip::Rsvp::Signalling::Refresh::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Refresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Refresh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (misses.is_set || is_set(misses.yfilter)) leaf_name_data.push_back(misses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Signalling::Refresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reduction")
    {
        if(reduction == nullptr)
        {
            reduction = std::make_shared<Native::Ip::Rsvp::Signalling::Refresh::Reduction>();
        }
        return reduction;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Signalling::Refresh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(reduction != nullptr)
    {
        _children["reduction"] = reduction;
    }

    return _children;
}

void Native::Ip::Rsvp::Signalling::Refresh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "misses")
    {
        misses = value;
        misses.value_namespace = name_space;
        misses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Refresh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "misses")
    {
        misses.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Refresh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reduction" || name == "interval" || name == "misses")
        return true;
    return false;
}

Native::Ip::Rsvp::Signalling::Refresh::Reduction::Reduction()
    :
    ack_delay{YType::uint16, "ack-delay"}
{

    yang_name = "reduction"; yang_parent_name = "refresh"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Ip::Rsvp::Signalling::Refresh::Reduction::~Reduction()
{
}

bool Native::Ip::Rsvp::Signalling::Refresh::Reduction::has_data() const
{
    if (is_presence_container) return true;
    return ack_delay.is_set;
}

bool Native::Ip::Rsvp::Signalling::Refresh::Reduction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack_delay.yfilter);
}

std::string Native::Ip::Rsvp::Signalling::Refresh::Reduction::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-rsvp:rsvp/signalling/refresh/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Rsvp::Signalling::Refresh::Reduction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reduction";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Rsvp::Signalling::Refresh::Reduction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack_delay.is_set || is_set(ack_delay.yfilter)) leaf_name_data.push_back(ack_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Rsvp::Signalling::Refresh::Reduction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Rsvp::Signalling::Refresh::Reduction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Rsvp::Signalling::Refresh::Reduction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack-delay")
    {
        ack_delay = value;
        ack_delay.value_namespace = name_space;
        ack_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Rsvp::Signalling::Refresh::Reduction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack-delay")
    {
        ack_delay.yfilter = yfilter;
    }
}

bool Native::Ip::Rsvp::Signalling::Refresh::Reduction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack-delay")
        return true;
    return false;
}

Native::Ip::Wccp::Wccp()
    :
    source_interface{YType::str, "source-interface"}
        ,
    wccp_list(this, {"id"})
    , web_cache(std::make_shared<Native::Ip::Wccp::WebCache>())
    , check(std::make_shared<Native::Ip::Wccp::Check>())
    , vrf(this, {"name"})
{
    web_cache->parent = this;
    check->parent = this;

    yang_name = "wccp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Wccp::~Wccp()
{
}

bool Native::Ip::Wccp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<wccp_list.len(); index++)
    {
        if(wccp_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return source_interface.is_set
	|| (web_cache !=  nullptr && web_cache->has_data())
	|| (check !=  nullptr && check->has_data());
}

bool Native::Ip::Wccp::has_operation() const
{
    for (std::size_t index=0; index<wccp_list.len(); index++)
    {
        if(wccp_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| (web_cache !=  nullptr && web_cache->has_operation())
	|| (check !=  nullptr && check->has_operation());
}

std::string Native::Ip::Wccp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Wccp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-wccp:wccp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Wccp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Wccp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wccp-list")
    {
        auto ent_ = std::make_shared<Native::Ip::Wccp::WccpList>();
        ent_->parent = this;
        wccp_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "web-cache")
    {
        if(web_cache == nullptr)
        {
            web_cache = std::make_shared<Native::Ip::Wccp::WebCache>();
        }
        return web_cache;
    }

    if(child_yang_name == "check")
    {
        if(check == nullptr)
        {
            check = std::make_shared<Native::Ip::Wccp::Check>();
        }
        return check;
    }

    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Ip::Wccp::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Wccp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : wccp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(web_cache != nullptr)
    {
        _children["web-cache"] = web_cache;
    }

    if(check != nullptr)
    {
        _children["check"] = check;
    }

    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Ip::Wccp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Wccp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Native::Ip::Wccp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wccp-list" || name == "web-cache" || name == "check" || name == "vrf" || name == "source-interface")
        return true;
    return false;
}

Native::Ip::Wccp::WccpList::WccpList()
    :
    id{YType::uint8, "id"},
    group_address{YType::str, "group-address"},
    group_list{YType::str, "group-list"},
    mode{YType::enumeration, "mode"},
    redirect_list{YType::str, "redirect-list"},
    snmp_disabled{YType::empty, "snmp-disabled"}
        ,
    password(std::make_shared<Native::Ip::Wccp::WccpList::Password>())
{
    password->parent = this;

    yang_name = "wccp-list"; yang_parent_name = "wccp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Wccp::WccpList::~WccpList()
{
}

bool Native::Ip::Wccp::WccpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| group_address.is_set
	|| group_list.is_set
	|| mode.is_set
	|| redirect_list.is_set
	|| snmp_disabled.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Ip::Wccp::WccpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_list.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(redirect_list.yfilter)
	|| ydk::is_set(snmp_disabled.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Ip::Wccp::WccpList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-wccp:wccp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Wccp::WccpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wccp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Wccp::WccpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_list.is_set || is_set(group_list.yfilter)) leaf_name_data.push_back(group_list.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (redirect_list.is_set || is_set(redirect_list.yfilter)) leaf_name_data.push_back(redirect_list.get_name_leafdata());
    if (snmp_disabled.is_set || is_set(snmp_disabled.yfilter)) leaf_name_data.push_back(snmp_disabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Wccp::WccpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Ip::Wccp::WccpList::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Wccp::WccpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(password != nullptr)
    {
        _children["password"] = password;
    }

    return _children;
}

void Native::Ip::Wccp::WccpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-list")
    {
        group_list = value;
        group_list.value_namespace = name_space;
        group_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirect-list")
    {
        redirect_list = value;
        redirect_list.value_namespace = name_space;
        redirect_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp-disabled")
    {
        snmp_disabled = value;
        snmp_disabled.value_namespace = name_space;
        snmp_disabled.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Wccp::WccpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "group-list")
    {
        group_list.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "redirect-list")
    {
        redirect_list.yfilter = yfilter;
    }
    if(value_path == "snmp-disabled")
    {
        snmp_disabled.yfilter = yfilter;
    }
}

bool Native::Ip::Wccp::WccpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "id" || name == "group-address" || name == "group-list" || name == "mode" || name == "redirect-list" || name == "snmp-disabled")
        return true;
    return false;
}

Native::Ip::Wccp::WccpList::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    clear_key{YType::str, "clear-key"}
{

    yang_name = "password"; yang_parent_name = "wccp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Wccp::WccpList::Password::~Password()
{
}

bool Native::Ip::Wccp::WccpList::Password::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| clear_key.is_set;
}

bool Native::Ip::Wccp::WccpList::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(clear_key.yfilter);
}

std::string Native::Ip::Wccp::WccpList::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Wccp::WccpList::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Wccp::WccpList::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Wccp::WccpList::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Wccp::WccpList::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-key")
    {
        clear_key = value;
        clear_key.value_namespace = name_space;
        clear_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Wccp::WccpList::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "clear-key")
    {
        clear_key.yfilter = yfilter;
    }
}

bool Native::Ip::Wccp::WccpList::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "clear-key")
        return true;
    return false;
}

Native::Ip::Wccp::WebCache::WebCache()
    :
    group_address{YType::str, "group-address"},
    group_list{YType::str, "group-list"},
    mode{YType::enumeration, "mode"},
    redirect_list{YType::str, "redirect-list"},
    snmp_disabled{YType::empty, "snmp-disabled"}
        ,
    password(std::make_shared<Native::Ip::Wccp::WebCache::Password>())
{
    password->parent = this;

    yang_name = "web-cache"; yang_parent_name = "wccp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Wccp::WebCache::~WebCache()
{
}

bool Native::Ip::Wccp::WebCache::has_data() const
{
    if (is_presence_container) return true;
    return group_address.is_set
	|| group_list.is_set
	|| mode.is_set
	|| redirect_list.is_set
	|| snmp_disabled.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Ip::Wccp::WebCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_list.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(redirect_list.yfilter)
	|| ydk::is_set(snmp_disabled.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Ip::Wccp::WebCache::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-wccp:wccp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Wccp::WebCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "web-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Wccp::WebCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_list.is_set || is_set(group_list.yfilter)) leaf_name_data.push_back(group_list.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (redirect_list.is_set || is_set(redirect_list.yfilter)) leaf_name_data.push_back(redirect_list.get_name_leafdata());
    if (snmp_disabled.is_set || is_set(snmp_disabled.yfilter)) leaf_name_data.push_back(snmp_disabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Wccp::WebCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Ip::Wccp::WebCache::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Wccp::WebCache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(password != nullptr)
    {
        _children["password"] = password;
    }

    return _children;
}

void Native::Ip::Wccp::WebCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-list")
    {
        group_list = value;
        group_list.value_namespace = name_space;
        group_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirect-list")
    {
        redirect_list = value;
        redirect_list.value_namespace = name_space;
        redirect_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp-disabled")
    {
        snmp_disabled = value;
        snmp_disabled.value_namespace = name_space;
        snmp_disabled.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Wccp::WebCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "group-list")
    {
        group_list.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "redirect-list")
    {
        redirect_list.yfilter = yfilter;
    }
    if(value_path == "snmp-disabled")
    {
        snmp_disabled.yfilter = yfilter;
    }
}

bool Native::Ip::Wccp::WebCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "group-address" || name == "group-list" || name == "mode" || name == "redirect-list" || name == "snmp-disabled")
        return true;
    return false;
}

Native::Ip::Wccp::WebCache::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    clear_key{YType::str, "clear-key"}
{

    yang_name = "password"; yang_parent_name = "web-cache"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Wccp::WebCache::Password::~Password()
{
}

bool Native::Ip::Wccp::WebCache::Password::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| clear_key.is_set;
}

bool Native::Ip::Wccp::WebCache::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(clear_key.yfilter);
}

std::string Native::Ip::Wccp::WebCache::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-wccp:wccp/web-cache/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Wccp::WebCache::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Wccp::WebCache::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Wccp::WebCache::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Wccp::WebCache::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Wccp::WebCache::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-key")
    {
        clear_key = value;
        clear_key.value_namespace = name_space;
        clear_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Wccp::WebCache::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "clear-key")
    {
        clear_key.yfilter = yfilter;
    }
}

bool Native::Ip::Wccp::WebCache::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "clear-key")
        return true;
    return false;
}

Native::Ip::Wccp::Check::Check()
    :
    acl(std::make_shared<Native::Ip::Wccp::Check::Acl>())
    , services(std::make_shared<Native::Ip::Wccp::Check::Services>())
{
    acl->parent = this;
    services->parent = this;

    yang_name = "check"; yang_parent_name = "wccp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Wccp::Check::~Check()
{
}

bool Native::Ip::Wccp::Check::has_data() const
{
    if (is_presence_container) return true;
    return (acl !=  nullptr && acl->has_data())
	|| (services !=  nullptr && services->has_data());
}

bool Native::Ip::Wccp::Check::has_operation() const
{
    return is_set(yfilter)
	|| (acl !=  nullptr && acl->has_operation())
	|| (services !=  nullptr && services->has_operation());
}

std::string Native::Ip::Wccp::Check::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-wccp:wccp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Wccp::Check::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Wccp::Check::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Wccp::Check::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Ip::Wccp::Check::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "services")
    {
        if(services == nullptr)
        {
            services = std::make_shared<Native::Ip::Wccp::Check::Services>();
        }
        return services;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Wccp::Check::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(acl != nullptr)
    {
        _children["acl"] = acl;
    }

    if(services != nullptr)
    {
        _children["services"] = services;
    }

    return _children;
}

void Native::Ip::Wccp::Check::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Wccp::Check::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Wccp::Check::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "services")
        return true;
    return false;
}

Native::Ip::Wccp::Check::Acl::Acl()
    :
    outbound{YType::empty, "outbound"}
{

    yang_name = "acl"; yang_parent_name = "check"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Wccp::Check::Acl::~Acl()
{
}

bool Native::Ip::Wccp::Check::Acl::has_data() const
{
    if (is_presence_container) return true;
    return outbound.is_set;
}

bool Native::Ip::Wccp::Check::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(outbound.yfilter);
}

std::string Native::Ip::Wccp::Check::Acl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-wccp:wccp/check/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Wccp::Check::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Wccp::Check::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (outbound.is_set || is_set(outbound.yfilter)) leaf_name_data.push_back(outbound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Wccp::Check::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Wccp::Check::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Wccp::Check::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "outbound")
    {
        outbound = value;
        outbound.value_namespace = name_space;
        outbound.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Wccp::Check::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "outbound")
    {
        outbound.yfilter = yfilter;
    }
}

bool Native::Ip::Wccp::Check::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "outbound")
        return true;
    return false;
}

Native::Ip::Wccp::Check::Services::Services()
    :
    all{YType::empty, "all"}
{

    yang_name = "services"; yang_parent_name = "check"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Wccp::Check::Services::~Services()
{
}

bool Native::Ip::Wccp::Check::Services::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Ip::Wccp::Check::Services::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Ip::Wccp::Check::Services::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-wccp:wccp/check/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Wccp::Check::Services::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "services";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Wccp::Check::Services::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Wccp::Check::Services::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Wccp::Check::Services::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Wccp::Check::Services::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Wccp::Check::Services::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Ip::Wccp::Check::Services::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Ip::Wccp::Vrf::Vrf()
    :
    name{YType::str, "name"},
    source_interface{YType::str, "source-interface"}
        ,
    wccp_list(this, {"id"})
    , web_cache(std::make_shared<Native::Ip::Wccp::Vrf::WebCache>())
{
    web_cache->parent = this;

    yang_name = "vrf"; yang_parent_name = "wccp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Wccp::Vrf::~Vrf()
{
}

bool Native::Ip::Wccp::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<wccp_list.len(); index++)
    {
        if(wccp_list[index]->has_data())
            return true;
    }
    return name.is_set
	|| source_interface.is_set
	|| (web_cache !=  nullptr && web_cache->has_data());
}

bool Native::Ip::Wccp::Vrf::has_operation() const
{
    for (std::size_t index=0; index<wccp_list.len(); index++)
    {
        if(wccp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| (web_cache !=  nullptr && web_cache->has_operation());
}

std::string Native::Ip::Wccp::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-wccp:wccp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Wccp::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Wccp::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Wccp::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wccp-list")
    {
        auto ent_ = std::make_shared<Native::Ip::Wccp::Vrf::WccpList>();
        ent_->parent = this;
        wccp_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "web-cache")
    {
        if(web_cache == nullptr)
        {
            web_cache = std::make_shared<Native::Ip::Wccp::Vrf::WebCache>();
        }
        return web_cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Wccp::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : wccp_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(web_cache != nullptr)
    {
        _children["web-cache"] = web_cache;
    }

    return _children;
}

void Native::Ip::Wccp::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Wccp::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Native::Ip::Wccp::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "wccp-list" || name == "web-cache" || name == "name" || name == "source-interface")
        return true;
    return false;
}

Native::Ip::Wccp::Vrf::WccpList::WccpList()
    :
    id{YType::uint8, "id"},
    group_address{YType::str, "group-address"},
    group_list{YType::str, "group-list"},
    mode{YType::enumeration, "mode"},
    redirect_list{YType::str, "redirect-list"},
    snmp_disabled{YType::empty, "snmp-disabled"}
        ,
    password(std::make_shared<Native::Ip::Wccp::Vrf::WccpList::Password>())
{
    password->parent = this;

    yang_name = "wccp-list"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Wccp::Vrf::WccpList::~WccpList()
{
}

bool Native::Ip::Wccp::Vrf::WccpList::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| group_address.is_set
	|| group_list.is_set
	|| mode.is_set
	|| redirect_list.is_set
	|| snmp_disabled.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Ip::Wccp::Vrf::WccpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_list.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(redirect_list.yfilter)
	|| ydk::is_set(snmp_disabled.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Ip::Wccp::Vrf::WccpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wccp-list";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Wccp::Vrf::WccpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_list.is_set || is_set(group_list.yfilter)) leaf_name_data.push_back(group_list.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (redirect_list.is_set || is_set(redirect_list.yfilter)) leaf_name_data.push_back(redirect_list.get_name_leafdata());
    if (snmp_disabled.is_set || is_set(snmp_disabled.yfilter)) leaf_name_data.push_back(snmp_disabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Wccp::Vrf::WccpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Ip::Wccp::Vrf::WccpList::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Wccp::Vrf::WccpList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(password != nullptr)
    {
        _children["password"] = password;
    }

    return _children;
}

void Native::Ip::Wccp::Vrf::WccpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-list")
    {
        group_list = value;
        group_list.value_namespace = name_space;
        group_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirect-list")
    {
        redirect_list = value;
        redirect_list.value_namespace = name_space;
        redirect_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp-disabled")
    {
        snmp_disabled = value;
        snmp_disabled.value_namespace = name_space;
        snmp_disabled.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Wccp::Vrf::WccpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "group-list")
    {
        group_list.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "redirect-list")
    {
        redirect_list.yfilter = yfilter;
    }
    if(value_path == "snmp-disabled")
    {
        snmp_disabled.yfilter = yfilter;
    }
}

bool Native::Ip::Wccp::Vrf::WccpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "id" || name == "group-address" || name == "group-list" || name == "mode" || name == "redirect-list" || name == "snmp-disabled")
        return true;
    return false;
}

Native::Ip::Wccp::Vrf::WccpList::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    clear_key{YType::str, "clear-key"}
{

    yang_name = "password"; yang_parent_name = "wccp-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Wccp::Vrf::WccpList::Password::~Password()
{
}

bool Native::Ip::Wccp::Vrf::WccpList::Password::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| clear_key.is_set;
}

bool Native::Ip::Wccp::Vrf::WccpList::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(clear_key.yfilter);
}

std::string Native::Ip::Wccp::Vrf::WccpList::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Wccp::Vrf::WccpList::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Wccp::Vrf::WccpList::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Wccp::Vrf::WccpList::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Wccp::Vrf::WccpList::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-key")
    {
        clear_key = value;
        clear_key.value_namespace = name_space;
        clear_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Wccp::Vrf::WccpList::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "clear-key")
    {
        clear_key.yfilter = yfilter;
    }
}

bool Native::Ip::Wccp::Vrf::WccpList::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "clear-key")
        return true;
    return false;
}

Native::Ip::Wccp::Vrf::WebCache::WebCache()
    :
    group_address{YType::str, "group-address"},
    group_list{YType::str, "group-list"},
    mode{YType::enumeration, "mode"},
    redirect_list{YType::str, "redirect-list"},
    snmp_disabled{YType::empty, "snmp-disabled"}
        ,
    password(std::make_shared<Native::Ip::Wccp::Vrf::WebCache::Password>())
{
    password->parent = this;

    yang_name = "web-cache"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Wccp::Vrf::WebCache::~WebCache()
{
}

bool Native::Ip::Wccp::Vrf::WebCache::has_data() const
{
    if (is_presence_container) return true;
    return group_address.is_set
	|| group_list.is_set
	|| mode.is_set
	|| redirect_list.is_set
	|| snmp_disabled.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Ip::Wccp::Vrf::WebCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_list.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(redirect_list.yfilter)
	|| ydk::is_set(snmp_disabled.yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Ip::Wccp::Vrf::WebCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "web-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Wccp::Vrf::WebCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_list.is_set || is_set(group_list.yfilter)) leaf_name_data.push_back(group_list.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (redirect_list.is_set || is_set(redirect_list.yfilter)) leaf_name_data.push_back(redirect_list.get_name_leafdata());
    if (snmp_disabled.is_set || is_set(snmp_disabled.yfilter)) leaf_name_data.push_back(snmp_disabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Wccp::Vrf::WebCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Ip::Wccp::Vrf::WebCache::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Wccp::Vrf::WebCache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(password != nullptr)
    {
        _children["password"] = password;
    }

    return _children;
}

void Native::Ip::Wccp::Vrf::WebCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-list")
    {
        group_list = value;
        group_list.value_namespace = name_space;
        group_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirect-list")
    {
        redirect_list = value;
        redirect_list.value_namespace = name_space;
        redirect_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp-disabled")
    {
        snmp_disabled = value;
        snmp_disabled.value_namespace = name_space;
        snmp_disabled.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Wccp::Vrf::WebCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "group-list")
    {
        group_list.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "redirect-list")
    {
        redirect_list.yfilter = yfilter;
    }
    if(value_path == "snmp-disabled")
    {
        snmp_disabled.yfilter = yfilter;
    }
}

bool Native::Ip::Wccp::Vrf::WebCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password" || name == "group-address" || name == "group-list" || name == "mode" || name == "redirect-list" || name == "snmp-disabled")
        return true;
    return false;
}

Native::Ip::Wccp::Vrf::WebCache::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    clear_key{YType::str, "clear-key"}
{

    yang_name = "password"; yang_parent_name = "web-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Ip::Wccp::Vrf::WebCache::Password::~Password()
{
}

bool Native::Ip::Wccp::Vrf::WebCache::Password::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| clear_key.is_set;
}

bool Native::Ip::Wccp::Vrf::WebCache::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(clear_key.yfilter);
}

std::string Native::Ip::Wccp::Vrf::WebCache::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Wccp::Vrf::WebCache::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Wccp::Vrf::WebCache::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Wccp::Vrf::WebCache::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Wccp::Vrf::WebCache::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-key")
    {
        clear_key = value;
        clear_key.value_namespace = name_space;
        clear_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Wccp::Vrf::WebCache::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "clear-key")
    {
        clear_key.yfilter = yfilter;
    }
}

bool Native::Ip::Wccp::Vrf::WebCache::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "clear-key")
        return true;
    return false;
}

Native::Ip::Radius::Radius()
    :
    source_interface(std::make_shared<Native::Ip::Radius::SourceInterface>())
{
    source_interface->parent = this;

    yang_name = "radius"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Radius::~Radius()
{
}

bool Native::Ip::Radius::has_data() const
{
    if (is_presence_container) return true;
    return (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Ip::Radius::has_operation() const
{
    return is_set(yfilter)
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Ip::Radius::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Radius::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:radius";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Radius::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Ip::Radius::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Radius::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_interface != nullptr)
    {
        _children["source-interface"] = source_interface;
    }

    return _children;
}

void Native::Ip::Radius::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Radius::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Radius::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface")
        return true;
    return false;
}

Native::Ip::Radius::SourceInterface::SourceInterface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    atm_subinterface(std::make_shared<Native::Ip::Radius::SourceInterface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Ip::Radius::SourceInterface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Ip::Radius::SourceInterface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Ip::Radius::SourceInterface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Radius::SourceInterface::~SourceInterface()
{
}

bool Native::Ip::Radius::SourceInterface::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Ip::Radius::SourceInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ip::Radius::SourceInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Radius::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Radius::SourceInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Radius::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Radius::SourceInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Radius::SourceInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Radius::SourceInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Radius::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Radius::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Ip::Radius::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
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
}

void Native::Ip::Radius::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
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
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Ip::Radius::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Ip::Radius::SourceInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Radius::SourceInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Radius::SourceInterface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Ip::Radius::SourceInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Radius::SourceInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:radius/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Radius::SourceInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Radius::SourceInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Radius::SourceInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Radius::SourceInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Radius::SourceInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Radius::SourceInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Radius::SourceInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Radius::SourceInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Radius::SourceInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Radius::SourceInterface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Ip::Radius::SourceInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Radius::SourceInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:radius/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Radius::SourceInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Radius::SourceInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Radius::SourceInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Radius::SourceInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Radius::SourceInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Radius::SourceInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Radius::SourceInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Radius::SourceInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Radius::SourceInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Radius::SourceInterface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Ip::Radius::SourceInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Radius::SourceInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:radius/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Radius::SourceInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Radius::SourceInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Radius::SourceInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Radius::SourceInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Radius::SourceInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Radius::SourceInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Radius::SourceInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Radius::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Radius::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Radius::SourceInterface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Ip::Radius::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Radius::SourceInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:radius/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Radius::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Radius::SourceInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Radius::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Radius::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Radius::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Radius::SourceInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Radius::SourceInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Tacacs::Tacacs()
    :
    source_interface(std::make_shared<Native::Ip::Tacacs::SourceInterface>())
{
    source_interface->parent = this;

    yang_name = "tacacs"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tacacs::~Tacacs()
{
}

bool Native::Ip::Tacacs::has_data() const
{
    if (is_presence_container) return true;
    return (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Ip::Tacacs::has_operation() const
{
    return is_set(yfilter)
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Ip::Tacacs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tacacs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:tacacs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tacacs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tacacs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Ip::Tacacs::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tacacs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_interface != nullptr)
    {
        _children["source-interface"] = source_interface;
    }

    return _children;
}

void Native::Ip::Tacacs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Tacacs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Tacacs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface")
        return true;
    return false;
}

Native::Ip::Tacacs::SourceInterface::SourceInterface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
        ,
    atm_subinterface(std::make_shared<Native::Ip::Tacacs::SourceInterface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::Ip::Tacacs::SourceInterface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "tacacs"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tacacs::SourceInterface::~SourceInterface()
{
}

bool Native::Ip::Tacacs::SourceInterface::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Ip::Tacacs::SourceInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Ip::Tacacs::SourceInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:tacacs/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tacacs::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tacacs::SourceInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tacacs::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Ip::Tacacs::SourceInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Ip::Tacacs::SourceInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tacacs::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::Ip::Tacacs::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
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
}

void Native::Ip::Tacacs::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
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
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::Ip::Tacacs::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::Ip::Tacacs::SourceInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tacacs::SourceInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Ip::Tacacs::SourceInterface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::Ip::Tacacs::SourceInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Ip::Tacacs::SourceInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:tacacs/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tacacs::SourceInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tacacs::SourceInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tacacs::SourceInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tacacs::SourceInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Tacacs::SourceInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tacacs::SourceInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Ip::Tacacs::SourceInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:tacacs/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Ip::Tacacs::SourceInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Ip::Tacacs::SourceInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tacacs::SourceInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Ip::Tacacs::SourceInterface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::Ip::Tacacs::SourceInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Ip::Tacacs::SourceInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:tacacs/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tacacs::SourceInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tacacs::SourceInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tacacs::SourceInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tacacs::SourceInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Tacacs::SourceInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tacacs::SourceInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Ip::Tacacs::SourceInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-aaa:tacacs/source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Ip::Tacacs::SourceInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Ip::Http::Http()
    :
    access_class{YType::uint8, "access-class"},
    server{YType::boolean, "server"},
    secure_server{YType::boolean, "secure-server"},
    secure_trustpoint{YType::str, "secure-trustpoint"},
    port{YType::uint16, "port"},
    max_connections{YType::uint16, "max-connections"},
    active_session_modules{YType::str, "active-session-modules"},
    secure_active_session_modules{YType::str, "secure-active-session-modules"},
    secure_client_auth{YType::empty, "secure-client-auth"}
        ,
    authentication(std::make_shared<Native::Ip::Http::Authentication>())
    , timeout_policy(std::make_shared<Native::Ip::Http::TimeoutPolicy>())
    , client(std::make_shared<Native::Ip::Http::Client>())
{
    authentication->parent = this;
    timeout_policy->parent = this;
    client->parent = this;

    yang_name = "http"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Http::~Http()
{
}

bool Native::Ip::Http::has_data() const
{
    if (is_presence_container) return true;
    return access_class.is_set
	|| server.is_set
	|| secure_server.is_set
	|| secure_trustpoint.is_set
	|| port.is_set
	|| max_connections.is_set
	|| active_session_modules.is_set
	|| secure_active_session_modules.is_set
	|| secure_client_auth.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (timeout_policy !=  nullptr && timeout_policy->has_data())
	|| (client !=  nullptr && client->has_data());
}

bool Native::Ip::Http::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_class.yfilter)
	|| ydk::is_set(server.yfilter)
	|| ydk::is_set(secure_server.yfilter)
	|| ydk::is_set(secure_trustpoint.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(max_connections.yfilter)
	|| ydk::is_set(active_session_modules.yfilter)
	|| ydk::is_set(secure_active_session_modules.yfilter)
	|| ydk::is_set(secure_client_auth.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (timeout_policy !=  nullptr && timeout_policy->has_operation())
	|| (client !=  nullptr && client->has_operation());
}

std::string Native::Ip::Http::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Http::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-http:http";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Http::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_class.is_set || is_set(access_class.yfilter)) leaf_name_data.push_back(access_class.get_name_leafdata());
    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());
    if (secure_server.is_set || is_set(secure_server.yfilter)) leaf_name_data.push_back(secure_server.get_name_leafdata());
    if (secure_trustpoint.is_set || is_set(secure_trustpoint.yfilter)) leaf_name_data.push_back(secure_trustpoint.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (max_connections.is_set || is_set(max_connections.yfilter)) leaf_name_data.push_back(max_connections.get_name_leafdata());
    if (active_session_modules.is_set || is_set(active_session_modules.yfilter)) leaf_name_data.push_back(active_session_modules.get_name_leafdata());
    if (secure_active_session_modules.is_set || is_set(secure_active_session_modules.yfilter)) leaf_name_data.push_back(secure_active_session_modules.get_name_leafdata());
    if (secure_client_auth.is_set || is_set(secure_client_auth.yfilter)) leaf_name_data.push_back(secure_client_auth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Http::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Ip::Http::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "timeout-policy")
    {
        if(timeout_policy == nullptr)
        {
            timeout_policy = std::make_shared<Native::Ip::Http::TimeoutPolicy>();
        }
        return timeout_policy;
    }

    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Ip::Http::Client>();
        }
        return client;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Http::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(timeout_policy != nullptr)
    {
        _children["timeout-policy"] = timeout_policy;
    }

    if(client != nullptr)
    {
        _children["client"] = client;
    }

    return _children;
}

void Native::Ip::Http::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-class")
    {
        access_class = value;
        access_class.value_namespace = name_space;
        access_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-server")
    {
        secure_server = value;
        secure_server.value_namespace = name_space;
        secure_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-trustpoint")
    {
        secure_trustpoint = value;
        secure_trustpoint.value_namespace = name_space;
        secure_trustpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-connections")
    {
        max_connections = value;
        max_connections.value_namespace = name_space;
        max_connections.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-session-modules")
    {
        active_session_modules = value;
        active_session_modules.value_namespace = name_space;
        active_session_modules.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-active-session-modules")
    {
        secure_active_session_modules = value;
        secure_active_session_modules.value_namespace = name_space;
        secure_active_session_modules.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-client-auth")
    {
        secure_client_auth = value;
        secure_client_auth.value_namespace = name_space;
        secure_client_auth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Http::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-class")
    {
        access_class.yfilter = yfilter;
    }
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
    if(value_path == "secure-server")
    {
        secure_server.yfilter = yfilter;
    }
    if(value_path == "secure-trustpoint")
    {
        secure_trustpoint.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "max-connections")
    {
        max_connections.yfilter = yfilter;
    }
    if(value_path == "active-session-modules")
    {
        active_session_modules.yfilter = yfilter;
    }
    if(value_path == "secure-active-session-modules")
    {
        secure_active_session_modules.yfilter = yfilter;
    }
    if(value_path == "secure-client-auth")
    {
        secure_client_auth.yfilter = yfilter;
    }
}

bool Native::Ip::Http::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "timeout-policy" || name == "client" || name == "access-class" || name == "server" || name == "secure-server" || name == "secure-trustpoint" || name == "port" || name == "max-connections" || name == "active-session-modules" || name == "secure-active-session-modules" || name == "secure-client-auth")
        return true;
    return false;
}

Native::Ip::Http::Authentication::Authentication()
    :
    aaa{YType::empty, "aaa"},
    local{YType::empty, "local"}
{

    yang_name = "authentication"; yang_parent_name = "http"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Http::Authentication::~Authentication()
{
}

bool Native::Ip::Http::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return aaa.is_set
	|| local.is_set;
}

bool Native::Ip::Http::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Ip::Http::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-http:http/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Http::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Http::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa.is_set || is_set(aaa.yfilter)) leaf_name_data.push_back(aaa.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Http::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Http::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Http::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa")
    {
        aaa = value;
        aaa.value_namespace = name_space;
        aaa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Http::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa")
    {
        aaa.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Ip::Http::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa" || name == "local")
        return true;
    return false;
}

Native::Ip::Http::TimeoutPolicy::TimeoutPolicy()
    :
    idle{YType::uint16, "idle"},
    life{YType::uint32, "life"},
    requests{YType::uint32, "requests"}
{

    yang_name = "timeout-policy"; yang_parent_name = "http"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Ip::Http::TimeoutPolicy::~TimeoutPolicy()
{
}

bool Native::Ip::Http::TimeoutPolicy::has_data() const
{
    if (is_presence_container) return true;
    return idle.is_set
	|| life.is_set
	|| requests.is_set;
}

bool Native::Ip::Http::TimeoutPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idle.yfilter)
	|| ydk::is_set(life.yfilter)
	|| ydk::is_set(requests.yfilter);
}

std::string Native::Ip::Http::TimeoutPolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-http:http/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Http::TimeoutPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Http::TimeoutPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle.is_set || is_set(idle.yfilter)) leaf_name_data.push_back(idle.get_name_leafdata());
    if (life.is_set || is_set(life.yfilter)) leaf_name_data.push_back(life.get_name_leafdata());
    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Ip::Http::TimeoutPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Ip::Http::TimeoutPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Ip::Http::TimeoutPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idle")
    {
        idle = value;
        idle.value_namespace = name_space;
        idle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "life")
    {
        life = value;
        life.value_namespace = name_space;
        life.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requests")
    {
        requests = value;
        requests.value_namespace = name_space;
        requests.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Http::TimeoutPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idle")
    {
        idle.yfilter = yfilter;
    }
    if(value_path == "life")
    {
        life.yfilter = yfilter;
    }
    if(value_path == "requests")
    {
        requests.yfilter = yfilter;
    }
}

bool Native::Ip::Http::TimeoutPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle" || name == "life" || name == "requests")
        return true;
    return false;
}

const Enum::YLeaf Native::Ip::Sla::Entry::IcmpEcho::History::Filter::all {0, "all"};
const Enum::YLeaf Native::Ip::Sla::Entry::IcmpEcho::History::Filter::failures {1, "failures"};
const Enum::YLeaf Native::Ip::Sla::Entry::IcmpEcho::History::Filter::none {2, "none"};
const Enum::YLeaf Native::Ip::Sla::Entry::IcmpEcho::History::Filter::overThreshold {3, "overThreshold"};

const Enum::YLeaf Native::Ip::Sla::Entry::UdpJitter::Codec::g711alaw {0, "g711alaw"};
const Enum::YLeaf Native::Ip::Sla::Entry::UdpJitter::Codec::g711ulaw {1, "g711ulaw"};
const Enum::YLeaf Native::Ip::Sla::Entry::UdpJitter::Codec::g729a {2, "g729a"};

const Enum::YLeaf Native::Ip::Sla::Entry::UdpJitter::Control::enable {0, "enable"};
const Enum::YLeaf Native::Ip::Sla::Entry::UdpJitter::Control::disable {1, "disable"};

const Enum::YLeaf Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::Name::Y_1DM {0, "1DM"};
const Enum::YLeaf Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::Name::DMM {1, "DMM"};
const Enum::YLeaf Native::Ip::Sla::Entry::Ethernet::Y1731::Delay::Name::DMMv1 {2, "DMMv1"};

const Enum::YLeaf Native::Ip::Sla::Group::Schedule::ProbeIds::SchedulePeriod::Life::forever {0, "forever"};

const Enum::YLeaf Native::Ip::Sla::Schedule::Life::forever {0, "forever"};

const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::XOfy::ActionType::none {0, "none"};
const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::XOfy::ActionType::trapAndTrigger {1, "trapAndTrigger"};
const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::XOfy::ActionType::trapOnly {2, "trapOnly"};
const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::ConnectionLoss::ThresholdType::XOfy::ActionType::triggerOnly {3, "triggerOnly"};

const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::ThresholdType::immediate {0, "immediate"};

const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::ActionType::none {0, "none"};
const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::ActionType::trapAndTrigger {1, "trapAndTrigger"};
const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::ActionType::trapOnly {2, "trapOnly"};
const Enum::YLeaf Native::Ip::Sla::ReactionConfiguration::React::Rtt::ThresholdValue::ActionType::triggerOnly {3, "triggerOnly"};

const Enum::YLeaf Native::Ip::Rsvp::Authentication::Type::md5 {0, "md5"};
const Enum::YLeaf Native::Ip::Rsvp::Authentication::Type::sha_1 {1, "sha-1"};

const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Type::md5 {0, "md5"};
const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Number::Type::sha_1 {1, "sha-1"};

const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Type::md5 {0, "md5"};
const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::AccessList::Name::Type::sha_1 {1, "sha-1"};

const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Type::md5 {0, "md5"};
const Enum::YLeaf Native::Ip::Rsvp::Authentication::Neighbor::Address::Ipv4::Type::sha_1 {1, "sha-1"};

const Enum::YLeaf Native::Ip::Wccp::WccpList::Mode::closed {0, "closed"};
const Enum::YLeaf Native::Ip::Wccp::WccpList::Mode::open {1, "open"};

const Enum::YLeaf Native::Ip::Wccp::WccpList::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Wccp::WccpList::Password::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::Ip::Wccp::WebCache::Mode::closed {0, "closed"};
const Enum::YLeaf Native::Ip::Wccp::WebCache::Mode::open {1, "open"};

const Enum::YLeaf Native::Ip::Wccp::WebCache::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Wccp::WebCache::Password::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::Ip::Wccp::Vrf::WccpList::Mode::closed {0, "closed"};
const Enum::YLeaf Native::Ip::Wccp::Vrf::WccpList::Mode::open {1, "open"};

const Enum::YLeaf Native::Ip::Wccp::Vrf::WccpList::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Wccp::Vrf::WccpList::Password::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::Ip::Wccp::Vrf::WebCache::Mode::closed {0, "closed"};
const Enum::YLeaf Native::Ip::Wccp::Vrf::WebCache::Mode::open {1, "open"};

const Enum::YLeaf Native::Ip::Wccp::Vrf::WebCache::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Ip::Wccp::Vrf::WebCache::Password::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::Ip::Http::ActiveSessionModules::none {0, "none"};
const Enum::YLeaf Native::Ip::Http::ActiveSessionModules::all {1, "all"};

const Enum::YLeaf Native::Ip::Http::SecureActiveSessionModules::none {0, "none"};
const Enum::YLeaf Native::Ip::Http::SecureActiveSessionModules::all {1, "all"};


}
}

