
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_udp_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_udp_cfg {

IpUdp::IpUdp()
    :
    receive_q{YType::uint32, "receive-q"}
    	,
    num_thread(nullptr) // presence node
	,directory(nullptr) // presence node
{

    yang_name = "ip-udp"; yang_parent_name = "Cisco-IOS-XR-ip-udp-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

IpUdp::~IpUdp()
{
}

bool IpUdp::has_data() const
{
    return receive_q.is_set
	|| (num_thread !=  nullptr && num_thread->has_data())
	|| (directory !=  nullptr && directory->has_data());
}

bool IpUdp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive_q.yfilter)
	|| (num_thread !=  nullptr && num_thread->has_operation())
	|| (directory !=  nullptr && directory->has_operation());
}

std::string IpUdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-udp-cfg:ip-udp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpUdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive_q.is_set || is_set(receive_q.yfilter)) leaf_name_data.push_back(receive_q.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpUdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "num-thread")
    {
        if(num_thread == nullptr)
        {
            num_thread = std::make_shared<IpUdp::NumThread>();
        }
        return num_thread;
    }

    if(child_yang_name == "directory")
    {
        if(directory == nullptr)
        {
            directory = std::make_shared<IpUdp::Directory>();
        }
        return directory;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpUdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(num_thread != nullptr)
    {
        children["num-thread"] = num_thread;
    }

    if(directory != nullptr)
    {
        children["directory"] = directory;
    }

    return children;
}

void IpUdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive-q")
    {
        receive_q = value;
        receive_q.value_namespace = name_space;
        receive_q.value_namespace_prefix = name_space_prefix;
    }
}

void IpUdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive-q")
    {
        receive_q.yfilter = yfilter;
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

std::map<std::pair<std::string, std::string>, std::string> IpUdp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool IpUdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-thread" || name == "directory" || name == "receive-q")
        return true;
    return false;
}

IpUdp::NumThread::NumThread()
    :
    udp_in_q_threads{YType::uint32, "udp-in-q-threads"},
    udp_out_q_threads{YType::uint32, "udp-out-q-threads"}
{

    yang_name = "num-thread"; yang_parent_name = "ip-udp"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(udp_in_q_threads.yfilter)
	|| ydk::is_set(udp_out_q_threads.yfilter);
}

std::string IpUdp::NumThread::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-udp-cfg:ip-udp/" << get_segment_path();
    return path_buffer.str();
}

std::string IpUdp::NumThread::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-thread";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpUdp::NumThread::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udp_in_q_threads.is_set || is_set(udp_in_q_threads.yfilter)) leaf_name_data.push_back(udp_in_q_threads.get_name_leafdata());
    if (udp_out_q_threads.is_set || is_set(udp_out_q_threads.yfilter)) leaf_name_data.push_back(udp_out_q_threads.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpUdp::NumThread::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpUdp::NumThread::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void IpUdp::NumThread::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "udp-in-q-threads")
    {
        udp_in_q_threads = value;
        udp_in_q_threads.value_namespace = name_space;
        udp_in_q_threads.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-out-q-threads")
    {
        udp_out_q_threads = value;
        udp_out_q_threads.value_namespace = name_space;
        udp_out_q_threads.value_namespace_prefix = name_space_prefix;
    }
}

void IpUdp::NumThread::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "udp-in-q-threads")
    {
        udp_in_q_threads.yfilter = yfilter;
    }
    if(value_path == "udp-out-q-threads")
    {
        udp_out_q_threads.yfilter = yfilter;
    }
}

bool IpUdp::NumThread::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp-in-q-threads" || name == "udp-out-q-threads")
        return true;
    return false;
}

IpUdp::Directory::Directory()
    :
    directoryname{YType::str, "directoryname"},
    max_udp_debug_files{YType::uint32, "max-udp-debug-files"},
    max_file_size_files{YType::uint32, "max-file-size-files"}
{

    yang_name = "directory"; yang_parent_name = "ip-udp"; is_top_level_class = false; has_list_ancestor = false;
}

IpUdp::Directory::~Directory()
{
}

bool IpUdp::Directory::has_data() const
{
    return directoryname.is_set
	|| max_udp_debug_files.is_set
	|| max_file_size_files.is_set;
}

bool IpUdp::Directory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(directoryname.yfilter)
	|| ydk::is_set(max_udp_debug_files.yfilter)
	|| ydk::is_set(max_file_size_files.yfilter);
}

std::string IpUdp::Directory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-udp-cfg:ip-udp/" << get_segment_path();
    return path_buffer.str();
}

std::string IpUdp::Directory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "directory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpUdp::Directory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (directoryname.is_set || is_set(directoryname.yfilter)) leaf_name_data.push_back(directoryname.get_name_leafdata());
    if (max_udp_debug_files.is_set || is_set(max_udp_debug_files.yfilter)) leaf_name_data.push_back(max_udp_debug_files.get_name_leafdata());
    if (max_file_size_files.is_set || is_set(max_file_size_files.yfilter)) leaf_name_data.push_back(max_file_size_files.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> IpUdp::Directory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> IpUdp::Directory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void IpUdp::Directory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "directoryname")
    {
        directoryname = value;
        directoryname.value_namespace = name_space;
        directoryname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-udp-debug-files")
    {
        max_udp_debug_files = value;
        max_udp_debug_files.value_namespace = name_space;
        max_udp_debug_files.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-file-size-files")
    {
        max_file_size_files = value;
        max_file_size_files.value_namespace = name_space;
        max_file_size_files.value_namespace_prefix = name_space_prefix;
    }
}

void IpUdp::Directory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "directoryname")
    {
        directoryname.yfilter = yfilter;
    }
    if(value_path == "max-udp-debug-files")
    {
        max_udp_debug_files.yfilter = yfilter;
    }
    if(value_path == "max-file-size-files")
    {
        max_file_size_files.yfilter = yfilter;
    }
}

bool IpUdp::Directory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "directoryname" || name == "max-udp-debug-files" || name == "max-file-size-files")
        return true;
    return false;
}


}
}

