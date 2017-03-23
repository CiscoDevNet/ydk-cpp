
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_tcp_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_tcp_cfg {

IpTcp::IpTcp()
    :
    accept_rate{YType::uint32, "accept-rate"},
    maximum_segment_size{YType::uint32, "maximum-segment-size"},
    path_mtu_discovery{YType::int32, "path-mtu-discovery"},
    receive_q{YType::uint32, "receive-q"},
    selective_ack{YType::empty, "selective-ack"},
    syn_wait_time{YType::uint32, "syn-wait-time"},
    timestamp{YType::empty, "timestamp"},
    window_size{YType::uint32, "window-size"}
    	,
    directory(nullptr) // presence node
	,num_thread(nullptr) // presence node
	,throttle(nullptr) // presence node
{
    yang_name = "ip-tcp"; yang_parent_name = "Cisco-IOS-XR-ip-tcp-cfg";
}

IpTcp::~IpTcp()
{
}

bool IpTcp::has_data() const
{
    return accept_rate.is_set
	|| maximum_segment_size.is_set
	|| path_mtu_discovery.is_set
	|| receive_q.is_set
	|| selective_ack.is_set
	|| syn_wait_time.is_set
	|| timestamp.is_set
	|| window_size.is_set
	|| (directory !=  nullptr && directory->has_data())
	|| (num_thread !=  nullptr && num_thread->has_data())
	|| (throttle !=  nullptr && throttle->has_data());
}

bool IpTcp::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_rate.operation)
	|| is_set(maximum_segment_size.operation)
	|| is_set(path_mtu_discovery.operation)
	|| is_set(receive_q.operation)
	|| is_set(selective_ack.operation)
	|| is_set(syn_wait_time.operation)
	|| is_set(timestamp.operation)
	|| is_set(window_size.operation)
	|| (directory !=  nullptr && directory->has_operation())
	|| (num_thread !=  nullptr && num_thread->has_operation())
	|| (throttle !=  nullptr && throttle->has_operation());
}

std::string IpTcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-tcp-cfg:ip-tcp";

    return path_buffer.str();

}

EntityPath IpTcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_rate.is_set || is_set(accept_rate.operation)) leaf_name_data.push_back(accept_rate.get_name_leafdata());
    if (maximum_segment_size.is_set || is_set(maximum_segment_size.operation)) leaf_name_data.push_back(maximum_segment_size.get_name_leafdata());
    if (path_mtu_discovery.is_set || is_set(path_mtu_discovery.operation)) leaf_name_data.push_back(path_mtu_discovery.get_name_leafdata());
    if (receive_q.is_set || is_set(receive_q.operation)) leaf_name_data.push_back(receive_q.get_name_leafdata());
    if (selective_ack.is_set || is_set(selective_ack.operation)) leaf_name_data.push_back(selective_ack.get_name_leafdata());
    if (syn_wait_time.is_set || is_set(syn_wait_time.operation)) leaf_name_data.push_back(syn_wait_time.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.operation)) leaf_name_data.push_back(window_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpTcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "directory")
    {
        if(directory != nullptr)
        {
            children["directory"] = directory;
        }
        else
        {
            directory = std::make_shared<IpTcp::Directory>();
            directory->parent = this;
            children["directory"] = directory;
        }
        return children.at("directory");
    }

    if(child_yang_name == "num-thread")
    {
        if(num_thread != nullptr)
        {
            children["num-thread"] = num_thread;
        }
        else
        {
            num_thread = std::make_shared<IpTcp::NumThread>();
            num_thread->parent = this;
            children["num-thread"] = num_thread;
        }
        return children.at("num-thread");
    }

    if(child_yang_name == "throttle")
    {
        if(throttle != nullptr)
        {
            children["throttle"] = throttle;
        }
        else
        {
            throttle = std::make_shared<IpTcp::Throttle>();
            throttle->parent = this;
            children["throttle"] = throttle;
        }
        return children.at("throttle");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & IpTcp::get_children()
{
    if(children.find("directory") == children.end())
    {
        if(directory != nullptr)
        {
            children["directory"] = directory;
        }
    }

    if(children.find("num-thread") == children.end())
    {
        if(num_thread != nullptr)
        {
            children["num-thread"] = num_thread;
        }
    }

    if(children.find("throttle") == children.end())
    {
        if(throttle != nullptr)
        {
            children["throttle"] = throttle;
        }
    }

    return children;
}

void IpTcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-rate")
    {
        accept_rate = value;
    }
    if(value_path == "maximum-segment-size")
    {
        maximum_segment_size = value;
    }
    if(value_path == "path-mtu-discovery")
    {
        path_mtu_discovery = value;
    }
    if(value_path == "receive-q")
    {
        receive_q = value;
    }
    if(value_path == "selective-ack")
    {
        selective_ack = value;
    }
    if(value_path == "syn-wait-time")
    {
        syn_wait_time = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "window-size")
    {
        window_size = value;
    }
}

std::shared_ptr<Entity> IpTcp::clone_ptr() const
{
    return std::make_shared<IpTcp>();
}

std::string IpTcp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string IpTcp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function IpTcp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

IpTcp::Directory::Directory()
    :
    directoryname{YType::str, "directoryname"},
    max_debug_files{YType::uint32, "max-debug-files"},
    max_file_size_files{YType::uint32, "max-file-size-files"}
{
    yang_name = "directory"; yang_parent_name = "ip-tcp";
}

IpTcp::Directory::~Directory()
{
}

bool IpTcp::Directory::has_data() const
{
    return directoryname.is_set
	|| max_debug_files.is_set
	|| max_file_size_files.is_set;
}

bool IpTcp::Directory::has_operation() const
{
    return is_set(operation)
	|| is_set(directoryname.operation)
	|| is_set(max_debug_files.operation)
	|| is_set(max_file_size_files.operation);
}

