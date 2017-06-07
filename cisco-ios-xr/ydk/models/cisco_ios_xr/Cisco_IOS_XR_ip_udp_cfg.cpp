
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_udp_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_udp_cfg {

IpUdp::IpUdp()
    :
    receive_q{YType::uint32, "receive-q"}
    	,
    directory(nullptr) // presence node
	,num_thread(nullptr) // presence node
{
    yang_name = "ip-udp"; yang_parent_name = "Cisco-IOS-XR-ip-udp-cfg";
}

IpUdp::~IpUdp()
{
}

bool IpUdp::has_data() const
{
    return receive_q.is_set
	|| (directory !=  nullptr && directory->has_data())
	|| (num_thread !=  nullptr && num_thread->has_data());
}

bool IpUdp::has_operation() const
{
    return is_set(operation)
	|| is_set(receive_q.operation)
	|| (directory !=  nullptr && directory->has_operation())
	|| (num_thread !=  nullptr && num_thread->has_operation());
}

std::string IpUdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-udp-cfg:ip-udp";

    return path_buffer.str();

}

const EntityPath IpUdp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive_q.is_set || is_set(receive_q.operation)) leaf_name_data.push_back(receive_q.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpUdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "directory")
    {
        if(directory == nullptr)
        {
            directory = std::make_shared<IpUdp::Directory>();
        }
        return directory;
    }

    if(child_yang_name == "num-thread")
    {
        if(num_thread == nullptr)
        {
            num_thread = std::make_shared<IpUdp::NumThread>();
        }
        return num_thread;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpUdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(directory != nullptr)
    {
        children["directory"] = directory;
    }

    if(num_thread != nullptr)
    {
        children["num-thread"] = num_thread;
    }

    return children;
}

void IpUdp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive-q")
    {
        receive_q = value;
    }
}

std::shared_ptr<Entity> IpUdp::clone_ptr() const
{
    return std::make_shared<IpUdp>();
}

std::string IpUdp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string IpUdp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function IpUdp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

IpUdp::NumThread::NumThread()
    :
    udp_in_q_threads{YType::uint32, "udp-in-q-threads"},
    udp_out_q_threads{YType::uint32, "udp-out-q-threads"}
{
    yang_name = "num-thread"; yang_parent_name = "ip-udp";
}

IpUdp::NumThread::~NumThread()
{
}

bool IpUdp::NumThread::has_data() const
{
    return udp_in_q_threads.is_set
	|| udp_out_q_threads.is_set;
}

bool IpUdp::NumThread::has_operation() const
{
    return is_set(operation)
	|| is_set(udp_in_q_threads.operation)
	|| is_set(udp_out_q_threads.operation);
}

std::string IpUdp::NumThread::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-thread";

    return path_buffer.str();

}

const EntityPath IpUdp::NumThread::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-udp-cfg:ip-udp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udp_in_q_threads.is_set || is_set(udp_in_q_threads.operation)) leaf_name_data.push_back(udp_in_q_threads.get_name_leafdata());
    if (udp_out_q_threads.is_set || is_set(udp_out_q_threads.operation)) leaf_name_data.push_back(udp_out_q_threads.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpUdp::NumThread::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpUdp::NumThread::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpUdp::NumThread::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "udp-in-q-threads")
    {
        udp_in_q_threads = value;
    }
    if(value_path == "udp-out-q-threads")
    {
        udp_out_q_threads = value;
    }
}

IpUdp::Directory::Directory()
    :
    directoryname{YType::str, "directoryname"},
    max_file_size_files{YType::uint32, "max-file-size-files"},
    max_udp_debug_files{YType::uint32, "max-udp-debug-files"}
{
    yang_name = "directory"; yang_parent_name = "ip-udp";
}

IpUdp::Directory::~Directory()
{
}

bool IpUdp::Directory::has_data() const
{
    return directoryname.is_set
	|| max_file_size_files.is_set
	|| max_udp_debug_files.is_set;
}

bool IpUdp::Directory::has_operation() const
{
    return is_set(operation)
	|| is_set(directoryname.operation)
	|| is_set(max_file_size_files.operation)
	|| is_set(max_udp_debug_files.operation);
}

std::string IpUdp::Directory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "directory";

    return path_buffer.str();

}

const EntityPath IpUdp::Directory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-udp-cfg:ip-udp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (directoryname.is_set || is_set(directoryname.operation)) leaf_name_data.push_back(directoryname.get_name_leafdata());
    if (max_file_size_files.is_set || is_set(max_file_size_files.operation)) leaf_name_data.push_back(max_file_size_files.get_name_leafdata());
    if (max_udp_debug_files.is_set || is_set(max_udp_debug_files.operation)) leaf_name_data.push_back(max_udp_debug_files.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> IpUdp::Directory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpUdp::Directory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void IpUdp::Directory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "directoryname")
    {
        directoryname = value;
    }
    if(value_path == "max-file-size-files")
    {
        max_file_size_files = value;
    }
    if(value_path == "max-udp-debug-files")
    {
        max_udp_debug_files = value;
    }
}


}
}

