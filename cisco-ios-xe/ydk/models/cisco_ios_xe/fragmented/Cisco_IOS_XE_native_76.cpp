
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_76.hpp"
#include "Cisco_IOS_XE_native_77.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::~Vrf()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::has_data() const
{
    return forwarding.is_set;
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Aaa::Group::Server::Tacacs::Tacacs()
    :
    name{YType::str, "name"}
{

    yang_name = "tacacs"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Group::Server::Tacacs::~Tacacs()
{
}

bool Native::Aaa::Group::Server::Tacacs::has_data() const
{
    return name.is_set;
}

bool Native::Aaa::Group::Server::Tacacs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Aaa::Group::Server::Tacacs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:group/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Group::Server::Tacacs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacs" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Tacacs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Tacacs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Group::Server::Tacacs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Aaa::Group::Server::Tacacs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Aaa::Group::Server::Radius::Radius()
    :
    name{YType::str, "name"},
    deadtime{YType::uint16, "deadtime"}
    	,
    server(std::make_shared<Native::Aaa::Group::Server::Radius::Server_>())
	,ip(std::make_shared<Native::Aaa::Group::Server::Radius::Ip>())
	,load_balance(std::make_shared<Native::Aaa::Group::Server::Radius::LoadBalance>())
{
    server->parent = this;
    ip->parent = this;
    load_balance->parent = this;

    yang_name = "radius"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Group::Server::Radius::~Radius()
{
}

bool Native::Aaa::Group::Server::Radius::has_data() const
{
    return name.is_set
	|| deadtime.is_set
	|| (server !=  nullptr && server->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (load_balance !=  nullptr && load_balance->has_data());
}

bool Native::Aaa::Group::Server::Radius::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(deadtime.yfilter)
	|| (server !=  nullptr && server->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (load_balance !=  nullptr && load_balance->has_operation());
}

std::string Native::Aaa::Group::Server::Radius::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:group/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Group::Server::Radius::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Radius::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (deadtime.is_set || is_set(deadtime.yfilter)) leaf_name_data.push_back(deadtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Aaa::Group::Server::Radius::Server_>();
        }
        return server;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Aaa::Group::Server::Radius::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "load-balance")
    {
        if(load_balance == nullptr)
        {
            load_balance = std::make_shared<Native::Aaa::Group::Server::Radius::LoadBalance>();
        }
        return load_balance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(server != nullptr)
    {
        children["server"] = server;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(load_balance != nullptr)
    {
        children["load-balance"] = load_balance;
    }

    return children;
}

void Native::Aaa::Group::Server::Radius::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deadtime")
    {
        deadtime = value;
        deadtime.value_namespace = name_space;
        deadtime.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Group::Server::Radius::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "deadtime")
    {
        deadtime.yfilter = yfilter;
    }
}

bool Native::Aaa::Group::Server::Radius::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server" || name == "ip" || name == "load-balance" || name == "name" || name == "deadtime")
        return true;
    return false;
}

Native::Aaa::Group::Server::Radius::Server_::Server_()
{

    yang_name = "server"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Radius::Server_::~Server_()
{
}

bool Native::Aaa::Group::Server::Radius::Server_::has_data() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<direct.size(); index++)
    {
        if(direct[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Aaa::Group::Server::Radius::Server_::has_operation() const
{
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<direct.size(); index++)
    {
        if(direct[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Aaa::Group::Server::Radius::Server_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Radius::Server_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::Server_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<Native::Aaa::Group::Server::Radius::Server_::Name>();
        c->parent = this;
        name.push_back(c);
        return c;
    }

    if(child_yang_name == "direct")
    {
        for(auto const & c : direct)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Group::Server::Radius::Server_::Direct>();
        c->parent = this;
        direct.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::Server_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : name)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : direct)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Aaa::Group::Server::Radius::Server_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Group::Server::Radius::Server_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Group::Server::Radius::Server_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "direct")
        return true;
    return false;
}

Native::Aaa::Group::Server::Radius::Server_::Name::Name()
    :
    name{YType::str, "name"}
{

    yang_name = "name"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Radius::Server_::Name::~Name()
{
}

bool Native::Aaa::Group::Server::Radius::Server_::Name::has_data() const
{
    return name.is_set;
}

bool Native::Aaa::Group::Server::Radius::Server_::Name::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Aaa::Group::Server::Radius::Server_::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Radius::Server_::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::Server_::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::Server_::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Radius::Server_::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Group::Server::Radius::Server_::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Aaa::Group::Server::Radius::Server_::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Aaa::Group::Server::Radius::Server_::Direct::Direct()
    :
    name{YType::str, "name"},
    auth_port{YType::uint16, "auth-port"},
    acct_port{YType::uint16, "acct-port"}
{

    yang_name = "direct"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Radius::Server_::Direct::~Direct()
{
}

bool Native::Aaa::Group::Server::Radius::Server_::Direct::has_data() const
{
    return name.is_set
	|| auth_port.is_set
	|| acct_port.is_set;
}

bool Native::Aaa::Group::Server::Radius::Server_::Direct::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(auth_port.yfilter)
	|| ydk::is_set(acct_port.yfilter);
}

std::string Native::Aaa::Group::Server::Radius::Server_::Direct::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direct" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Radius::Server_::Direct::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (auth_port.is_set || is_set(auth_port.yfilter)) leaf_name_data.push_back(auth_port.get_name_leafdata());
    if (acct_port.is_set || is_set(acct_port.yfilter)) leaf_name_data.push_back(acct_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::Server_::Direct::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::Server_::Direct::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Radius::Server_::Direct::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-port")
    {
        auth_port = value;
        auth_port.value_namespace = name_space;
        auth_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-port")
    {
        acct_port = value;
        acct_port.value_namespace = name_space;
        acct_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Group::Server::Radius::Server_::Direct::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "auth-port")
    {
        auth_port.yfilter = yfilter;
    }
    if(value_path == "acct-port")
    {
        acct_port.yfilter = yfilter;
    }
}

bool Native::Aaa::Group::Server::Radius::Server_::Direct::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "auth-port" || name == "acct-port")
        return true;
    return false;
}

Native::Aaa::Group::Server::Radius::Ip::Ip()
    :
    radius(std::make_shared<Native::Aaa::Group::Server::Radius::Ip::Radius_>())
	,vrf(std::make_shared<Native::Aaa::Group::Server::Radius::Ip::Vrf>())
{
    radius->parent = this;
    vrf->parent = this;

    yang_name = "ip"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Radius::Ip::~Ip()
{
}

bool Native::Aaa::Group::Server::Radius::Ip::has_data() const
{
    return (radius !=  nullptr && radius->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Aaa::Group::Server::Radius::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (radius !=  nullptr && radius->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Aaa::Group::Server::Radius::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Radius::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radius")
    {
        if(radius == nullptr)
        {
            radius = std::make_shared<Native::Aaa::Group::Server::Radius::Ip::Radius_>();
        }
        return radius;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Aaa::Group::Server::Radius::Ip::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(radius != nullptr)
    {
        children["radius"] = radius;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Aaa::Group::Server::Radius::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Group::Server::Radius::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Group::Server::Radius::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radius" || name == "vrf")
        return true;
    return false;
}

Native::Aaa::Group::Server::Radius::Ip::Radius_::Radius_()
    :
    source_interface{YType::str, "source-interface"}
{

    yang_name = "radius"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Radius::Ip::Radius_::~Radius_()
{
}

bool Native::Aaa::Group::Server::Radius::Ip::Radius_::has_data() const
{
    return source_interface.is_set;
}

bool Native::Aaa::Group::Server::Radius::Ip::Radius_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_interface.yfilter);
}

std::string Native::Aaa::Group::Server::Radius::Ip::Radius_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Radius::Ip::Radius_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::Ip::Radius_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::Ip::Radius_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Radius::Ip::Radius_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Group::Server::Radius::Ip::Radius_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Native::Aaa::Group::Server::Radius::Ip::Radius_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface")
        return true;
    return false;
}

Native::Aaa::Group::Server::Radius::Ip::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{

    yang_name = "vrf"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Radius::Ip::Vrf::~Vrf()
{
}

bool Native::Aaa::Group::Server::Radius::Ip::Vrf::has_data() const
{
    return forwarding.is_set;
}

bool Native::Aaa::Group::Server::Radius::Ip::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Aaa::Group::Server::Radius::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Radius::Ip::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Radius::Ip::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Group::Server::Radius::Ip::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Aaa::Group::Server::Radius::Ip::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Aaa::Group::Server::Radius::LoadBalance::LoadBalance()
    :
    method(std::make_shared<Native::Aaa::Group::Server::Radius::LoadBalance::Method>())
{
    method->parent = this;

    yang_name = "load-balance"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Radius::LoadBalance::~LoadBalance()
{
}

bool Native::Aaa::Group::Server::Radius::LoadBalance::has_data() const
{
    return (method !=  nullptr && method->has_data());
}

bool Native::Aaa::Group::Server::Radius::LoadBalance::has_operation() const
{
    return is_set(yfilter)
	|| (method !=  nullptr && method->has_operation());
}

std::string Native::Aaa::Group::Server::Radius::LoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Radius::LoadBalance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::LoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Aaa::Group::Server::Radius::LoadBalance::Method>();
        }
        return method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::LoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(method != nullptr)
    {
        children["method"] = method;
    }

    return children;
}

void Native::Aaa::Group::Server::Radius::LoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Group::Server::Radius::LoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Group::Server::Radius::LoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method")
        return true;
    return false;
}

Native::Aaa::Group::Server::Radius::LoadBalance::Method::Method()
    :
    least_outstanding(std::make_shared<Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding>())
{
    least_outstanding->parent = this;

    yang_name = "method"; yang_parent_name = "load-balance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Radius::LoadBalance::Method::~Method()
{
}

bool Native::Aaa::Group::Server::Radius::LoadBalance::Method::has_data() const
{
    return (least_outstanding !=  nullptr && least_outstanding->has_data());
}

bool Native::Aaa::Group::Server::Radius::LoadBalance::Method::has_operation() const
{
    return is_set(yfilter)
	|| (least_outstanding !=  nullptr && least_outstanding->has_operation());
}

std::string Native::Aaa::Group::Server::Radius::LoadBalance::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Radius::LoadBalance::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::LoadBalance::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "least-outstanding")
    {
        if(least_outstanding == nullptr)
        {
            least_outstanding = std::make_shared<Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding>();
        }
        return least_outstanding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::LoadBalance::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(least_outstanding != nullptr)
    {
        children["least-outstanding"] = least_outstanding;
    }

    return children;
}

void Native::Aaa::Group::Server::Radius::LoadBalance::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Group::Server::Radius::LoadBalance::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Group::Server::Radius::LoadBalance::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "least-outstanding")
        return true;
    return false;
}

Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::LeastOutstanding()
    :
    batch_size{YType::uint32, "batch-size"},
    ignore_preferred_server{YType::empty, "ignore-preferred-server"}
{

    yang_name = "least-outstanding"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::~LeastOutstanding()
{
}

bool Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::has_data() const
{
    return batch_size.is_set
	|| ignore_preferred_server.is_set;
}

bool Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(batch_size.yfilter)
	|| ydk::is_set(ignore_preferred_server.yfilter);
}

std::string Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "least-outstanding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (batch_size.is_set || is_set(batch_size.yfilter)) leaf_name_data.push_back(batch_size.get_name_leafdata());
    if (ignore_preferred_server.is_set || is_set(ignore_preferred_server.yfilter)) leaf_name_data.push_back(ignore_preferred_server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "batch-size")
    {
        batch_size = value;
        batch_size.value_namespace = name_space;
        batch_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ignore-preferred-server")
    {
        ignore_preferred_server = value;
        ignore_preferred_server.value_namespace = name_space;
        ignore_preferred_server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "batch-size")
    {
        batch_size.yfilter = yfilter;
    }
    if(value_path == "ignore-preferred-server")
    {
        ignore_preferred_server.yfilter = yfilter;
    }
}

bool Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "batch-size" || name == "ignore-preferred-server")
        return true;
    return false;
}

Native::Aaa::Authentication::Authentication()
    :
    attempts(std::make_shared<Native::Aaa::Authentication::Attempts>())
	,dot1x(std::make_shared<Native::Aaa::Authentication::Dot1X>())
	,enable(std::make_shared<Native::Aaa::Authentication::Enable>())
	,eou(std::make_shared<Native::Aaa::Authentication::Eou>())
	,onep(std::make_shared<Native::Aaa::Authentication::Onep>())
{
    attempts->parent = this;
    dot1x->parent = this;
    enable->parent = this;
    eou->parent = this;
    onep->parent = this;

    yang_name = "authentication"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::~Authentication()
{
}

bool Native::Aaa::Authentication::has_data() const
{
    for (std::size_t index=0; index<login.size(); index++)
    {
        if(login[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ppp.size(); index++)
    {
        if(ppp[index]->has_data())
            return true;
    }
    return (attempts !=  nullptr && attempts->has_data())
	|| (dot1x !=  nullptr && dot1x->has_data())
	|| (enable !=  nullptr && enable->has_data())
	|| (eou !=  nullptr && eou->has_data())
	|| (onep !=  nullptr && onep->has_data());
}

bool Native::Aaa::Authentication::has_operation() const
{
    for (std::size_t index=0; index<login.size(); index++)
    {
        if(login[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ppp.size(); index++)
    {
        if(ppp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (attempts !=  nullptr && attempts->has_operation())
	|| (dot1x !=  nullptr && dot1x->has_operation())
	|| (enable !=  nullptr && enable->has_operation())
	|| (eou !=  nullptr && eou->has_operation())
	|| (onep !=  nullptr && onep->has_operation());
}

std::string Native::Aaa::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attempts")
    {
        if(attempts == nullptr)
        {
            attempts = std::make_shared<Native::Aaa::Authentication::Attempts>();
        }
        return attempts;
    }

    if(child_yang_name == "dot1x")
    {
        if(dot1x == nullptr)
        {
            dot1x = std::make_shared<Native::Aaa::Authentication::Dot1X>();
        }
        return dot1x;
    }

    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Aaa::Authentication::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "eou")
    {
        if(eou == nullptr)
        {
            eou = std::make_shared<Native::Aaa::Authentication::Eou>();
        }
        return eou;
    }

    if(child_yang_name == "login")
    {
        for(auto const & c : login)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Authentication::Login>();
        c->parent = this;
        login.push_back(c);
        return c;
    }

    if(child_yang_name == "onep")
    {
        if(onep == nullptr)
        {
            onep = std::make_shared<Native::Aaa::Authentication::Onep>();
        }
        return onep;
    }

    if(child_yang_name == "ppp")
    {
        for(auto const & c : ppp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Authentication::Ppp>();
        c->parent = this;
        ppp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attempts != nullptr)
    {
        children["attempts"] = attempts;
    }

    if(dot1x != nullptr)
    {
        children["dot1x"] = dot1x;
    }

    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    if(eou != nullptr)
    {
        children["eou"] = eou;
    }

    for (auto const & c : login)
    {
        children[c->get_segment_path()] = c;
    }

    if(onep != nullptr)
    {
        children["onep"] = onep;
    }

    for (auto const & c : ppp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Aaa::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attempts" || name == "dot1x" || name == "enable" || name == "eou" || name == "login" || name == "onep" || name == "ppp")
        return true;
    return false;
}

Native::Aaa::Authentication::Attempts::Attempts()
    :
    login{YType::uint8, "login"}
{

    yang_name = "attempts"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Attempts::~Attempts()
{
}

bool Native::Aaa::Authentication::Attempts::has_data() const
{
    return login.is_set;
}

bool Native::Aaa::Authentication::Attempts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(login.yfilter);
}

std::string Native::Aaa::Authentication::Attempts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Attempts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attempts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Attempts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (login.is_set || is_set(login.yfilter)) leaf_name_data.push_back(login.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Attempts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Attempts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Attempts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "login")
    {
        login = value;
        login.value_namespace = name_space;
        login.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Attempts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "login")
    {
        login.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Attempts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "login")
        return true;
    return false;
}

Native::Aaa::Authentication::Dot1X::Dot1X()
    :
    default_(std::make_shared<Native::Aaa::Authentication::Dot1X::Default_>())
{
    default_->parent = this;

    yang_name = "dot1x"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Dot1X::~Dot1X()
{
}

bool Native::Aaa::Authentication::Dot1X::has_data() const
{
    for (std::size_t index=0; index<dot1x_list.size(); index++)
    {
        if(dot1x_list[index]->has_data())
            return true;
    }
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authentication::Dot1X::has_operation() const
{
    for (std::size_t index=0; index<dot1x_list.size(); index++)
    {
        if(dot1x_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authentication::Dot1X::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Dot1X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Dot1X::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Dot1X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1x-list")
    {
        for(auto const & c : dot1x_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Authentication::Dot1X::Dot1XList>();
        c->parent = this;
        dot1x_list.push_back(c);
        return c;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authentication::Dot1X::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Dot1X::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dot1x_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Authentication::Dot1X::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authentication::Dot1X::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authentication::Dot1X::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x-list" || name == "default")
        return true;
    return false;
}

Native::Aaa::Authentication::Dot1X::Dot1XList::Dot1XList()
    :
    name{YType::str, "name"},
    group{YType::str, "group"}
{

    yang_name = "dot1x-list"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Dot1X::Dot1XList::~Dot1XList()
{
}

bool Native::Aaa::Authentication::Dot1X::Dot1XList::has_data() const
{
    return name.is_set
	|| group.is_set;
}

bool Native::Aaa::Authentication::Dot1X::Dot1XList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Authentication::Dot1X::Dot1XList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Dot1X::Dot1XList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x-list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Dot1X::Dot1XList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Dot1X::Dot1XList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Dot1X::Dot1XList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Dot1X::Dot1XList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Dot1X::Dot1XList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Dot1X::Dot1XList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "group")
        return true;
    return false;
}

Native::Aaa::Authentication::Dot1X::Default_::Default_()
    :
    group{YType::str, "group"}
{

    yang_name = "default"; yang_parent_name = "dot1x"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Dot1X::Default_::~Default_()
{
}

bool Native::Aaa::Authentication::Dot1X::Default_::has_data() const
{
    return group.is_set;
}

bool Native::Aaa::Authentication::Dot1X::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Authentication::Dot1X::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/dot1x/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Dot1X::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Dot1X::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Dot1X::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Dot1X::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Dot1X::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Dot1X::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Dot1X::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Authentication::Enable::Enable()
    :
    default_(std::make_shared<Native::Aaa::Authentication::Enable::Default_>())
{
    default_->parent = this;

    yang_name = "enable"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Enable::~Enable()
{
}

bool Native::Aaa::Authentication::Enable::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authentication::Enable::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authentication::Enable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authentication::Enable::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Authentication::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authentication::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authentication::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Aaa::Authentication::Enable::Default_::Default_()
    :
    group{YType::str, "group"},
    enable{YType::empty, "enable"},
    line{YType::empty, "line"},
    none{YType::empty, "none"}
{

    yang_name = "default"; yang_parent_name = "enable"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Enable::Default_::~Default_()
{
}

bool Native::Aaa::Authentication::Enable::Default_::has_data() const
{
    return group.is_set
	|| enable.is_set
	|| line.is_set
	|| none.is_set;
}

bool Native::Aaa::Authentication::Enable::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authentication::Enable::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/enable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Enable::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Enable::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Enable::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Enable::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Enable::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Enable::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Enable::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "enable" || name == "line" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authentication::Eou::Eou()
    :
    default_(std::make_shared<Native::Aaa::Authentication::Eou::Default_>())
{
    default_->parent = this;

    yang_name = "eou"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Eou::~Eou()
{
}

bool Native::Aaa::Authentication::Eou::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authentication::Eou::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authentication::Eou::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Eou::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eou";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Eou::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Eou::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authentication::Eou::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Eou::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Authentication::Eou::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authentication::Eou::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authentication::Eou::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Aaa::Authentication::Eou::Default_::Default_()
    :
    group(std::make_shared<Native::Aaa::Authentication::Eou::Default_::Group>())
{
    group->parent = this;

    yang_name = "default"; yang_parent_name = "eou"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Eou::Default_::~Default_()
{
}

bool Native::Aaa::Authentication::Eou::Default_::has_data() const
{
    return (group !=  nullptr && group->has_data());
}

bool Native::Aaa::Authentication::Eou::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (group !=  nullptr && group->has_operation());
}

std::string Native::Aaa::Authentication::Eou::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/eou/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Eou::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Eou::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Eou::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Aaa::Authentication::Eou::Default_::Group>();
        }
        return group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Eou::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group != nullptr)
    {
        children["group"] = group;
    }

    return children;
}

void Native::Aaa::Authentication::Eou::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authentication::Eou::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authentication::Eou::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Authentication::Eou::Default_::Group::Group()
    :
    radius{YType::empty, "radius"}
{

    yang_name = "group"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Eou::Default_::Group::~Group()
{
}

bool Native::Aaa::Authentication::Eou::Default_::Group::has_data() const
{
    return radius.is_set;
}

bool Native::Aaa::Authentication::Eou::Default_::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(radius.yfilter);
}

std::string Native::Aaa::Authentication::Eou::Default_::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/eou/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Eou::Default_::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Eou::Default_::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (radius.is_set || is_set(radius.yfilter)) leaf_name_data.push_back(radius.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Eou::Default_::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Eou::Default_::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Eou::Default_::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "radius")
    {
        radius = value;
        radius.value_namespace = name_space;
        radius.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Eou::Default_::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "radius")
    {
        radius.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Eou::Default_::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radius")
        return true;
    return false;
}

Native::Aaa::Authentication::Login::Login()
    :
    name{YType::str, "name"}
    	,
    a1(std::make_shared<Native::Aaa::Authentication::Login::A1>())
	,a2(std::make_shared<Native::Aaa::Authentication::Login::A2>())
	,a3(std::make_shared<Native::Aaa::Authentication::Login::A3>())
	,a4(std::make_shared<Native::Aaa::Authentication::Login::A4>())
{
    a1->parent = this;
    a2->parent = this;
    a3->parent = this;
    a4->parent = this;

    yang_name = "login"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Login::~Login()
{
}

bool Native::Aaa::Authentication::Login::has_data() const
{
    return name.is_set
	|| (a1 !=  nullptr && a1->has_data())
	|| (a2 !=  nullptr && a2->has_data())
	|| (a3 !=  nullptr && a3->has_data())
	|| (a4 !=  nullptr && a4->has_data());
}

bool Native::Aaa::Authentication::Login::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (a1 !=  nullptr && a1->has_operation())
	|| (a2 !=  nullptr && a2->has_operation())
	|| (a3 !=  nullptr && a3->has_operation())
	|| (a4 !=  nullptr && a4->has_operation());
}

std::string Native::Aaa::Authentication::Login::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Login::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "a1")
    {
        if(a1 == nullptr)
        {
            a1 = std::make_shared<Native::Aaa::Authentication::Login::A1>();
        }
        return a1;
    }

    if(child_yang_name == "a2")
    {
        if(a2 == nullptr)
        {
            a2 = std::make_shared<Native::Aaa::Authentication::Login::A2>();
        }
        return a2;
    }

    if(child_yang_name == "a3")
    {
        if(a3 == nullptr)
        {
            a3 = std::make_shared<Native::Aaa::Authentication::Login::A3>();
        }
        return a3;
    }

    if(child_yang_name == "a4")
    {
        if(a4 == nullptr)
        {
            a4 = std::make_shared<Native::Aaa::Authentication::Login::A4>();
        }
        return a4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(a1 != nullptr)
    {
        children["a1"] = a1;
    }

    if(a2 != nullptr)
    {
        children["a2"] = a2;
    }

    if(a3 != nullptr)
    {
        children["a3"] = a3;
    }

    if(a4 != nullptr)
    {
        children["a4"] = a4;
    }

    return children;
}

void Native::Aaa::Authentication::Login::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Login::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Login::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "a1" || name == "a2" || name == "a3" || name == "a4" || name == "name")
        return true;
    return false;
}

Native::Aaa::Authentication::Login::A1::A1()
    :
    none{YType::empty, "none"},
    krb5{YType::empty, "krb5"},
    krb5_telnet{YType::empty, "krb5-telnet"},
    line{YType::empty, "line"},
    enable{YType::empty, "enable"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"},
    group{YType::str, "group"},
    cache{YType::str, "cache"}
{

    yang_name = "a1"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authentication::Login::A1::~A1()
{
}

bool Native::Aaa::Authentication::Login::A1::has_data() const
{
    return none.is_set
	|| krb5.is_set
	|| krb5_telnet.is_set
	|| line.is_set
	|| enable.is_set
	|| local.is_set
	|| local_case.is_set
	|| group.is_set
	|| cache.is_set;
}

bool Native::Aaa::Authentication::Login::A1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(krb5.yfilter)
	|| ydk::is_set(krb5_telnet.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(local_case.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter);
}

std::string Native::Aaa::Authentication::Login::A1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Login::A1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.yfilter)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (krb5_telnet.is_set || is_set(krb5_telnet.yfilter)) leaf_name_data.push_back(krb5_telnet.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.yfilter)) leaf_name_data.push_back(local_case.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Login::A1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Login::A1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Login::A1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
        krb5.value_namespace = name_space;
        krb5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet = value;
        krb5_telnet.value_namespace = name_space;
        krb5_telnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-case")
    {
        local_case = value;
        local_case.value_namespace = name_space;
        local_case.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Login::A1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "krb5")
    {
        krb5.yfilter = yfilter;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "local-case")
    {
        local_case.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Login::A1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "none" || name == "krb5" || name == "krb5-telnet" || name == "line" || name == "enable" || name == "local" || name == "local-case" || name == "group" || name == "cache")
        return true;
    return false;
}

Native::Aaa::Authentication::Login::A2::A2()
    :
    group{YType::str, "group"},
    cache{YType::str, "cache"},
    none{YType::empty, "none"},
    krb5{YType::empty, "krb5"},
    krb5_telnet{YType::empty, "krb5-telnet"},
    line{YType::empty, "line"},
    enable{YType::empty, "enable"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"}
{

    yang_name = "a2"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authentication::Login::A2::~A2()
{
}

bool Native::Aaa::Authentication::Login::A2::has_data() const
{
    return group.is_set
	|| cache.is_set
	|| none.is_set
	|| krb5.is_set
	|| krb5_telnet.is_set
	|| line.is_set
	|| enable.is_set
	|| local.is_set
	|| local_case.is_set;
}

bool Native::Aaa::Authentication::Login::A2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(krb5.yfilter)
	|| ydk::is_set(krb5_telnet.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(local_case.yfilter);
}

std::string Native::Aaa::Authentication::Login::A2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Login::A2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.yfilter)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (krb5_telnet.is_set || is_set(krb5_telnet.yfilter)) leaf_name_data.push_back(krb5_telnet.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.yfilter)) leaf_name_data.push_back(local_case.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Login::A2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Login::A2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Login::A2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
        krb5.value_namespace = name_space;
        krb5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet = value;
        krb5_telnet.value_namespace = name_space;
        krb5_telnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-case")
    {
        local_case = value;
        local_case.value_namespace = name_space;
        local_case.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Login::A2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "krb5")
    {
        krb5.yfilter = yfilter;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "local-case")
    {
        local_case.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Login::A2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "cache" || name == "none" || name == "krb5" || name == "krb5-telnet" || name == "line" || name == "enable" || name == "local" || name == "local-case")
        return true;
    return false;
}

Native::Aaa::Authentication::Login::A3::A3()
    :
    group{YType::str, "group"},
    cache{YType::str, "cache"},
    none{YType::empty, "none"},
    krb5{YType::empty, "krb5"},
    krb5_telnet{YType::empty, "krb5-telnet"},
    line{YType::empty, "line"},
    enable{YType::empty, "enable"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"}
{

    yang_name = "a3"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authentication::Login::A3::~A3()
{
}

bool Native::Aaa::Authentication::Login::A3::has_data() const
{
    return group.is_set
	|| cache.is_set
	|| none.is_set
	|| krb5.is_set
	|| krb5_telnet.is_set
	|| line.is_set
	|| enable.is_set
	|| local.is_set
	|| local_case.is_set;
}

bool Native::Aaa::Authentication::Login::A3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(krb5.yfilter)
	|| ydk::is_set(krb5_telnet.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(local_case.yfilter);
}

std::string Native::Aaa::Authentication::Login::A3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Login::A3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.yfilter)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (krb5_telnet.is_set || is_set(krb5_telnet.yfilter)) leaf_name_data.push_back(krb5_telnet.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.yfilter)) leaf_name_data.push_back(local_case.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Login::A3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Login::A3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Login::A3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
        krb5.value_namespace = name_space;
        krb5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet = value;
        krb5_telnet.value_namespace = name_space;
        krb5_telnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-case")
    {
        local_case = value;
        local_case.value_namespace = name_space;
        local_case.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Login::A3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "krb5")
    {
        krb5.yfilter = yfilter;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "local-case")
    {
        local_case.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Login::A3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "cache" || name == "none" || name == "krb5" || name == "krb5-telnet" || name == "line" || name == "enable" || name == "local" || name == "local-case")
        return true;
    return false;
}

Native::Aaa::Authentication::Login::A4::A4()
    :
    group{YType::str, "group"},
    cache{YType::str, "cache"},
    none{YType::empty, "none"},
    krb5{YType::empty, "krb5"},
    krb5_telnet{YType::empty, "krb5-telnet"},
    line{YType::empty, "line"},
    enable{YType::empty, "enable"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"}
{

    yang_name = "a4"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authentication::Login::A4::~A4()
{
}

bool Native::Aaa::Authentication::Login::A4::has_data() const
{
    return group.is_set
	|| cache.is_set
	|| none.is_set
	|| krb5.is_set
	|| krb5_telnet.is_set
	|| line.is_set
	|| enable.is_set
	|| local.is_set
	|| local_case.is_set;
}

bool Native::Aaa::Authentication::Login::A4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(krb5.yfilter)
	|| ydk::is_set(krb5_telnet.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(local_case.yfilter);
}

std::string Native::Aaa::Authentication::Login::A4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Login::A4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.yfilter)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (krb5_telnet.is_set || is_set(krb5_telnet.yfilter)) leaf_name_data.push_back(krb5_telnet.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.yfilter)) leaf_name_data.push_back(local_case.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Login::A4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Login::A4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Login::A4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
        krb5.value_namespace = name_space;
        krb5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet = value;
        krb5_telnet.value_namespace = name_space;
        krb5_telnet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-case")
    {
        local_case = value;
        local_case.value_namespace = name_space;
        local_case.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Login::A4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "krb5")
    {
        krb5.yfilter = yfilter;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "local-case")
    {
        local_case.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Login::A4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "cache" || name == "none" || name == "krb5" || name == "krb5-telnet" || name == "line" || name == "enable" || name == "local" || name == "local-case")
        return true;
    return false;
}

Native::Aaa::Authentication::Onep::Onep()
    :
    default_(std::make_shared<Native::Aaa::Authentication::Onep::Default_>())
{
    default_->parent = this;

    yang_name = "onep"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Onep::~Onep()
{
}

bool Native::Aaa::Authentication::Onep::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authentication::Onep::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authentication::Onep::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Onep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "onep";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Onep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Onep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authentication::Onep::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Onep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Authentication::Onep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authentication::Onep::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authentication::Onep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Aaa::Authentication::Onep::Default_::Default_()
    :
    local(nullptr) // presence node
{

    yang_name = "default"; yang_parent_name = "onep"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Onep::Default_::~Default_()
{
}

bool Native::Aaa::Authentication::Onep::Default_::has_data() const
{
    return (local !=  nullptr && local->has_data());
}

bool Native::Aaa::Authentication::Onep::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation());
}

std::string Native::Aaa::Authentication::Onep::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/onep/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Onep::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Onep::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Onep::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Aaa::Authentication::Onep::Default_::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Onep::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    return children;
}

void Native::Aaa::Authentication::Onep::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authentication::Onep::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authentication::Onep::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local")
        return true;
    return false;
}

Native::Aaa::Authentication::Onep::Default_::Local::Local()
{

    yang_name = "local"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Onep::Default_::Local::~Local()
{
}

bool Native::Aaa::Authentication::Onep::Default_::Local::has_data() const
{
    return false;
}

bool Native::Aaa::Authentication::Onep::Default_::Local::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Aaa::Authentication::Onep::Default_::Local::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/onep/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Onep::Default_::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Onep::Default_::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Onep::Default_::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Onep::Default_::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Onep::Default_::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authentication::Onep::Default_::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authentication::Onep::Default_::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Aaa::Authentication::Ppp::Ppp()
    :
    id{YType::str, "id"}
    	,
    a1(std::make_shared<Native::Aaa::Authentication::Ppp::A1>())
	,a2(std::make_shared<Native::Aaa::Authentication::Ppp::A2>())
	,a3(std::make_shared<Native::Aaa::Authentication::Ppp::A3>())
	,a4(std::make_shared<Native::Aaa::Authentication::Ppp::A4>())
{
    a1->parent = this;
    a2->parent = this;
    a3->parent = this;
    a4->parent = this;

    yang_name = "ppp"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authentication::Ppp::~Ppp()
{
}

bool Native::Aaa::Authentication::Ppp::has_data() const
{
    return id.is_set
	|| (a1 !=  nullptr && a1->has_data())
	|| (a2 !=  nullptr && a2->has_data())
	|| (a3 !=  nullptr && a3->has_data())
	|| (a4 !=  nullptr && a4->has_data());
}

bool Native::Aaa::Authentication::Ppp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (a1 !=  nullptr && a1->has_operation())
	|| (a2 !=  nullptr && a2->has_operation())
	|| (a3 !=  nullptr && a3->has_operation())
	|| (a4 !=  nullptr && a4->has_operation());
}

std::string Native::Aaa::Authentication::Ppp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authentication::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Ppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "a1")
    {
        if(a1 == nullptr)
        {
            a1 = std::make_shared<Native::Aaa::Authentication::Ppp::A1>();
        }
        return a1;
    }

    if(child_yang_name == "a2")
    {
        if(a2 == nullptr)
        {
            a2 = std::make_shared<Native::Aaa::Authentication::Ppp::A2>();
        }
        return a2;
    }

    if(child_yang_name == "a3")
    {
        if(a3 == nullptr)
        {
            a3 = std::make_shared<Native::Aaa::Authentication::Ppp::A3>();
        }
        return a3;
    }

    if(child_yang_name == "a4")
    {
        if(a4 == nullptr)
        {
            a4 = std::make_shared<Native::Aaa::Authentication::Ppp::A4>();
        }
        return a4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(a1 != nullptr)
    {
        children["a1"] = a1;
    }

    if(a2 != nullptr)
    {
        children["a2"] = a2;
    }

    if(a3 != nullptr)
    {
        children["a3"] = a3;
    }

    if(a4 != nullptr)
    {
        children["a4"] = a4;
    }

    return children;
}

void Native::Aaa::Authentication::Ppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Ppp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Ppp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "a1" || name == "a2" || name == "a3" || name == "a4" || name == "id")
        return true;
    return false;
}

Native::Aaa::Authentication::Ppp::A1::A1()
    :
    if_needed{YType::empty, "if-needed"},
    none{YType::empty, "none"},
    krb5{YType::empty, "krb5"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"},
    group{YType::str, "group"},
    cache{YType::str, "cache"}
{

    yang_name = "a1"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authentication::Ppp::A1::~A1()
{
}

bool Native::Aaa::Authentication::Ppp::A1::has_data() const
{
    return if_needed.is_set
	|| none.is_set
	|| krb5.is_set
	|| local.is_set
	|| local_case.is_set
	|| group.is_set
	|| cache.is_set;
}

bool Native::Aaa::Authentication::Ppp::A1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_needed.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(krb5.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(local_case.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter);
}

std::string Native::Aaa::Authentication::Ppp::A1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Ppp::A1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_needed.is_set || is_set(if_needed.yfilter)) leaf_name_data.push_back(if_needed.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.yfilter)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.yfilter)) leaf_name_data.push_back(local_case.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Ppp::A1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Ppp::A1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Ppp::A1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-needed")
    {
        if_needed = value;
        if_needed.value_namespace = name_space;
        if_needed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
        krb5.value_namespace = name_space;
        krb5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-case")
    {
        local_case = value;
        local_case.value_namespace = name_space;
        local_case.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Ppp::A1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-needed")
    {
        if_needed.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "krb5")
    {
        krb5.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "local-case")
    {
        local_case.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Ppp::A1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-needed" || name == "none" || name == "krb5" || name == "local" || name == "local-case" || name == "group" || name == "cache")
        return true;
    return false;
}

Native::Aaa::Authentication::Ppp::A2::A2()
    :
    group{YType::str, "group"},
    cache{YType::str, "cache"},
    none{YType::empty, "none"},
    krb5{YType::empty, "krb5"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"}
{

    yang_name = "a2"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authentication::Ppp::A2::~A2()
{
}

bool Native::Aaa::Authentication::Ppp::A2::has_data() const
{
    return group.is_set
	|| cache.is_set
	|| none.is_set
	|| krb5.is_set
	|| local.is_set
	|| local_case.is_set;
}

bool Native::Aaa::Authentication::Ppp::A2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(krb5.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(local_case.yfilter);
}

std::string Native::Aaa::Authentication::Ppp::A2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Ppp::A2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.yfilter)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.yfilter)) leaf_name_data.push_back(local_case.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Ppp::A2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Ppp::A2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Ppp::A2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
        krb5.value_namespace = name_space;
        krb5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-case")
    {
        local_case = value;
        local_case.value_namespace = name_space;
        local_case.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Ppp::A2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "krb5")
    {
        krb5.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "local-case")
    {
        local_case.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Ppp::A2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "cache" || name == "none" || name == "krb5" || name == "local" || name == "local-case")
        return true;
    return false;
}

Native::Aaa::Authentication::Ppp::A3::A3()
    :
    group{YType::str, "group"},
    cache{YType::str, "cache"},
    none{YType::empty, "none"},
    krb5{YType::empty, "krb5"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"}
{

    yang_name = "a3"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authentication::Ppp::A3::~A3()
{
}

bool Native::Aaa::Authentication::Ppp::A3::has_data() const
{
    return group.is_set
	|| cache.is_set
	|| none.is_set
	|| krb5.is_set
	|| local.is_set
	|| local_case.is_set;
}

bool Native::Aaa::Authentication::Ppp::A3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(krb5.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(local_case.yfilter);
}

std::string Native::Aaa::Authentication::Ppp::A3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Ppp::A3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.yfilter)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.yfilter)) leaf_name_data.push_back(local_case.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Ppp::A3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Ppp::A3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Ppp::A3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
        krb5.value_namespace = name_space;
        krb5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-case")
    {
        local_case = value;
        local_case.value_namespace = name_space;
        local_case.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Ppp::A3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "krb5")
    {
        krb5.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "local-case")
    {
        local_case.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Ppp::A3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "cache" || name == "none" || name == "krb5" || name == "local" || name == "local-case")
        return true;
    return false;
}

Native::Aaa::Authentication::Ppp::A4::A4()
    :
    group{YType::str, "group"},
    cache{YType::str, "cache"},
    none{YType::empty, "none"},
    krb5{YType::empty, "krb5"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"}
{

    yang_name = "a4"; yang_parent_name = "ppp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authentication::Ppp::A4::~A4()
{
}

bool Native::Aaa::Authentication::Ppp::A4::has_data() const
{
    return group.is_set
	|| cache.is_set
	|| none.is_set
	|| krb5.is_set
	|| local.is_set
	|| local_case.is_set;
}

bool Native::Aaa::Authentication::Ppp::A4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(krb5.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(local_case.yfilter);
}

std::string Native::Aaa::Authentication::Ppp::A4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authentication::Ppp::A4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.yfilter)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.yfilter)) leaf_name_data.push_back(local_case.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Ppp::A4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Ppp::A4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Ppp::A4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
        krb5.value_namespace = name_space;
        krb5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-case")
    {
        local_case = value;
        local_case.value_namespace = name_space;
        local_case.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authentication::Ppp::A4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "krb5")
    {
        krb5.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "local-case")
    {
        local_case.yfilter = yfilter;
    }
}

bool Native::Aaa::Authentication::Ppp::A4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "cache" || name == "none" || name == "krb5" || name == "local" || name == "local-case")
        return true;
    return false;
}

Native::Aaa::Authorization::Authorization()
    :
    console{YType::empty, "console"},
    config_commands{YType::empty, "config-commands"}
    	,
    auth_type(std::make_shared<Native::Aaa::Authorization::AuthType>())
	,configuration(std::make_shared<Native::Aaa::Authorization::Configuration>())
	,auth_proxy(std::make_shared<Native::Aaa::Authorization::AuthProxy>())
	,onep(std::make_shared<Native::Aaa::Authorization::Onep>())
{
    auth_type->parent = this;
    configuration->parent = this;
    auth_proxy->parent = this;
    onep->parent = this;

    yang_name = "authorization"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::~Authorization()
{
}

bool Native::Aaa::Authorization::has_data() const
{
    for (std::size_t index=0; index<commands.size(); index++)
    {
        if(commands[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<exec.size(); index++)
    {
        if(exec[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eventmanager.size(); index++)
    {
        if(eventmanager[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return console.is_set
	|| config_commands.is_set
	|| (auth_type !=  nullptr && auth_type->has_data())
	|| (configuration !=  nullptr && configuration->has_data())
	|| (auth_proxy !=  nullptr && auth_proxy->has_data())
	|| (onep !=  nullptr && onep->has_data());
}

bool Native::Aaa::Authorization::has_operation() const
{
    for (std::size_t index=0; index<commands.size(); index++)
    {
        if(commands[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<exec.size(); index++)
    {
        if(exec[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eventmanager.size(); index++)
    {
        if(eventmanager[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(console.yfilter)
	|| ydk::is_set(config_commands.yfilter)
	|| (auth_type !=  nullptr && auth_type->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (auth_proxy !=  nullptr && auth_proxy->has_operation())
	|| (onep !=  nullptr && onep->has_operation());
}

std::string Native::Aaa::Authorization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (console.is_set || is_set(console.yfilter)) leaf_name_data.push_back(console.get_name_leafdata());
    if (config_commands.is_set || is_set(config_commands.yfilter)) leaf_name_data.push_back(config_commands.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth-type")
    {
        if(auth_type == nullptr)
        {
            auth_type = std::make_shared<Native::Aaa::Authorization::AuthType>();
        }
        return auth_type;
    }

    if(child_yang_name == "commands")
    {
        for(auto const & c : commands)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Authorization::Commands>();
        c->parent = this;
        commands.push_back(c);
        return c;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::Aaa::Authorization::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "exec")
    {
        for(auto const & c : exec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Authorization::Exec>();
        c->parent = this;
        exec.push_back(c);
        return c;
    }

    if(child_yang_name == "eventmanager")
    {
        for(auto const & c : eventmanager)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Authorization::Eventmanager>();
        c->parent = this;
        eventmanager.push_back(c);
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
        auto c = std::make_shared<Native::Aaa::Authorization::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    if(child_yang_name == "auth-proxy")
    {
        if(auth_proxy == nullptr)
        {
            auth_proxy = std::make_shared<Native::Aaa::Authorization::AuthProxy>();
        }
        return auth_proxy;
    }

    if(child_yang_name == "onep")
    {
        if(onep == nullptr)
        {
            onep = std::make_shared<Native::Aaa::Authorization::Onep>();
        }
        return onep;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auth_type != nullptr)
    {
        children["auth-type"] = auth_type;
    }

    for (auto const & c : commands)
    {
        children[c->get_segment_path()] = c;
    }

    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    for (auto const & c : exec)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : eventmanager)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : network)
    {
        children[c->get_segment_path()] = c;
    }

    if(auth_proxy != nullptr)
    {
        children["auth-proxy"] = auth_proxy;
    }

    if(onep != nullptr)
    {
        children["onep"] = onep;
    }

    return children;
}

void Native::Aaa::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "console")
    {
        console = value;
        console.value_namespace = name_space;
        console.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-commands")
    {
        config_commands = value;
        config_commands.value_namespace = name_space;
        config_commands.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "console")
    {
        console.yfilter = yfilter;
    }
    if(value_path == "config-commands")
    {
        config_commands.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth-type" || name == "commands" || name == "configuration" || name == "exec" || name == "eventmanager" || name == "network" || name == "auth-proxy" || name == "onep" || name == "console" || name == "config-commands")
        return true;
    return false;
}

Native::Aaa::Authorization::AuthType::AuthType()
    :
    default_(std::make_shared<Native::Aaa::Authorization::AuthType::Default_>())
{
    default_->parent = this;

    yang_name = "auth-type"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::AuthType::~AuthType()
{
}

bool Native::Aaa::Authorization::AuthType::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authorization::AuthType::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authorization::AuthType::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::AuthType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::AuthType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::AuthType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authorization::AuthType::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::AuthType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Authorization::AuthType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::AuthType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::AuthType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Aaa::Authorization::AuthType::Default_::Default_()
    :
    group{YType::enumeration, "group"}
{

    yang_name = "default"; yang_parent_name = "auth-type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::AuthType::Default_::~Default_()
{
}

bool Native::Aaa::Authorization::AuthType::Default_::has_data() const
{
    return group.is_set;
}

bool Native::Aaa::Authorization::AuthType::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Authorization::AuthType::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/auth-type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::AuthType::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::AuthType::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::AuthType::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::AuthType::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::AuthType::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::AuthType::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::AuthType::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Authorization::Commands::Commands()
    :
    level{YType::uint8, "level"},
    list_name{YType::str, "list-name"},
    group{YType::str, "group"},
    if_authenticated{YType::empty, "if-authenticated"},
    local{YType::empty, "local"},
    none{YType::empty, "none"}
{

    yang_name = "commands"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::Commands::~Commands()
{
}

bool Native::Aaa::Authorization::Commands::has_data() const
{
    return level.is_set
	|| list_name.is_set
	|| group.is_set
	|| if_authenticated.is_set
	|| local.is_set
	|| none.is_set;
}

bool Native::Aaa::Authorization::Commands::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(list_name.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authorization::Commands::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Commands::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "commands" <<"[level='" <<level <<"']" <<"[list-name='" <<list_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Commands::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (list_name.is_set || is_set(list_name.yfilter)) leaf_name_data.push_back(list_name.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Commands::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Commands::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Commands::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list-name")
    {
        list_name = value;
        list_name.value_namespace = name_space;
        list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Commands::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "list-name")
    {
        list_name.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Commands::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "list-name" || name == "group" || name == "if-authenticated" || name == "local" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authorization::Configuration::Configuration()
    :
    default_(std::make_shared<Native::Aaa::Authorization::Configuration::Default_>())
{
    default_->parent = this;

    yang_name = "configuration"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::Configuration::~Configuration()
{
}

bool Native::Aaa::Authorization::Configuration::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authorization::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authorization::Configuration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authorization::Configuration::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Authorization::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Aaa::Authorization::Configuration::Default_::Default_()
    :
    group(std::make_shared<Native::Aaa::Authorization::Configuration::Default_::Group>())
{
    group->parent = this;

    yang_name = "default"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::Configuration::Default_::~Default_()
{
}

bool Native::Aaa::Authorization::Configuration::Default_::has_data() const
{
    return (group !=  nullptr && group->has_data());
}

bool Native::Aaa::Authorization::Configuration::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (group !=  nullptr && group->has_operation());
}

std::string Native::Aaa::Authorization::Configuration::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/configuration/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Configuration::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Configuration::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Configuration::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Aaa::Authorization::Configuration::Default_::Group>();
        }
        return group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Configuration::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group != nullptr)
    {
        children["group"] = group;
    }

    return children;
}

void Native::Aaa::Authorization::Configuration::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::Configuration::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::Configuration::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Authorization::Configuration::Default_::Group::Group()
{

    yang_name = "group"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::Configuration::Default_::Group::~Group()
{
}

bool Native::Aaa::Authorization::Configuration::Default_::Group::has_data() const
{
    for (std::size_t index=0; index<group_name.size(); index++)
    {
        if(group_name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Aaa::Authorization::Configuration::Default_::Group::has_operation() const
{
    for (std::size_t index=0; index<group_name.size(); index++)
    {
        if(group_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Aaa::Authorization::Configuration::Default_::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/configuration/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Configuration::Default_::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Configuration::Default_::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Configuration::Default_::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-name")
    {
        for(auto const & c : group_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Authorization::Configuration::Default_::Group::GroupName>();
        c->parent = this;
        group_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Configuration::Default_::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Aaa::Authorization::Configuration::Default_::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::Configuration::Default_::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::Configuration::Default_::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name")
        return true;
    return false;
}

Native::Aaa::Authorization::Configuration::Default_::Group::GroupName::GroupName()
    :
    group_name{YType::str, "group-name"}
{

    yang_name = "group-name"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::Configuration::Default_::Group::GroupName::~GroupName()
{
}

bool Native::Aaa::Authorization::Configuration::Default_::Group::GroupName::has_data() const
{
    return group_name.is_set;
}

bool Native::Aaa::Authorization::Configuration::Default_::Group::GroupName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter);
}

std::string Native::Aaa::Authorization::Configuration::Default_::Group::GroupName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/configuration/default/group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Configuration::Default_::Group::GroupName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-name" <<"[group-name='" <<group_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Configuration::Default_::Group::GroupName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Configuration::Default_::Group::GroupName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Configuration::Default_::Group::GroupName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Configuration::Default_::Group::GroupName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Configuration::Default_::Group::GroupName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Configuration::Default_::Group::GroupName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name")
        return true;
    return false;
}

Native::Aaa::Authorization::Exec::Exec()
    :
    name{YType::str, "name"}
    	,
    a1(std::make_shared<Native::Aaa::Authorization::Exec::A1>())
	,a2(std::make_shared<Native::Aaa::Authorization::Exec::A2>())
	,a3(std::make_shared<Native::Aaa::Authorization::Exec::A3>())
	,a4(std::make_shared<Native::Aaa::Authorization::Exec::A4>())
{
    a1->parent = this;
    a2->parent = this;
    a3->parent = this;
    a4->parent = this;

    yang_name = "exec"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::Exec::~Exec()
{
}

bool Native::Aaa::Authorization::Exec::has_data() const
{
    return name.is_set
	|| (a1 !=  nullptr && a1->has_data())
	|| (a2 !=  nullptr && a2->has_data())
	|| (a3 !=  nullptr && a3->has_data())
	|| (a4 !=  nullptr && a4->has_data());
}

bool Native::Aaa::Authorization::Exec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (a1 !=  nullptr && a1->has_operation())
	|| (a2 !=  nullptr && a2->has_operation())
	|| (a3 !=  nullptr && a3->has_operation())
	|| (a4 !=  nullptr && a4->has_operation());
}

std::string Native::Aaa::Authorization::Exec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "a1")
    {
        if(a1 == nullptr)
        {
            a1 = std::make_shared<Native::Aaa::Authorization::Exec::A1>();
        }
        return a1;
    }

    if(child_yang_name == "a2")
    {
        if(a2 == nullptr)
        {
            a2 = std::make_shared<Native::Aaa::Authorization::Exec::A2>();
        }
        return a2;
    }

    if(child_yang_name == "a3")
    {
        if(a3 == nullptr)
        {
            a3 = std::make_shared<Native::Aaa::Authorization::Exec::A3>();
        }
        return a3;
    }

    if(child_yang_name == "a4")
    {
        if(a4 == nullptr)
        {
            a4 = std::make_shared<Native::Aaa::Authorization::Exec::A4>();
        }
        return a4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(a1 != nullptr)
    {
        children["a1"] = a1;
    }

    if(a2 != nullptr)
    {
        children["a2"] = a2;
    }

    if(a3 != nullptr)
    {
        children["a3"] = a3;
    }

    if(a4 != nullptr)
    {
        children["a4"] = a4;
    }

    return children;
}

void Native::Aaa::Authorization::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "a1" || name == "a2" || name == "a3" || name == "a4" || name == "name")
        return true;
    return false;
}

Native::Aaa::Authorization::Exec::A1::A1()
    :
    if_authenticated{YType::empty, "if-authenticated"},
    none{YType::empty, "none"},
    krb5_instance{YType::empty, "krb5-instance"},
    local{YType::empty, "local"},
    group{YType::str, "group"},
    cache{YType::str, "cache"}
{

    yang_name = "a1"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authorization::Exec::A1::~A1()
{
}

bool Native::Aaa::Authorization::Exec::A1::has_data() const
{
    return if_authenticated.is_set
	|| none.is_set
	|| krb5_instance.is_set
	|| local.is_set
	|| group.is_set
	|| cache.is_set;
}

bool Native::Aaa::Authorization::Exec::A1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(krb5_instance.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter);
}

std::string Native::Aaa::Authorization::Exec::A1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Exec::A1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (krb5_instance.is_set || is_set(krb5_instance.yfilter)) leaf_name_data.push_back(krb5_instance.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Exec::A1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Exec::A1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Exec::A1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance = value;
        krb5_instance.value_namespace = name_space;
        krb5_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Exec::A1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Exec::A1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-authenticated" || name == "none" || name == "krb5-instance" || name == "local" || name == "group" || name == "cache")
        return true;
    return false;
}

Native::Aaa::Authorization::Exec::A2::A2()
    :
    group{YType::str, "group"},
    cache{YType::str, "cache"},
    if_authenticated{YType::empty, "if-authenticated"},
    none{YType::empty, "none"},
    krb5_instance{YType::empty, "krb5-instance"},
    local{YType::empty, "local"}
{

    yang_name = "a2"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authorization::Exec::A2::~A2()
{
}

bool Native::Aaa::Authorization::Exec::A2::has_data() const
{
    return group.is_set
	|| cache.is_set
	|| if_authenticated.is_set
	|| none.is_set
	|| krb5_instance.is_set
	|| local.is_set;
}

bool Native::Aaa::Authorization::Exec::A2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(krb5_instance.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Aaa::Authorization::Exec::A2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Exec::A2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (krb5_instance.is_set || is_set(krb5_instance.yfilter)) leaf_name_data.push_back(krb5_instance.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Exec::A2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Exec::A2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Exec::A2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance = value;
        krb5_instance.value_namespace = name_space;
        krb5_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Exec::A2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Exec::A2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "cache" || name == "if-authenticated" || name == "none" || name == "krb5-instance" || name == "local")
        return true;
    return false;
}

Native::Aaa::Authorization::Exec::A3::A3()
    :
    group{YType::str, "group"},
    cache{YType::str, "cache"},
    none{YType::empty, "none"},
    if_authenticated{YType::empty, "if-authenticated"},
    krb5_instance{YType::empty, "krb5-instance"},
    local{YType::empty, "local"}
{

    yang_name = "a3"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authorization::Exec::A3::~A3()
{
}

bool Native::Aaa::Authorization::Exec::A3::has_data() const
{
    return group.is_set
	|| cache.is_set
	|| none.is_set
	|| if_authenticated.is_set
	|| krb5_instance.is_set
	|| local.is_set;
}

bool Native::Aaa::Authorization::Exec::A3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(krb5_instance.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Aaa::Authorization::Exec::A3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Exec::A3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (krb5_instance.is_set || is_set(krb5_instance.yfilter)) leaf_name_data.push_back(krb5_instance.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Exec::A3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Exec::A3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Exec::A3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance = value;
        krb5_instance.value_namespace = name_space;
        krb5_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Exec::A3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Exec::A3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "cache" || name == "none" || name == "if-authenticated" || name == "krb5-instance" || name == "local")
        return true;
    return false;
}

Native::Aaa::Authorization::Exec::A4::A4()
    :
    group{YType::str, "group"},
    cache{YType::str, "cache"},
    none{YType::empty, "none"},
    if_authenticated{YType::empty, "if-authenticated"},
    krb5_instance{YType::empty, "krb5-instance"},
    local{YType::empty, "local"}
{

    yang_name = "a4"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authorization::Exec::A4::~A4()
{
}

bool Native::Aaa::Authorization::Exec::A4::has_data() const
{
    return group.is_set
	|| cache.is_set
	|| none.is_set
	|| if_authenticated.is_set
	|| krb5_instance.is_set
	|| local.is_set;
}

bool Native::Aaa::Authorization::Exec::A4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(krb5_instance.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Aaa::Authorization::Exec::A4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Exec::A4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (krb5_instance.is_set || is_set(krb5_instance.yfilter)) leaf_name_data.push_back(krb5_instance.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Exec::A4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Exec::A4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Exec::A4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance = value;
        krb5_instance.value_namespace = name_space;
        krb5_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Exec::A4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Exec::A4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "cache" || name == "none" || name == "if-authenticated" || name == "krb5-instance" || name == "local")
        return true;
    return false;
}

Native::Aaa::Authorization::Eventmanager::Eventmanager()
    :
    name{YType::str, "name"},
    group{YType::str, "group"},
    local{YType::empty, "local"},
    none{YType::empty, "none"}
{

    yang_name = "eventmanager"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::Eventmanager::~Eventmanager()
{
}

bool Native::Aaa::Authorization::Eventmanager::has_data() const
{
    return name.is_set
	|| group.is_set
	|| local.is_set
	|| none.is_set;
}

bool Native::Aaa::Authorization::Eventmanager::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Aaa::Authorization::Eventmanager::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Eventmanager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eventmanager" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Eventmanager::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Eventmanager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Eventmanager::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Eventmanager::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Eventmanager::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Eventmanager::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "group" || name == "local" || name == "none")
        return true;
    return false;
}

Native::Aaa::Authorization::Network::Network()
    :
    id{YType::str, "id"}
    	,
    a1(std::make_shared<Native::Aaa::Authorization::Network::A1>())
	,a2(std::make_shared<Native::Aaa::Authorization::Network::A2>())
	,a3(std::make_shared<Native::Aaa::Authorization::Network::A3>())
	,a4(std::make_shared<Native::Aaa::Authorization::Network::A4>())
{
    a1->parent = this;
    a2->parent = this;
    a3->parent = this;
    a4->parent = this;

    yang_name = "network"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::Network::~Network()
{
}

bool Native::Aaa::Authorization::Network::has_data() const
{
    return id.is_set
	|| (a1 !=  nullptr && a1->has_data())
	|| (a2 !=  nullptr && a2->has_data())
	|| (a3 !=  nullptr && a3->has_data())
	|| (a4 !=  nullptr && a4->has_data());
}

bool Native::Aaa::Authorization::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (a1 !=  nullptr && a1->has_operation())
	|| (a2 !=  nullptr && a2->has_operation())
	|| (a3 !=  nullptr && a3->has_operation())
	|| (a4 !=  nullptr && a4->has_operation());
}

std::string Native::Aaa::Authorization::Network::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "a1")
    {
        if(a1 == nullptr)
        {
            a1 = std::make_shared<Native::Aaa::Authorization::Network::A1>();
        }
        return a1;
    }

    if(child_yang_name == "a2")
    {
        if(a2 == nullptr)
        {
            a2 = std::make_shared<Native::Aaa::Authorization::Network::A2>();
        }
        return a2;
    }

    if(child_yang_name == "a3")
    {
        if(a3 == nullptr)
        {
            a3 = std::make_shared<Native::Aaa::Authorization::Network::A3>();
        }
        return a3;
    }

    if(child_yang_name == "a4")
    {
        if(a4 == nullptr)
        {
            a4 = std::make_shared<Native::Aaa::Authorization::Network::A4>();
        }
        return a4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(a1 != nullptr)
    {
        children["a1"] = a1;
    }

    if(a2 != nullptr)
    {
        children["a2"] = a2;
    }

    if(a3 != nullptr)
    {
        children["a3"] = a3;
    }

    if(a4 != nullptr)
    {
        children["a4"] = a4;
    }

    return children;
}

void Native::Aaa::Authorization::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "a1" || name == "a2" || name == "a3" || name == "a4" || name == "id")
        return true;
    return false;
}

Native::Aaa::Authorization::Network::A1::A1()
    :
    if_authenticated{YType::empty, "if-authenticated"},
    none{YType::empty, "none"},
    local{YType::empty, "local"},
    group{YType::str, "group"},
    cache{YType::str, "cache"}
{

    yang_name = "a1"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authorization::Network::A1::~A1()
{
}

bool Native::Aaa::Authorization::Network::A1::has_data() const
{
    return if_authenticated.is_set
	|| none.is_set
	|| local.is_set
	|| group.is_set
	|| cache.is_set;
}

bool Native::Aaa::Authorization::Network::A1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(local.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter);
}

std::string Native::Aaa::Authorization::Network::A1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Network::A1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Network::A1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Network::A1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Network::A1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Network::A1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Network::A1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-authenticated" || name == "none" || name == "local" || name == "group" || name == "cache")
        return true;
    return false;
}

Native::Aaa::Authorization::Network::A2::A2()
    :
    group{YType::str, "group"},
    cache{YType::str, "cache"},
    if_authenticated{YType::empty, "if-authenticated"},
    none{YType::empty, "none"},
    local{YType::empty, "local"}
{

    yang_name = "a2"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authorization::Network::A2::~A2()
{
}

bool Native::Aaa::Authorization::Network::A2::has_data() const
{
    return group.is_set
	|| cache.is_set
	|| if_authenticated.is_set
	|| none.is_set
	|| local.is_set;
}

bool Native::Aaa::Authorization::Network::A2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Aaa::Authorization::Network::A2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Network::A2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Network::A2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Network::A2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Network::A2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Network::A2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Network::A2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "cache" || name == "if-authenticated" || name == "none" || name == "local")
        return true;
    return false;
}

Native::Aaa::Authorization::Network::A3::A3()
    :
    group{YType::str, "group"},
    cache{YType::str, "cache"},
    none{YType::empty, "none"},
    if_authenticated{YType::empty, "if-authenticated"},
    local{YType::empty, "local"}
{

    yang_name = "a3"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authorization::Network::A3::~A3()
{
}

bool Native::Aaa::Authorization::Network::A3::has_data() const
{
    return group.is_set
	|| cache.is_set
	|| none.is_set
	|| if_authenticated.is_set
	|| local.is_set;
}

bool Native::Aaa::Authorization::Network::A3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Aaa::Authorization::Network::A3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Network::A3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Network::A3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Network::A3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Network::A3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Network::A3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Network::A3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "cache" || name == "none" || name == "if-authenticated" || name == "local")
        return true;
    return false;
}

Native::Aaa::Authorization::Network::A4::A4()
    :
    group{YType::str, "group"},
    cache{YType::str, "cache"},
    none{YType::empty, "none"},
    if_authenticated{YType::empty, "if-authenticated"},
    local{YType::empty, "local"}
{

    yang_name = "a4"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Authorization::Network::A4::~A4()
{
}

bool Native::Aaa::Authorization::Network::A4::has_data() const
{
    return group.is_set
	|| cache.is_set
	|| none.is_set
	|| if_authenticated.is_set
	|| local.is_set;
}

bool Native::Aaa::Authorization::Network::A4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(if_authenticated.yfilter)
	|| ydk::is_set(local.yfilter);
}

std::string Native::Aaa::Authorization::Network::A4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Network::A4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.yfilter)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Network::A4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Network::A4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Network::A4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
        if_authenticated.value_namespace = name_space;
        if_authenticated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Network::A4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated.yfilter = yfilter;
    }
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Network::A4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "cache" || name == "none" || name == "if-authenticated" || name == "local")
        return true;
    return false;
}

Native::Aaa::Authorization::AuthProxy::AuthProxy()
    :
    default_(std::make_shared<Native::Aaa::Authorization::AuthProxy::Default_>())
{
    default_->parent = this;

    yang_name = "auth-proxy"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::AuthProxy::~AuthProxy()
{
}

bool Native::Aaa::Authorization::AuthProxy::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authorization::AuthProxy::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authorization::AuthProxy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::AuthProxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-proxy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::AuthProxy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::AuthProxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authorization::AuthProxy::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::AuthProxy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Authorization::AuthProxy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::AuthProxy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::AuthProxy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Aaa::Authorization::AuthProxy::Default_::Default_()
    :
    group(std::make_shared<Native::Aaa::Authorization::AuthProxy::Default_::Group>())
{
    group->parent = this;

    yang_name = "default"; yang_parent_name = "auth-proxy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::AuthProxy::Default_::~Default_()
{
}

bool Native::Aaa::Authorization::AuthProxy::Default_::has_data() const
{
    return (group !=  nullptr && group->has_data());
}

bool Native::Aaa::Authorization::AuthProxy::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (group !=  nullptr && group->has_operation());
}

std::string Native::Aaa::Authorization::AuthProxy::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/auth-proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::AuthProxy::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::AuthProxy::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::AuthProxy::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Aaa::Authorization::AuthProxy::Default_::Group>();
        }
        return group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::AuthProxy::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group != nullptr)
    {
        children["group"] = group;
    }

    return children;
}

void Native::Aaa::Authorization::AuthProxy::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::AuthProxy::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::AuthProxy::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Authorization::AuthProxy::Default_::Group::Group()
    :
    radius{YType::empty, "radius"},
    group_name{YType::str, "group-name"}
{

    yang_name = "group"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::AuthProxy::Default_::Group::~Group()
{
}

bool Native::Aaa::Authorization::AuthProxy::Default_::Group::has_data() const
{
    return radius.is_set
	|| group_name.is_set;
}

bool Native::Aaa::Authorization::AuthProxy::Default_::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(radius.yfilter)
	|| ydk::is_set(group_name.yfilter);
}

std::string Native::Aaa::Authorization::AuthProxy::Default_::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/auth-proxy/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::AuthProxy::Default_::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::AuthProxy::Default_::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (radius.is_set || is_set(radius.yfilter)) leaf_name_data.push_back(radius.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::AuthProxy::Default_::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::AuthProxy::Default_::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::AuthProxy::Default_::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "radius")
    {
        radius = value;
        radius.value_namespace = name_space;
        radius.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::AuthProxy::Default_::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "radius")
    {
        radius.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::AuthProxy::Default_::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radius" || name == "group-name")
        return true;
    return false;
}

Native::Aaa::Authorization::Onep::Onep()
    :
    default_(std::make_shared<Native::Aaa::Authorization::Onep::Default_>())
{
    default_->parent = this;

    yang_name = "onep"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::Onep::~Onep()
{
}

bool Native::Aaa::Authorization::Onep::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authorization::Onep::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authorization::Onep::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Onep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "onep";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Onep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Onep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authorization::Onep::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Onep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Authorization::Onep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::Onep::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::Onep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Aaa::Authorization::Onep::Default_::Default_()
    :
    group(std::make_shared<Native::Aaa::Authorization::Onep::Default_::Group>())
{
    group->parent = this;

    yang_name = "default"; yang_parent_name = "onep"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::Onep::Default_::~Default_()
{
}

bool Native::Aaa::Authorization::Onep::Default_::has_data() const
{
    return (group !=  nullptr && group->has_data());
}

bool Native::Aaa::Authorization::Onep::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (group !=  nullptr && group->has_operation());
}

std::string Native::Aaa::Authorization::Onep::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/onep/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Onep::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Onep::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Onep::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Aaa::Authorization::Onep::Default_::Group>();
        }
        return group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Onep::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group != nullptr)
    {
        children["group"] = group;
    }

    return children;
}

void Native::Aaa::Authorization::Onep::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::Onep::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::Onep::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Authorization::Onep::Default_::Group::Group()
{

    yang_name = "group"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::Onep::Default_::Group::~Group()
{
}

bool Native::Aaa::Authorization::Onep::Default_::Group::has_data() const
{
    for (std::size_t index=0; index<group_word.size(); index++)
    {
        if(group_word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Aaa::Authorization::Onep::Default_::Group::has_operation() const
{
    for (std::size_t index=0; index<group_word.size(); index++)
    {
        if(group_word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Aaa::Authorization::Onep::Default_::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/onep/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Onep::Default_::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Onep::Default_::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Onep::Default_::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-word")
    {
        for(auto const & c : group_word)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Authorization::Onep::Default_::Group::GroupWord>();
        c->parent = this;
        group_word.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Onep::Default_::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group_word)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Aaa::Authorization::Onep::Default_::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Authorization::Onep::Default_::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Authorization::Onep::Default_::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-word")
        return true;
    return false;
}

Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::GroupWord()
    :
    group_word{YType::str, "group-word"}
{

    yang_name = "group-word"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::~GroupWord()
{
}

bool Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::has_data() const
{
    return group_word.is_set;
}

bool Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_word.yfilter);
}

std::string Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/onep/default/group/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-word" <<"[group-word='" <<group_word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_word.is_set || is_set(group_word.yfilter)) leaf_name_data.push_back(group_word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-word")
    {
        group_word = value;
        group_word.value_namespace = name_space;
        group_word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-word")
    {
        group_word.yfilter = yfilter;
    }
}

bool Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-word")
        return true;
    return false;
}

Native::Aaa::Accounting::Accounting()
    :
    delay_start(std::make_shared<Native::Aaa::Accounting::DelayStart>())
	,exec_submode(std::make_shared<Native::Aaa::Accounting::ExecSubmode>())
	,send(std::make_shared<Native::Aaa::Accounting::Send>())
	,system(std::make_shared<Native::Aaa::Accounting::System>())
	,update(std::make_shared<Native::Aaa::Accounting::Update>())
	,auth_proxy(std::make_shared<Native::Aaa::Accounting::AuthProxy>())
{
    delay_start->parent = this;
    exec_submode->parent = this;
    send->parent = this;
    system->parent = this;
    update->parent = this;
    auth_proxy->parent = this;

    yang_name = "accounting"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::~Accounting()
{
}

bool Native::Aaa::Accounting::has_data() const
{
    for (std::size_t index=0; index<commands.size(); index++)
    {
        if(commands[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<connection.size(); index++)
    {
        if(connection[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<identity.size(); index++)
    {
        if(identity[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<exec.size(); index++)
    {
        if(exec[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return (delay_start !=  nullptr && delay_start->has_data())
	|| (exec_submode !=  nullptr && exec_submode->has_data())
	|| (send !=  nullptr && send->has_data())
	|| (system !=  nullptr && system->has_data())
	|| (update !=  nullptr && update->has_data())
	|| (auth_proxy !=  nullptr && auth_proxy->has_data());
}

bool Native::Aaa::Accounting::has_operation() const
{
    for (std::size_t index=0; index<commands.size(); index++)
    {
        if(commands[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<connection.size(); index++)
    {
        if(connection[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<identity.size(); index++)
    {
        if(identity[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<exec.size(); index++)
    {
        if(exec[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (delay_start !=  nullptr && delay_start->has_operation())
	|| (exec_submode !=  nullptr && exec_submode->has_operation())
	|| (send !=  nullptr && send->has_operation())
	|| (system !=  nullptr && system->has_operation())
	|| (update !=  nullptr && update->has_operation())
	|| (auth_proxy !=  nullptr && auth_proxy->has_operation());
}

std::string Native::Aaa::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "commands")
    {
        for(auto const & c : commands)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Accounting::Commands>();
        c->parent = this;
        commands.push_back(c);
        return c;
    }

    if(child_yang_name == "connection")
    {
        for(auto const & c : connection)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Accounting::Connection>();
        c->parent = this;
        connection.push_back(c);
        return c;
    }

    if(child_yang_name == "delay-start")
    {
        if(delay_start == nullptr)
        {
            delay_start = std::make_shared<Native::Aaa::Accounting::DelayStart>();
        }
        return delay_start;
    }

    if(child_yang_name == "identity")
    {
        for(auto const & c : identity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Accounting::Identity>();
        c->parent = this;
        identity.push_back(c);
        return c;
    }

    if(child_yang_name == "exec")
    {
        for(auto const & c : exec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Accounting::Exec>();
        c->parent = this;
        exec.push_back(c);
        return c;
    }

    if(child_yang_name == "exec-submode")
    {
        if(exec_submode == nullptr)
        {
            exec_submode = std::make_shared<Native::Aaa::Accounting::ExecSubmode>();
        }
        return exec_submode;
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
        auto c = std::make_shared<Native::Aaa::Accounting::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Aaa::Accounting::Send>();
        }
        return send;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<Native::Aaa::Accounting::System>();
        }
        return system;
    }

    if(child_yang_name == "update")
    {
        if(update == nullptr)
        {
            update = std::make_shared<Native::Aaa::Accounting::Update>();
        }
        return update;
    }

    if(child_yang_name == "auth-proxy")
    {
        if(auth_proxy == nullptr)
        {
            auth_proxy = std::make_shared<Native::Aaa::Accounting::AuthProxy>();
        }
        return auth_proxy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : commands)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : connection)
    {
        children[c->get_segment_path()] = c;
    }

    if(delay_start != nullptr)
    {
        children["delay-start"] = delay_start;
    }

    for (auto const & c : identity)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : exec)
    {
        children[c->get_segment_path()] = c;
    }

    if(exec_submode != nullptr)
    {
        children["exec-submode"] = exec_submode;
    }

    for (auto const & c : network)
    {
        children[c->get_segment_path()] = c;
    }

    if(send != nullptr)
    {
        children["send"] = send;
    }

    if(system != nullptr)
    {
        children["system"] = system;
    }

    if(update != nullptr)
    {
        children["update"] = update;
    }

    if(auth_proxy != nullptr)
    {
        children["auth-proxy"] = auth_proxy;
    }

    return children;
}

void Native::Aaa::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "commands" || name == "connection" || name == "delay-start" || name == "identity" || name == "exec" || name == "exec-submode" || name == "network" || name == "send" || name == "system" || name == "update" || name == "auth-proxy")
        return true;
    return false;
}

Native::Aaa::Accounting::Commands::Commands()
    :
    level{YType::uint8, "level"},
    list_name{YType::str, "list-name"},
    action_type{YType::enumeration, "action-type"},
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "commands"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Commands::~Commands()
{
}

bool Native::Aaa::Accounting::Commands::has_data() const
{
    return level.is_set
	|| list_name.is_set
	|| action_type.is_set
	|| broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Commands::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(list_name.yfilter)
	|| ydk::is_set(action_type.yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Commands::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Commands::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "commands" <<"[level='" <<level <<"']" <<"[list-name='" <<list_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Commands::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (list_name.is_set || is_set(list_name.yfilter)) leaf_name_data.push_back(list_name.get_name_leafdata());
    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Commands::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Commands::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Commands::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "list-name")
    {
        list_name = value;
        list_name.value_namespace = name_space;
        list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Commands::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "list-name")
    {
        list_name.yfilter = yfilter;
    }
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Commands::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "list-name" || name == "action-type" || name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Connection::Connection()
    :
    name{YType::str, "name"},
    none{YType::empty, "none"}
    	,
    start_stop(std::make_shared<Native::Aaa::Accounting::Connection::StartStop>())
	,stop_only(std::make_shared<Native::Aaa::Accounting::Connection::StopOnly>())
{
    start_stop->parent = this;
    stop_only->parent = this;

    yang_name = "connection"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Connection::~Connection()
{
}

bool Native::Aaa::Accounting::Connection::has_data() const
{
    return name.is_set
	|| none.is_set
	|| (start_stop !=  nullptr && start_stop->has_data())
	|| (stop_only !=  nullptr && stop_only->has_data());
}

bool Native::Aaa::Accounting::Connection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(none.yfilter)
	|| (start_stop !=  nullptr && start_stop->has_operation())
	|| (stop_only !=  nullptr && stop_only->has_operation());
}

std::string Native::Aaa::Accounting::Connection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Connection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::Connection::StartStop>();
        }
        return start_stop;
    }

    if(child_yang_name == "stop-only")
    {
        if(stop_only == nullptr)
        {
            stop_only = std::make_shared<Native::Aaa::Accounting::Connection::StopOnly>();
        }
        return stop_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Connection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    if(stop_only != nullptr)
    {
        children["stop-only"] = stop_only;
    }

    return children;
}

void Native::Aaa::Accounting::Connection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Connection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Connection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-stop" || name == "stop-only" || name == "name" || name == "none")
        return true;
    return false;
}

Native::Aaa::Accounting::Connection::StartStop::StartStop()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "start-stop"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::Connection::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::Connection::StartStop::has_data() const
{
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Connection::StartStop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Connection::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Connection::StartStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Connection::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Connection::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Connection::StartStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Connection::StartStop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Connection::StartStop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Connection::StopOnly::StopOnly()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "stop-only"; yang_parent_name = "connection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::Connection::StopOnly::~StopOnly()
{
}

bool Native::Aaa::Accounting::Connection::StopOnly::has_data() const
{
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Connection::StopOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Connection::StopOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Connection::StopOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Connection::StopOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Connection::StopOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Connection::StopOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Connection::StopOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Connection::StopOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::DelayStart::DelayStart()
    :
    extended_delay{YType::uint8, "extended-delay"},
    all{YType::empty, "all"}
{

    yang_name = "delay-start"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::DelayStart::~DelayStart()
{
}

bool Native::Aaa::Accounting::DelayStart::has_data() const
{
    return extended_delay.is_set
	|| all.is_set;
}

bool Native::Aaa::Accounting::DelayStart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_delay.yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Aaa::Accounting::DelayStart::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::DelayStart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-start";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::DelayStart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_delay.is_set || is_set(extended_delay.yfilter)) leaf_name_data.push_back(extended_delay.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::DelayStart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::DelayStart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::DelayStart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-delay")
    {
        extended_delay = value;
        extended_delay.value_namespace = name_space;
        extended_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::DelayStart::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-delay")
    {
        extended_delay.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::DelayStart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended-delay" || name == "all")
        return true;
    return false;
}

Native::Aaa::Accounting::Identity::Identity()
    :
    name{YType::str, "name"}
    	,
    start_stop(std::make_shared<Native::Aaa::Accounting::Identity::StartStop>())
{
    start_stop->parent = this;

    yang_name = "identity"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Identity::~Identity()
{
}

bool Native::Aaa::Accounting::Identity::has_data() const
{
    return name.is_set
	|| (start_stop !=  nullptr && start_stop->has_data());
}

bool Native::Aaa::Accounting::Identity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (start_stop !=  nullptr && start_stop->has_operation());
}

std::string Native::Aaa::Accounting::Identity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::Identity::StartStop>();
        }
        return start_stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    return children;
}

void Native::Aaa::Accounting::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-stop" || name == "name")
        return true;
    return false;
}

Native::Aaa::Accounting::Identity::StartStop::StartStop()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "start-stop"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::Identity::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::Identity::StartStop::has_data() const
{
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Identity::StartStop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Identity::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Identity::StartStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Identity::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Identity::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Identity::StartStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Identity::StartStop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Identity::StartStop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Exec::Exec()
    :
    name{YType::str, "name"},
    none{YType::empty, "none"}
    	,
    start_stop(std::make_shared<Native::Aaa::Accounting::Exec::StartStop>())
	,stop_only(std::make_shared<Native::Aaa::Accounting::Exec::StopOnly>())
{
    start_stop->parent = this;
    stop_only->parent = this;

    yang_name = "exec"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Exec::~Exec()
{
}

bool Native::Aaa::Accounting::Exec::has_data() const
{
    return name.is_set
	|| none.is_set
	|| (start_stop !=  nullptr && start_stop->has_data())
	|| (stop_only !=  nullptr && stop_only->has_data());
}

bool Native::Aaa::Accounting::Exec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(none.yfilter)
	|| (start_stop !=  nullptr && start_stop->has_operation())
	|| (stop_only !=  nullptr && stop_only->has_operation());
}

std::string Native::Aaa::Accounting::Exec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::Exec::StartStop>();
        }
        return start_stop;
    }

    if(child_yang_name == "stop-only")
    {
        if(stop_only == nullptr)
        {
            stop_only = std::make_shared<Native::Aaa::Accounting::Exec::StopOnly>();
        }
        return stop_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    if(stop_only != nullptr)
    {
        children["stop-only"] = stop_only;
    }

    return children;
}

void Native::Aaa::Accounting::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-stop" || name == "stop-only" || name == "name" || name == "none")
        return true;
    return false;
}

Native::Aaa::Accounting::Exec::StartStop::StartStop()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "start-stop"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::Exec::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::Exec::StartStop::has_data() const
{
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Exec::StartStop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Exec::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Exec::StartStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Exec::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Exec::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Exec::StartStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Exec::StartStop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Exec::StartStop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Exec::StopOnly::StopOnly()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "stop-only"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::Exec::StopOnly::~StopOnly()
{
}

bool Native::Aaa::Accounting::Exec::StopOnly::has_data() const
{
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Exec::StopOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Exec::StopOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Exec::StopOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Exec::StopOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Exec::StopOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Exec::StopOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Exec::StopOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Exec::StopOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::ExecSubmode::ExecSubmode()
{

    yang_name = "exec-submode"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::ExecSubmode::~ExecSubmode()
{
}

bool Native::Aaa::Accounting::ExecSubmode::has_data() const
{
    for (std::size_t index=0; index<exec.size(); index++)
    {
        if(exec[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Aaa::Accounting::ExecSubmode::has_operation() const
{
    for (std::size_t index=0; index<exec.size(); index++)
    {
        if(exec[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Aaa::Accounting::ExecSubmode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::ExecSubmode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec-submode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::ExecSubmode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::ExecSubmode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exec")
    {
        for(auto const & c : exec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec>();
        c->parent = this;
        exec.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::ExecSubmode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exec)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Aaa::Accounting::ExecSubmode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Accounting::ExecSubmode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Accounting::ExecSubmode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exec")
        return true;
    return false;
}

Native::Aaa::Accounting::ExecSubmode::Exec::Exec()
    :
    name{YType::str, "name"}
    	,
    action_type(std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec::ActionType>())
{
    action_type->parent = this;

    yang_name = "exec"; yang_parent_name = "exec-submode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::ExecSubmode::Exec::~Exec()
{
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::has_data() const
{
    return name.is_set
	|| (action_type !=  nullptr && action_type->has_data());
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (action_type !=  nullptr && action_type->has_operation());
}

std::string Native::Aaa::Accounting::ExecSubmode::Exec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/exec-submode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::ExecSubmode::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::ExecSubmode::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::ExecSubmode::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-type")
    {
        if(action_type == nullptr)
        {
            action_type = std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec::ActionType>();
        }
        return action_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::ExecSubmode::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action_type != nullptr)
    {
        children["action-type"] = action_type;
    }

    return children;
}

void Native::Aaa::Accounting::ExecSubmode::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::ExecSubmode::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-type" || name == "name")
        return true;
    return false;
}

Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::ActionType()
    :
    none{YType::empty, "none"}
    	,
    start_stop(std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop>())
	,stop_only(std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly>())
{
    start_stop->parent = this;
    stop_only->parent = this;

    yang_name = "action-type"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::~ActionType()
{
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::has_data() const
{
    return none.is_set
	|| (start_stop !=  nullptr && start_stop->has_data())
	|| (stop_only !=  nullptr && stop_only->has_data());
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| (start_stop !=  nullptr && start_stop->has_operation())
	|| (stop_only !=  nullptr && stop_only->has_operation());
}

std::string Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop>();
        }
        return start_stop;
    }

    if(child_yang_name == "stop-only")
    {
        if(stop_only == nullptr)
        {
            stop_only = std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly>();
        }
        return stop_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    if(stop_only != nullptr)
    {
        children["stop-only"] = stop_only;
    }

    return children;
}

void Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-stop" || name == "stop-only" || name == "none")
        return true;
    return false;
}

Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::StartStop()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "start-stop"; yang_parent_name = "action-type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::has_data() const
{
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::StopOnly()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "stop-only"; yang_parent_name = "action-type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::~StopOnly()
{
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::has_data() const
{
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Network::Network()
    :
    id{YType::str, "id"},
    none{YType::empty, "none"},
    mode{YType::enumeration, "mode"},
    broadcast{YType::empty, "broadcast"}
    	,
    start_stop(std::make_shared<Native::Aaa::Accounting::Network::StartStop>())
	,a1(std::make_shared<Native::Aaa::Accounting::Network::A1>())
	,a2(std::make_shared<Native::Aaa::Accounting::Network::A2>())
	,a3(std::make_shared<Native::Aaa::Accounting::Network::A3>())
	,a4(std::make_shared<Native::Aaa::Accounting::Network::A4>())
{
    start_stop->parent = this;
    a1->parent = this;
    a2->parent = this;
    a3->parent = this;
    a4->parent = this;

    yang_name = "network"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Network::~Network()
{
}

bool Native::Aaa::Accounting::Network::has_data() const
{
    return id.is_set
	|| none.is_set
	|| mode.is_set
	|| broadcast.is_set
	|| (start_stop !=  nullptr && start_stop->has_data())
	|| (a1 !=  nullptr && a1->has_data())
	|| (a2 !=  nullptr && a2->has_data())
	|| (a3 !=  nullptr && a3->has_data())
	|| (a4 !=  nullptr && a4->has_data());
}

bool Native::Aaa::Accounting::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| (start_stop !=  nullptr && start_stop->has_operation())
	|| (a1 !=  nullptr && a1->has_operation())
	|| (a2 !=  nullptr && a2->has_operation())
	|| (a3 !=  nullptr && a3->has_operation())
	|| (a4 !=  nullptr && a4->has_operation());
}

std::string Native::Aaa::Accounting::Network::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::Network::StartStop>();
        }
        return start_stop;
    }

    if(child_yang_name == "a1")
    {
        if(a1 == nullptr)
        {
            a1 = std::make_shared<Native::Aaa::Accounting::Network::A1>();
        }
        return a1;
    }

    if(child_yang_name == "a2")
    {
        if(a2 == nullptr)
        {
            a2 = std::make_shared<Native::Aaa::Accounting::Network::A2>();
        }
        return a2;
    }

    if(child_yang_name == "a3")
    {
        if(a3 == nullptr)
        {
            a3 = std::make_shared<Native::Aaa::Accounting::Network::A3>();
        }
        return a3;
    }

    if(child_yang_name == "a4")
    {
        if(a4 == nullptr)
        {
            a4 = std::make_shared<Native::Aaa::Accounting::Network::A4>();
        }
        return a4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    if(a1 != nullptr)
    {
        children["a1"] = a1;
    }

    if(a2 != nullptr)
    {
        children["a2"] = a2;
    }

    if(a3 != nullptr)
    {
        children["a3"] = a3;
    }

    if(a4 != nullptr)
    {
        children["a4"] = a4;
    }

    return children;
}

void Native::Aaa::Accounting::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-stop" || name == "a1" || name == "a2" || name == "a3" || name == "a4" || name == "id" || name == "none" || name == "mode" || name == "broadcast")
        return true;
    return false;
}

Native::Aaa::Accounting::Network::StartStop::StartStop()
    :
    group{YType::str, "group"}
{

    yang_name = "start-stop"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::Network::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::Network::StartStop::has_data() const
{
    return group.is_set;
}

bool Native::Aaa::Accounting::Network::StartStop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Network::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Network::StartStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Network::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Network::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Network::StartStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Network::StartStop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Network::StartStop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Network::A1::A1()
    :
    group{YType::str, "group"}
{

    yang_name = "a1"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::Network::A1::~A1()
{
}

bool Native::Aaa::Accounting::Network::A1::has_data() const
{
    return group.is_set;
}

bool Native::Aaa::Accounting::Network::A1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Network::A1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Network::A1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Network::A1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Network::A1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Network::A1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Network::A1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Network::A1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Network::A2::A2()
    :
    group{YType::str, "group"}
{

    yang_name = "a2"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::Network::A2::~A2()
{
}

bool Native::Aaa::Accounting::Network::A2::has_data() const
{
    return group.is_set;
}

bool Native::Aaa::Accounting::Network::A2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Network::A2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Network::A2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Network::A2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Network::A2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Network::A2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Network::A2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Network::A2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Network::A3::A3()
    :
    group{YType::str, "group"}
{

    yang_name = "a3"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::Network::A3::~A3()
{
}

bool Native::Aaa::Accounting::Network::A3::has_data() const
{
    return group.is_set;
}

bool Native::Aaa::Accounting::Network::A3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Network::A3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Network::A3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Network::A3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Network::A3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Network::A3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Network::A3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Network::A3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Network::A4::A4()
    :
    group{YType::str, "group"}
{

    yang_name = "a4"; yang_parent_name = "network"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Accounting::Network::A4::~A4()
{
}

bool Native::Aaa::Accounting::Network::A4::has_data() const
{
    return group.is_set;
}

bool Native::Aaa::Accounting::Network::A4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::Network::A4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Network::A4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Network::A4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Network::A4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Network::A4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Network::A4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Network::A4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Send::Send()
    :
    counters(std::make_shared<Native::Aaa::Accounting::Send::Counters>())
	,stop_record(std::make_shared<Native::Aaa::Accounting::Send::StopRecord>())
{
    counters->parent = this;
    stop_record->parent = this;

    yang_name = "send"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Send::~Send()
{
}

bool Native::Aaa::Accounting::Send::has_data() const
{
    return (counters !=  nullptr && counters->has_data())
	|| (stop_record !=  nullptr && stop_record->has_data());
}

bool Native::Aaa::Accounting::Send::has_operation() const
{
    return is_set(yfilter)
	|| (counters !=  nullptr && counters->has_operation())
	|| (stop_record !=  nullptr && stop_record->has_operation());
}

std::string Native::Aaa::Accounting::Send::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Native::Aaa::Accounting::Send::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "stop-record")
    {
        if(stop_record == nullptr)
        {
            stop_record = std::make_shared<Native::Aaa::Accounting::Send::StopRecord>();
        }
        return stop_record;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    if(stop_record != nullptr)
    {
        children["stop-record"] = stop_record;
    }

    return children;
}

void Native::Aaa::Accounting::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Accounting::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Accounting::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counters" || name == "stop-record")
        return true;
    return false;
}

Native::Aaa::Accounting::Send::Counters::Counters()
    :
    ipv6{YType::empty, "ipv6"}
{

    yang_name = "counters"; yang_parent_name = "send"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Send::Counters::~Counters()
{
}

bool Native::Aaa::Accounting::Send::Counters::has_data() const
{
    return ipv6.is_set;
}

bool Native::Aaa::Accounting::Send::Counters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Aaa::Accounting::Send::Counters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/send/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Send::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Send::Counters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Send::Counters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Send::Counters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Send::Counters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6")
        return true;
    return false;
}

Native::Aaa::Accounting::Send::StopRecord::StopRecord()
    :
    always{YType::empty, "always"}
    	,
    authentication(std::make_shared<Native::Aaa::Accounting::Send::StopRecord::Authentication>())
{
    authentication->parent = this;

    yang_name = "stop-record"; yang_parent_name = "send"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Send::StopRecord::~StopRecord()
{
}

bool Native::Aaa::Accounting::Send::StopRecord::has_data() const
{
    return always.is_set
	|| (authentication !=  nullptr && authentication->has_data());
}

bool Native::Aaa::Accounting::Send::StopRecord::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Aaa::Accounting::Send::StopRecord::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/send/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Send::StopRecord::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop-record";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Send::StopRecord::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::StopRecord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Aaa::Accounting::Send::StopRecord::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::StopRecord::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
}

void Native::Aaa::Accounting::Send::StopRecord::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Send::StopRecord::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Send::StopRecord::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "always")
        return true;
    return false;
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Authentication()
    :
    failure(nullptr) // presence node
	,success(std::make_shared<Native::Aaa::Accounting::Send::StopRecord::Authentication::Success>())
{
    success->parent = this;

    yang_name = "authentication"; yang_parent_name = "stop-record"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::~Authentication()
{
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::has_data() const
{
    return (failure !=  nullptr && failure->has_data())
	|| (success !=  nullptr && success->has_data());
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (failure !=  nullptr && failure->has_operation())
	|| (success !=  nullptr && success->has_operation());
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/send/stop-record/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Send::StopRecord::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::StopRecord::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failure")
    {
        if(failure == nullptr)
        {
            failure = std::make_shared<Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure>();
        }
        return failure;
    }

    if(child_yang_name == "success")
    {
        if(success == nullptr)
        {
            success = std::make_shared<Native::Aaa::Accounting::Send::StopRecord::Authentication::Success>();
        }
        return success;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::StopRecord::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(failure != nullptr)
    {
        children["failure"] = failure;
    }

    if(success != nullptr)
    {
        children["success"] = success;
    }

    return children;
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "success")
        return true;
    return false;
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::Failure()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "failure"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::~Failure()
{
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::has_data() const
{
    return vrf.is_set;
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/send/stop-record/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::Success()
    :
    remote_server(nullptr) // presence node
{

    yang_name = "success"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::~Success()
{
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::has_data() const
{
    return (remote_server !=  nullptr && remote_server->has_data());
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::has_operation() const
{
    return is_set(yfilter)
	|| (remote_server !=  nullptr && remote_server->has_operation());
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/send/stop-record/authentication/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "success";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-server")
    {
        if(remote_server == nullptr)
        {
            remote_server = std::make_shared<Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer>();
        }
        return remote_server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote_server != nullptr)
    {
        children["remote-server"] = remote_server;
    }

    return children;
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-server")
        return true;
    return false;
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::RemoteServer()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "remote-server"; yang_parent_name = "success"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::~RemoteServer()
{
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::has_data() const
{
    return vrf.is_set;
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/send/stop-record/authentication/success/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Aaa::Accounting::System::System()
    :
    guarantee_first{YType::boolean, "guarantee-first"}
    	,
    default_(nullptr) // presence node
{

    yang_name = "system"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::System::~System()
{
}

bool Native::Aaa::Accounting::System::has_data() const
{
    return guarantee_first.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Accounting::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(guarantee_first.yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Accounting::System::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (guarantee_first.is_set || is_set(guarantee_first.yfilter)) leaf_name_data.push_back(guarantee_first.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Accounting::System::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Accounting::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "guarantee-first")
    {
        guarantee_first = value;
        guarantee_first.value_namespace = name_space;
        guarantee_first.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "guarantee-first")
    {
        guarantee_first.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "guarantee-first")
        return true;
    return false;
}

Native::Aaa::Accounting::System::Default_::Default_()
    :
    none{YType::empty, "none"},
    vrf{YType::str, "vrf"}
    	,
    start_stop(std::make_shared<Native::Aaa::Accounting::System::Default_::StartStop>())
{
    start_stop->parent = this;

    yang_name = "default"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::System::Default_::~Default_()
{
}

bool Native::Aaa::Accounting::System::Default_::has_data() const
{
    return none.is_set
	|| vrf.is_set
	|| (start_stop !=  nullptr && start_stop->has_data());
}

bool Native::Aaa::Accounting::System::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (start_stop !=  nullptr && start_stop->has_operation());
}

std::string Native::Aaa::Accounting::System::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::System::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::System::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::System::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::System::Default_::StartStop>();
        }
        return start_stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::System::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    return children;
}

void Native::Aaa::Accounting::System::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::System::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::System::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-stop" || name == "none" || name == "vrf")
        return true;
    return false;
}

Native::Aaa::Accounting::System::Default_::StartStop::StartStop()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{

    yang_name = "start-stop"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::System::Default_::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::System::Default_::StartStop::has_data() const
{
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::System::Default_::StartStop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(broadcast.yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::System::Default_::StartStop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/system/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::System::Default_::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::System::Default_::StartStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.yfilter)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::System::Default_::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::System::Default_::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::System::Default_::StartStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
        broadcast.value_namespace = name_space;
        broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::System::Default_::StartStop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "broadcast")
    {
        broadcast.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::System::Default_::StartStop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "broadcast" || name == "group")
        return true;
    return false;
}

Native::Aaa::Accounting::Update::Update()
    :
    periodic{YType::uint32, "periodic"}
{

    yang_name = "update"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::Update::~Update()
{
}

bool Native::Aaa::Accounting::Update::has_data() const
{
    return periodic.is_set;
}

bool Native::Aaa::Accounting::Update::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(periodic.yfilter);
}

std::string Native::Aaa::Accounting::Update::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::Update::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (periodic.is_set || is_set(periodic.yfilter)) leaf_name_data.push_back(periodic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Update::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "periodic")
    {
        periodic = value;
        periodic.value_namespace = name_space;
        periodic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::Update::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "periodic")
    {
        periodic.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::Update::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "periodic")
        return true;
    return false;
}

Native::Aaa::Accounting::AuthProxy::AuthProxy()
    :
    default_(std::make_shared<Native::Aaa::Accounting::AuthProxy::Default_>())
{
    default_->parent = this;

    yang_name = "auth-proxy"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::AuthProxy::~AuthProxy()
{
}

bool Native::Aaa::Accounting::AuthProxy::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Accounting::AuthProxy::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Accounting::AuthProxy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::AuthProxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-proxy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::AuthProxy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::AuthProxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Accounting::AuthProxy::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::AuthProxy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Accounting::AuthProxy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Accounting::AuthProxy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Accounting::AuthProxy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Aaa::Accounting::AuthProxy::Default_::Default_()
    :
    start_stop(std::make_shared<Native::Aaa::Accounting::AuthProxy::Default_::StartStop>())
{
    start_stop->parent = this;

    yang_name = "default"; yang_parent_name = "auth-proxy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::AuthProxy::Default_::~Default_()
{
}

bool Native::Aaa::Accounting::AuthProxy::Default_::has_data() const
{
    return (start_stop !=  nullptr && start_stop->has_data());
}

bool Native::Aaa::Accounting::AuthProxy::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (start_stop !=  nullptr && start_stop->has_operation());
}

std::string Native::Aaa::Accounting::AuthProxy::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/auth-proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::AuthProxy::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::AuthProxy::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::AuthProxy::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::AuthProxy::Default_::StartStop>();
        }
        return start_stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::AuthProxy::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    return children;
}

void Native::Aaa::Accounting::AuthProxy::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Accounting::AuthProxy::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Accounting::AuthProxy::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-stop")
        return true;
    return false;
}

Native::Aaa::Accounting::AuthProxy::Default_::StartStop::StartStop()
    :
    group{YType::str, "group"}
{

    yang_name = "start-stop"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Accounting::AuthProxy::Default_::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::AuthProxy::Default_::StartStop::has_data() const
{
    return group.is_set;
}

bool Native::Aaa::Accounting::AuthProxy::Default_::StartStop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Aaa::Accounting::AuthProxy::Default_::StartStop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/auth-proxy/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Accounting::AuthProxy::Default_::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Accounting::AuthProxy::Default_::StartStop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::AuthProxy::Default_::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::AuthProxy::Default_::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::AuthProxy::Default_::StartStop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Accounting::AuthProxy::Default_::StartStop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Aaa::Accounting::AuthProxy::Default_::StartStop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Aaa::Server::Server()
    :
    radius(std::make_shared<Native::Aaa::Server::Radius>())
{
    radius->parent = this;

    yang_name = "server"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::~Server()
{
}

bool Native::Aaa::Server::has_data() const
{
    return (radius !=  nullptr && radius->has_data());
}

bool Native::Aaa::Server::has_operation() const
{
    return is_set(yfilter)
	|| (radius !=  nullptr && radius->has_operation());
}

std::string Native::Aaa::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radius")
    {
        if(radius == nullptr)
        {
            radius = std::make_shared<Native::Aaa::Server::Radius>();
        }
        return radius;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(radius != nullptr)
    {
        children["radius"] = radius;
    }

    return children;
}

void Native::Aaa::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radius")
        return true;
    return false;
}

Native::Aaa::Server::Radius::Radius()
    :
    dynamic_author(nullptr) // presence node
{

    yang_name = "radius"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::~Radius()
{
}

bool Native::Aaa::Server::Radius::has_data() const
{
    return (dynamic_author !=  nullptr && dynamic_author->has_data());
}

bool Native::Aaa::Server::Radius::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic_author !=  nullptr && dynamic_author->has_operation());
}

std::string Native::Aaa::Server::Radius::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic-author")
    {
        if(dynamic_author == nullptr)
        {
            dynamic_author = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor>();
        }
        return dynamic_author;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic_author != nullptr)
    {
        children["dynamic-author"] = dynamic_author;
    }

    return children;
}

void Native::Aaa::Server::Radius::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Server::Radius::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Server::Radius::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic-author")
        return true;
    return false;
}

Native::Aaa::Server::Radius::DynamicAuthor::DynamicAuthor()
    :
    auth_type{YType::enumeration, "auth-type"}
    	,
    server_key(std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::ServerKey>())
	,domain(std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Domain>())
{
    server_key->parent = this;
    domain->parent = this;

    yang_name = "dynamic-author"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::DynamicAuthor::~DynamicAuthor()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::has_data() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return auth_type.is_set
	|| (server_key !=  nullptr && server_key->has_data())
	|| (domain !=  nullptr && domain->has_data());
}

bool Native::Aaa::Server::Radius::DynamicAuthor::has_operation() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(auth_type.yfilter)
	|| (server_key !=  nullptr && server_key->has_operation())
	|| (domain !=  nullptr && domain->has_operation());
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-author";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::DynamicAuthor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        for(auto const & c : client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Client>();
        c->parent = this;
        client.push_back(c);
        return c;
    }

    if(child_yang_name == "server-key")
    {
        if(server_key == nullptr)
        {
            server_key = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::ServerKey>();
        }
        return server_key;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Domain>();
        }
        return domain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client)
    {
        children[c->get_segment_path()] = c;
    }

    if(server_key != nullptr)
    {
        children["server-key"] = server_key;
    }

    if(domain != nullptr)
    {
        children["domain"] = domain;
    }

    return children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auth-type")
    {
        auth_type = value;
        auth_type.value_namespace = name_space;
        auth_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::DynamicAuthor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auth-type")
    {
        auth_type.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::DynamicAuthor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "server-key" || name == "domain" || name == "auth-type")
        return true;
    return false;
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::Client()
    :
    ip{YType::str, "ip"}
    	,
    server_key(std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey>())
{
    server_key->parent = this;

    yang_name = "client"; yang_parent_name = "dynamic-author"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::~Client()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return ip.is_set
	|| (server_key !=  nullptr && server_key->has_data());
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| (server_key !=  nullptr && server_key->has_operation());
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/dynamic-author/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client" <<"[ip='" <<ip <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::DynamicAuthor::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    if(child_yang_name == "server-key")
    {
        if(server_key == nullptr)
        {
            server_key = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey>();
        }
        return server_key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    if(server_key != nullptr)
    {
        children["server-key"] = server_key;
    }

    return children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::DynamicAuthor::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "server-key" || name == "ip")
        return true;
    return false;
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::Vrf()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::~Vrf()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::has_data() const
{
    return name.is_set;
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::ServerKey()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "server-key"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::~ServerKey()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::has_data() const
{
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::ServerKey()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{

    yang_name = "server-key"; yang_parent_name = "dynamic-author"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::~ServerKey()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::has_data() const
{
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/dynamic-author/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-key";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key" || name == "string")
        return true;
    return false;
}

Native::Aaa::Server::Radius::DynamicAuthor::Domain::Domain()
    :
    delimiter{YType::str, "delimiter"}
    	,
    stripping(nullptr) // presence node
{

    yang_name = "domain"; yang_parent_name = "dynamic-author"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::DynamicAuthor::Domain::~Domain()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Domain::has_data() const
{
    return delimiter.is_set
	|| (stripping !=  nullptr && stripping->has_data());
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Domain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delimiter.yfilter)
	|| (stripping !=  nullptr && stripping->has_operation());
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Domain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/dynamic-author/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::DynamicAuthor::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delimiter.is_set || is_set(delimiter.yfilter)) leaf_name_data.push_back(delimiter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stripping")
    {
        if(stripping == nullptr)
        {
            stripping = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping>();
        }
        return stripping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stripping != nullptr)
    {
        children["stripping"] = stripping;
    }

    return children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delimiter")
    {
        delimiter = value;
        delimiter.value_namespace = name_space;
        delimiter.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::DynamicAuthor::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delimiter")
    {
        delimiter.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stripping" || name == "delimiter")
        return true;
    return false;
}

Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::Stripping()
    :
    right_to_left{YType::empty, "right-to-left"}
{

    yang_name = "stripping"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::~Stripping()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::has_data() const
{
    return right_to_left.is_set;
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(right_to_left.yfilter);
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/dynamic-author/domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stripping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (right_to_left.is_set || is_set(right_to_left.yfilter)) leaf_name_data.push_back(right_to_left.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "right-to-left")
    {
        right_to_left = value;
        right_to_left.value_namespace = name_space;
        right_to_left.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "right-to-left")
    {
        right_to_left.yfilter = yfilter;
    }
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "right-to-left")
        return true;
    return false;
}

Native::Aaa::Login::Login()
    :
    display{YType::enumeration, "display"},
    max_sessions{YType::uint16, "max-sessions"},
    password{YType::enumeration, "password"},
    success_track_conf_time{YType::uint8, "success-track-conf-time"},
    traceback{YType::enumeration, "traceback"}
    	,
    memory(std::make_shared<Native::Aaa::Login::Memory>())
	,policy(std::make_shared<Native::Aaa::Login::Policy>())
	,route(std::make_shared<Native::Aaa::Login::Route>())
	,server(std::make_shared<Native::Aaa::Login::Server>())
{
    memory->parent = this;
    policy->parent = this;
    route->parent = this;
    server->parent = this;

    yang_name = "login"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Login::~Login()
{
}

bool Native::Aaa::Login::has_data() const
{
    return display.is_set
	|| max_sessions.is_set
	|| password.is_set
	|| success_track_conf_time.is_set
	|| traceback.is_set
	|| (memory !=  nullptr && memory->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (route !=  nullptr && route->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Aaa::Login::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(display.yfilter)
	|| ydk::is_set(max_sessions.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(success_track_conf_time.yfilter)
	|| ydk::is_set(traceback.yfilter)
	|| (memory !=  nullptr && memory->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (route !=  nullptr && route->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Aaa::Login::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:login";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Login::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (display.is_set || is_set(display.yfilter)) leaf_name_data.push_back(display.get_name_leafdata());
    if (max_sessions.is_set || is_set(max_sessions.yfilter)) leaf_name_data.push_back(max_sessions.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (success_track_conf_time.is_set || is_set(success_track_conf_time.yfilter)) leaf_name_data.push_back(success_track_conf_time.get_name_leafdata());
    if (traceback.is_set || is_set(traceback.yfilter)) leaf_name_data.push_back(traceback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "memory")
    {
        if(memory == nullptr)
        {
            memory = std::make_shared<Native::Aaa::Login::Memory>();
        }
        return memory;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Aaa::Login::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Aaa::Login::Route>();
        }
        return route;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Aaa::Login::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(memory != nullptr)
    {
        children["memory"] = memory;
    }

    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(route != nullptr)
    {
        children["route"] = route;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Aaa::Login::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "display")
    {
        display = value;
        display.value_namespace = name_space;
        display.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-sessions")
    {
        max_sessions = value;
        max_sessions.value_namespace = name_space;
        max_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success-track-conf-time")
    {
        success_track_conf_time = value;
        success_track_conf_time.value_namespace = name_space;
        success_track_conf_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traceback")
    {
        traceback = value;
        traceback.value_namespace = name_space;
        traceback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Login::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "display")
    {
        display.yfilter = yfilter;
    }
    if(value_path == "max-sessions")
    {
        max_sessions.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "success-track-conf-time")
    {
        success_track_conf_time.yfilter = yfilter;
    }
    if(value_path == "traceback")
    {
        traceback.yfilter = yfilter;
    }
}

bool Native::Aaa::Login::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "memory" || name == "policy" || name == "route" || name == "server" || name == "display" || name == "max-sessions" || name == "password" || name == "success-track-conf-time" || name == "traceback")
        return true;
    return false;
}

Native::Aaa::Login::Memory::Memory()
    :
    threshold(std::make_shared<Native::Aaa::Login::Memory::Threshold>())
{
    threshold->parent = this;

    yang_name = "memory"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Login::Memory::~Memory()
{
}

bool Native::Aaa::Login::Memory::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data());
}

bool Native::Aaa::Login::Memory::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Aaa::Login::Memory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:login/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Login::Memory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Login::Memory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Login::Memory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Aaa::Login::Memory::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Login::Memory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Aaa::Login::Memory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Login::Memory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Login::Memory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Aaa::Login::Memory::Threshold::Threshold()
    :
    accounting(std::make_shared<Native::Aaa::Login::Memory::Threshold::Accounting>())
	,authentication(std::make_shared<Native::Aaa::Login::Memory::Threshold::Authentication>())
{
    accounting->parent = this;
    authentication->parent = this;

    yang_name = "threshold"; yang_parent_name = "memory"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Login::Memory::Threshold::~Threshold()
{
}

bool Native::Aaa::Login::Memory::Threshold::has_data() const
{
    return (accounting !=  nullptr && accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data());
}

bool Native::Aaa::Login::Memory::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Aaa::Login::Memory::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:login/memory/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Login::Memory::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Login::Memory::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Login::Memory::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Aaa::Login::Memory::Threshold::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Aaa::Login::Memory::Threshold::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Login::Memory::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
}

void Native::Aaa::Login::Memory::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Login::Memory::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Login::Memory::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication")
        return true;
    return false;
}

Native::Aaa::Login::Memory::Threshold::Accounting::Accounting()
    :
    disable{YType::uint8, "disable"}
{

    yang_name = "accounting"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Login::Memory::Threshold::Accounting::~Accounting()
{
}

bool Native::Aaa::Login::Memory::Threshold::Accounting::has_data() const
{
    return disable.is_set;
}

bool Native::Aaa::Login::Memory::Threshold::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Aaa::Login::Memory::Threshold::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:login/memory/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Login::Memory::Threshold::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Login::Memory::Threshold::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Login::Memory::Threshold::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Login::Memory::Threshold::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Login::Memory::Threshold::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Login::Memory::Threshold::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Aaa::Login::Memory::Threshold::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Aaa::Login::Memory::Threshold::Authentication::Authentication()
    :
    reject{YType::uint8, "reject"}
{

    yang_name = "authentication"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Login::Memory::Threshold::Authentication::~Authentication()
{
}

bool Native::Aaa::Login::Memory::Threshold::Authentication::has_data() const
{
    return reject.is_set;
}

bool Native::Aaa::Login::Memory::Threshold::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reject.yfilter);
}

std::string Native::Aaa::Login::Memory::Threshold::Authentication::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:login/memory/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Login::Memory::Threshold::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Login::Memory::Threshold::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reject.is_set || is_set(reject.yfilter)) leaf_name_data.push_back(reject.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Login::Memory::Threshold::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Login::Memory::Threshold::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Login::Memory::Threshold::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reject")
    {
        reject = value;
        reject.value_namespace = name_space;
        reject.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Login::Memory::Threshold::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reject")
    {
        reject.yfilter = yfilter;
    }
}

bool Native::Aaa::Login::Memory::Threshold::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reject")
        return true;
    return false;
}

Native::Aaa::Login::Policy::Policy()
    :
    interface_config{YType::enumeration, "interface-config"}
{

    yang_name = "policy"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Login::Policy::~Policy()
{
}

bool Native::Aaa::Login::Policy::has_data() const
{
    return interface_config.is_set;
}

bool Native::Aaa::Login::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_config.yfilter);
}

std::string Native::Aaa::Login::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:login/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Login::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Login::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_config.is_set || is_set(interface_config.yfilter)) leaf_name_data.push_back(interface_config.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Login::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Login::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Login::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-config")
    {
        interface_config = value;
        interface_config.value_namespace = name_space;
        interface_config.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Login::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-config")
    {
        interface_config.yfilter = yfilter;
    }
}

bool Native::Aaa::Login::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-config")
        return true;
    return false;
}

Native::Aaa::Login::Route::Route()
    :
    download(std::make_shared<Native::Aaa::Login::Route::Download>())
{
    download->parent = this;

    yang_name = "route"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Login::Route::~Route()
{
}

bool Native::Aaa::Login::Route::has_data() const
{
    return (download !=  nullptr && download->has_data());
}

bool Native::Aaa::Login::Route::has_operation() const
{
    return is_set(yfilter)
	|| (download !=  nullptr && download->has_operation());
}

std::string Native::Aaa::Login::Route::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:login/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Login::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Login::Route::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Login::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "download")
    {
        if(download == nullptr)
        {
            download = std::make_shared<Native::Aaa::Login::Route::Download>();
        }
        return download;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Login::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(download != nullptr)
    {
        children["download"] = download;
    }

    return children;
}

void Native::Aaa::Login::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Aaa::Login::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Aaa::Login::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "download")
        return true;
    return false;
}

Native::Aaa::Login::Route::Download::Download()
    :
    update_period{YType::uint16, "update-period"},
    authorization{YType::str, "authorization"}
{

    yang_name = "download"; yang_parent_name = "route"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Login::Route::Download::~Download()
{
}

bool Native::Aaa::Login::Route::Download::has_data() const
{
    return update_period.is_set
	|| authorization.is_set;
}

bool Native::Aaa::Login::Route::Download::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_period.yfilter)
	|| ydk::is_set(authorization.yfilter);
}

std::string Native::Aaa::Login::Route::Download::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:login/route/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Login::Route::Download::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "download";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Login::Route::Download::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_period.is_set || is_set(update_period.yfilter)) leaf_name_data.push_back(update_period.get_name_leafdata());
    if (authorization.is_set || is_set(authorization.yfilter)) leaf_name_data.push_back(authorization.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Login::Route::Download::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Login::Route::Download::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Login::Route::Download::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-period")
    {
        update_period = value;
        update_period.value_namespace = name_space;
        update_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authorization")
    {
        authorization = value;
        authorization.value_namespace = name_space;
        authorization.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Login::Route::Download::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-period")
    {
        update_period.yfilter = yfilter;
    }
    if(value_path == "authorization")
    {
        authorization.yfilter = yfilter;
    }
}

bool Native::Aaa::Login::Route::Download::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-period" || name == "authorization")
        return true;
    return false;
}

Native::Aaa::Login::Server::Server()
    :
    radius{YType::enumeration, "radius"}
{

    yang_name = "server"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Aaa::Login::Server::~Server()
{
}

bool Native::Aaa::Login::Server::has_data() const
{
    return radius.is_set;
}

bool Native::Aaa::Login::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(radius.yfilter);
}

std::string Native::Aaa::Login::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:login/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Aaa::Login::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Aaa::Login::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (radius.is_set || is_set(radius.yfilter)) leaf_name_data.push_back(radius.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Aaa::Login::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Login::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Login::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "radius")
    {
        radius = value;
        radius.value_namespace = name_space;
        radius.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Aaa::Login::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "radius")
    {
        radius.yfilter = yfilter;
    }
}

bool Native::Aaa::Login::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radius")
        return true;
    return false;
}

Native::Privilege::Privilege()
    :
    exec(std::make_shared<Native::Privilege::Exec>())
{
    exec->parent = this;

    yang_name = "privilege"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Privilege::~Privilege()
{
}

bool Native::Privilege::has_data() const
{
    return (exec !=  nullptr && exec->has_data());
}

bool Native::Privilege::has_operation() const
{
    return is_set(yfilter)
	|| (exec !=  nullptr && exec->has_operation());
}

std::string Native::Privilege::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Privilege::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privilege";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Privilege::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Privilege::Exec>();
        }
        return exec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Privilege::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    return children;
}

void Native::Privilege::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Privilege::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Privilege::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exec")
        return true;
    return false;
}

Native::Privilege::Exec::Exec()
{

    yang_name = "exec"; yang_parent_name = "privilege"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Privilege::Exec::~Exec()
{
}

bool Native::Privilege::Exec::has_data() const
{
    for (std::size_t index=0; index<level.size(); index++)
    {
        if(level[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Privilege::Exec::has_operation() const
{
    for (std::size_t index=0; index<level.size(); index++)
    {
        if(level[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Privilege::Exec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/privilege/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Privilege::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Privilege::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        for(auto const & c : level)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Privilege::Exec::Level>();
        c->parent = this;
        level.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Privilege::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : level)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Privilege::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Privilege::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Privilege::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level")
        return true;
    return false;
}

Native::Privilege::Exec::Level::Level()
    :
    privilege{YType::uint8, "privilege"}
{

    yang_name = "level"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Privilege::Exec::Level::~Level()
{
}

bool Native::Privilege::Exec::Level::has_data() const
{
    for (std::size_t index=0; index<command_list.size(); index++)
    {
        if(command_list[index]->has_data())
            return true;
    }
    return privilege.is_set;
}

bool Native::Privilege::Exec::Level::has_operation() const
{
    for (std::size_t index=0; index<command_list.size(); index++)
    {
        if(command_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(privilege.yfilter);
}

std::string Native::Privilege::Exec::Level::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/privilege/exec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Privilege::Exec::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level" <<"[privilege='" <<privilege <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::Exec::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (privilege.is_set || is_set(privilege.yfilter)) leaf_name_data.push_back(privilege.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Privilege::Exec::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command-list")
    {
        for(auto const & c : command_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Privilege::Exec::Level::CommandList>();
        c->parent = this;
        command_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Privilege::Exec::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : command_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Privilege::Exec::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "privilege")
    {
        privilege = value;
        privilege.value_namespace = name_space;
        privilege.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Privilege::Exec::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "privilege")
    {
        privilege.yfilter = yfilter;
    }
}

bool Native::Privilege::Exec::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command-list" || name == "privilege")
        return true;
    return false;
}

Native::Privilege::Exec::Level::CommandList::CommandList()
    :
    command{YType::str, "command"}
{

    yang_name = "command-list"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Privilege::Exec::Level::CommandList::~CommandList()
{
}

bool Native::Privilege::Exec::Level::CommandList::has_data() const
{
    return command.is_set;
}

bool Native::Privilege::Exec::Level::CommandList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter);
}

std::string Native::Privilege::Exec::Level::CommandList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command-list" <<"[command='" <<command <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Privilege::Exec::Level::CommandList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Privilege::Exec::Level::CommandList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Privilege::Exec::Level::CommandList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Privilege::Exec::Level::CommandList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Privilege::Exec::Level::CommandList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
}

bool Native::Privilege::Exec::Level::CommandList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

Native::Login::Login()
    :
    delay{YType::uint8, "delay"}
    	,
    on_failure(nullptr) // presence node
	,on_success(nullptr) // presence node
{

    yang_name = "login"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Login::~Login()
{
}

bool Native::Login::has_data() const
{
    return delay.is_set
	|| (on_failure !=  nullptr && on_failure->has_data())
	|| (on_success !=  nullptr && on_success->has_data());
}

bool Native::Login::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| (on_failure !=  nullptr && on_failure->has_operation())
	|| (on_success !=  nullptr && on_success->has_operation());
}

std::string Native::Login::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Login::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-failure")
    {
        if(on_failure == nullptr)
        {
            on_failure = std::make_shared<Native::Login::OnFailure>();
        }
        return on_failure;
    }

    if(child_yang_name == "on-success")
    {
        if(on_success == nullptr)
        {
            on_success = std::make_shared<Native::Login::OnSuccess>();
        }
        return on_success;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(on_failure != nullptr)
    {
        children["on-failure"] = on_failure;
    }

    if(on_success != nullptr)
    {
        children["on-success"] = on_success;
    }

    return children;
}

void Native::Login::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Login::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Login::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-failure" || name == "on-success" || name == "delay")
        return true;
    return false;
}

Native::Login::OnFailure::OnFailure()
    :
    log(nullptr) // presence node
{

    yang_name = "on-failure"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Login::OnFailure::~OnFailure()
{
}

bool Native::Login::OnFailure::has_data() const
{
    return (log !=  nullptr && log->has_data());
}

bool Native::Login::OnFailure::has_operation() const
{
    return is_set(yfilter)
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Login::OnFailure::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/login/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Login::OnFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-failure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Login::OnFailure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Login::OnFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::Login::OnFailure::Log>();
        }
        return log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Login::OnFailure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(log != nullptr)
    {
        children["log"] = log;
    }

    return children;
}

void Native::Login::OnFailure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Login::OnFailure::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Login::OnFailure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Login::OnFailure::Log::Log()
    :
    every{YType::uint16, "every"}
{

    yang_name = "log"; yang_parent_name = "on-failure"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Login::OnFailure::Log::~Log()
{
}

bool Native::Login::OnFailure::Log::has_data() const
{
    return every.is_set;
}

bool Native::Login::OnFailure::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(every.yfilter);
}

std::string Native::Login::OnFailure::Log::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/login/on-failure/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Login::OnFailure::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Login::OnFailure::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (every.is_set || is_set(every.yfilter)) leaf_name_data.push_back(every.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Login::OnFailure::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Login::OnFailure::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Login::OnFailure::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "every")
    {
        every = value;
        every.value_namespace = name_space;
        every.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Login::OnFailure::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "every")
    {
        every.yfilter = yfilter;
    }
}

bool Native::Login::OnFailure::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "every")
        return true;
    return false;
}

Native::Login::OnSuccess::OnSuccess()
    :
    log(nullptr) // presence node
{

    yang_name = "on-success"; yang_parent_name = "login"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Login::OnSuccess::~OnSuccess()
{
}

bool Native::Login::OnSuccess::has_data() const
{
    return (log !=  nullptr && log->has_data());
}

bool Native::Login::OnSuccess::has_operation() const
{
    return is_set(yfilter)
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Login::OnSuccess::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/login/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Login::OnSuccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-success";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Login::OnSuccess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Login::OnSuccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::Login::OnSuccess::Log>();
        }
        return log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Login::OnSuccess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(log != nullptr)
    {
        children["log"] = log;
    }

    return children;
}

void Native::Login::OnSuccess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Login::OnSuccess::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Login::OnSuccess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log")
        return true;
    return false;
}

Native::Login::OnSuccess::Log::Log()
    :
    every{YType::uint16, "every"}
{

    yang_name = "log"; yang_parent_name = "on-success"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Login::OnSuccess::Log::~Log()
{
}

bool Native::Login::OnSuccess::Log::has_data() const
{
    return every.is_set;
}

bool Native::Login::OnSuccess::Log::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(every.yfilter);
}

std::string Native::Login::OnSuccess::Log::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/login/on-success/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Login::OnSuccess::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Login::OnSuccess::Log::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (every.is_set || is_set(every.yfilter)) leaf_name_data.push_back(every.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Login::OnSuccess::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Login::OnSuccess::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Login::OnSuccess::Log::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "every")
    {
        every = value;
        every.value_namespace = name_space;
        every.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Login::OnSuccess::Log::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "every")
    {
        every.yfilter = yfilter;
    }
}

bool Native::Login::OnSuccess::Log::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "every")
        return true;
    return false;
}

Native::Multilink::Multilink()
    :
    bundle_name{YType::enumeration, "Cisco-IOS-XE-ppp:bundle-name"},
    virtual_template{YType::uint16, "Cisco-IOS-XE-ppp:virtual-template"}
{

    yang_name = "multilink"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Multilink::~Multilink()
{
}

bool Native::Multilink::has_data() const
{
    return bundle_name.is_set
	|| virtual_template.is_set;
}

bool Native::Multilink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| ydk::is_set(virtual_template.yfilter);
}

std::string Native::Multilink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Multilink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multilink";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Multilink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Multilink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Multilink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Multilink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Multilink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
    if(value_path == "virtual-template")
    {
        virtual_template.yfilter = yfilter;
    }
}

bool Native::Multilink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-name" || name == "virtual-template")
        return true;
    return false;
}

Native::MacAddressTable::MacAddressTable()
    :
    evc_xconnect(std::make_shared<Native::MacAddressTable::EvcXconnect>())
	,limit(std::make_shared<Native::MacAddressTable::Limit>())
	,learning(std::make_shared<Native::MacAddressTable::Learning>())
{
    evc_xconnect->parent = this;
    limit->parent = this;
    learning->parent = this;

    yang_name = "mac-address-table"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::MacAddressTable::~MacAddressTable()
{
}

bool Native::MacAddressTable::has_data() const
{
    return (evc_xconnect !=  nullptr && evc_xconnect->has_data())
	|| (limit !=  nullptr && limit->has_data())
	|| (learning !=  nullptr && learning->has_data());
}

bool Native::MacAddressTable::has_operation() const
{
    return is_set(yfilter)
	|| (evc_xconnect !=  nullptr && evc_xconnect->has_operation())
	|| (limit !=  nullptr && limit->has_operation())
	|| (learning !=  nullptr && learning->has_operation());
}

std::string Native::MacAddressTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MacAddressTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evc-xconnect")
    {
        if(evc_xconnect == nullptr)
        {
            evc_xconnect = std::make_shared<Native::MacAddressTable::EvcXconnect>();
        }
        return evc_xconnect;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::MacAddressTable::Limit>();
        }
        return limit;
    }

    if(child_yang_name == "learning")
    {
        if(learning == nullptr)
        {
            learning = std::make_shared<Native::MacAddressTable::Learning>();
        }
        return learning;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MacAddressTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(evc_xconnect != nullptr)
    {
        children["evc-xconnect"] = evc_xconnect;
    }

    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    if(learning != nullptr)
    {
        children["learning"] = learning;
    }

    return children;
}

void Native::MacAddressTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::MacAddressTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::MacAddressTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evc-xconnect" || name == "limit" || name == "learning")
        return true;
    return false;
}

Native::MacAddressTable::EvcXconnect::EvcXconnect()
    :
    l2pt_forward_all{YType::empty, "l2pt-forward-all"}
{

    yang_name = "evc-xconnect"; yang_parent_name = "mac-address-table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::MacAddressTable::EvcXconnect::~EvcXconnect()
{
}

bool Native::MacAddressTable::EvcXconnect::has_data() const
{
    return l2pt_forward_all.is_set;
}

bool Native::MacAddressTable::EvcXconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2pt_forward_all.yfilter);
}

std::string Native::MacAddressTable::EvcXconnect::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::EvcXconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evc-xconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::EvcXconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2pt_forward_all.is_set || is_set(l2pt_forward_all.yfilter)) leaf_name_data.push_back(l2pt_forward_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MacAddressTable::EvcXconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MacAddressTable::EvcXconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::MacAddressTable::EvcXconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2pt-forward-all")
    {
        l2pt_forward_all = value;
        l2pt_forward_all.value_namespace = name_space;
        l2pt_forward_all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::MacAddressTable::EvcXconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2pt-forward-all")
    {
        l2pt_forward_all.yfilter = yfilter;
    }
}

bool Native::MacAddressTable::EvcXconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2pt-forward-all")
        return true;
    return false;
}

Native::MacAddressTable::Limit::Limit()
{

    yang_name = "limit"; yang_parent_name = "mac-address-table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::MacAddressTable::Limit::~Limit()
{
}

bool Native::MacAddressTable::Limit::has_data() const
{
    for (std::size_t index=0; index<bdomain.size(); index++)
    {
        if(bdomain[index]->has_data())
            return true;
    }
    return false;
}

bool Native::MacAddressTable::Limit::has_operation() const
{
    for (std::size_t index=0; index<bdomain.size(); index++)
    {
        if(bdomain[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::MacAddressTable::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MacAddressTable::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bdomain")
    {
        for(auto const & c : bdomain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::MacAddressTable::Limit::Bdomain>();
        c->parent = this;
        bdomain.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MacAddressTable::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bdomain)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::MacAddressTable::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::MacAddressTable::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::MacAddressTable::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bdomain")
        return true;
    return false;
}

Native::MacAddressTable::Limit::Bdomain::Bdomain()
    :
    number{YType::uint16, "number"},
    action{YType::enumeration, "action"},
    maximum{YType::uint32, "maximum"}
{

    yang_name = "bdomain"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = false;
}

Native::MacAddressTable::Limit::Bdomain::~Bdomain()
{
}

bool Native::MacAddressTable::Limit::Bdomain::has_data() const
{
    return number.is_set
	|| action.is_set
	|| maximum.is_set;
}

bool Native::MacAddressTable::Limit::Bdomain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(maximum.yfilter);
}

std::string Native::MacAddressTable::Limit::Bdomain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::Limit::Bdomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdomain" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::Limit::Bdomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MacAddressTable::Limit::Bdomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MacAddressTable::Limit::Bdomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::MacAddressTable::Limit::Bdomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
}

void Native::MacAddressTable::Limit::Bdomain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
}

bool Native::MacAddressTable::Limit::Bdomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "action" || name == "maximum")
        return true;
    return false;
}

Native::MacAddressTable::Learning::Learning()
{

    yang_name = "learning"; yang_parent_name = "mac-address-table"; is_top_level_class = false; has_list_ancestor = false;
}

Native::MacAddressTable::Learning::~Learning()
{
}

bool Native::MacAddressTable::Learning::has_data() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return false;
}

bool Native::MacAddressTable::Learning::has_operation() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::MacAddressTable::Learning::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::Learning::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "learning";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::Learning::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MacAddressTable::Learning::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<Native::MacAddressTable::Learning::Vlan>();
        c->parent = this;
        vlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MacAddressTable::Learning::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::MacAddressTable::Learning::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::MacAddressTable::Learning::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::MacAddressTable::Learning::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::MacAddressTable::Learning::Vlan::Vlan()
    :
    id{YType::uint16, "id"},
    module{YType::uint8, "module"}
{

    yang_name = "vlan"; yang_parent_name = "learning"; is_top_level_class = false; has_list_ancestor = false;
}

Native::MacAddressTable::Learning::Vlan::~Vlan()
{
}

bool Native::MacAddressTable::Learning::Vlan::has_data() const
{
    return id.is_set
	|| module.is_set;
}

bool Native::MacAddressTable::Learning::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(module.yfilter);
}

std::string Native::MacAddressTable::Learning::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/learning/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MacAddressTable::Learning::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MacAddressTable::Learning::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MacAddressTable::Learning::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MacAddressTable::Learning::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::MacAddressTable::Learning::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
}

void Native::MacAddressTable::Learning::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
}

bool Native::MacAddressTable::Learning::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "module")
        return true;
    return false;
}

Native::Redundancy::Redundancy()
    :
    maintenance_mode{YType::empty, "maintenance-mode"},
    mode{YType::enumeration, "mode"}
    	,
    main_cpu(nullptr) // presence node
	,policy(std::make_shared<Native::Redundancy::Policy>())
	,timer(std::make_shared<Native::Redundancy::Timer>())
	,interchassis(std::make_shared<Native::Redundancy::Interchassis>())
{
    policy->parent = this;
    timer->parent = this;
    interchassis->parent = this;

    yang_name = "redundancy"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::~Redundancy()
{
}

bool Native::Redundancy::has_data() const
{
    return maintenance_mode.is_set
	|| mode.is_set
	|| (main_cpu !=  nullptr && main_cpu->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (timer !=  nullptr && timer->has_data())
	|| (interchassis !=  nullptr && interchassis->has_data());
}

bool Native::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maintenance_mode.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (main_cpu !=  nullptr && main_cpu->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (timer !=  nullptr && timer->has_operation())
	|| (interchassis !=  nullptr && interchassis->has_operation());
}

std::string Native::Redundancy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maintenance_mode.is_set || is_set(maintenance_mode.yfilter)) leaf_name_data.push_back(maintenance_mode.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-cpu")
    {
        if(main_cpu == nullptr)
        {
            main_cpu = std::make_shared<Native::Redundancy::MainCpu>();
        }
        return main_cpu;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Redundancy::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Redundancy::Timer>();
        }
        return timer;
    }

    if(child_yang_name == "interchassis")
    {
        if(interchassis == nullptr)
        {
            interchassis = std::make_shared<Native::Redundancy::Interchassis>();
        }
        return interchassis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(main_cpu != nullptr)
    {
        children["main-cpu"] = main_cpu;
    }

    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(timer != nullptr)
    {
        children["timer"] = timer;
    }

    if(interchassis != nullptr)
    {
        children["interchassis"] = interchassis;
    }

    return children;
}

void Native::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maintenance-mode")
    {
        maintenance_mode = value;
        maintenance_mode.value_namespace = name_space;
        maintenance_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maintenance-mode")
    {
        maintenance_mode.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-cpu" || name == "policy" || name == "timer" || name == "interchassis" || name == "maintenance-mode" || name == "mode")
        return true;
    return false;
}

Native::Redundancy::MainCpu::MainCpu()
    :
    auto_sync(std::make_shared<Native::Redundancy::MainCpu::AutoSync>())
	,standby(std::make_shared<Native::Redundancy::MainCpu::Standby>())
{
    auto_sync->parent = this;
    standby->parent = this;

    yang_name = "main-cpu"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::MainCpu::~MainCpu()
{
}

bool Native::Redundancy::MainCpu::has_data() const
{
    return (auto_sync !=  nullptr && auto_sync->has_data())
	|| (standby !=  nullptr && standby->has_data());
}

bool Native::Redundancy::MainCpu::has_operation() const
{
    return is_set(yfilter)
	|| (auto_sync !=  nullptr && auto_sync->has_operation())
	|| (standby !=  nullptr && standby->has_operation());
}

std::string Native::Redundancy::MainCpu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-cpu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::MainCpu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-sync")
    {
        if(auto_sync == nullptr)
        {
            auto_sync = std::make_shared<Native::Redundancy::MainCpu::AutoSync>();
        }
        return auto_sync;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Native::Redundancy::MainCpu::Standby>();
        }
        return standby;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::MainCpu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_sync != nullptr)
    {
        children["auto-sync"] = auto_sync;
    }

    if(standby != nullptr)
    {
        children["standby"] = standby;
    }

    return children;
}

void Native::Redundancy::MainCpu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::MainCpu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::MainCpu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-sync" || name == "standby")
        return true;
    return false;
}

Native::Redundancy::MainCpu::AutoSync::AutoSync()
    :
    running_config{YType::empty, "running-config"},
    config_register{YType::empty, "config-register"},
    bootvar{YType::empty, "bootvar"},
    standard{YType::empty, "standard"}
{

    yang_name = "auto-sync"; yang_parent_name = "main-cpu"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::MainCpu::AutoSync::~AutoSync()
{
}

bool Native::Redundancy::MainCpu::AutoSync::has_data() const
{
    return running_config.is_set
	|| config_register.is_set
	|| bootvar.is_set
	|| standard.is_set;
}

bool Native::Redundancy::MainCpu::AutoSync::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(running_config.yfilter)
	|| ydk::is_set(config_register.yfilter)
	|| ydk::is_set(bootvar.yfilter)
	|| ydk::is_set(standard.yfilter);
}

std::string Native::Redundancy::MainCpu::AutoSync::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::AutoSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-sync";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::AutoSync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (running_config.is_set || is_set(running_config.yfilter)) leaf_name_data.push_back(running_config.get_name_leafdata());
    if (config_register.is_set || is_set(config_register.yfilter)) leaf_name_data.push_back(config_register.get_name_leafdata());
    if (bootvar.is_set || is_set(bootvar.yfilter)) leaf_name_data.push_back(bootvar.get_name_leafdata());
    if (standard.is_set || is_set(standard.yfilter)) leaf_name_data.push_back(standard.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::MainCpu::AutoSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::MainCpu::AutoSync::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::MainCpu::AutoSync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "running-config")
    {
        running_config = value;
        running_config.value_namespace = name_space;
        running_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-register")
    {
        config_register = value;
        config_register.value_namespace = name_space;
        config_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bootvar")
    {
        bootvar = value;
        bootvar.value_namespace = name_space;
        bootvar.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standard")
    {
        standard = value;
        standard.value_namespace = name_space;
        standard.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::MainCpu::AutoSync::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "running-config")
    {
        running_config.yfilter = yfilter;
    }
    if(value_path == "config-register")
    {
        config_register.yfilter = yfilter;
    }
    if(value_path == "bootvar")
    {
        bootvar.yfilter = yfilter;
    }
    if(value_path == "standard")
    {
        standard.yfilter = yfilter;
    }
}

bool Native::Redundancy::MainCpu::AutoSync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "running-config" || name == "config-register" || name == "bootvar" || name == "standard")
        return true;
    return false;
}

Native::Redundancy::MainCpu::Standby::Standby()
    :
    console(std::make_shared<Native::Redundancy::MainCpu::Standby::Console>())
	,initialization(std::make_shared<Native::Redundancy::MainCpu::Standby::Initialization>())
{
    console->parent = this;
    initialization->parent = this;

    yang_name = "standby"; yang_parent_name = "main-cpu"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::MainCpu::Standby::~Standby()
{
}

bool Native::Redundancy::MainCpu::Standby::has_data() const
{
    return (console !=  nullptr && console->has_data())
	|| (initialization !=  nullptr && initialization->has_data());
}

bool Native::Redundancy::MainCpu::Standby::has_operation() const
{
    return is_set(yfilter)
	|| (console !=  nullptr && console->has_operation())
	|| (initialization !=  nullptr && initialization->has_operation());
}

std::string Native::Redundancy::MainCpu::Standby::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::Standby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::MainCpu::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "console")
    {
        if(console == nullptr)
        {
            console = std::make_shared<Native::Redundancy::MainCpu::Standby::Console>();
        }
        return console;
    }

    if(child_yang_name == "initialization")
    {
        if(initialization == nullptr)
        {
            initialization = std::make_shared<Native::Redundancy::MainCpu::Standby::Initialization>();
        }
        return initialization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::MainCpu::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(console != nullptr)
    {
        children["console"] = console;
    }

    if(initialization != nullptr)
    {
        children["initialization"] = initialization;
    }

    return children;
}

void Native::Redundancy::MainCpu::Standby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::MainCpu::Standby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::MainCpu::Standby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "console" || name == "initialization")
        return true;
    return false;
}

Native::Redundancy::MainCpu::Standby::Console::Console()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "console"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::MainCpu::Standby::Console::~Console()
{
}

bool Native::Redundancy::MainCpu::Standby::Console::has_data() const
{
    return enable.is_set;
}

bool Native::Redundancy::MainCpu::Standby::Console::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Redundancy::MainCpu::Standby::Console::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::Standby::Console::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::Standby::Console::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::MainCpu::Standby::Console::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::MainCpu::Standby::Console::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::MainCpu::Standby::Console::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::MainCpu::Standby::Console::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Redundancy::MainCpu::Standby::Console::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Redundancy::MainCpu::Standby::Initialization::Initialization()
    :
    delay(std::make_shared<Native::Redundancy::MainCpu::Standby::Initialization::Delay>())
{
    delay->parent = this;

    yang_name = "initialization"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::MainCpu::Standby::Initialization::~Initialization()
{
}

bool Native::Redundancy::MainCpu::Standby::Initialization::has_data() const
{
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Redundancy::MainCpu::Standby::Initialization::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Redundancy::MainCpu::Standby::Initialization::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::Standby::Initialization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initialization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::Standby::Initialization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::MainCpu::Standby::Initialization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Redundancy::MainCpu::Standby::Initialization::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::MainCpu::Standby::Initialization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Redundancy::MainCpu::Standby::Initialization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::MainCpu::Standby::Initialization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::MainCpu::Standby::Initialization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Redundancy::MainCpu::Standby::Initialization::Delay::Delay()
    :
    second{YType::uint16, "second"},
    boot_only{YType::empty, "boot-only"}
{

    yang_name = "delay"; yang_parent_name = "initialization"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::MainCpu::Standby::Initialization::Delay::~Delay()
{
}

bool Native::Redundancy::MainCpu::Standby::Initialization::Delay::has_data() const
{
    return second.is_set
	|| boot_only.is_set;
}

bool Native::Redundancy::MainCpu::Standby::Initialization::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(second.yfilter)
	|| ydk::is_set(boot_only.yfilter);
}

std::string Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/standby/initialization/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (second.is_set || is_set(second.yfilter)) leaf_name_data.push_back(second.get_name_leafdata());
    if (boot_only.is_set || is_set(boot_only.yfilter)) leaf_name_data.push_back(boot_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::MainCpu::Standby::Initialization::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "second")
    {
        second = value;
        second.value_namespace = name_space;
        second.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-only")
    {
        boot_only = value;
        boot_only.value_namespace = name_space;
        boot_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::MainCpu::Standby::Initialization::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "second")
    {
        second.yfilter = yfilter;
    }
    if(value_path == "boot-only")
    {
        boot_only.yfilter = yfilter;
    }
}

bool Native::Redundancy::MainCpu::Standby::Initialization::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "second" || name == "boot-only")
        return true;
    return false;
}

Native::Redundancy::Policy::Policy()
    :
    config_sync(std::make_shared<Native::Redundancy::Policy::ConfigSync>())
{
    config_sync->parent = this;

    yang_name = "policy"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::Policy::~Policy()
{
}

bool Native::Redundancy::Policy::has_data() const
{
    return (config_sync !=  nullptr && config_sync->has_data());
}

bool Native::Redundancy::Policy::has_operation() const
{
    return is_set(yfilter)
	|| (config_sync !=  nullptr && config_sync->has_operation());
}

std::string Native::Redundancy::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-sync")
    {
        if(config_sync == nullptr)
        {
            config_sync = std::make_shared<Native::Redundancy::Policy::ConfigSync>();
        }
        return config_sync;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config_sync != nullptr)
    {
        children["config-sync"] = config_sync;
    }

    return children;
}

void Native::Redundancy::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-sync")
        return true;
    return false;
}

Native::Redundancy::Policy::ConfigSync::ConfigSync()
    :
    bulk(std::make_shared<Native::Redundancy::Policy::ConfigSync::Bulk>())
	,lbl(std::make_shared<Native::Redundancy::Policy::ConfigSync::Lbl>())
{
    bulk->parent = this;
    lbl->parent = this;

    yang_name = "config-sync"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::Policy::ConfigSync::~ConfigSync()
{
}

bool Native::Redundancy::Policy::ConfigSync::has_data() const
{
    return (bulk !=  nullptr && bulk->has_data())
	|| (lbl !=  nullptr && lbl->has_data());
}

bool Native::Redundancy::Policy::ConfigSync::has_operation() const
{
    return is_set(yfilter)
	|| (bulk !=  nullptr && bulk->has_operation())
	|| (lbl !=  nullptr && lbl->has_operation());
}

std::string Native::Redundancy::Policy::ConfigSync::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::ConfigSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-sync";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::ConfigSync::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Policy::ConfigSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bulk")
    {
        if(bulk == nullptr)
        {
            bulk = std::make_shared<Native::Redundancy::Policy::ConfigSync::Bulk>();
        }
        return bulk;
    }

    if(child_yang_name == "lbl")
    {
        if(lbl == nullptr)
        {
            lbl = std::make_shared<Native::Redundancy::Policy::ConfigSync::Lbl>();
        }
        return lbl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Policy::ConfigSync::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bulk != nullptr)
    {
        children["bulk"] = bulk;
    }

    if(lbl != nullptr)
    {
        children["lbl"] = lbl;
    }

    return children;
}

void Native::Redundancy::Policy::ConfigSync::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Policy::ConfigSync::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Policy::ConfigSync::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bulk" || name == "lbl")
        return true;
    return false;
}

Native::Redundancy::Policy::ConfigSync::Bulk::Bulk()
    :
    prc(std::make_shared<Native::Redundancy::Policy::ConfigSync::Bulk::Prc>())
{
    prc->parent = this;

    yang_name = "bulk"; yang_parent_name = "config-sync"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::Policy::ConfigSync::Bulk::~Bulk()
{
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::has_data() const
{
    return (prc !=  nullptr && prc->has_data());
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::has_operation() const
{
    return is_set(yfilter)
	|| (prc !=  nullptr && prc->has_operation());
}

std::string Native::Redundancy::Policy::ConfigSync::Bulk::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/config-sync/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::ConfigSync::Bulk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bulk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::ConfigSync::Bulk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Policy::ConfigSync::Bulk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prc")
    {
        if(prc == nullptr)
        {
            prc = std::make_shared<Native::Redundancy::Policy::ConfigSync::Bulk::Prc>();
        }
        return prc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Policy::ConfigSync::Bulk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prc != nullptr)
    {
        children["prc"] = prc;
    }

    return children;
}

void Native::Redundancy::Policy::ConfigSync::Bulk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Policy::ConfigSync::Bulk::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prc")
        return true;
    return false;
}

Native::Redundancy::Policy::ConfigSync::Bulk::Prc::Prc()
    :
    reload{YType::boolean, "reload"}
{

    yang_name = "prc"; yang_parent_name = "bulk"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::Policy::ConfigSync::Bulk::Prc::~Prc()
{
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::Prc::has_data() const
{
    return reload.is_set;
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::Prc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reload.yfilter);
}

std::string Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/config-sync/bulk/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Policy::ConfigSync::Bulk::Prc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reload")
    {
        reload = value;
        reload.value_namespace = name_space;
        reload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Policy::ConfigSync::Bulk::Prc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reload")
    {
        reload.yfilter = yfilter;
    }
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::Prc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reload")
        return true;
    return false;
}

Native::Redundancy::Policy::ConfigSync::Lbl::Lbl()
    :
    prc(std::make_shared<Native::Redundancy::Policy::ConfigSync::Lbl::Prc>())
{
    prc->parent = this;

    yang_name = "lbl"; yang_parent_name = "config-sync"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::Policy::ConfigSync::Lbl::~Lbl()
{
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::has_data() const
{
    return (prc !=  nullptr && prc->has_data());
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::has_operation() const
{
    return is_set(yfilter)
	|| (prc !=  nullptr && prc->has_operation());
}

std::string Native::Redundancy::Policy::ConfigSync::Lbl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/config-sync/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::ConfigSync::Lbl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::ConfigSync::Lbl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Policy::ConfigSync::Lbl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prc")
    {
        if(prc == nullptr)
        {
            prc = std::make_shared<Native::Redundancy::Policy::ConfigSync::Lbl::Prc>();
        }
        return prc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Policy::ConfigSync::Lbl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prc != nullptr)
    {
        children["prc"] = prc;
    }

    return children;
}

void Native::Redundancy::Policy::ConfigSync::Lbl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Policy::ConfigSync::Lbl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prc")
        return true;
    return false;
}

Native::Redundancy::Policy::ConfigSync::Lbl::Prc::Prc()
    :
    reload{YType::boolean, "reload"}
{

    yang_name = "prc"; yang_parent_name = "lbl"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(reload.yfilter);
}

std::string Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/config-sync/lbl/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Policy::ConfigSync::Lbl::Prc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reload.is_set || is_set(reload.yfilter)) leaf_name_data.push_back(reload.get_name_leafdata());

    return leaf_name_data;

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

void Native::Redundancy::Policy::ConfigSync::Lbl::Prc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reload")
    {
        reload = value;
        reload.value_namespace = name_space;
        reload.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Policy::ConfigSync::Lbl::Prc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reload")
    {
        reload.yfilter = yfilter;
    }
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::Prc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reload")
        return true;
    return false;
}

Native::Redundancy::Timer::Timer()
    :
    rpso{YType::uint16, "rpso"}
{

    yang_name = "timer"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(rpso.yfilter);
}

std::string Native::Redundancy::Timer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rpso.is_set || is_set(rpso.yfilter)) leaf_name_data.push_back(rpso.get_name_leafdata());

    return leaf_name_data;

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

void Native::Redundancy::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rpso")
    {
        rpso = value;
        rpso.value_namespace = name_space;
        rpso.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rpso")
    {
        rpso.yfilter = yfilter;
    }
}

bool Native::Redundancy::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpso")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Interchassis()
{

    yang_name = "interchassis"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Native::Redundancy::Interchassis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Interchassis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interchassis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void Native::Redundancy::Interchassis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Redundancy::Interchassis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Redundancy::Interchassis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Group()
    :
    group_number{YType::uint64, "group-number"}
    	,
    monitor(std::make_shared<Native::Redundancy::Interchassis::Group::Monitor>())
	,member(std::make_shared<Native::Redundancy::Interchassis::Group::Member>())
	,backbone(std::make_shared<Native::Redundancy::Interchassis::Group::Backbone>())
{
    monitor->parent = this;
    member->parent = this;
    backbone->parent = this;

    yang_name = "group"; yang_parent_name = "interchassis"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Redundancy::Interchassis::Group::~Group()
{
}

bool Native::Redundancy::Interchassis::Group::has_data() const
{
    return group_number.is_set
	|| (monitor !=  nullptr && monitor->has_data())
	|| (member !=  nullptr && member->has_data())
	|| (backbone !=  nullptr && backbone->has_data());
}

bool Native::Redundancy::Interchassis::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_number.yfilter)
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (member !=  nullptr && member->has_operation())
	|| (backbone !=  nullptr && backbone->has_operation());
}

std::string Native::Redundancy::Interchassis::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/redundancy/interchassis/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Redundancy::Interchassis::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-number='" <<group_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Redundancy::Interchassis::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Redundancy::Interchassis::Group::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "member")
    {
        if(member == nullptr)
        {
            member = std::make_shared<Native::Redundancy::Interchassis::Group::Member>();
        }
        return member;
    }

    if(child_yang_name == "backbone")
    {
        if(backbone == nullptr)
        {
            backbone = std::make_shared<Native::Redundancy::Interchassis::Group::Backbone>();
        }
        return backbone;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Interchassis::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    if(member != nullptr)
    {
        children["member"] = member;
    }

    if(backbone != nullptr)
    {
        children["backbone"] = backbone;
    }

    return children;
}

void Native::Redundancy::Interchassis::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor" || name == "member" || name == "backbone" || name == "group-number")
        return true;
    return false;
}

Native::Redundancy::Interchassis::Group::Monitor::Monitor()
    :
    peer{YType::empty, "peer"},
    bfd{YType::empty, "bfd"}
{

    yang_name = "monitor"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Redundancy::Interchassis::Group::Monitor::~Monitor()
{
}

bool Native::Redundancy::Interchassis::Group::Monitor::has_data() const
{
    return peer.is_set
	|| bfd.is_set;
}

bool Native::Redundancy::Interchassis::Group::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(bfd.yfilter);
}

std::string Native::Redundancy::Interchassis::Group::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Redundancy::Interchassis::Group::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());

    return leaf_name_data;

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

void Native::Redundancy::Interchassis::Group::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Redundancy::Interchassis::Group::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
}

bool Native::Redundancy::Interchassis::Group::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "bfd")
        return true;
    return false;
}

const Enum::YLeaf Native::Aaa::Authentication::Dot1X::Dot1XList::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Dot1X::Dot1XList::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Dot1X::Default_::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Dot1X::Default_::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Enable::Default_::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Enable::Default_::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::Name::default_ {0, "default"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A1::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A1::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A1::Group::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A1::Cache::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A1::Cache::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A1::Cache::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A2::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A2::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A2::Group::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A2::Cache::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A2::Cache::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A2::Cache::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A3::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A3::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A3::Group::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A3::Cache::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A3::Cache::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A3::Cache::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A4::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A4::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A4::Group::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A4::Cache::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A4::Cache::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A4::Cache::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A1::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A1::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A1::Cache::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A1::Cache::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A2::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A2::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A2::Cache::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A2::Cache::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A3::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A3::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A3::Cache::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A3::Cache::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A4::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A4::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A4::Cache::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A4::Cache::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::AuthType::Default_::Group::radius {0, "radius"};

const Enum::YLeaf Native::Aaa::Authorization::Commands::ListName::default_ {0, "default"};

const Enum::YLeaf Native::Aaa::Authorization::Commands::Group::tacacs__PLUS__ {0, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A1::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A1::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A1::Group::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A1::Cache::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A1::Cache::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A1::Cache::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A2::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A2::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A2::Group::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A2::Cache::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A2::Cache::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A2::Cache::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A3::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A3::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A3::Group::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A3::Cache::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A3::Cache::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A3::Cache::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A4::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A4::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A4::Group::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A4::Cache::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A4::Cache::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A4::Cache::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Eventmanager::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Eventmanager::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Eventmanager::Group::tacacs {2, "tacacs"};

const Enum::YLeaf Native::Aaa::Authorization::Network::Id::default_ {0, "default"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A1::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A1::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A1::Cache::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A1::Cache::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A2::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A2::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A2::Cache::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A2::Cache::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A3::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A3::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A3::Cache::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A3::Cache::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A4::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A4::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A4::Cache::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A4::Cache::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Commands::ListName::default_ {0, "default"};

const Enum::YLeaf Native::Aaa::Accounting::Commands::ActionType::none {0, "none"};
const Enum::YLeaf Native::Aaa::Accounting::Commands::ActionType::start_stop {1, "start-stop"};
const Enum::YLeaf Native::Aaa::Accounting::Commands::ActionType::stop_only {2, "stop-only"};

const Enum::YLeaf Native::Aaa::Accounting::Commands::Group::tacacs__PLUS__ {0, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Connection::StartStop::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Connection::StartStop::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Connection::StopOnly::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Connection::StopOnly::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Identity::StartStop::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Identity::StartStop::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Exec::StartStop::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Exec::StartStop::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Exec::StopOnly::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Exec::StopOnly::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Network::Id::default_ {0, "default"};

const Enum::YLeaf Native::Aaa::Accounting::Network::Mode::start_stop {0, "start-stop"};
const Enum::YLeaf Native::Aaa::Accounting::Network::Mode::stop_only {1, "stop-only"};

const Enum::YLeaf Native::Aaa::Accounting::Network::StartStop::Group::radius {0, "radius"};

const Enum::YLeaf Native::Aaa::Accounting::Network::A1::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A1::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A1::Group::tacacs {2, "tacacs"};

const Enum::YLeaf Native::Aaa::Accounting::Network::A2::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A2::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A2::Group::tacacs {2, "tacacs"};

const Enum::YLeaf Native::Aaa::Accounting::Network::A3::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A3::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A3::Group::tacacs {2, "tacacs"};

const Enum::YLeaf Native::Aaa::Accounting::Network::A4::Group::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A4::Group::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A4::Group::tacacs {2, "tacacs"};

const Enum::YLeaf Native::Aaa::Accounting::System::Default_::StartStop::Group::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::System::Default_::StartStop::Group::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::AuthType::all {0, "all"};
const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::AuthType::any {1, "any"};
const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::AuthType::session_key {2, "session-key"};

const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::Key::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::Key::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::Key::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::Key::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::Key::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::Key::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Login::Display::last_failure {0, "last-failure"};
const Enum::YLeaf Native::Aaa::Login::Display::last_success {1, "last-success"};
const Enum::YLeaf Native::Aaa::Login::Display::number_failures {2, "number-failures"};

const Enum::YLeaf Native::Aaa::Login::Password::restriction {0, "restriction"};

const Enum::YLeaf Native::Aaa::Login::Traceback::recording {0, "recording"};

const Enum::YLeaf Native::Aaa::Login::Policy::InterfaceConfig::allow_subinterface {0, "allow-subinterface"};

const Enum::YLeaf Native::Aaa::Login::Server::Radius::dynamic_author {0, "dynamic-author"};
const Enum::YLeaf Native::Aaa::Login::Server::Radius::policy_device {1, "policy-device"};
const Enum::YLeaf Native::Aaa::Login::Server::Radius::proxy {2, "proxy"};
const Enum::YLeaf Native::Aaa::Login::Server::Radius::sesm {3, "sesm"};

const Enum::YLeaf Native::Multilink::BundleName::authenticated {0, "authenticated"};
const Enum::YLeaf Native::Multilink::BundleName::both {1, "both"};
const Enum::YLeaf Native::Multilink::BundleName::endpoint {2, "endpoint"};
const Enum::YLeaf Native::Multilink::BundleName::rfc {3, "rfc"};

const Enum::YLeaf Native::MacAddressTable::Limit::Bdomain::Action::warning {0, "warning"};
const Enum::YLeaf Native::MacAddressTable::Limit::Bdomain::Action::limit {1, "limit"};
const Enum::YLeaf Native::MacAddressTable::Limit::Bdomain::Action::shutdown {2, "shutdown"};

const Enum::YLeaf Native::Redundancy::Mode::rpr {0, "rpr"};
const Enum::YLeaf Native::Redundancy::Mode::rpr_plus {1, "rpr-plus"};
const Enum::YLeaf Native::Redundancy::Mode::sso {2, "sso"};
const Enum::YLeaf Native::Redundancy::Mode::none {3, "none"};


}
}