std::string IpTcp::Directory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "directory";

    return path_buffer.str();

}

EntityPath IpTcp::Directory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-tcp-cfg:ip-tcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (directoryname.is_set || is_set(directoryname.operation)) leaf_name_data.push_back(directoryname.get_name_leafdata());
    if (max_debug_files.is_set || is_set(max_debug_files.operation)) leaf_name_data.push_back(max_debug_files.get_name_leafdata());
    if (max_file_size_files.is_set || is_set(max_file_size_files.operation)) leaf_name_data.push_back(max_file_size_files.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpTcp::Directory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & IpTcp::Directory::get_children()
{
    return children;
}

void IpTcp::Directory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "directoryname")
    {
        directoryname = value;
    }
    if(value_path == "max-debug-files")
    {
        max_debug_files = value;
    }
    if(value_path == "max-file-size-files")
    {
        max_file_size_files = value;
    }
}

IpTcp::Throttle::Throttle()
    :
    tcpmaxthrottle{YType::uint32, "tcpmaxthrottle"},
    tcpmin_throttle{YType::uint32, "tcpmin-throttle"}
{
    yang_name = "throttle"; yang_parent_name = "ip-tcp";
}

IpTcp::Throttle::~Throttle()
{
}

bool IpTcp::Throttle::has_data() const
{
    return tcpmaxthrottle.is_set
	|| tcpmin_throttle.is_set;
}

bool IpTcp::Throttle::has_operation() const
{
    return is_set(operation)
	|| is_set(tcpmaxthrottle.operation)
	|| is_set(tcpmin_throttle.operation);
}

std::string IpTcp::Throttle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle";

    return path_buffer.str();

}

EntityPath IpTcp::Throttle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-tcp-cfg:ip-tcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcpmaxthrottle.is_set || is_set(tcpmaxthrottle.operation)) leaf_name_data.push_back(tcpmaxthrottle.get_name_leafdata());
    if (tcpmin_throttle.is_set || is_set(tcpmin_throttle.operation)) leaf_name_data.push_back(tcpmin_throttle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpTcp::Throttle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & IpTcp::Throttle::get_children()
{
    return children;
}

void IpTcp::Throttle::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tcpmaxthrottle")
    {
        tcpmaxthrottle = value;
    }
    if(value_path == "tcpmin-throttle")
    {
        tcpmin_throttle = value;
    }
}

IpTcp::NumThread::NumThread()
    :
    tcp_in_q_threads{YType::uint32, "tcp-in-q-threads"},
    tcp_out_q_threads{YType::uint32, "tcp-out-q-threads"}
{
    yang_name = "num-thread"; yang_parent_name = "ip-tcp";
}

IpTcp::NumThread::~NumThread()
{
}

bool IpTcp::NumThread::has_data() const
{
    return tcp_in_q_threads.is_set
	|| tcp_out_q_threads.is_set;
}

bool IpTcp::NumThread::has_operation() const
{
    return is_set(operation)
	|| is_set(tcp_in_q_threads.operation)
	|| is_set(tcp_out_q_threads.operation);
}

std::string IpTcp::NumThread::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-thread";

    return path_buffer.str();

}

EntityPath IpTcp::NumThread::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-tcp-cfg:ip-tcp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tcp_in_q_threads.is_set || is_set(tcp_in_q_threads.operation)) leaf_name_data.push_back(tcp_in_q_threads.get_name_leafdata());
    if (tcp_out_q_threads.is_set || is_set(tcp_out_q_threads.operation)) leaf_name_data.push_back(tcp_out_q_threads.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpTcp::NumThread::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & IpTcp::NumThread::get_children()
{
    return children;
}

void IpTcp::NumThread::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tcp-in-q-threads")
    {
        tcp_in_q_threads = value;
    }
    if(value_path == "tcp-out-q-threads")
    {
        tcp_out_q_threads = value;
    }
}

Ip::Ip()
    :
    cinetd(std::make_shared<Ip::Cinetd>())
	,forward_protocol(std::make_shared<Ip::ForwardProtocol>())
{
    cinetd->parent = this;
    children["cinetd"] = cinetd;

    forward_protocol->parent = this;
    children["forward-protocol"] = forward_protocol;

    yang_name = "ip"; yang_parent_name = "Cisco-IOS-XR-ip-tcp-cfg";
}

Ip::~Ip()
{
}

bool Ip::has_data() const
{
    return (cinetd !=  nullptr && cinetd->has_data())
	|| (forward_protocol !=  nullptr && forward_protocol->has_data());
}

bool Ip::has_operation() const
{
    return is_set(operation)
	|| (cinetd !=  nullptr && cinetd->has_operation())
	|| (forward_protocol !=  nullptr && forward_protocol->has_operation());
}

std::string Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-tcp-cfg:ip";

    return path_buffer.str();

}

EntityPath Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cinetd")
    {
        if(cinetd != nullptr)
        {
            children["cinetd"] = cinetd;
        }
        else
        {
            cinetd = std::make_shared<Ip::Cinetd>();
            cinetd->parent = this;
            children["cinetd"] = cinetd;
        }
        return children.at("cinetd");
    }

    if(child_yang_name == "forward-protocol")
    {
        if(forward_protocol != nullptr)
        {
            children["forward-protocol"] = forward_protocol;
        }
        else
        {
            forward_protocol = std::make_shared<Ip::ForwardProtocol>();
            forward_protocol->parent = this;
            children["forward-protocol"] = forward_protocol;
        }
        return children.at("forward-protocol");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ip::get_children()
{
    if(children.find("cinetd") == children.end())
    {
        if(cinetd != nullptr)
        {
            children["cinetd"] = cinetd;
        }
    }

    if(children.find("forward-protocol") == children.end())
    {
        if(forward_protocol != nullptr)
        {
            children["forward-protocol"] = forward_protocol;
        }
    }

    return children;
}

void Ip::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Ip::clone_ptr() const
{
    return std::make_shared<Ip>();
}

std::string Ip::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ip::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ip::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Ip::Cinetd::Cinetd()
    :
    services(std::make_shared<Ip::Cinetd::Services>())
{
    services->parent = this;
    children["services"] = services;

    yang_name = "cinetd"; yang_parent_name = "ip";
}

Ip::Cinetd::~Cinetd()
{
}

bool Ip::Cinetd::has_data() const
{
    return (services !=  nullptr && services->has_data());
}

bool Ip::Cinetd::has_operation() const
{
    return is_set(operation)
	|| (services !=  nullptr && services->has_operation());
}

std::string Ip::Cinetd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cinetd";

    return path_buffer.str();

}

