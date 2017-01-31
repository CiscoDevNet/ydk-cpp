
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ip_tcp_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_tcp_oper {

TcpConnection::Nodes::Node::Statistics::Clients::Client::Client()
    :
    	client_id{YType::uint32, "client-id"},
	 client_jid{YType::int32, "client-jid"},
	 client_name{YType::str, "client-name"},
	 ipv4_received_packets{YType::uint32, "ipv4-received-packets"},
	 ipv4_sent_packets{YType::uint32, "ipv4-sent-packets"},
	 ipv6_received_packets{YType::uint32, "ipv6-received-packets"},
	 ipv6_sent_packets{YType::uint32, "ipv6-sent-packets"}
{
    yang_name = "client"; yang_parent_name = "clients";
}

TcpConnection::Nodes::Node::Statistics::Clients::Client::~Client()
{
}

bool TcpConnection::Nodes::Node::Statistics::Clients::Client::has_data() const
{
    return client_id.is_set
	|| client_jid.is_set
	|| client_name.is_set
	|| ipv4_received_packets.is_set
	|| ipv4_sent_packets.is_set
	|| ipv6_received_packets.is_set
	|| ipv6_sent_packets.is_set;
}

bool TcpConnection::Nodes::Node::Statistics::Clients::Client::has_operation() const
{
    return is_set(operation)
	|| is_set(client_id.operation)
	|| is_set(client_jid.operation)
	|| is_set(client_name.operation)
	|| is_set(ipv4_received_packets.operation)
	|| is_set(ipv4_sent_packets.operation)
	|| is_set(ipv6_received_packets.operation)
	|| is_set(ipv6_sent_packets.operation);
}

std::string TcpConnection::Nodes::Node::Statistics::Clients::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client" <<"[client-id='" <<client_id.get() <<"']";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::Statistics::Clients::Client::get_entity_path(Entity* ancestor) const
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

    if (client_id.is_set || is_set(client_id.operation)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (client_jid.is_set || is_set(client_jid.operation)) leaf_name_data.push_back(client_jid.get_name_leafdata());
    if (client_name.is_set || is_set(client_name.operation)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (ipv4_received_packets.is_set || is_set(ipv4_received_packets.operation)) leaf_name_data.push_back(ipv4_received_packets.get_name_leafdata());
    if (ipv4_sent_packets.is_set || is_set(ipv4_sent_packets.operation)) leaf_name_data.push_back(ipv4_sent_packets.get_name_leafdata());
    if (ipv6_received_packets.is_set || is_set(ipv6_received_packets.operation)) leaf_name_data.push_back(ipv6_received_packets.get_name_leafdata());
    if (ipv6_sent_packets.is_set || is_set(ipv6_sent_packets.operation)) leaf_name_data.push_back(ipv6_sent_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::Statistics::Clients::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::Statistics::Clients::Client::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::Statistics::Clients::Client::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "client-id")
    {
        client_id = value;
    }
    if(value_path == "client-jid")
    {
        client_jid = value;
    }
    if(value_path == "client-name")
    {
        client_name = value;
    }
    if(value_path == "ipv4-received-packets")
    {
        ipv4_received_packets = value;
    }
    if(value_path == "ipv4-sent-packets")
    {
        ipv4_sent_packets = value;
    }
    if(value_path == "ipv6-received-packets")
    {
        ipv6_received_packets = value;
    }
    if(value_path == "ipv6-sent-packets")
    {
        ipv6_sent_packets = value;
    }
}

TcpConnection::Nodes::Node::Statistics::Clients::Clients()
{
    yang_name = "clients"; yang_parent_name = "statistics";
}

TcpConnection::Nodes::Node::Statistics::Clients::~Clients()
{
}

bool TcpConnection::Nodes::Node::Statistics::Clients::has_data() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return false;
}

bool TcpConnection::Nodes::Node::Statistics::Clients::has_operation() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TcpConnection::Nodes::Node::Statistics::Clients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clients";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::Statistics::Clients::get_entity_path(Entity* ancestor) const
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

Entity* TcpConnection::Nodes::Node::Statistics::Clients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "client")
    {
        for(auto const & c : client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TcpConnection::Nodes::Node::Statistics::Clients::Client>();
        c->parent = this;
        client.push_back(std::move(c));
        children[segment_path] = client.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::Statistics::Clients::get_children()
{
    for (auto const & c : client)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TcpConnection::Nodes::Node::Statistics::Clients::set_value(const std::string & value_path, std::string value)
{
}

TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts::ReadIoCounts()
    :
    	arm_count{YType::uint32, "arm-count"},
	 autoarm_count{YType::uint32, "autoarm-count"},
	 io_count{YType::uint32, "io-count"},
	 unarm_count{YType::uint32, "unarm-count"}
{
    yang_name = "read-io-counts"; yang_parent_name = "pcb";
}

TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts::~ReadIoCounts()
{
}

bool TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts::has_data() const
{
    return arm_count.is_set
	|| autoarm_count.is_set
	|| io_count.is_set
	|| unarm_count.is_set;
}

bool TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts::has_operation() const
{
    return is_set(operation)
	|| is_set(arm_count.operation)
	|| is_set(autoarm_count.operation)
	|| is_set(io_count.operation)
	|| is_set(unarm_count.operation);
}

std::string TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "read-io-counts";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts::get_entity_path(Entity* ancestor) const
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

    if (arm_count.is_set || is_set(arm_count.operation)) leaf_name_data.push_back(arm_count.get_name_leafdata());
    if (autoarm_count.is_set || is_set(autoarm_count.operation)) leaf_name_data.push_back(autoarm_count.get_name_leafdata());
    if (io_count.is_set || is_set(io_count.operation)) leaf_name_data.push_back(io_count.get_name_leafdata());
    if (unarm_count.is_set || is_set(unarm_count.operation)) leaf_name_data.push_back(unarm_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "arm-count")
    {
        arm_count = value;
    }
    if(value_path == "autoarm-count")
    {
        autoarm_count = value;
    }
    if(value_path == "io-count")
    {
        io_count = value;
    }
    if(value_path == "unarm-count")
    {
        unarm_count = value;
    }
}

TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts::WriteIoCounts()
    :
    	arm_count{YType::uint32, "arm-count"},
	 autoarm_count{YType::uint32, "autoarm-count"},
	 io_count{YType::uint32, "io-count"},
	 unarm_count{YType::uint32, "unarm-count"}
{
    yang_name = "write-io-counts"; yang_parent_name = "pcb";
}

TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts::~WriteIoCounts()
{
}

bool TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts::has_data() const
{
    return arm_count.is_set
	|| autoarm_count.is_set
	|| io_count.is_set
	|| unarm_count.is_set;
}

bool TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts::has_operation() const
{
    return is_set(operation)
	|| is_set(arm_count.operation)
	|| is_set(autoarm_count.operation)
	|| is_set(io_count.operation)
	|| is_set(unarm_count.operation);
}

std::string TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "write-io-counts";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts::get_entity_path(Entity* ancestor) const
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

    if (arm_count.is_set || is_set(arm_count.operation)) leaf_name_data.push_back(arm_count.get_name_leafdata());
    if (autoarm_count.is_set || is_set(autoarm_count.operation)) leaf_name_data.push_back(autoarm_count.get_name_leafdata());
    if (io_count.is_set || is_set(io_count.operation)) leaf_name_data.push_back(io_count.get_name_leafdata());
    if (unarm_count.is_set || is_set(unarm_count.operation)) leaf_name_data.push_back(unarm_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "arm-count")
    {
        arm_count = value;
    }
    if(value_path == "autoarm-count")
    {
        autoarm_count = value;
    }
    if(value_path == "io-count")
    {
        io_count = value;
    }
    if(value_path == "unarm-count")
    {
        unarm_count = value;
    }
}

TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::AsyncSessionStats()
    :
    	async_session{YType::boolean, "async-session"},
	 control_read_error_num{YType::uint32, "control-read-error-num"},
	 control_read_success_num{YType::uint32, "control-read-success-num"},
	 control_write_error_num{YType::uint32, "control-write-error-num"},
	 control_write_success_num{YType::uint32, "control-write-success-num"},
	 data_read_byte{YType::uint64, "data-read-byte"},
	 data_read_error_num{YType::uint32, "data-read-error-num"},
	 data_read_success_num{YType::uint32, "data-read-success-num"},
	 data_write_byte{YType::uint64, "data-write-byte"},
	 data_write_error_num{YType::uint32, "data-write-error-num"},
	 data_write_success_num{YType::uint32, "data-write-success-num"}
{
    yang_name = "async-session-stats"; yang_parent_name = "pcb";
}

TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::~AsyncSessionStats()
{
}

bool TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::has_data() const
{
    for (auto const & leaf : control_read_error_num.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : control_read_success_num.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : control_write_error_num.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : control_write_success_num.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : data_read_byte.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : data_read_error_num.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : data_read_success_num.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : data_write_byte.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : data_write_error_num.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : data_write_success_num.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return async_session.is_set;
}

bool TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::has_operation() const
{
    for (auto const & leaf : control_read_error_num.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : control_read_success_num.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : control_write_error_num.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : control_write_success_num.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : data_read_byte.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : data_read_error_num.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : data_read_success_num.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : data_write_byte.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : data_write_error_num.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : data_write_success_num.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(async_session.operation)
	|| is_set(control_read_error_num.operation)
	|| is_set(control_read_success_num.operation)
	|| is_set(control_write_error_num.operation)
	|| is_set(control_write_success_num.operation)
	|| is_set(data_read_byte.operation)
	|| is_set(data_read_error_num.operation)
	|| is_set(data_read_success_num.operation)
	|| is_set(data_write_byte.operation)
	|| is_set(data_write_error_num.operation)
	|| is_set(data_write_success_num.operation);
}

std::string TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "async-session-stats";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::get_entity_path(Entity* ancestor) const
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

    if (async_session.is_set || is_set(async_session.operation)) leaf_name_data.push_back(async_session.get_name_leafdata());

    auto control_read_error_num_name_datas = control_read_error_num.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), control_read_error_num_name_datas.begin(), control_read_error_num_name_datas.end());
    auto control_read_success_num_name_datas = control_read_success_num.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), control_read_success_num_name_datas.begin(), control_read_success_num_name_datas.end());
    auto control_write_error_num_name_datas = control_write_error_num.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), control_write_error_num_name_datas.begin(), control_write_error_num_name_datas.end());
    auto control_write_success_num_name_datas = control_write_success_num.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), control_write_success_num_name_datas.begin(), control_write_success_num_name_datas.end());
    auto data_read_byte_name_datas = data_read_byte.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), data_read_byte_name_datas.begin(), data_read_byte_name_datas.end());
    auto data_read_error_num_name_datas = data_read_error_num.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), data_read_error_num_name_datas.begin(), data_read_error_num_name_datas.end());
    auto data_read_success_num_name_datas = data_read_success_num.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), data_read_success_num_name_datas.begin(), data_read_success_num_name_datas.end());
    auto data_write_byte_name_datas = data_write_byte.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), data_write_byte_name_datas.begin(), data_write_byte_name_datas.end());
    auto data_write_error_num_name_datas = data_write_error_num.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), data_write_error_num_name_datas.begin(), data_write_error_num_name_datas.end());
    auto data_write_success_num_name_datas = data_write_success_num.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), data_write_success_num_name_datas.begin(), data_write_success_num_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "async-session")
    {
        async_session = value;
    }
    if(value_path == "control-read-error-num")
    {
        control_read_error_num.append(value);
    }
    if(value_path == "control-read-success-num")
    {
        control_read_success_num.append(value);
    }
    if(value_path == "control-write-error-num")
    {
        control_write_error_num.append(value);
    }
    if(value_path == "control-write-success-num")
    {
        control_write_success_num.append(value);
    }
    if(value_path == "data-read-byte")
    {
        data_read_byte.append(value);
    }
    if(value_path == "data-read-error-num")
    {
        data_read_error_num.append(value);
    }
    if(value_path == "data-read-success-num")
    {
        data_read_success_num.append(value);
    }
    if(value_path == "data-write-byte")
    {
        data_write_byte.append(value);
    }
    if(value_path == "data-write-error-num")
    {
        data_write_error_num.append(value);
    }
    if(value_path == "data-write-success-num")
    {
        data_write_success_num.append(value);
    }
}

TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::Pcb()
    :
    	id{YType::uint32, "id"},
	 is_paw_socket{YType::boolean, "is-paw-socket"},
	 packets_received{YType::uint64, "packets-received"},
	 packets_sent{YType::uint64, "packets-sent"},
	 pcb{YType::uint64, "pcb"},
	 read_io_time{YType::uint32, "read-io-time"},
	 receive_queue_failed{YType::uint32, "receive-queue-failed"},
	 received_packets_queued{YType::uint64, "received-packets-queued"},
	 segment_instruction_received{YType::uint32, "segment-instruction-received"},
	 send_packets_queued{YType::uint64, "send-packets-queued"},
	 send_packets_queued_net_io{YType::uint64, "send-packets-queued-net-io"},
	 send_queue_failed{YType::uint32, "send-queue-failed"},
	 send_queue_net_io_failed{YType::uint32, "send-queue-net-io-failed"},
	 send_window_shrink_ignored{YType::uint32, "send-window-shrink-ignored"},
	 vrf_id{YType::uint32, "vrf-id"},
	 write_io_time{YType::uint32, "write-io-time"},
	 xipc_pulse_received{YType::uint64, "xipc-pulse-received"}
    	,
    async_session_stats(std::make_unique<TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats>())
	,read_io_counts(std::make_unique<TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts>())
	,write_io_counts(std::make_unique<TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts>())
{
    async_session_stats->parent = this;
    children["async-session-stats"] = async_session_stats.get();

    read_io_counts->parent = this;
    children["read-io-counts"] = read_io_counts.get();

    write_io_counts->parent = this;
    children["write-io-counts"] = write_io_counts.get();

    yang_name = "pcb"; yang_parent_name = "pcbs";
}

TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::~Pcb()
{
}

bool TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::has_data() const
{
    return id.is_set
	|| is_paw_socket.is_set
	|| packets_received.is_set
	|| packets_sent.is_set
	|| pcb.is_set
	|| read_io_time.is_set
	|| receive_queue_failed.is_set
	|| received_packets_queued.is_set
	|| segment_instruction_received.is_set
	|| send_packets_queued.is_set
	|| send_packets_queued_net_io.is_set
	|| send_queue_failed.is_set
	|| send_queue_net_io_failed.is_set
	|| send_window_shrink_ignored.is_set
	|| vrf_id.is_set
	|| write_io_time.is_set
	|| xipc_pulse_received.is_set
	|| (async_session_stats !=  nullptr && async_session_stats->has_data())
	|| (read_io_counts !=  nullptr && read_io_counts->has_data())
	|| (write_io_counts !=  nullptr && write_io_counts->has_data());
}

bool TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(is_paw_socket.operation)
	|| is_set(packets_received.operation)
	|| is_set(packets_sent.operation)
	|| is_set(pcb.operation)
	|| is_set(read_io_time.operation)
	|| is_set(receive_queue_failed.operation)
	|| is_set(received_packets_queued.operation)
	|| is_set(segment_instruction_received.operation)
	|| is_set(send_packets_queued.operation)
	|| is_set(send_packets_queued_net_io.operation)
	|| is_set(send_queue_failed.operation)
	|| is_set(send_queue_net_io_failed.operation)
	|| is_set(send_window_shrink_ignored.operation)
	|| is_set(vrf_id.operation)
	|| is_set(write_io_time.operation)
	|| is_set(xipc_pulse_received.operation)
	|| (async_session_stats !=  nullptr && async_session_stats->has_operation())
	|| (read_io_counts !=  nullptr && read_io_counts->has_operation())
	|| (write_io_counts !=  nullptr && write_io_counts->has_operation());
}

std::string TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcb" <<"[id='" <<id.get() <<"']";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (is_paw_socket.is_set || is_set(is_paw_socket.operation)) leaf_name_data.push_back(is_paw_socket.get_name_leafdata());
    if (packets_received.is_set || is_set(packets_received.operation)) leaf_name_data.push_back(packets_received.get_name_leafdata());
    if (packets_sent.is_set || is_set(packets_sent.operation)) leaf_name_data.push_back(packets_sent.get_name_leafdata());
    if (pcb.is_set || is_set(pcb.operation)) leaf_name_data.push_back(pcb.get_name_leafdata());
    if (read_io_time.is_set || is_set(read_io_time.operation)) leaf_name_data.push_back(read_io_time.get_name_leafdata());
    if (receive_queue_failed.is_set || is_set(receive_queue_failed.operation)) leaf_name_data.push_back(receive_queue_failed.get_name_leafdata());
    if (received_packets_queued.is_set || is_set(received_packets_queued.operation)) leaf_name_data.push_back(received_packets_queued.get_name_leafdata());
    if (segment_instruction_received.is_set || is_set(segment_instruction_received.operation)) leaf_name_data.push_back(segment_instruction_received.get_name_leafdata());
    if (send_packets_queued.is_set || is_set(send_packets_queued.operation)) leaf_name_data.push_back(send_packets_queued.get_name_leafdata());
    if (send_packets_queued_net_io.is_set || is_set(send_packets_queued_net_io.operation)) leaf_name_data.push_back(send_packets_queued_net_io.get_name_leafdata());
    if (send_queue_failed.is_set || is_set(send_queue_failed.operation)) leaf_name_data.push_back(send_queue_failed.get_name_leafdata());
    if (send_queue_net_io_failed.is_set || is_set(send_queue_net_io_failed.operation)) leaf_name_data.push_back(send_queue_net_io_failed.get_name_leafdata());
    if (send_window_shrink_ignored.is_set || is_set(send_window_shrink_ignored.operation)) leaf_name_data.push_back(send_window_shrink_ignored.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (write_io_time.is_set || is_set(write_io_time.operation)) leaf_name_data.push_back(write_io_time.get_name_leafdata());
    if (xipc_pulse_received.is_set || is_set(xipc_pulse_received.operation)) leaf_name_data.push_back(xipc_pulse_received.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "async-session-stats")
    {
        if(async_session_stats != nullptr)
        {
            children["async-session-stats"] = async_session_stats.get();
        }
        else
        {
            async_session_stats = std::make_unique<TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::AsyncSessionStats>();
            async_session_stats->parent = this;
            children["async-session-stats"] = async_session_stats.get();
        }
        return children.at("async-session-stats");
    }

    if(child_yang_name == "read-io-counts")
    {
        if(read_io_counts != nullptr)
        {
            children["read-io-counts"] = read_io_counts.get();
        }
        else
        {
            read_io_counts = std::make_unique<TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::ReadIoCounts>();
            read_io_counts->parent = this;
            children["read-io-counts"] = read_io_counts.get();
        }
        return children.at("read-io-counts");
    }

    if(child_yang_name == "write-io-counts")
    {
        if(write_io_counts != nullptr)
        {
            children["write-io-counts"] = write_io_counts.get();
        }
        else
        {
            write_io_counts = std::make_unique<TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::WriteIoCounts>();
            write_io_counts->parent = this;
            children["write-io-counts"] = write_io_counts.get();
        }
        return children.at("write-io-counts");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::get_children()
{
    if(children.find("async-session-stats") == children.end())
    {
        if(async_session_stats != nullptr)
        {
            children["async-session-stats"] = async_session_stats.get();
        }
    }

    if(children.find("read-io-counts") == children.end())
    {
        if(read_io_counts != nullptr)
        {
            children["read-io-counts"] = read_io_counts.get();
        }
    }

    if(children.find("write-io-counts") == children.end())
    {
        if(write_io_counts != nullptr)
        {
            children["write-io-counts"] = write_io_counts.get();
        }
    }

    return children;
}

void TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "is-paw-socket")
    {
        is_paw_socket = value;
    }
    if(value_path == "packets-received")
    {
        packets_received = value;
    }
    if(value_path == "packets-sent")
    {
        packets_sent = value;
    }
    if(value_path == "pcb")
    {
        pcb = value;
    }
    if(value_path == "read-io-time")
    {
        read_io_time = value;
    }
    if(value_path == "receive-queue-failed")
    {
        receive_queue_failed = value;
    }
    if(value_path == "received-packets-queued")
    {
        received_packets_queued = value;
    }
    if(value_path == "segment-instruction-received")
    {
        segment_instruction_received = value;
    }
    if(value_path == "send-packets-queued")
    {
        send_packets_queued = value;
    }
    if(value_path == "send-packets-queued-net-io")
    {
        send_packets_queued_net_io = value;
    }
    if(value_path == "send-queue-failed")
    {
        send_queue_failed = value;
    }
    if(value_path == "send-queue-net-io-failed")
    {
        send_queue_net_io_failed = value;
    }
    if(value_path == "send-window-shrink-ignored")
    {
        send_window_shrink_ignored = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "write-io-time")
    {
        write_io_time = value;
    }
    if(value_path == "xipc-pulse-received")
    {
        xipc_pulse_received = value;
    }
}

TcpConnection::Nodes::Node::Statistics::Pcbs::Pcbs()
{
    yang_name = "pcbs"; yang_parent_name = "statistics";
}

TcpConnection::Nodes::Node::Statistics::Pcbs::~Pcbs()
{
}

bool TcpConnection::Nodes::Node::Statistics::Pcbs::has_data() const
{
    for (std::size_t index=0; index<pcb.size(); index++)
    {
        if(pcb[index]->has_data())
            return true;
    }
    return false;
}

bool TcpConnection::Nodes::Node::Statistics::Pcbs::has_operation() const
{
    for (std::size_t index=0; index<pcb.size(); index++)
    {
        if(pcb[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TcpConnection::Nodes::Node::Statistics::Pcbs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcbs";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::Statistics::Pcbs::get_entity_path(Entity* ancestor) const
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

Entity* TcpConnection::Nodes::Node::Statistics::Pcbs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pcb")
    {
        for(auto const & c : pcb)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TcpConnection::Nodes::Node::Statistics::Pcbs::Pcb>();
        c->parent = this;
        pcb.push_back(std::move(c));
        children[segment_path] = pcb.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::Statistics::Pcbs::get_children()
{
    for (auto const & c : pcb)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TcpConnection::Nodes::Node::Statistics::Pcbs::set_value(const std::string & value_path, std::string value)
{
}

TcpConnection::Nodes::Node::Statistics::Summary::Summary()
    :
    	ack_only_packets_sent{YType::uint32, "ack-only-packets-sent"},
	 ack_packets_for_unsent_received{YType::uint32, "ack-packets-for-unsent-received"},
	 ack_packets_received{YType::uint32, "ack-packets-received"},
	 ackbytes_received{YType::uint32, "ackbytes-received"},
	 after_window_bytes_received{YType::uint32, "after-window-bytes-received"},
	 after_window_packets_received{YType::uint32, "after-window-packets-received"},
	 bad_checksum_packets_received{YType::uint32, "bad-checksum-packets-received"},
	 bytes_retransmitted{YType::uint32, "bytes-retransmitted"},
	 connection_rate_limited{YType::uint32, "connection-rate-limited"},
	 connections_accepted{YType::uint32, "connections-accepted"},
	 connections_closed{YType::uint32, "connections-closed"},
	 connections_dropped{YType::uint32, "connections-dropped"},
	 connections_established{YType::uint32, "connections-established"},
	 connections_failed{YType::uint32, "connections-failed"},
	 connections_forcibly_closed{YType::uint32, "connections-forcibly-closed"},
	 connections_requested{YType::uint32, "connections-requested"},
	 control_packets_sent{YType::uint32, "control-packets-sent"},
	 data_bytes_received_in_sequence{YType::uint32, "data-bytes-received-in-sequence"},
	 data_bytes_sent{YType::uint32, "data-bytes-sent"},
	 data_packets_received_in_sequence{YType::uint32, "data-packets-received-in-sequence"},
	 data_pakets_sent{YType::uint32, "data-pakets-sent"},
	 delay_ack_packets_sent{YType::uint32, "delay-ack-packets-sent"},
	 duplicate_bytes_received{YType::uint32, "duplicate-bytes-received"},
	 duplicate_packets_received{YType::uint32, "duplicate-packets-received"},
	 duplicated_ack_packets_received{YType::uint32, "duplicated-ack-packets-received"},
	 embryonic_connection_dropped{YType::uint32, "embryonic-connection-dropped"},
	 established_connections_reset{YType::uint32, "established-connections-reset"},
	 high_water_mark_throttle{YType::uint32, "high-water-mark-throttle"},
	 iq_sock_aborts{YType::uint32, "iq-sock-aborts"},
	 iq_sock_retries{YType::uint32, "iq-sock-retries"},
	 iq_sock_writes{YType::uint32, "iq-sock-writes"},
	 keep_alive_dropped{YType::uint32, "keep-alive-dropped"},
	 keep_alive_probes{YType::uint32, "keep-alive-probes"},
	 keep_alive_timeouts{YType::uint32, "keep-alive-timeouts"},
	 low_water_mark_throttle{YType::uint32, "low-water-mark-throttle"},
	 malformed_packets_received{YType::uint32, "malformed-packets-received"},
	 mss_down{YType::uint32, "mss-down"},
	 mss_up{YType::uint32, "mss-up"},
	 no_port_packets_received{YType::uint32, "no-port-packets-received"},
	 no_throttle{YType::uint32, "no-throttle"},
	 num_open_sockets{YType::uint32, "num-open-sockets"},
	 out_of_order_bytes_received{YType::uint32, "out-of-order-bytes-received"},
	 out_of_order_packets_received{YType::uint32, "out-of-order-packets-received"},
	 packet_failures{YType::uint32, "packet-failures"},
	 packets_received_after_close_packet{YType::uint32, "packets-received-after-close-packet"},
	 packets_retransmitted{YType::uint32, "packets-retransmitted"},
	 partial_duplicate_ack_received{YType::uint32, "partial-duplicate-ack-received"},
	 partial_duplicate_bytes_received{YType::uint32, "partial-duplicate-bytes-received"},
	 paws_dropped{YType::uint32, "paws-dropped"},
	 persist_dropped{YType::uint32, "persist-dropped"},
	 pulse_errors{YType::uint32, "pulse-errors"},
	 reassembly_packets{YType::uint32, "reassembly-packets"},
	 received_auth_packets_dropped{YType::uint32, "received-auth-packets-dropped"},
	 received_packets_dropped{YType::uint32, "received-packets-dropped"},
	 received_packets_dropped_stale_c_hdr{YType::uint32, "received-packets-dropped-stale-c-hdr"},
	 recovered_packets{YType::uint32, "recovered-packets"},
	 retransmit_dropped{YType::uint32, "retransmit-dropped"},
	 retransmit_timeouts{YType::uint32, "retransmit-timeouts"},
	 rst_packets_sent{YType::uint32, "rst-packets-sent"},
	 send_auth_packets_dropped{YType::uint32, "send-auth-packets-dropped"},
	 send_packets_dropped{YType::uint32, "send-packets-dropped"},
	 socket_layer_packets{YType::uint32, "socket-layer-packets"},
	 stalled_timer_tickle_count{YType::uint32, "stalled-timer-tickle-count"},
	 stalled_timer_tickle_time{YType::uint32, "stalled-timer-tickle-time"},
	 syn_cache_aborted{YType::uint32, "syn-cache-aborted"},
	 syn_cache_added{YType::uint32, "syn-cache-added"},
	 syn_cache_bucket_oflow{YType::uint32, "syn-cache-bucket-oflow"},
	 syn_cache_completed{YType::uint32, "syn-cache-completed"},
	 syn_cache_count{YType::uint32, "syn-cache-count"},
	 syn_cache_dropped{YType::uint32, "syn-cache-dropped"},
	 syn_cache_duplicate_sy_ns{YType::uint32, "syn-cache-duplicate-sy-ns"},
	 syn_cache_overflow{YType::uint32, "syn-cache-overflow"},
	 syn_cache_reset{YType::uint32, "syn-cache-reset"},
	 syn_cache_timed_out{YType::uint32, "syn-cache-timed-out"},
	 syn_cache_unreach{YType::uint32, "syn-cache-unreach"},
	 synacl_match_pkts_dropped{YType::uint32, "synacl-match-pkts-dropped"},
	 too_short_packets_received{YType::uint32, "too-short-packets-received"},
	 total_packets_received{YType::uint32, "total-packets-received"},
	 total_pakets_sent{YType::uint32, "total-pakets-sent"},
	 truncated_write_iov{YType::uint32, "truncated-write-iov"},
	 try_lock_dropped{YType::uint32, "try-lock-dropped"},
	 urgent_only_packets_sent{YType::uint32, "urgent-only-packets-sent"},
	 window_probe_packets_received{YType::uint32, "window-probe-packets-received"},
	 window_probe_packets_sent{YType::uint32, "window-probe-packets-sent"},
	 window_update_packets_received{YType::uint32, "window-update-packets-received"},
	 window_update_packets_sent{YType::uint32, "window-update-packets-sent"}
{
    yang_name = "summary"; yang_parent_name = "statistics";
}

TcpConnection::Nodes::Node::Statistics::Summary::~Summary()
{
}

bool TcpConnection::Nodes::Node::Statistics::Summary::has_data() const
{
    return ack_only_packets_sent.is_set
	|| ack_packets_for_unsent_received.is_set
	|| ack_packets_received.is_set
	|| ackbytes_received.is_set
	|| after_window_bytes_received.is_set
	|| after_window_packets_received.is_set
	|| bad_checksum_packets_received.is_set
	|| bytes_retransmitted.is_set
	|| connection_rate_limited.is_set
	|| connections_accepted.is_set
	|| connections_closed.is_set
	|| connections_dropped.is_set
	|| connections_established.is_set
	|| connections_failed.is_set
	|| connections_forcibly_closed.is_set
	|| connections_requested.is_set
	|| control_packets_sent.is_set
	|| data_bytes_received_in_sequence.is_set
	|| data_bytes_sent.is_set
	|| data_packets_received_in_sequence.is_set
	|| data_pakets_sent.is_set
	|| delay_ack_packets_sent.is_set
	|| duplicate_bytes_received.is_set
	|| duplicate_packets_received.is_set
	|| duplicated_ack_packets_received.is_set
	|| embryonic_connection_dropped.is_set
	|| established_connections_reset.is_set
	|| high_water_mark_throttle.is_set
	|| iq_sock_aborts.is_set
	|| iq_sock_retries.is_set
	|| iq_sock_writes.is_set
	|| keep_alive_dropped.is_set
	|| keep_alive_probes.is_set
	|| keep_alive_timeouts.is_set
	|| low_water_mark_throttle.is_set
	|| malformed_packets_received.is_set
	|| mss_down.is_set
	|| mss_up.is_set
	|| no_port_packets_received.is_set
	|| no_throttle.is_set
	|| num_open_sockets.is_set
	|| out_of_order_bytes_received.is_set
	|| out_of_order_packets_received.is_set
	|| packet_failures.is_set
	|| packets_received_after_close_packet.is_set
	|| packets_retransmitted.is_set
	|| partial_duplicate_ack_received.is_set
	|| partial_duplicate_bytes_received.is_set
	|| paws_dropped.is_set
	|| persist_dropped.is_set
	|| pulse_errors.is_set
	|| reassembly_packets.is_set
	|| received_auth_packets_dropped.is_set
	|| received_packets_dropped.is_set
	|| received_packets_dropped_stale_c_hdr.is_set
	|| recovered_packets.is_set
	|| retransmit_dropped.is_set
	|| retransmit_timeouts.is_set
	|| rst_packets_sent.is_set
	|| send_auth_packets_dropped.is_set
	|| send_packets_dropped.is_set
	|| socket_layer_packets.is_set
	|| stalled_timer_tickle_count.is_set
	|| stalled_timer_tickle_time.is_set
	|| syn_cache_aborted.is_set
	|| syn_cache_added.is_set
	|| syn_cache_bucket_oflow.is_set
	|| syn_cache_completed.is_set
	|| syn_cache_count.is_set
	|| syn_cache_dropped.is_set
	|| syn_cache_duplicate_sy_ns.is_set
	|| syn_cache_overflow.is_set
	|| syn_cache_reset.is_set
	|| syn_cache_timed_out.is_set
	|| syn_cache_unreach.is_set
	|| synacl_match_pkts_dropped.is_set
	|| too_short_packets_received.is_set
	|| total_packets_received.is_set
	|| total_pakets_sent.is_set
	|| truncated_write_iov.is_set
	|| try_lock_dropped.is_set
	|| urgent_only_packets_sent.is_set
	|| window_probe_packets_received.is_set
	|| window_probe_packets_sent.is_set
	|| window_update_packets_received.is_set
	|| window_update_packets_sent.is_set;
}

bool TcpConnection::Nodes::Node::Statistics::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(ack_only_packets_sent.operation)
	|| is_set(ack_packets_for_unsent_received.operation)
	|| is_set(ack_packets_received.operation)
	|| is_set(ackbytes_received.operation)
	|| is_set(after_window_bytes_received.operation)
	|| is_set(after_window_packets_received.operation)
	|| is_set(bad_checksum_packets_received.operation)
	|| is_set(bytes_retransmitted.operation)
	|| is_set(connection_rate_limited.operation)
	|| is_set(connections_accepted.operation)
	|| is_set(connections_closed.operation)
	|| is_set(connections_dropped.operation)
	|| is_set(connections_established.operation)
	|| is_set(connections_failed.operation)
	|| is_set(connections_forcibly_closed.operation)
	|| is_set(connections_requested.operation)
	|| is_set(control_packets_sent.operation)
	|| is_set(data_bytes_received_in_sequence.operation)
	|| is_set(data_bytes_sent.operation)
	|| is_set(data_packets_received_in_sequence.operation)
	|| is_set(data_pakets_sent.operation)
	|| is_set(delay_ack_packets_sent.operation)
	|| is_set(duplicate_bytes_received.operation)
	|| is_set(duplicate_packets_received.operation)
	|| is_set(duplicated_ack_packets_received.operation)
	|| is_set(embryonic_connection_dropped.operation)
	|| is_set(established_connections_reset.operation)
	|| is_set(high_water_mark_throttle.operation)
	|| is_set(iq_sock_aborts.operation)
	|| is_set(iq_sock_retries.operation)
	|| is_set(iq_sock_writes.operation)
	|| is_set(keep_alive_dropped.operation)
	|| is_set(keep_alive_probes.operation)
	|| is_set(keep_alive_timeouts.operation)
	|| is_set(low_water_mark_throttle.operation)
	|| is_set(malformed_packets_received.operation)
	|| is_set(mss_down.operation)
	|| is_set(mss_up.operation)
	|| is_set(no_port_packets_received.operation)
	|| is_set(no_throttle.operation)
	|| is_set(num_open_sockets.operation)
	|| is_set(out_of_order_bytes_received.operation)
	|| is_set(out_of_order_packets_received.operation)
	|| is_set(packet_failures.operation)
	|| is_set(packets_received_after_close_packet.operation)
	|| is_set(packets_retransmitted.operation)
	|| is_set(partial_duplicate_ack_received.operation)
	|| is_set(partial_duplicate_bytes_received.operation)
	|| is_set(paws_dropped.operation)
	|| is_set(persist_dropped.operation)
	|| is_set(pulse_errors.operation)
	|| is_set(reassembly_packets.operation)
	|| is_set(received_auth_packets_dropped.operation)
	|| is_set(received_packets_dropped.operation)
	|| is_set(received_packets_dropped_stale_c_hdr.operation)
	|| is_set(recovered_packets.operation)
	|| is_set(retransmit_dropped.operation)
	|| is_set(retransmit_timeouts.operation)
	|| is_set(rst_packets_sent.operation)
	|| is_set(send_auth_packets_dropped.operation)
	|| is_set(send_packets_dropped.operation)
	|| is_set(socket_layer_packets.operation)
	|| is_set(stalled_timer_tickle_count.operation)
	|| is_set(stalled_timer_tickle_time.operation)
	|| is_set(syn_cache_aborted.operation)
	|| is_set(syn_cache_added.operation)
	|| is_set(syn_cache_bucket_oflow.operation)
	|| is_set(syn_cache_completed.operation)
	|| is_set(syn_cache_count.operation)
	|| is_set(syn_cache_dropped.operation)
	|| is_set(syn_cache_duplicate_sy_ns.operation)
	|| is_set(syn_cache_overflow.operation)
	|| is_set(syn_cache_reset.operation)
	|| is_set(syn_cache_timed_out.operation)
	|| is_set(syn_cache_unreach.operation)
	|| is_set(synacl_match_pkts_dropped.operation)
	|| is_set(too_short_packets_received.operation)
	|| is_set(total_packets_received.operation)
	|| is_set(total_pakets_sent.operation)
	|| is_set(truncated_write_iov.operation)
	|| is_set(try_lock_dropped.operation)
	|| is_set(urgent_only_packets_sent.operation)
	|| is_set(window_probe_packets_received.operation)
	|| is_set(window_probe_packets_sent.operation)
	|| is_set(window_update_packets_received.operation)
	|| is_set(window_update_packets_sent.operation);
}

std::string TcpConnection::Nodes::Node::Statistics::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::Statistics::Summary::get_entity_path(Entity* ancestor) const
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

    if (ack_only_packets_sent.is_set || is_set(ack_only_packets_sent.operation)) leaf_name_data.push_back(ack_only_packets_sent.get_name_leafdata());
    if (ack_packets_for_unsent_received.is_set || is_set(ack_packets_for_unsent_received.operation)) leaf_name_data.push_back(ack_packets_for_unsent_received.get_name_leafdata());
    if (ack_packets_received.is_set || is_set(ack_packets_received.operation)) leaf_name_data.push_back(ack_packets_received.get_name_leafdata());
    if (ackbytes_received.is_set || is_set(ackbytes_received.operation)) leaf_name_data.push_back(ackbytes_received.get_name_leafdata());
    if (after_window_bytes_received.is_set || is_set(after_window_bytes_received.operation)) leaf_name_data.push_back(after_window_bytes_received.get_name_leafdata());
    if (after_window_packets_received.is_set || is_set(after_window_packets_received.operation)) leaf_name_data.push_back(after_window_packets_received.get_name_leafdata());
    if (bad_checksum_packets_received.is_set || is_set(bad_checksum_packets_received.operation)) leaf_name_data.push_back(bad_checksum_packets_received.get_name_leafdata());
    if (bytes_retransmitted.is_set || is_set(bytes_retransmitted.operation)) leaf_name_data.push_back(bytes_retransmitted.get_name_leafdata());
    if (connection_rate_limited.is_set || is_set(connection_rate_limited.operation)) leaf_name_data.push_back(connection_rate_limited.get_name_leafdata());
    if (connections_accepted.is_set || is_set(connections_accepted.operation)) leaf_name_data.push_back(connections_accepted.get_name_leafdata());
    if (connections_closed.is_set || is_set(connections_closed.operation)) leaf_name_data.push_back(connections_closed.get_name_leafdata());
    if (connections_dropped.is_set || is_set(connections_dropped.operation)) leaf_name_data.push_back(connections_dropped.get_name_leafdata());
    if (connections_established.is_set || is_set(connections_established.operation)) leaf_name_data.push_back(connections_established.get_name_leafdata());
    if (connections_failed.is_set || is_set(connections_failed.operation)) leaf_name_data.push_back(connections_failed.get_name_leafdata());
    if (connections_forcibly_closed.is_set || is_set(connections_forcibly_closed.operation)) leaf_name_data.push_back(connections_forcibly_closed.get_name_leafdata());
    if (connections_requested.is_set || is_set(connections_requested.operation)) leaf_name_data.push_back(connections_requested.get_name_leafdata());
    if (control_packets_sent.is_set || is_set(control_packets_sent.operation)) leaf_name_data.push_back(control_packets_sent.get_name_leafdata());
    if (data_bytes_received_in_sequence.is_set || is_set(data_bytes_received_in_sequence.operation)) leaf_name_data.push_back(data_bytes_received_in_sequence.get_name_leafdata());
    if (data_bytes_sent.is_set || is_set(data_bytes_sent.operation)) leaf_name_data.push_back(data_bytes_sent.get_name_leafdata());
    if (data_packets_received_in_sequence.is_set || is_set(data_packets_received_in_sequence.operation)) leaf_name_data.push_back(data_packets_received_in_sequence.get_name_leafdata());
    if (data_pakets_sent.is_set || is_set(data_pakets_sent.operation)) leaf_name_data.push_back(data_pakets_sent.get_name_leafdata());
    if (delay_ack_packets_sent.is_set || is_set(delay_ack_packets_sent.operation)) leaf_name_data.push_back(delay_ack_packets_sent.get_name_leafdata());
    if (duplicate_bytes_received.is_set || is_set(duplicate_bytes_received.operation)) leaf_name_data.push_back(duplicate_bytes_received.get_name_leafdata());
    if (duplicate_packets_received.is_set || is_set(duplicate_packets_received.operation)) leaf_name_data.push_back(duplicate_packets_received.get_name_leafdata());
    if (duplicated_ack_packets_received.is_set || is_set(duplicated_ack_packets_received.operation)) leaf_name_data.push_back(duplicated_ack_packets_received.get_name_leafdata());
    if (embryonic_connection_dropped.is_set || is_set(embryonic_connection_dropped.operation)) leaf_name_data.push_back(embryonic_connection_dropped.get_name_leafdata());
    if (established_connections_reset.is_set || is_set(established_connections_reset.operation)) leaf_name_data.push_back(established_connections_reset.get_name_leafdata());
    if (high_water_mark_throttle.is_set || is_set(high_water_mark_throttle.operation)) leaf_name_data.push_back(high_water_mark_throttle.get_name_leafdata());
    if (iq_sock_aborts.is_set || is_set(iq_sock_aborts.operation)) leaf_name_data.push_back(iq_sock_aborts.get_name_leafdata());
    if (iq_sock_retries.is_set || is_set(iq_sock_retries.operation)) leaf_name_data.push_back(iq_sock_retries.get_name_leafdata());
    if (iq_sock_writes.is_set || is_set(iq_sock_writes.operation)) leaf_name_data.push_back(iq_sock_writes.get_name_leafdata());
    if (keep_alive_dropped.is_set || is_set(keep_alive_dropped.operation)) leaf_name_data.push_back(keep_alive_dropped.get_name_leafdata());
    if (keep_alive_probes.is_set || is_set(keep_alive_probes.operation)) leaf_name_data.push_back(keep_alive_probes.get_name_leafdata());
    if (keep_alive_timeouts.is_set || is_set(keep_alive_timeouts.operation)) leaf_name_data.push_back(keep_alive_timeouts.get_name_leafdata());
    if (low_water_mark_throttle.is_set || is_set(low_water_mark_throttle.operation)) leaf_name_data.push_back(low_water_mark_throttle.get_name_leafdata());
    if (malformed_packets_received.is_set || is_set(malformed_packets_received.operation)) leaf_name_data.push_back(malformed_packets_received.get_name_leafdata());
    if (mss_down.is_set || is_set(mss_down.operation)) leaf_name_data.push_back(mss_down.get_name_leafdata());
    if (mss_up.is_set || is_set(mss_up.operation)) leaf_name_data.push_back(mss_up.get_name_leafdata());
    if (no_port_packets_received.is_set || is_set(no_port_packets_received.operation)) leaf_name_data.push_back(no_port_packets_received.get_name_leafdata());
    if (no_throttle.is_set || is_set(no_throttle.operation)) leaf_name_data.push_back(no_throttle.get_name_leafdata());
    if (num_open_sockets.is_set || is_set(num_open_sockets.operation)) leaf_name_data.push_back(num_open_sockets.get_name_leafdata());
    if (out_of_order_bytes_received.is_set || is_set(out_of_order_bytes_received.operation)) leaf_name_data.push_back(out_of_order_bytes_received.get_name_leafdata());
    if (out_of_order_packets_received.is_set || is_set(out_of_order_packets_received.operation)) leaf_name_data.push_back(out_of_order_packets_received.get_name_leafdata());
    if (packet_failures.is_set || is_set(packet_failures.operation)) leaf_name_data.push_back(packet_failures.get_name_leafdata());
    if (packets_received_after_close_packet.is_set || is_set(packets_received_after_close_packet.operation)) leaf_name_data.push_back(packets_received_after_close_packet.get_name_leafdata());
    if (packets_retransmitted.is_set || is_set(packets_retransmitted.operation)) leaf_name_data.push_back(packets_retransmitted.get_name_leafdata());
    if (partial_duplicate_ack_received.is_set || is_set(partial_duplicate_ack_received.operation)) leaf_name_data.push_back(partial_duplicate_ack_received.get_name_leafdata());
    if (partial_duplicate_bytes_received.is_set || is_set(partial_duplicate_bytes_received.operation)) leaf_name_data.push_back(partial_duplicate_bytes_received.get_name_leafdata());
    if (paws_dropped.is_set || is_set(paws_dropped.operation)) leaf_name_data.push_back(paws_dropped.get_name_leafdata());
    if (persist_dropped.is_set || is_set(persist_dropped.operation)) leaf_name_data.push_back(persist_dropped.get_name_leafdata());
    if (pulse_errors.is_set || is_set(pulse_errors.operation)) leaf_name_data.push_back(pulse_errors.get_name_leafdata());
    if (reassembly_packets.is_set || is_set(reassembly_packets.operation)) leaf_name_data.push_back(reassembly_packets.get_name_leafdata());
    if (received_auth_packets_dropped.is_set || is_set(received_auth_packets_dropped.operation)) leaf_name_data.push_back(received_auth_packets_dropped.get_name_leafdata());
    if (received_packets_dropped.is_set || is_set(received_packets_dropped.operation)) leaf_name_data.push_back(received_packets_dropped.get_name_leafdata());
    if (received_packets_dropped_stale_c_hdr.is_set || is_set(received_packets_dropped_stale_c_hdr.operation)) leaf_name_data.push_back(received_packets_dropped_stale_c_hdr.get_name_leafdata());
    if (recovered_packets.is_set || is_set(recovered_packets.operation)) leaf_name_data.push_back(recovered_packets.get_name_leafdata());
    if (retransmit_dropped.is_set || is_set(retransmit_dropped.operation)) leaf_name_data.push_back(retransmit_dropped.get_name_leafdata());
    if (retransmit_timeouts.is_set || is_set(retransmit_timeouts.operation)) leaf_name_data.push_back(retransmit_timeouts.get_name_leafdata());
    if (rst_packets_sent.is_set || is_set(rst_packets_sent.operation)) leaf_name_data.push_back(rst_packets_sent.get_name_leafdata());
    if (send_auth_packets_dropped.is_set || is_set(send_auth_packets_dropped.operation)) leaf_name_data.push_back(send_auth_packets_dropped.get_name_leafdata());
    if (send_packets_dropped.is_set || is_set(send_packets_dropped.operation)) leaf_name_data.push_back(send_packets_dropped.get_name_leafdata());
    if (socket_layer_packets.is_set || is_set(socket_layer_packets.operation)) leaf_name_data.push_back(socket_layer_packets.get_name_leafdata());
    if (stalled_timer_tickle_count.is_set || is_set(stalled_timer_tickle_count.operation)) leaf_name_data.push_back(stalled_timer_tickle_count.get_name_leafdata());
    if (stalled_timer_tickle_time.is_set || is_set(stalled_timer_tickle_time.operation)) leaf_name_data.push_back(stalled_timer_tickle_time.get_name_leafdata());
    if (syn_cache_aborted.is_set || is_set(syn_cache_aborted.operation)) leaf_name_data.push_back(syn_cache_aborted.get_name_leafdata());
    if (syn_cache_added.is_set || is_set(syn_cache_added.operation)) leaf_name_data.push_back(syn_cache_added.get_name_leafdata());
    if (syn_cache_bucket_oflow.is_set || is_set(syn_cache_bucket_oflow.operation)) leaf_name_data.push_back(syn_cache_bucket_oflow.get_name_leafdata());
    if (syn_cache_completed.is_set || is_set(syn_cache_completed.operation)) leaf_name_data.push_back(syn_cache_completed.get_name_leafdata());
    if (syn_cache_count.is_set || is_set(syn_cache_count.operation)) leaf_name_data.push_back(syn_cache_count.get_name_leafdata());
    if (syn_cache_dropped.is_set || is_set(syn_cache_dropped.operation)) leaf_name_data.push_back(syn_cache_dropped.get_name_leafdata());
    if (syn_cache_duplicate_sy_ns.is_set || is_set(syn_cache_duplicate_sy_ns.operation)) leaf_name_data.push_back(syn_cache_duplicate_sy_ns.get_name_leafdata());
    if (syn_cache_overflow.is_set || is_set(syn_cache_overflow.operation)) leaf_name_data.push_back(syn_cache_overflow.get_name_leafdata());
    if (syn_cache_reset.is_set || is_set(syn_cache_reset.operation)) leaf_name_data.push_back(syn_cache_reset.get_name_leafdata());
    if (syn_cache_timed_out.is_set || is_set(syn_cache_timed_out.operation)) leaf_name_data.push_back(syn_cache_timed_out.get_name_leafdata());
    if (syn_cache_unreach.is_set || is_set(syn_cache_unreach.operation)) leaf_name_data.push_back(syn_cache_unreach.get_name_leafdata());
    if (synacl_match_pkts_dropped.is_set || is_set(synacl_match_pkts_dropped.operation)) leaf_name_data.push_back(synacl_match_pkts_dropped.get_name_leafdata());
    if (too_short_packets_received.is_set || is_set(too_short_packets_received.operation)) leaf_name_data.push_back(too_short_packets_received.get_name_leafdata());
    if (total_packets_received.is_set || is_set(total_packets_received.operation)) leaf_name_data.push_back(total_packets_received.get_name_leafdata());
    if (total_pakets_sent.is_set || is_set(total_pakets_sent.operation)) leaf_name_data.push_back(total_pakets_sent.get_name_leafdata());
    if (truncated_write_iov.is_set || is_set(truncated_write_iov.operation)) leaf_name_data.push_back(truncated_write_iov.get_name_leafdata());
    if (try_lock_dropped.is_set || is_set(try_lock_dropped.operation)) leaf_name_data.push_back(try_lock_dropped.get_name_leafdata());
    if (urgent_only_packets_sent.is_set || is_set(urgent_only_packets_sent.operation)) leaf_name_data.push_back(urgent_only_packets_sent.get_name_leafdata());
    if (window_probe_packets_received.is_set || is_set(window_probe_packets_received.operation)) leaf_name_data.push_back(window_probe_packets_received.get_name_leafdata());
    if (window_probe_packets_sent.is_set || is_set(window_probe_packets_sent.operation)) leaf_name_data.push_back(window_probe_packets_sent.get_name_leafdata());
    if (window_update_packets_received.is_set || is_set(window_update_packets_received.operation)) leaf_name_data.push_back(window_update_packets_received.get_name_leafdata());
    if (window_update_packets_sent.is_set || is_set(window_update_packets_sent.operation)) leaf_name_data.push_back(window_update_packets_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::Statistics::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::Statistics::Summary::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::Statistics::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack-only-packets-sent")
    {
        ack_only_packets_sent = value;
    }
    if(value_path == "ack-packets-for-unsent-received")
    {
        ack_packets_for_unsent_received = value;
    }
    if(value_path == "ack-packets-received")
    {
        ack_packets_received = value;
    }
    if(value_path == "ackbytes-received")
    {
        ackbytes_received = value;
    }
    if(value_path == "after-window-bytes-received")
    {
        after_window_bytes_received = value;
    }
    if(value_path == "after-window-packets-received")
    {
        after_window_packets_received = value;
    }
    if(value_path == "bad-checksum-packets-received")
    {
        bad_checksum_packets_received = value;
    }
    if(value_path == "bytes-retransmitted")
    {
        bytes_retransmitted = value;
    }
    if(value_path == "connection-rate-limited")
    {
        connection_rate_limited = value;
    }
    if(value_path == "connections-accepted")
    {
        connections_accepted = value;
    }
    if(value_path == "connections-closed")
    {
        connections_closed = value;
    }
    if(value_path == "connections-dropped")
    {
        connections_dropped = value;
    }
    if(value_path == "connections-established")
    {
        connections_established = value;
    }
    if(value_path == "connections-failed")
    {
        connections_failed = value;
    }
    if(value_path == "connections-forcibly-closed")
    {
        connections_forcibly_closed = value;
    }
    if(value_path == "connections-requested")
    {
        connections_requested = value;
    }
    if(value_path == "control-packets-sent")
    {
        control_packets_sent = value;
    }
    if(value_path == "data-bytes-received-in-sequence")
    {
        data_bytes_received_in_sequence = value;
    }
    if(value_path == "data-bytes-sent")
    {
        data_bytes_sent = value;
    }
    if(value_path == "data-packets-received-in-sequence")
    {
        data_packets_received_in_sequence = value;
    }
    if(value_path == "data-pakets-sent")
    {
        data_pakets_sent = value;
    }
    if(value_path == "delay-ack-packets-sent")
    {
        delay_ack_packets_sent = value;
    }
    if(value_path == "duplicate-bytes-received")
    {
        duplicate_bytes_received = value;
    }
    if(value_path == "duplicate-packets-received")
    {
        duplicate_packets_received = value;
    }
    if(value_path == "duplicated-ack-packets-received")
    {
        duplicated_ack_packets_received = value;
    }
    if(value_path == "embryonic-connection-dropped")
    {
        embryonic_connection_dropped = value;
    }
    if(value_path == "established-connections-reset")
    {
        established_connections_reset = value;
    }
    if(value_path == "high-water-mark-throttle")
    {
        high_water_mark_throttle = value;
    }
    if(value_path == "iq-sock-aborts")
    {
        iq_sock_aborts = value;
    }
    if(value_path == "iq-sock-retries")
    {
        iq_sock_retries = value;
    }
    if(value_path == "iq-sock-writes")
    {
        iq_sock_writes = value;
    }
    if(value_path == "keep-alive-dropped")
    {
        keep_alive_dropped = value;
    }
    if(value_path == "keep-alive-probes")
    {
        keep_alive_probes = value;
    }
    if(value_path == "keep-alive-timeouts")
    {
        keep_alive_timeouts = value;
    }
    if(value_path == "low-water-mark-throttle")
    {
        low_water_mark_throttle = value;
    }
    if(value_path == "malformed-packets-received")
    {
        malformed_packets_received = value;
    }
    if(value_path == "mss-down")
    {
        mss_down = value;
    }
    if(value_path == "mss-up")
    {
        mss_up = value;
    }
    if(value_path == "no-port-packets-received")
    {
        no_port_packets_received = value;
    }
    if(value_path == "no-throttle")
    {
        no_throttle = value;
    }
    if(value_path == "num-open-sockets")
    {
        num_open_sockets = value;
    }
    if(value_path == "out-of-order-bytes-received")
    {
        out_of_order_bytes_received = value;
    }
    if(value_path == "out-of-order-packets-received")
    {
        out_of_order_packets_received = value;
    }
    if(value_path == "packet-failures")
    {
        packet_failures = value;
    }
    if(value_path == "packets-received-after-close-packet")
    {
        packets_received_after_close_packet = value;
    }
    if(value_path == "packets-retransmitted")
    {
        packets_retransmitted = value;
    }
    if(value_path == "partial-duplicate-ack-received")
    {
        partial_duplicate_ack_received = value;
    }
    if(value_path == "partial-duplicate-bytes-received")
    {
        partial_duplicate_bytes_received = value;
    }
    if(value_path == "paws-dropped")
    {
        paws_dropped = value;
    }
    if(value_path == "persist-dropped")
    {
        persist_dropped = value;
    }
    if(value_path == "pulse-errors")
    {
        pulse_errors = value;
    }
    if(value_path == "reassembly-packets")
    {
        reassembly_packets = value;
    }
    if(value_path == "received-auth-packets-dropped")
    {
        received_auth_packets_dropped = value;
    }
    if(value_path == "received-packets-dropped")
    {
        received_packets_dropped = value;
    }
    if(value_path == "received-packets-dropped-stale-c-hdr")
    {
        received_packets_dropped_stale_c_hdr = value;
    }
    if(value_path == "recovered-packets")
    {
        recovered_packets = value;
    }
    if(value_path == "retransmit-dropped")
    {
        retransmit_dropped = value;
    }
    if(value_path == "retransmit-timeouts")
    {
        retransmit_timeouts = value;
    }
    if(value_path == "rst-packets-sent")
    {
        rst_packets_sent = value;
    }
    if(value_path == "send-auth-packets-dropped")
    {
        send_auth_packets_dropped = value;
    }
    if(value_path == "send-packets-dropped")
    {
        send_packets_dropped = value;
    }
    if(value_path == "socket-layer-packets")
    {
        socket_layer_packets = value;
    }
    if(value_path == "stalled-timer-tickle-count")
    {
        stalled_timer_tickle_count = value;
    }
    if(value_path == "stalled-timer-tickle-time")
    {
        stalled_timer_tickle_time = value;
    }
    if(value_path == "syn-cache-aborted")
    {
        syn_cache_aborted = value;
    }
    if(value_path == "syn-cache-added")
    {
        syn_cache_added = value;
    }
    if(value_path == "syn-cache-bucket-oflow")
    {
        syn_cache_bucket_oflow = value;
    }
    if(value_path == "syn-cache-completed")
    {
        syn_cache_completed = value;
    }
    if(value_path == "syn-cache-count")
    {
        syn_cache_count = value;
    }
    if(value_path == "syn-cache-dropped")
    {
        syn_cache_dropped = value;
    }
    if(value_path == "syn-cache-duplicate-sy-ns")
    {
        syn_cache_duplicate_sy_ns = value;
    }
    if(value_path == "syn-cache-overflow")
    {
        syn_cache_overflow = value;
    }
    if(value_path == "syn-cache-reset")
    {
        syn_cache_reset = value;
    }
    if(value_path == "syn-cache-timed-out")
    {
        syn_cache_timed_out = value;
    }
    if(value_path == "syn-cache-unreach")
    {
        syn_cache_unreach = value;
    }
    if(value_path == "synacl-match-pkts-dropped")
    {
        synacl_match_pkts_dropped = value;
    }
    if(value_path == "too-short-packets-received")
    {
        too_short_packets_received = value;
    }
    if(value_path == "total-packets-received")
    {
        total_packets_received = value;
    }
    if(value_path == "total-pakets-sent")
    {
        total_pakets_sent = value;
    }
    if(value_path == "truncated-write-iov")
    {
        truncated_write_iov = value;
    }
    if(value_path == "try-lock-dropped")
    {
        try_lock_dropped = value;
    }
    if(value_path == "urgent-only-packets-sent")
    {
        urgent_only_packets_sent = value;
    }
    if(value_path == "window-probe-packets-received")
    {
        window_probe_packets_received = value;
    }
    if(value_path == "window-probe-packets-sent")
    {
        window_probe_packets_sent = value;
    }
    if(value_path == "window-update-packets-received")
    {
        window_update_packets_received = value;
    }
    if(value_path == "window-update-packets-sent")
    {
        window_update_packets_sent = value;
    }
}

TcpConnection::Nodes::Node::Statistics::Statistics()
    :
    clients(std::make_unique<TcpConnection::Nodes::Node::Statistics::Clients>())
	,pcbs(std::make_unique<TcpConnection::Nodes::Node::Statistics::Pcbs>())
	,summary(std::make_unique<TcpConnection::Nodes::Node::Statistics::Summary>())
{
    clients->parent = this;
    children["clients"] = clients.get();

    pcbs->parent = this;
    children["pcbs"] = pcbs.get();

    summary->parent = this;
    children["summary"] = summary.get();

    yang_name = "statistics"; yang_parent_name = "node";
}

TcpConnection::Nodes::Node::Statistics::~Statistics()
{
}

bool TcpConnection::Nodes::Node::Statistics::has_data() const
{
    return (clients !=  nullptr && clients->has_data())
	|| (pcbs !=  nullptr && pcbs->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool TcpConnection::Nodes::Node::Statistics::has_operation() const
{
    return is_set(operation)
	|| (clients !=  nullptr && clients->has_operation())
	|| (pcbs !=  nullptr && pcbs->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string TcpConnection::Nodes::Node::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::Statistics::get_entity_path(Entity* ancestor) const
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

Entity* TcpConnection::Nodes::Node::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "clients")
    {
        if(clients != nullptr)
        {
            children["clients"] = clients.get();
        }
        else
        {
            clients = std::make_unique<TcpConnection::Nodes::Node::Statistics::Clients>();
            clients->parent = this;
            children["clients"] = clients.get();
        }
        return children.at("clients");
    }

    if(child_yang_name == "pcbs")
    {
        if(pcbs != nullptr)
        {
            children["pcbs"] = pcbs.get();
        }
        else
        {
            pcbs = std::make_unique<TcpConnection::Nodes::Node::Statistics::Pcbs>();
            pcbs->parent = this;
            children["pcbs"] = pcbs.get();
        }
        return children.at("pcbs");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
        else
        {
            summary = std::make_unique<TcpConnection::Nodes::Node::Statistics::Summary>();
            summary->parent = this;
            children["summary"] = summary.get();
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::Statistics::get_children()
{
    if(children.find("clients") == children.end())
    {
        if(clients != nullptr)
        {
            children["clients"] = clients.get();
        }
    }

    if(children.find("pcbs") == children.end())
    {
        if(pcbs != nullptr)
        {
            children["pcbs"] = pcbs.get();
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
    }

    return children;
}

void TcpConnection::Nodes::Node::Statistics::set_value(const std::string & value_path, std::string value)
{
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress::LocalAddress()
    :
    	af_name{YType::enumeration, "af-name"},
	 ipv4_address{YType::str, "ipv4-address"},
	 ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "local-address"; yang_parent_name = "connection-id";
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress::~LocalAddress()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress::ForeignAddress()
    :
    	af_name{YType::enumeration, "af-name"},
	 ipv4_address{YType::str, "ipv4-address"},
	 ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "foreign-address"; yang_parent_name = "connection-id";
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress::~ForeignAddress()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign-address";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options::Options()
    :
    	is_ip_sla{YType::boolean, "is-ip-sla"},
	 is_receive_filter{YType::boolean, "is-receive-filter"}
{
    yang_name = "options"; yang_parent_name = "lpts-pcb";
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options::~Options()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options::has_data() const
{
    return is_ip_sla.is_set
	|| is_receive_filter.is_set;
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options::has_operation() const
{
    return is_set(operation)
	|| is_set(is_ip_sla.operation)
	|| is_set(is_receive_filter.operation);
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "options";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options::get_entity_path(Entity* ancestor) const
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

    if (is_ip_sla.is_set || is_set(is_ip_sla.operation)) leaf_name_data.push_back(is_ip_sla.get_name_leafdata());
    if (is_receive_filter.is_set || is_set(is_receive_filter.operation)) leaf_name_data.push_back(is_receive_filter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-ip-sla")
    {
        is_ip_sla = value;
    }
    if(value_path == "is-receive-filter")
    {
        is_receive_filter = value;
    }
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags::LptsFlags()
    :
    	is_ignore_vrf_filter{YType::boolean, "is-ignore-vrf-filter"},
	 is_local_address_ignore{YType::boolean, "is-local-address-ignore"},
	 is_pcb_bound{YType::boolean, "is-pcb-bound"}
{
    yang_name = "lpts-flags"; yang_parent_name = "lpts-pcb";
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags::~LptsFlags()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags::has_data() const
{
    return is_ignore_vrf_filter.is_set
	|| is_local_address_ignore.is_set
	|| is_pcb_bound.is_set;
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_ignore_vrf_filter.operation)
	|| is_set(is_local_address_ignore.operation)
	|| is_set(is_pcb_bound.operation);
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lpts-flags";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags::get_entity_path(Entity* ancestor) const
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

    if (is_ignore_vrf_filter.is_set || is_set(is_ignore_vrf_filter.operation)) leaf_name_data.push_back(is_ignore_vrf_filter.get_name_leafdata());
    if (is_local_address_ignore.is_set || is_set(is_local_address_ignore.operation)) leaf_name_data.push_back(is_local_address_ignore.get_name_leafdata());
    if (is_pcb_bound.is_set || is_set(is_pcb_bound.operation)) leaf_name_data.push_back(is_pcb_bound.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-ignore-vrf-filter")
    {
        is_ignore_vrf_filter = value;
    }
    if(value_path == "is-local-address-ignore")
    {
        is_local_address_ignore = value;
    }
    if(value_path == "is-pcb-bound")
    {
        is_pcb_bound = value;
    }
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask::AcceptMask()
    :
    	is_interface{YType::boolean, "is-interface"},
	 is_local_address{YType::boolean, "is-local-address"},
	 is_local_port{YType::boolean, "is-local-port"},
	 is_packet_type{YType::boolean, "is-packet-type"},
	 is_remote_address{YType::boolean, "is-remote-address"},
	 is_remote_port{YType::boolean, "is-remote-port"}
{
    yang_name = "accept-mask"; yang_parent_name = "lpts-pcb";
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask::~AcceptMask()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask::has_data() const
{
    return is_interface.is_set
	|| is_local_address.is_set
	|| is_local_port.is_set
	|| is_packet_type.is_set
	|| is_remote_address.is_set
	|| is_remote_port.is_set;
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask::has_operation() const
{
    return is_set(operation)
	|| is_set(is_interface.operation)
	|| is_set(is_local_address.operation)
	|| is_set(is_local_port.operation)
	|| is_set(is_packet_type.operation)
	|| is_set(is_remote_address.operation)
	|| is_set(is_remote_port.operation);
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept-mask";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask::get_entity_path(Entity* ancestor) const
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

    if (is_interface.is_set || is_set(is_interface.operation)) leaf_name_data.push_back(is_interface.get_name_leafdata());
    if (is_local_address.is_set || is_set(is_local_address.operation)) leaf_name_data.push_back(is_local_address.get_name_leafdata());
    if (is_local_port.is_set || is_set(is_local_port.operation)) leaf_name_data.push_back(is_local_port.get_name_leafdata());
    if (is_packet_type.is_set || is_set(is_packet_type.operation)) leaf_name_data.push_back(is_packet_type.get_name_leafdata());
    if (is_remote_address.is_set || is_set(is_remote_address.operation)) leaf_name_data.push_back(is_remote_address.get_name_leafdata());
    if (is_remote_port.is_set || is_set(is_remote_port.operation)) leaf_name_data.push_back(is_remote_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-interface")
    {
        is_interface = value;
    }
    if(value_path == "is-local-address")
    {
        is_local_address = value;
    }
    if(value_path == "is-local-port")
    {
        is_local_port = value;
    }
    if(value_path == "is-packet-type")
    {
        is_packet_type = value;
    }
    if(value_path == "is-remote-address")
    {
        is_remote_address = value;
    }
    if(value_path == "is-remote-port")
    {
        is_remote_port = value;
    }
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType::PacketType()
    :
    	icm_pv6_message_type{YType::enumeration, "icm-pv6-message-type"},
	 icmp_message_type{YType::enumeration, "icmp-message-type"},
	 igmp_message_type{YType::enumeration, "igmp-message-type"},
	 message_id{YType::uint32, "message-id"},
	 type{YType::enumeration, "type"}
{
    yang_name = "packet-type"; yang_parent_name = "filter";
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType::~PacketType()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType::has_data() const
{
    return icm_pv6_message_type.is_set
	|| icmp_message_type.is_set
	|| igmp_message_type.is_set
	|| message_id.is_set
	|| type.is_set;
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType::has_operation() const
{
    return is_set(operation)
	|| is_set(icm_pv6_message_type.operation)
	|| is_set(icmp_message_type.operation)
	|| is_set(igmp_message_type.operation)
	|| is_set(message_id.operation)
	|| is_set(type.operation);
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-type";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType::get_entity_path(Entity* ancestor) const
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

    if (icm_pv6_message_type.is_set || is_set(icm_pv6_message_type.operation)) leaf_name_data.push_back(icm_pv6_message_type.get_name_leafdata());
    if (icmp_message_type.is_set || is_set(icmp_message_type.operation)) leaf_name_data.push_back(icmp_message_type.get_name_leafdata());
    if (igmp_message_type.is_set || is_set(igmp_message_type.operation)) leaf_name_data.push_back(igmp_message_type.get_name_leafdata());
    if (message_id.is_set || is_set(message_id.operation)) leaf_name_data.push_back(message_id.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "icm-pv6-message-type")
    {
        icm_pv6_message_type = value;
    }
    if(value_path == "icmp-message-type")
    {
        icmp_message_type = value;
    }
    if(value_path == "igmp-message-type")
    {
        igmp_message_type = value;
    }
    if(value_path == "message-id")
    {
        message_id = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress::RemoteAddress()
    :
    	af_name{YType::enumeration, "af-name"},
	 ipv4_address{YType::str, "ipv4-address"},
	 ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "remote-address"; yang_parent_name = "filter";
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress::~RemoteAddress()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-address";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress::LocalAddress()
    :
    	af_name{YType::enumeration, "af-name"},
	 ipv4_address{YType::str, "ipv4-address"},
	 ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "local-address"; yang_parent_name = "filter";
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress::~LocalAddress()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::Filter()
    :
    	flow_types_info{YType::uint32, "flow-types-info"},
	 interface_name{YType::str, "interface-name"},
	 local_length{YType::uint16, "local-length"},
	 priority{YType::uint8, "priority"},
	 receive_local_port{YType::uint16, "receive-local-port"},
	 receive_remote_port{YType::uint16, "receive-remote-port"},
	 remote_length{YType::uint16, "remote-length"},
	 ttl{YType::uint8, "ttl"}
    	,
    local_address(std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress>())
	,packet_type(std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType>())
	,remote_address(std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress>())
{
    local_address->parent = this;
    children["local-address"] = local_address.get();

    packet_type->parent = this;
    children["packet-type"] = packet_type.get();

    remote_address->parent = this;
    children["remote-address"] = remote_address.get();

    yang_name = "filter"; yang_parent_name = "lpts-pcb";
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::~Filter()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::has_data() const
{
    return flow_types_info.is_set
	|| interface_name.is_set
	|| local_length.is_set
	|| priority.is_set
	|| receive_local_port.is_set
	|| receive_remote_port.is_set
	|| remote_length.is_set
	|| ttl.is_set
	|| (local_address !=  nullptr && local_address->has_data())
	|| (packet_type !=  nullptr && packet_type->has_data())
	|| (remote_address !=  nullptr && remote_address->has_data());
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_types_info.operation)
	|| is_set(interface_name.operation)
	|| is_set(local_length.operation)
	|| is_set(priority.operation)
	|| is_set(receive_local_port.operation)
	|| is_set(receive_remote_port.operation)
	|| is_set(remote_length.operation)
	|| is_set(ttl.operation)
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (packet_type !=  nullptr && packet_type->has_operation())
	|| (remote_address !=  nullptr && remote_address->has_operation());
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::get_entity_path(Entity* ancestor) const
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

    if (flow_types_info.is_set || is_set(flow_types_info.operation)) leaf_name_data.push_back(flow_types_info.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (local_length.is_set || is_set(local_length.operation)) leaf_name_data.push_back(local_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (receive_local_port.is_set || is_set(receive_local_port.operation)) leaf_name_data.push_back(receive_local_port.get_name_leafdata());
    if (receive_remote_port.is_set || is_set(receive_remote_port.operation)) leaf_name_data.push_back(receive_remote_port.get_name_leafdata());
    if (remote_length.is_set || is_set(remote_length.operation)) leaf_name_data.push_back(remote_length.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-address")
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address.get();
        }
        else
        {
            local_address = std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::LocalAddress>();
            local_address->parent = this;
            children["local-address"] = local_address.get();
        }
        return children.at("local-address");
    }

    if(child_yang_name == "packet-type")
    {
        if(packet_type != nullptr)
        {
            children["packet-type"] = packet_type.get();
        }
        else
        {
            packet_type = std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::PacketType>();
            packet_type->parent = this;
            children["packet-type"] = packet_type.get();
        }
        return children.at("packet-type");
    }

    if(child_yang_name == "remote-address")
    {
        if(remote_address != nullptr)
        {
            children["remote-address"] = remote_address.get();
        }
        else
        {
            remote_address = std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::RemoteAddress>();
            remote_address->parent = this;
            children["remote-address"] = remote_address.get();
        }
        return children.at("remote-address");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::get_children()
{
    if(children.find("local-address") == children.end())
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address.get();
        }
    }

    if(children.find("packet-type") == children.end())
    {
        if(packet_type != nullptr)
        {
            children["packet-type"] = packet_type.get();
        }
    }

    if(children.find("remote-address") == children.end())
    {
        if(remote_address != nullptr)
        {
            children["remote-address"] = remote_address.get();
        }
    }

    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-types-info")
    {
        flow_types_info = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "local-length")
    {
        local_length = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "receive-local-port")
    {
        receive_local_port = value;
    }
    if(value_path == "receive-remote-port")
    {
        receive_remote_port = value;
    }
    if(value_path == "remote-length")
    {
        remote_length = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsPcb()
    :
    	flow_types_info{YType::uint32, "flow-types-info"},
	 ttl{YType::uint8, "ttl"}
    	,
    accept_mask(std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask>())
	,lpts_flags(std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags>())
	,options(std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options>())
{
    accept_mask->parent = this;
    children["accept-mask"] = accept_mask.get();

    lpts_flags->parent = this;
    children["lpts-flags"] = lpts_flags.get();

    options->parent = this;
    children["options"] = options.get();

    yang_name = "lpts-pcb"; yang_parent_name = "common";
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::~LptsPcb()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::has_data() const
{
    for (std::size_t index=0; index<filter.size(); index++)
    {
        if(filter[index]->has_data())
            return true;
    }
    return flow_types_info.is_set
	|| ttl.is_set
	|| (accept_mask !=  nullptr && accept_mask->has_data())
	|| (lpts_flags !=  nullptr && lpts_flags->has_data())
	|| (options !=  nullptr && options->has_data());
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::has_operation() const
{
    for (std::size_t index=0; index<filter.size(); index++)
    {
        if(filter[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(flow_types_info.operation)
	|| is_set(ttl.operation)
	|| (accept_mask !=  nullptr && accept_mask->has_operation())
	|| (lpts_flags !=  nullptr && lpts_flags->has_operation())
	|| (options !=  nullptr && options->has_operation());
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lpts-pcb";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::get_entity_path(Entity* ancestor) const
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

    if (flow_types_info.is_set || is_set(flow_types_info.operation)) leaf_name_data.push_back(flow_types_info.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "accept-mask")
    {
        if(accept_mask != nullptr)
        {
            children["accept-mask"] = accept_mask.get();
        }
        else
        {
            accept_mask = std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::AcceptMask>();
            accept_mask->parent = this;
            children["accept-mask"] = accept_mask.get();
        }
        return children.at("accept-mask");
    }

    if(child_yang_name == "filter")
    {
        for(auto const & c : filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Filter>();
        c->parent = this;
        filter.push_back(std::move(c));
        children[segment_path] = filter.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "lpts-flags")
    {
        if(lpts_flags != nullptr)
        {
            children["lpts-flags"] = lpts_flags.get();
        }
        else
        {
            lpts_flags = std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::LptsFlags>();
            lpts_flags->parent = this;
            children["lpts-flags"] = lpts_flags.get();
        }
        return children.at("lpts-flags");
    }

    if(child_yang_name == "options")
    {
        if(options != nullptr)
        {
            children["options"] = options.get();
        }
        else
        {
            options = std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::Options>();
            options->parent = this;
            children["options"] = options.get();
        }
        return children.at("options");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::get_children()
{
    if(children.find("accept-mask") == children.end())
    {
        if(accept_mask != nullptr)
        {
            children["accept-mask"] = accept_mask.get();
        }
    }

    for (auto const & c : filter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("lpts-flags") == children.end())
    {
        if(lpts_flags != nullptr)
        {
            children["lpts-flags"] = lpts_flags.get();
        }
    }

    if(children.find("options") == children.end())
    {
        if(options != nullptr)
        {
            children["options"] = options.get();
        }
    }

    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-types-info")
    {
        flow_types_info = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::Common()
    :
    	af_name{YType::enumeration, "af-name"}
    	,
    lpts_pcb(std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb>())
{
    lpts_pcb->parent = this;
    children["lpts-pcb"] = lpts_pcb.get();

    yang_name = "common"; yang_parent_name = "connection-id";
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::~Common()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::has_data() const
{
    return af_name.is_set
	|| (lpts_pcb !=  nullptr && lpts_pcb->has_data());
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| (lpts_pcb !=  nullptr && lpts_pcb->has_operation());
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lpts-pcb")
    {
        if(lpts_pcb != nullptr)
        {
            children["lpts-pcb"] = lpts_pcb.get();
        }
        else
        {
            lpts_pcb = std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::LptsPcb>();
            lpts_pcb->parent = this;
            children["lpts-pcb"] = lpts_pcb.get();
        }
        return children.at("lpts-pcb");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::get_children()
{
    if(children.find("lpts-pcb") == children.end())
    {
        if(lpts_pcb != nullptr)
        {
            children["lpts-pcb"] = lpts_pcb.get();
        }
    }

    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ConnectionId()
    :
    	pcb_id{YType::uint32, "pcb-id"},
	 foreign_port{YType::uint16, "foreign-port"},
	 l4_protocol{YType::uint32, "l4-protocol"},
	 local_port{YType::uint16, "local-port"}
    	,
    common(std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common>())
	,foreign_address(std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress>())
	,local_address(std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress>())
{
    common->parent = this;
    children["common"] = common.get();

    foreign_address->parent = this;
    children["foreign-address"] = foreign_address.get();

    local_address->parent = this;
    children["local-address"] = local_address.get();

    yang_name = "connection-id"; yang_parent_name = "display-type";
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::~ConnectionId()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::has_data() const
{
    return pcb_id.is_set
	|| foreign_port.is_set
	|| l4_protocol.is_set
	|| local_port.is_set
	|| (common !=  nullptr && common->has_data())
	|| (foreign_address !=  nullptr && foreign_address->has_data())
	|| (local_address !=  nullptr && local_address->has_data());
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::has_operation() const
{
    return is_set(operation)
	|| is_set(pcb_id.operation)
	|| is_set(foreign_port.operation)
	|| is_set(l4_protocol.operation)
	|| is_set(local_port.operation)
	|| (common !=  nullptr && common->has_operation())
	|| (foreign_address !=  nullptr && foreign_address->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation());
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-id" <<"[pcb-id='" <<pcb_id.get() <<"']";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::get_entity_path(Entity* ancestor) const
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

    if (pcb_id.is_set || is_set(pcb_id.operation)) leaf_name_data.push_back(pcb_id.get_name_leafdata());
    if (foreign_port.is_set || is_set(foreign_port.operation)) leaf_name_data.push_back(foreign_port.get_name_leafdata());
    if (l4_protocol.is_set || is_set(l4_protocol.operation)) leaf_name_data.push_back(l4_protocol.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.operation)) leaf_name_data.push_back(local_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "common")
    {
        if(common != nullptr)
        {
            children["common"] = common.get();
        }
        else
        {
            common = std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::Common>();
            common->parent = this;
            children["common"] = common.get();
        }
        return children.at("common");
    }

    if(child_yang_name == "foreign-address")
    {
        if(foreign_address != nullptr)
        {
            children["foreign-address"] = foreign_address.get();
        }
        else
        {
            foreign_address = std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::ForeignAddress>();
            foreign_address->parent = this;
            children["foreign-address"] = foreign_address.get();
        }
        return children.at("foreign-address");
    }

    if(child_yang_name == "local-address")
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address.get();
        }
        else
        {
            local_address = std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::LocalAddress>();
            local_address->parent = this;
            children["local-address"] = local_address.get();
        }
        return children.at("local-address");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::get_children()
{
    if(children.find("common") == children.end())
    {
        if(common != nullptr)
        {
            children["common"] = common.get();
        }
    }

    if(children.find("foreign-address") == children.end())
    {
        if(foreign_address != nullptr)
        {
            children["foreign-address"] = foreign_address.get();
        }
    }

    if(children.find("local-address") == children.end())
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address.get();
        }
    }

    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pcb-id")
    {
        pcb_id = value;
    }
    if(value_path == "foreign-port")
    {
        foreign_port = value;
    }
    if(value_path == "l4-protocol")
    {
        l4_protocol = value;
    }
    if(value_path == "local-port")
    {
        local_port = value;
    }
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::DisplayType()
    :
    	disp_type{YType::enumeration, "disp-type"}
{
    yang_name = "display-type"; yang_parent_name = "display-types";
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::~DisplayType()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::has_data() const
{
    for (std::size_t index=0; index<connection_id.size(); index++)
    {
        if(connection_id[index]->has_data())
            return true;
    }
    return disp_type.is_set;
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::has_operation() const
{
    for (std::size_t index=0; index<connection_id.size(); index++)
    {
        if(connection_id[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(disp_type.operation);
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "display-type" <<"[disp-type='" <<disp_type.get() <<"']";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::get_entity_path(Entity* ancestor) const
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

    if (disp_type.is_set || is_set(disp_type.operation)) leaf_name_data.push_back(disp_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "connection-id")
    {
        for(auto const & c : connection_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::ConnectionId>();
        c->parent = this;
        connection_id.push_back(std::move(c));
        children[segment_path] = connection_id.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::get_children()
{
    for (auto const & c : connection_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disp-type")
    {
        disp_type = value;
    }
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayTypes()
{
    yang_name = "display-types"; yang_parent_name = "extended-information";
}

TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::~DisplayTypes()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::has_data() const
{
    for (std::size_t index=0; index<display_type.size(); index++)
    {
        if(display_type[index]->has_data())
            return true;
    }
    return false;
}

bool TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::has_operation() const
{
    for (std::size_t index=0; index<display_type.size(); index++)
    {
        if(display_type[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "display-types";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::get_entity_path(Entity* ancestor) const
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

Entity* TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "display-type")
    {
        for(auto const & c : display_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::DisplayType>();
        c->parent = this;
        display_type.push_back(std::move(c));
        children[segment_path] = display_type.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::get_children()
{
    for (auto const & c : display_type)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes::set_value(const std::string & value_path, std::string value)
{
}

TcpConnection::Nodes::Node::ExtendedInformation::ExtendedInformation()
    :
    display_types(std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes>())
{
    display_types->parent = this;
    children["display-types"] = display_types.get();

    yang_name = "extended-information"; yang_parent_name = "node";
}

TcpConnection::Nodes::Node::ExtendedInformation::~ExtendedInformation()
{
}

bool TcpConnection::Nodes::Node::ExtendedInformation::has_data() const
{
    return (display_types !=  nullptr && display_types->has_data());
}

bool TcpConnection::Nodes::Node::ExtendedInformation::has_operation() const
{
    return is_set(operation)
	|| (display_types !=  nullptr && display_types->has_operation());
}

std::string TcpConnection::Nodes::Node::ExtendedInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-information";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::ExtendedInformation::get_entity_path(Entity* ancestor) const
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

Entity* TcpConnection::Nodes::Node::ExtendedInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "display-types")
    {
        if(display_types != nullptr)
        {
            children["display-types"] = display_types.get();
        }
        else
        {
            display_types = std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation::DisplayTypes>();
            display_types->parent = this;
            children["display-types"] = display_types.get();
        }
        return children.at("display-types");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::ExtendedInformation::get_children()
{
    if(children.find("display-types") == children.end())
    {
        if(display_types != nullptr)
        {
            children["display-types"] = display_types.get();
        }
    }

    return children;
}

void TcpConnection::Nodes::Node::ExtendedInformation::set_value(const std::string & value_path, std::string value)
{
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress::LocalAddress()
    :
    	af_name{YType::enumeration, "af-name"},
	 ipv4_address{YType::str, "ipv4-address"},
	 ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "local-address"; yang_parent_name = "detail-information";
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress::~LocalAddress()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress::ForeignAddress()
    :
    	af_name{YType::enumeration, "af-name"},
	 ipv4_address{YType::str, "ipv4-address"},
	 ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "foreign-address"; yang_parent_name = "detail-information";
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress::~ForeignAddress()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign-address";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags::SocketOptionFlags()
    :
    	accept_connection{YType::boolean, "accept-connection"},
	 broadcast{YType::boolean, "broadcast"},
	 debug{YType::boolean, "debug"},
	 dont_route{YType::boolean, "dont-route"},
	 keep_alive{YType::boolean, "keep-alive"},
	 linger{YType::boolean, "linger"},
	 nonblocking_io{YType::boolean, "nonblocking-io"},
	 out_of_band_inline{YType::boolean, "out-of-band-inline"},
	 reuse_address{YType::boolean, "reuse-address"},
	 reuse_port{YType::boolean, "reuse-port"},
	 use_loopback{YType::boolean, "use-loopback"}
{
    yang_name = "socket-option-flags"; yang_parent_name = "detail-information";
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags::~SocketOptionFlags()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags::has_data() const
{
    return accept_connection.is_set
	|| broadcast.is_set
	|| debug.is_set
	|| dont_route.is_set
	|| keep_alive.is_set
	|| linger.is_set
	|| nonblocking_io.is_set
	|| out_of_band_inline.is_set
	|| reuse_address.is_set
	|| reuse_port.is_set
	|| use_loopback.is_set;
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_connection.operation)
	|| is_set(broadcast.operation)
	|| is_set(debug.operation)
	|| is_set(dont_route.operation)
	|| is_set(keep_alive.operation)
	|| is_set(linger.operation)
	|| is_set(nonblocking_io.operation)
	|| is_set(out_of_band_inline.operation)
	|| is_set(reuse_address.operation)
	|| is_set(reuse_port.operation)
	|| is_set(use_loopback.operation);
}

std::string TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "socket-option-flags";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags::get_entity_path(Entity* ancestor) const
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

    if (accept_connection.is_set || is_set(accept_connection.operation)) leaf_name_data.push_back(accept_connection.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (debug.is_set || is_set(debug.operation)) leaf_name_data.push_back(debug.get_name_leafdata());
    if (dont_route.is_set || is_set(dont_route.operation)) leaf_name_data.push_back(dont_route.get_name_leafdata());
    if (keep_alive.is_set || is_set(keep_alive.operation)) leaf_name_data.push_back(keep_alive.get_name_leafdata());
    if (linger.is_set || is_set(linger.operation)) leaf_name_data.push_back(linger.get_name_leafdata());
    if (nonblocking_io.is_set || is_set(nonblocking_io.operation)) leaf_name_data.push_back(nonblocking_io.get_name_leafdata());
    if (out_of_band_inline.is_set || is_set(out_of_band_inline.operation)) leaf_name_data.push_back(out_of_band_inline.get_name_leafdata());
    if (reuse_address.is_set || is_set(reuse_address.operation)) leaf_name_data.push_back(reuse_address.get_name_leafdata());
    if (reuse_port.is_set || is_set(reuse_port.operation)) leaf_name_data.push_back(reuse_port.get_name_leafdata());
    if (use_loopback.is_set || is_set(use_loopback.operation)) leaf_name_data.push_back(use_loopback.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-connection")
    {
        accept_connection = value;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "debug")
    {
        debug = value;
    }
    if(value_path == "dont-route")
    {
        dont_route = value;
    }
    if(value_path == "keep-alive")
    {
        keep_alive = value;
    }
    if(value_path == "linger")
    {
        linger = value;
    }
    if(value_path == "nonblocking-io")
    {
        nonblocking_io = value;
    }
    if(value_path == "out-of-band-inline")
    {
        out_of_band_inline = value;
    }
    if(value_path == "reuse-address")
    {
        reuse_address = value;
    }
    if(value_path == "reuse-port")
    {
        reuse_port = value;
    }
    if(value_path == "use-loopback")
    {
        use_loopback = value;
    }
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags::SocketStateFlags()
    :
    	async_io_notify{YType::boolean, "async-io-notify"},
	 block_close{YType::boolean, "block-close"},
	 block_receive{YType::boolean, "block-receive"},
	 block_send{YType::boolean, "block-send"},
	 cant_receive_more{YType::boolean, "cant-receive-more"},
	 cant_send_more{YType::boolean, "cant-send-more"},
	 is_confirming{YType::boolean, "is-confirming"},
	 is_connected{YType::boolean, "is-connected"},
	 is_connecting{YType::boolean, "is-connecting"},
	 is_detached{YType::boolean, "is-detached"},
	 is_disconnecting{YType::boolean, "is-disconnecting"},
	 is_solock{YType::boolean, "is-solock"},
	 no_file_descriptor_reference{YType::boolean, "no-file-descriptor-reference"},
	 privileged{YType::boolean, "privileged"},
	 received_at_mark{YType::boolean, "received-at-mark"}
{
    yang_name = "socket-state-flags"; yang_parent_name = "detail-information";
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags::~SocketStateFlags()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags::has_data() const
{
    return async_io_notify.is_set
	|| block_close.is_set
	|| block_receive.is_set
	|| block_send.is_set
	|| cant_receive_more.is_set
	|| cant_send_more.is_set
	|| is_confirming.is_set
	|| is_connected.is_set
	|| is_connecting.is_set
	|| is_detached.is_set
	|| is_disconnecting.is_set
	|| is_solock.is_set
	|| no_file_descriptor_reference.is_set
	|| privileged.is_set
	|| received_at_mark.is_set;
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(async_io_notify.operation)
	|| is_set(block_close.operation)
	|| is_set(block_receive.operation)
	|| is_set(block_send.operation)
	|| is_set(cant_receive_more.operation)
	|| is_set(cant_send_more.operation)
	|| is_set(is_confirming.operation)
	|| is_set(is_connected.operation)
	|| is_set(is_connecting.operation)
	|| is_set(is_detached.operation)
	|| is_set(is_disconnecting.operation)
	|| is_set(is_solock.operation)
	|| is_set(no_file_descriptor_reference.operation)
	|| is_set(privileged.operation)
	|| is_set(received_at_mark.operation);
}

std::string TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "socket-state-flags";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags::get_entity_path(Entity* ancestor) const
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

    if (async_io_notify.is_set || is_set(async_io_notify.operation)) leaf_name_data.push_back(async_io_notify.get_name_leafdata());
    if (block_close.is_set || is_set(block_close.operation)) leaf_name_data.push_back(block_close.get_name_leafdata());
    if (block_receive.is_set || is_set(block_receive.operation)) leaf_name_data.push_back(block_receive.get_name_leafdata());
    if (block_send.is_set || is_set(block_send.operation)) leaf_name_data.push_back(block_send.get_name_leafdata());
    if (cant_receive_more.is_set || is_set(cant_receive_more.operation)) leaf_name_data.push_back(cant_receive_more.get_name_leafdata());
    if (cant_send_more.is_set || is_set(cant_send_more.operation)) leaf_name_data.push_back(cant_send_more.get_name_leafdata());
    if (is_confirming.is_set || is_set(is_confirming.operation)) leaf_name_data.push_back(is_confirming.get_name_leafdata());
    if (is_connected.is_set || is_set(is_connected.operation)) leaf_name_data.push_back(is_connected.get_name_leafdata());
    if (is_connecting.is_set || is_set(is_connecting.operation)) leaf_name_data.push_back(is_connecting.get_name_leafdata());
    if (is_detached.is_set || is_set(is_detached.operation)) leaf_name_data.push_back(is_detached.get_name_leafdata());
    if (is_disconnecting.is_set || is_set(is_disconnecting.operation)) leaf_name_data.push_back(is_disconnecting.get_name_leafdata());
    if (is_solock.is_set || is_set(is_solock.operation)) leaf_name_data.push_back(is_solock.get_name_leafdata());
    if (no_file_descriptor_reference.is_set || is_set(no_file_descriptor_reference.operation)) leaf_name_data.push_back(no_file_descriptor_reference.get_name_leafdata());
    if (privileged.is_set || is_set(privileged.operation)) leaf_name_data.push_back(privileged.get_name_leafdata());
    if (received_at_mark.is_set || is_set(received_at_mark.operation)) leaf_name_data.push_back(received_at_mark.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "async-io-notify")
    {
        async_io_notify = value;
    }
    if(value_path == "block-close")
    {
        block_close = value;
    }
    if(value_path == "block-receive")
    {
        block_receive = value;
    }
    if(value_path == "block-send")
    {
        block_send = value;
    }
    if(value_path == "cant-receive-more")
    {
        cant_receive_more = value;
    }
    if(value_path == "cant-send-more")
    {
        cant_send_more = value;
    }
    if(value_path == "is-confirming")
    {
        is_confirming = value;
    }
    if(value_path == "is-connected")
    {
        is_connected = value;
    }
    if(value_path == "is-connecting")
    {
        is_connecting = value;
    }
    if(value_path == "is-detached")
    {
        is_detached = value;
    }
    if(value_path == "is-disconnecting")
    {
        is_disconnecting = value;
    }
    if(value_path == "is-solock")
    {
        is_solock = value;
    }
    if(value_path == "no-file-descriptor-reference")
    {
        no_file_descriptor_reference = value;
    }
    if(value_path == "privileged")
    {
        privileged = value;
    }
    if(value_path == "received-at-mark")
    {
        received_at_mark = value;
    }
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags::FeatureFlags()
    :
    	connection_keep_alive_timer{YType::boolean, "connection-keep-alive-timer"},
	 giveup_timer{YType::boolean, "giveup-timer"},
	 md5{YType::boolean, "md5"},
	 mss_cisco{YType::boolean, "mss-cisco"},
	 nagle{YType::boolean, "nagle"},
	 path_mtu_discovery{YType::boolean, "path-mtu-discovery"},
	 selective_ack{YType::boolean, "selective-ack"},
	 timestamps{YType::boolean, "timestamps"},
	 window_scaling{YType::boolean, "window-scaling"}
{
    yang_name = "feature-flags"; yang_parent_name = "detail-information";
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags::~FeatureFlags()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags::has_data() const
{
    return connection_keep_alive_timer.is_set
	|| giveup_timer.is_set
	|| md5.is_set
	|| mss_cisco.is_set
	|| nagle.is_set
	|| path_mtu_discovery.is_set
	|| selective_ack.is_set
	|| timestamps.is_set
	|| window_scaling.is_set;
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(connection_keep_alive_timer.operation)
	|| is_set(giveup_timer.operation)
	|| is_set(md5.operation)
	|| is_set(mss_cisco.operation)
	|| is_set(nagle.operation)
	|| is_set(path_mtu_discovery.operation)
	|| is_set(selective_ack.operation)
	|| is_set(timestamps.operation)
	|| is_set(window_scaling.operation);
}

std::string TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "feature-flags";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags::get_entity_path(Entity* ancestor) const
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

    if (connection_keep_alive_timer.is_set || is_set(connection_keep_alive_timer.operation)) leaf_name_data.push_back(connection_keep_alive_timer.get_name_leafdata());
    if (giveup_timer.is_set || is_set(giveup_timer.operation)) leaf_name_data.push_back(giveup_timer.get_name_leafdata());
    if (md5.is_set || is_set(md5.operation)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (mss_cisco.is_set || is_set(mss_cisco.operation)) leaf_name_data.push_back(mss_cisco.get_name_leafdata());
    if (nagle.is_set || is_set(nagle.operation)) leaf_name_data.push_back(nagle.get_name_leafdata());
    if (path_mtu_discovery.is_set || is_set(path_mtu_discovery.operation)) leaf_name_data.push_back(path_mtu_discovery.get_name_leafdata());
    if (selective_ack.is_set || is_set(selective_ack.operation)) leaf_name_data.push_back(selective_ack.get_name_leafdata());
    if (timestamps.is_set || is_set(timestamps.operation)) leaf_name_data.push_back(timestamps.get_name_leafdata());
    if (window_scaling.is_set || is_set(window_scaling.operation)) leaf_name_data.push_back(window_scaling.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connection-keep-alive-timer")
    {
        connection_keep_alive_timer = value;
    }
    if(value_path == "giveup-timer")
    {
        giveup_timer = value;
    }
    if(value_path == "md5")
    {
        md5 = value;
    }
    if(value_path == "mss-cisco")
    {
        mss_cisco = value;
    }
    if(value_path == "nagle")
    {
        nagle = value;
    }
    if(value_path == "path-mtu-discovery")
    {
        path_mtu_discovery = value;
    }
    if(value_path == "selective-ack")
    {
        selective_ack = value;
    }
    if(value_path == "timestamps")
    {
        timestamps = value;
    }
    if(value_path == "window-scaling")
    {
        window_scaling = value;
    }
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags::StateFlags()
    :
    	ack_needed{YType::boolean, "ack-needed"},
	 fin_sent{YType::boolean, "fin-sent"},
	 in_syn_cache{YType::boolean, "in-syn-cache"},
	 nagle_wait{YType::boolean, "nagle-wait"},
	 need_push{YType::boolean, "need-push"},
	 path_mtu_ager{YType::boolean, "path-mtu-ager"},
	 probing{YType::boolean, "probing"},
	 pushed{YType::boolean, "pushed"}
{
    yang_name = "state-flags"; yang_parent_name = "detail-information";
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags::~StateFlags()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags::has_data() const
{
    return ack_needed.is_set
	|| fin_sent.is_set
	|| in_syn_cache.is_set
	|| nagle_wait.is_set
	|| need_push.is_set
	|| path_mtu_ager.is_set
	|| probing.is_set
	|| pushed.is_set;
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(ack_needed.operation)
	|| is_set(fin_sent.operation)
	|| is_set(in_syn_cache.operation)
	|| is_set(nagle_wait.operation)
	|| is_set(need_push.operation)
	|| is_set(path_mtu_ager.operation)
	|| is_set(probing.operation)
	|| is_set(pushed.operation);
}

std::string TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-flags";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags::get_entity_path(Entity* ancestor) const
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

    if (ack_needed.is_set || is_set(ack_needed.operation)) leaf_name_data.push_back(ack_needed.get_name_leafdata());
    if (fin_sent.is_set || is_set(fin_sent.operation)) leaf_name_data.push_back(fin_sent.get_name_leafdata());
    if (in_syn_cache.is_set || is_set(in_syn_cache.operation)) leaf_name_data.push_back(in_syn_cache.get_name_leafdata());
    if (nagle_wait.is_set || is_set(nagle_wait.operation)) leaf_name_data.push_back(nagle_wait.get_name_leafdata());
    if (need_push.is_set || is_set(need_push.operation)) leaf_name_data.push_back(need_push.get_name_leafdata());
    if (path_mtu_ager.is_set || is_set(path_mtu_ager.operation)) leaf_name_data.push_back(path_mtu_ager.get_name_leafdata());
    if (probing.is_set || is_set(probing.operation)) leaf_name_data.push_back(probing.get_name_leafdata());
    if (pushed.is_set || is_set(pushed.operation)) leaf_name_data.push_back(pushed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack-needed")
    {
        ack_needed = value;
    }
    if(value_path == "fin-sent")
    {
        fin_sent = value;
    }
    if(value_path == "in-syn-cache")
    {
        in_syn_cache = value;
    }
    if(value_path == "nagle-wait")
    {
        nagle_wait = value;
    }
    if(value_path == "need-push")
    {
        need_push = value;
    }
    if(value_path == "path-mtu-ager")
    {
        path_mtu_ager = value;
    }
    if(value_path == "probing")
    {
        probing = value;
    }
    if(value_path == "pushed")
    {
        pushed = value;
    }
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags::RequestFlags()
    :
    	connection_keep_alive_timer{YType::boolean, "connection-keep-alive-timer"},
	 giveup_timer{YType::boolean, "giveup-timer"},
	 md5{YType::boolean, "md5"},
	 mss_cisco{YType::boolean, "mss-cisco"},
	 nagle{YType::boolean, "nagle"},
	 path_mtu_discovery{YType::boolean, "path-mtu-discovery"},
	 selective_ack{YType::boolean, "selective-ack"},
	 timestamps{YType::boolean, "timestamps"},
	 window_scaling{YType::boolean, "window-scaling"}
{
    yang_name = "request-flags"; yang_parent_name = "detail-information";
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags::~RequestFlags()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags::has_data() const
{
    return connection_keep_alive_timer.is_set
	|| giveup_timer.is_set
	|| md5.is_set
	|| mss_cisco.is_set
	|| nagle.is_set
	|| path_mtu_discovery.is_set
	|| selective_ack.is_set
	|| timestamps.is_set
	|| window_scaling.is_set;
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(connection_keep_alive_timer.operation)
	|| is_set(giveup_timer.operation)
	|| is_set(md5.operation)
	|| is_set(mss_cisco.operation)
	|| is_set(nagle.operation)
	|| is_set(path_mtu_discovery.operation)
	|| is_set(selective_ack.operation)
	|| is_set(timestamps.operation)
	|| is_set(window_scaling.operation);
}

std::string TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request-flags";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags::get_entity_path(Entity* ancestor) const
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

    if (connection_keep_alive_timer.is_set || is_set(connection_keep_alive_timer.operation)) leaf_name_data.push_back(connection_keep_alive_timer.get_name_leafdata());
    if (giveup_timer.is_set || is_set(giveup_timer.operation)) leaf_name_data.push_back(giveup_timer.get_name_leafdata());
    if (md5.is_set || is_set(md5.operation)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (mss_cisco.is_set || is_set(mss_cisco.operation)) leaf_name_data.push_back(mss_cisco.get_name_leafdata());
    if (nagle.is_set || is_set(nagle.operation)) leaf_name_data.push_back(nagle.get_name_leafdata());
    if (path_mtu_discovery.is_set || is_set(path_mtu_discovery.operation)) leaf_name_data.push_back(path_mtu_discovery.get_name_leafdata());
    if (selective_ack.is_set || is_set(selective_ack.operation)) leaf_name_data.push_back(selective_ack.get_name_leafdata());
    if (timestamps.is_set || is_set(timestamps.operation)) leaf_name_data.push_back(timestamps.get_name_leafdata());
    if (window_scaling.is_set || is_set(window_scaling.operation)) leaf_name_data.push_back(window_scaling.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connection-keep-alive-timer")
    {
        connection_keep_alive_timer = value;
    }
    if(value_path == "giveup-timer")
    {
        giveup_timer = value;
    }
    if(value_path == "md5")
    {
        md5 = value;
    }
    if(value_path == "mss-cisco")
    {
        mss_cisco = value;
    }
    if(value_path == "nagle")
    {
        nagle = value;
    }
    if(value_path == "path-mtu-discovery")
    {
        path_mtu_discovery = value;
    }
    if(value_path == "selective-ack")
    {
        selective_ack = value;
    }
    if(value_path == "timestamps")
    {
        timestamps = value;
    }
    if(value_path == "window-scaling")
    {
        window_scaling = value;
    }
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags::ReceiveBufStateFlags()
    :
    	async_io{YType::boolean, "async-io"},
	 connect_wakeup{YType::boolean, "connect-wakeup"},
	 delayed_wakeup{YType::boolean, "delayed-wakeup"},
	 input_select{YType::boolean, "input-select"},
	 io_timer_set{YType::boolean, "io-timer-set"},
	 locked{YType::boolean, "locked"},
	 not_interruptible{YType::boolean, "not-interruptible"},
	 out_of_band_select{YType::boolean, "out-of-band-select"},
	 output_select{YType::boolean, "output-select"},
	 waiting_for_data{YType::boolean, "waiting-for-data"},
	 waiting_for_lock{YType::boolean, "waiting-for-lock"},
	 wakeup{YType::boolean, "wakeup"}
{
    yang_name = "receive-buf-state-flags"; yang_parent_name = "detail-information";
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags::~ReceiveBufStateFlags()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags::has_data() const
{
    return async_io.is_set
	|| connect_wakeup.is_set
	|| delayed_wakeup.is_set
	|| input_select.is_set
	|| io_timer_set.is_set
	|| locked.is_set
	|| not_interruptible.is_set
	|| out_of_band_select.is_set
	|| output_select.is_set
	|| waiting_for_data.is_set
	|| waiting_for_lock.is_set
	|| wakeup.is_set;
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(async_io.operation)
	|| is_set(connect_wakeup.operation)
	|| is_set(delayed_wakeup.operation)
	|| is_set(input_select.operation)
	|| is_set(io_timer_set.operation)
	|| is_set(locked.operation)
	|| is_set(not_interruptible.operation)
	|| is_set(out_of_band_select.operation)
	|| is_set(output_select.operation)
	|| is_set(waiting_for_data.operation)
	|| is_set(waiting_for_lock.operation)
	|| is_set(wakeup.operation);
}

std::string TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-buf-state-flags";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags::get_entity_path(Entity* ancestor) const
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

    if (async_io.is_set || is_set(async_io.operation)) leaf_name_data.push_back(async_io.get_name_leafdata());
    if (connect_wakeup.is_set || is_set(connect_wakeup.operation)) leaf_name_data.push_back(connect_wakeup.get_name_leafdata());
    if (delayed_wakeup.is_set || is_set(delayed_wakeup.operation)) leaf_name_data.push_back(delayed_wakeup.get_name_leafdata());
    if (input_select.is_set || is_set(input_select.operation)) leaf_name_data.push_back(input_select.get_name_leafdata());
    if (io_timer_set.is_set || is_set(io_timer_set.operation)) leaf_name_data.push_back(io_timer_set.get_name_leafdata());
    if (locked.is_set || is_set(locked.operation)) leaf_name_data.push_back(locked.get_name_leafdata());
    if (not_interruptible.is_set || is_set(not_interruptible.operation)) leaf_name_data.push_back(not_interruptible.get_name_leafdata());
    if (out_of_band_select.is_set || is_set(out_of_band_select.operation)) leaf_name_data.push_back(out_of_band_select.get_name_leafdata());
    if (output_select.is_set || is_set(output_select.operation)) leaf_name_data.push_back(output_select.get_name_leafdata());
    if (waiting_for_data.is_set || is_set(waiting_for_data.operation)) leaf_name_data.push_back(waiting_for_data.get_name_leafdata());
    if (waiting_for_lock.is_set || is_set(waiting_for_lock.operation)) leaf_name_data.push_back(waiting_for_lock.get_name_leafdata());
    if (wakeup.is_set || is_set(wakeup.operation)) leaf_name_data.push_back(wakeup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "async-io")
    {
        async_io = value;
    }
    if(value_path == "connect-wakeup")
    {
        connect_wakeup = value;
    }
    if(value_path == "delayed-wakeup")
    {
        delayed_wakeup = value;
    }
    if(value_path == "input-select")
    {
        input_select = value;
    }
    if(value_path == "io-timer-set")
    {
        io_timer_set = value;
    }
    if(value_path == "locked")
    {
        locked = value;
    }
    if(value_path == "not-interruptible")
    {
        not_interruptible = value;
    }
    if(value_path == "out-of-band-select")
    {
        out_of_band_select = value;
    }
    if(value_path == "output-select")
    {
        output_select = value;
    }
    if(value_path == "waiting-for-data")
    {
        waiting_for_data = value;
    }
    if(value_path == "waiting-for-lock")
    {
        waiting_for_lock = value;
    }
    if(value_path == "wakeup")
    {
        wakeup = value;
    }
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags::SendBufStateFlags()
    :
    	async_io{YType::boolean, "async-io"},
	 connect_wakeup{YType::boolean, "connect-wakeup"},
	 delayed_wakeup{YType::boolean, "delayed-wakeup"},
	 input_select{YType::boolean, "input-select"},
	 io_timer_set{YType::boolean, "io-timer-set"},
	 locked{YType::boolean, "locked"},
	 not_interruptible{YType::boolean, "not-interruptible"},
	 out_of_band_select{YType::boolean, "out-of-band-select"},
	 output_select{YType::boolean, "output-select"},
	 waiting_for_data{YType::boolean, "waiting-for-data"},
	 waiting_for_lock{YType::boolean, "waiting-for-lock"},
	 wakeup{YType::boolean, "wakeup"}
{
    yang_name = "send-buf-state-flags"; yang_parent_name = "detail-information";
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags::~SendBufStateFlags()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags::has_data() const
{
    return async_io.is_set
	|| connect_wakeup.is_set
	|| delayed_wakeup.is_set
	|| input_select.is_set
	|| io_timer_set.is_set
	|| locked.is_set
	|| not_interruptible.is_set
	|| out_of_band_select.is_set
	|| output_select.is_set
	|| waiting_for_data.is_set
	|| waiting_for_lock.is_set
	|| wakeup.is_set;
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(async_io.operation)
	|| is_set(connect_wakeup.operation)
	|| is_set(delayed_wakeup.operation)
	|| is_set(input_select.operation)
	|| is_set(io_timer_set.operation)
	|| is_set(locked.operation)
	|| is_set(not_interruptible.operation)
	|| is_set(out_of_band_select.operation)
	|| is_set(output_select.operation)
	|| is_set(waiting_for_data.operation)
	|| is_set(waiting_for_lock.operation)
	|| is_set(wakeup.operation);
}

std::string TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-buf-state-flags";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags::get_entity_path(Entity* ancestor) const
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

    if (async_io.is_set || is_set(async_io.operation)) leaf_name_data.push_back(async_io.get_name_leafdata());
    if (connect_wakeup.is_set || is_set(connect_wakeup.operation)) leaf_name_data.push_back(connect_wakeup.get_name_leafdata());
    if (delayed_wakeup.is_set || is_set(delayed_wakeup.operation)) leaf_name_data.push_back(delayed_wakeup.get_name_leafdata());
    if (input_select.is_set || is_set(input_select.operation)) leaf_name_data.push_back(input_select.get_name_leafdata());
    if (io_timer_set.is_set || is_set(io_timer_set.operation)) leaf_name_data.push_back(io_timer_set.get_name_leafdata());
    if (locked.is_set || is_set(locked.operation)) leaf_name_data.push_back(locked.get_name_leafdata());
    if (not_interruptible.is_set || is_set(not_interruptible.operation)) leaf_name_data.push_back(not_interruptible.get_name_leafdata());
    if (out_of_band_select.is_set || is_set(out_of_band_select.operation)) leaf_name_data.push_back(out_of_band_select.get_name_leafdata());
    if (output_select.is_set || is_set(output_select.operation)) leaf_name_data.push_back(output_select.get_name_leafdata());
    if (waiting_for_data.is_set || is_set(waiting_for_data.operation)) leaf_name_data.push_back(waiting_for_data.get_name_leafdata());
    if (waiting_for_lock.is_set || is_set(waiting_for_lock.operation)) leaf_name_data.push_back(waiting_for_lock.get_name_leafdata());
    if (wakeup.is_set || is_set(wakeup.operation)) leaf_name_data.push_back(wakeup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "async-io")
    {
        async_io = value;
    }
    if(value_path == "connect-wakeup")
    {
        connect_wakeup = value;
    }
    if(value_path == "delayed-wakeup")
    {
        delayed_wakeup = value;
    }
    if(value_path == "input-select")
    {
        input_select = value;
    }
    if(value_path == "io-timer-set")
    {
        io_timer_set = value;
    }
    if(value_path == "locked")
    {
        locked = value;
    }
    if(value_path == "not-interruptible")
    {
        not_interruptible = value;
    }
    if(value_path == "out-of-band-select")
    {
        out_of_band_select = value;
    }
    if(value_path == "output-select")
    {
        output_select = value;
    }
    if(value_path == "waiting-for-data")
    {
        waiting_for_data = value;
    }
    if(value_path == "waiting-for-lock")
    {
        waiting_for_lock = value;
    }
    if(value_path == "wakeup")
    {
        wakeup = value;
    }
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer::Timer()
    :
    	timer_activations{YType::uint32, "timer-activations"},
	 timer_expirations{YType::uint32, "timer-expirations"},
	 timer_next_activation{YType::uint32, "timer-next-activation"},
	 timer_type{YType::enumeration, "timer-type"}
{
    yang_name = "timer"; yang_parent_name = "detail-information";
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer::~Timer()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer::has_data() const
{
    return timer_activations.is_set
	|| timer_expirations.is_set
	|| timer_next_activation.is_set
	|| timer_type.is_set;
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer::has_operation() const
{
    return is_set(operation)
	|| is_set(timer_activations.operation)
	|| is_set(timer_expirations.operation)
	|| is_set(timer_next_activation.operation)
	|| is_set(timer_type.operation);
}

std::string TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer::get_entity_path(Entity* ancestor) const
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

    if (timer_activations.is_set || is_set(timer_activations.operation)) leaf_name_data.push_back(timer_activations.get_name_leafdata());
    if (timer_expirations.is_set || is_set(timer_expirations.operation)) leaf_name_data.push_back(timer_expirations.get_name_leafdata());
    if (timer_next_activation.is_set || is_set(timer_next_activation.operation)) leaf_name_data.push_back(timer_next_activation.get_name_leafdata());
    if (timer_type.is_set || is_set(timer_type.operation)) leaf_name_data.push_back(timer_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timer-activations")
    {
        timer_activations = value;
    }
    if(value_path == "timer-expirations")
    {
        timer_expirations = value;
    }
    if(value_path == "timer-next-activation")
    {
        timer_next_activation = value;
    }
    if(value_path == "timer-type")
    {
        timer_type = value;
    }
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk::SackBlk()
    :
    	end{YType::uint32, "end"},
	 start{YType::uint32, "start"}
{
    yang_name = "sack-blk"; yang_parent_name = "detail-information";
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk::~SackBlk()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk::has_data() const
{
    return end.is_set
	|| start.is_set;
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk::has_operation() const
{
    return is_set(operation)
	|| is_set(end.operation)
	|| is_set(start.operation);
}

std::string TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sack-blk";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk::get_entity_path(Entity* ancestor) const
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

    if (end.is_set || is_set(end.operation)) leaf_name_data.push_back(end.get_name_leafdata());
    if (start.is_set || is_set(start.operation)) leaf_name_data.push_back(start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end")
    {
        end = value;
    }
    if(value_path == "start")
    {
        start = value;
    }
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole::SendSackHole()
    :
    	duplicated_ack{YType::uint32, "duplicated-ack"},
	 end{YType::uint32, "end"},
	 retransmitted{YType::uint32, "retransmitted"},
	 start{YType::uint32, "start"}
{
    yang_name = "send-sack-hole"; yang_parent_name = "detail-information";
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole::~SendSackHole()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole::has_data() const
{
    return duplicated_ack.is_set
	|| end.is_set
	|| retransmitted.is_set
	|| start.is_set;
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole::has_operation() const
{
    return is_set(operation)
	|| is_set(duplicated_ack.operation)
	|| is_set(end.operation)
	|| is_set(retransmitted.operation)
	|| is_set(start.operation);
}

std::string TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-sack-hole";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole::get_entity_path(Entity* ancestor) const
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

    if (duplicated_ack.is_set || is_set(duplicated_ack.operation)) leaf_name_data.push_back(duplicated_ack.get_name_leafdata());
    if (end.is_set || is_set(end.operation)) leaf_name_data.push_back(end.get_name_leafdata());
    if (retransmitted.is_set || is_set(retransmitted.operation)) leaf_name_data.push_back(retransmitted.get_name_leafdata());
    if (start.is_set || is_set(start.operation)) leaf_name_data.push_back(start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "duplicated-ack")
    {
        duplicated_ack = value;
    }
    if(value_path == "end")
    {
        end = value;
    }
    if(value_path == "retransmitted")
    {
        retransmitted = value;
    }
    if(value_path == "start")
    {
        start = value;
    }
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::DetailInformation()
    :
    	pcb_id{YType::uint32, "pcb-id"},
	 ack_hold_time{YType::uint32, "ack-hold-time"},
	 address_family{YType::enumeration, "address-family"},
	 connect_retries{YType::uint16, "connect-retries"},
	 connect_retry_interval{YType::uint16, "connect-retry-interval"},
	 connection_state{YType::enumeration, "connection-state"},
	 current_receive_queue_packet_size{YType::uint32, "current-receive-queue-packet-size"},
	 current_receive_queue_size{YType::uint32, "current-receive-queue-size"},
	 current_send_queue_size{YType::uint32, "current-send-queue-size"},
	 established_time{YType::uint32, "established-time"},
	 fib_label_output{YType::uint32, "fib-label-output"},
	 fib_pd_ctx{YType::uint32, "fib-pd-ctx"},
	 fib_pd_ctx_size{YType::uint32, "fib-pd-ctx-size"},
	 foreign_port{YType::uint16, "foreign-port"},
	 giveup_time{YType::uint32, "giveup-time"},
	 hash_index{YType::uint32, "hash-index"},
	 is_retrans_forever{YType::boolean, "is-retrans-forever"},
	 keep_alive_time{YType::uint32, "keep-alive-time"},
	 krtt{YType::uint32, "krtt"},
	 last_ack_sent{YType::uint32, "last-ack-sent"},
	 local_pid{YType::uint32, "local-pid"},
	 local_port{YType::uint16, "local-port"},
	 max_mss{YType::uint32, "max-mss"},
	 max_receive_queue_packet_size{YType::uint32, "max-receive-queue-packet-size"},
	 max_receive_queue_size{YType::uint32, "max-receive-queue-size"},
	 max_rtt{YType::uint32, "max-rtt"},
	 max_send_queue_size{YType::uint32, "max-send-queue-size"},
	 min_mss{YType::uint32, "min-mss"},
	 min_rtt{YType::uint32, "min-rtt"},
	 mss{YType::uint32, "mss"},
	 num_labels{YType::uint32, "num-labels"},
	 output_ifhandle{YType::uint32, "output-ifhandle"},
	 packet_priority{YType::enumeration, "packet-priority"},
	 packet_tos{YType::uint16, "packet-tos"},
	 packet_ttl{YType::uint16, "packet-ttl"},
	 pcb{YType::uint64, "pcb"},
	 peer_mss{YType::uint32, "peer-mss"},
	 receive_adv_window_size{YType::uint32, "receive-adv-window-size"},
	 receive_initial_sequence_num{YType::uint32, "receive-initial-sequence-num"},
	 receive_next_sequence_num{YType::uint32, "receive-next-sequence-num"},
	 receive_window_scale{YType::uint32, "receive-window-scale"},
	 receive_window_size{YType::uint32, "receive-window-size"},
	 recvbuf_hiwat{YType::uint32, "recvbuf-hiwat"},
	 recvbuf_lowwat{YType::uint32, "recvbuf-lowwat"},
	 request_receive_window_scale{YType::uint32, "request-receive-window-scale"},
	 retries{YType::uint32, "retries"},
	 rqst_send_wnd_scale{YType::uint32, "rqst-send-wnd-scale"},
	 rtto{YType::uint32, "rtto"},
	 rxsy_naclname{YType::str, "rxsy-naclname"},
	 save_queue_size{YType::uint32, "save-queue-size"},
	 send_congestion_window_size{YType::uint32, "send-congestion-window-size"},
	 send_initial_sequence_num{YType::uint32, "send-initial-sequence-num"},
	 send_max_sequence_num{YType::uint32, "send-max-sequence-num"},
	 send_next_sequence_num{YType::uint32, "send-next-sequence-num"},
	 send_pdu_count{YType::uint32, "send-pdu-count"},
	 send_unack_sequence_num{YType::uint32, "send-unack-sequence-num"},
	 send_window_scale{YType::uint32, "send-window-scale"},
	 send_window_size{YType::uint32, "send-window-size"},
	 sendbuf_hiwat{YType::uint32, "sendbuf-hiwat"},
	 sendbuf_lowwat{YType::uint32, "sendbuf-lowwat"},
	 sendbuf_notify_thresh{YType::uint32, "sendbuf-notify-thresh"},
	 so{YType::uint64, "so"},
	 sock_error{YType::int32, "sock-error"},
	 soft_error{YType::int32, "soft-error"},
	 srtt{YType::uint32, "srtt"},
	 srtv{YType::uint32, "srtv"},
	 syn_wait_time{YType::uint32, "syn-wait-time"},
	 tcpcb{YType::uint64, "tcpcb"},
	 time_stamp_recent{YType::uint32, "time-stamp-recent"},
	 time_stamp_recent_age{YType::uint32, "time-stamp-recent-age"},
	 vrf_id{YType::uint32, "vrf-id"}
    	,
    feature_flags(std::make_unique<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags>())
	,foreign_address(std::make_unique<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress>())
	,local_address(std::make_unique<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress>())
	,receive_buf_state_flags(std::make_unique<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags>())
	,request_flags(std::make_unique<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags>())
	,send_buf_state_flags(std::make_unique<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags>())
	,socket_option_flags(std::make_unique<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags>())
	,socket_state_flags(std::make_unique<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags>())
	,state_flags(std::make_unique<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags>())
{
    feature_flags->parent = this;
    children["feature-flags"] = feature_flags.get();

    foreign_address->parent = this;
    children["foreign-address"] = foreign_address.get();

    local_address->parent = this;
    children["local-address"] = local_address.get();

    receive_buf_state_flags->parent = this;
    children["receive-buf-state-flags"] = receive_buf_state_flags.get();

    request_flags->parent = this;
    children["request-flags"] = request_flags.get();

    send_buf_state_flags->parent = this;
    children["send-buf-state-flags"] = send_buf_state_flags.get();

    socket_option_flags->parent = this;
    children["socket-option-flags"] = socket_option_flags.get();

    socket_state_flags->parent = this;
    children["socket-state-flags"] = socket_state_flags.get();

    state_flags->parent = this;
    children["state-flags"] = state_flags.get();

    yang_name = "detail-information"; yang_parent_name = "detail-informations";
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformation::~DetailInformation()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::has_data() const
{
    for (std::size_t index=0; index<sack_blk.size(); index++)
    {
        if(sack_blk[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<send_sack_hole.size(); index++)
    {
        if(send_sack_hole[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<timer.size(); index++)
    {
        if(timer[index]->has_data())
            return true;
    }
    for (auto const & leaf : fib_label_output.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : fib_pd_ctx.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return pcb_id.is_set
	|| ack_hold_time.is_set
	|| address_family.is_set
	|| connect_retries.is_set
	|| connect_retry_interval.is_set
	|| connection_state.is_set
	|| current_receive_queue_packet_size.is_set
	|| current_receive_queue_size.is_set
	|| current_send_queue_size.is_set
	|| established_time.is_set
	|| fib_pd_ctx_size.is_set
	|| foreign_port.is_set
	|| giveup_time.is_set
	|| hash_index.is_set
	|| is_retrans_forever.is_set
	|| keep_alive_time.is_set
	|| krtt.is_set
	|| last_ack_sent.is_set
	|| local_pid.is_set
	|| local_port.is_set
	|| max_mss.is_set
	|| max_receive_queue_packet_size.is_set
	|| max_receive_queue_size.is_set
	|| max_rtt.is_set
	|| max_send_queue_size.is_set
	|| min_mss.is_set
	|| min_rtt.is_set
	|| mss.is_set
	|| num_labels.is_set
	|| output_ifhandle.is_set
	|| packet_priority.is_set
	|| packet_tos.is_set
	|| packet_ttl.is_set
	|| pcb.is_set
	|| peer_mss.is_set
	|| receive_adv_window_size.is_set
	|| receive_initial_sequence_num.is_set
	|| receive_next_sequence_num.is_set
	|| receive_window_scale.is_set
	|| receive_window_size.is_set
	|| recvbuf_hiwat.is_set
	|| recvbuf_lowwat.is_set
	|| request_receive_window_scale.is_set
	|| retries.is_set
	|| rqst_send_wnd_scale.is_set
	|| rtto.is_set
	|| rxsy_naclname.is_set
	|| save_queue_size.is_set
	|| send_congestion_window_size.is_set
	|| send_initial_sequence_num.is_set
	|| send_max_sequence_num.is_set
	|| send_next_sequence_num.is_set
	|| send_pdu_count.is_set
	|| send_unack_sequence_num.is_set
	|| send_window_scale.is_set
	|| send_window_size.is_set
	|| sendbuf_hiwat.is_set
	|| sendbuf_lowwat.is_set
	|| sendbuf_notify_thresh.is_set
	|| so.is_set
	|| sock_error.is_set
	|| soft_error.is_set
	|| srtt.is_set
	|| srtv.is_set
	|| syn_wait_time.is_set
	|| tcpcb.is_set
	|| time_stamp_recent.is_set
	|| time_stamp_recent_age.is_set
	|| vrf_id.is_set
	|| (feature_flags !=  nullptr && feature_flags->has_data())
	|| (foreign_address !=  nullptr && foreign_address->has_data())
	|| (local_address !=  nullptr && local_address->has_data())
	|| (receive_buf_state_flags !=  nullptr && receive_buf_state_flags->has_data())
	|| (request_flags !=  nullptr && request_flags->has_data())
	|| (send_buf_state_flags !=  nullptr && send_buf_state_flags->has_data())
	|| (socket_option_flags !=  nullptr && socket_option_flags->has_data())
	|| (socket_state_flags !=  nullptr && socket_state_flags->has_data())
	|| (state_flags !=  nullptr && state_flags->has_data());
}

bool TcpConnection::Nodes::Node::DetailInformations::DetailInformation::has_operation() const
{
    for (std::size_t index=0; index<sack_blk.size(); index++)
    {
        if(sack_blk[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<send_sack_hole.size(); index++)
    {
        if(send_sack_hole[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<timer.size(); index++)
    {
        if(timer[index]->has_operation())
            return true;
    }
    for (auto const & leaf : fib_label_output.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : fib_pd_ctx.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(pcb_id.operation)
	|| is_set(ack_hold_time.operation)
	|| is_set(address_family.operation)
	|| is_set(connect_retries.operation)
	|| is_set(connect_retry_interval.operation)
	|| is_set(connection_state.operation)
	|| is_set(current_receive_queue_packet_size.operation)
	|| is_set(current_receive_queue_size.operation)
	|| is_set(current_send_queue_size.operation)
	|| is_set(established_time.operation)
	|| is_set(fib_label_output.operation)
	|| is_set(fib_pd_ctx.operation)
	|| is_set(fib_pd_ctx_size.operation)
	|| is_set(foreign_port.operation)
	|| is_set(giveup_time.operation)
	|| is_set(hash_index.operation)
	|| is_set(is_retrans_forever.operation)
	|| is_set(keep_alive_time.operation)
	|| is_set(krtt.operation)
	|| is_set(last_ack_sent.operation)
	|| is_set(local_pid.operation)
	|| is_set(local_port.operation)
	|| is_set(max_mss.operation)
	|| is_set(max_receive_queue_packet_size.operation)
	|| is_set(max_receive_queue_size.operation)
	|| is_set(max_rtt.operation)
	|| is_set(max_send_queue_size.operation)
	|| is_set(min_mss.operation)
	|| is_set(min_rtt.operation)
	|| is_set(mss.operation)
	|| is_set(num_labels.operation)
	|| is_set(output_ifhandle.operation)
	|| is_set(packet_priority.operation)
	|| is_set(packet_tos.operation)
	|| is_set(packet_ttl.operation)
	|| is_set(pcb.operation)
	|| is_set(peer_mss.operation)
	|| is_set(receive_adv_window_size.operation)
	|| is_set(receive_initial_sequence_num.operation)
	|| is_set(receive_next_sequence_num.operation)
	|| is_set(receive_window_scale.operation)
	|| is_set(receive_window_size.operation)
	|| is_set(recvbuf_hiwat.operation)
	|| is_set(recvbuf_lowwat.operation)
	|| is_set(request_receive_window_scale.operation)
	|| is_set(retries.operation)
	|| is_set(rqst_send_wnd_scale.operation)
	|| is_set(rtto.operation)
	|| is_set(rxsy_naclname.operation)
	|| is_set(save_queue_size.operation)
	|| is_set(send_congestion_window_size.operation)
	|| is_set(send_initial_sequence_num.operation)
	|| is_set(send_max_sequence_num.operation)
	|| is_set(send_next_sequence_num.operation)
	|| is_set(send_pdu_count.operation)
	|| is_set(send_unack_sequence_num.operation)
	|| is_set(send_window_scale.operation)
	|| is_set(send_window_size.operation)
	|| is_set(sendbuf_hiwat.operation)
	|| is_set(sendbuf_lowwat.operation)
	|| is_set(sendbuf_notify_thresh.operation)
	|| is_set(so.operation)
	|| is_set(sock_error.operation)
	|| is_set(soft_error.operation)
	|| is_set(srtt.operation)
	|| is_set(srtv.operation)
	|| is_set(syn_wait_time.operation)
	|| is_set(tcpcb.operation)
	|| is_set(time_stamp_recent.operation)
	|| is_set(time_stamp_recent_age.operation)
	|| is_set(vrf_id.operation)
	|| (feature_flags !=  nullptr && feature_flags->has_operation())
	|| (foreign_address !=  nullptr && foreign_address->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (receive_buf_state_flags !=  nullptr && receive_buf_state_flags->has_operation())
	|| (request_flags !=  nullptr && request_flags->has_operation())
	|| (send_buf_state_flags !=  nullptr && send_buf_state_flags->has_operation())
	|| (socket_option_flags !=  nullptr && socket_option_flags->has_operation())
	|| (socket_state_flags !=  nullptr && socket_state_flags->has_operation())
	|| (state_flags !=  nullptr && state_flags->has_operation());
}

std::string TcpConnection::Nodes::Node::DetailInformations::DetailInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-information" <<"[pcb-id='" <<pcb_id.get() <<"']";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::DetailInformations::DetailInformation::get_entity_path(Entity* ancestor) const
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

    if (pcb_id.is_set || is_set(pcb_id.operation)) leaf_name_data.push_back(pcb_id.get_name_leafdata());
    if (ack_hold_time.is_set || is_set(ack_hold_time.operation)) leaf_name_data.push_back(ack_hold_time.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (connect_retries.is_set || is_set(connect_retries.operation)) leaf_name_data.push_back(connect_retries.get_name_leafdata());
    if (connect_retry_interval.is_set || is_set(connect_retry_interval.operation)) leaf_name_data.push_back(connect_retry_interval.get_name_leafdata());
    if (connection_state.is_set || is_set(connection_state.operation)) leaf_name_data.push_back(connection_state.get_name_leafdata());
    if (current_receive_queue_packet_size.is_set || is_set(current_receive_queue_packet_size.operation)) leaf_name_data.push_back(current_receive_queue_packet_size.get_name_leafdata());
    if (current_receive_queue_size.is_set || is_set(current_receive_queue_size.operation)) leaf_name_data.push_back(current_receive_queue_size.get_name_leafdata());
    if (current_send_queue_size.is_set || is_set(current_send_queue_size.operation)) leaf_name_data.push_back(current_send_queue_size.get_name_leafdata());
    if (established_time.is_set || is_set(established_time.operation)) leaf_name_data.push_back(established_time.get_name_leafdata());
    if (fib_pd_ctx_size.is_set || is_set(fib_pd_ctx_size.operation)) leaf_name_data.push_back(fib_pd_ctx_size.get_name_leafdata());
    if (foreign_port.is_set || is_set(foreign_port.operation)) leaf_name_data.push_back(foreign_port.get_name_leafdata());
    if (giveup_time.is_set || is_set(giveup_time.operation)) leaf_name_data.push_back(giveup_time.get_name_leafdata());
    if (hash_index.is_set || is_set(hash_index.operation)) leaf_name_data.push_back(hash_index.get_name_leafdata());
    if (is_retrans_forever.is_set || is_set(is_retrans_forever.operation)) leaf_name_data.push_back(is_retrans_forever.get_name_leafdata());
    if (keep_alive_time.is_set || is_set(keep_alive_time.operation)) leaf_name_data.push_back(keep_alive_time.get_name_leafdata());
    if (krtt.is_set || is_set(krtt.operation)) leaf_name_data.push_back(krtt.get_name_leafdata());
    if (last_ack_sent.is_set || is_set(last_ack_sent.operation)) leaf_name_data.push_back(last_ack_sent.get_name_leafdata());
    if (local_pid.is_set || is_set(local_pid.operation)) leaf_name_data.push_back(local_pid.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.operation)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (max_mss.is_set || is_set(max_mss.operation)) leaf_name_data.push_back(max_mss.get_name_leafdata());
    if (max_receive_queue_packet_size.is_set || is_set(max_receive_queue_packet_size.operation)) leaf_name_data.push_back(max_receive_queue_packet_size.get_name_leafdata());
    if (max_receive_queue_size.is_set || is_set(max_receive_queue_size.operation)) leaf_name_data.push_back(max_receive_queue_size.get_name_leafdata());
    if (max_rtt.is_set || is_set(max_rtt.operation)) leaf_name_data.push_back(max_rtt.get_name_leafdata());
    if (max_send_queue_size.is_set || is_set(max_send_queue_size.operation)) leaf_name_data.push_back(max_send_queue_size.get_name_leafdata());
    if (min_mss.is_set || is_set(min_mss.operation)) leaf_name_data.push_back(min_mss.get_name_leafdata());
    if (min_rtt.is_set || is_set(min_rtt.operation)) leaf_name_data.push_back(min_rtt.get_name_leafdata());
    if (mss.is_set || is_set(mss.operation)) leaf_name_data.push_back(mss.get_name_leafdata());
    if (num_labels.is_set || is_set(num_labels.operation)) leaf_name_data.push_back(num_labels.get_name_leafdata());
    if (output_ifhandle.is_set || is_set(output_ifhandle.operation)) leaf_name_data.push_back(output_ifhandle.get_name_leafdata());
    if (packet_priority.is_set || is_set(packet_priority.operation)) leaf_name_data.push_back(packet_priority.get_name_leafdata());
    if (packet_tos.is_set || is_set(packet_tos.operation)) leaf_name_data.push_back(packet_tos.get_name_leafdata());
    if (packet_ttl.is_set || is_set(packet_ttl.operation)) leaf_name_data.push_back(packet_ttl.get_name_leafdata());
    if (pcb.is_set || is_set(pcb.operation)) leaf_name_data.push_back(pcb.get_name_leafdata());
    if (peer_mss.is_set || is_set(peer_mss.operation)) leaf_name_data.push_back(peer_mss.get_name_leafdata());
    if (receive_adv_window_size.is_set || is_set(receive_adv_window_size.operation)) leaf_name_data.push_back(receive_adv_window_size.get_name_leafdata());
    if (receive_initial_sequence_num.is_set || is_set(receive_initial_sequence_num.operation)) leaf_name_data.push_back(receive_initial_sequence_num.get_name_leafdata());
    if (receive_next_sequence_num.is_set || is_set(receive_next_sequence_num.operation)) leaf_name_data.push_back(receive_next_sequence_num.get_name_leafdata());
    if (receive_window_scale.is_set || is_set(receive_window_scale.operation)) leaf_name_data.push_back(receive_window_scale.get_name_leafdata());
    if (receive_window_size.is_set || is_set(receive_window_size.operation)) leaf_name_data.push_back(receive_window_size.get_name_leafdata());
    if (recvbuf_hiwat.is_set || is_set(recvbuf_hiwat.operation)) leaf_name_data.push_back(recvbuf_hiwat.get_name_leafdata());
    if (recvbuf_lowwat.is_set || is_set(recvbuf_lowwat.operation)) leaf_name_data.push_back(recvbuf_lowwat.get_name_leafdata());
    if (request_receive_window_scale.is_set || is_set(request_receive_window_scale.operation)) leaf_name_data.push_back(request_receive_window_scale.get_name_leafdata());
    if (retries.is_set || is_set(retries.operation)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (rqst_send_wnd_scale.is_set || is_set(rqst_send_wnd_scale.operation)) leaf_name_data.push_back(rqst_send_wnd_scale.get_name_leafdata());
    if (rtto.is_set || is_set(rtto.operation)) leaf_name_data.push_back(rtto.get_name_leafdata());
    if (rxsy_naclname.is_set || is_set(rxsy_naclname.operation)) leaf_name_data.push_back(rxsy_naclname.get_name_leafdata());
    if (save_queue_size.is_set || is_set(save_queue_size.operation)) leaf_name_data.push_back(save_queue_size.get_name_leafdata());
    if (send_congestion_window_size.is_set || is_set(send_congestion_window_size.operation)) leaf_name_data.push_back(send_congestion_window_size.get_name_leafdata());
    if (send_initial_sequence_num.is_set || is_set(send_initial_sequence_num.operation)) leaf_name_data.push_back(send_initial_sequence_num.get_name_leafdata());
    if (send_max_sequence_num.is_set || is_set(send_max_sequence_num.operation)) leaf_name_data.push_back(send_max_sequence_num.get_name_leafdata());
    if (send_next_sequence_num.is_set || is_set(send_next_sequence_num.operation)) leaf_name_data.push_back(send_next_sequence_num.get_name_leafdata());
    if (send_pdu_count.is_set || is_set(send_pdu_count.operation)) leaf_name_data.push_back(send_pdu_count.get_name_leafdata());
    if (send_unack_sequence_num.is_set || is_set(send_unack_sequence_num.operation)) leaf_name_data.push_back(send_unack_sequence_num.get_name_leafdata());
    if (send_window_scale.is_set || is_set(send_window_scale.operation)) leaf_name_data.push_back(send_window_scale.get_name_leafdata());
    if (send_window_size.is_set || is_set(send_window_size.operation)) leaf_name_data.push_back(send_window_size.get_name_leafdata());
    if (sendbuf_hiwat.is_set || is_set(sendbuf_hiwat.operation)) leaf_name_data.push_back(sendbuf_hiwat.get_name_leafdata());
    if (sendbuf_lowwat.is_set || is_set(sendbuf_lowwat.operation)) leaf_name_data.push_back(sendbuf_lowwat.get_name_leafdata());
    if (sendbuf_notify_thresh.is_set || is_set(sendbuf_notify_thresh.operation)) leaf_name_data.push_back(sendbuf_notify_thresh.get_name_leafdata());
    if (so.is_set || is_set(so.operation)) leaf_name_data.push_back(so.get_name_leafdata());
    if (sock_error.is_set || is_set(sock_error.operation)) leaf_name_data.push_back(sock_error.get_name_leafdata());
    if (soft_error.is_set || is_set(soft_error.operation)) leaf_name_data.push_back(soft_error.get_name_leafdata());
    if (srtt.is_set || is_set(srtt.operation)) leaf_name_data.push_back(srtt.get_name_leafdata());
    if (srtv.is_set || is_set(srtv.operation)) leaf_name_data.push_back(srtv.get_name_leafdata());
    if (syn_wait_time.is_set || is_set(syn_wait_time.operation)) leaf_name_data.push_back(syn_wait_time.get_name_leafdata());
    if (tcpcb.is_set || is_set(tcpcb.operation)) leaf_name_data.push_back(tcpcb.get_name_leafdata());
    if (time_stamp_recent.is_set || is_set(time_stamp_recent.operation)) leaf_name_data.push_back(time_stamp_recent.get_name_leafdata());
    if (time_stamp_recent_age.is_set || is_set(time_stamp_recent_age.operation)) leaf_name_data.push_back(time_stamp_recent_age.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());

    auto fib_label_output_name_datas = fib_label_output.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fib_label_output_name_datas.begin(), fib_label_output_name_datas.end());
    auto fib_pd_ctx_name_datas = fib_pd_ctx.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fib_pd_ctx_name_datas.begin(), fib_pd_ctx_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::DetailInformations::DetailInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "feature-flags")
    {
        if(feature_flags != nullptr)
        {
            children["feature-flags"] = feature_flags.get();
        }
        else
        {
            feature_flags = std::make_unique<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::FeatureFlags>();
            feature_flags->parent = this;
            children["feature-flags"] = feature_flags.get();
        }
        return children.at("feature-flags");
    }

    if(child_yang_name == "foreign-address")
    {
        if(foreign_address != nullptr)
        {
            children["foreign-address"] = foreign_address.get();
        }
        else
        {
            foreign_address = std::make_unique<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ForeignAddress>();
            foreign_address->parent = this;
            children["foreign-address"] = foreign_address.get();
        }
        return children.at("foreign-address");
    }

    if(child_yang_name == "local-address")
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address.get();
        }
        else
        {
            local_address = std::make_unique<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::LocalAddress>();
            local_address->parent = this;
            children["local-address"] = local_address.get();
        }
        return children.at("local-address");
    }

    if(child_yang_name == "receive-buf-state-flags")
    {
        if(receive_buf_state_flags != nullptr)
        {
            children["receive-buf-state-flags"] = receive_buf_state_flags.get();
        }
        else
        {
            receive_buf_state_flags = std::make_unique<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::ReceiveBufStateFlags>();
            receive_buf_state_flags->parent = this;
            children["receive-buf-state-flags"] = receive_buf_state_flags.get();
        }
        return children.at("receive-buf-state-flags");
    }

    if(child_yang_name == "request-flags")
    {
        if(request_flags != nullptr)
        {
            children["request-flags"] = request_flags.get();
        }
        else
        {
            request_flags = std::make_unique<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::RequestFlags>();
            request_flags->parent = this;
            children["request-flags"] = request_flags.get();
        }
        return children.at("request-flags");
    }

    if(child_yang_name == "sack-blk")
    {
        for(auto const & c : sack_blk)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SackBlk>();
        c->parent = this;
        sack_blk.push_back(std::move(c));
        children[segment_path] = sack_blk.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "send-buf-state-flags")
    {
        if(send_buf_state_flags != nullptr)
        {
            children["send-buf-state-flags"] = send_buf_state_flags.get();
        }
        else
        {
            send_buf_state_flags = std::make_unique<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendBufStateFlags>();
            send_buf_state_flags->parent = this;
            children["send-buf-state-flags"] = send_buf_state_flags.get();
        }
        return children.at("send-buf-state-flags");
    }

    if(child_yang_name == "send-sack-hole")
    {
        for(auto const & c : send_sack_hole)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SendSackHole>();
        c->parent = this;
        send_sack_hole.push_back(std::move(c));
        children[segment_path] = send_sack_hole.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "socket-option-flags")
    {
        if(socket_option_flags != nullptr)
        {
            children["socket-option-flags"] = socket_option_flags.get();
        }
        else
        {
            socket_option_flags = std::make_unique<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketOptionFlags>();
            socket_option_flags->parent = this;
            children["socket-option-flags"] = socket_option_flags.get();
        }
        return children.at("socket-option-flags");
    }

    if(child_yang_name == "socket-state-flags")
    {
        if(socket_state_flags != nullptr)
        {
            children["socket-state-flags"] = socket_state_flags.get();
        }
        else
        {
            socket_state_flags = std::make_unique<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::SocketStateFlags>();
            socket_state_flags->parent = this;
            children["socket-state-flags"] = socket_state_flags.get();
        }
        return children.at("socket-state-flags");
    }

    if(child_yang_name == "state-flags")
    {
        if(state_flags != nullptr)
        {
            children["state-flags"] = state_flags.get();
        }
        else
        {
            state_flags = std::make_unique<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::StateFlags>();
            state_flags->parent = this;
            children["state-flags"] = state_flags.get();
        }
        return children.at("state-flags");
    }

    if(child_yang_name == "timer")
    {
        for(auto const & c : timer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TcpConnection::Nodes::Node::DetailInformations::DetailInformation::Timer>();
        c->parent = this;
        timer.push_back(std::move(c));
        children[segment_path] = timer.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::DetailInformations::DetailInformation::get_children()
{
    if(children.find("feature-flags") == children.end())
    {
        if(feature_flags != nullptr)
        {
            children["feature-flags"] = feature_flags.get();
        }
    }

    if(children.find("foreign-address") == children.end())
    {
        if(foreign_address != nullptr)
        {
            children["foreign-address"] = foreign_address.get();
        }
    }

    if(children.find("local-address") == children.end())
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address.get();
        }
    }

    if(children.find("receive-buf-state-flags") == children.end())
    {
        if(receive_buf_state_flags != nullptr)
        {
            children["receive-buf-state-flags"] = receive_buf_state_flags.get();
        }
    }

    if(children.find("request-flags") == children.end())
    {
        if(request_flags != nullptr)
        {
            children["request-flags"] = request_flags.get();
        }
    }

    for (auto const & c : sack_blk)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("send-buf-state-flags") == children.end())
    {
        if(send_buf_state_flags != nullptr)
        {
            children["send-buf-state-flags"] = send_buf_state_flags.get();
        }
    }

    for (auto const & c : send_sack_hole)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("socket-option-flags") == children.end())
    {
        if(socket_option_flags != nullptr)
        {
            children["socket-option-flags"] = socket_option_flags.get();
        }
    }

    if(children.find("socket-state-flags") == children.end())
    {
        if(socket_state_flags != nullptr)
        {
            children["socket-state-flags"] = socket_state_flags.get();
        }
    }

    if(children.find("state-flags") == children.end())
    {
        if(state_flags != nullptr)
        {
            children["state-flags"] = state_flags.get();
        }
    }

    for (auto const & c : timer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::DetailInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pcb-id")
    {
        pcb_id = value;
    }
    if(value_path == "ack-hold-time")
    {
        ack_hold_time = value;
    }
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "connect-retries")
    {
        connect_retries = value;
    }
    if(value_path == "connect-retry-interval")
    {
        connect_retry_interval = value;
    }
    if(value_path == "connection-state")
    {
        connection_state = value;
    }
    if(value_path == "current-receive-queue-packet-size")
    {
        current_receive_queue_packet_size = value;
    }
    if(value_path == "current-receive-queue-size")
    {
        current_receive_queue_size = value;
    }
    if(value_path == "current-send-queue-size")
    {
        current_send_queue_size = value;
    }
    if(value_path == "established-time")
    {
        established_time = value;
    }
    if(value_path == "fib-label-output")
    {
        fib_label_output.append(value);
    }
    if(value_path == "fib-pd-ctx")
    {
        fib_pd_ctx.append(value);
    }
    if(value_path == "fib-pd-ctx-size")
    {
        fib_pd_ctx_size = value;
    }
    if(value_path == "foreign-port")
    {
        foreign_port = value;
    }
    if(value_path == "giveup-time")
    {
        giveup_time = value;
    }
    if(value_path == "hash-index")
    {
        hash_index = value;
    }
    if(value_path == "is-retrans-forever")
    {
        is_retrans_forever = value;
    }
    if(value_path == "keep-alive-time")
    {
        keep_alive_time = value;
    }
    if(value_path == "krtt")
    {
        krtt = value;
    }
    if(value_path == "last-ack-sent")
    {
        last_ack_sent = value;
    }
    if(value_path == "local-pid")
    {
        local_pid = value;
    }
    if(value_path == "local-port")
    {
        local_port = value;
    }
    if(value_path == "max-mss")
    {
        max_mss = value;
    }
    if(value_path == "max-receive-queue-packet-size")
    {
        max_receive_queue_packet_size = value;
    }
    if(value_path == "max-receive-queue-size")
    {
        max_receive_queue_size = value;
    }
    if(value_path == "max-rtt")
    {
        max_rtt = value;
    }
    if(value_path == "max-send-queue-size")
    {
        max_send_queue_size = value;
    }
    if(value_path == "min-mss")
    {
        min_mss = value;
    }
    if(value_path == "min-rtt")
    {
        min_rtt = value;
    }
    if(value_path == "mss")
    {
        mss = value;
    }
    if(value_path == "num-labels")
    {
        num_labels = value;
    }
    if(value_path == "output-ifhandle")
    {
        output_ifhandle = value;
    }
    if(value_path == "packet-priority")
    {
        packet_priority = value;
    }
    if(value_path == "packet-tos")
    {
        packet_tos = value;
    }
    if(value_path == "packet-ttl")
    {
        packet_ttl = value;
    }
    if(value_path == "pcb")
    {
        pcb = value;
    }
    if(value_path == "peer-mss")
    {
        peer_mss = value;
    }
    if(value_path == "receive-adv-window-size")
    {
        receive_adv_window_size = value;
    }
    if(value_path == "receive-initial-sequence-num")
    {
        receive_initial_sequence_num = value;
    }
    if(value_path == "receive-next-sequence-num")
    {
        receive_next_sequence_num = value;
    }
    if(value_path == "receive-window-scale")
    {
        receive_window_scale = value;
    }
    if(value_path == "receive-window-size")
    {
        receive_window_size = value;
    }
    if(value_path == "recvbuf-hiwat")
    {
        recvbuf_hiwat = value;
    }
    if(value_path == "recvbuf-lowwat")
    {
        recvbuf_lowwat = value;
    }
    if(value_path == "request-receive-window-scale")
    {
        request_receive_window_scale = value;
    }
    if(value_path == "retries")
    {
        retries = value;
    }
    if(value_path == "rqst-send-wnd-scale")
    {
        rqst_send_wnd_scale = value;
    }
    if(value_path == "rtto")
    {
        rtto = value;
    }
    if(value_path == "rxsy-naclname")
    {
        rxsy_naclname = value;
    }
    if(value_path == "save-queue-size")
    {
        save_queue_size = value;
    }
    if(value_path == "send-congestion-window-size")
    {
        send_congestion_window_size = value;
    }
    if(value_path == "send-initial-sequence-num")
    {
        send_initial_sequence_num = value;
    }
    if(value_path == "send-max-sequence-num")
    {
        send_max_sequence_num = value;
    }
    if(value_path == "send-next-sequence-num")
    {
        send_next_sequence_num = value;
    }
    if(value_path == "send-pdu-count")
    {
        send_pdu_count = value;
    }
    if(value_path == "send-unack-sequence-num")
    {
        send_unack_sequence_num = value;
    }
    if(value_path == "send-window-scale")
    {
        send_window_scale = value;
    }
    if(value_path == "send-window-size")
    {
        send_window_size = value;
    }
    if(value_path == "sendbuf-hiwat")
    {
        sendbuf_hiwat = value;
    }
    if(value_path == "sendbuf-lowwat")
    {
        sendbuf_lowwat = value;
    }
    if(value_path == "sendbuf-notify-thresh")
    {
        sendbuf_notify_thresh = value;
    }
    if(value_path == "so")
    {
        so = value;
    }
    if(value_path == "sock-error")
    {
        sock_error = value;
    }
    if(value_path == "soft-error")
    {
        soft_error = value;
    }
    if(value_path == "srtt")
    {
        srtt = value;
    }
    if(value_path == "srtv")
    {
        srtv = value;
    }
    if(value_path == "syn-wait-time")
    {
        syn_wait_time = value;
    }
    if(value_path == "tcpcb")
    {
        tcpcb = value;
    }
    if(value_path == "time-stamp-recent")
    {
        time_stamp_recent = value;
    }
    if(value_path == "time-stamp-recent-age")
    {
        time_stamp_recent_age = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
}

TcpConnection::Nodes::Node::DetailInformations::DetailInformations()
{
    yang_name = "detail-informations"; yang_parent_name = "node";
}

TcpConnection::Nodes::Node::DetailInformations::~DetailInformations()
{
}

bool TcpConnection::Nodes::Node::DetailInformations::has_data() const
{
    for (std::size_t index=0; index<detail_information.size(); index++)
    {
        if(detail_information[index]->has_data())
            return true;
    }
    return false;
}

bool TcpConnection::Nodes::Node::DetailInformations::has_operation() const
{
    for (std::size_t index=0; index<detail_information.size(); index++)
    {
        if(detail_information[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TcpConnection::Nodes::Node::DetailInformations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-informations";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::DetailInformations::get_entity_path(Entity* ancestor) const
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

Entity* TcpConnection::Nodes::Node::DetailInformations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail-information")
    {
        for(auto const & c : detail_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TcpConnection::Nodes::Node::DetailInformations::DetailInformation>();
        c->parent = this;
        detail_information.push_back(std::move(c));
        children[segment_path] = detail_information.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::DetailInformations::get_children()
{
    for (auto const & c : detail_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TcpConnection::Nodes::Node::DetailInformations::set_value(const std::string & value_path, std::string value)
{
}

TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress::LocalAddress()
    :
    	af_name{YType::enumeration, "af-name"},
	 ipv4_address{YType::str, "ipv4-address"},
	 ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "local-address"; yang_parent_name = "brief-information";
}

TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress::~LocalAddress()
{
}

bool TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress::ForeignAddress()
    :
    	af_name{YType::enumeration, "af-name"},
	 ipv4_address{YType::str, "ipv4-address"},
	 ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "foreign-address"; yang_parent_name = "brief-information";
}

TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress::~ForeignAddress()
{
}

bool TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign-address";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress::get_children()
{
    return children;
}

void TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

TcpConnection::Nodes::Node::BriefInformations::BriefInformation::BriefInformation()
    :
    	pcb_id{YType::uint32, "pcb-id"},
	 af_name{YType::enumeration, "af-name"},
	 connection_state{YType::enumeration, "connection-state"},
	 current_receive_queue_size{YType::uint32, "current-receive-queue-size"},
	 current_send_queue_size{YType::uint32, "current-send-queue-size"},
	 foreign_port{YType::uint16, "foreign-port"},
	 local_pid{YType::uint32, "local-pid"},
	 local_port{YType::uint16, "local-port"},
	 pcb{YType::uint64, "pcb"},
	 vrf_id{YType::uint32, "vrf-id"}
    	,
    foreign_address(std::make_unique<TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress>())
	,local_address(std::make_unique<TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress>())
{
    foreign_address->parent = this;
    children["foreign-address"] = foreign_address.get();

    local_address->parent = this;
    children["local-address"] = local_address.get();

    yang_name = "brief-information"; yang_parent_name = "brief-informations";
}

TcpConnection::Nodes::Node::BriefInformations::BriefInformation::~BriefInformation()
{
}

bool TcpConnection::Nodes::Node::BriefInformations::BriefInformation::has_data() const
{
    return pcb_id.is_set
	|| af_name.is_set
	|| connection_state.is_set
	|| current_receive_queue_size.is_set
	|| current_send_queue_size.is_set
	|| foreign_port.is_set
	|| local_pid.is_set
	|| local_port.is_set
	|| pcb.is_set
	|| vrf_id.is_set
	|| (foreign_address !=  nullptr && foreign_address->has_data())
	|| (local_address !=  nullptr && local_address->has_data());
}

bool TcpConnection::Nodes::Node::BriefInformations::BriefInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(pcb_id.operation)
	|| is_set(af_name.operation)
	|| is_set(connection_state.operation)
	|| is_set(current_receive_queue_size.operation)
	|| is_set(current_send_queue_size.operation)
	|| is_set(foreign_port.operation)
	|| is_set(local_pid.operation)
	|| is_set(local_port.operation)
	|| is_set(pcb.operation)
	|| is_set(vrf_id.operation)
	|| (foreign_address !=  nullptr && foreign_address->has_operation())
	|| (local_address !=  nullptr && local_address->has_operation());
}

std::string TcpConnection::Nodes::Node::BriefInformations::BriefInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-information" <<"[pcb-id='" <<pcb_id.get() <<"']";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::BriefInformations::BriefInformation::get_entity_path(Entity* ancestor) const
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

    if (pcb_id.is_set || is_set(pcb_id.operation)) leaf_name_data.push_back(pcb_id.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (connection_state.is_set || is_set(connection_state.operation)) leaf_name_data.push_back(connection_state.get_name_leafdata());
    if (current_receive_queue_size.is_set || is_set(current_receive_queue_size.operation)) leaf_name_data.push_back(current_receive_queue_size.get_name_leafdata());
    if (current_send_queue_size.is_set || is_set(current_send_queue_size.operation)) leaf_name_data.push_back(current_send_queue_size.get_name_leafdata());
    if (foreign_port.is_set || is_set(foreign_port.operation)) leaf_name_data.push_back(foreign_port.get_name_leafdata());
    if (local_pid.is_set || is_set(local_pid.operation)) leaf_name_data.push_back(local_pid.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.operation)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (pcb.is_set || is_set(pcb.operation)) leaf_name_data.push_back(pcb.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::BriefInformations::BriefInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "foreign-address")
    {
        if(foreign_address != nullptr)
        {
            children["foreign-address"] = foreign_address.get();
        }
        else
        {
            foreign_address = std::make_unique<TcpConnection::Nodes::Node::BriefInformations::BriefInformation::ForeignAddress>();
            foreign_address->parent = this;
            children["foreign-address"] = foreign_address.get();
        }
        return children.at("foreign-address");
    }

    if(child_yang_name == "local-address")
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address.get();
        }
        else
        {
            local_address = std::make_unique<TcpConnection::Nodes::Node::BriefInformations::BriefInformation::LocalAddress>();
            local_address->parent = this;
            children["local-address"] = local_address.get();
        }
        return children.at("local-address");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::BriefInformations::BriefInformation::get_children()
{
    if(children.find("foreign-address") == children.end())
    {
        if(foreign_address != nullptr)
        {
            children["foreign-address"] = foreign_address.get();
        }
    }

    if(children.find("local-address") == children.end())
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address.get();
        }
    }

    return children;
}

void TcpConnection::Nodes::Node::BriefInformations::BriefInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pcb-id")
    {
        pcb_id = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "connection-state")
    {
        connection_state = value;
    }
    if(value_path == "current-receive-queue-size")
    {
        current_receive_queue_size = value;
    }
    if(value_path == "current-send-queue-size")
    {
        current_send_queue_size = value;
    }
    if(value_path == "foreign-port")
    {
        foreign_port = value;
    }
    if(value_path == "local-pid")
    {
        local_pid = value;
    }
    if(value_path == "local-port")
    {
        local_port = value;
    }
    if(value_path == "pcb")
    {
        pcb = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
}

TcpConnection::Nodes::Node::BriefInformations::BriefInformations()
{
    yang_name = "brief-informations"; yang_parent_name = "node";
}

TcpConnection::Nodes::Node::BriefInformations::~BriefInformations()
{
}

bool TcpConnection::Nodes::Node::BriefInformations::has_data() const
{
    for (std::size_t index=0; index<brief_information.size(); index++)
    {
        if(brief_information[index]->has_data())
            return true;
    }
    return false;
}

bool TcpConnection::Nodes::Node::BriefInformations::has_operation() const
{
    for (std::size_t index=0; index<brief_information.size(); index++)
    {
        if(brief_information[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TcpConnection::Nodes::Node::BriefInformations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-informations";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::BriefInformations::get_entity_path(Entity* ancestor) const
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

Entity* TcpConnection::Nodes::Node::BriefInformations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "brief-information")
    {
        for(auto const & c : brief_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TcpConnection::Nodes::Node::BriefInformations::BriefInformation>();
        c->parent = this;
        brief_information.push_back(std::move(c));
        children[segment_path] = brief_information.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::BriefInformations::get_children()
{
    for (auto const & c : brief_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TcpConnection::Nodes::Node::BriefInformations::set_value(const std::string & value_path, std::string value)
{
}

TcpConnection::Nodes::Node::Node()
    :
    	id{YType::str, "id"}
    	,
    brief_informations(std::make_unique<TcpConnection::Nodes::Node::BriefInformations>())
	,detail_informations(std::make_unique<TcpConnection::Nodes::Node::DetailInformations>())
	,extended_information(std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation>())
	,statistics(std::make_unique<TcpConnection::Nodes::Node::Statistics>())
{
    brief_informations->parent = this;
    children["brief-informations"] = brief_informations.get();

    detail_informations->parent = this;
    children["detail-informations"] = detail_informations.get();

    extended_information->parent = this;
    children["extended-information"] = extended_information.get();

    statistics->parent = this;
    children["statistics"] = statistics.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

TcpConnection::Nodes::Node::~Node()
{
}

bool TcpConnection::Nodes::Node::has_data() const
{
    return id.is_set
	|| (brief_informations !=  nullptr && brief_informations->has_data())
	|| (detail_informations !=  nullptr && detail_informations->has_data())
	|| (extended_information !=  nullptr && extended_information->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool TcpConnection::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (brief_informations !=  nullptr && brief_informations->has_operation())
	|| (detail_informations !=  nullptr && detail_informations->has_operation())
	|| (extended_information !=  nullptr && extended_information->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string TcpConnection::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[id='" <<id.get() <<"']";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-tcp-oper:tcp-connection/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "brief-informations")
    {
        if(brief_informations != nullptr)
        {
            children["brief-informations"] = brief_informations.get();
        }
        else
        {
            brief_informations = std::make_unique<TcpConnection::Nodes::Node::BriefInformations>();
            brief_informations->parent = this;
            children["brief-informations"] = brief_informations.get();
        }
        return children.at("brief-informations");
    }

    if(child_yang_name == "detail-informations")
    {
        if(detail_informations != nullptr)
        {
            children["detail-informations"] = detail_informations.get();
        }
        else
        {
            detail_informations = std::make_unique<TcpConnection::Nodes::Node::DetailInformations>();
            detail_informations->parent = this;
            children["detail-informations"] = detail_informations.get();
        }
        return children.at("detail-informations");
    }

    if(child_yang_name == "extended-information")
    {
        if(extended_information != nullptr)
        {
            children["extended-information"] = extended_information.get();
        }
        else
        {
            extended_information = std::make_unique<TcpConnection::Nodes::Node::ExtendedInformation>();
            extended_information->parent = this;
            children["extended-information"] = extended_information.get();
        }
        return children.at("extended-information");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
        else
        {
            statistics = std::make_unique<TcpConnection::Nodes::Node::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics.get();
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpConnection::Nodes::Node::get_children()
{
    if(children.find("brief-informations") == children.end())
    {
        if(brief_informations != nullptr)
        {
            children["brief-informations"] = brief_informations.get();
        }
    }

    if(children.find("detail-informations") == children.end())
    {
        if(detail_informations != nullptr)
        {
            children["detail-informations"] = detail_informations.get();
        }
    }

    if(children.find("extended-information") == children.end())
    {
        if(extended_information != nullptr)
        {
            children["extended-information"] = extended_information.get();
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
    }

    return children;
}

void TcpConnection::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

TcpConnection::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "tcp-connection";
}

TcpConnection::Nodes::~Nodes()
{
}

bool TcpConnection::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool TcpConnection::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TcpConnection::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath TcpConnection::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-tcp-oper:tcp-connection/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpConnection::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TcpConnection::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpConnection::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TcpConnection::Nodes::set_value(const std::string & value_path, std::string value)
{
}

TcpConnection::TcpConnection()
    :
    nodes(std::make_unique<TcpConnection::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "tcp-connection"; yang_parent_name = "Cisco-IOS-XR-ip-tcp-oper";
}

TcpConnection::~TcpConnection()
{
}

bool TcpConnection::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool TcpConnection::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string TcpConnection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-tcp-oper:tcp-connection";

    return path_buffer.str();

}

EntityPath TcpConnection::get_entity_path(Entity* ancestor) const
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

Entity* TcpConnection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<TcpConnection::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpConnection::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void TcpConnection::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> TcpConnection::clone_ptr()
{
    return std::make_unique<TcpConnection>();
}
Tcp::Nodes::Node::Statistics::Ipv4Traffic::Ipv4Traffic()
    :
    	tcp_checksum_error_packets{YType::uint32, "tcp-checksum-error-packets"},
	 tcp_dropped_packets{YType::uint32, "tcp-dropped-packets"},
	 tcp_input_packets{YType::uint32, "tcp-input-packets"},
	 tcp_output_packets{YType::uint32, "tcp-output-packets"},
	 tcp_retransmitted_packets{YType::uint32, "tcp-retransmitted-packets"}
{
    yang_name = "ipv4-traffic"; yang_parent_name = "statistics";
}

Tcp::Nodes::Node::Statistics::Ipv4Traffic::~Ipv4Traffic()
{
}

bool Tcp::Nodes::Node::Statistics::Ipv4Traffic::has_data() const
{
    return tcp_checksum_error_packets.is_set
	|| tcp_dropped_packets.is_set
	|| tcp_input_packets.is_set
	|| tcp_output_packets.is_set
	|| tcp_retransmitted_packets.is_set;
}

bool Tcp::Nodes::Node::Statistics::Ipv4Traffic::has_operation() const
{
    return is_set(operation)
	|| is_set(tcp_checksum_error_packets.operation)
	|| is_set(tcp_dropped_packets.operation)
	|| is_set(tcp_input_packets.operation)
	|| is_set(tcp_output_packets.operation)
	|| is_set(tcp_retransmitted_packets.operation);
}

std::string Tcp::Nodes::Node::Statistics::Ipv4Traffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-traffic";

    return path_buffer.str();

}

EntityPath Tcp::Nodes::Node::Statistics::Ipv4Traffic::get_entity_path(Entity* ancestor) const
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

    if (tcp_checksum_error_packets.is_set || is_set(tcp_checksum_error_packets.operation)) leaf_name_data.push_back(tcp_checksum_error_packets.get_name_leafdata());
    if (tcp_dropped_packets.is_set || is_set(tcp_dropped_packets.operation)) leaf_name_data.push_back(tcp_dropped_packets.get_name_leafdata());
    if (tcp_input_packets.is_set || is_set(tcp_input_packets.operation)) leaf_name_data.push_back(tcp_input_packets.get_name_leafdata());
    if (tcp_output_packets.is_set || is_set(tcp_output_packets.operation)) leaf_name_data.push_back(tcp_output_packets.get_name_leafdata());
    if (tcp_retransmitted_packets.is_set || is_set(tcp_retransmitted_packets.operation)) leaf_name_data.push_back(tcp_retransmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Tcp::Nodes::Node::Statistics::Ipv4Traffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Tcp::Nodes::Node::Statistics::Ipv4Traffic::get_children()
{
    return children;
}

void Tcp::Nodes::Node::Statistics::Ipv4Traffic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tcp-checksum-error-packets")
    {
        tcp_checksum_error_packets = value;
    }
    if(value_path == "tcp-dropped-packets")
    {
        tcp_dropped_packets = value;
    }
    if(value_path == "tcp-input-packets")
    {
        tcp_input_packets = value;
    }
    if(value_path == "tcp-output-packets")
    {
        tcp_output_packets = value;
    }
    if(value_path == "tcp-retransmitted-packets")
    {
        tcp_retransmitted_packets = value;
    }
}

Tcp::Nodes::Node::Statistics::Ipv6Traffic::Ipv6Traffic()
    :
    	tcp_checksum_error_packets{YType::uint32, "tcp-checksum-error-packets"},
	 tcp_dropped_packets{YType::uint32, "tcp-dropped-packets"},
	 tcp_input_packets{YType::uint32, "tcp-input-packets"},
	 tcp_output_packets{YType::uint32, "tcp-output-packets"},
	 tcp_retransmitted_packets{YType::uint32, "tcp-retransmitted-packets"}
{
    yang_name = "ipv6-traffic"; yang_parent_name = "statistics";
}

Tcp::Nodes::Node::Statistics::Ipv6Traffic::~Ipv6Traffic()
{
}

bool Tcp::Nodes::Node::Statistics::Ipv6Traffic::has_data() const
{
    return tcp_checksum_error_packets.is_set
	|| tcp_dropped_packets.is_set
	|| tcp_input_packets.is_set
	|| tcp_output_packets.is_set
	|| tcp_retransmitted_packets.is_set;
}

bool Tcp::Nodes::Node::Statistics::Ipv6Traffic::has_operation() const
{
    return is_set(operation)
	|| is_set(tcp_checksum_error_packets.operation)
	|| is_set(tcp_dropped_packets.operation)
	|| is_set(tcp_input_packets.operation)
	|| is_set(tcp_output_packets.operation)
	|| is_set(tcp_retransmitted_packets.operation);
}

std::string Tcp::Nodes::Node::Statistics::Ipv6Traffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-traffic";

    return path_buffer.str();

}

EntityPath Tcp::Nodes::Node::Statistics::Ipv6Traffic::get_entity_path(Entity* ancestor) const
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

    if (tcp_checksum_error_packets.is_set || is_set(tcp_checksum_error_packets.operation)) leaf_name_data.push_back(tcp_checksum_error_packets.get_name_leafdata());
    if (tcp_dropped_packets.is_set || is_set(tcp_dropped_packets.operation)) leaf_name_data.push_back(tcp_dropped_packets.get_name_leafdata());
    if (tcp_input_packets.is_set || is_set(tcp_input_packets.operation)) leaf_name_data.push_back(tcp_input_packets.get_name_leafdata());
    if (tcp_output_packets.is_set || is_set(tcp_output_packets.operation)) leaf_name_data.push_back(tcp_output_packets.get_name_leafdata());
    if (tcp_retransmitted_packets.is_set || is_set(tcp_retransmitted_packets.operation)) leaf_name_data.push_back(tcp_retransmitted_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Tcp::Nodes::Node::Statistics::Ipv6Traffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Tcp::Nodes::Node::Statistics::Ipv6Traffic::get_children()
{
    return children;
}

void Tcp::Nodes::Node::Statistics::Ipv6Traffic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tcp-checksum-error-packets")
    {
        tcp_checksum_error_packets = value;
    }
    if(value_path == "tcp-dropped-packets")
    {
        tcp_dropped_packets = value;
    }
    if(value_path == "tcp-input-packets")
    {
        tcp_input_packets = value;
    }
    if(value_path == "tcp-output-packets")
    {
        tcp_output_packets = value;
    }
    if(value_path == "tcp-retransmitted-packets")
    {
        tcp_retransmitted_packets = value;
    }
}

Tcp::Nodes::Node::Statistics::Statistics()
    :
    ipv4_traffic(std::make_unique<Tcp::Nodes::Node::Statistics::Ipv4Traffic>())
	,ipv6_traffic(std::make_unique<Tcp::Nodes::Node::Statistics::Ipv6Traffic>())
{
    ipv4_traffic->parent = this;
    children["ipv4-traffic"] = ipv4_traffic.get();

    ipv6_traffic->parent = this;
    children["ipv6-traffic"] = ipv6_traffic.get();

    yang_name = "statistics"; yang_parent_name = "node";
}

Tcp::Nodes::Node::Statistics::~Statistics()
{
}

bool Tcp::Nodes::Node::Statistics::has_data() const
{
    return (ipv4_traffic !=  nullptr && ipv4_traffic->has_data())
	|| (ipv6_traffic !=  nullptr && ipv6_traffic->has_data());
}

bool Tcp::Nodes::Node::Statistics::has_operation() const
{
    return is_set(operation)
	|| (ipv4_traffic !=  nullptr && ipv4_traffic->has_operation())
	|| (ipv6_traffic !=  nullptr && ipv6_traffic->has_operation());
}

std::string Tcp::Nodes::Node::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath Tcp::Nodes::Node::Statistics::get_entity_path(Entity* ancestor) const
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

Entity* Tcp::Nodes::Node::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-traffic")
    {
        if(ipv4_traffic != nullptr)
        {
            children["ipv4-traffic"] = ipv4_traffic.get();
        }
        else
        {
            ipv4_traffic = std::make_unique<Tcp::Nodes::Node::Statistics::Ipv4Traffic>();
            ipv4_traffic->parent = this;
            children["ipv4-traffic"] = ipv4_traffic.get();
        }
        return children.at("ipv4-traffic");
    }

    if(child_yang_name == "ipv6-traffic")
    {
        if(ipv6_traffic != nullptr)
        {
            children["ipv6-traffic"] = ipv6_traffic.get();
        }
        else
        {
            ipv6_traffic = std::make_unique<Tcp::Nodes::Node::Statistics::Ipv6Traffic>();
            ipv6_traffic->parent = this;
            children["ipv6-traffic"] = ipv6_traffic.get();
        }
        return children.at("ipv6-traffic");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Tcp::Nodes::Node::Statistics::get_children()
{
    if(children.find("ipv4-traffic") == children.end())
    {
        if(ipv4_traffic != nullptr)
        {
            children["ipv4-traffic"] = ipv4_traffic.get();
        }
    }

    if(children.find("ipv6-traffic") == children.end())
    {
        if(ipv6_traffic != nullptr)
        {
            children["ipv6-traffic"] = ipv6_traffic.get();
        }
    }

    return children;
}

void Tcp::Nodes::Node::Statistics::set_value(const std::string & value_path, std::string value)
{
}

Tcp::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    statistics(std::make_unique<Tcp::Nodes::Node::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

Tcp::Nodes::Node::~Node()
{
}

bool Tcp::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Tcp::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Tcp::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Tcp::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-tcp-oper:tcp/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Tcp::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
        else
        {
            statistics = std::make_unique<Tcp::Nodes::Node::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics.get();
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Tcp::Nodes::Node::get_children()
{
    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
    }

    return children;
}

void Tcp::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Tcp::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "tcp";
}

Tcp::Nodes::~Nodes()
{
}

bool Tcp::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Tcp::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Tcp::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Tcp::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-tcp-oper:tcp/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Tcp::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Tcp::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Tcp::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Tcp::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Tcp::Tcp()
    :
    nodes(std::make_unique<Tcp::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "tcp"; yang_parent_name = "Cisco-IOS-XR-ip-tcp-oper";
}

Tcp::~Tcp()
{
}

bool Tcp::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Tcp::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-tcp-oper:tcp";

    return path_buffer.str();

}

EntityPath Tcp::get_entity_path(Entity* ancestor) const
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

Entity* Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<Tcp::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Tcp::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void Tcp::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Tcp::clone_ptr()
{
    return std::make_unique<Tcp>();
}
TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession::BriefSession()
    :
    	id{YType::str, "id"},
	 address_family{YType::enumeration, "address-family"},
	 foreign_address{YType::str, "foreign-address"},
	 foreign_port{YType::uint16, "foreign-port"},
	 is_admin_configured_up{YType::boolean, "is-admin-configured-up"},
	 is_ds_operational_up{YType::enumeration, "is-ds-operational-up"},
	 is_only_receive_path_replication{YType::boolean, "is-only-receive-path-replication"},
	 is_us_operational_up{YType::enumeration, "is-us-operational-up"},
	 local_address{YType::str, "local-address"},
	 local_port{YType::uint16, "local-port"},
	 pcb{YType::uint64, "pcb"},
	 sscb{YType::uint64, "sscb"},
	 vrf_id{YType::uint32, "vrf-id"}
{
    yang_name = "brief-session"; yang_parent_name = "brief-sessions";
}

TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession::~BriefSession()
{
}

bool TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession::has_data() const
{
    for (auto const & leaf : foreign_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : local_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set
	|| address_family.is_set
	|| foreign_port.is_set
	|| is_admin_configured_up.is_set
	|| is_ds_operational_up.is_set
	|| is_only_receive_path_replication.is_set
	|| is_us_operational_up.is_set
	|| local_port.is_set
	|| pcb.is_set
	|| sscb.is_set
	|| vrf_id.is_set;
}

bool TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession::has_operation() const
{
    for (auto const & leaf : foreign_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : local_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(address_family.operation)
	|| is_set(foreign_address.operation)
	|| is_set(foreign_port.operation)
	|| is_set(is_admin_configured_up.operation)
	|| is_set(is_ds_operational_up.operation)
	|| is_set(is_only_receive_path_replication.operation)
	|| is_set(is_us_operational_up.operation)
	|| is_set(local_address.operation)
	|| is_set(local_port.operation)
	|| is_set(pcb.operation)
	|| is_set(sscb.operation)
	|| is_set(vrf_id.operation);
}

std::string TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-session" <<"[id='" <<id.get() <<"']";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (foreign_port.is_set || is_set(foreign_port.operation)) leaf_name_data.push_back(foreign_port.get_name_leafdata());
    if (is_admin_configured_up.is_set || is_set(is_admin_configured_up.operation)) leaf_name_data.push_back(is_admin_configured_up.get_name_leafdata());
    if (is_ds_operational_up.is_set || is_set(is_ds_operational_up.operation)) leaf_name_data.push_back(is_ds_operational_up.get_name_leafdata());
    if (is_only_receive_path_replication.is_set || is_set(is_only_receive_path_replication.operation)) leaf_name_data.push_back(is_only_receive_path_replication.get_name_leafdata());
    if (is_us_operational_up.is_set || is_set(is_us_operational_up.operation)) leaf_name_data.push_back(is_us_operational_up.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.operation)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (pcb.is_set || is_set(pcb.operation)) leaf_name_data.push_back(pcb.get_name_leafdata());
    if (sscb.is_set || is_set(sscb.operation)) leaf_name_data.push_back(sscb.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());

    auto foreign_address_name_datas = foreign_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), foreign_address_name_datas.begin(), foreign_address_name_datas.end());
    auto local_address_name_datas = local_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_address_name_datas.begin(), local_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession::get_children()
{
    return children;
}

void TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "foreign-address")
    {
        foreign_address.append(value);
    }
    if(value_path == "foreign-port")
    {
        foreign_port = value;
    }
    if(value_path == "is-admin-configured-up")
    {
        is_admin_configured_up = value;
    }
    if(value_path == "is-ds-operational-up")
    {
        is_ds_operational_up = value;
    }
    if(value_path == "is-only-receive-path-replication")
    {
        is_only_receive_path_replication = value;
    }
    if(value_path == "is-us-operational-up")
    {
        is_us_operational_up = value;
    }
    if(value_path == "local-address")
    {
        local_address.append(value);
    }
    if(value_path == "local-port")
    {
        local_port = value;
    }
    if(value_path == "pcb")
    {
        pcb = value;
    }
    if(value_path == "sscb")
    {
        sscb = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
}

TcpNsr::Nodes::Node::Session::BriefSessions::BriefSessions()
{
    yang_name = "brief-sessions"; yang_parent_name = "session";
}

TcpNsr::Nodes::Node::Session::BriefSessions::~BriefSessions()
{
}

bool TcpNsr::Nodes::Node::Session::BriefSessions::has_data() const
{
    for (std::size_t index=0; index<brief_session.size(); index++)
    {
        if(brief_session[index]->has_data())
            return true;
    }
    return false;
}

bool TcpNsr::Nodes::Node::Session::BriefSessions::has_operation() const
{
    for (std::size_t index=0; index<brief_session.size(); index++)
    {
        if(brief_session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TcpNsr::Nodes::Node::Session::BriefSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-sessions";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Session::BriefSessions::get_entity_path(Entity* ancestor) const
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

Entity* TcpNsr::Nodes::Node::Session::BriefSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "brief-session")
    {
        for(auto const & c : brief_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TcpNsr::Nodes::Node::Session::BriefSessions::BriefSession>();
        c->parent = this;
        brief_session.push_back(std::move(c));
        children[segment_path] = brief_session.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Session::BriefSessions::get_children()
{
    for (auto const & c : brief_session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TcpNsr::Nodes::Node::Session::BriefSessions::set_value(const std::string & value_path, std::string value)
{
}

TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation::SetInformation()
    :
    	address_family{YType::enumeration, "address-family"},
	 client_instance{YType::uint32, "client-instance"},
	 client_name{YType::str, "client-name"},
	 is_init_sync_in_progress{YType::boolean, "is-init-sync-in-progress"},
	 is_sscb_init_sync_ready{YType::boolean, "is-sscb-init-sync-ready"},
	 local_instance{YType::uint32, "local-instance"},
	 local_node{YType::str, "local-node"},
	 mode{YType::uint32, "mode"},
	 number_of_sessions{YType::uint32, "number-of-sessions"},
	 number_of_synced_sessions_down_stream{YType::uint32, "number-of-synced-sessions-down-stream"},
	 number_of_synced_sessions_up_stream{YType::uint32, "number-of-synced-sessions-up-stream"},
	 pid{YType::uint32, "pid"},
	 protect_instance{YType::uint32, "protect-instance"},
	 protect_node{YType::str, "protect-node"},
	 set_id{YType::uint32, "set-id"},
	 sscb{YType::uint64, "sscb"},
	 sso_role{YType::uint32, "sso-role"},
	 well_known_port{YType::uint16, "well-known-port"}
{
    yang_name = "set-information"; yang_parent_name = "detail-session";
}

TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation::~SetInformation()
{
}

bool TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation::has_data() const
{
    return address_family.is_set
	|| client_instance.is_set
	|| client_name.is_set
	|| is_init_sync_in_progress.is_set
	|| is_sscb_init_sync_ready.is_set
	|| local_instance.is_set
	|| local_node.is_set
	|| mode.is_set
	|| number_of_sessions.is_set
	|| number_of_synced_sessions_down_stream.is_set
	|| number_of_synced_sessions_up_stream.is_set
	|| pid.is_set
	|| protect_instance.is_set
	|| protect_node.is_set
	|| set_id.is_set
	|| sscb.is_set
	|| sso_role.is_set
	|| well_known_port.is_set;
}

bool TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(client_instance.operation)
	|| is_set(client_name.operation)
	|| is_set(is_init_sync_in_progress.operation)
	|| is_set(is_sscb_init_sync_ready.operation)
	|| is_set(local_instance.operation)
	|| is_set(local_node.operation)
	|| is_set(mode.operation)
	|| is_set(number_of_sessions.operation)
	|| is_set(number_of_synced_sessions_down_stream.operation)
	|| is_set(number_of_synced_sessions_up_stream.operation)
	|| is_set(pid.operation)
	|| is_set(protect_instance.operation)
	|| is_set(protect_node.operation)
	|| is_set(set_id.operation)
	|| is_set(sscb.operation)
	|| is_set(sso_role.operation)
	|| is_set(well_known_port.operation);
}

std::string TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-information";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation::get_entity_path(Entity* ancestor) const
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

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (client_instance.is_set || is_set(client_instance.operation)) leaf_name_data.push_back(client_instance.get_name_leafdata());
    if (client_name.is_set || is_set(client_name.operation)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (is_init_sync_in_progress.is_set || is_set(is_init_sync_in_progress.operation)) leaf_name_data.push_back(is_init_sync_in_progress.get_name_leafdata());
    if (is_sscb_init_sync_ready.is_set || is_set(is_sscb_init_sync_ready.operation)) leaf_name_data.push_back(is_sscb_init_sync_ready.get_name_leafdata());
    if (local_instance.is_set || is_set(local_instance.operation)) leaf_name_data.push_back(local_instance.get_name_leafdata());
    if (local_node.is_set || is_set(local_node.operation)) leaf_name_data.push_back(local_node.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (number_of_sessions.is_set || is_set(number_of_sessions.operation)) leaf_name_data.push_back(number_of_sessions.get_name_leafdata());
    if (number_of_synced_sessions_down_stream.is_set || is_set(number_of_synced_sessions_down_stream.operation)) leaf_name_data.push_back(number_of_synced_sessions_down_stream.get_name_leafdata());
    if (number_of_synced_sessions_up_stream.is_set || is_set(number_of_synced_sessions_up_stream.operation)) leaf_name_data.push_back(number_of_synced_sessions_up_stream.get_name_leafdata());
    if (pid.is_set || is_set(pid.operation)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (protect_instance.is_set || is_set(protect_instance.operation)) leaf_name_data.push_back(protect_instance.get_name_leafdata());
    if (protect_node.is_set || is_set(protect_node.operation)) leaf_name_data.push_back(protect_node.get_name_leafdata());
    if (set_id.is_set || is_set(set_id.operation)) leaf_name_data.push_back(set_id.get_name_leafdata());
    if (sscb.is_set || is_set(sscb.operation)) leaf_name_data.push_back(sscb.get_name_leafdata());
    if (sso_role.is_set || is_set(sso_role.operation)) leaf_name_data.push_back(sso_role.get_name_leafdata());
    if (well_known_port.is_set || is_set(well_known_port.operation)) leaf_name_data.push_back(well_known_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation::get_children()
{
    return children;
}

void TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "client-instance")
    {
        client_instance = value;
    }
    if(value_path == "client-name")
    {
        client_name = value;
    }
    if(value_path == "is-init-sync-in-progress")
    {
        is_init_sync_in_progress = value;
    }
    if(value_path == "is-sscb-init-sync-ready")
    {
        is_sscb_init_sync_ready = value;
    }
    if(value_path == "local-instance")
    {
        local_instance = value;
    }
    if(value_path == "local-node")
    {
        local_node = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "number-of-sessions")
    {
        number_of_sessions = value;
    }
    if(value_path == "number-of-synced-sessions-down-stream")
    {
        number_of_synced_sessions_down_stream = value;
    }
    if(value_path == "number-of-synced-sessions-up-stream")
    {
        number_of_synced_sessions_up_stream = value;
    }
    if(value_path == "pid")
    {
        pid = value;
    }
    if(value_path == "protect-instance")
    {
        protect_instance = value;
    }
    if(value_path == "protect-node")
    {
        protect_node = value;
    }
    if(value_path == "set-id")
    {
        set_id = value;
    }
    if(value_path == "sscb")
    {
        sscb = value;
    }
    if(value_path == "sso-role")
    {
        sso_role = value;
    }
    if(value_path == "well-known-port")
    {
        well_known_port = value;
    }
}

TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue::PacketHoldQueue()
    :
    	acknoledgement_number{YType::uint32, "acknoledgement-number"},
	 data_length{YType::uint32, "data-length"},
	 sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "packet-hold-queue"; yang_parent_name = "detail-session";
}

TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue::~PacketHoldQueue()
{
}

bool TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue::has_data() const
{
    return acknoledgement_number.is_set
	|| data_length.is_set
	|| sequence_number.is_set;
}

bool TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue::has_operation() const
{
    return is_set(operation)
	|| is_set(acknoledgement_number.operation)
	|| is_set(data_length.operation)
	|| is_set(sequence_number.operation);
}

std::string TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-hold-queue";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue::get_entity_path(Entity* ancestor) const
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

    if (acknoledgement_number.is_set || is_set(acknoledgement_number.operation)) leaf_name_data.push_back(acknoledgement_number.get_name_leafdata());
    if (data_length.is_set || is_set(data_length.operation)) leaf_name_data.push_back(data_length.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue::get_children()
{
    return children;
}

void TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknoledgement-number")
    {
        acknoledgement_number = value;
    }
    if(value_path == "data-length")
    {
        data_length = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue::InternalAckHoldQueue()
    :
    	acknoledgement_number{YType::uint32, "acknoledgement-number"},
	 data_length{YType::uint32, "data-length"},
	 sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "internal-ack-hold-queue"; yang_parent_name = "detail-session";
}

TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue::~InternalAckHoldQueue()
{
}

bool TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue::has_data() const
{
    return acknoledgement_number.is_set
	|| data_length.is_set
	|| sequence_number.is_set;
}

bool TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue::has_operation() const
{
    return is_set(operation)
	|| is_set(acknoledgement_number.operation)
	|| is_set(data_length.operation)
	|| is_set(sequence_number.operation);
}

std::string TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal-ack-hold-queue";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue::get_entity_path(Entity* ancestor) const
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

    if (acknoledgement_number.is_set || is_set(acknoledgement_number.operation)) leaf_name_data.push_back(acknoledgement_number.get_name_leafdata());
    if (data_length.is_set || is_set(data_length.operation)) leaf_name_data.push_back(data_length.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue::get_children()
{
    return children;
}

void TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknoledgement-number")
    {
        acknoledgement_number = value;
    }
    if(value_path == "data-length")
    {
        data_length = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::DetailSession()
    :
    	id{YType::str, "id"},
	 address_family{YType::enumeration, "address-family"},
	 cookie{YType::uint64, "cookie"},
	 fist_standby_sequence_number{YType::uint32, "fist-standby-sequence-number"},
	 fist_standby_sequence_number_down_stream{YType::uint32, "fist-standby-sequence-number-down-stream"},
	 fist_standby_sequence_number_up_stream{YType::uint32, "fist-standby-sequence-number-up-stream"},
	 foreign_address{YType::str, "foreign-address"},
	 foreign_port{YType::uint16, "foreign-port"},
	 fssn_offset{YType::uint32, "fssn-offset"},
	 init_sync_end_time{YType::uint32, "init-sync-end-time"},
	 init_sync_end_time_down_stream{YType::uint32, "init-sync-end-time-down-stream"},
	 init_sync_end_time_up_stream{YType::uint32, "init-sync-end-time-up-stream"},
	 init_sync_error{YType::str, "init-sync-error"},
	 init_sync_flags{YType::uint32, "init-sync-flags"},
	 init_sync_start_time{YType::uint32, "init-sync-start-time"},
	 init_sync_start_time_down_stream{YType::uint32, "init-sync-start-time-down-stream"},
	 init_sync_start_time_up_stream{YType::uint32, "init-sync-start-time-up-stream"},
	 is_admin_configured_up{YType::boolean, "is-admin-configured-up"},
	 is_ds_operational_up{YType::enumeration, "is-ds-operational-up"},
	 is_init_sync_error_local{YType::boolean, "is-init-sync-error-local"},
	 is_init_sync_in_progress{YType::boolean, "is-init-sync-in-progress"},
	 is_init_sync_second_phase{YType::boolean, "is-init-sync-second-phase"},
	 is_only_receive_path_replication{YType::boolean, "is-only-receive-path-replication"},
	 is_session_replicated{YType::boolean, "is-session-replicated"},
	 is_session_synced{YType::boolean, "is-session-synced"},
	 is_us_operational_up{YType::enumeration, "is-us-operational-up"},
	 local_address{YType::str, "local-address"},
	 local_port{YType::uint16, "local-port"},
	 max_number_of_held_internal_ack{YType::int32, "max-number-of-held-internal-ack"},
	 max_number_of_held_internal_ack_reach_time{YType::uint32, "max-number-of-held-internal-ack-reach-time"},
	 max_number_of_held_packet{YType::int32, "max-number-of-held-packet"},
	 max_number_of_held_packet_reach_time{YType::uint32, "max-number-of-held-packet-reach-time"},
	 nsr_down_reason{YType::enumeration, "nsr-down-reason"},
	 nsr_down_reason_down_stream{YType::enumeration, "nsr-down-reason-down-stream"},
	 nsr_down_reason_up_stream{YType::enumeration, "nsr-down-reason-up-stream"},
	 nsr_down_time{YType::uint32, "nsr-down-time"},
	 nsr_down_time_down_stream{YType::uint32, "nsr-down-time-down-stream"},
	 nsr_down_time_up_stream{YType::uint32, "nsr-down-time-up-stream"},
	 pcb{YType::uint64, "pcb"},
	 peer_endp_hdl_down_stream{YType::uint64, "peer-endp-hdl-down-stream"},
	 peer_endp_hdl_up_stream{YType::uint64, "peer-endp-hdl-up-stream"},
	 sequence_number_of_init_sync{YType::uint32, "sequence-number-of-init-sync"},
	 sequence_number_of_init_sync_down_stream{YType::uint32, "sequence-number-of-init-sync-down-stream"},
	 sequence_number_of_init_sync_up_stream{YType::uint32, "sequence-number-of-init-sync-up-stream"},
	 sscb{YType::uint64, "sscb"},
	 vrf_id{YType::uint32, "vrf-id"}
    	,
    set_information(std::make_unique<TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation>())
{
    set_information->parent = this;
    children["set-information"] = set_information.get();

    yang_name = "detail-session"; yang_parent_name = "detail-sessions";
}

TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::~DetailSession()
{
}

bool TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::has_data() const
{
    for (std::size_t index=0; index<internal_ack_hold_queue.size(); index++)
    {
        if(internal_ack_hold_queue[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<packet_hold_queue.size(); index++)
    {
        if(packet_hold_queue[index]->has_data())
            return true;
    }
    for (auto const & leaf : foreign_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : local_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set
	|| address_family.is_set
	|| cookie.is_set
	|| fist_standby_sequence_number.is_set
	|| fist_standby_sequence_number_down_stream.is_set
	|| fist_standby_sequence_number_up_stream.is_set
	|| foreign_port.is_set
	|| fssn_offset.is_set
	|| init_sync_end_time.is_set
	|| init_sync_end_time_down_stream.is_set
	|| init_sync_end_time_up_stream.is_set
	|| init_sync_error.is_set
	|| init_sync_flags.is_set
	|| init_sync_start_time.is_set
	|| init_sync_start_time_down_stream.is_set
	|| init_sync_start_time_up_stream.is_set
	|| is_admin_configured_up.is_set
	|| is_ds_operational_up.is_set
	|| is_init_sync_error_local.is_set
	|| is_init_sync_in_progress.is_set
	|| is_init_sync_second_phase.is_set
	|| is_only_receive_path_replication.is_set
	|| is_session_replicated.is_set
	|| is_session_synced.is_set
	|| is_us_operational_up.is_set
	|| local_port.is_set
	|| max_number_of_held_internal_ack.is_set
	|| max_number_of_held_internal_ack_reach_time.is_set
	|| max_number_of_held_packet.is_set
	|| max_number_of_held_packet_reach_time.is_set
	|| nsr_down_reason.is_set
	|| nsr_down_reason_down_stream.is_set
	|| nsr_down_reason_up_stream.is_set
	|| nsr_down_time.is_set
	|| nsr_down_time_down_stream.is_set
	|| nsr_down_time_up_stream.is_set
	|| pcb.is_set
	|| peer_endp_hdl_down_stream.is_set
	|| peer_endp_hdl_up_stream.is_set
	|| sequence_number_of_init_sync.is_set
	|| sequence_number_of_init_sync_down_stream.is_set
	|| sequence_number_of_init_sync_up_stream.is_set
	|| sscb.is_set
	|| vrf_id.is_set
	|| (set_information !=  nullptr && set_information->has_data());
}

bool TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::has_operation() const
{
    for (std::size_t index=0; index<internal_ack_hold_queue.size(); index++)
    {
        if(internal_ack_hold_queue[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<packet_hold_queue.size(); index++)
    {
        if(packet_hold_queue[index]->has_operation())
            return true;
    }
    for (auto const & leaf : foreign_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : local_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(address_family.operation)
	|| is_set(cookie.operation)
	|| is_set(fist_standby_sequence_number.operation)
	|| is_set(fist_standby_sequence_number_down_stream.operation)
	|| is_set(fist_standby_sequence_number_up_stream.operation)
	|| is_set(foreign_address.operation)
	|| is_set(foreign_port.operation)
	|| is_set(fssn_offset.operation)
	|| is_set(init_sync_end_time.operation)
	|| is_set(init_sync_end_time_down_stream.operation)
	|| is_set(init_sync_end_time_up_stream.operation)
	|| is_set(init_sync_error.operation)
	|| is_set(init_sync_flags.operation)
	|| is_set(init_sync_start_time.operation)
	|| is_set(init_sync_start_time_down_stream.operation)
	|| is_set(init_sync_start_time_up_stream.operation)
	|| is_set(is_admin_configured_up.operation)
	|| is_set(is_ds_operational_up.operation)
	|| is_set(is_init_sync_error_local.operation)
	|| is_set(is_init_sync_in_progress.operation)
	|| is_set(is_init_sync_second_phase.operation)
	|| is_set(is_only_receive_path_replication.operation)
	|| is_set(is_session_replicated.operation)
	|| is_set(is_session_synced.operation)
	|| is_set(is_us_operational_up.operation)
	|| is_set(local_address.operation)
	|| is_set(local_port.operation)
	|| is_set(max_number_of_held_internal_ack.operation)
	|| is_set(max_number_of_held_internal_ack_reach_time.operation)
	|| is_set(max_number_of_held_packet.operation)
	|| is_set(max_number_of_held_packet_reach_time.operation)
	|| is_set(nsr_down_reason.operation)
	|| is_set(nsr_down_reason_down_stream.operation)
	|| is_set(nsr_down_reason_up_stream.operation)
	|| is_set(nsr_down_time.operation)
	|| is_set(nsr_down_time_down_stream.operation)
	|| is_set(nsr_down_time_up_stream.operation)
	|| is_set(pcb.operation)
	|| is_set(peer_endp_hdl_down_stream.operation)
	|| is_set(peer_endp_hdl_up_stream.operation)
	|| is_set(sequence_number_of_init_sync.operation)
	|| is_set(sequence_number_of_init_sync_down_stream.operation)
	|| is_set(sequence_number_of_init_sync_up_stream.operation)
	|| is_set(sscb.operation)
	|| is_set(vrf_id.operation)
	|| (set_information !=  nullptr && set_information->has_operation());
}

std::string TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-session" <<"[id='" <<id.get() <<"']";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (cookie.is_set || is_set(cookie.operation)) leaf_name_data.push_back(cookie.get_name_leafdata());
    if (fist_standby_sequence_number.is_set || is_set(fist_standby_sequence_number.operation)) leaf_name_data.push_back(fist_standby_sequence_number.get_name_leafdata());
    if (fist_standby_sequence_number_down_stream.is_set || is_set(fist_standby_sequence_number_down_stream.operation)) leaf_name_data.push_back(fist_standby_sequence_number_down_stream.get_name_leafdata());
    if (fist_standby_sequence_number_up_stream.is_set || is_set(fist_standby_sequence_number_up_stream.operation)) leaf_name_data.push_back(fist_standby_sequence_number_up_stream.get_name_leafdata());
    if (foreign_port.is_set || is_set(foreign_port.operation)) leaf_name_data.push_back(foreign_port.get_name_leafdata());
    if (fssn_offset.is_set || is_set(fssn_offset.operation)) leaf_name_data.push_back(fssn_offset.get_name_leafdata());
    if (init_sync_end_time.is_set || is_set(init_sync_end_time.operation)) leaf_name_data.push_back(init_sync_end_time.get_name_leafdata());
    if (init_sync_end_time_down_stream.is_set || is_set(init_sync_end_time_down_stream.operation)) leaf_name_data.push_back(init_sync_end_time_down_stream.get_name_leafdata());
    if (init_sync_end_time_up_stream.is_set || is_set(init_sync_end_time_up_stream.operation)) leaf_name_data.push_back(init_sync_end_time_up_stream.get_name_leafdata());
    if (init_sync_error.is_set || is_set(init_sync_error.operation)) leaf_name_data.push_back(init_sync_error.get_name_leafdata());
    if (init_sync_flags.is_set || is_set(init_sync_flags.operation)) leaf_name_data.push_back(init_sync_flags.get_name_leafdata());
    if (init_sync_start_time.is_set || is_set(init_sync_start_time.operation)) leaf_name_data.push_back(init_sync_start_time.get_name_leafdata());
    if (init_sync_start_time_down_stream.is_set || is_set(init_sync_start_time_down_stream.operation)) leaf_name_data.push_back(init_sync_start_time_down_stream.get_name_leafdata());
    if (init_sync_start_time_up_stream.is_set || is_set(init_sync_start_time_up_stream.operation)) leaf_name_data.push_back(init_sync_start_time_up_stream.get_name_leafdata());
    if (is_admin_configured_up.is_set || is_set(is_admin_configured_up.operation)) leaf_name_data.push_back(is_admin_configured_up.get_name_leafdata());
    if (is_ds_operational_up.is_set || is_set(is_ds_operational_up.operation)) leaf_name_data.push_back(is_ds_operational_up.get_name_leafdata());
    if (is_init_sync_error_local.is_set || is_set(is_init_sync_error_local.operation)) leaf_name_data.push_back(is_init_sync_error_local.get_name_leafdata());
    if (is_init_sync_in_progress.is_set || is_set(is_init_sync_in_progress.operation)) leaf_name_data.push_back(is_init_sync_in_progress.get_name_leafdata());
    if (is_init_sync_second_phase.is_set || is_set(is_init_sync_second_phase.operation)) leaf_name_data.push_back(is_init_sync_second_phase.get_name_leafdata());
    if (is_only_receive_path_replication.is_set || is_set(is_only_receive_path_replication.operation)) leaf_name_data.push_back(is_only_receive_path_replication.get_name_leafdata());
    if (is_session_replicated.is_set || is_set(is_session_replicated.operation)) leaf_name_data.push_back(is_session_replicated.get_name_leafdata());
    if (is_session_synced.is_set || is_set(is_session_synced.operation)) leaf_name_data.push_back(is_session_synced.get_name_leafdata());
    if (is_us_operational_up.is_set || is_set(is_us_operational_up.operation)) leaf_name_data.push_back(is_us_operational_up.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.operation)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (max_number_of_held_internal_ack.is_set || is_set(max_number_of_held_internal_ack.operation)) leaf_name_data.push_back(max_number_of_held_internal_ack.get_name_leafdata());
    if (max_number_of_held_internal_ack_reach_time.is_set || is_set(max_number_of_held_internal_ack_reach_time.operation)) leaf_name_data.push_back(max_number_of_held_internal_ack_reach_time.get_name_leafdata());
    if (max_number_of_held_packet.is_set || is_set(max_number_of_held_packet.operation)) leaf_name_data.push_back(max_number_of_held_packet.get_name_leafdata());
    if (max_number_of_held_packet_reach_time.is_set || is_set(max_number_of_held_packet_reach_time.operation)) leaf_name_data.push_back(max_number_of_held_packet_reach_time.get_name_leafdata());
    if (nsr_down_reason.is_set || is_set(nsr_down_reason.operation)) leaf_name_data.push_back(nsr_down_reason.get_name_leafdata());
    if (nsr_down_reason_down_stream.is_set || is_set(nsr_down_reason_down_stream.operation)) leaf_name_data.push_back(nsr_down_reason_down_stream.get_name_leafdata());
    if (nsr_down_reason_up_stream.is_set || is_set(nsr_down_reason_up_stream.operation)) leaf_name_data.push_back(nsr_down_reason_up_stream.get_name_leafdata());
    if (nsr_down_time.is_set || is_set(nsr_down_time.operation)) leaf_name_data.push_back(nsr_down_time.get_name_leafdata());
    if (nsr_down_time_down_stream.is_set || is_set(nsr_down_time_down_stream.operation)) leaf_name_data.push_back(nsr_down_time_down_stream.get_name_leafdata());
    if (nsr_down_time_up_stream.is_set || is_set(nsr_down_time_up_stream.operation)) leaf_name_data.push_back(nsr_down_time_up_stream.get_name_leafdata());
    if (pcb.is_set || is_set(pcb.operation)) leaf_name_data.push_back(pcb.get_name_leafdata());
    if (peer_endp_hdl_down_stream.is_set || is_set(peer_endp_hdl_down_stream.operation)) leaf_name_data.push_back(peer_endp_hdl_down_stream.get_name_leafdata());
    if (peer_endp_hdl_up_stream.is_set || is_set(peer_endp_hdl_up_stream.operation)) leaf_name_data.push_back(peer_endp_hdl_up_stream.get_name_leafdata());
    if (sequence_number_of_init_sync.is_set || is_set(sequence_number_of_init_sync.operation)) leaf_name_data.push_back(sequence_number_of_init_sync.get_name_leafdata());
    if (sequence_number_of_init_sync_down_stream.is_set || is_set(sequence_number_of_init_sync_down_stream.operation)) leaf_name_data.push_back(sequence_number_of_init_sync_down_stream.get_name_leafdata());
    if (sequence_number_of_init_sync_up_stream.is_set || is_set(sequence_number_of_init_sync_up_stream.operation)) leaf_name_data.push_back(sequence_number_of_init_sync_up_stream.get_name_leafdata());
    if (sscb.is_set || is_set(sscb.operation)) leaf_name_data.push_back(sscb.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());

    auto foreign_address_name_datas = foreign_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), foreign_address_name_datas.begin(), foreign_address_name_datas.end());
    auto local_address_name_datas = local_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_address_name_datas.begin(), local_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "internal-ack-hold-queue")
    {
        for(auto const & c : internal_ack_hold_queue)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::InternalAckHoldQueue>();
        c->parent = this;
        internal_ack_hold_queue.push_back(std::move(c));
        children[segment_path] = internal_ack_hold_queue.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "packet-hold-queue")
    {
        for(auto const & c : packet_hold_queue)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::PacketHoldQueue>();
        c->parent = this;
        packet_hold_queue.push_back(std::move(c));
        children[segment_path] = packet_hold_queue.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "set-information")
    {
        if(set_information != nullptr)
        {
            children["set-information"] = set_information.get();
        }
        else
        {
            set_information = std::make_unique<TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::SetInformation>();
            set_information->parent = this;
            children["set-information"] = set_information.get();
        }
        return children.at("set-information");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::get_children()
{
    for (auto const & c : internal_ack_hold_queue)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : packet_hold_queue)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("set-information") == children.end())
    {
        if(set_information != nullptr)
        {
            children["set-information"] = set_information.get();
        }
    }

    return children;
}

void TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "cookie")
    {
        cookie = value;
    }
    if(value_path == "fist-standby-sequence-number")
    {
        fist_standby_sequence_number = value;
    }
    if(value_path == "fist-standby-sequence-number-down-stream")
    {
        fist_standby_sequence_number_down_stream = value;
    }
    if(value_path == "fist-standby-sequence-number-up-stream")
    {
        fist_standby_sequence_number_up_stream = value;
    }
    if(value_path == "foreign-address")
    {
        foreign_address.append(value);
    }
    if(value_path == "foreign-port")
    {
        foreign_port = value;
    }
    if(value_path == "fssn-offset")
    {
        fssn_offset = value;
    }
    if(value_path == "init-sync-end-time")
    {
        init_sync_end_time = value;
    }
    if(value_path == "init-sync-end-time-down-stream")
    {
        init_sync_end_time_down_stream = value;
    }
    if(value_path == "init-sync-end-time-up-stream")
    {
        init_sync_end_time_up_stream = value;
    }
    if(value_path == "init-sync-error")
    {
        init_sync_error = value;
    }
    if(value_path == "init-sync-flags")
    {
        init_sync_flags = value;
    }
    if(value_path == "init-sync-start-time")
    {
        init_sync_start_time = value;
    }
    if(value_path == "init-sync-start-time-down-stream")
    {
        init_sync_start_time_down_stream = value;
    }
    if(value_path == "init-sync-start-time-up-stream")
    {
        init_sync_start_time_up_stream = value;
    }
    if(value_path == "is-admin-configured-up")
    {
        is_admin_configured_up = value;
    }
    if(value_path == "is-ds-operational-up")
    {
        is_ds_operational_up = value;
    }
    if(value_path == "is-init-sync-error-local")
    {
        is_init_sync_error_local = value;
    }
    if(value_path == "is-init-sync-in-progress")
    {
        is_init_sync_in_progress = value;
    }
    if(value_path == "is-init-sync-second-phase")
    {
        is_init_sync_second_phase = value;
    }
    if(value_path == "is-only-receive-path-replication")
    {
        is_only_receive_path_replication = value;
    }
    if(value_path == "is-session-replicated")
    {
        is_session_replicated = value;
    }
    if(value_path == "is-session-synced")
    {
        is_session_synced = value;
    }
    if(value_path == "is-us-operational-up")
    {
        is_us_operational_up = value;
    }
    if(value_path == "local-address")
    {
        local_address.append(value);
    }
    if(value_path == "local-port")
    {
        local_port = value;
    }
    if(value_path == "max-number-of-held-internal-ack")
    {
        max_number_of_held_internal_ack = value;
    }
    if(value_path == "max-number-of-held-internal-ack-reach-time")
    {
        max_number_of_held_internal_ack_reach_time = value;
    }
    if(value_path == "max-number-of-held-packet")
    {
        max_number_of_held_packet = value;
    }
    if(value_path == "max-number-of-held-packet-reach-time")
    {
        max_number_of_held_packet_reach_time = value;
    }
    if(value_path == "nsr-down-reason")
    {
        nsr_down_reason = value;
    }
    if(value_path == "nsr-down-reason-down-stream")
    {
        nsr_down_reason_down_stream = value;
    }
    if(value_path == "nsr-down-reason-up-stream")
    {
        nsr_down_reason_up_stream = value;
    }
    if(value_path == "nsr-down-time")
    {
        nsr_down_time = value;
    }
    if(value_path == "nsr-down-time-down-stream")
    {
        nsr_down_time_down_stream = value;
    }
    if(value_path == "nsr-down-time-up-stream")
    {
        nsr_down_time_up_stream = value;
    }
    if(value_path == "pcb")
    {
        pcb = value;
    }
    if(value_path == "peer-endp-hdl-down-stream")
    {
        peer_endp_hdl_down_stream = value;
    }
    if(value_path == "peer-endp-hdl-up-stream")
    {
        peer_endp_hdl_up_stream = value;
    }
    if(value_path == "sequence-number-of-init-sync")
    {
        sequence_number_of_init_sync = value;
    }
    if(value_path == "sequence-number-of-init-sync-down-stream")
    {
        sequence_number_of_init_sync_down_stream = value;
    }
    if(value_path == "sequence-number-of-init-sync-up-stream")
    {
        sequence_number_of_init_sync_up_stream = value;
    }
    if(value_path == "sscb")
    {
        sscb = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
}

TcpNsr::Nodes::Node::Session::DetailSessions::DetailSessions()
{
    yang_name = "detail-sessions"; yang_parent_name = "session";
}

TcpNsr::Nodes::Node::Session::DetailSessions::~DetailSessions()
{
}

bool TcpNsr::Nodes::Node::Session::DetailSessions::has_data() const
{
    for (std::size_t index=0; index<detail_session.size(); index++)
    {
        if(detail_session[index]->has_data())
            return true;
    }
    return false;
}

bool TcpNsr::Nodes::Node::Session::DetailSessions::has_operation() const
{
    for (std::size_t index=0; index<detail_session.size(); index++)
    {
        if(detail_session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TcpNsr::Nodes::Node::Session::DetailSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-sessions";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Session::DetailSessions::get_entity_path(Entity* ancestor) const
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

Entity* TcpNsr::Nodes::Node::Session::DetailSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail-session")
    {
        for(auto const & c : detail_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TcpNsr::Nodes::Node::Session::DetailSessions::DetailSession>();
        c->parent = this;
        detail_session.push_back(std::move(c));
        children[segment_path] = detail_session.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Session::DetailSessions::get_children()
{
    for (auto const & c : detail_session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TcpNsr::Nodes::Node::Session::DetailSessions::set_value(const std::string & value_path, std::string value)
{
}

TcpNsr::Nodes::Node::Session::Session()
    :
    brief_sessions(std::make_unique<TcpNsr::Nodes::Node::Session::BriefSessions>())
	,detail_sessions(std::make_unique<TcpNsr::Nodes::Node::Session::DetailSessions>())
{
    brief_sessions->parent = this;
    children["brief-sessions"] = brief_sessions.get();

    detail_sessions->parent = this;
    children["detail-sessions"] = detail_sessions.get();

    yang_name = "session"; yang_parent_name = "node";
}

TcpNsr::Nodes::Node::Session::~Session()
{
}

bool TcpNsr::Nodes::Node::Session::has_data() const
{
    return (brief_sessions !=  nullptr && brief_sessions->has_data())
	|| (detail_sessions !=  nullptr && detail_sessions->has_data());
}

bool TcpNsr::Nodes::Node::Session::has_operation() const
{
    return is_set(operation)
	|| (brief_sessions !=  nullptr && brief_sessions->has_operation())
	|| (detail_sessions !=  nullptr && detail_sessions->has_operation());
}

std::string TcpNsr::Nodes::Node::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Session::get_entity_path(Entity* ancestor) const
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

Entity* TcpNsr::Nodes::Node::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "brief-sessions")
    {
        if(brief_sessions != nullptr)
        {
            children["brief-sessions"] = brief_sessions.get();
        }
        else
        {
            brief_sessions = std::make_unique<TcpNsr::Nodes::Node::Session::BriefSessions>();
            brief_sessions->parent = this;
            children["brief-sessions"] = brief_sessions.get();
        }
        return children.at("brief-sessions");
    }

    if(child_yang_name == "detail-sessions")
    {
        if(detail_sessions != nullptr)
        {
            children["detail-sessions"] = detail_sessions.get();
        }
        else
        {
            detail_sessions = std::make_unique<TcpNsr::Nodes::Node::Session::DetailSessions>();
            detail_sessions->parent = this;
            children["detail-sessions"] = detail_sessions.get();
        }
        return children.at("detail-sessions");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Session::get_children()
{
    if(children.find("brief-sessions") == children.end())
    {
        if(brief_sessions != nullptr)
        {
            children["brief-sessions"] = brief_sessions.get();
        }
    }

    if(children.find("detail-sessions") == children.end())
    {
        if(detail_sessions != nullptr)
        {
            children["detail-sessions"] = detail_sessions.get();
        }
    }

    return children;
}

void TcpNsr::Nodes::Node::Session::set_value(const std::string & value_path, std::string value)
{
}

TcpNsr::Nodes::Node::Client::DetailClients::DetailClient::DetailClient()
    :
    	id{YType::str, "id"},
	 ccb{YType::uint64, "ccb"},
	 connected_at{YType::uint32, "connected-at"},
	 instance{YType::uint32, "instance"},
	 is_notification_registered{YType::boolean, "is-notification-registered"},
	 job_id{YType::int32, "job-id"},
	 number_of_sessions{YType::uint32, "number-of-sessions"},
	 number_of_up_sessions{YType::uint32, "number-of-up-sessions"},
	 numberof_sets{YType::uint32, "numberof-sets"},
	 pid{YType::uint32, "pid"},
	 process_name{YType::str, "process-name"}
{
    yang_name = "detail-client"; yang_parent_name = "detail-clients";
}

TcpNsr::Nodes::Node::Client::DetailClients::DetailClient::~DetailClient()
{
}

bool TcpNsr::Nodes::Node::Client::DetailClients::DetailClient::has_data() const
{
    return id.is_set
	|| ccb.is_set
	|| connected_at.is_set
	|| instance.is_set
	|| is_notification_registered.is_set
	|| job_id.is_set
	|| number_of_sessions.is_set
	|| number_of_up_sessions.is_set
	|| numberof_sets.is_set
	|| pid.is_set
	|| process_name.is_set;
}

bool TcpNsr::Nodes::Node::Client::DetailClients::DetailClient::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(ccb.operation)
	|| is_set(connected_at.operation)
	|| is_set(instance.operation)
	|| is_set(is_notification_registered.operation)
	|| is_set(job_id.operation)
	|| is_set(number_of_sessions.operation)
	|| is_set(number_of_up_sessions.operation)
	|| is_set(numberof_sets.operation)
	|| is_set(pid.operation)
	|| is_set(process_name.operation);
}

std::string TcpNsr::Nodes::Node::Client::DetailClients::DetailClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-client" <<"[id='" <<id.get() <<"']";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Client::DetailClients::DetailClient::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ccb.is_set || is_set(ccb.operation)) leaf_name_data.push_back(ccb.get_name_leafdata());
    if (connected_at.is_set || is_set(connected_at.operation)) leaf_name_data.push_back(connected_at.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (is_notification_registered.is_set || is_set(is_notification_registered.operation)) leaf_name_data.push_back(is_notification_registered.get_name_leafdata());
    if (job_id.is_set || is_set(job_id.operation)) leaf_name_data.push_back(job_id.get_name_leafdata());
    if (number_of_sessions.is_set || is_set(number_of_sessions.operation)) leaf_name_data.push_back(number_of_sessions.get_name_leafdata());
    if (number_of_up_sessions.is_set || is_set(number_of_up_sessions.operation)) leaf_name_data.push_back(number_of_up_sessions.get_name_leafdata());
    if (numberof_sets.is_set || is_set(numberof_sets.operation)) leaf_name_data.push_back(numberof_sets.get_name_leafdata());
    if (pid.is_set || is_set(pid.operation)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.operation)) leaf_name_data.push_back(process_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpNsr::Nodes::Node::Client::DetailClients::DetailClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Client::DetailClients::DetailClient::get_children()
{
    return children;
}

void TcpNsr::Nodes::Node::Client::DetailClients::DetailClient::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "ccb")
    {
        ccb = value;
    }
    if(value_path == "connected-at")
    {
        connected_at = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "is-notification-registered")
    {
        is_notification_registered = value;
    }
    if(value_path == "job-id")
    {
        job_id = value;
    }
    if(value_path == "number-of-sessions")
    {
        number_of_sessions = value;
    }
    if(value_path == "number-of-up-sessions")
    {
        number_of_up_sessions = value;
    }
    if(value_path == "numberof-sets")
    {
        numberof_sets = value;
    }
    if(value_path == "pid")
    {
        pid = value;
    }
    if(value_path == "process-name")
    {
        process_name = value;
    }
}

TcpNsr::Nodes::Node::Client::DetailClients::DetailClients()
{
    yang_name = "detail-clients"; yang_parent_name = "client";
}

TcpNsr::Nodes::Node::Client::DetailClients::~DetailClients()
{
}

bool TcpNsr::Nodes::Node::Client::DetailClients::has_data() const
{
    for (std::size_t index=0; index<detail_client.size(); index++)
    {
        if(detail_client[index]->has_data())
            return true;
    }
    return false;
}

bool TcpNsr::Nodes::Node::Client::DetailClients::has_operation() const
{
    for (std::size_t index=0; index<detail_client.size(); index++)
    {
        if(detail_client[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TcpNsr::Nodes::Node::Client::DetailClients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-clients";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Client::DetailClients::get_entity_path(Entity* ancestor) const
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

Entity* TcpNsr::Nodes::Node::Client::DetailClients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail-client")
    {
        for(auto const & c : detail_client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TcpNsr::Nodes::Node::Client::DetailClients::DetailClient>();
        c->parent = this;
        detail_client.push_back(std::move(c));
        children[segment_path] = detail_client.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Client::DetailClients::get_children()
{
    for (auto const & c : detail_client)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TcpNsr::Nodes::Node::Client::DetailClients::set_value(const std::string & value_path, std::string value)
{
}

TcpNsr::Nodes::Node::Client::BriefClients::BriefClient::BriefClient()
    :
    	id{YType::str, "id"},
	 ccb{YType::uint64, "ccb"},
	 instance{YType::uint32, "instance"},
	 job_id{YType::int32, "job-id"},
	 number_of_sessions{YType::uint32, "number-of-sessions"},
	 number_of_up_sessions{YType::uint32, "number-of-up-sessions"},
	 numberof_sets{YType::uint32, "numberof-sets"},
	 pid{YType::uint32, "pid"},
	 process_name{YType::str, "process-name"}
{
    yang_name = "brief-client"; yang_parent_name = "brief-clients";
}

TcpNsr::Nodes::Node::Client::BriefClients::BriefClient::~BriefClient()
{
}

bool TcpNsr::Nodes::Node::Client::BriefClients::BriefClient::has_data() const
{
    return id.is_set
	|| ccb.is_set
	|| instance.is_set
	|| job_id.is_set
	|| number_of_sessions.is_set
	|| number_of_up_sessions.is_set
	|| numberof_sets.is_set
	|| pid.is_set
	|| process_name.is_set;
}

bool TcpNsr::Nodes::Node::Client::BriefClients::BriefClient::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(ccb.operation)
	|| is_set(instance.operation)
	|| is_set(job_id.operation)
	|| is_set(number_of_sessions.operation)
	|| is_set(number_of_up_sessions.operation)
	|| is_set(numberof_sets.operation)
	|| is_set(pid.operation)
	|| is_set(process_name.operation);
}

std::string TcpNsr::Nodes::Node::Client::BriefClients::BriefClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-client" <<"[id='" <<id.get() <<"']";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Client::BriefClients::BriefClient::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ccb.is_set || is_set(ccb.operation)) leaf_name_data.push_back(ccb.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (job_id.is_set || is_set(job_id.operation)) leaf_name_data.push_back(job_id.get_name_leafdata());
    if (number_of_sessions.is_set || is_set(number_of_sessions.operation)) leaf_name_data.push_back(number_of_sessions.get_name_leafdata());
    if (number_of_up_sessions.is_set || is_set(number_of_up_sessions.operation)) leaf_name_data.push_back(number_of_up_sessions.get_name_leafdata());
    if (numberof_sets.is_set || is_set(numberof_sets.operation)) leaf_name_data.push_back(numberof_sets.get_name_leafdata());
    if (pid.is_set || is_set(pid.operation)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.operation)) leaf_name_data.push_back(process_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpNsr::Nodes::Node::Client::BriefClients::BriefClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Client::BriefClients::BriefClient::get_children()
{
    return children;
}

void TcpNsr::Nodes::Node::Client::BriefClients::BriefClient::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "ccb")
    {
        ccb = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "job-id")
    {
        job_id = value;
    }
    if(value_path == "number-of-sessions")
    {
        number_of_sessions = value;
    }
    if(value_path == "number-of-up-sessions")
    {
        number_of_up_sessions = value;
    }
    if(value_path == "numberof-sets")
    {
        numberof_sets = value;
    }
    if(value_path == "pid")
    {
        pid = value;
    }
    if(value_path == "process-name")
    {
        process_name = value;
    }
}

TcpNsr::Nodes::Node::Client::BriefClients::BriefClients()
{
    yang_name = "brief-clients"; yang_parent_name = "client";
}

TcpNsr::Nodes::Node::Client::BriefClients::~BriefClients()
{
}

bool TcpNsr::Nodes::Node::Client::BriefClients::has_data() const
{
    for (std::size_t index=0; index<brief_client.size(); index++)
    {
        if(brief_client[index]->has_data())
            return true;
    }
    return false;
}

bool TcpNsr::Nodes::Node::Client::BriefClients::has_operation() const
{
    for (std::size_t index=0; index<brief_client.size(); index++)
    {
        if(brief_client[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TcpNsr::Nodes::Node::Client::BriefClients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-clients";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Client::BriefClients::get_entity_path(Entity* ancestor) const
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

Entity* TcpNsr::Nodes::Node::Client::BriefClients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "brief-client")
    {
        for(auto const & c : brief_client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TcpNsr::Nodes::Node::Client::BriefClients::BriefClient>();
        c->parent = this;
        brief_client.push_back(std::move(c));
        children[segment_path] = brief_client.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Client::BriefClients::get_children()
{
    for (auto const & c : brief_client)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TcpNsr::Nodes::Node::Client::BriefClients::set_value(const std::string & value_path, std::string value)
{
}

TcpNsr::Nodes::Node::Client::Client()
    :
    brief_clients(std::make_unique<TcpNsr::Nodes::Node::Client::BriefClients>())
	,detail_clients(std::make_unique<TcpNsr::Nodes::Node::Client::DetailClients>())
{
    brief_clients->parent = this;
    children["brief-clients"] = brief_clients.get();

    detail_clients->parent = this;
    children["detail-clients"] = detail_clients.get();

    yang_name = "client"; yang_parent_name = "node";
}

TcpNsr::Nodes::Node::Client::~Client()
{
}

bool TcpNsr::Nodes::Node::Client::has_data() const
{
    return (brief_clients !=  nullptr && brief_clients->has_data())
	|| (detail_clients !=  nullptr && detail_clients->has_data());
}

bool TcpNsr::Nodes::Node::Client::has_operation() const
{
    return is_set(operation)
	|| (brief_clients !=  nullptr && brief_clients->has_operation())
	|| (detail_clients !=  nullptr && detail_clients->has_operation());
}

std::string TcpNsr::Nodes::Node::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Client::get_entity_path(Entity* ancestor) const
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

Entity* TcpNsr::Nodes::Node::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "brief-clients")
    {
        if(brief_clients != nullptr)
        {
            children["brief-clients"] = brief_clients.get();
        }
        else
        {
            brief_clients = std::make_unique<TcpNsr::Nodes::Node::Client::BriefClients>();
            brief_clients->parent = this;
            children["brief-clients"] = brief_clients.get();
        }
        return children.at("brief-clients");
    }

    if(child_yang_name == "detail-clients")
    {
        if(detail_clients != nullptr)
        {
            children["detail-clients"] = detail_clients.get();
        }
        else
        {
            detail_clients = std::make_unique<TcpNsr::Nodes::Node::Client::DetailClients>();
            detail_clients->parent = this;
            children["detail-clients"] = detail_clients.get();
        }
        return children.at("detail-clients");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Client::get_children()
{
    if(children.find("brief-clients") == children.end())
    {
        if(brief_clients != nullptr)
        {
            children["brief-clients"] = brief_clients.get();
        }
    }

    if(children.find("detail-clients") == children.end())
    {
        if(detail_clients != nullptr)
        {
            children["detail-clients"] = detail_clients.get();
        }
    }

    return children;
}

void TcpNsr::Nodes::Node::Client::set_value(const std::string & value_path, std::string value)
{
}

TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet::DetailSet()
    :
    	id{YType::str, "id"},
	 address_family{YType::enumeration, "address-family"},
	 audit_end_time{YType::uint32, "audit-end-time"},
	 audit_seq_number{YType::uint32, "audit-seq-number"},
	 audit_start_time{YType::uint32, "audit-start-time"},
	 init_sync_end_time{YType::uint32, "init-sync-end-time"},
	 init_sync_error{YType::str, "init-sync-error"},
	 init_sync_ready_end_time{YType::uint32, "init-sync-ready-end-time"},
	 init_sync_ready_start_time{YType::uint32, "init-sync-ready-start-time"},
	 init_sync_start_time{YType::uint32, "init-sync-start-time"},
	 init_sync_timer{YType::uint32, "init-sync-timer"},
	 is_audit_in_progress{YType::boolean, "is-audit-in-progress"},
	 is_init_sync_error_local{YType::boolean, "is-init-sync-error-local"},
	 is_init_sync_in_progress{YType::boolean, "is-init-sync-in-progress"},
	 is_init_sync_second_phase{YType::boolean, "is-init-sync-second-phase"},
	 is_sscb_init_sync_ready{YType::boolean, "is-sscb-init-sync-ready"},
	 local_instance{YType::uint32, "local-instance"},
	 local_node{YType::str, "local-node"},
	 mode{YType::uint32, "mode"},
	 nsr_reset_time{YType::uint32, "nsr-reset-time"},
	 number_of_init_synced_sessions{YType::uint32, "number-of-init-synced-sessions"},
	 number_of_sessions{YType::uint32, "number-of-sessions"},
	 number_of_sessions_init_sync_failed{YType::uint32, "number-of-sessions-init-sync-failed"},
	 number_of_synced_sessions_down_stream{YType::uint32, "number-of-synced-sessions-down-stream"},
	 number_of_synced_sessions_up_stream{YType::uint32, "number-of-synced-sessions-up-stream"},
	 pid{YType::uint32, "pid"},
	 protect_instance{YType::uint32, "protect-instance"},
	 protect_node{YType::str, "protect-node"},
	 sequence_number_of_init_sync{YType::uint32, "sequence-number-of-init-sync"},
	 set_id{YType::uint32, "set-id"},
	 sscb{YType::uint64, "sscb"},
	 sso_role{YType::uint32, "sso-role"},
	 total_number_of_init_sync_sessions{YType::uint32, "total-number-of-init-sync-sessions"},
	 well_known_port{YType::uint16, "well-known-port"}
{
    yang_name = "detail-set"; yang_parent_name = "detail-sets";
}

TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet::~DetailSet()
{
}

bool TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet::has_data() const
{
    return id.is_set
	|| address_family.is_set
	|| audit_end_time.is_set
	|| audit_seq_number.is_set
	|| audit_start_time.is_set
	|| init_sync_end_time.is_set
	|| init_sync_error.is_set
	|| init_sync_ready_end_time.is_set
	|| init_sync_ready_start_time.is_set
	|| init_sync_start_time.is_set
	|| init_sync_timer.is_set
	|| is_audit_in_progress.is_set
	|| is_init_sync_error_local.is_set
	|| is_init_sync_in_progress.is_set
	|| is_init_sync_second_phase.is_set
	|| is_sscb_init_sync_ready.is_set
	|| local_instance.is_set
	|| local_node.is_set
	|| mode.is_set
	|| nsr_reset_time.is_set
	|| number_of_init_synced_sessions.is_set
	|| number_of_sessions.is_set
	|| number_of_sessions_init_sync_failed.is_set
	|| number_of_synced_sessions_down_stream.is_set
	|| number_of_synced_sessions_up_stream.is_set
	|| pid.is_set
	|| protect_instance.is_set
	|| protect_node.is_set
	|| sequence_number_of_init_sync.is_set
	|| set_id.is_set
	|| sscb.is_set
	|| sso_role.is_set
	|| total_number_of_init_sync_sessions.is_set
	|| well_known_port.is_set;
}

bool TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(address_family.operation)
	|| is_set(audit_end_time.operation)
	|| is_set(audit_seq_number.operation)
	|| is_set(audit_start_time.operation)
	|| is_set(init_sync_end_time.operation)
	|| is_set(init_sync_error.operation)
	|| is_set(init_sync_ready_end_time.operation)
	|| is_set(init_sync_ready_start_time.operation)
	|| is_set(init_sync_start_time.operation)
	|| is_set(init_sync_timer.operation)
	|| is_set(is_audit_in_progress.operation)
	|| is_set(is_init_sync_error_local.operation)
	|| is_set(is_init_sync_in_progress.operation)
	|| is_set(is_init_sync_second_phase.operation)
	|| is_set(is_sscb_init_sync_ready.operation)
	|| is_set(local_instance.operation)
	|| is_set(local_node.operation)
	|| is_set(mode.operation)
	|| is_set(nsr_reset_time.operation)
	|| is_set(number_of_init_synced_sessions.operation)
	|| is_set(number_of_sessions.operation)
	|| is_set(number_of_sessions_init_sync_failed.operation)
	|| is_set(number_of_synced_sessions_down_stream.operation)
	|| is_set(number_of_synced_sessions_up_stream.operation)
	|| is_set(pid.operation)
	|| is_set(protect_instance.operation)
	|| is_set(protect_node.operation)
	|| is_set(sequence_number_of_init_sync.operation)
	|| is_set(set_id.operation)
	|| is_set(sscb.operation)
	|| is_set(sso_role.operation)
	|| is_set(total_number_of_init_sync_sessions.operation)
	|| is_set(well_known_port.operation);
}

std::string TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-set" <<"[id='" <<id.get() <<"']";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (audit_end_time.is_set || is_set(audit_end_time.operation)) leaf_name_data.push_back(audit_end_time.get_name_leafdata());
    if (audit_seq_number.is_set || is_set(audit_seq_number.operation)) leaf_name_data.push_back(audit_seq_number.get_name_leafdata());
    if (audit_start_time.is_set || is_set(audit_start_time.operation)) leaf_name_data.push_back(audit_start_time.get_name_leafdata());
    if (init_sync_end_time.is_set || is_set(init_sync_end_time.operation)) leaf_name_data.push_back(init_sync_end_time.get_name_leafdata());
    if (init_sync_error.is_set || is_set(init_sync_error.operation)) leaf_name_data.push_back(init_sync_error.get_name_leafdata());
    if (init_sync_ready_end_time.is_set || is_set(init_sync_ready_end_time.operation)) leaf_name_data.push_back(init_sync_ready_end_time.get_name_leafdata());
    if (init_sync_ready_start_time.is_set || is_set(init_sync_ready_start_time.operation)) leaf_name_data.push_back(init_sync_ready_start_time.get_name_leafdata());
    if (init_sync_start_time.is_set || is_set(init_sync_start_time.operation)) leaf_name_data.push_back(init_sync_start_time.get_name_leafdata());
    if (init_sync_timer.is_set || is_set(init_sync_timer.operation)) leaf_name_data.push_back(init_sync_timer.get_name_leafdata());
    if (is_audit_in_progress.is_set || is_set(is_audit_in_progress.operation)) leaf_name_data.push_back(is_audit_in_progress.get_name_leafdata());
    if (is_init_sync_error_local.is_set || is_set(is_init_sync_error_local.operation)) leaf_name_data.push_back(is_init_sync_error_local.get_name_leafdata());
    if (is_init_sync_in_progress.is_set || is_set(is_init_sync_in_progress.operation)) leaf_name_data.push_back(is_init_sync_in_progress.get_name_leafdata());
    if (is_init_sync_second_phase.is_set || is_set(is_init_sync_second_phase.operation)) leaf_name_data.push_back(is_init_sync_second_phase.get_name_leafdata());
    if (is_sscb_init_sync_ready.is_set || is_set(is_sscb_init_sync_ready.operation)) leaf_name_data.push_back(is_sscb_init_sync_ready.get_name_leafdata());
    if (local_instance.is_set || is_set(local_instance.operation)) leaf_name_data.push_back(local_instance.get_name_leafdata());
    if (local_node.is_set || is_set(local_node.operation)) leaf_name_data.push_back(local_node.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (nsr_reset_time.is_set || is_set(nsr_reset_time.operation)) leaf_name_data.push_back(nsr_reset_time.get_name_leafdata());
    if (number_of_init_synced_sessions.is_set || is_set(number_of_init_synced_sessions.operation)) leaf_name_data.push_back(number_of_init_synced_sessions.get_name_leafdata());
    if (number_of_sessions.is_set || is_set(number_of_sessions.operation)) leaf_name_data.push_back(number_of_sessions.get_name_leafdata());
    if (number_of_sessions_init_sync_failed.is_set || is_set(number_of_sessions_init_sync_failed.operation)) leaf_name_data.push_back(number_of_sessions_init_sync_failed.get_name_leafdata());
    if (number_of_synced_sessions_down_stream.is_set || is_set(number_of_synced_sessions_down_stream.operation)) leaf_name_data.push_back(number_of_synced_sessions_down_stream.get_name_leafdata());
    if (number_of_synced_sessions_up_stream.is_set || is_set(number_of_synced_sessions_up_stream.operation)) leaf_name_data.push_back(number_of_synced_sessions_up_stream.get_name_leafdata());
    if (pid.is_set || is_set(pid.operation)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (protect_instance.is_set || is_set(protect_instance.operation)) leaf_name_data.push_back(protect_instance.get_name_leafdata());
    if (protect_node.is_set || is_set(protect_node.operation)) leaf_name_data.push_back(protect_node.get_name_leafdata());
    if (sequence_number_of_init_sync.is_set || is_set(sequence_number_of_init_sync.operation)) leaf_name_data.push_back(sequence_number_of_init_sync.get_name_leafdata());
    if (set_id.is_set || is_set(set_id.operation)) leaf_name_data.push_back(set_id.get_name_leafdata());
    if (sscb.is_set || is_set(sscb.operation)) leaf_name_data.push_back(sscb.get_name_leafdata());
    if (sso_role.is_set || is_set(sso_role.operation)) leaf_name_data.push_back(sso_role.get_name_leafdata());
    if (total_number_of_init_sync_sessions.is_set || is_set(total_number_of_init_sync_sessions.operation)) leaf_name_data.push_back(total_number_of_init_sync_sessions.get_name_leafdata());
    if (well_known_port.is_set || is_set(well_known_port.operation)) leaf_name_data.push_back(well_known_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet::get_children()
{
    return children;
}

void TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "audit-end-time")
    {
        audit_end_time = value;
    }
    if(value_path == "audit-seq-number")
    {
        audit_seq_number = value;
    }
    if(value_path == "audit-start-time")
    {
        audit_start_time = value;
    }
    if(value_path == "init-sync-end-time")
    {
        init_sync_end_time = value;
    }
    if(value_path == "init-sync-error")
    {
        init_sync_error = value;
    }
    if(value_path == "init-sync-ready-end-time")
    {
        init_sync_ready_end_time = value;
    }
    if(value_path == "init-sync-ready-start-time")
    {
        init_sync_ready_start_time = value;
    }
    if(value_path == "init-sync-start-time")
    {
        init_sync_start_time = value;
    }
    if(value_path == "init-sync-timer")
    {
        init_sync_timer = value;
    }
    if(value_path == "is-audit-in-progress")
    {
        is_audit_in_progress = value;
    }
    if(value_path == "is-init-sync-error-local")
    {
        is_init_sync_error_local = value;
    }
    if(value_path == "is-init-sync-in-progress")
    {
        is_init_sync_in_progress = value;
    }
    if(value_path == "is-init-sync-second-phase")
    {
        is_init_sync_second_phase = value;
    }
    if(value_path == "is-sscb-init-sync-ready")
    {
        is_sscb_init_sync_ready = value;
    }
    if(value_path == "local-instance")
    {
        local_instance = value;
    }
    if(value_path == "local-node")
    {
        local_node = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "nsr-reset-time")
    {
        nsr_reset_time = value;
    }
    if(value_path == "number-of-init-synced-sessions")
    {
        number_of_init_synced_sessions = value;
    }
    if(value_path == "number-of-sessions")
    {
        number_of_sessions = value;
    }
    if(value_path == "number-of-sessions-init-sync-failed")
    {
        number_of_sessions_init_sync_failed = value;
    }
    if(value_path == "number-of-synced-sessions-down-stream")
    {
        number_of_synced_sessions_down_stream = value;
    }
    if(value_path == "number-of-synced-sessions-up-stream")
    {
        number_of_synced_sessions_up_stream = value;
    }
    if(value_path == "pid")
    {
        pid = value;
    }
    if(value_path == "protect-instance")
    {
        protect_instance = value;
    }
    if(value_path == "protect-node")
    {
        protect_node = value;
    }
    if(value_path == "sequence-number-of-init-sync")
    {
        sequence_number_of_init_sync = value;
    }
    if(value_path == "set-id")
    {
        set_id = value;
    }
    if(value_path == "sscb")
    {
        sscb = value;
    }
    if(value_path == "sso-role")
    {
        sso_role = value;
    }
    if(value_path == "total-number-of-init-sync-sessions")
    {
        total_number_of_init_sync_sessions = value;
    }
    if(value_path == "well-known-port")
    {
        well_known_port = value;
    }
}

TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSets()
{
    yang_name = "detail-sets"; yang_parent_name = "session-set";
}

TcpNsr::Nodes::Node::SessionSet::DetailSets::~DetailSets()
{
}

bool TcpNsr::Nodes::Node::SessionSet::DetailSets::has_data() const
{
    for (std::size_t index=0; index<detail_set.size(); index++)
    {
        if(detail_set[index]->has_data())
            return true;
    }
    return false;
}

bool TcpNsr::Nodes::Node::SessionSet::DetailSets::has_operation() const
{
    for (std::size_t index=0; index<detail_set.size(); index++)
    {
        if(detail_set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TcpNsr::Nodes::Node::SessionSet::DetailSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-sets";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::SessionSet::DetailSets::get_entity_path(Entity* ancestor) const
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

Entity* TcpNsr::Nodes::Node::SessionSet::DetailSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail-set")
    {
        for(auto const & c : detail_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TcpNsr::Nodes::Node::SessionSet::DetailSets::DetailSet>();
        c->parent = this;
        detail_set.push_back(std::move(c));
        children[segment_path] = detail_set.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::SessionSet::DetailSets::get_children()
{
    for (auto const & c : detail_set)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TcpNsr::Nodes::Node::SessionSet::DetailSets::set_value(const std::string & value_path, std::string value)
{
}

TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet::BriefSet()
    :
    	id{YType::str, "id"},
	 address_family{YType::enumeration, "address-family"},
	 client_instance{YType::uint32, "client-instance"},
	 client_name{YType::str, "client-name"},
	 is_init_sync_in_progress{YType::boolean, "is-init-sync-in-progress"},
	 is_sscb_init_sync_ready{YType::boolean, "is-sscb-init-sync-ready"},
	 local_instance{YType::uint32, "local-instance"},
	 local_node{YType::str, "local-node"},
	 mode{YType::uint32, "mode"},
	 number_of_sessions{YType::uint32, "number-of-sessions"},
	 number_of_synced_sessions_down_stream{YType::uint32, "number-of-synced-sessions-down-stream"},
	 number_of_synced_sessions_up_stream{YType::uint32, "number-of-synced-sessions-up-stream"},
	 pid{YType::uint32, "pid"},
	 protect_instance{YType::uint32, "protect-instance"},
	 protect_node{YType::str, "protect-node"},
	 set_id{YType::uint32, "set-id"},
	 sscb{YType::uint64, "sscb"},
	 sso_role{YType::uint32, "sso-role"},
	 well_known_port{YType::uint16, "well-known-port"}
{
    yang_name = "brief-set"; yang_parent_name = "brief-sets";
}

TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet::~BriefSet()
{
}

bool TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet::has_data() const
{
    return id.is_set
	|| address_family.is_set
	|| client_instance.is_set
	|| client_name.is_set
	|| is_init_sync_in_progress.is_set
	|| is_sscb_init_sync_ready.is_set
	|| local_instance.is_set
	|| local_node.is_set
	|| mode.is_set
	|| number_of_sessions.is_set
	|| number_of_synced_sessions_down_stream.is_set
	|| number_of_synced_sessions_up_stream.is_set
	|| pid.is_set
	|| protect_instance.is_set
	|| protect_node.is_set
	|| set_id.is_set
	|| sscb.is_set
	|| sso_role.is_set
	|| well_known_port.is_set;
}

bool TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(address_family.operation)
	|| is_set(client_instance.operation)
	|| is_set(client_name.operation)
	|| is_set(is_init_sync_in_progress.operation)
	|| is_set(is_sscb_init_sync_ready.operation)
	|| is_set(local_instance.operation)
	|| is_set(local_node.operation)
	|| is_set(mode.operation)
	|| is_set(number_of_sessions.operation)
	|| is_set(number_of_synced_sessions_down_stream.operation)
	|| is_set(number_of_synced_sessions_up_stream.operation)
	|| is_set(pid.operation)
	|| is_set(protect_instance.operation)
	|| is_set(protect_node.operation)
	|| is_set(set_id.operation)
	|| is_set(sscb.operation)
	|| is_set(sso_role.operation)
	|| is_set(well_known_port.operation);
}

std::string TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-set" <<"[id='" <<id.get() <<"']";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (client_instance.is_set || is_set(client_instance.operation)) leaf_name_data.push_back(client_instance.get_name_leafdata());
    if (client_name.is_set || is_set(client_name.operation)) leaf_name_data.push_back(client_name.get_name_leafdata());
    if (is_init_sync_in_progress.is_set || is_set(is_init_sync_in_progress.operation)) leaf_name_data.push_back(is_init_sync_in_progress.get_name_leafdata());
    if (is_sscb_init_sync_ready.is_set || is_set(is_sscb_init_sync_ready.operation)) leaf_name_data.push_back(is_sscb_init_sync_ready.get_name_leafdata());
    if (local_instance.is_set || is_set(local_instance.operation)) leaf_name_data.push_back(local_instance.get_name_leafdata());
    if (local_node.is_set || is_set(local_node.operation)) leaf_name_data.push_back(local_node.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (number_of_sessions.is_set || is_set(number_of_sessions.operation)) leaf_name_data.push_back(number_of_sessions.get_name_leafdata());
    if (number_of_synced_sessions_down_stream.is_set || is_set(number_of_synced_sessions_down_stream.operation)) leaf_name_data.push_back(number_of_synced_sessions_down_stream.get_name_leafdata());
    if (number_of_synced_sessions_up_stream.is_set || is_set(number_of_synced_sessions_up_stream.operation)) leaf_name_data.push_back(number_of_synced_sessions_up_stream.get_name_leafdata());
    if (pid.is_set || is_set(pid.operation)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (protect_instance.is_set || is_set(protect_instance.operation)) leaf_name_data.push_back(protect_instance.get_name_leafdata());
    if (protect_node.is_set || is_set(protect_node.operation)) leaf_name_data.push_back(protect_node.get_name_leafdata());
    if (set_id.is_set || is_set(set_id.operation)) leaf_name_data.push_back(set_id.get_name_leafdata());
    if (sscb.is_set || is_set(sscb.operation)) leaf_name_data.push_back(sscb.get_name_leafdata());
    if (sso_role.is_set || is_set(sso_role.operation)) leaf_name_data.push_back(sso_role.get_name_leafdata());
    if (well_known_port.is_set || is_set(well_known_port.operation)) leaf_name_data.push_back(well_known_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet::get_children()
{
    return children;
}

void TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "client-instance")
    {
        client_instance = value;
    }
    if(value_path == "client-name")
    {
        client_name = value;
    }
    if(value_path == "is-init-sync-in-progress")
    {
        is_init_sync_in_progress = value;
    }
    if(value_path == "is-sscb-init-sync-ready")
    {
        is_sscb_init_sync_ready = value;
    }
    if(value_path == "local-instance")
    {
        local_instance = value;
    }
    if(value_path == "local-node")
    {
        local_node = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "number-of-sessions")
    {
        number_of_sessions = value;
    }
    if(value_path == "number-of-synced-sessions-down-stream")
    {
        number_of_synced_sessions_down_stream = value;
    }
    if(value_path == "number-of-synced-sessions-up-stream")
    {
        number_of_synced_sessions_up_stream = value;
    }
    if(value_path == "pid")
    {
        pid = value;
    }
    if(value_path == "protect-instance")
    {
        protect_instance = value;
    }
    if(value_path == "protect-node")
    {
        protect_node = value;
    }
    if(value_path == "set-id")
    {
        set_id = value;
    }
    if(value_path == "sscb")
    {
        sscb = value;
    }
    if(value_path == "sso-role")
    {
        sso_role = value;
    }
    if(value_path == "well-known-port")
    {
        well_known_port = value;
    }
}

TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSets()
{
    yang_name = "brief-sets"; yang_parent_name = "session-set";
}

TcpNsr::Nodes::Node::SessionSet::BriefSets::~BriefSets()
{
}

bool TcpNsr::Nodes::Node::SessionSet::BriefSets::has_data() const
{
    for (std::size_t index=0; index<brief_set.size(); index++)
    {
        if(brief_set[index]->has_data())
            return true;
    }
    return false;
}

bool TcpNsr::Nodes::Node::SessionSet::BriefSets::has_operation() const
{
    for (std::size_t index=0; index<brief_set.size(); index++)
    {
        if(brief_set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TcpNsr::Nodes::Node::SessionSet::BriefSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-sets";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::SessionSet::BriefSets::get_entity_path(Entity* ancestor) const
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

Entity* TcpNsr::Nodes::Node::SessionSet::BriefSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "brief-set")
    {
        for(auto const & c : brief_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TcpNsr::Nodes::Node::SessionSet::BriefSets::BriefSet>();
        c->parent = this;
        brief_set.push_back(std::move(c));
        children[segment_path] = brief_set.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::SessionSet::BriefSets::get_children()
{
    for (auto const & c : brief_set)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TcpNsr::Nodes::Node::SessionSet::BriefSets::set_value(const std::string & value_path, std::string value)
{
}

TcpNsr::Nodes::Node::SessionSet::SessionSet()
    :
    brief_sets(std::make_unique<TcpNsr::Nodes::Node::SessionSet::BriefSets>())
	,detail_sets(std::make_unique<TcpNsr::Nodes::Node::SessionSet::DetailSets>())
{
    brief_sets->parent = this;
    children["brief-sets"] = brief_sets.get();

    detail_sets->parent = this;
    children["detail-sets"] = detail_sets.get();

    yang_name = "session-set"; yang_parent_name = "node";
}

TcpNsr::Nodes::Node::SessionSet::~SessionSet()
{
}

bool TcpNsr::Nodes::Node::SessionSet::has_data() const
{
    return (brief_sets !=  nullptr && brief_sets->has_data())
	|| (detail_sets !=  nullptr && detail_sets->has_data());
}

bool TcpNsr::Nodes::Node::SessionSet::has_operation() const
{
    return is_set(operation)
	|| (brief_sets !=  nullptr && brief_sets->has_operation())
	|| (detail_sets !=  nullptr && detail_sets->has_operation());
}

std::string TcpNsr::Nodes::Node::SessionSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-set";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::SessionSet::get_entity_path(Entity* ancestor) const
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

Entity* TcpNsr::Nodes::Node::SessionSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "brief-sets")
    {
        if(brief_sets != nullptr)
        {
            children["brief-sets"] = brief_sets.get();
        }
        else
        {
            brief_sets = std::make_unique<TcpNsr::Nodes::Node::SessionSet::BriefSets>();
            brief_sets->parent = this;
            children["brief-sets"] = brief_sets.get();
        }
        return children.at("brief-sets");
    }

    if(child_yang_name == "detail-sets")
    {
        if(detail_sets != nullptr)
        {
            children["detail-sets"] = detail_sets.get();
        }
        else
        {
            detail_sets = std::make_unique<TcpNsr::Nodes::Node::SessionSet::DetailSets>();
            detail_sets->parent = this;
            children["detail-sets"] = detail_sets.get();
        }
        return children.at("detail-sets");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::SessionSet::get_children()
{
    if(children.find("brief-sets") == children.end())
    {
        if(brief_sets != nullptr)
        {
            children["brief-sets"] = brief_sets.get();
        }
    }

    if(children.find("detail-sets") == children.end())
    {
        if(detail_sets != nullptr)
        {
            children["detail-sets"] = detail_sets.get();
        }
    }

    return children;
}

void TcpNsr::Nodes::Node::SessionSet::set_value(const std::string & value_path, std::string value)
{
}

TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common::Common()
    :
    	cleanup_rcv{YType::uint32, "cleanup-rcv"},
	 cleanup_rcv_fail_buffer_trim{YType::uint32, "cleanup-rcv-fail-buffer-trim"},
	 cleanup_rcv_success{YType::uint32, "cleanup-rcv-success"},
	 cleanup_send{YType::uint32, "cleanup-send"},
	 cleanup_send_drop{YType::uint32, "cleanup-send-drop"},
	 data_xfer_rcv{YType::uint32, "data-xfer-rcv"},
	 data_xfer_rcv_fail_buffer_trim{YType::uint32, "data-xfer-rcv-fail-buffer-trim"},
	 data_xfer_rcv_fail_snd_una_out_of_sync{YType::uint32, "data-xfer-rcv-fail-snd-una-out-of-sync"},
	 data_xfer_rcv_success{YType::uint32, "data-xfer-rcv-success"},
	 data_xfer_send{YType::uint32, "data-xfer-send"},
	 data_xfer_send_drop{YType::uint32, "data-xfer-send-drop"},
	 data_xfer_send_iov_alloc{YType::uint32, "data-xfer-send-iov-alloc"},
	 data_xfer_send_total{YType::uint64, "data-xfer-send-total"},
	 nack_rcv{YType::uint32, "nack-rcv"},
	 nack_rcv_fail_data_send{YType::uint32, "nack-rcv-fail-data-send"},
	 nack_rcv_success{YType::uint32, "nack-rcv-success"},
	 nack_send{YType::uint32, "nack-send"},
	 nack_send_drop{YType::uint32, "nack-send-drop"},
	 seg_instr_rcv{YType::uint32, "seg-instr-rcv"},
	 seg_instr_rcv_fail_buffer_trim{YType::uint32, "seg-instr-rcv-fail-buffer-trim"},
	 seg_instr_rcv_fail_tcp_process{YType::uint32, "seg-instr-rcv-fail-tcp-process"},
	 seg_instr_rcv_success{YType::uint32, "seg-instr-rcv-success"},
	 seg_instr_send{YType::uint32, "seg-instr-send"},
	 seg_instr_send_drop{YType::uint32, "seg-instr-send-drop"},
	 seg_instr_send_units{YType::uint32, "seg-instr-send-units"}
{
    yang_name = "common"; yang_parent_name = "snd-counters";
}

TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common::~Common()
{
}

bool TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common::has_data() const
{
    return cleanup_rcv.is_set
	|| cleanup_rcv_fail_buffer_trim.is_set
	|| cleanup_rcv_success.is_set
	|| cleanup_send.is_set
	|| cleanup_send_drop.is_set
	|| data_xfer_rcv.is_set
	|| data_xfer_rcv_fail_buffer_trim.is_set
	|| data_xfer_rcv_fail_snd_una_out_of_sync.is_set
	|| data_xfer_rcv_success.is_set
	|| data_xfer_send.is_set
	|| data_xfer_send_drop.is_set
	|| data_xfer_send_iov_alloc.is_set
	|| data_xfer_send_total.is_set
	|| nack_rcv.is_set
	|| nack_rcv_fail_data_send.is_set
	|| nack_rcv_success.is_set
	|| nack_send.is_set
	|| nack_send_drop.is_set
	|| seg_instr_rcv.is_set
	|| seg_instr_rcv_fail_buffer_trim.is_set
	|| seg_instr_rcv_fail_tcp_process.is_set
	|| seg_instr_rcv_success.is_set
	|| seg_instr_send.is_set
	|| seg_instr_send_drop.is_set
	|| seg_instr_send_units.is_set;
}

bool TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common::has_operation() const
{
    return is_set(operation)
	|| is_set(cleanup_rcv.operation)
	|| is_set(cleanup_rcv_fail_buffer_trim.operation)
	|| is_set(cleanup_rcv_success.operation)
	|| is_set(cleanup_send.operation)
	|| is_set(cleanup_send_drop.operation)
	|| is_set(data_xfer_rcv.operation)
	|| is_set(data_xfer_rcv_fail_buffer_trim.operation)
	|| is_set(data_xfer_rcv_fail_snd_una_out_of_sync.operation)
	|| is_set(data_xfer_rcv_success.operation)
	|| is_set(data_xfer_send.operation)
	|| is_set(data_xfer_send_drop.operation)
	|| is_set(data_xfer_send_iov_alloc.operation)
	|| is_set(data_xfer_send_total.operation)
	|| is_set(nack_rcv.operation)
	|| is_set(nack_rcv_fail_data_send.operation)
	|| is_set(nack_rcv_success.operation)
	|| is_set(nack_send.operation)
	|| is_set(nack_send_drop.operation)
	|| is_set(seg_instr_rcv.operation)
	|| is_set(seg_instr_rcv_fail_buffer_trim.operation)
	|| is_set(seg_instr_rcv_fail_tcp_process.operation)
	|| is_set(seg_instr_rcv_success.operation)
	|| is_set(seg_instr_send.operation)
	|| is_set(seg_instr_send_drop.operation)
	|| is_set(seg_instr_send_units.operation);
}

std::string TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common::get_entity_path(Entity* ancestor) const
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

    if (cleanup_rcv.is_set || is_set(cleanup_rcv.operation)) leaf_name_data.push_back(cleanup_rcv.get_name_leafdata());
    if (cleanup_rcv_fail_buffer_trim.is_set || is_set(cleanup_rcv_fail_buffer_trim.operation)) leaf_name_data.push_back(cleanup_rcv_fail_buffer_trim.get_name_leafdata());
    if (cleanup_rcv_success.is_set || is_set(cleanup_rcv_success.operation)) leaf_name_data.push_back(cleanup_rcv_success.get_name_leafdata());
    if (cleanup_send.is_set || is_set(cleanup_send.operation)) leaf_name_data.push_back(cleanup_send.get_name_leafdata());
    if (cleanup_send_drop.is_set || is_set(cleanup_send_drop.operation)) leaf_name_data.push_back(cleanup_send_drop.get_name_leafdata());
    if (data_xfer_rcv.is_set || is_set(data_xfer_rcv.operation)) leaf_name_data.push_back(data_xfer_rcv.get_name_leafdata());
    if (data_xfer_rcv_fail_buffer_trim.is_set || is_set(data_xfer_rcv_fail_buffer_trim.operation)) leaf_name_data.push_back(data_xfer_rcv_fail_buffer_trim.get_name_leafdata());
    if (data_xfer_rcv_fail_snd_una_out_of_sync.is_set || is_set(data_xfer_rcv_fail_snd_una_out_of_sync.operation)) leaf_name_data.push_back(data_xfer_rcv_fail_snd_una_out_of_sync.get_name_leafdata());
    if (data_xfer_rcv_success.is_set || is_set(data_xfer_rcv_success.operation)) leaf_name_data.push_back(data_xfer_rcv_success.get_name_leafdata());
    if (data_xfer_send.is_set || is_set(data_xfer_send.operation)) leaf_name_data.push_back(data_xfer_send.get_name_leafdata());
    if (data_xfer_send_drop.is_set || is_set(data_xfer_send_drop.operation)) leaf_name_data.push_back(data_xfer_send_drop.get_name_leafdata());
    if (data_xfer_send_iov_alloc.is_set || is_set(data_xfer_send_iov_alloc.operation)) leaf_name_data.push_back(data_xfer_send_iov_alloc.get_name_leafdata());
    if (data_xfer_send_total.is_set || is_set(data_xfer_send_total.operation)) leaf_name_data.push_back(data_xfer_send_total.get_name_leafdata());
    if (nack_rcv.is_set || is_set(nack_rcv.operation)) leaf_name_data.push_back(nack_rcv.get_name_leafdata());
    if (nack_rcv_fail_data_send.is_set || is_set(nack_rcv_fail_data_send.operation)) leaf_name_data.push_back(nack_rcv_fail_data_send.get_name_leafdata());
    if (nack_rcv_success.is_set || is_set(nack_rcv_success.operation)) leaf_name_data.push_back(nack_rcv_success.get_name_leafdata());
    if (nack_send.is_set || is_set(nack_send.operation)) leaf_name_data.push_back(nack_send.get_name_leafdata());
    if (nack_send_drop.is_set || is_set(nack_send_drop.operation)) leaf_name_data.push_back(nack_send_drop.get_name_leafdata());
    if (seg_instr_rcv.is_set || is_set(seg_instr_rcv.operation)) leaf_name_data.push_back(seg_instr_rcv.get_name_leafdata());
    if (seg_instr_rcv_fail_buffer_trim.is_set || is_set(seg_instr_rcv_fail_buffer_trim.operation)) leaf_name_data.push_back(seg_instr_rcv_fail_buffer_trim.get_name_leafdata());
    if (seg_instr_rcv_fail_tcp_process.is_set || is_set(seg_instr_rcv_fail_tcp_process.operation)) leaf_name_data.push_back(seg_instr_rcv_fail_tcp_process.get_name_leafdata());
    if (seg_instr_rcv_success.is_set || is_set(seg_instr_rcv_success.operation)) leaf_name_data.push_back(seg_instr_rcv_success.get_name_leafdata());
    if (seg_instr_send.is_set || is_set(seg_instr_send.operation)) leaf_name_data.push_back(seg_instr_send.get_name_leafdata());
    if (seg_instr_send_drop.is_set || is_set(seg_instr_send_drop.operation)) leaf_name_data.push_back(seg_instr_send_drop.get_name_leafdata());
    if (seg_instr_send_units.is_set || is_set(seg_instr_send_units.operation)) leaf_name_data.push_back(seg_instr_send_units.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common::get_children()
{
    return children;
}

void TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cleanup-rcv")
    {
        cleanup_rcv = value;
    }
    if(value_path == "cleanup-rcv-fail-buffer-trim")
    {
        cleanup_rcv_fail_buffer_trim = value;
    }
    if(value_path == "cleanup-rcv-success")
    {
        cleanup_rcv_success = value;
    }
    if(value_path == "cleanup-send")
    {
        cleanup_send = value;
    }
    if(value_path == "cleanup-send-drop")
    {
        cleanup_send_drop = value;
    }
    if(value_path == "data-xfer-rcv")
    {
        data_xfer_rcv = value;
    }
    if(value_path == "data-xfer-rcv-fail-buffer-trim")
    {
        data_xfer_rcv_fail_buffer_trim = value;
    }
    if(value_path == "data-xfer-rcv-fail-snd-una-out-of-sync")
    {
        data_xfer_rcv_fail_snd_una_out_of_sync = value;
    }
    if(value_path == "data-xfer-rcv-success")
    {
        data_xfer_rcv_success = value;
    }
    if(value_path == "data-xfer-send")
    {
        data_xfer_send = value;
    }
    if(value_path == "data-xfer-send-drop")
    {
        data_xfer_send_drop = value;
    }
    if(value_path == "data-xfer-send-iov-alloc")
    {
        data_xfer_send_iov_alloc = value;
    }
    if(value_path == "data-xfer-send-total")
    {
        data_xfer_send_total = value;
    }
    if(value_path == "nack-rcv")
    {
        nack_rcv = value;
    }
    if(value_path == "nack-rcv-fail-data-send")
    {
        nack_rcv_fail_data_send = value;
    }
    if(value_path == "nack-rcv-success")
    {
        nack_rcv_success = value;
    }
    if(value_path == "nack-send")
    {
        nack_send = value;
    }
    if(value_path == "nack-send-drop")
    {
        nack_send_drop = value;
    }
    if(value_path == "seg-instr-rcv")
    {
        seg_instr_rcv = value;
    }
    if(value_path == "seg-instr-rcv-fail-buffer-trim")
    {
        seg_instr_rcv_fail_buffer_trim = value;
    }
    if(value_path == "seg-instr-rcv-fail-tcp-process")
    {
        seg_instr_rcv_fail_tcp_process = value;
    }
    if(value_path == "seg-instr-rcv-success")
    {
        seg_instr_rcv_success = value;
    }
    if(value_path == "seg-instr-send")
    {
        seg_instr_send = value;
    }
    if(value_path == "seg-instr-send-drop")
    {
        seg_instr_send_drop = value;
    }
    if(value_path == "seg-instr-send-units")
    {
        seg_instr_send_units = value;
    }
}

TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly::AggrOnly()
    :
    	cleanup_rcv_drop_no_pcb{YType::uint32, "cleanup-rcv-drop-no-pcb"},
	 cleanup_rcv_drop_no_scb_dp{YType::uint32, "cleanup-rcv-drop-no-scb-dp"},
	 data_xfer_rcv_drop_no_pcb{YType::uint32, "data-xfer-rcv-drop-no-pcb"},
	 data_xfer_rcv_drop_no_scb_dp{YType::uint32, "data-xfer-rcv-drop-no-scb-dp"},
	 nack_rcv_drop_no_pcb{YType::uint32, "nack-rcv-drop-no-pcb"},
	 nack_rcv_drop_no_scb_dp{YType::uint32, "nack-rcv-drop-no-scb-dp"},
	 seg_instr_rcv_drop_no_pcb{YType::uint32, "seg-instr-rcv-drop-no-pcb"},
	 seg_instr_rcv_drop_no_scb_dp{YType::uint32, "seg-instr-rcv-drop-no-scb-dp"}
{
    yang_name = "aggr-only"; yang_parent_name = "snd-counters";
}

TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly::~AggrOnly()
{
}

bool TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly::has_data() const
{
    return cleanup_rcv_drop_no_pcb.is_set
	|| cleanup_rcv_drop_no_scb_dp.is_set
	|| data_xfer_rcv_drop_no_pcb.is_set
	|| data_xfer_rcv_drop_no_scb_dp.is_set
	|| nack_rcv_drop_no_pcb.is_set
	|| nack_rcv_drop_no_scb_dp.is_set
	|| seg_instr_rcv_drop_no_pcb.is_set
	|| seg_instr_rcv_drop_no_scb_dp.is_set;
}

bool TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly::has_operation() const
{
    return is_set(operation)
	|| is_set(cleanup_rcv_drop_no_pcb.operation)
	|| is_set(cleanup_rcv_drop_no_scb_dp.operation)
	|| is_set(data_xfer_rcv_drop_no_pcb.operation)
	|| is_set(data_xfer_rcv_drop_no_scb_dp.operation)
	|| is_set(nack_rcv_drop_no_pcb.operation)
	|| is_set(nack_rcv_drop_no_scb_dp.operation)
	|| is_set(seg_instr_rcv_drop_no_pcb.operation)
	|| is_set(seg_instr_rcv_drop_no_scb_dp.operation);
}

std::string TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggr-only";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly::get_entity_path(Entity* ancestor) const
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

    if (cleanup_rcv_drop_no_pcb.is_set || is_set(cleanup_rcv_drop_no_pcb.operation)) leaf_name_data.push_back(cleanup_rcv_drop_no_pcb.get_name_leafdata());
    if (cleanup_rcv_drop_no_scb_dp.is_set || is_set(cleanup_rcv_drop_no_scb_dp.operation)) leaf_name_data.push_back(cleanup_rcv_drop_no_scb_dp.get_name_leafdata());
    if (data_xfer_rcv_drop_no_pcb.is_set || is_set(data_xfer_rcv_drop_no_pcb.operation)) leaf_name_data.push_back(data_xfer_rcv_drop_no_pcb.get_name_leafdata());
    if (data_xfer_rcv_drop_no_scb_dp.is_set || is_set(data_xfer_rcv_drop_no_scb_dp.operation)) leaf_name_data.push_back(data_xfer_rcv_drop_no_scb_dp.get_name_leafdata());
    if (nack_rcv_drop_no_pcb.is_set || is_set(nack_rcv_drop_no_pcb.operation)) leaf_name_data.push_back(nack_rcv_drop_no_pcb.get_name_leafdata());
    if (nack_rcv_drop_no_scb_dp.is_set || is_set(nack_rcv_drop_no_scb_dp.operation)) leaf_name_data.push_back(nack_rcv_drop_no_scb_dp.get_name_leafdata());
    if (seg_instr_rcv_drop_no_pcb.is_set || is_set(seg_instr_rcv_drop_no_pcb.operation)) leaf_name_data.push_back(seg_instr_rcv_drop_no_pcb.get_name_leafdata());
    if (seg_instr_rcv_drop_no_scb_dp.is_set || is_set(seg_instr_rcv_drop_no_scb_dp.operation)) leaf_name_data.push_back(seg_instr_rcv_drop_no_scb_dp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly::get_children()
{
    return children;
}

void TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cleanup-rcv-drop-no-pcb")
    {
        cleanup_rcv_drop_no_pcb = value;
    }
    if(value_path == "cleanup-rcv-drop-no-scb-dp")
    {
        cleanup_rcv_drop_no_scb_dp = value;
    }
    if(value_path == "data-xfer-rcv-drop-no-pcb")
    {
        data_xfer_rcv_drop_no_pcb = value;
    }
    if(value_path == "data-xfer-rcv-drop-no-scb-dp")
    {
        data_xfer_rcv_drop_no_scb_dp = value;
    }
    if(value_path == "nack-rcv-drop-no-pcb")
    {
        nack_rcv_drop_no_pcb = value;
    }
    if(value_path == "nack-rcv-drop-no-scb-dp")
    {
        nack_rcv_drop_no_scb_dp = value;
    }
    if(value_path == "seg-instr-rcv-drop-no-pcb")
    {
        seg_instr_rcv_drop_no_pcb = value;
    }
    if(value_path == "seg-instr-rcv-drop-no-scb-dp")
    {
        seg_instr_rcv_drop_no_scb_dp = value;
    }
}

TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::SndCounters()
    :
    aggr_only(std::make_unique<TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly>())
	,common(std::make_unique<TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common>())
{
    aggr_only->parent = this;
    children["aggr-only"] = aggr_only.get();

    common->parent = this;
    children["common"] = common.get();

    yang_name = "snd-counters"; yang_parent_name = "summary";
}

TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::~SndCounters()
{
}

bool TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::has_data() const
{
    return (aggr_only !=  nullptr && aggr_only->has_data())
	|| (common !=  nullptr && common->has_data());
}

bool TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::has_operation() const
{
    return is_set(operation)
	|| (aggr_only !=  nullptr && aggr_only->has_operation())
	|| (common !=  nullptr && common->has_operation());
}

std::string TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snd-counters";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::get_entity_path(Entity* ancestor) const
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

Entity* TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "aggr-only")
    {
        if(aggr_only != nullptr)
        {
            children["aggr-only"] = aggr_only.get();
        }
        else
        {
            aggr_only = std::make_unique<TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::AggrOnly>();
            aggr_only->parent = this;
            children["aggr-only"] = aggr_only.get();
        }
        return children.at("aggr-only");
    }

    if(child_yang_name == "common")
    {
        if(common != nullptr)
        {
            children["common"] = common.get();
        }
        else
        {
            common = std::make_unique<TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::Common>();
            common->parent = this;
            children["common"] = common.get();
        }
        return children.at("common");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::get_children()
{
    if(children.find("aggr-only") == children.end())
    {
        if(aggr_only != nullptr)
        {
            children["aggr-only"] = aggr_only.get();
        }
    }

    if(children.find("common") == children.end())
    {
        if(common != nullptr)
        {
            children["common"] = common.get();
        }
    }

    return children;
}

void TcpNsr::Nodes::Node::Statistics::Summary::SndCounters::set_value(const std::string & value_path, std::string value)
{
}

TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common::Common()
    :
    	abort{YType::uint32, "abort"},
	 mark_session_set_ack_rcv{YType::uint32, "mark-session-set-ack-rcv"},
	 mark_session_set_ack_rcv_drop{YType::uint32, "mark-session-set-ack-rcv-drop"},
	 mark_session_set_ack_send{YType::uint32, "mark-session-set-ack-send"},
	 mark_session_set_ack_send_drop{YType::uint32, "mark-session-set-ack-send-drop"},
	 mark_session_set_nack_rcv{YType::uint32, "mark-session-set-nack-rcv"},
	 mark_session_set_nack_rcv_drop{YType::uint32, "mark-session-set-nack-rcv-drop"},
	 mark_session_set_nack_send{YType::uint32, "mark-session-set-nack-send"},
	 mark_session_set_nack_send_drop{YType::uint32, "mark-session-set-nack-send-drop"},
	 mark_session_set_rcv{YType::uint32, "mark-session-set-rcv"},
	 mark_session_set_rcv_drop{YType::uint32, "mark-session-set-rcv-drop"},
	 mark_session_set_send{YType::uint32, "mark-session-set-send"},
	 mark_session_set_send_drop{YType::uint32, "mark-session-set-send-drop"},
	 session_rcv{YType::uint32, "session-rcv"},
	 session_rcv_drop{YType::uint32, "session-rcv-drop"},
	 session_send{YType::uint32, "session-send"},
	 session_send_drop{YType::uint32, "session-send-drop"},
	 session_set_response_rcv{YType::uint32, "session-set-response-rcv"},
	 session_set_response_rcv_drop{YType::uint32, "session-set-response-rcv-drop"},
	 session_set_response_send{YType::uint32, "session-set-response-send"},
	 session_set_response_send_drop{YType::uint32, "session-set-response-send-drop"},
	 sweep_session_set_rcv{YType::uint32, "sweep-session-set-rcv"},
	 sweep_session_set_rcv_drop{YType::uint32, "sweep-session-set-rcv-drop"},
	 sweep_session_set_send{YType::uint32, "sweep-session-set-send"},
	 sweep_session_set_send_drop{YType::uint32, "sweep-session-set-send-drop"}
{
    yang_name = "common"; yang_parent_name = "audit-counters";
}

TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common::~Common()
{
}

bool TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common::has_data() const
{
    return abort.is_set
	|| mark_session_set_ack_rcv.is_set
	|| mark_session_set_ack_rcv_drop.is_set
	|| mark_session_set_ack_send.is_set
	|| mark_session_set_ack_send_drop.is_set
	|| mark_session_set_nack_rcv.is_set
	|| mark_session_set_nack_rcv_drop.is_set
	|| mark_session_set_nack_send.is_set
	|| mark_session_set_nack_send_drop.is_set
	|| mark_session_set_rcv.is_set
	|| mark_session_set_rcv_drop.is_set
	|| mark_session_set_send.is_set
	|| mark_session_set_send_drop.is_set
	|| session_rcv.is_set
	|| session_rcv_drop.is_set
	|| session_send.is_set
	|| session_send_drop.is_set
	|| session_set_response_rcv.is_set
	|| session_set_response_rcv_drop.is_set
	|| session_set_response_send.is_set
	|| session_set_response_send_drop.is_set
	|| sweep_session_set_rcv.is_set
	|| sweep_session_set_rcv_drop.is_set
	|| sweep_session_set_send.is_set
	|| sweep_session_set_send_drop.is_set;
}

bool TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common::has_operation() const
{
    return is_set(operation)
	|| is_set(abort.operation)
	|| is_set(mark_session_set_ack_rcv.operation)
	|| is_set(mark_session_set_ack_rcv_drop.operation)
	|| is_set(mark_session_set_ack_send.operation)
	|| is_set(mark_session_set_ack_send_drop.operation)
	|| is_set(mark_session_set_nack_rcv.operation)
	|| is_set(mark_session_set_nack_rcv_drop.operation)
	|| is_set(mark_session_set_nack_send.operation)
	|| is_set(mark_session_set_nack_send_drop.operation)
	|| is_set(mark_session_set_rcv.operation)
	|| is_set(mark_session_set_rcv_drop.operation)
	|| is_set(mark_session_set_send.operation)
	|| is_set(mark_session_set_send_drop.operation)
	|| is_set(session_rcv.operation)
	|| is_set(session_rcv_drop.operation)
	|| is_set(session_send.operation)
	|| is_set(session_send_drop.operation)
	|| is_set(session_set_response_rcv.operation)
	|| is_set(session_set_response_rcv_drop.operation)
	|| is_set(session_set_response_send.operation)
	|| is_set(session_set_response_send_drop.operation)
	|| is_set(sweep_session_set_rcv.operation)
	|| is_set(sweep_session_set_rcv_drop.operation)
	|| is_set(sweep_session_set_send.operation)
	|| is_set(sweep_session_set_send_drop.operation);
}

std::string TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common::get_entity_path(Entity* ancestor) const
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

    if (abort.is_set || is_set(abort.operation)) leaf_name_data.push_back(abort.get_name_leafdata());
    if (mark_session_set_ack_rcv.is_set || is_set(mark_session_set_ack_rcv.operation)) leaf_name_data.push_back(mark_session_set_ack_rcv.get_name_leafdata());
    if (mark_session_set_ack_rcv_drop.is_set || is_set(mark_session_set_ack_rcv_drop.operation)) leaf_name_data.push_back(mark_session_set_ack_rcv_drop.get_name_leafdata());
    if (mark_session_set_ack_send.is_set || is_set(mark_session_set_ack_send.operation)) leaf_name_data.push_back(mark_session_set_ack_send.get_name_leafdata());
    if (mark_session_set_ack_send_drop.is_set || is_set(mark_session_set_ack_send_drop.operation)) leaf_name_data.push_back(mark_session_set_ack_send_drop.get_name_leafdata());
    if (mark_session_set_nack_rcv.is_set || is_set(mark_session_set_nack_rcv.operation)) leaf_name_data.push_back(mark_session_set_nack_rcv.get_name_leafdata());
    if (mark_session_set_nack_rcv_drop.is_set || is_set(mark_session_set_nack_rcv_drop.operation)) leaf_name_data.push_back(mark_session_set_nack_rcv_drop.get_name_leafdata());
    if (mark_session_set_nack_send.is_set || is_set(mark_session_set_nack_send.operation)) leaf_name_data.push_back(mark_session_set_nack_send.get_name_leafdata());
    if (mark_session_set_nack_send_drop.is_set || is_set(mark_session_set_nack_send_drop.operation)) leaf_name_data.push_back(mark_session_set_nack_send_drop.get_name_leafdata());
    if (mark_session_set_rcv.is_set || is_set(mark_session_set_rcv.operation)) leaf_name_data.push_back(mark_session_set_rcv.get_name_leafdata());
    if (mark_session_set_rcv_drop.is_set || is_set(mark_session_set_rcv_drop.operation)) leaf_name_data.push_back(mark_session_set_rcv_drop.get_name_leafdata());
    if (mark_session_set_send.is_set || is_set(mark_session_set_send.operation)) leaf_name_data.push_back(mark_session_set_send.get_name_leafdata());
    if (mark_session_set_send_drop.is_set || is_set(mark_session_set_send_drop.operation)) leaf_name_data.push_back(mark_session_set_send_drop.get_name_leafdata());
    if (session_rcv.is_set || is_set(session_rcv.operation)) leaf_name_data.push_back(session_rcv.get_name_leafdata());
    if (session_rcv_drop.is_set || is_set(session_rcv_drop.operation)) leaf_name_data.push_back(session_rcv_drop.get_name_leafdata());
    if (session_send.is_set || is_set(session_send.operation)) leaf_name_data.push_back(session_send.get_name_leafdata());
    if (session_send_drop.is_set || is_set(session_send_drop.operation)) leaf_name_data.push_back(session_send_drop.get_name_leafdata());
    if (session_set_response_rcv.is_set || is_set(session_set_response_rcv.operation)) leaf_name_data.push_back(session_set_response_rcv.get_name_leafdata());
    if (session_set_response_rcv_drop.is_set || is_set(session_set_response_rcv_drop.operation)) leaf_name_data.push_back(session_set_response_rcv_drop.get_name_leafdata());
    if (session_set_response_send.is_set || is_set(session_set_response_send.operation)) leaf_name_data.push_back(session_set_response_send.get_name_leafdata());
    if (session_set_response_send_drop.is_set || is_set(session_set_response_send_drop.operation)) leaf_name_data.push_back(session_set_response_send_drop.get_name_leafdata());
    if (sweep_session_set_rcv.is_set || is_set(sweep_session_set_rcv.operation)) leaf_name_data.push_back(sweep_session_set_rcv.get_name_leafdata());
    if (sweep_session_set_rcv_drop.is_set || is_set(sweep_session_set_rcv_drop.operation)) leaf_name_data.push_back(sweep_session_set_rcv_drop.get_name_leafdata());
    if (sweep_session_set_send.is_set || is_set(sweep_session_set_send.operation)) leaf_name_data.push_back(sweep_session_set_send.get_name_leafdata());
    if (sweep_session_set_send_drop.is_set || is_set(sweep_session_set_send_drop.operation)) leaf_name_data.push_back(sweep_session_set_send_drop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common::get_children()
{
    return children;
}

void TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "abort")
    {
        abort = value;
    }
    if(value_path == "mark-session-set-ack-rcv")
    {
        mark_session_set_ack_rcv = value;
    }
    if(value_path == "mark-session-set-ack-rcv-drop")
    {
        mark_session_set_ack_rcv_drop = value;
    }
    if(value_path == "mark-session-set-ack-send")
    {
        mark_session_set_ack_send = value;
    }
    if(value_path == "mark-session-set-ack-send-drop")
    {
        mark_session_set_ack_send_drop = value;
    }
    if(value_path == "mark-session-set-nack-rcv")
    {
        mark_session_set_nack_rcv = value;
    }
    if(value_path == "mark-session-set-nack-rcv-drop")
    {
        mark_session_set_nack_rcv_drop = value;
    }
    if(value_path == "mark-session-set-nack-send")
    {
        mark_session_set_nack_send = value;
    }
    if(value_path == "mark-session-set-nack-send-drop")
    {
        mark_session_set_nack_send_drop = value;
    }
    if(value_path == "mark-session-set-rcv")
    {
        mark_session_set_rcv = value;
    }
    if(value_path == "mark-session-set-rcv-drop")
    {
        mark_session_set_rcv_drop = value;
    }
    if(value_path == "mark-session-set-send")
    {
        mark_session_set_send = value;
    }
    if(value_path == "mark-session-set-send-drop")
    {
        mark_session_set_send_drop = value;
    }
    if(value_path == "session-rcv")
    {
        session_rcv = value;
    }
    if(value_path == "session-rcv-drop")
    {
        session_rcv_drop = value;
    }
    if(value_path == "session-send")
    {
        session_send = value;
    }
    if(value_path == "session-send-drop")
    {
        session_send_drop = value;
    }
    if(value_path == "session-set-response-rcv")
    {
        session_set_response_rcv = value;
    }
    if(value_path == "session-set-response-rcv-drop")
    {
        session_set_response_rcv_drop = value;
    }
    if(value_path == "session-set-response-send")
    {
        session_set_response_send = value;
    }
    if(value_path == "session-set-response-send-drop")
    {
        session_set_response_send_drop = value;
    }
    if(value_path == "sweep-session-set-rcv")
    {
        sweep_session_set_rcv = value;
    }
    if(value_path == "sweep-session-set-rcv-drop")
    {
        sweep_session_set_rcv_drop = value;
    }
    if(value_path == "sweep-session-set-send")
    {
        sweep_session_set_send = value;
    }
    if(value_path == "sweep-session-set-send-drop")
    {
        sweep_session_set_send_drop = value;
    }
}

TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly::AggrOnly()
    :
    	mark_session_set_ack_rcv_drop_aggr{YType::uint32, "mark-session-set-ack-rcv-drop-aggr"},
	 mark_session_set_nack_rcv_drop_aggr{YType::uint32, "mark-session-set-nack-rcv-drop-aggr"},
	 mark_session_set_rcv_drop_aggr{YType::uint32, "mark-session-set-rcv-drop-aggr"},
	 session_rcv_drop_aggr{YType::uint32, "session-rcv-drop-aggr"},
	 session_set_response_rcv_drop_aggr{YType::uint32, "session-set-response-rcv-drop-aggr"},
	 sweep_session_set_rcv_drop_aggr{YType::uint32, "sweep-session-set-rcv-drop-aggr"}
{
    yang_name = "aggr-only"; yang_parent_name = "audit-counters";
}

TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly::~AggrOnly()
{
}

bool TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly::has_data() const
{
    return mark_session_set_ack_rcv_drop_aggr.is_set
	|| mark_session_set_nack_rcv_drop_aggr.is_set
	|| mark_session_set_rcv_drop_aggr.is_set
	|| session_rcv_drop_aggr.is_set
	|| session_set_response_rcv_drop_aggr.is_set
	|| sweep_session_set_rcv_drop_aggr.is_set;
}

bool TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly::has_operation() const
{
    return is_set(operation)
	|| is_set(mark_session_set_ack_rcv_drop_aggr.operation)
	|| is_set(mark_session_set_nack_rcv_drop_aggr.operation)
	|| is_set(mark_session_set_rcv_drop_aggr.operation)
	|| is_set(session_rcv_drop_aggr.operation)
	|| is_set(session_set_response_rcv_drop_aggr.operation)
	|| is_set(sweep_session_set_rcv_drop_aggr.operation);
}

std::string TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggr-only";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly::get_entity_path(Entity* ancestor) const
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

    if (mark_session_set_ack_rcv_drop_aggr.is_set || is_set(mark_session_set_ack_rcv_drop_aggr.operation)) leaf_name_data.push_back(mark_session_set_ack_rcv_drop_aggr.get_name_leafdata());
    if (mark_session_set_nack_rcv_drop_aggr.is_set || is_set(mark_session_set_nack_rcv_drop_aggr.operation)) leaf_name_data.push_back(mark_session_set_nack_rcv_drop_aggr.get_name_leafdata());
    if (mark_session_set_rcv_drop_aggr.is_set || is_set(mark_session_set_rcv_drop_aggr.operation)) leaf_name_data.push_back(mark_session_set_rcv_drop_aggr.get_name_leafdata());
    if (session_rcv_drop_aggr.is_set || is_set(session_rcv_drop_aggr.operation)) leaf_name_data.push_back(session_rcv_drop_aggr.get_name_leafdata());
    if (session_set_response_rcv_drop_aggr.is_set || is_set(session_set_response_rcv_drop_aggr.operation)) leaf_name_data.push_back(session_set_response_rcv_drop_aggr.get_name_leafdata());
    if (sweep_session_set_rcv_drop_aggr.is_set || is_set(sweep_session_set_rcv_drop_aggr.operation)) leaf_name_data.push_back(sweep_session_set_rcv_drop_aggr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly::get_children()
{
    return children;
}

void TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mark-session-set-ack-rcv-drop-aggr")
    {
        mark_session_set_ack_rcv_drop_aggr = value;
    }
    if(value_path == "mark-session-set-nack-rcv-drop-aggr")
    {
        mark_session_set_nack_rcv_drop_aggr = value;
    }
    if(value_path == "mark-session-set-rcv-drop-aggr")
    {
        mark_session_set_rcv_drop_aggr = value;
    }
    if(value_path == "session-rcv-drop-aggr")
    {
        session_rcv_drop_aggr = value;
    }
    if(value_path == "session-set-response-rcv-drop-aggr")
    {
        session_set_response_rcv_drop_aggr = value;
    }
    if(value_path == "sweep-session-set-rcv-drop-aggr")
    {
        sweep_session_set_rcv_drop_aggr = value;
    }
}

TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AuditCounters()
    :
    aggr_only(std::make_unique<TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly>())
	,common(std::make_unique<TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common>())
{
    aggr_only->parent = this;
    children["aggr-only"] = aggr_only.get();

    common->parent = this;
    children["common"] = common.get();

    yang_name = "audit-counters"; yang_parent_name = "summary";
}

TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::~AuditCounters()
{
}

bool TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::has_data() const
{
    return (aggr_only !=  nullptr && aggr_only->has_data())
	|| (common !=  nullptr && common->has_data());
}

bool TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::has_operation() const
{
    return is_set(operation)
	|| (aggr_only !=  nullptr && aggr_only->has_operation())
	|| (common !=  nullptr && common->has_operation());
}

std::string TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "audit-counters";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::get_entity_path(Entity* ancestor) const
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

Entity* TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "aggr-only")
    {
        if(aggr_only != nullptr)
        {
            children["aggr-only"] = aggr_only.get();
        }
        else
        {
            aggr_only = std::make_unique<TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::AggrOnly>();
            aggr_only->parent = this;
            children["aggr-only"] = aggr_only.get();
        }
        return children.at("aggr-only");
    }

    if(child_yang_name == "common")
    {
        if(common != nullptr)
        {
            children["common"] = common.get();
        }
        else
        {
            common = std::make_unique<TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::Common>();
            common->parent = this;
            children["common"] = common.get();
        }
        return children.at("common");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::get_children()
{
    if(children.find("aggr-only") == children.end())
    {
        if(aggr_only != nullptr)
        {
            children["aggr-only"] = aggr_only.get();
        }
    }

    if(children.find("common") == children.end())
    {
        if(common != nullptr)
        {
            children["common"] = common.get();
        }
    }

    return children;
}

void TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters::set_value(const std::string & value_path, std::string value)
{
}

TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic::NotificationStatistic()
    :
    	delivered_count{YType::uint32, "delivered-count"},
	 dropped_count{YType::uint32, "dropped-count"},
	 failed_count{YType::uint32, "failed-count"},
	 queued_count{YType::uint32, "queued-count"}
{
    yang_name = "notification-statistic"; yang_parent_name = "summary";
}

TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic::~NotificationStatistic()
{
}

bool TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic::has_data() const
{
    return delivered_count.is_set
	|| dropped_count.is_set
	|| failed_count.is_set
	|| queued_count.is_set;
}

bool TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(delivered_count.operation)
	|| is_set(dropped_count.operation)
	|| is_set(failed_count.operation)
	|| is_set(queued_count.operation);
}

std::string TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification-statistic";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic::get_entity_path(Entity* ancestor) const
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

    if (delivered_count.is_set || is_set(delivered_count.operation)) leaf_name_data.push_back(delivered_count.get_name_leafdata());
    if (dropped_count.is_set || is_set(dropped_count.operation)) leaf_name_data.push_back(dropped_count.get_name_leafdata());
    if (failed_count.is_set || is_set(failed_count.operation)) leaf_name_data.push_back(failed_count.get_name_leafdata());
    if (queued_count.is_set || is_set(queued_count.operation)) leaf_name_data.push_back(queued_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic::get_children()
{
    return children;
}

void TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delivered-count")
    {
        delivered_count = value;
    }
    if(value_path == "dropped-count")
    {
        dropped_count = value;
    }
    if(value_path == "failed-count")
    {
        failed_count = value;
    }
    if(value_path == "queued-count")
    {
        queued_count = value;
    }
}

TcpNsr::Nodes::Node::Statistics::Summary::Summary()
    :
    	held_packet_drops{YType::uint32, "held-packet-drops"},
	 internal_ack_drops_immediate_match{YType::uint32, "internal-ack-drops-immediate-match"},
	 internal_ack_drops_initsync_first_phase{YType::uint32, "internal-ack-drops-initsync-first-phase"},
	 internal_ack_drops_not_replicated{YType::uint32, "internal-ack-drops-not-replicated"},
	 internal_ack_drops_stale{YType::uint32, "internal-ack-drops-stale"},
	 last_cleared_time{YType::uint32, "last-cleared-time"},
	 number_of_added_sessions{YType::uint32, "number-of-added-sessions"},
	 number_of_attempted_init_sync{YType::uint32, "number-of-attempted-init-sync"},
	 number_of_connected_clients{YType::uint32, "number-of-connected-clients"},
	 number_of_created_session_sets{YType::uint32, "number-of-created-session-sets"},
	 number_of_current_clients{YType::uint32, "number-of-current-clients"},
	 number_of_current_session_sets{YType::uint32, "number-of-current-session-sets"},
	 number_of_current_sessions{YType::uint32, "number-of-current-sessions"},
	 number_of_deleted_sessions{YType::uint32, "number-of-deleted-sessions"},
	 number_of_destroyed_session_sets{YType::uint32, "number-of-destroyed-session-sets"},
	 number_of_disconnected_clients{YType::uint32, "number-of-disconnected-clients"},
	 number_of_failed_init_sync{YType::uint32, "number-of-failed-init-sync"},
	 number_of_held_but_dropped_internal_acks{YType::uint32, "number-of-held-but-dropped-internal-acks"},
	 number_of_held_but_dropped_packets{YType::uint32, "number-of-held-but-dropped-packets"},
	 number_of_held_internal_acks{YType::uint32, "number-of-held-internal-acks"},
	 number_of_held_packets{YType::uint32, "number-of-held-packets"},
	 number_of_internal_ack_drops_no_pcb{YType::uint32, "number-of-internal-ack-drops-no-pcb"},
	 number_of_internal_ack_drops_no_scbdp{YType::uint32, "number-of-internal-ack-drops-no-scbdp"},
	 number_of_partner_node{YType::uint32, "number-of-partner-node"},
	 number_of_qad_receive_messages_accepts{YType::uint32, "number-of-qad-receive-messages-accepts"},
	 number_of_qad_receive_messages_drops{YType::uint32, "number-of-qad-receive-messages-drops"},
	 number_of_qad_receive_messages_unknowns{YType::uint32, "number-of-qad-receive-messages-unknowns"},
	 number_of_qad_stale_receive_messages_drops{YType::uint32, "number-of-qad-stale-receive-messages-drops"},
	 number_of_qad_transfer_message_drops{YType::uint32, "number-of-qad-transfer-message-drops"},
	 number_of_qad_transfer_message_sent{YType::uint32, "number-of-qad-transfer-message-sent"},
	 number_of_received_internal_acks{YType::uint32, "number-of-received-internal-acks"},
	 number_of_sent_internal_acks{YType::uint32, "number-of-sent-internal-acks"},
	 number_of_succeeded_init_sync{YType::uint32, "number-of-succeeded-init-sync"}
    	,
    audit_counters(std::make_unique<TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters>())
	,snd_counters(std::make_unique<TcpNsr::Nodes::Node::Statistics::Summary::SndCounters>())
{
    audit_counters->parent = this;
    children["audit-counters"] = audit_counters.get();

    snd_counters->parent = this;
    children["snd-counters"] = snd_counters.get();

    yang_name = "summary"; yang_parent_name = "statistics";
}

TcpNsr::Nodes::Node::Statistics::Summary::~Summary()
{
}

bool TcpNsr::Nodes::Node::Statistics::Summary::has_data() const
{
    for (std::size_t index=0; index<notification_statistic.size(); index++)
    {
        if(notification_statistic[index]->has_data())
            return true;
    }
    return held_packet_drops.is_set
	|| internal_ack_drops_immediate_match.is_set
	|| internal_ack_drops_initsync_first_phase.is_set
	|| internal_ack_drops_not_replicated.is_set
	|| internal_ack_drops_stale.is_set
	|| last_cleared_time.is_set
	|| number_of_added_sessions.is_set
	|| number_of_attempted_init_sync.is_set
	|| number_of_connected_clients.is_set
	|| number_of_created_session_sets.is_set
	|| number_of_current_clients.is_set
	|| number_of_current_session_sets.is_set
	|| number_of_current_sessions.is_set
	|| number_of_deleted_sessions.is_set
	|| number_of_destroyed_session_sets.is_set
	|| number_of_disconnected_clients.is_set
	|| number_of_failed_init_sync.is_set
	|| number_of_held_but_dropped_internal_acks.is_set
	|| number_of_held_but_dropped_packets.is_set
	|| number_of_held_internal_acks.is_set
	|| number_of_held_packets.is_set
	|| number_of_internal_ack_drops_no_pcb.is_set
	|| number_of_internal_ack_drops_no_scbdp.is_set
	|| number_of_partner_node.is_set
	|| number_of_qad_receive_messages_accepts.is_set
	|| number_of_qad_receive_messages_drops.is_set
	|| number_of_qad_receive_messages_unknowns.is_set
	|| number_of_qad_stale_receive_messages_drops.is_set
	|| number_of_qad_transfer_message_drops.is_set
	|| number_of_qad_transfer_message_sent.is_set
	|| number_of_received_internal_acks.is_set
	|| number_of_sent_internal_acks.is_set
	|| number_of_succeeded_init_sync.is_set
	|| (audit_counters !=  nullptr && audit_counters->has_data())
	|| (snd_counters !=  nullptr && snd_counters->has_data());
}

bool TcpNsr::Nodes::Node::Statistics::Summary::has_operation() const
{
    for (std::size_t index=0; index<notification_statistic.size(); index++)
    {
        if(notification_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(held_packet_drops.operation)
	|| is_set(internal_ack_drops_immediate_match.operation)
	|| is_set(internal_ack_drops_initsync_first_phase.operation)
	|| is_set(internal_ack_drops_not_replicated.operation)
	|| is_set(internal_ack_drops_stale.operation)
	|| is_set(last_cleared_time.operation)
	|| is_set(number_of_added_sessions.operation)
	|| is_set(number_of_attempted_init_sync.operation)
	|| is_set(number_of_connected_clients.operation)
	|| is_set(number_of_created_session_sets.operation)
	|| is_set(number_of_current_clients.operation)
	|| is_set(number_of_current_session_sets.operation)
	|| is_set(number_of_current_sessions.operation)
	|| is_set(number_of_deleted_sessions.operation)
	|| is_set(number_of_destroyed_session_sets.operation)
	|| is_set(number_of_disconnected_clients.operation)
	|| is_set(number_of_failed_init_sync.operation)
	|| is_set(number_of_held_but_dropped_internal_acks.operation)
	|| is_set(number_of_held_but_dropped_packets.operation)
	|| is_set(number_of_held_internal_acks.operation)
	|| is_set(number_of_held_packets.operation)
	|| is_set(number_of_internal_ack_drops_no_pcb.operation)
	|| is_set(number_of_internal_ack_drops_no_scbdp.operation)
	|| is_set(number_of_partner_node.operation)
	|| is_set(number_of_qad_receive_messages_accepts.operation)
	|| is_set(number_of_qad_receive_messages_drops.operation)
	|| is_set(number_of_qad_receive_messages_unknowns.operation)
	|| is_set(number_of_qad_stale_receive_messages_drops.operation)
	|| is_set(number_of_qad_transfer_message_drops.operation)
	|| is_set(number_of_qad_transfer_message_sent.operation)
	|| is_set(number_of_received_internal_acks.operation)
	|| is_set(number_of_sent_internal_acks.operation)
	|| is_set(number_of_succeeded_init_sync.operation)
	|| (audit_counters !=  nullptr && audit_counters->has_operation())
	|| (snd_counters !=  nullptr && snd_counters->has_operation());
}

std::string TcpNsr::Nodes::Node::Statistics::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Statistics::Summary::get_entity_path(Entity* ancestor) const
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

    if (held_packet_drops.is_set || is_set(held_packet_drops.operation)) leaf_name_data.push_back(held_packet_drops.get_name_leafdata());
    if (internal_ack_drops_immediate_match.is_set || is_set(internal_ack_drops_immediate_match.operation)) leaf_name_data.push_back(internal_ack_drops_immediate_match.get_name_leafdata());
    if (internal_ack_drops_initsync_first_phase.is_set || is_set(internal_ack_drops_initsync_first_phase.operation)) leaf_name_data.push_back(internal_ack_drops_initsync_first_phase.get_name_leafdata());
    if (internal_ack_drops_not_replicated.is_set || is_set(internal_ack_drops_not_replicated.operation)) leaf_name_data.push_back(internal_ack_drops_not_replicated.get_name_leafdata());
    if (internal_ack_drops_stale.is_set || is_set(internal_ack_drops_stale.operation)) leaf_name_data.push_back(internal_ack_drops_stale.get_name_leafdata());
    if (last_cleared_time.is_set || is_set(last_cleared_time.operation)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());
    if (number_of_added_sessions.is_set || is_set(number_of_added_sessions.operation)) leaf_name_data.push_back(number_of_added_sessions.get_name_leafdata());
    if (number_of_attempted_init_sync.is_set || is_set(number_of_attempted_init_sync.operation)) leaf_name_data.push_back(number_of_attempted_init_sync.get_name_leafdata());
    if (number_of_connected_clients.is_set || is_set(number_of_connected_clients.operation)) leaf_name_data.push_back(number_of_connected_clients.get_name_leafdata());
    if (number_of_created_session_sets.is_set || is_set(number_of_created_session_sets.operation)) leaf_name_data.push_back(number_of_created_session_sets.get_name_leafdata());
    if (number_of_current_clients.is_set || is_set(number_of_current_clients.operation)) leaf_name_data.push_back(number_of_current_clients.get_name_leafdata());
    if (number_of_current_session_sets.is_set || is_set(number_of_current_session_sets.operation)) leaf_name_data.push_back(number_of_current_session_sets.get_name_leafdata());
    if (number_of_current_sessions.is_set || is_set(number_of_current_sessions.operation)) leaf_name_data.push_back(number_of_current_sessions.get_name_leafdata());
    if (number_of_deleted_sessions.is_set || is_set(number_of_deleted_sessions.operation)) leaf_name_data.push_back(number_of_deleted_sessions.get_name_leafdata());
    if (number_of_destroyed_session_sets.is_set || is_set(number_of_destroyed_session_sets.operation)) leaf_name_data.push_back(number_of_destroyed_session_sets.get_name_leafdata());
    if (number_of_disconnected_clients.is_set || is_set(number_of_disconnected_clients.operation)) leaf_name_data.push_back(number_of_disconnected_clients.get_name_leafdata());
    if (number_of_failed_init_sync.is_set || is_set(number_of_failed_init_sync.operation)) leaf_name_data.push_back(number_of_failed_init_sync.get_name_leafdata());
    if (number_of_held_but_dropped_internal_acks.is_set || is_set(number_of_held_but_dropped_internal_acks.operation)) leaf_name_data.push_back(number_of_held_but_dropped_internal_acks.get_name_leafdata());
    if (number_of_held_but_dropped_packets.is_set || is_set(number_of_held_but_dropped_packets.operation)) leaf_name_data.push_back(number_of_held_but_dropped_packets.get_name_leafdata());
    if (number_of_held_internal_acks.is_set || is_set(number_of_held_internal_acks.operation)) leaf_name_data.push_back(number_of_held_internal_acks.get_name_leafdata());
    if (number_of_held_packets.is_set || is_set(number_of_held_packets.operation)) leaf_name_data.push_back(number_of_held_packets.get_name_leafdata());
    if (number_of_internal_ack_drops_no_pcb.is_set || is_set(number_of_internal_ack_drops_no_pcb.operation)) leaf_name_data.push_back(number_of_internal_ack_drops_no_pcb.get_name_leafdata());
    if (number_of_internal_ack_drops_no_scbdp.is_set || is_set(number_of_internal_ack_drops_no_scbdp.operation)) leaf_name_data.push_back(number_of_internal_ack_drops_no_scbdp.get_name_leafdata());
    if (number_of_partner_node.is_set || is_set(number_of_partner_node.operation)) leaf_name_data.push_back(number_of_partner_node.get_name_leafdata());
    if (number_of_qad_receive_messages_accepts.is_set || is_set(number_of_qad_receive_messages_accepts.operation)) leaf_name_data.push_back(number_of_qad_receive_messages_accepts.get_name_leafdata());
    if (number_of_qad_receive_messages_drops.is_set || is_set(number_of_qad_receive_messages_drops.operation)) leaf_name_data.push_back(number_of_qad_receive_messages_drops.get_name_leafdata());
    if (number_of_qad_receive_messages_unknowns.is_set || is_set(number_of_qad_receive_messages_unknowns.operation)) leaf_name_data.push_back(number_of_qad_receive_messages_unknowns.get_name_leafdata());
    if (number_of_qad_stale_receive_messages_drops.is_set || is_set(number_of_qad_stale_receive_messages_drops.operation)) leaf_name_data.push_back(number_of_qad_stale_receive_messages_drops.get_name_leafdata());
    if (number_of_qad_transfer_message_drops.is_set || is_set(number_of_qad_transfer_message_drops.operation)) leaf_name_data.push_back(number_of_qad_transfer_message_drops.get_name_leafdata());
    if (number_of_qad_transfer_message_sent.is_set || is_set(number_of_qad_transfer_message_sent.operation)) leaf_name_data.push_back(number_of_qad_transfer_message_sent.get_name_leafdata());
    if (number_of_received_internal_acks.is_set || is_set(number_of_received_internal_acks.operation)) leaf_name_data.push_back(number_of_received_internal_acks.get_name_leafdata());
    if (number_of_sent_internal_acks.is_set || is_set(number_of_sent_internal_acks.operation)) leaf_name_data.push_back(number_of_sent_internal_acks.get_name_leafdata());
    if (number_of_succeeded_init_sync.is_set || is_set(number_of_succeeded_init_sync.operation)) leaf_name_data.push_back(number_of_succeeded_init_sync.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpNsr::Nodes::Node::Statistics::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "audit-counters")
    {
        if(audit_counters != nullptr)
        {
            children["audit-counters"] = audit_counters.get();
        }
        else
        {
            audit_counters = std::make_unique<TcpNsr::Nodes::Node::Statistics::Summary::AuditCounters>();
            audit_counters->parent = this;
            children["audit-counters"] = audit_counters.get();
        }
        return children.at("audit-counters");
    }

    if(child_yang_name == "notification-statistic")
    {
        for(auto const & c : notification_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TcpNsr::Nodes::Node::Statistics::Summary::NotificationStatistic>();
        c->parent = this;
        notification_statistic.push_back(std::move(c));
        children[segment_path] = notification_statistic.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "snd-counters")
    {
        if(snd_counters != nullptr)
        {
            children["snd-counters"] = snd_counters.get();
        }
        else
        {
            snd_counters = std::make_unique<TcpNsr::Nodes::Node::Statistics::Summary::SndCounters>();
            snd_counters->parent = this;
            children["snd-counters"] = snd_counters.get();
        }
        return children.at("snd-counters");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Statistics::Summary::get_children()
{
    if(children.find("audit-counters") == children.end())
    {
        if(audit_counters != nullptr)
        {
            children["audit-counters"] = audit_counters.get();
        }
    }

    for (auto const & c : notification_statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("snd-counters") == children.end())
    {
        if(snd_counters != nullptr)
        {
            children["snd-counters"] = snd_counters.get();
        }
    }

    return children;
}

void TcpNsr::Nodes::Node::Statistics::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "held-packet-drops")
    {
        held_packet_drops = value;
    }
    if(value_path == "internal-ack-drops-immediate-match")
    {
        internal_ack_drops_immediate_match = value;
    }
    if(value_path == "internal-ack-drops-initsync-first-phase")
    {
        internal_ack_drops_initsync_first_phase = value;
    }
    if(value_path == "internal-ack-drops-not-replicated")
    {
        internal_ack_drops_not_replicated = value;
    }
    if(value_path == "internal-ack-drops-stale")
    {
        internal_ack_drops_stale = value;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
    }
    if(value_path == "number-of-added-sessions")
    {
        number_of_added_sessions = value;
    }
    if(value_path == "number-of-attempted-init-sync")
    {
        number_of_attempted_init_sync = value;
    }
    if(value_path == "number-of-connected-clients")
    {
        number_of_connected_clients = value;
    }
    if(value_path == "number-of-created-session-sets")
    {
        number_of_created_session_sets = value;
    }
    if(value_path == "number-of-current-clients")
    {
        number_of_current_clients = value;
    }
    if(value_path == "number-of-current-session-sets")
    {
        number_of_current_session_sets = value;
    }
    if(value_path == "number-of-current-sessions")
    {
        number_of_current_sessions = value;
    }
    if(value_path == "number-of-deleted-sessions")
    {
        number_of_deleted_sessions = value;
    }
    if(value_path == "number-of-destroyed-session-sets")
    {
        number_of_destroyed_session_sets = value;
    }
    if(value_path == "number-of-disconnected-clients")
    {
        number_of_disconnected_clients = value;
    }
    if(value_path == "number-of-failed-init-sync")
    {
        number_of_failed_init_sync = value;
    }
    if(value_path == "number-of-held-but-dropped-internal-acks")
    {
        number_of_held_but_dropped_internal_acks = value;
    }
    if(value_path == "number-of-held-but-dropped-packets")
    {
        number_of_held_but_dropped_packets = value;
    }
    if(value_path == "number-of-held-internal-acks")
    {
        number_of_held_internal_acks = value;
    }
    if(value_path == "number-of-held-packets")
    {
        number_of_held_packets = value;
    }
    if(value_path == "number-of-internal-ack-drops-no-pcb")
    {
        number_of_internal_ack_drops_no_pcb = value;
    }
    if(value_path == "number-of-internal-ack-drops-no-scbdp")
    {
        number_of_internal_ack_drops_no_scbdp = value;
    }
    if(value_path == "number-of-partner-node")
    {
        number_of_partner_node = value;
    }
    if(value_path == "number-of-qad-receive-messages-accepts")
    {
        number_of_qad_receive_messages_accepts = value;
    }
    if(value_path == "number-of-qad-receive-messages-drops")
    {
        number_of_qad_receive_messages_drops = value;
    }
    if(value_path == "number-of-qad-receive-messages-unknowns")
    {
        number_of_qad_receive_messages_unknowns = value;
    }
    if(value_path == "number-of-qad-stale-receive-messages-drops")
    {
        number_of_qad_stale_receive_messages_drops = value;
    }
    if(value_path == "number-of-qad-transfer-message-drops")
    {
        number_of_qad_transfer_message_drops = value;
    }
    if(value_path == "number-of-qad-transfer-message-sent")
    {
        number_of_qad_transfer_message_sent = value;
    }
    if(value_path == "number-of-received-internal-acks")
    {
        number_of_received_internal_acks = value;
    }
    if(value_path == "number-of-sent-internal-acks")
    {
        number_of_sent_internal_acks = value;
    }
    if(value_path == "number-of-succeeded-init-sync")
    {
        number_of_succeeded_init_sync = value;
    }
}

TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic::NotificationStatistic()
    :
    	delivered_count{YType::uint32, "delivered-count"},
	 dropped_count{YType::uint32, "dropped-count"},
	 failed_count{YType::uint32, "failed-count"},
	 queued_count{YType::uint32, "queued-count"}
{
    yang_name = "notification-statistic"; yang_parent_name = "statistic-client";
}

TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic::~NotificationStatistic()
{
}

bool TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic::has_data() const
{
    return delivered_count.is_set
	|| dropped_count.is_set
	|| failed_count.is_set
	|| queued_count.is_set;
}

bool TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(delivered_count.operation)
	|| is_set(dropped_count.operation)
	|| is_set(failed_count.operation)
	|| is_set(queued_count.operation);
}

std::string TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification-statistic";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic::get_entity_path(Entity* ancestor) const
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

    if (delivered_count.is_set || is_set(delivered_count.operation)) leaf_name_data.push_back(delivered_count.get_name_leafdata());
    if (dropped_count.is_set || is_set(dropped_count.operation)) leaf_name_data.push_back(dropped_count.get_name_leafdata());
    if (failed_count.is_set || is_set(failed_count.operation)) leaf_name_data.push_back(failed_count.get_name_leafdata());
    if (queued_count.is_set || is_set(queued_count.operation)) leaf_name_data.push_back(queued_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic::get_children()
{
    return children;
}

void TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delivered-count")
    {
        delivered_count = value;
    }
    if(value_path == "dropped-count")
    {
        dropped_count = value;
    }
    if(value_path == "failed-count")
    {
        failed_count = value;
    }
    if(value_path == "queued-count")
    {
        queued_count = value;
    }
}

TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::StatisticClient()
    :
    	id{YType::str, "id"},
	 ccb{YType::uint64, "ccb"},
	 connected_at{YType::uint32, "connected-at"},
	 instance{YType::uint32, "instance"},
	 job_id{YType::int32, "job-id"},
	 last_cleared_time{YType::uint32, "last-cleared-time"},
	 number_of_created_sscb{YType::uint32, "number-of-created-sscb"},
	 number_of_deleted_sscb{YType::uint32, "number-of-deleted-sscb"},
	 pid{YType::uint32, "pid"},
	 process_name{YType::str, "process-name"}
{
    yang_name = "statistic-client"; yang_parent_name = "statistic-clients";
}

TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::~StatisticClient()
{
}

bool TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::has_data() const
{
    for (std::size_t index=0; index<notification_statistic.size(); index++)
    {
        if(notification_statistic[index]->has_data())
            return true;
    }
    return id.is_set
	|| ccb.is_set
	|| connected_at.is_set
	|| instance.is_set
	|| job_id.is_set
	|| last_cleared_time.is_set
	|| number_of_created_sscb.is_set
	|| number_of_deleted_sscb.is_set
	|| pid.is_set
	|| process_name.is_set;
}

bool TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::has_operation() const
{
    for (std::size_t index=0; index<notification_statistic.size(); index++)
    {
        if(notification_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(ccb.operation)
	|| is_set(connected_at.operation)
	|| is_set(instance.operation)
	|| is_set(job_id.operation)
	|| is_set(last_cleared_time.operation)
	|| is_set(number_of_created_sscb.operation)
	|| is_set(number_of_deleted_sscb.operation)
	|| is_set(pid.operation)
	|| is_set(process_name.operation);
}

std::string TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic-client" <<"[id='" <<id.get() <<"']";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ccb.is_set || is_set(ccb.operation)) leaf_name_data.push_back(ccb.get_name_leafdata());
    if (connected_at.is_set || is_set(connected_at.operation)) leaf_name_data.push_back(connected_at.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (job_id.is_set || is_set(job_id.operation)) leaf_name_data.push_back(job_id.get_name_leafdata());
    if (last_cleared_time.is_set || is_set(last_cleared_time.operation)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());
    if (number_of_created_sscb.is_set || is_set(number_of_created_sscb.operation)) leaf_name_data.push_back(number_of_created_sscb.get_name_leafdata());
    if (number_of_deleted_sscb.is_set || is_set(number_of_deleted_sscb.operation)) leaf_name_data.push_back(number_of_deleted_sscb.get_name_leafdata());
    if (pid.is_set || is_set(pid.operation)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.operation)) leaf_name_data.push_back(process_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "notification-statistic")
    {
        for(auto const & c : notification_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::NotificationStatistic>();
        c->parent = this;
        notification_statistic.push_back(std::move(c));
        children[segment_path] = notification_statistic.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::get_children()
{
    for (auto const & c : notification_statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "ccb")
    {
        ccb = value;
    }
    if(value_path == "connected-at")
    {
        connected_at = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "job-id")
    {
        job_id = value;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
    }
    if(value_path == "number-of-created-sscb")
    {
        number_of_created_sscb = value;
    }
    if(value_path == "number-of-deleted-sscb")
    {
        number_of_deleted_sscb = value;
    }
    if(value_path == "pid")
    {
        pid = value;
    }
    if(value_path == "process-name")
    {
        process_name = value;
    }
}

TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClients()
{
    yang_name = "statistic-clients"; yang_parent_name = "statistics";
}

TcpNsr::Nodes::Node::Statistics::StatisticClients::~StatisticClients()
{
}

bool TcpNsr::Nodes::Node::Statistics::StatisticClients::has_data() const
{
    for (std::size_t index=0; index<statistic_client.size(); index++)
    {
        if(statistic_client[index]->has_data())
            return true;
    }
    return false;
}

bool TcpNsr::Nodes::Node::Statistics::StatisticClients::has_operation() const
{
    for (std::size_t index=0; index<statistic_client.size(); index++)
    {
        if(statistic_client[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TcpNsr::Nodes::Node::Statistics::StatisticClients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic-clients";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Statistics::StatisticClients::get_entity_path(Entity* ancestor) const
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

Entity* TcpNsr::Nodes::Node::Statistics::StatisticClients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statistic-client")
    {
        for(auto const & c : statistic_client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TcpNsr::Nodes::Node::Statistics::StatisticClients::StatisticClient>();
        c->parent = this;
        statistic_client.push_back(std::move(c));
        children[segment_path] = statistic_client.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Statistics::StatisticClients::get_children()
{
    for (auto const & c : statistic_client)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TcpNsr::Nodes::Node::Statistics::StatisticClients::set_value(const std::string & value_path, std::string value)
{
}

TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet::StatisticSet()
    :
    	id{YType::str, "id"},
	 last_cleared_time{YType::uint32, "last-cleared-time"},
	 number_of_attempted_init_sync{YType::uint32, "number-of-attempted-init-sync"},
	 number_of_failed_init_sync{YType::uint32, "number-of-failed-init-sync"},
	 number_of_failover{YType::uint32, "number-of-failover"},
	 number_of_nsr_resets{YType::uint32, "number-of-nsr-resets"},
	 number_of_succeeded_init_sync{YType::uint32, "number-of-succeeded-init-sync"},
	 set_id{YType::uint32, "set-id"},
	 sscb{YType::uint64, "sscb"}
{
    yang_name = "statistic-set"; yang_parent_name = "statistic-sets";
}

TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet::~StatisticSet()
{
}

bool TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet::has_data() const
{
    return id.is_set
	|| last_cleared_time.is_set
	|| number_of_attempted_init_sync.is_set
	|| number_of_failed_init_sync.is_set
	|| number_of_failover.is_set
	|| number_of_nsr_resets.is_set
	|| number_of_succeeded_init_sync.is_set
	|| set_id.is_set
	|| sscb.is_set;
}

bool TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(last_cleared_time.operation)
	|| is_set(number_of_attempted_init_sync.operation)
	|| is_set(number_of_failed_init_sync.operation)
	|| is_set(number_of_failover.operation)
	|| is_set(number_of_nsr_resets.operation)
	|| is_set(number_of_succeeded_init_sync.operation)
	|| is_set(set_id.operation)
	|| is_set(sscb.operation);
}

std::string TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic-set" <<"[id='" <<id.get() <<"']";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (last_cleared_time.is_set || is_set(last_cleared_time.operation)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());
    if (number_of_attempted_init_sync.is_set || is_set(number_of_attempted_init_sync.operation)) leaf_name_data.push_back(number_of_attempted_init_sync.get_name_leafdata());
    if (number_of_failed_init_sync.is_set || is_set(number_of_failed_init_sync.operation)) leaf_name_data.push_back(number_of_failed_init_sync.get_name_leafdata());
    if (number_of_failover.is_set || is_set(number_of_failover.operation)) leaf_name_data.push_back(number_of_failover.get_name_leafdata());
    if (number_of_nsr_resets.is_set || is_set(number_of_nsr_resets.operation)) leaf_name_data.push_back(number_of_nsr_resets.get_name_leafdata());
    if (number_of_succeeded_init_sync.is_set || is_set(number_of_succeeded_init_sync.operation)) leaf_name_data.push_back(number_of_succeeded_init_sync.get_name_leafdata());
    if (set_id.is_set || is_set(set_id.operation)) leaf_name_data.push_back(set_id.get_name_leafdata());
    if (sscb.is_set || is_set(sscb.operation)) leaf_name_data.push_back(sscb.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet::get_children()
{
    return children;
}

void TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
    }
    if(value_path == "number-of-attempted-init-sync")
    {
        number_of_attempted_init_sync = value;
    }
    if(value_path == "number-of-failed-init-sync")
    {
        number_of_failed_init_sync = value;
    }
    if(value_path == "number-of-failover")
    {
        number_of_failover = value;
    }
    if(value_path == "number-of-nsr-resets")
    {
        number_of_nsr_resets = value;
    }
    if(value_path == "number-of-succeeded-init-sync")
    {
        number_of_succeeded_init_sync = value;
    }
    if(value_path == "set-id")
    {
        set_id = value;
    }
    if(value_path == "sscb")
    {
        sscb = value;
    }
}

TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSets()
{
    yang_name = "statistic-sets"; yang_parent_name = "statistics";
}

TcpNsr::Nodes::Node::Statistics::StatisticSets::~StatisticSets()
{
}

bool TcpNsr::Nodes::Node::Statistics::StatisticSets::has_data() const
{
    for (std::size_t index=0; index<statistic_set.size(); index++)
    {
        if(statistic_set[index]->has_data())
            return true;
    }
    return false;
}

bool TcpNsr::Nodes::Node::Statistics::StatisticSets::has_operation() const
{
    for (std::size_t index=0; index<statistic_set.size(); index++)
    {
        if(statistic_set[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TcpNsr::Nodes::Node::Statistics::StatisticSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic-sets";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Statistics::StatisticSets::get_entity_path(Entity* ancestor) const
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

Entity* TcpNsr::Nodes::Node::Statistics::StatisticSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statistic-set")
    {
        for(auto const & c : statistic_set)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TcpNsr::Nodes::Node::Statistics::StatisticSets::StatisticSet>();
        c->parent = this;
        statistic_set.push_back(std::move(c));
        children[segment_path] = statistic_set.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Statistics::StatisticSets::get_children()
{
    for (auto const & c : statistic_set)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TcpNsr::Nodes::Node::Statistics::StatisticSets::set_value(const std::string & value_path, std::string value)
{
}

TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters::SndCounters()
    :
    	cleanup_rcv{YType::uint32, "cleanup-rcv"},
	 cleanup_rcv_fail_buffer_trim{YType::uint32, "cleanup-rcv-fail-buffer-trim"},
	 cleanup_rcv_success{YType::uint32, "cleanup-rcv-success"},
	 cleanup_send{YType::uint32, "cleanup-send"},
	 cleanup_send_drop{YType::uint32, "cleanup-send-drop"},
	 data_xfer_rcv{YType::uint32, "data-xfer-rcv"},
	 data_xfer_rcv_fail_buffer_trim{YType::uint32, "data-xfer-rcv-fail-buffer-trim"},
	 data_xfer_rcv_fail_snd_una_out_of_sync{YType::uint32, "data-xfer-rcv-fail-snd-una-out-of-sync"},
	 data_xfer_rcv_success{YType::uint32, "data-xfer-rcv-success"},
	 data_xfer_send{YType::uint32, "data-xfer-send"},
	 data_xfer_send_drop{YType::uint32, "data-xfer-send-drop"},
	 data_xfer_send_iov_alloc{YType::uint32, "data-xfer-send-iov-alloc"},
	 data_xfer_send_total{YType::uint64, "data-xfer-send-total"},
	 nack_rcv{YType::uint32, "nack-rcv"},
	 nack_rcv_fail_data_send{YType::uint32, "nack-rcv-fail-data-send"},
	 nack_rcv_success{YType::uint32, "nack-rcv-success"},
	 nack_send{YType::uint32, "nack-send"},
	 nack_send_drop{YType::uint32, "nack-send-drop"},
	 seg_instr_rcv{YType::uint32, "seg-instr-rcv"},
	 seg_instr_rcv_fail_buffer_trim{YType::uint32, "seg-instr-rcv-fail-buffer-trim"},
	 seg_instr_rcv_fail_tcp_process{YType::uint32, "seg-instr-rcv-fail-tcp-process"},
	 seg_instr_rcv_success{YType::uint32, "seg-instr-rcv-success"},
	 seg_instr_send{YType::uint32, "seg-instr-send"},
	 seg_instr_send_drop{YType::uint32, "seg-instr-send-drop"},
	 seg_instr_send_units{YType::uint32, "seg-instr-send-units"}
{
    yang_name = "snd-counters"; yang_parent_name = "statistic-session";
}

TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters::~SndCounters()
{
}

bool TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters::has_data() const
{
    return cleanup_rcv.is_set
	|| cleanup_rcv_fail_buffer_trim.is_set
	|| cleanup_rcv_success.is_set
	|| cleanup_send.is_set
	|| cleanup_send_drop.is_set
	|| data_xfer_rcv.is_set
	|| data_xfer_rcv_fail_buffer_trim.is_set
	|| data_xfer_rcv_fail_snd_una_out_of_sync.is_set
	|| data_xfer_rcv_success.is_set
	|| data_xfer_send.is_set
	|| data_xfer_send_drop.is_set
	|| data_xfer_send_iov_alloc.is_set
	|| data_xfer_send_total.is_set
	|| nack_rcv.is_set
	|| nack_rcv_fail_data_send.is_set
	|| nack_rcv_success.is_set
	|| nack_send.is_set
	|| nack_send_drop.is_set
	|| seg_instr_rcv.is_set
	|| seg_instr_rcv_fail_buffer_trim.is_set
	|| seg_instr_rcv_fail_tcp_process.is_set
	|| seg_instr_rcv_success.is_set
	|| seg_instr_send.is_set
	|| seg_instr_send_drop.is_set
	|| seg_instr_send_units.is_set;
}

bool TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(cleanup_rcv.operation)
	|| is_set(cleanup_rcv_fail_buffer_trim.operation)
	|| is_set(cleanup_rcv_success.operation)
	|| is_set(cleanup_send.operation)
	|| is_set(cleanup_send_drop.operation)
	|| is_set(data_xfer_rcv.operation)
	|| is_set(data_xfer_rcv_fail_buffer_trim.operation)
	|| is_set(data_xfer_rcv_fail_snd_una_out_of_sync.operation)
	|| is_set(data_xfer_rcv_success.operation)
	|| is_set(data_xfer_send.operation)
	|| is_set(data_xfer_send_drop.operation)
	|| is_set(data_xfer_send_iov_alloc.operation)
	|| is_set(data_xfer_send_total.operation)
	|| is_set(nack_rcv.operation)
	|| is_set(nack_rcv_fail_data_send.operation)
	|| is_set(nack_rcv_success.operation)
	|| is_set(nack_send.operation)
	|| is_set(nack_send_drop.operation)
	|| is_set(seg_instr_rcv.operation)
	|| is_set(seg_instr_rcv_fail_buffer_trim.operation)
	|| is_set(seg_instr_rcv_fail_tcp_process.operation)
	|| is_set(seg_instr_rcv_success.operation)
	|| is_set(seg_instr_send.operation)
	|| is_set(seg_instr_send_drop.operation)
	|| is_set(seg_instr_send_units.operation);
}

std::string TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snd-counters";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters::get_entity_path(Entity* ancestor) const
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

    if (cleanup_rcv.is_set || is_set(cleanup_rcv.operation)) leaf_name_data.push_back(cleanup_rcv.get_name_leafdata());
    if (cleanup_rcv_fail_buffer_trim.is_set || is_set(cleanup_rcv_fail_buffer_trim.operation)) leaf_name_data.push_back(cleanup_rcv_fail_buffer_trim.get_name_leafdata());
    if (cleanup_rcv_success.is_set || is_set(cleanup_rcv_success.operation)) leaf_name_data.push_back(cleanup_rcv_success.get_name_leafdata());
    if (cleanup_send.is_set || is_set(cleanup_send.operation)) leaf_name_data.push_back(cleanup_send.get_name_leafdata());
    if (cleanup_send_drop.is_set || is_set(cleanup_send_drop.operation)) leaf_name_data.push_back(cleanup_send_drop.get_name_leafdata());
    if (data_xfer_rcv.is_set || is_set(data_xfer_rcv.operation)) leaf_name_data.push_back(data_xfer_rcv.get_name_leafdata());
    if (data_xfer_rcv_fail_buffer_trim.is_set || is_set(data_xfer_rcv_fail_buffer_trim.operation)) leaf_name_data.push_back(data_xfer_rcv_fail_buffer_trim.get_name_leafdata());
    if (data_xfer_rcv_fail_snd_una_out_of_sync.is_set || is_set(data_xfer_rcv_fail_snd_una_out_of_sync.operation)) leaf_name_data.push_back(data_xfer_rcv_fail_snd_una_out_of_sync.get_name_leafdata());
    if (data_xfer_rcv_success.is_set || is_set(data_xfer_rcv_success.operation)) leaf_name_data.push_back(data_xfer_rcv_success.get_name_leafdata());
    if (data_xfer_send.is_set || is_set(data_xfer_send.operation)) leaf_name_data.push_back(data_xfer_send.get_name_leafdata());
    if (data_xfer_send_drop.is_set || is_set(data_xfer_send_drop.operation)) leaf_name_data.push_back(data_xfer_send_drop.get_name_leafdata());
    if (data_xfer_send_iov_alloc.is_set || is_set(data_xfer_send_iov_alloc.operation)) leaf_name_data.push_back(data_xfer_send_iov_alloc.get_name_leafdata());
    if (data_xfer_send_total.is_set || is_set(data_xfer_send_total.operation)) leaf_name_data.push_back(data_xfer_send_total.get_name_leafdata());
    if (nack_rcv.is_set || is_set(nack_rcv.operation)) leaf_name_data.push_back(nack_rcv.get_name_leafdata());
    if (nack_rcv_fail_data_send.is_set || is_set(nack_rcv_fail_data_send.operation)) leaf_name_data.push_back(nack_rcv_fail_data_send.get_name_leafdata());
    if (nack_rcv_success.is_set || is_set(nack_rcv_success.operation)) leaf_name_data.push_back(nack_rcv_success.get_name_leafdata());
    if (nack_send.is_set || is_set(nack_send.operation)) leaf_name_data.push_back(nack_send.get_name_leafdata());
    if (nack_send_drop.is_set || is_set(nack_send_drop.operation)) leaf_name_data.push_back(nack_send_drop.get_name_leafdata());
    if (seg_instr_rcv.is_set || is_set(seg_instr_rcv.operation)) leaf_name_data.push_back(seg_instr_rcv.get_name_leafdata());
    if (seg_instr_rcv_fail_buffer_trim.is_set || is_set(seg_instr_rcv_fail_buffer_trim.operation)) leaf_name_data.push_back(seg_instr_rcv_fail_buffer_trim.get_name_leafdata());
    if (seg_instr_rcv_fail_tcp_process.is_set || is_set(seg_instr_rcv_fail_tcp_process.operation)) leaf_name_data.push_back(seg_instr_rcv_fail_tcp_process.get_name_leafdata());
    if (seg_instr_rcv_success.is_set || is_set(seg_instr_rcv_success.operation)) leaf_name_data.push_back(seg_instr_rcv_success.get_name_leafdata());
    if (seg_instr_send.is_set || is_set(seg_instr_send.operation)) leaf_name_data.push_back(seg_instr_send.get_name_leafdata());
    if (seg_instr_send_drop.is_set || is_set(seg_instr_send_drop.operation)) leaf_name_data.push_back(seg_instr_send_drop.get_name_leafdata());
    if (seg_instr_send_units.is_set || is_set(seg_instr_send_units.operation)) leaf_name_data.push_back(seg_instr_send_units.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters::get_children()
{
    return children;
}

void TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cleanup-rcv")
    {
        cleanup_rcv = value;
    }
    if(value_path == "cleanup-rcv-fail-buffer-trim")
    {
        cleanup_rcv_fail_buffer_trim = value;
    }
    if(value_path == "cleanup-rcv-success")
    {
        cleanup_rcv_success = value;
    }
    if(value_path == "cleanup-send")
    {
        cleanup_send = value;
    }
    if(value_path == "cleanup-send-drop")
    {
        cleanup_send_drop = value;
    }
    if(value_path == "data-xfer-rcv")
    {
        data_xfer_rcv = value;
    }
    if(value_path == "data-xfer-rcv-fail-buffer-trim")
    {
        data_xfer_rcv_fail_buffer_trim = value;
    }
    if(value_path == "data-xfer-rcv-fail-snd-una-out-of-sync")
    {
        data_xfer_rcv_fail_snd_una_out_of_sync = value;
    }
    if(value_path == "data-xfer-rcv-success")
    {
        data_xfer_rcv_success = value;
    }
    if(value_path == "data-xfer-send")
    {
        data_xfer_send = value;
    }
    if(value_path == "data-xfer-send-drop")
    {
        data_xfer_send_drop = value;
    }
    if(value_path == "data-xfer-send-iov-alloc")
    {
        data_xfer_send_iov_alloc = value;
    }
    if(value_path == "data-xfer-send-total")
    {
        data_xfer_send_total = value;
    }
    if(value_path == "nack-rcv")
    {
        nack_rcv = value;
    }
    if(value_path == "nack-rcv-fail-data-send")
    {
        nack_rcv_fail_data_send = value;
    }
    if(value_path == "nack-rcv-success")
    {
        nack_rcv_success = value;
    }
    if(value_path == "nack-send")
    {
        nack_send = value;
    }
    if(value_path == "nack-send-drop")
    {
        nack_send_drop = value;
    }
    if(value_path == "seg-instr-rcv")
    {
        seg_instr_rcv = value;
    }
    if(value_path == "seg-instr-rcv-fail-buffer-trim")
    {
        seg_instr_rcv_fail_buffer_trim = value;
    }
    if(value_path == "seg-instr-rcv-fail-tcp-process")
    {
        seg_instr_rcv_fail_tcp_process = value;
    }
    if(value_path == "seg-instr-rcv-success")
    {
        seg_instr_rcv_success = value;
    }
    if(value_path == "seg-instr-send")
    {
        seg_instr_send = value;
    }
    if(value_path == "seg-instr-send-drop")
    {
        seg_instr_send_drop = value;
    }
    if(value_path == "seg-instr-send-units")
    {
        seg_instr_send_units = value;
    }
}

TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::StatisticSession()
    :
    	id{YType::str, "id"},
	 internal_ack_drops_immediate_match{YType::uint64, "internal-ack-drops-immediate-match"},
	 internal_ack_drops_initsync_first_phase{YType::uint64, "internal-ack-drops-initsync-first-phase"},
	 internal_ack_drops_not_replicated{YType::uint64, "internal-ack-drops-not-replicated"},
	 internal_ack_drops_stale{YType::uint64, "internal-ack-drops-stale"},
	 last_cleared_time{YType::uint32, "last-cleared-time"},
	 number_of_timers_nsr_down{YType::uint32, "number-of-timers-nsr-down"},
	 number_of_times_nsr_disabled{YType::uint32, "number-of-times-nsr-disabled"},
	 number_of_times_nsr_fail_over{YType::uint32, "number-of-times-nsr-fail-over"},
	 number_of_times_nsr_up{YType::uint32, "number-of-times-nsr-up"},
	 pcb{YType::uint64, "pcb"}
    	,
    snd_counters(std::make_unique<TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters>())
{
    snd_counters->parent = this;
    children["snd-counters"] = snd_counters.get();

    yang_name = "statistic-session"; yang_parent_name = "statistic-sessions";
}

TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::~StatisticSession()
{
}

bool TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::has_data() const
{
    return id.is_set
	|| internal_ack_drops_immediate_match.is_set
	|| internal_ack_drops_initsync_first_phase.is_set
	|| internal_ack_drops_not_replicated.is_set
	|| internal_ack_drops_stale.is_set
	|| last_cleared_time.is_set
	|| number_of_timers_nsr_down.is_set
	|| number_of_times_nsr_disabled.is_set
	|| number_of_times_nsr_fail_over.is_set
	|| number_of_times_nsr_up.is_set
	|| pcb.is_set
	|| (snd_counters !=  nullptr && snd_counters->has_data());
}

bool TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(internal_ack_drops_immediate_match.operation)
	|| is_set(internal_ack_drops_initsync_first_phase.operation)
	|| is_set(internal_ack_drops_not_replicated.operation)
	|| is_set(internal_ack_drops_stale.operation)
	|| is_set(last_cleared_time.operation)
	|| is_set(number_of_timers_nsr_down.operation)
	|| is_set(number_of_times_nsr_disabled.operation)
	|| is_set(number_of_times_nsr_fail_over.operation)
	|| is_set(number_of_times_nsr_up.operation)
	|| is_set(pcb.operation)
	|| (snd_counters !=  nullptr && snd_counters->has_operation());
}

std::string TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic-session" <<"[id='" <<id.get() <<"']";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::get_entity_path(Entity* ancestor) const
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

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (internal_ack_drops_immediate_match.is_set || is_set(internal_ack_drops_immediate_match.operation)) leaf_name_data.push_back(internal_ack_drops_immediate_match.get_name_leafdata());
    if (internal_ack_drops_initsync_first_phase.is_set || is_set(internal_ack_drops_initsync_first_phase.operation)) leaf_name_data.push_back(internal_ack_drops_initsync_first_phase.get_name_leafdata());
    if (internal_ack_drops_not_replicated.is_set || is_set(internal_ack_drops_not_replicated.operation)) leaf_name_data.push_back(internal_ack_drops_not_replicated.get_name_leafdata());
    if (internal_ack_drops_stale.is_set || is_set(internal_ack_drops_stale.operation)) leaf_name_data.push_back(internal_ack_drops_stale.get_name_leafdata());
    if (last_cleared_time.is_set || is_set(last_cleared_time.operation)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());
    if (number_of_timers_nsr_down.is_set || is_set(number_of_timers_nsr_down.operation)) leaf_name_data.push_back(number_of_timers_nsr_down.get_name_leafdata());
    if (number_of_times_nsr_disabled.is_set || is_set(number_of_times_nsr_disabled.operation)) leaf_name_data.push_back(number_of_times_nsr_disabled.get_name_leafdata());
    if (number_of_times_nsr_fail_over.is_set || is_set(number_of_times_nsr_fail_over.operation)) leaf_name_data.push_back(number_of_times_nsr_fail_over.get_name_leafdata());
    if (number_of_times_nsr_up.is_set || is_set(number_of_times_nsr_up.operation)) leaf_name_data.push_back(number_of_times_nsr_up.get_name_leafdata());
    if (pcb.is_set || is_set(pcb.operation)) leaf_name_data.push_back(pcb.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "snd-counters")
    {
        if(snd_counters != nullptr)
        {
            children["snd-counters"] = snd_counters.get();
        }
        else
        {
            snd_counters = std::make_unique<TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::SndCounters>();
            snd_counters->parent = this;
            children["snd-counters"] = snd_counters.get();
        }
        return children.at("snd-counters");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::get_children()
{
    if(children.find("snd-counters") == children.end())
    {
        if(snd_counters != nullptr)
        {
            children["snd-counters"] = snd_counters.get();
        }
    }

    return children;
}

void TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "internal-ack-drops-immediate-match")
    {
        internal_ack_drops_immediate_match = value;
    }
    if(value_path == "internal-ack-drops-initsync-first-phase")
    {
        internal_ack_drops_initsync_first_phase = value;
    }
    if(value_path == "internal-ack-drops-not-replicated")
    {
        internal_ack_drops_not_replicated = value;
    }
    if(value_path == "internal-ack-drops-stale")
    {
        internal_ack_drops_stale = value;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
    }
    if(value_path == "number-of-timers-nsr-down")
    {
        number_of_timers_nsr_down = value;
    }
    if(value_path == "number-of-times-nsr-disabled")
    {
        number_of_times_nsr_disabled = value;
    }
    if(value_path == "number-of-times-nsr-fail-over")
    {
        number_of_times_nsr_fail_over = value;
    }
    if(value_path == "number-of-times-nsr-up")
    {
        number_of_times_nsr_up = value;
    }
    if(value_path == "pcb")
    {
        pcb = value;
    }
}

TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSessions()
{
    yang_name = "statistic-sessions"; yang_parent_name = "statistics";
}

TcpNsr::Nodes::Node::Statistics::StatisticSessions::~StatisticSessions()
{
}

bool TcpNsr::Nodes::Node::Statistics::StatisticSessions::has_data() const
{
    for (std::size_t index=0; index<statistic_session.size(); index++)
    {
        if(statistic_session[index]->has_data())
            return true;
    }
    return false;
}

bool TcpNsr::Nodes::Node::Statistics::StatisticSessions::has_operation() const
{
    for (std::size_t index=0; index<statistic_session.size(); index++)
    {
        if(statistic_session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TcpNsr::Nodes::Node::Statistics::StatisticSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic-sessions";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Statistics::StatisticSessions::get_entity_path(Entity* ancestor) const
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

Entity* TcpNsr::Nodes::Node::Statistics::StatisticSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statistic-session")
    {
        for(auto const & c : statistic_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TcpNsr::Nodes::Node::Statistics::StatisticSessions::StatisticSession>();
        c->parent = this;
        statistic_session.push_back(std::move(c));
        children[segment_path] = statistic_session.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Statistics::StatisticSessions::get_children()
{
    for (auto const & c : statistic_session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TcpNsr::Nodes::Node::Statistics::StatisticSessions::set_value(const std::string & value_path, std::string value)
{
}

TcpNsr::Nodes::Node::Statistics::Statistics()
    :
    statistic_clients(std::make_unique<TcpNsr::Nodes::Node::Statistics::StatisticClients>())
	,statistic_sessions(std::make_unique<TcpNsr::Nodes::Node::Statistics::StatisticSessions>())
	,statistic_sets(std::make_unique<TcpNsr::Nodes::Node::Statistics::StatisticSets>())
	,summary(std::make_unique<TcpNsr::Nodes::Node::Statistics::Summary>())
{
    statistic_clients->parent = this;
    children["statistic-clients"] = statistic_clients.get();

    statistic_sessions->parent = this;
    children["statistic-sessions"] = statistic_sessions.get();

    statistic_sets->parent = this;
    children["statistic-sets"] = statistic_sets.get();

    summary->parent = this;
    children["summary"] = summary.get();

    yang_name = "statistics"; yang_parent_name = "node";
}

TcpNsr::Nodes::Node::Statistics::~Statistics()
{
}

bool TcpNsr::Nodes::Node::Statistics::has_data() const
{
    return (statistic_clients !=  nullptr && statistic_clients->has_data())
	|| (statistic_sessions !=  nullptr && statistic_sessions->has_data())
	|| (statistic_sets !=  nullptr && statistic_sets->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool TcpNsr::Nodes::Node::Statistics::has_operation() const
{
    return is_set(operation)
	|| (statistic_clients !=  nullptr && statistic_clients->has_operation())
	|| (statistic_sessions !=  nullptr && statistic_sessions->has_operation())
	|| (statistic_sets !=  nullptr && statistic_sets->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string TcpNsr::Nodes::Node::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::Statistics::get_entity_path(Entity* ancestor) const
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

Entity* TcpNsr::Nodes::Node::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statistic-clients")
    {
        if(statistic_clients != nullptr)
        {
            children["statistic-clients"] = statistic_clients.get();
        }
        else
        {
            statistic_clients = std::make_unique<TcpNsr::Nodes::Node::Statistics::StatisticClients>();
            statistic_clients->parent = this;
            children["statistic-clients"] = statistic_clients.get();
        }
        return children.at("statistic-clients");
    }

    if(child_yang_name == "statistic-sessions")
    {
        if(statistic_sessions != nullptr)
        {
            children["statistic-sessions"] = statistic_sessions.get();
        }
        else
        {
            statistic_sessions = std::make_unique<TcpNsr::Nodes::Node::Statistics::StatisticSessions>();
            statistic_sessions->parent = this;
            children["statistic-sessions"] = statistic_sessions.get();
        }
        return children.at("statistic-sessions");
    }

    if(child_yang_name == "statistic-sets")
    {
        if(statistic_sets != nullptr)
        {
            children["statistic-sets"] = statistic_sets.get();
        }
        else
        {
            statistic_sets = std::make_unique<TcpNsr::Nodes::Node::Statistics::StatisticSets>();
            statistic_sets->parent = this;
            children["statistic-sets"] = statistic_sets.get();
        }
        return children.at("statistic-sets");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
        else
        {
            summary = std::make_unique<TcpNsr::Nodes::Node::Statistics::Summary>();
            summary->parent = this;
            children["summary"] = summary.get();
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::Statistics::get_children()
{
    if(children.find("statistic-clients") == children.end())
    {
        if(statistic_clients != nullptr)
        {
            children["statistic-clients"] = statistic_clients.get();
        }
    }

    if(children.find("statistic-sessions") == children.end())
    {
        if(statistic_sessions != nullptr)
        {
            children["statistic-sessions"] = statistic_sessions.get();
        }
    }

    if(children.find("statistic-sets") == children.end())
    {
        if(statistic_sets != nullptr)
        {
            children["statistic-sets"] = statistic_sets.get();
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
    }

    return children;
}

void TcpNsr::Nodes::Node::Statistics::set_value(const std::string & value_path, std::string value)
{
}

TcpNsr::Nodes::Node::Node()
    :
    	id{YType::str, "id"}
    	,
    client(std::make_unique<TcpNsr::Nodes::Node::Client>())
	,session(std::make_unique<TcpNsr::Nodes::Node::Session>())
	,session_set(std::make_unique<TcpNsr::Nodes::Node::SessionSet>())
	,statistics(std::make_unique<TcpNsr::Nodes::Node::Statistics>())
{
    client->parent = this;
    children["client"] = client.get();

    session->parent = this;
    children["session"] = session.get();

    session_set->parent = this;
    children["session-set"] = session_set.get();

    statistics->parent = this;
    children["statistics"] = statistics.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

TcpNsr::Nodes::Node::~Node()
{
}

bool TcpNsr::Nodes::Node::has_data() const
{
    return id.is_set
	|| (client !=  nullptr && client->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (session_set !=  nullptr && session_set->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool TcpNsr::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (client !=  nullptr && client->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (session_set !=  nullptr && session_set->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string TcpNsr::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[id='" <<id.get() <<"']";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-tcp-oper:tcp-nsr/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpNsr::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "client")
    {
        if(client != nullptr)
        {
            children["client"] = client.get();
        }
        else
        {
            client = std::make_unique<TcpNsr::Nodes::Node::Client>();
            client->parent = this;
            children["client"] = client.get();
        }
        return children.at("client");
    }

    if(child_yang_name == "session")
    {
        if(session != nullptr)
        {
            children["session"] = session.get();
        }
        else
        {
            session = std::make_unique<TcpNsr::Nodes::Node::Session>();
            session->parent = this;
            children["session"] = session.get();
        }
        return children.at("session");
    }

    if(child_yang_name == "session-set")
    {
        if(session_set != nullptr)
        {
            children["session-set"] = session_set.get();
        }
        else
        {
            session_set = std::make_unique<TcpNsr::Nodes::Node::SessionSet>();
            session_set->parent = this;
            children["session-set"] = session_set.get();
        }
        return children.at("session-set");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
        else
        {
            statistics = std::make_unique<TcpNsr::Nodes::Node::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics.get();
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpNsr::Nodes::Node::get_children()
{
    if(children.find("client") == children.end())
    {
        if(client != nullptr)
        {
            children["client"] = client.get();
        }
    }

    if(children.find("session") == children.end())
    {
        if(session != nullptr)
        {
            children["session"] = session.get();
        }
    }

    if(children.find("session-set") == children.end())
    {
        if(session_set != nullptr)
        {
            children["session-set"] = session_set.get();
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
    }

    return children;
}

void TcpNsr::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

TcpNsr::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "tcp-nsr";
}

TcpNsr::Nodes::~Nodes()
{
}

bool TcpNsr::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool TcpNsr::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TcpNsr::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath TcpNsr::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-tcp-oper:tcp-nsr/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* TcpNsr::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<TcpNsr::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpNsr::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void TcpNsr::Nodes::set_value(const std::string & value_path, std::string value)
{
}

TcpNsr::TcpNsr()
    :
    nodes(std::make_unique<TcpNsr::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "tcp-nsr"; yang_parent_name = "Cisco-IOS-XR-ip-tcp-oper";
}

TcpNsr::~TcpNsr()
{
}

bool TcpNsr::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool TcpNsr::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string TcpNsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-tcp-oper:tcp-nsr";

    return path_buffer.str();

}

EntityPath TcpNsr::get_entity_path(Entity* ancestor) const
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

Entity* TcpNsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<TcpNsr::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & TcpNsr::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void TcpNsr::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> TcpNsr::clone_ptr()
{
    return std::make_unique<TcpNsr>();
}

const Enum::YLeaf MessageTypeIcmpv6Enum::destination_unreachable {1, "destination-unreachable"};
const Enum::YLeaf MessageTypeIcmpv6Enum::packet_too_big {2, "packet-too-big"};
const Enum::YLeaf MessageTypeIcmpv6Enum::time_exceeded {3, "time-exceeded"};
const Enum::YLeaf MessageTypeIcmpv6Enum::parameter_problem {4, "parameter-problem"};
const Enum::YLeaf MessageTypeIcmpv6Enum::echo_request {128, "echo-request"};
const Enum::YLeaf MessageTypeIcmpv6Enum::echo_reply {129, "echo-reply"};
const Enum::YLeaf MessageTypeIcmpv6Enum::multicast_listener_query {130, "multicast-listener-query"};
const Enum::YLeaf MessageTypeIcmpv6Enum::multicast_listener_report {131, "multicast-listener-report"};
const Enum::YLeaf MessageTypeIcmpv6Enum::multicast_listener_done {132, "multicast-listener-done"};
const Enum::YLeaf MessageTypeIcmpv6Enum::router_solicitation {133, "router-solicitation"};
const Enum::YLeaf MessageTypeIcmpv6Enum::router_advertisement {134, "router-advertisement"};
const Enum::YLeaf MessageTypeIcmpv6Enum::neighbor_solicitation {135, "neighbor-solicitation"};
const Enum::YLeaf MessageTypeIcmpv6Enum::neighbor_advertisement {136, "neighbor-advertisement"};
const Enum::YLeaf MessageTypeIcmpv6Enum::redirect_message {137, "redirect-message"};
const Enum::YLeaf MessageTypeIcmpv6Enum::router_renumbering {138, "router-renumbering"};
const Enum::YLeaf MessageTypeIcmpv6Enum::node_information_query {139, "node-information-query"};
const Enum::YLeaf MessageTypeIcmpv6Enum::node_information_reply {140, "node-information-reply"};
const Enum::YLeaf MessageTypeIcmpv6Enum::inverse_neighbor_discovery_solicitaion {141, "inverse-neighbor-discovery-solicitaion"};
const Enum::YLeaf MessageTypeIcmpv6Enum::inverse_neighbor_discover_advertisement {142, "inverse-neighbor-discover-advertisement"};
const Enum::YLeaf MessageTypeIcmpv6Enum::v2_multicast_listener_report {143, "v2-multicast-listener-report"};
const Enum::YLeaf MessageTypeIcmpv6Enum::home_agent_address_discovery_request {144, "home-agent-address-discovery-request"};
const Enum::YLeaf MessageTypeIcmpv6Enum::home_agent_address_discovery_reply {145, "home-agent-address-discovery-reply"};
const Enum::YLeaf MessageTypeIcmpv6Enum::mobile_prefix_solicitation {146, "mobile-prefix-solicitation"};
const Enum::YLeaf MessageTypeIcmpv6Enum::mobile_prefix_advertisement {147, "mobile-prefix-advertisement"};
const Enum::YLeaf MessageTypeIcmpv6Enum::certification_path_solicitation_message {148, "certification-path-solicitation-message"};
const Enum::YLeaf MessageTypeIcmpv6Enum::certification_path_advertisement_message {149, "certification-path-advertisement-message"};
const Enum::YLeaf MessageTypeIcmpv6Enum::experimental_mobility_protocols {150, "experimental-mobility-protocols"};
const Enum::YLeaf MessageTypeIcmpv6Enum::multicast_router_advertisement {151, "multicast-router-advertisement"};
const Enum::YLeaf MessageTypeIcmpv6Enum::multicast_router_solicitation {152, "multicast-router-solicitation"};
const Enum::YLeaf MessageTypeIcmpv6Enum::multicast_router_termination {153, "multicast-router-termination"};
const Enum::YLeaf MessageTypeIcmpv6Enum::fmipv6_messages {154, "fmipv6-messages"};

const Enum::YLeaf ShowEnum::all {0, "all"};
const Enum::YLeaf ShowEnum::static_policy {1, "static-policy"};
const Enum::YLeaf ShowEnum::interface_filter {2, "interface-filter"};
const Enum::YLeaf ShowEnum::packet_filter {3, "packet-filter"};

const Enum::YLeaf MessageTypeIgmpEnum::membership_query {17, "membership-query"};
const Enum::YLeaf MessageTypeIgmpEnum::v1_membership_report {18, "v1-membership-report"};
const Enum::YLeaf MessageTypeIgmpEnum::dvmrp {19, "dvmrp"};
const Enum::YLeaf MessageTypeIgmpEnum::pi_mv1 {20, "pi-mv1"};
const Enum::YLeaf MessageTypeIgmpEnum::cisco_trace_messages {21, "cisco-trace-messages"};
const Enum::YLeaf MessageTypeIgmpEnum::v2_membership_report {22, "v2-membership-report"};
const Enum::YLeaf MessageTypeIgmpEnum::v2_leave_group {23, "v2-leave-group"};
const Enum::YLeaf MessageTypeIgmpEnum::multicast_traceroute_response {30, "multicast-traceroute-response"};
const Enum::YLeaf MessageTypeIgmpEnum::multicast_traceroute {31, "multicast-traceroute"};
const Enum::YLeaf MessageTypeIgmpEnum::v3_membership_report {34, "v3-membership-report"};
const Enum::YLeaf MessageTypeIgmpEnum::multicast_router_advertisement {48, "multicast-router-advertisement"};
const Enum::YLeaf MessageTypeIgmpEnum::multicast_router_solicitation {49, "multicast-router-solicitation"};
const Enum::YLeaf MessageTypeIgmpEnum::multicast_router_termination {50, "multicast-router-termination"};

const Enum::YLeaf TcpConnStateEnum::closed {0, "closed"};
const Enum::YLeaf TcpConnStateEnum::listen {1, "listen"};
const Enum::YLeaf TcpConnStateEnum::syn_sent {2, "syn-sent"};
const Enum::YLeaf TcpConnStateEnum::syn_received {3, "syn-received"};
const Enum::YLeaf TcpConnStateEnum::established {4, "established"};
const Enum::YLeaf TcpConnStateEnum::close_wait {5, "close-wait"};
const Enum::YLeaf TcpConnStateEnum::fin_wait1 {6, "fin-wait1"};
const Enum::YLeaf TcpConnStateEnum::closing {7, "closing"};
const Enum::YLeaf TcpConnStateEnum::last_ack {8, "last-ack"};
const Enum::YLeaf TcpConnStateEnum::fin_wait2 {9, "fin-wait2"};
const Enum::YLeaf TcpConnStateEnum::time_wait {10, "time-wait"};

const Enum::YLeaf PakPrioEnum::unspecified_packet {0, "unspecified-packet"};
const Enum::YLeaf PakPrioEnum::normal_packet {1, "normal-packet"};
const Enum::YLeaf PakPrioEnum::medium_packet {2, "medium-packet"};
const Enum::YLeaf PakPrioEnum::high_packet {3, "high-packet"};
const Enum::YLeaf PakPrioEnum::crucial_packet {4, "crucial-packet"};

const Enum::YLeaf MessageTypeIcmpEnum::echo_reply {0, "echo-reply"};
const Enum::YLeaf MessageTypeIcmpEnum::destination_unreachable {3, "destination-unreachable"};
const Enum::YLeaf MessageTypeIcmpEnum::source_quench {4, "source-quench"};
const Enum::YLeaf MessageTypeIcmpEnum::redirect {5, "redirect"};
const Enum::YLeaf MessageTypeIcmpEnum::alternate_host_address {6, "alternate-host-address"};
const Enum::YLeaf MessageTypeIcmpEnum::echo {8, "echo"};
const Enum::YLeaf MessageTypeIcmpEnum::router_advertisement {9, "router-advertisement"};
const Enum::YLeaf MessageTypeIcmpEnum::router_selection {10, "router-selection"};
const Enum::YLeaf MessageTypeIcmpEnum::time_exceeded {11, "time-exceeded"};
const Enum::YLeaf MessageTypeIcmpEnum::parameter_problem {12, "parameter-problem"};
const Enum::YLeaf MessageTypeIcmpEnum::time_stamp {13, "time-stamp"};
const Enum::YLeaf MessageTypeIcmpEnum::time_stamp_reply {14, "time-stamp-reply"};
const Enum::YLeaf MessageTypeIcmpEnum::information_request {15, "information-request"};
const Enum::YLeaf MessageTypeIcmpEnum::information_reply {16, "information-reply"};
const Enum::YLeaf MessageTypeIcmpEnum::address_mask_request {17, "address-mask-request"};
const Enum::YLeaf MessageTypeIcmpEnum::address_mask_reply {18, "address-mask-reply"};
const Enum::YLeaf MessageTypeIcmpEnum::trace_route {30, "trace-route"};
const Enum::YLeaf MessageTypeIcmpEnum::datagram_conversion_error {31, "datagram-conversion-error"};
const Enum::YLeaf MessageTypeIcmpEnum::mobile_host_redirect {32, "mobile-host-redirect"};
const Enum::YLeaf MessageTypeIcmpEnum::where_are_you {33, "where-are-you"};
const Enum::YLeaf MessageTypeIcmpEnum::iam_here {34, "iam-here"};
const Enum::YLeaf MessageTypeIcmpEnum::mobile_registration_request {35, "mobile-registration-request"};
const Enum::YLeaf MessageTypeIcmpEnum::mobile_registration_reply {36, "mobile-registration-reply"};
const Enum::YLeaf MessageTypeIcmpEnum::domain_name_request {37, "domain-name-request"};

const Enum::YLeaf PacketEnum::icmp {0, "icmp"};
const Enum::YLeaf PacketEnum::icm_pv6 {1, "icm-pv6"};
const Enum::YLeaf PacketEnum::igmp {2, "igmp"};
const Enum::YLeaf PacketEnum::unknown {3, "unknown"};

const Enum::YLeaf AddrFamilyEnum::internetwork {2, "internetwork"};
const Enum::YLeaf AddrFamilyEnum::ip_version6 {10, "ip-version6"};

const Enum::YLeaf NsrStatusEnum::down {0, "down"};
const Enum::YLeaf NsrStatusEnum::up {1, "up"};
const Enum::YLeaf NsrStatusEnum::na {2, "na"};

const Enum::YLeaf TcpAddressFamilyEnum::ipv4 {2, "ipv4"};
const Enum::YLeaf TcpAddressFamilyEnum::ipv6 {10, "ipv6"};

const Enum::YLeaf NsrDownReasonEnum::none {0, "none"};
const Enum::YLeaf NsrDownReasonEnum::init_sync_aborted {1, "init-sync-aborted"};
const Enum::YLeaf NsrDownReasonEnum::client_disabled {2, "client-disabled"};
const Enum::YLeaf NsrDownReasonEnum::client_disconnect {3, "client-disconnect"};
const Enum::YLeaf NsrDownReasonEnum::tcp_disconnect {4, "tcp-disconnect"};
const Enum::YLeaf NsrDownReasonEnum::failover {5, "failover"};
const Enum::YLeaf NsrDownReasonEnum::nsr_clear {6, "nsr-clear"};
const Enum::YLeaf NsrDownReasonEnum::internal_error {7, "internal-error"};
const Enum::YLeaf NsrDownReasonEnum::retransmit_threshold_exceed {8, "retransmit-threshold-exceed"};
const Enum::YLeaf NsrDownReasonEnum::init_sync_failure_thresh_exceeded {9, "init-sync-failure-thresh-exceeded"};
const Enum::YLeaf NsrDownReasonEnum::audit_timeout {10, "audit-timeout"};
const Enum::YLeaf NsrDownReasonEnum::audit_failed {11, "audit-failed"};
const Enum::YLeaf NsrDownReasonEnum::standby_sscb_deleted {12, "standby-sscb-deleted"};
const Enum::YLeaf NsrDownReasonEnum::standby_session_close {13, "standby-session-close"};
const Enum::YLeaf NsrDownReasonEnum::standby_rxpath_frozen {14, "standby-rxpath-frozen"};
const Enum::YLeaf NsrDownReasonEnum::partner_deleted {15, "partner-deleted"};

const Enum::YLeaf TcpTimerEnum::retransmission_timer {0, "retransmission-timer"};
const Enum::YLeaf TcpTimerEnum::window_probe_timer {1, "window-probe-timer"};
const Enum::YLeaf TcpTimerEnum::timewait_state_timer {2, "timewait-state-timer"};
const Enum::YLeaf TcpTimerEnum::ack_hold_timer {3, "ack-hold-timer"};
const Enum::YLeaf TcpTimerEnum::keep_alive_timer {4, "keep-alive-timer"};
const Enum::YLeaf TcpTimerEnum::pmtu_ager_timer {5, "pmtu-ager-timer"};
const Enum::YLeaf TcpTimerEnum::retransmission_giveup_timer {6, "retransmission-giveup-timer"};
const Enum::YLeaf TcpTimerEnum::throttle_timer {7, "throttle-timer"};


}
}

