
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_raw_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_raw_cfg {

IpRaw::IpRaw()
    :
    receive_q{YType::uint32, "receive-q"}
        ,
    num_thread(nullptr) // presence node
    , directory(nullptr) // presence node
{

    yang_name = "ip-raw"; yang_parent_name = "Cisco-IOS-XR-ip-raw-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

IpRaw::~IpRaw()
{
}

bool IpRaw::has_data() const
{
    if (is_presence_container) return true;
    return receive_q.is_set
	|| (num_thread !=  nullptr && num_thread->has_data())
	|| (directory !=  nullptr && directory->has_data());
}

bool IpRaw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive_q.yfilter)
	|| (num_thread !=  nullptr && num_thread->has_operation())
	|| (directory !=  nullptr && directory->has_operation());
}

std::string IpRaw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-raw-cfg:ip-raw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpRaw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive_q.is_set || is_set(receive_q.yfilter)) leaf_name_data.push_back(receive_q.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpRaw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "num-thread")
    {
        if(num_thread == nullptr)
        {
            num_thread = std::make_shared<IpRaw::NumThread>();
        }
        return num_thread;
    }

    if(child_yang_name == "directory")
    {
        if(directory == nullptr)
        {
            directory = std::make_shared<IpRaw::Directory>();
        }
        return directory;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpRaw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(num_thread != nullptr)
    {
        _children["num-thread"] = num_thread;
    }

    if(directory != nullptr)
    {
        _children["directory"] = directory;
    }

    return _children;
}

void IpRaw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive-q")
    {
        receive_q = value;
        receive_q.value_namespace = name_space;
        receive_q.value_namespace_prefix = name_space_prefix;
    }
}

void IpRaw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive-q")
    {
        receive_q.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> IpRaw::clone_ptr() const
{
    return std::make_shared<IpRaw>();
}

std::string IpRaw::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string IpRaw::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function IpRaw::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> IpRaw::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool IpRaw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-thread" || name == "directory" || name == "receive-q")
        return true;
    return false;
}

IpRaw::NumThread::NumThread()
    :
    raw_in_q_threads{YType::uint32, "raw-in-q-threads"},
    raw_out_q_threads{YType::uint32, "raw-out-q-threads"}
{

    yang_name = "num-thread"; yang_parent_name = "ip-raw"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

IpRaw::NumThread::~NumThread()
{
}

bool IpRaw::NumThread::has_data() const
{
    if (is_presence_container) return true;
    return raw_in_q_threads.is_set
	|| raw_out_q_threads.is_set;
}

bool IpRaw::NumThread::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(raw_in_q_threads.yfilter)
	|| ydk::is_set(raw_out_q_threads.yfilter);
}

std::string IpRaw::NumThread::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-raw-cfg:ip-raw/" << get_segment_path();
    return path_buffer.str();
}

std::string IpRaw::NumThread::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "num-thread";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpRaw::NumThread::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (raw_in_q_threads.is_set || is_set(raw_in_q_threads.yfilter)) leaf_name_data.push_back(raw_in_q_threads.get_name_leafdata());
    if (raw_out_q_threads.is_set || is_set(raw_out_q_threads.yfilter)) leaf_name_data.push_back(raw_out_q_threads.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpRaw::NumThread::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpRaw::NumThread::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IpRaw::NumThread::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "raw-in-q-threads")
    {
        raw_in_q_threads = value;
        raw_in_q_threads.value_namespace = name_space;
        raw_in_q_threads.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "raw-out-q-threads")
    {
        raw_out_q_threads = value;
        raw_out_q_threads.value_namespace = name_space;
        raw_out_q_threads.value_namespace_prefix = name_space_prefix;
    }
}

void IpRaw::NumThread::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "raw-in-q-threads")
    {
        raw_in_q_threads.yfilter = yfilter;
    }
    if(value_path == "raw-out-q-threads")
    {
        raw_out_q_threads.yfilter = yfilter;
    }
}

bool IpRaw::NumThread::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "raw-in-q-threads" || name == "raw-out-q-threads")
        return true;
    return false;
}

IpRaw::Directory::Directory()
    :
    directoryname{YType::str, "directoryname"},
    max_raw_debug_files{YType::uint32, "max-raw-debug-files"},
    max_file_size_files{YType::uint32, "max-file-size-files"}
{

    yang_name = "directory"; yang_parent_name = "ip-raw"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

IpRaw::Directory::~Directory()
{
}

bool IpRaw::Directory::has_data() const
{
    if (is_presence_container) return true;
    return directoryname.is_set
	|| max_raw_debug_files.is_set
	|| max_file_size_files.is_set;
}

bool IpRaw::Directory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(directoryname.yfilter)
	|| ydk::is_set(max_raw_debug_files.yfilter)
	|| ydk::is_set(max_file_size_files.yfilter);
}

std::string IpRaw::Directory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-raw-cfg:ip-raw/" << get_segment_path();
    return path_buffer.str();
}

std::string IpRaw::Directory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "directory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpRaw::Directory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (directoryname.is_set || is_set(directoryname.yfilter)) leaf_name_data.push_back(directoryname.get_name_leafdata());
    if (max_raw_debug_files.is_set || is_set(max_raw_debug_files.yfilter)) leaf_name_data.push_back(max_raw_debug_files.get_name_leafdata());
    if (max_file_size_files.is_set || is_set(max_file_size_files.yfilter)) leaf_name_data.push_back(max_file_size_files.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpRaw::Directory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpRaw::Directory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IpRaw::Directory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "directoryname")
    {
        directoryname = value;
        directoryname.value_namespace = name_space;
        directoryname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-raw-debug-files")
    {
        max_raw_debug_files = value;
        max_raw_debug_files.value_namespace = name_space;
        max_raw_debug_files.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-file-size-files")
    {
        max_file_size_files = value;
        max_file_size_files.value_namespace = name_space;
        max_file_size_files.value_namespace_prefix = name_space_prefix;
    }
}

void IpRaw::Directory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "directoryname")
    {
        directoryname.yfilter = yfilter;
    }
    if(value_path == "max-raw-debug-files")
    {
        max_raw_debug_files.yfilter = yfilter;
    }
    if(value_path == "max-file-size-files")
    {
        max_file_size_files.yfilter = yfilter;
    }
}

bool IpRaw::Directory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "directoryname" || name == "max-raw-debug-files" || name == "max-file-size-files")
        return true;
    return false;
}


}
}