EntityPath Ip::Cinetd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-tcp-cfg:ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ip::Cinetd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "services")
    {
        if(services != nullptr)
        {
            children["services"] = services;
        }
        else
        {
            services = std::make_shared<Ip::Cinetd::Services>();
            services->parent = this;
            children["services"] = services;
        }
        return children.at("services");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ip::Cinetd::get_children()
{
    if(children.find("services") == children.end())
    {
        if(services != nullptr)
        {
            children["services"] = services;
        }
    }

    return children;
}

void Ip::Cinetd::set_value(const std::string & value_path, std::string value)
{
}

Ip::Cinetd::Services::Services()
    :
    ipv4(std::make_shared<Ip::Cinetd::Services::Ipv4>())
	,ipv6(std::make_shared<Ip::Cinetd::Services::Ipv6>())
	,vrfs(std::make_shared<Ip::Cinetd::Services::Vrfs>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv6->parent = this;
    children["ipv6"] = ipv6;

    vrfs->parent = this;
    children["vrfs"] = vrfs;

    yang_name = "services"; yang_parent_name = "cinetd";
}

Ip::Cinetd::Services::~Services()
{
}

bool Ip::Cinetd::Services::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ip::Cinetd::Services::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Ip::Cinetd::Services::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "services";

    return path_buffer.str();

}

EntityPath Ip::Cinetd::Services::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-tcp-cfg:ip/cinetd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ip::Cinetd::Services::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<Ip::Cinetd::Services::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
        else
        {
            ipv6 = std::make_shared<Ip::Cinetd::Services::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6;
        }
        return children.at("ipv6");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
        else
        {
            vrfs = std::make_shared<Ip::Cinetd::Services::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs;
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ip::Cinetd::Services::get_children()
{
    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv6") == children.end())
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
    }

    return children;
}

void Ip::Cinetd::Services::set_value(const std::string & value_path, std::string value)
{
}

Ip::Cinetd::Services::Ipv4::Ipv4()
    :
    small_servers(std::make_shared<Ip::Cinetd::Services::Ipv4::SmallServers>())
{
    small_servers->parent = this;
    children["small-servers"] = small_servers;

    yang_name = "ipv4"; yang_parent_name = "services";
}

Ip::Cinetd::Services::Ipv4::~Ipv4()
{
}

bool Ip::Cinetd::Services::Ipv4::has_data() const
{
    return (small_servers !=  nullptr && small_servers->has_data());
}

bool Ip::Cinetd::Services::Ipv4::has_operation() const
{
    return is_set(operation)
	|| (small_servers !=  nullptr && small_servers->has_operation());
}

std::string Ip::Cinetd::Services::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath Ip::Cinetd::Services::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-tcp-cfg:ip/cinetd/services/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ip::Cinetd::Services::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "small-servers")
    {
        if(small_servers != nullptr)
        {
            children["small-servers"] = small_servers;
        }
        else
        {
            small_servers = std::make_shared<Ip::Cinetd::Services::Ipv4::SmallServers>();
            small_servers->parent = this;
            children["small-servers"] = small_servers;
        }
        return children.at("small-servers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ip::Cinetd::Services::Ipv4::get_children()
{
    if(children.find("small-servers") == children.end())
    {
        if(small_servers != nullptr)
        {
            children["small-servers"] = small_servers;
        }
    }

    return children;
}

void Ip::Cinetd::Services::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

Ip::Cinetd::Services::Ipv4::SmallServers::SmallServers()
    :
    tcp_small_servers(nullptr) // presence node
	,udp_small_servers(nullptr) // presence node
{
    yang_name = "small-servers"; yang_parent_name = "ipv4";
}

Ip::Cinetd::Services::Ipv4::SmallServers::~SmallServers()
{
}

bool Ip::Cinetd::Services::Ipv4::SmallServers::has_data() const
{
    return (tcp_small_servers !=  nullptr && tcp_small_servers->has_data())
	|| (udp_small_servers !=  nullptr && udp_small_servers->has_data());
}

bool Ip::Cinetd::Services::Ipv4::SmallServers::has_operation() const
{
    return is_set(operation)
	|| (tcp_small_servers !=  nullptr && tcp_small_servers->has_operation())
	|| (udp_small_servers !=  nullptr && udp_small_servers->has_operation());
}

std::string Ip::Cinetd::Services::Ipv4::SmallServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "small-servers";

    return path_buffer.str();

}

EntityPath Ip::Cinetd::Services::Ipv4::SmallServers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-tcp-cfg:ip/cinetd/services/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ip::Cinetd::Services::Ipv4::SmallServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tcp-small-servers")
    {
        if(tcp_small_servers != nullptr)
        {
            children["tcp-small-servers"] = tcp_small_servers;
        }
        else
        {
            tcp_small_servers = std::make_shared<Ip::Cinetd::Services::Ipv4::SmallServers::TcpSmallServers>();
            tcp_small_servers->parent = this;
            children["tcp-small-servers"] = tcp_small_servers;
        }
        return children.at("tcp-small-servers");
    }

    if(child_yang_name == "udp-small-servers")
    {
        if(udp_small_servers != nullptr)
        {
            children["udp-small-servers"] = udp_small_servers;
        }
        else
        {
            udp_small_servers = std::make_shared<Ip::Cinetd::Services::Ipv4::SmallServers::UdpSmallServers>();
            udp_small_servers->parent = this;
            children["udp-small-servers"] = udp_small_servers;
        }
        return children.at("udp-small-servers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ip::Cinetd::Services::Ipv4::SmallServers::get_children()
{
    if(children.find("tcp-small-servers") == children.end())
    {
        if(tcp_small_servers != nullptr)
        {
            children["tcp-small-servers"] = tcp_small_servers;
        }
    }

    if(children.find("udp-small-servers") == children.end())
    {
        if(udp_small_servers != nullptr)
        {
            children["udp-small-servers"] = udp_small_servers;
        }
    }

    return children;
}

void Ip::Cinetd::Services::Ipv4::SmallServers::set_value(const std::string & value_path, std::string value)
{
}

Ip::Cinetd::Services::Ipv4::SmallServers::TcpSmallServers::TcpSmallServers()
    :
    access_control_list_name{YType::str, "access-control-list-name"},
    small_server{YType::int32, "small-server"}
{
    yang_name = "tcp-small-servers"; yang_parent_name = "small-servers";
}

Ip::Cinetd::Services::Ipv4::SmallServers::TcpSmallServers::~TcpSmallServers()
{
}

bool Ip::Cinetd::Services::Ipv4::SmallServers::TcpSmallServers::has_data() const
{
    return access_control_list_name.is_set
	|| small_server.is_set;
}

bool Ip::Cinetd::Services::Ipv4::SmallServers::TcpSmallServers::has_operation() const
{
    return is_set(operation)
	|| is_set(access_control_list_name.operation)
	|| is_set(small_server.operation);
}

std::string Ip::Cinetd::Services::Ipv4::SmallServers::TcpSmallServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-small-servers";

    return path_buffer.str();

}

EntityPath Ip::Cinetd::Services::Ipv4::SmallServers::TcpSmallServers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-tcp-cfg:ip/cinetd/services/ipv4/small-servers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_control_list_name.is_set || is_set(access_control_list_name.operation)) leaf_name_data.push_back(access_control_list_name.get_name_leafdata());
    if (small_server.is_set || is_set(small_server.operation)) leaf_name_data.push_back(small_server.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ip::Cinetd::Services::Ipv4::SmallServers::TcpSmallServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ip::Cinetd::Services::Ipv4::SmallServers::TcpSmallServers::get_children()
{
    return children;
}

void Ip::Cinetd::Services::Ipv4::SmallServers::TcpSmallServers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-control-list-name")
    {
        access_control_list_name = value;
    }
    if(value_path == "small-server")
    {
        small_server = value;
    }
}

Ip::Cinetd::Services::Ipv4::SmallServers::UdpSmallServers::UdpSmallServers()
    :
    access_control_list_name{YType::str, "access-control-list-name"},
    small_server{YType::uint32, "small-server"}
{
    yang_name = "udp-small-servers"; yang_parent_name = "small-servers";
}

Ip::Cinetd::Services::Ipv4::SmallServers::UdpSmallServers::~UdpSmallServers()
{
}

bool Ip::Cinetd::Services::Ipv4::SmallServers::UdpSmallServers::has_data() const
{
    return access_control_list_name.is_set
	|| small_server.is_set;
}

bool Ip::Cinetd::Services::Ipv4::SmallServers::UdpSmallServers::has_operation() const
{
    return is_set(operation)
	|| is_set(access_control_list_name.operation)
	|| is_set(small_server.operation);
}

std::string Ip::Cinetd::Services::Ipv4::SmallServers::UdpSmallServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-udp-cfg:udp-small-servers";

    return path_buffer.str();

}

EntityPath Ip::Cinetd::Services::Ipv4::SmallServers::UdpSmallServers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-tcp-cfg:ip/cinetd/services/ipv4/small-servers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_control_list_name.is_set || is_set(access_control_list_name.operation)) leaf_name_data.push_back(access_control_list_name.get_name_leafdata());
    if (small_server.is_set || is_set(small_server.operation)) leaf_name_data.push_back(small_server.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ip::Cinetd::Services::Ipv4::SmallServers::UdpSmallServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ip::Cinetd::Services::Ipv4::SmallServers::UdpSmallServers::get_children()
{
    return children;
}

void Ip::Cinetd::Services::Ipv4::SmallServers::UdpSmallServers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-control-list-name")
    {
        access_control_list_name = value;
    }
    if(value_path == "small-server")
    {
        small_server = value;
    }
}

Ip::Cinetd::Services::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "services";
}

Ip::Cinetd::Services::Vrfs::~Vrfs()
{
}

bool Ip::Cinetd::Services::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ip::Cinetd::Services::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ip::Cinetd::Services::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Ip::Cinetd::Services::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-tcp-cfg:ip/cinetd/services/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ip::Cinetd::Services::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ip::Cinetd::Services::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ip::Cinetd::Services::Vrfs::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ip::Cinetd::Services::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Ip::Cinetd::Services::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    ipv4(std::make_shared<Ip::Cinetd::Services::Vrfs::Vrf::Ipv4>())
	,ipv6(std::make_shared<Ip::Cinetd::Services::Vrfs::Vrf::Ipv6>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv6->parent = this;
    children["ipv6"] = ipv6;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Ip::Cinetd::Services::Vrfs::Vrf::~Vrf()
{
}

bool Ip::Cinetd::Services::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Ip::Cinetd::Services::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Ip::Cinetd::Services::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath Ip::Cinetd::Services::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-tcp-cfg:ip/cinetd/services/vrfs/" << get_segment_path();
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

std::shared_ptr<Entity> Ip::Cinetd::Services::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<Ip::Cinetd::Services::Vrfs::Vrf::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
        else
        {
            ipv6 = std::make_shared<Ip::Cinetd::Services::Vrfs::Vrf::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6;
        }
        return children.at("ipv6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ip::Cinetd::Services::Vrfs::Vrf::get_children()
{
    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv6") == children.end())
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
    }

    return children;
}

void Ip::Cinetd::Services::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Ipv6()
    :
    telnet(std::make_shared<Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet>())
	,tftp(std::make_shared<Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp>())
{
    telnet->parent = this;
    children["telnet"] = telnet;

    tftp->parent = this;
    children["tftp"] = tftp;

    yang_name = "ipv6"; yang_parent_name = "vrf";
}

Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::~Ipv6()
{
}

bool Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::has_data() const
{
    return (telnet !=  nullptr && telnet->has_data())
	|| (tftp !=  nullptr && tftp->has_data());
}

bool Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::has_operation() const
{
    return is_set(operation)
	|| (telnet !=  nullptr && telnet->has_operation())
	|| (tftp !=  nullptr && tftp->has_operation());
}

std::string Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XR_ip_tcp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "telnet")
    {
        if(telnet != nullptr)
        {
            children["telnet"] = telnet;
        }
        else
        {
            telnet = std::make_shared<Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet>();
            telnet->parent = this;
            children["telnet"] = telnet;
        }
        return children.at("telnet");
    }

    if(child_yang_name == "tftp")
    {
        if(tftp != nullptr)
        {
            children["tftp"] = tftp;
        }
        else
        {
            tftp = std::make_shared<Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp>();
            tftp->parent = this;
            children["tftp"] = tftp;
        }
        return children.at("tftp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::get_children()
{
    if(children.find("telnet") == children.end())
    {
        if(telnet != nullptr)
        {
            children["telnet"] = telnet;
        }
    }

    if(children.find("tftp") == children.end())
    {
        if(tftp != nullptr)
        {
            children["tftp"] = tftp;
        }
    }

    return children;
}

void Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet::Telnet()
    :
    tcp(nullptr) // presence node
{
    yang_name = "telnet"; yang_parent_name = "ipv6";
}

Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet::~Telnet()
{
}

bool Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet::has_data() const
{
    return (tcp !=  nullptr && tcp->has_data());
}

bool Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet::has_operation() const
{
    return is_set(operation)
	|| (tcp !=  nullptr && tcp->has_operation());
}

std::string Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet";

    return path_buffer.str();

}

EntityPath Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Telnet' in Cisco_IOS_XR_ip_tcp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tcp")
    {
        if(tcp != nullptr)
        {
            children["tcp"] = tcp;
        }
        else
        {
            tcp = std::make_shared<Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet::Tcp>();
            tcp->parent = this;
            children["tcp"] = tcp;
        }
        return children.at("tcp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet::get_children()
{
    if(children.find("tcp") == children.end())
    {
        if(tcp != nullptr)
        {
            children["tcp"] = tcp;
        }
    }

    return children;
}

void Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet::set_value(const std::string & value_path, std::string value)
{
}

Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet::Tcp::Tcp()
    :
    access_list_name{YType::str, "access-list-name"},
    maximum_server{YType::uint32, "maximum-server"}
{
    yang_name = "tcp"; yang_parent_name = "telnet";
}

Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet::Tcp::~Tcp()
{
}

bool Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet::Tcp::has_data() const
{
    return access_list_name.is_set
	|| maximum_server.is_set;
}

bool Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet::Tcp::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(maximum_server.operation);
}

std::string Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";

    return path_buffer.str();

}

EntityPath Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet::Tcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tcp' in Cisco_IOS_XR_ip_tcp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (maximum_server.is_set || is_set(maximum_server.operation)) leaf_name_data.push_back(maximum_server.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet::Tcp::get_children()
{
    return children;
}

void Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet::Tcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "maximum-server")
    {
        maximum_server = value;
    }
}

Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp::Tftp()
    :
    udp(nullptr) // presence node
{
    yang_name = "tftp"; yang_parent_name = "ipv6";
}

Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp::~Tftp()
{
}

bool Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp::has_data() const
{
    return (udp !=  nullptr && udp->has_data());
}

bool Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp::has_operation() const
{
    return is_set(operation)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tftp";

    return path_buffer.str();

}

EntityPath Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tftp' in Cisco_IOS_XR_ip_tcp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "udp")
    {
        if(udp != nullptr)
        {
            children["udp"] = udp;
        }
        else
        {
            udp = std::make_shared<Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp::Udp>();
            udp->parent = this;
            children["udp"] = udp;
        }
        return children.at("udp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp::get_children()
{
    if(children.find("udp") == children.end())
    {
        if(udp != nullptr)
        {
            children["udp"] = udp;
        }
    }

    return children;
}

void Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp::set_value(const std::string & value_path, std::string value)
{
}

Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp::Udp::Udp()
    :
    access_list_name{YType::str, "access-list-name"},
    dscp_value{YType::int32, "dscp-value"},
    home_directory{YType::str, "home-directory"},
    maximum_server{YType::uint32, "maximum-server"}
{
    yang_name = "udp"; yang_parent_name = "tftp";
}

Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp::Udp::~Udp()
{
}

bool Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp::Udp::has_data() const
{
    return access_list_name.is_set
	|| dscp_value.is_set
	|| home_directory.is_set
	|| maximum_server.is_set;
}

bool Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp::Udp::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(dscp_value.operation)
	|| is_set(home_directory.operation)
	|| is_set(maximum_server.operation);
}

std::string Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

EntityPath Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp::Udp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Udp' in Cisco_IOS_XR_ip_tcp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (dscp_value.is_set || is_set(dscp_value.operation)) leaf_name_data.push_back(dscp_value.get_name_leafdata());
    if (home_directory.is_set || is_set(home_directory.operation)) leaf_name_data.push_back(home_directory.get_name_leafdata());
    if (maximum_server.is_set || is_set(maximum_server.operation)) leaf_name_data.push_back(maximum_server.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp::Udp::get_children()
{
    return children;
}

void Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp::Udp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "dscp-value")
    {
        dscp_value = value;
    }
    if(value_path == "home-directory")
    {
        home_directory = value;
    }
    if(value_path == "maximum-server")
    {
        maximum_server = value;
    }
}

Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Ipv4()
    :
    telnet(std::make_shared<Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet>())
	,tftp(std::make_shared<Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp>())
{
    telnet->parent = this;
    children["telnet"] = telnet;

    tftp->parent = this;
    children["tftp"] = tftp;

    yang_name = "ipv4"; yang_parent_name = "vrf";
}

Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::~Ipv4()
{
}

bool Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::has_data() const
{
    return (telnet !=  nullptr && telnet->has_data())
	|| (tftp !=  nullptr && tftp->has_data());
}

bool Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::has_operation() const
{
    return is_set(operation)
	|| (telnet !=  nullptr && telnet->has_operation())
	|| (tftp !=  nullptr && tftp->has_operation());
}

std::string Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XR_ip_tcp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "telnet")
    {
        if(telnet != nullptr)
        {
            children["telnet"] = telnet;
        }
        else
        {
            telnet = std::make_shared<Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet>();
            telnet->parent = this;
            children["telnet"] = telnet;
        }
        return children.at("telnet");
    }

    if(child_yang_name == "tftp")
    {
        if(tftp != nullptr)
        {
            children["tftp"] = tftp;
        }
        else
        {
            tftp = std::make_shared<Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp>();
            tftp->parent = this;
            children["tftp"] = tftp;
        }
        return children.at("tftp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::get_children()
{
    if(children.find("telnet") == children.end())
    {
        if(telnet != nullptr)
        {
            children["telnet"] = telnet;
        }
    }

    if(children.find("tftp") == children.end())
    {
        if(tftp != nullptr)
        {
            children["tftp"] = tftp;
        }
    }

    return children;
}

void Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet::Telnet()
    :
    tcp(nullptr) // presence node
{
    yang_name = "telnet"; yang_parent_name = "ipv4";
}

Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet::~Telnet()
{
}

bool Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet::has_data() const
{
    return (tcp !=  nullptr && tcp->has_data());
}

bool Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet::has_operation() const
{
    return is_set(operation)
	|| (tcp !=  nullptr && tcp->has_operation());
}

std::string Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "telnet";

    return path_buffer.str();

}

EntityPath Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Telnet' in Cisco_IOS_XR_ip_tcp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tcp")
    {
        if(tcp != nullptr)
        {
            children["tcp"] = tcp;
        }
        else
        {
            tcp = std::make_shared<Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet::Tcp>();
            tcp->parent = this;
            children["tcp"] = tcp;
        }
        return children.at("tcp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet::get_children()
{
    if(children.find("tcp") == children.end())
    {
        if(tcp != nullptr)
        {
            children["tcp"] = tcp;
        }
    }

    return children;
}

void Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet::set_value(const std::string & value_path, std::string value)
{
}

Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet::Tcp::Tcp()
    :
    access_list_name{YType::str, "access-list-name"},
    maximum_server{YType::uint32, "maximum-server"}
{
    yang_name = "tcp"; yang_parent_name = "telnet";
}

Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet::Tcp::~Tcp()
{
}

bool Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet::Tcp::has_data() const
{
    return access_list_name.is_set
	|| maximum_server.is_set;
}

bool Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet::Tcp::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(maximum_server.operation);
}

std::string Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";

    return path_buffer.str();

}

EntityPath Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet::Tcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tcp' in Cisco_IOS_XR_ip_tcp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (maximum_server.is_set || is_set(maximum_server.operation)) leaf_name_data.push_back(maximum_server.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet::Tcp::get_children()
{
    return children;
}

void Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet::Tcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "maximum-server")
    {
        maximum_server = value;
    }
}

Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp::Tftp()
    :
    udp(nullptr) // presence node
{
    yang_name = "tftp"; yang_parent_name = "ipv4";
}

Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp::~Tftp()
{
}

bool Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp::has_data() const
{
    return (udp !=  nullptr && udp->has_data());
}

bool Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp::has_operation() const
{
    return is_set(operation)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tftp";

    return path_buffer.str();

}

EntityPath Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tftp' in Cisco_IOS_XR_ip_tcp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "udp")
    {
        if(udp != nullptr)
        {
            children["udp"] = udp;
        }
        else
        {
            udp = std::make_shared<Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp::Udp>();
            udp->parent = this;
            children["udp"] = udp;
        }
        return children.at("udp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp::get_children()
{
    if(children.find("udp") == children.end())
    {
        if(udp != nullptr)
        {
            children["udp"] = udp;
        }
    }

    return children;
}

void Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp::set_value(const std::string & value_path, std::string value)
{
}

Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp::Udp::Udp()
    :
    access_list_name{YType::str, "access-list-name"},
    dscp_value{YType::int32, "dscp-value"},
    home_directory{YType::str, "home-directory"},
    maximum_server{YType::uint32, "maximum-server"}
{
    yang_name = "udp"; yang_parent_name = "tftp";
}

Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp::Udp::~Udp()
{
}

bool Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp::Udp::has_data() const
{
    return access_list_name.is_set
	|| dscp_value.is_set
	|| home_directory.is_set
	|| maximum_server.is_set;
}

bool Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp::Udp::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(dscp_value.operation)
	|| is_set(home_directory.operation)
	|| is_set(maximum_server.operation);
}

std::string Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

EntityPath Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp::Udp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Udp' in Cisco_IOS_XR_ip_tcp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (dscp_value.is_set || is_set(dscp_value.operation)) leaf_name_data.push_back(dscp_value.get_name_leafdata());
    if (home_directory.is_set || is_set(home_directory.operation)) leaf_name_data.push_back(home_directory.get_name_leafdata());
    if (maximum_server.is_set || is_set(maximum_server.operation)) leaf_name_data.push_back(maximum_server.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp::Udp::get_children()
{
    return children;
}

void Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp::Udp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "dscp-value")
    {
        dscp_value = value;
    }
    if(value_path == "home-directory")
    {
        home_directory = value;
    }
    if(value_path == "maximum-server")
    {
        maximum_server = value;
    }
}

Ip::Cinetd::Services::Ipv6::Ipv6()
    :
    small_servers(std::make_shared<Ip::Cinetd::Services::Ipv6::SmallServers>())
{
    small_servers->parent = this;
    children["small-servers"] = small_servers;

    yang_name = "ipv6"; yang_parent_name = "services";
}

Ip::Cinetd::Services::Ipv6::~Ipv6()
{
}

bool Ip::Cinetd::Services::Ipv6::has_data() const
{
    return (small_servers !=  nullptr && small_servers->has_data());
}

bool Ip::Cinetd::Services::Ipv6::has_operation() const
{
    return is_set(operation)
	|| (small_servers !=  nullptr && small_servers->has_operation());
}

std::string Ip::Cinetd::Services::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath Ip::Cinetd::Services::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-tcp-cfg:ip/cinetd/services/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ip::Cinetd::Services::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "small-servers")
    {
        if(small_servers != nullptr)
        {
            children["small-servers"] = small_servers;
        }
        else
        {
            small_servers = std::make_shared<Ip::Cinetd::Services::Ipv6::SmallServers>();
            small_servers->parent = this;
            children["small-servers"] = small_servers;
        }
        return children.at("small-servers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ip::Cinetd::Services::Ipv6::get_children()
{
    if(children.find("small-servers") == children.end())
    {
        if(small_servers != nullptr)
        {
            children["small-servers"] = small_servers;
        }
    }

    return children;
}

void Ip::Cinetd::Services::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

Ip::Cinetd::Services::Ipv6::SmallServers::SmallServers()
    :
    tcp_small_servers(nullptr) // presence node
{
    yang_name = "small-servers"; yang_parent_name = "ipv6";
}

Ip::Cinetd::Services::Ipv6::SmallServers::~SmallServers()
{
}

bool Ip::Cinetd::Services::Ipv6::SmallServers::has_data() const
{
    return (tcp_small_servers !=  nullptr && tcp_small_servers->has_data());
}

bool Ip::Cinetd::Services::Ipv6::SmallServers::has_operation() const
{
    return is_set(operation)
	|| (tcp_small_servers !=  nullptr && tcp_small_servers->has_operation());
}

std::string Ip::Cinetd::Services::Ipv6::SmallServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "small-servers";

    return path_buffer.str();

}

EntityPath Ip::Cinetd::Services::Ipv6::SmallServers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-tcp-cfg:ip/cinetd/services/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ip::Cinetd::Services::Ipv6::SmallServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tcp-small-servers")
    {
        if(tcp_small_servers != nullptr)
        {
            children["tcp-small-servers"] = tcp_small_servers;
        }
        else
        {
            tcp_small_servers = std::make_shared<Ip::Cinetd::Services::Ipv6::SmallServers::TcpSmallServers>();
            tcp_small_servers->parent = this;
            children["tcp-small-servers"] = tcp_small_servers;
        }
        return children.at("tcp-small-servers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ip::Cinetd::Services::Ipv6::SmallServers::get_children()
{
    if(children.find("tcp-small-servers") == children.end())
    {
        if(tcp_small_servers != nullptr)
        {
            children["tcp-small-servers"] = tcp_small_servers;
        }
    }

    return children;
}

void Ip::Cinetd::Services::Ipv6::SmallServers::set_value(const std::string & value_path, std::string value)
{
}

Ip::Cinetd::Services::Ipv6::SmallServers::TcpSmallServers::TcpSmallServers()
    :
    access_control_list_name{YType::str, "access-control-list-name"},
    small_server{YType::int32, "small-server"}
{
    yang_name = "tcp-small-servers"; yang_parent_name = "small-servers";
}

Ip::Cinetd::Services::Ipv6::SmallServers::TcpSmallServers::~TcpSmallServers()
{
}

bool Ip::Cinetd::Services::Ipv6::SmallServers::TcpSmallServers::has_data() const
{
    return access_control_list_name.is_set
	|| small_server.is_set;
}

bool Ip::Cinetd::Services::Ipv6::SmallServers::TcpSmallServers::has_operation() const
{
    return is_set(operation)
	|| is_set(access_control_list_name.operation)
	|| is_set(small_server.operation);
}

std::string Ip::Cinetd::Services::Ipv6::SmallServers::TcpSmallServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-small-servers";

    return path_buffer.str();

}

EntityPath Ip::Cinetd::Services::Ipv6::SmallServers::TcpSmallServers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-tcp-cfg:ip/cinetd/services/ipv6/small-servers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_control_list_name.is_set || is_set(access_control_list_name.operation)) leaf_name_data.push_back(access_control_list_name.get_name_leafdata());
    if (small_server.is_set || is_set(small_server.operation)) leaf_name_data.push_back(small_server.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ip::Cinetd::Services::Ipv6::SmallServers::TcpSmallServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ip::Cinetd::Services::Ipv6::SmallServers::TcpSmallServers::get_children()
{
    return children;
}

void Ip::Cinetd::Services::Ipv6::SmallServers::TcpSmallServers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-control-list-name")
    {
        access_control_list_name = value;
    }
    if(value_path == "small-server")
    {
        small_server = value;
    }
}

Ip::ForwardProtocol::ForwardProtocol()
    :
    udp(std::make_shared<Ip::ForwardProtocol::Udp>())
{
    udp->parent = this;
    children["udp"] = udp;

    yang_name = "forward-protocol"; yang_parent_name = "ip";
}

Ip::ForwardProtocol::~ForwardProtocol()
{
}

bool Ip::ForwardProtocol::has_data() const
{
    return (udp !=  nullptr && udp->has_data());
}

bool Ip::ForwardProtocol::has_operation() const
{
    return is_set(operation)
	|| (udp !=  nullptr && udp->has_operation());
}

std::string Ip::ForwardProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-udp-cfg:forward-protocol";

    return path_buffer.str();

}

EntityPath Ip::ForwardProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-tcp-cfg:ip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ip::ForwardProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "udp")
    {
        if(udp != nullptr)
        {
            children["udp"] = udp;
        }
        else
        {
            udp = std::make_shared<Ip::ForwardProtocol::Udp>();
            udp->parent = this;
            children["udp"] = udp;
        }
        return children.at("udp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ip::ForwardProtocol::get_children()
{
    if(children.find("udp") == children.end())
    {
        if(udp != nullptr)
        {
            children["udp"] = udp;
        }
    }

    return children;
}

void Ip::ForwardProtocol::set_value(const std::string & value_path, std::string value)
{
}

Ip::ForwardProtocol::Udp::Udp()
    :
    disable{YType::empty, "disable"}
    	,
    ports(std::make_shared<Ip::ForwardProtocol::Udp::Ports>())
{
    ports->parent = this;
    children["ports"] = ports;

    yang_name = "udp"; yang_parent_name = "forward-protocol";
}

Ip::ForwardProtocol::Udp::~Udp()
{
}

bool Ip::ForwardProtocol::Udp::has_data() const
{
    return disable.is_set
	|| (ports !=  nullptr && ports->has_data());
}

bool Ip::ForwardProtocol::Udp::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| (ports !=  nullptr && ports->has_operation());
}

std::string Ip::ForwardProtocol::Udp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udp";

    return path_buffer.str();

}

EntityPath Ip::ForwardProtocol::Udp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-tcp-cfg:ip/Cisco-IOS-XR-ip-udp-cfg:forward-protocol/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ip::ForwardProtocol::Udp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ports")
    {
        if(ports != nullptr)
        {
            children["ports"] = ports;
        }
        else
        {
            ports = std::make_shared<Ip::ForwardProtocol::Udp::Ports>();
            ports->parent = this;
            children["ports"] = ports;
        }
        return children.at("ports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ip::ForwardProtocol::Udp::get_children()
{
    if(children.find("ports") == children.end())
    {
        if(ports != nullptr)
        {
            children["ports"] = ports;
        }
    }

    return children;
}

void Ip::ForwardProtocol::Udp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Ip::ForwardProtocol::Udp::Ports::Ports()
{
    yang_name = "ports"; yang_parent_name = "udp";
}

Ip::ForwardProtocol::Udp::Ports::~Ports()
{
}

bool Ip::ForwardProtocol::Udp::Ports::has_data() const
{
    for (std::size_t index=0; index<port.size(); index++)
    {
        if(port[index]->has_data())
            return true;
    }
    return false;
}

bool Ip::ForwardProtocol::Udp::Ports::has_operation() const
{
    for (std::size_t index=0; index<port.size(); index++)
    {
        if(port[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ip::ForwardProtocol::Udp::Ports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ports";

    return path_buffer.str();

}

EntityPath Ip::ForwardProtocol::Udp::Ports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-tcp-cfg:ip/Cisco-IOS-XR-ip-udp-cfg:forward-protocol/udp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ip::ForwardProtocol::Udp::Ports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "port")
    {
        for(auto const & c : port)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ip::ForwardProtocol::Udp::Ports::Port>();
        c->parent = this;
        port.push_back(std::move(c));
        children[segment_path] = port.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ip::ForwardProtocol::Udp::Ports::get_children()
{
    for (auto const & c : port)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ip::ForwardProtocol::Udp::Ports::set_value(const std::string & value_path, std::string value)
{
}

Ip::ForwardProtocol::Udp::Ports::Port::Port()
    :
    port_id{YType::uint16, "port-id"},
    enable{YType::boolean, "enable"}
{
    yang_name = "port"; yang_parent_name = "ports";
}

Ip::ForwardProtocol::Udp::Ports::Port::~Port()
{
}

bool Ip::ForwardProtocol::Udp::Ports::Port::has_data() const
{
    return port_id.is_set
	|| enable.is_set;
}

bool Ip::ForwardProtocol::Udp::Ports::Port::has_operation() const
{
    return is_set(operation)
	|| is_set(port_id.operation)
	|| is_set(enable.operation);
}

std::string Ip::ForwardProtocol::Udp::Ports::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port" <<"[port-id='" <<port_id <<"']";

    return path_buffer.str();

}

EntityPath Ip::ForwardProtocol::Udp::Ports::Port::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-tcp-cfg:ip/Cisco-IOS-XR-ip-udp-cfg:forward-protocol/udp/ports/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_id.is_set || is_set(port_id.operation)) leaf_name_data.push_back(port_id.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ip::ForwardProtocol::Udp::Ports::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ip::ForwardProtocol::Udp::Ports::Port::get_children()
{
    return children;
}

void Ip::ForwardProtocol::Udp::Ports::Port::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-id")
    {
        port_id = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}


}
}

