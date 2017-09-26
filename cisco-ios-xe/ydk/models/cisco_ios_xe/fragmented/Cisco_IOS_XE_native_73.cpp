
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_73.hpp"
#include "Cisco_IOS_XE_native_74.hpp"
#include "Cisco_IOS_XE_native_76.hpp"
#include "Cisco_IOS_XE_native_75.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::Metric()
    :
    absolute{YType::uint32, "absolute"},
    range{YType::uint32, "range"},
    relative{YType::int8, "relative"}
{

    yang_name = "metric"; yang_parent_name = "autoroute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::~Metric()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::has_data() const
{
    return absolute.is_set
	|| range.is_set
	|| relative.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(absolute.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(relative.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (absolute.is_set || is_set(absolute.yfilter)) leaf_name_data.push_back(absolute.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (relative.is_set || is_set(relative.yfilter)) leaf_name_data.push_back(relative.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "absolute")
    {
        absolute = value;
        absolute.value_namespace = name_space;
        absolute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relative")
    {
        relative = value;
        relative.value_namespace = name_space;
        relative.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "absolute")
    {
        absolute.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "relative")
    {
        relative.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Autoroute::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute" || name == "range" || name == "relative")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::BackupBw()
    :
    bandwidth{YType::uint32, "bandwidth"}
    	,
    class_type(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType>())
	,global_pool(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool>())
	,sub_pool(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool>())
{
    class_type->parent = this;
    global_pool->parent = this;
    sub_pool->parent = this;

    yang_name = "backup-bw"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::~BackupBw()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::has_data() const
{
    return bandwidth.is_set
	|| (class_type !=  nullptr && class_type->has_data())
	|| (global_pool !=  nullptr && global_pool->has_data())
	|| (sub_pool !=  nullptr && sub_pool->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| (class_type !=  nullptr && class_type->has_operation())
	|| (global_pool !=  nullptr && global_pool->has_operation())
	|| (sub_pool !=  nullptr && sub_pool->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-bw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-type")
    {
        if(class_type == nullptr)
        {
            class_type = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType>();
        }
        return class_type;
    }

    if(child_yang_name == "global-pool")
    {
        if(global_pool == nullptr)
        {
            global_pool = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool>();
        }
        return global_pool;
    }

    if(child_yang_name == "sub-pool")
    {
        if(sub_pool == nullptr)
        {
            sub_pool = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool>();
        }
        return sub_pool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(class_type != nullptr)
    {
        children["class-type"] = class_type;
    }

    if(global_pool != nullptr)
    {
        children["global-pool"] = global_pool;
    }

    if(sub_pool != nullptr)
    {
        children["sub-pool"] = sub_pool;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-type" || name == "global-pool" || name == "sub-pool" || name == "bandwidth")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::ClassType()
    :
    bandwidth{YType::uint32, "bandwidth"},
    class_type_num{YType::uint8, "class-type-num"},
    unlimited{YType::empty, "unlimited"}
{

    yang_name = "class-type"; yang_parent_name = "backup-bw"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::~ClassType()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::has_data() const
{
    return bandwidth.is_set
	|| class_type_num.is_set
	|| unlimited.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(class_type_num.yfilter)
	|| ydk::is_set(unlimited.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (class_type_num.is_set || is_set(class_type_num.yfilter)) leaf_name_data.push_back(class_type_num.get_name_leafdata());
    if (unlimited.is_set || is_set(unlimited.yfilter)) leaf_name_data.push_back(unlimited.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-type-num")
    {
        class_type_num = value;
        class_type_num.value_namespace = name_space;
        class_type_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unlimited")
    {
        unlimited = value;
        unlimited.value_namespace = name_space;
        unlimited.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "class-type-num")
    {
        class_type_num.yfilter = yfilter;
    }
    if(value_path == "unlimited")
    {
        unlimited.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::ClassType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "class-type-num" || name == "unlimited")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::GlobalPool()
    :
    bandwidth{YType::uint32, "bandwidth"},
    unlimited{YType::empty, "unlimited"}
{

    yang_name = "global-pool"; yang_parent_name = "backup-bw"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::~GlobalPool()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::has_data() const
{
    return bandwidth.is_set
	|| unlimited.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(unlimited.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (unlimited.is_set || is_set(unlimited.yfilter)) leaf_name_data.push_back(unlimited.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unlimited")
    {
        unlimited = value;
        unlimited.value_namespace = name_space;
        unlimited.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "unlimited")
    {
        unlimited.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::GlobalPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "unlimited")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPool()
    :
    unlimited{YType::empty, "unlimited"}
    	,
    sub_pool_config(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig>())
{
    sub_pool_config->parent = this;

    yang_name = "sub-pool"; yang_parent_name = "backup-bw"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::~SubPool()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::has_data() const
{
    return unlimited.is_set
	|| (sub_pool_config !=  nullptr && sub_pool_config->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unlimited.yfilter)
	|| (sub_pool_config !=  nullptr && sub_pool_config->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unlimited.is_set || is_set(unlimited.yfilter)) leaf_name_data.push_back(unlimited.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sub-pool-config")
    {
        if(sub_pool_config == nullptr)
        {
            sub_pool_config = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig>();
        }
        return sub_pool_config;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sub_pool_config != nullptr)
    {
        children["sub-pool-config"] = sub_pool_config;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unlimited")
    {
        unlimited = value;
        unlimited.value_namespace = name_space;
        unlimited.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unlimited")
    {
        unlimited.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sub-pool-config" || name == "unlimited")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::SubPoolConfig()
    :
    bandwidth{YType::uint32, "bandwidth"}
    	,
    class_type(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType>())
	,global_pool(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool>())
{
    class_type->parent = this;
    global_pool->parent = this;

    yang_name = "sub-pool-config"; yang_parent_name = "sub-pool"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::~SubPoolConfig()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::has_data() const
{
    return bandwidth.is_set
	|| (class_type !=  nullptr && class_type->has_data())
	|| (global_pool !=  nullptr && global_pool->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| (class_type !=  nullptr && class_type->has_operation())
	|| (global_pool !=  nullptr && global_pool->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-pool-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-type")
    {
        if(class_type == nullptr)
        {
            class_type = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType>();
        }
        return class_type;
    }

    if(child_yang_name == "global-pool")
    {
        if(global_pool == nullptr)
        {
            global_pool = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool>();
        }
        return global_pool;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(class_type != nullptr)
    {
        children["class-type"] = class_type;
    }

    if(global_pool != nullptr)
    {
        children["global-pool"] = global_pool;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-type" || name == "global-pool" || name == "bandwidth")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::ClassType()
    :
    bandwidth{YType::uint32, "bandwidth"},
    class_type_num{YType::uint8, "class-type-num"},
    unlimited{YType::empty, "unlimited"}
{

    yang_name = "class-type"; yang_parent_name = "sub-pool-config"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::~ClassType()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::has_data() const
{
    return bandwidth.is_set
	|| class_type_num.is_set
	|| unlimited.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(class_type_num.yfilter)
	|| ydk::is_set(unlimited.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (class_type_num.is_set || is_set(class_type_num.yfilter)) leaf_name_data.push_back(class_type_num.get_name_leafdata());
    if (unlimited.is_set || is_set(unlimited.yfilter)) leaf_name_data.push_back(unlimited.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-type-num")
    {
        class_type_num = value;
        class_type_num.value_namespace = name_space;
        class_type_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unlimited")
    {
        unlimited = value;
        unlimited.value_namespace = name_space;
        unlimited.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "class-type-num")
    {
        class_type_num.yfilter = yfilter;
    }
    if(value_path == "unlimited")
    {
        unlimited.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::ClassType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "class-type-num" || name == "unlimited")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::GlobalPool()
    :
    bandwidth{YType::uint32, "bandwidth"},
    unlimited{YType::empty, "unlimited"}
{

    yang_name = "global-pool"; yang_parent_name = "sub-pool-config"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::~GlobalPool()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::has_data() const
{
    return bandwidth.is_set
	|| unlimited.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(unlimited.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-pool";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (unlimited.is_set || is_set(unlimited.yfilter)) leaf_name_data.push_back(unlimited.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unlimited")
    {
        unlimited = value;
        unlimited.value_namespace = name_space;
        unlimited.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "unlimited")
    {
        unlimited.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BackupBw::SubPool::SubPoolConfig::GlobalPool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "unlimited")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::Bandwidth()
    :
    bw{YType::uint32, "bw"},
    class_type{YType::uint8, "class-type"},
    sub_pool{YType::uint32, "sub-pool"}
{

    yang_name = "bandwidth"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::has_data() const
{
    return bw.is_set
	|| class_type.is_set
	|| sub_pool.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bw.yfilter)
	|| ydk::is_set(class_type.yfilter)
	|| ydk::is_set(sub_pool.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw.is_set || is_set(bw.yfilter)) leaf_name_data.push_back(bw.get_name_leafdata());
    if (class_type.is_set || is_set(class_type.yfilter)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (sub_pool.is_set || is_set(sub_pool.yfilter)) leaf_name_data.push_back(sub_pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw")
    {
        bw = value;
        bw.value_namespace = name_space;
        bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-type")
    {
        class_type = value;
        class_type.value_namespace = name_space;
        class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-pool")
    {
        sub_pool = value;
        sub_pool.value_namespace = name_space;
        sub_pool.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw")
    {
        bw.yfilter = yfilter;
    }
    if(value_path == "class-type")
    {
        class_type.yfilter = yfilter;
    }
    if(value_path == "sub-pool")
    {
        sub_pool.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw" || name == "class-type" || name == "sub-pool")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::Bfd()
    :
    sbfd{YType::str, "sbfd"}
{

    yang_name = "bfd"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::~Bfd()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::has_data() const
{
    return sbfd.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sbfd.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sbfd.is_set || is_set(sbfd.yfilter)) leaf_name_data.push_back(sbfd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sbfd")
    {
        sbfd = value;
        sbfd.value_namespace = name_space;
        sbfd.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sbfd")
    {
        sbfd.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sbfd")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::BindingSid()
    :
    label{YType::uint32, "label"}
{

    yang_name = "binding-sid"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::~BindingSid()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::has_data() const
{
    return label.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::Exp()
    :
    default_{YType::empty, "default"},
    exp_value{YType::uint8, "exp-value"}
{

    yang_name = "exp"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::~Exp()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::has_data() const
{
    for (auto const & leaf : exp_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return default_.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::has_operation() const
{
    for (auto const & leaf : exp_value.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(exp_value.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    auto exp_value_name_datas = exp_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), exp_value_name_datas.begin(), exp_value_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exp-value")
    {
        exp_value.append(value);
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "exp-value")
    {
        exp_value.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Exp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "exp-value")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::ExpBundle()
    :
    master{YType::empty, "master"}
    	,
    member(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member>())
{
    member->parent = this;

    yang_name = "exp-bundle"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::~ExpBundle()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::has_data() const
{
    return master.is_set
	|| (member !=  nullptr && member->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(master.yfilter)
	|| (member !=  nullptr && member->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exp-bundle";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master.is_set || is_set(master.yfilter)) leaf_name_data.push_back(master.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member")
    {
        if(member == nullptr)
        {
            member = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member>();
        }
        return member;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(member != nullptr)
    {
        children["member"] = member;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "master")
    {
        master = value;
        master.value_namespace = name_space;
        master.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "master")
    {
        master.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member" || name == "master")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member::Member()
    :
    tunnel{YType::uint32, "Tunnel"}
{

    yang_name = "member"; yang_parent_name = "exp-bundle"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member::~Member()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member::has_data() const
{
    return tunnel.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ExpBundle::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Tunnel")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::FastReroute()
    :
    bw_protect{YType::empty, "bw-protect"},
    node_protect{YType::empty, "node-protect"}
{

    yang_name = "fast-reroute"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::~FastReroute()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::has_data() const
{
    return bw_protect.is_set
	|| node_protect.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bw_protect.yfilter)
	|| ydk::is_set(node_protect.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bw_protect.is_set || is_set(bw_protect.yfilter)) leaf_name_data.push_back(bw_protect.get_name_leafdata());
    if (node_protect.is_set || is_set(node_protect.yfilter)) leaf_name_data.push_back(node_protect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bw-protect")
    {
        bw_protect = value;
        bw_protect.value_namespace = name_space;
        bw_protect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-protect")
    {
        node_protect = value;
        node_protect.value_namespace = name_space;
        node_protect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bw-protect")
    {
        bw_protect.yfilter = yfilter;
    }
    if(value_path == "node-protect")
    {
        node_protect.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw-protect" || name == "node-protect")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency::ForwardingAdjacency()
    :
    holdtime{YType::uint32, "holdtime"}
{

    yang_name = "forwarding-adjacency"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency::~ForwardingAdjacency()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency::has_data() const
{
    return holdtime.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdtime.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-adjacency";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::ForwardingAdjacency::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holdtime")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Interface_()
    :
    down(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down>())
{
    down->parent = this;

    yang_name = "interface"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::~Interface_()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::has_data() const
{
    return (down !=  nullptr && down->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::has_operation() const
{
    return is_set(yfilter)
	|| (down !=  nullptr && down->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "down")
    {
        if(down == nullptr)
        {
            down = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down>();
        }
        return down;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(down != nullptr)
    {
        children["down"] = down;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down::Down()
    :
    delay{YType::uint32, "delay"}
{

    yang_name = "down"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down::~Down()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down::has_data() const
{
    return delay.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Interface_::Down::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::PathOption()
{

    yang_name = "path-option"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::~PathOption()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::has_data() const
{
    for (std::size_t index=0; index<protect.size(); index++)
    {
        if(protect[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<working.size(); index++)
    {
        if(working[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::has_operation() const
{
    for (std::size_t index=0; index<protect.size(); index++)
    {
        if(protect[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<working.size(); index++)
    {
        if(working[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protect")
    {
        for(auto const & c : protect)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect>();
        c->parent = this;
        protect.push_back(c);
        return c;
    }

    if(child_yang_name == "working")
    {
        for(auto const & c : working)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working>();
        c->parent = this;
        working.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protect)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : working)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protect" || name == "working")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Protect()
    :
    id{YType::str, "id"}
    	,
    diverse(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse>())
	,explicit_(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_>())
	,list(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List>())
{
    diverse->parent = this;
    explicit_->parent = this;
    list->parent = this;

    yang_name = "protect"; yang_parent_name = "path-option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::~Protect()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::has_data() const
{
    return id.is_set
	|| (diverse !=  nullptr && diverse->has_data())
	|| (explicit_ !=  nullptr && explicit_->has_data())
	|| (list !=  nullptr && list->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (diverse !=  nullptr && diverse->has_operation())
	|| (explicit_ !=  nullptr && explicit_->has_operation())
	|| (list !=  nullptr && list->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protect" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diverse")
    {
        if(diverse == nullptr)
        {
            diverse = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse>();
        }
        return diverse;
    }

    if(child_yang_name == "explicit")
    {
        if(explicit_ == nullptr)
        {
            explicit_ = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_>();
        }
        return explicit_;
    }

    if(child_yang_name == "list")
    {
        if(list == nullptr)
        {
            list = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List>();
        }
        return list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(diverse != nullptr)
    {
        children["diverse"] = diverse;
    }

    if(explicit_ != nullptr)
    {
        children["explicit"] = explicit_;
    }

    if(list != nullptr)
    {
        children["list"] = list;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diverse" || name == "explicit" || name == "list" || name == "id")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Diverse()
    :
    address{YType::str, "address"},
    attributes{YType::str, "attributes"},
    lockdown{YType::empty, "lockdown"},
    node{YType::empty, "node"},
    non_revertive{YType::empty, "non-revertive"},
    pce{YType::empty, "pce"},
    segment_routing{YType::empty, "segment-routing"},
    srlg{YType::empty, "srlg"},
    verbatim{YType::empty, "verbatim"}
    	,
    bandwidth(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth>())
{
    bandwidth->parent = this;

    yang_name = "diverse"; yang_parent_name = "protect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::~Diverse()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::has_data() const
{
    return address.is_set
	|| attributes.is_set
	|| lockdown.is_set
	|| node.is_set
	|| non_revertive.is_set
	|| pce.is_set
	|| segment_routing.is_set
	|| srlg.is_set
	|| verbatim.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(attributes.yfilter)
	|| ydk::is_set(lockdown.yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(non_revertive.yfilter)
	|| ydk::is_set(pce.yfilter)
	|| ydk::is_set(segment_routing.yfilter)
	|| ydk::is_set(srlg.yfilter)
	|| ydk::is_set(verbatim.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diverse";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attributes.is_set || is_set(attributes.yfilter)) leaf_name_data.push_back(attributes.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.yfilter)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (non_revertive.is_set || is_set(non_revertive.yfilter)) leaf_name_data.push_back(non_revertive.get_name_leafdata());
    if (pce.is_set || is_set(pce.yfilter)) leaf_name_data.push_back(pce.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.yfilter)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (srlg.is_set || is_set(srlg.yfilter)) leaf_name_data.push_back(srlg.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth>();
        }
        return bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attributes")
    {
        attributes = value;
        attributes.value_namespace = name_space;
        attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
        lockdown.value_namespace = name_space;
        lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-revertive")
    {
        non_revertive = value;
        non_revertive.value_namespace = name_space;
        non_revertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce")
    {
        pce = value;
        pce.value_namespace = name_space;
        pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
        segment_routing.value_namespace = name_space;
        segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg")
    {
        srlg = value;
        srlg.value_namespace = name_space;
        srlg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "attributes")
    {
        attributes.yfilter = yfilter;
    }
    if(value_path == "lockdown")
    {
        lockdown.yfilter = yfilter;
    }
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "non-revertive")
    {
        non_revertive.yfilter = yfilter;
    }
    if(value_path == "pce")
    {
        pce.yfilter = yfilter;
    }
    if(value_path == "segment-routing")
    {
        segment_routing.yfilter = yfilter;
    }
    if(value_path == "srlg")
    {
        srlg.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "address" || name == "attributes" || name == "lockdown" || name == "node" || name == "non-revertive" || name == "pce" || name == "segment-routing" || name == "srlg" || name == "verbatim")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    sub_pool{YType::uint32, "sub-pool"}
{

    yang_name = "bandwidth"; yang_parent_name = "diverse"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::has_data() const
{
    return bandwidth.is_set
	|| sub_pool.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(sub_pool.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (sub_pool.is_set || is_set(sub_pool.yfilter)) leaf_name_data.push_back(sub_pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-pool")
    {
        sub_pool = value;
        sub_pool.value_namespace = name_space;
        sub_pool.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "sub-pool")
    {
        sub_pool.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Diverse::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "sub-pool")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::Explicit_()
    :
    attributes{YType::str, "attributes"},
    identifier{YType::uint16, "identifier"},
    name{YType::str, "name"},
    non_revertive{YType::empty, "non-revertive"},
    segment_routing{YType::empty, "segment-routing"},
    verbatim{YType::empty, "verbatim"}
    	,
    bandwidth(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth>())
{
    bandwidth->parent = this;

    yang_name = "explicit"; yang_parent_name = "protect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::~Explicit_()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::has_data() const
{
    return attributes.is_set
	|| identifier.is_set
	|| name.is_set
	|| non_revertive.is_set
	|| segment_routing.is_set
	|| verbatim.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attributes.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(non_revertive.yfilter)
	|| ydk::is_set(segment_routing.yfilter)
	|| ydk::is_set(verbatim.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attributes.is_set || is_set(attributes.yfilter)) leaf_name_data.push_back(attributes.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (non_revertive.is_set || is_set(non_revertive.yfilter)) leaf_name_data.push_back(non_revertive.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.yfilter)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth>();
        }
        return bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attributes")
    {
        attributes = value;
        attributes.value_namespace = name_space;
        attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-revertive")
    {
        non_revertive = value;
        non_revertive.value_namespace = name_space;
        non_revertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
        segment_routing.value_namespace = name_space;
        segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attributes")
    {
        attributes.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "non-revertive")
    {
        non_revertive.yfilter = yfilter;
    }
    if(value_path == "segment-routing")
    {
        segment_routing.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "attributes" || name == "identifier" || name == "name" || name == "non-revertive" || name == "segment-routing" || name == "verbatim")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    sub_pool{YType::uint32, "sub-pool"}
{

    yang_name = "bandwidth"; yang_parent_name = "explicit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth::has_data() const
{
    return bandwidth.is_set
	|| sub_pool.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(sub_pool.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (sub_pool.is_set || is_set(sub_pool.yfilter)) leaf_name_data.push_back(sub_pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-pool")
    {
        sub_pool = value;
        sub_pool.value_namespace = name_space;
        sub_pool.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "sub-pool")
    {
        sub_pool.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::Explicit_::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "sub-pool")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::List()
    :
    address{YType::str, "address"},
    attributes{YType::str, "attributes"},
    identifier{YType::uint16, "identifier"},
    name{YType::str, "name"},
    non_revertive{YType::empty, "non-revertive"},
    pce{YType::empty, "pce"},
    segment_routing{YType::empty, "segment-routing"},
    verbatim{YType::empty, "verbatim"}
    	,
    bandwidth(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth>())
{
    bandwidth->parent = this;

    yang_name = "list"; yang_parent_name = "protect"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::~List()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::has_data() const
{
    return address.is_set
	|| attributes.is_set
	|| identifier.is_set
	|| name.is_set
	|| non_revertive.is_set
	|| pce.is_set
	|| segment_routing.is_set
	|| verbatim.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(attributes.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(non_revertive.yfilter)
	|| ydk::is_set(pce.yfilter)
	|| ydk::is_set(segment_routing.yfilter)
	|| ydk::is_set(verbatim.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attributes.is_set || is_set(attributes.yfilter)) leaf_name_data.push_back(attributes.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (non_revertive.is_set || is_set(non_revertive.yfilter)) leaf_name_data.push_back(non_revertive.get_name_leafdata());
    if (pce.is_set || is_set(pce.yfilter)) leaf_name_data.push_back(pce.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.yfilter)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth>();
        }
        return bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attributes")
    {
        attributes = value;
        attributes.value_namespace = name_space;
        attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-revertive")
    {
        non_revertive = value;
        non_revertive.value_namespace = name_space;
        non_revertive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce")
    {
        pce = value;
        pce.value_namespace = name_space;
        pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
        segment_routing.value_namespace = name_space;
        segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "attributes")
    {
        attributes.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "non-revertive")
    {
        non_revertive.yfilter = yfilter;
    }
    if(value_path == "pce")
    {
        pce.yfilter = yfilter;
    }
    if(value_path == "segment-routing")
    {
        segment_routing.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "address" || name == "attributes" || name == "identifier" || name == "name" || name == "non-revertive" || name == "pce" || name == "segment-routing" || name == "verbatim")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    sub_pool{YType::uint32, "sub-pool"}
{

    yang_name = "bandwidth"; yang_parent_name = "list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::has_data() const
{
    return bandwidth.is_set
	|| sub_pool.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(sub_pool.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (sub_pool.is_set || is_set(sub_pool.yfilter)) leaf_name_data.push_back(sub_pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-pool")
    {
        sub_pool = value;
        sub_pool.value_namespace = name_space;
        sub_pool.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "sub-pool")
    {
        sub_pool.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Protect::List::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "sub-pool")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Working()
    :
    id{YType::uint32, "id"}
    	,
    dynamic(nullptr) // presence node
	,explicit_(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_>())
	,segment_routing(nullptr) // presence node
{
    explicit_->parent = this;

    yang_name = "working"; yang_parent_name = "path-option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::~Working()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::has_data() const
{
    return id.is_set
	|| (dynamic !=  nullptr && dynamic->has_data())
	|| (explicit_ !=  nullptr && explicit_->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation())
	|| (explicit_ !=  nullptr && explicit_->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic>();
        }
        return dynamic;
    }

    if(child_yang_name == "explicit")
    {
        if(explicit_ == nullptr)
        {
            explicit_ = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_>();
        }
        return explicit_;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting>();
        }
        return segment_routing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    if(explicit_ != nullptr)
    {
        children["explicit"] = explicit_;
    }

    if(segment_routing != nullptr)
    {
        children["segment-routing"] = segment_routing;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "explicit" || name == "segment-routing" || name == "id")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Dynamic()
    :
    address{YType::str, "address"},
    attributes{YType::str, "attributes"},
    lockdown{YType::empty, "lockdown"},
    pce{YType::empty, "pce"},
    sticky{YType::empty, "sticky"},
    verbatim{YType::empty, "verbatim"}
    	,
    bandwidth(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth>())
	,segment_routing(nullptr) // presence node
{
    bandwidth->parent = this;

    yang_name = "dynamic"; yang_parent_name = "working"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::~Dynamic()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::has_data() const
{
    return address.is_set
	|| attributes.is_set
	|| lockdown.is_set
	|| pce.is_set
	|| sticky.is_set
	|| verbatim.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(attributes.yfilter)
	|| ydk::is_set(lockdown.yfilter)
	|| ydk::is_set(pce.yfilter)
	|| ydk::is_set(sticky.yfilter)
	|| ydk::is_set(verbatim.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attributes.is_set || is_set(attributes.yfilter)) leaf_name_data.push_back(attributes.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.yfilter)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (pce.is_set || is_set(pce.yfilter)) leaf_name_data.push_back(pce.get_name_leafdata());
    if (sticky.is_set || is_set(sticky.yfilter)) leaf_name_data.push_back(sticky.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting>();
        }
        return segment_routing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(segment_routing != nullptr)
    {
        children["segment-routing"] = segment_routing;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attributes")
    {
        attributes = value;
        attributes.value_namespace = name_space;
        attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
        lockdown.value_namespace = name_space;
        lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce")
    {
        pce = value;
        pce.value_namespace = name_space;
        pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sticky")
    {
        sticky = value;
        sticky.value_namespace = name_space;
        sticky.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "attributes")
    {
        attributes.yfilter = yfilter;
    }
    if(value_path == "lockdown")
    {
        lockdown.yfilter = yfilter;
    }
    if(value_path == "pce")
    {
        pce.yfilter = yfilter;
    }
    if(value_path == "sticky")
    {
        sticky.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "segment-routing" || name == "address" || name == "attributes" || name == "lockdown" || name == "pce" || name == "sticky" || name == "verbatim")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    sub_pool{YType::uint32, "sub-pool"}
{

    yang_name = "bandwidth"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::has_data() const
{
    return bandwidth.is_set
	|| sub_pool.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(sub_pool.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (sub_pool.is_set || is_set(sub_pool.yfilter)) leaf_name_data.push_back(sub_pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-pool")
    {
        sub_pool = value;
        sub_pool.value_namespace = name_space;
        sub_pool.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "sub-pool")
    {
        sub_pool.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "sub-pool")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::SegmentRouting()
    :
    address{YType::str, "address"},
    attributes{YType::str, "attributes"},
    lockdown{YType::empty, "lockdown"},
    pce{YType::empty, "pce"},
    sticky{YType::empty, "sticky"},
    verbatim{YType::empty, "verbatim"}
{

    yang_name = "segment-routing"; yang_parent_name = "dynamic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::~SegmentRouting()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::has_data() const
{
    return address.is_set
	|| attributes.is_set
	|| lockdown.is_set
	|| pce.is_set
	|| sticky.is_set
	|| verbatim.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(attributes.yfilter)
	|| ydk::is_set(lockdown.yfilter)
	|| ydk::is_set(pce.yfilter)
	|| ydk::is_set(sticky.yfilter)
	|| ydk::is_set(verbatim.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (attributes.is_set || is_set(attributes.yfilter)) leaf_name_data.push_back(attributes.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.yfilter)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (pce.is_set || is_set(pce.yfilter)) leaf_name_data.push_back(pce.get_name_leafdata());
    if (sticky.is_set || is_set(sticky.yfilter)) leaf_name_data.push_back(sticky.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attributes")
    {
        attributes = value;
        attributes.value_namespace = name_space;
        attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
        lockdown.value_namespace = name_space;
        lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce")
    {
        pce = value;
        pce.value_namespace = name_space;
        pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sticky")
    {
        sticky = value;
        sticky.value_namespace = name_space;
        sticky.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "attributes")
    {
        attributes.yfilter = yfilter;
    }
    if(value_path == "lockdown")
    {
        lockdown.yfilter = yfilter;
    }
    if(value_path == "pce")
    {
        pce.yfilter = yfilter;
    }
    if(value_path == "sticky")
    {
        sticky.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Dynamic::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "attributes" || name == "lockdown" || name == "pce" || name == "sticky" || name == "verbatim")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Explicit_()
    :
    attributes{YType::str, "attributes"},
    identifier{YType::uint16, "identifier"},
    lockdown{YType::empty, "lockdown"},
    name{YType::str, "name"},
    segment_routing{YType::empty, "segment-routing"},
    sticky{YType::empty, "sticky"},
    verbatim{YType::empty, "verbatim"}
    	,
    bandwidth(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth>())
{
    bandwidth->parent = this;

    yang_name = "explicit"; yang_parent_name = "working"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::~Explicit_()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::has_data() const
{
    return attributes.is_set
	|| identifier.is_set
	|| lockdown.is_set
	|| name.is_set
	|| segment_routing.is_set
	|| sticky.is_set
	|| verbatim.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attributes.yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(lockdown.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(segment_routing.yfilter)
	|| ydk::is_set(sticky.yfilter)
	|| ydk::is_set(verbatim.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attributes.is_set || is_set(attributes.yfilter)) leaf_name_data.push_back(attributes.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (lockdown.is_set || is_set(lockdown.yfilter)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (segment_routing.is_set || is_set(segment_routing.yfilter)) leaf_name_data.push_back(segment_routing.get_name_leafdata());
    if (sticky.is_set || is_set(sticky.yfilter)) leaf_name_data.push_back(sticky.get_name_leafdata());
    if (verbatim.is_set || is_set(verbatim.yfilter)) leaf_name_data.push_back(verbatim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth>();
        }
        return bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attributes")
    {
        attributes = value;
        attributes.value_namespace = name_space;
        attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lockdown")
    {
        lockdown = value;
        lockdown.value_namespace = name_space;
        lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-routing")
    {
        segment_routing = value;
        segment_routing.value_namespace = name_space;
        segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sticky")
    {
        sticky = value;
        sticky.value_namespace = name_space;
        sticky.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "verbatim")
    {
        verbatim = value;
        verbatim.value_namespace = name_space;
        verbatim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attributes")
    {
        attributes.yfilter = yfilter;
    }
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "lockdown")
    {
        lockdown.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "segment-routing")
    {
        segment_routing.yfilter = yfilter;
    }
    if(value_path == "sticky")
    {
        sticky.yfilter = yfilter;
    }
    if(value_path == "verbatim")
    {
        verbatim.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "attributes" || name == "identifier" || name == "lockdown" || name == "name" || name == "segment-routing" || name == "sticky" || name == "verbatim")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth::Bandwidth()
    :
    bandwidth{YType::uint32, "bandwidth"},
    sub_pool{YType::uint32, "sub-pool"}
{

    yang_name = "bandwidth"; yang_parent_name = "explicit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth::~Bandwidth()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth::has_data() const
{
    return bandwidth.is_set
	|| sub_pool.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(sub_pool.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (sub_pool.is_set || is_set(sub_pool.yfilter)) leaf_name_data.push_back(sub_pool.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-pool")
    {
        sub_pool = value;
        sub_pool.value_namespace = name_space;
        sub_pool.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "sub-pool")
    {
        sub_pool.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::Explicit_::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "sub-pool")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting::SegmentRouting()
    :
    lockdown{YType::empty, "lockdown"},
    sticky{YType::empty, "sticky"}
{

    yang_name = "segment-routing"; yang_parent_name = "working"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting::~SegmentRouting()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting::has_data() const
{
    return lockdown.is_set
	|| sticky.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lockdown.yfilter)
	|| ydk::is_set(sticky.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lockdown.is_set || is_set(lockdown.yfilter)) leaf_name_data.push_back(lockdown.get_name_leafdata());
    if (sticky.is_set || is_set(sticky.yfilter)) leaf_name_data.push_back(sticky.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lockdown")
    {
        lockdown = value;
        lockdown.value_namespace = name_space;
        lockdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sticky")
    {
        sticky = value;
        sticky.value_namespace = name_space;
        sticky.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lockdown")
    {
        lockdown.yfilter = yfilter;
    }
    if(value_path == "sticky")
    {
        sticky.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathOption::Working::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lockdown" || name == "sticky")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::PathSelection()
    :
    cost_limit{YType::uint32, "cost-limit"},
    hop_limit{YType::uint8, "hop-limit"},
    metric{YType::enumeration, "metric"},
    tiebreaker{YType::enumeration, "tiebreaker"}
    	,
    invalidation(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation>())
	,segment_routing(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting>())
{
    invalidation->parent = this;
    segment_routing->parent = this;

    yang_name = "path-selection"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::~PathSelection()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::has_data() const
{
    return cost_limit.is_set
	|| hop_limit.is_set
	|| metric.is_set
	|| tiebreaker.is_set
	|| (invalidation !=  nullptr && invalidation->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cost_limit.yfilter)
	|| ydk::is_set(hop_limit.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tiebreaker.yfilter)
	|| (invalidation !=  nullptr && invalidation->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-selection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost_limit.is_set || is_set(cost_limit.yfilter)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (hop_limit.is_set || is_set(hop_limit.yfilter)) leaf_name_data.push_back(hop_limit.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tiebreaker.is_set || is_set(tiebreaker.yfilter)) leaf_name_data.push_back(tiebreaker.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "invalidation")
    {
        if(invalidation == nullptr)
        {
            invalidation = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation>();
        }
        return invalidation;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting>();
        }
        return segment_routing;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::get_children() const
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

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost-limit")
    {
        cost_limit = value;
        cost_limit.value_namespace = name_space;
        cost_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hop-limit")
    {
        hop_limit = value;
        hop_limit.value_namespace = name_space;
        hop_limit.value_namespace_prefix = name_space_prefix;
    }
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

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost-limit")
    {
        cost_limit.yfilter = yfilter;
    }
    if(value_path == "hop-limit")
    {
        hop_limit.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tiebreaker")
    {
        tiebreaker.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalidation" || name == "segment-routing" || name == "cost-limit" || name == "hop-limit" || name == "metric" || name == "tiebreaker")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::Invalidation()
    :
    drop{YType::empty, "drop"},
    value_{YType::int32, "value"}
{

    yang_name = "invalidation"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::~Invalidation()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::has_data() const
{
    return drop.is_set
	|| value_.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "invalidation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Invalidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop" || name == "value")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::SegmentRouting()
    :
    adjacency{YType::enumeration, "adjacency"}
{

    yang_name = "segment-routing"; yang_parent_name = "path-selection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::~SegmentRouting()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::has_data() const
{
    return adjacency.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjacency.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency.is_set || is_set(adjacency.yfilter)) leaf_name_data.push_back(adjacency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency")
    {
        adjacency = value;
        adjacency.value_namespace = name_space;
        adjacency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency")
    {
        adjacency.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::Priority()
    :
    hold_priority{YType::uint8, "hold-priority"},
    setup_priority{YType::uint8, "setup-priority"}
{

    yang_name = "priority"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::~Priority()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::has_data() const
{
    return hold_priority.is_set
	|| setup_priority.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(setup_priority.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-priority" || name == "setup-priority")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute::RecordRoute()
{

    yang_name = "record-route"; yang_parent_name = "traffic-eng"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute::~RecordRoute()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute::has_data() const
{
    return false;
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "record-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::RecordRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::NetworkId::NetworkId()
    :
    id{YType::uint16, "id"},
    nexthop{YType::str, "nexthop"},
    qos{YType::str, "qos"},
    weight{YType::uint16, "weight"}
{

    yang_name = "network-id"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::NetworkId::~NetworkId()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::NetworkId::has_data() const
{
    return id.is_set
	|| nexthop.is_set
	|| qos.is_set
	|| weight.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::NetworkId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(nexthop.yfilter)
	|| ydk::is_set(qos.yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::NetworkId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::NetworkId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (nexthop.is_set || is_set(nexthop.yfilter)) leaf_name_data.push_back(nexthop.get_name_leafdata());
    if (qos.is_set || is_set(qos.yfilter)) leaf_name_data.push_back(qos.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::NetworkId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::NetworkId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::NetworkId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nexthop")
    {
        nexthop = value;
        nexthop.value_namespace = name_space;
        nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos")
    {
        qos = value;
        qos.value_namespace = name_space;
        qos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::NetworkId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "nexthop")
    {
        nexthop.yfilter = yfilter;
    }
    if(value_path == "qos")
    {
        qos.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::NetworkId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "nexthop" || name == "qos" || name == "weight")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::PathMtuDiscovery()
{

    yang_name = "path-mtu-discovery"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::~PathMtuDiscovery()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::has_data() const
{
    return false;
}

bool Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-mtu-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Tunnel::PathMtuDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Protection::Protection()
{

    yang_name = "protection"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Protection::~Protection()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Protection::has_data() const
{
    return false;
}

bool Native::Interface::VirtualTemplate::Tunnel::Protection::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::VirtualTemplate::Tunnel::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Rbscp::Rbscp()
    :
    ack_split{YType::uint8, "ack-split"},
    delay{YType::empty, "delay"},
    input_drop{YType::uint8, "input-drop"},
    long_drop{YType::empty, "long-drop"},
    report{YType::empty, "report"},
    window_stuff{YType::uint8, "window-stuff"}
{

    yang_name = "rbscp"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Rbscp::~Rbscp()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Rbscp::has_data() const
{
    return ack_split.is_set
	|| delay.is_set
	|| input_drop.is_set
	|| long_drop.is_set
	|| report.is_set
	|| window_stuff.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Rbscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack_split.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(input_drop.yfilter)
	|| ydk::is_set(long_drop.yfilter)
	|| ydk::is_set(report.yfilter)
	|| ydk::is_set(window_stuff.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Rbscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rbscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Rbscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack_split.is_set || is_set(ack_split.yfilter)) leaf_name_data.push_back(ack_split.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (input_drop.is_set || is_set(input_drop.yfilter)) leaf_name_data.push_back(input_drop.get_name_leafdata());
    if (long_drop.is_set || is_set(long_drop.yfilter)) leaf_name_data.push_back(long_drop.get_name_leafdata());
    if (report.is_set || is_set(report.yfilter)) leaf_name_data.push_back(report.get_name_leafdata());
    if (window_stuff.is_set || is_set(window_stuff.yfilter)) leaf_name_data.push_back(window_stuff.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Rbscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Rbscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Rbscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack-split")
    {
        ack_split = value;
        ack_split.value_namespace = name_space;
        ack_split.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-drop")
    {
        input_drop = value;
        input_drop.value_namespace = name_space;
        input_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "long-drop")
    {
        long_drop = value;
        long_drop.value_namespace = name_space;
        long_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report")
    {
        report = value;
        report.value_namespace = name_space;
        report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-stuff")
    {
        window_stuff = value;
        window_stuff.value_namespace = name_space;
        window_stuff.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Rbscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack-split")
    {
        ack_split.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "input-drop")
    {
        input_drop.yfilter = yfilter;
    }
    if(value_path == "long-drop")
    {
        long_drop.yfilter = yfilter;
    }
    if(value_path == "report")
    {
        report.yfilter = yfilter;
    }
    if(value_path == "window-stuff")
    {
        window_stuff.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Rbscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ack-split" || name == "delay" || name == "input-drop" || name == "long-drop" || name == "report" || name == "window-stuff")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::SrcPort::SrcPort()
    :
    dynamic{YType::empty, "dynamic"},
    port_num{YType::uint16, "port-num"}
{

    yang_name = "src-port"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::SrcPort::~SrcPort()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::SrcPort::has_data() const
{
    return dynamic.is_set
	|| port_num.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::SrcPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic.yfilter)
	|| ydk::is_set(port_num.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::SrcPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::SrcPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());
    if (port_num.is_set || is_set(port_num.yfilter)) leaf_name_data.push_back(port_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::SrcPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::SrcPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::SrcPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-num")
    {
        port_num = value;
        port_num.value_namespace = name_space;
        port_num.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::SrcPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
    if(value_path == "port-num")
    {
        port_num.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::SrcPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic" || name == "port-num")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Tun6rd()
    :
    br{YType::str, "br"},
    prefix{YType::str, "prefix"},
    reverse_map_check{YType::empty, "reverse-map-check"}
    	,
    ipv4(std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "tun-6rd"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Tun6rd::~Tun6rd()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Tun6rd::has_data() const
{
    return br.is_set
	|| prefix.is_set
	|| reverse_map_check.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Interface::VirtualTemplate::Tunnel::Tun6rd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(br.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(reverse_map_check.yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Interface::VirtualTemplate::Tunnel::Tun6rd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tun-6rd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Tun6rd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (br.is_set || is_set(br.yfilter)) leaf_name_data.push_back(br.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (reverse_map_check.is_set || is_set(reverse_map_check.yfilter)) leaf_name_data.push_back(reverse_map_check.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Tun6rd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Tun6rd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Tun6rd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "br")
    {
        br = value;
        br.value_namespace = name_space;
        br.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverse-map-check")
    {
        reverse_map_check = value;
        reverse_map_check.value_namespace = name_space;
        reverse_map_check.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Tun6rd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "br")
    {
        br.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "reverse-map-check")
    {
        reverse_map_check.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Tun6rd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "br" || name == "prefix" || name == "reverse-map-check")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::Ipv4()
    :
    prefix_len{YType::uint8, "prefix-len"},
    suffix_len{YType::uint8, "suffix-len"}
{

    yang_name = "ipv4"; yang_parent_name = "tun-6rd"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::~Ipv4()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::has_data() const
{
    return prefix_len.is_set
	|| suffix_len.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(suffix_len.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (suffix_len.is_set || is_set(suffix_len.yfilter)) leaf_name_data.push_back(suffix_len.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suffix-len")
    {
        suffix_len = value;
        suffix_len.value_namespace = name_space;
        suffix_len.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "suffix-len")
    {
        suffix_len.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Tun6rd::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-len" || name == "suffix-len")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Udlr::Udlr()
    :
    address_resolution{YType::empty, "address-resolution"},
    receive_only{YType::str, "receive-only"},
    send_only{YType::str, "send-only"}
{

    yang_name = "udlr"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Udlr::~Udlr()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Udlr::has_data() const
{
    return address_resolution.is_set
	|| receive_only.is_set
	|| send_only.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Udlr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_resolution.yfilter)
	|| ydk::is_set(receive_only.yfilter)
	|| ydk::is_set(send_only.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Udlr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udlr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Udlr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_resolution.is_set || is_set(address_resolution.yfilter)) leaf_name_data.push_back(address_resolution.get_name_leafdata());
    if (receive_only.is_set || is_set(receive_only.yfilter)) leaf_name_data.push_back(receive_only.get_name_leafdata());
    if (send_only.is_set || is_set(send_only.yfilter)) leaf_name_data.push_back(send_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Udlr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Udlr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Udlr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-resolution")
    {
        address_resolution = value;
        address_resolution.value_namespace = name_space;
        address_resolution.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-only")
    {
        receive_only = value;
        receive_only.value_namespace = name_space;
        receive_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-only")
    {
        send_only = value;
        send_only.value_namespace = name_space;
        send_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Udlr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-resolution")
    {
        address_resolution.yfilter = yfilter;
    }
    if(value_path == "receive-only")
    {
        receive_only.yfilter = yfilter;
    }
    if(value_path == "send-only")
    {
        send_only.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Udlr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-resolution" || name == "receive-only" || name == "send-only")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Tunnel::Vlan::Vlan()
    :
    hyphen{YType::empty, "hyphen"},
    id1{YType::uint16, "id1"},
    id2{YType::uint16, "id2"}
{

    yang_name = "vlan"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Tunnel::Vlan::~Vlan()
{
}

bool Native::Interface::VirtualTemplate::Tunnel::Vlan::has_data() const
{
    return hyphen.is_set
	|| id1.is_set
	|| id2.is_set;
}

bool Native::Interface::VirtualTemplate::Tunnel::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hyphen.yfilter)
	|| ydk::is_set(id1.yfilter)
	|| ydk::is_set(id2.yfilter);
}

std::string Native::Interface::VirtualTemplate::Tunnel::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Tunnel::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hyphen.is_set || is_set(hyphen.yfilter)) leaf_name_data.push_back(hyphen.get_name_leafdata());
    if (id1.is_set || is_set(id1.yfilter)) leaf_name_data.push_back(id1.get_name_leafdata());
    if (id2.is_set || is_set(id2.yfilter)) leaf_name_data.push_back(id2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Tunnel::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Tunnel::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Tunnel::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hyphen")
    {
        hyphen = value;
        hyphen.value_namespace = name_space;
        hyphen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id1")
    {
        id1 = value;
        id1.value_namespace = name_space;
        id1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id2")
    {
        id2 = value;
        id2.value_namespace = name_space;
        id2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Tunnel::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hyphen")
    {
        hyphen.yfilter = yfilter;
    }
    if(value_path == "id1")
    {
        id1.yfilter = yfilter;
    }
    if(value_path == "id2")
    {
        id2.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Tunnel::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hyphen" || name == "id1" || name == "id2")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Utd::Utd()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "utd"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Utd::~Utd()
{
}

bool Native::Interface::VirtualTemplate::Utd::has_data() const
{
    return enable.is_set;
}

bool Native::Interface::VirtualTemplate::Utd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Interface::VirtualTemplate::Utd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Utd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Utd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Utd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Utd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Utd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Utd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{

    yang_name = "vrf"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::Vrf::~Vrf()
{
}

bool Native::Interface::VirtualTemplate::Vrf::has_data() const
{
    return forwarding.is_set;
}

bool Native::Interface::VirtualTemplate::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Interface::VirtualTemplate::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Interface::VirtualTemplate::ZoneMember::ZoneMember()
    :
    security{YType::str, "security"}
{

    yang_name = "zone-member"; yang_parent_name = "Virtual-Template"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::VirtualTemplate::ZoneMember::~ZoneMember()
{
}

bool Native::Interface::VirtualTemplate::ZoneMember::has_data() const
{
    return security.is_set;
}

bool Native::Interface::VirtualTemplate::ZoneMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(security.yfilter);
}

std::string Native::Interface::VirtualTemplate::ZoneMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-zone:zone-member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::VirtualTemplate::ZoneMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (security.is_set || is_set(security.yfilter)) leaf_name_data.push_back(security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::VirtualTemplate::ZoneMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::VirtualTemplate::ZoneMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::VirtualTemplate::ZoneMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "security")
    {
        security = value;
        security.value_namespace = name_space;
        security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::VirtualTemplate::ZoneMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "security")
    {
        security.yfilter = yfilter;
    }
}

bool Native::Interface::VirtualTemplate::ZoneMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::Interface::Vlan::Vlan()
    :
    name{YType::uint16, "name"},
    cisco_ios_xe_interfaces_delay{YType::uint32, "Cisco-IOS-XE-interfaces_delay"},
    cisco_ios_xe_interfaces_delay_{YType::uint32, "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_delay"},
    cisco_ios_xe_interfaces_description{YType::str, "Cisco-IOS-XE-interfaces_description"},
    cisco_ios_xe_interfaces_description_{YType::str, "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_description"},
    cisco_ios_xe_interfaces_if_state{YType::enumeration, "Cisco-IOS-XE-interfaces_if-state"},
    cisco_ios_xe_interfaces_if_state_{YType::enumeration, "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_if-state"},
    cisco_ios_xe_interfaces_load_interval{YType::uint16, "Cisco-IOS-XE-interfaces_load-interval"},
    cisco_ios_xe_interfaces_load_interval_{YType::uint16, "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_load-interval"},
    cisco_ios_xe_interfaces_mac_address{YType::str, "Cisco-IOS-XE-interfaces_mac-address"},
    cisco_ios_xe_interfaces_mac_address_{YType::str, "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_mac-address"},
    cisco_ios_xe_interfaces_max_reserved_bandwidth{YType::uint8, "Cisco-IOS-XE-interfaces_max-reserved-bandwidth"},
    cisco_ios_xe_interfaces_max_reserved_bandwidth_{YType::uint8, "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_max-reserved-bandwidth"},
    cisco_ios_xe_interfaces_mtu{YType::uint16, "Cisco-IOS-XE-interfaces_mtu"},
    cisco_ios_xe_interfaces_mtu_{YType::uint16, "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_mtu"},
    cisco_ios_xe_interfaces_service_insertion{YType::enumeration, "Cisco-IOS-XE-interfaces_service-insertion"},
    cisco_ios_xe_interfaces_service_insertion_{YType::enumeration, "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_service-insertion"},
    cisco_ios_xe_interfaces_shutdown{YType::empty, "Cisco-IOS-XE-interfaces_shutdown"},
    cisco_ios_xe_interfaces_shutdown_{YType::empty, "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_shutdown"},
    keepalive{YType::boolean, "keepalive"},
    keepalive_{YType::boolean, "Cisco-IOS-XE-vlan:keepalive"}
    	,
    cisco_ios_xe_interfaces_access_session(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession>())
	,cisco_ios_xe_interfaces_access_session_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_>())
	,cisco_ios_xe_interfaces_arp(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesArp>())
	,cisco_ios_xe_interfaces_arp_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesArp_>())
	,cisco_ios_xe_interfaces_backup(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup>())
	,cisco_ios_xe_interfaces_backup_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_>())
	,cisco_ios_xe_interfaces_bandwidth(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth>())
	,cisco_ios_xe_interfaces_bandwidth_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_>())
	,cisco_ios_xe_interfaces_bfd(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBfd>())
	,cisco_ios_xe_interfaces_bfd_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBfd_>())
	,cisco_ios_xe_interfaces_cemoudp(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp>())
	,cisco_ios_xe_interfaces_cemoudp_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_>())
	,cisco_ios_xe_interfaces_cws_tunnel(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel>())
	,cisco_ios_xe_interfaces_cws_tunnel_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_>())
	,cisco_ios_xe_interfaces_dampening(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesDampening>())
	,cisco_ios_xe_interfaces_dampening_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_>())
	,cisco_ios_xe_interfaces_domain(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesDomain>())
	,cisco_ios_xe_interfaces_domain_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesDomain_>())
	,cisco_ios_xe_interfaces_encapsulation(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation>())
	,cisco_ios_xe_interfaces_encapsulation_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_>())
	,cisco_ios_xe_interfaces_fair_queue(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue>())
	,cisco_ios_xe_interfaces_fair_queue_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue_>())
	,cisco_ios_xe_interfaces_fair_queue_conf(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf>())
	,cisco_ios_xe_interfaces_fair_queue_conf_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf_>())
	,cisco_ios_xe_interfaces_flowcontrol(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol>())
	,cisco_ios_xe_interfaces_flowcontrol_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_>())
	,cisco_ios_xe_interfaces_interface_qos(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos>())
	,cisco_ios_xe_interfaces_interface_qos_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_>())
	,cisco_ios_xe_interfaces_ip(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp>())
	,cisco_ios_xe_interfaces_ip_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_>())
	,cisco_ios_xe_interfaces_ipv6(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6>())
	,cisco_ios_xe_interfaces_ipv6_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_>())
	,cisco_ios_xe_interfaces_isis(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis>())
	,cisco_ios_xe_interfaces_isis_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis_>())
	,cisco_ios_xe_interfaces_l2protocol_tunnel(nullptr) // presence node
	,cisco_ios_xe_interfaces_l2protocol_tunnel_(nullptr) // presence node
	,cisco_ios_xe_interfaces_logging(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesLogging>())
	,cisco_ios_xe_interfaces_logging_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_>())
	,cisco_ios_xe_interfaces_mdix(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesMdix>())
	,cisco_ios_xe_interfaces_mdix_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesMdix_>())
	,cisco_ios_xe_interfaces_mop(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesMop>())
	,cisco_ios_xe_interfaces_mop_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesMop_>())
	,cisco_ios_xe_interfaces_mpls(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesMpls>())
	,cisco_ios_xe_interfaces_mpls_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesMpls_>())
	,cisco_ios_xe_interfaces_peer(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPeer>())
	,cisco_ios_xe_interfaces_peer_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_>())
	,cisco_ios_xe_interfaces_pm_path(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath>())
	,cisco_ios_xe_interfaces_pm_path_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath_>())
	,cisco_ios_xe_interfaces_priority_queue(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue>())
	,cisco_ios_xe_interfaces_priority_queue_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_>())
	,cisco_ios_xe_interfaces_rcv_queue(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue>())
	,cisco_ios_xe_interfaces_rcv_queue_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_>())
	,cisco_ios_xe_interfaces_standby(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby>())
	,cisco_ios_xe_interfaces_standby_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_>())
	,cisco_ios_xe_interfaces_storm_control(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl>())
	,cisco_ios_xe_interfaces_storm_control_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_>())
	,cisco_ios_xe_interfaces_switchport(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport>())
	,cisco_ios_xe_interfaces_switchport_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport_>())
	,cisco_ios_xe_interfaces_switchport_conf(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf>())
	,cisco_ios_xe_interfaces_switchport_conf_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf_>())
	,cisco_ios_xe_interfaces_trust(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesTrust>())
	,cisco_ios_xe_interfaces_trust_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesTrust_>())
	,cisco_ios_xe_interfaces_utd(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesUtd>())
	,cisco_ios_xe_interfaces_utd_(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesUtd_>())
	,crypto(std::make_shared<Native::Interface::Vlan::Crypto>())
	,cts(std::make_shared<Native::Interface::Vlan::Cts>())
	,glbp(std::make_shared<Native::Interface::Vlan::Glbp>())
	,ip_vrf(std::make_shared<Native::Interface::Vlan::IpVrf>())
	,ip_vrf_(std::make_shared<Native::Interface::Vlan::IpVrf_>())
	,keepalive_settings(std::make_shared<Native::Interface::Vlan::KeepaliveSettings>())
	,keepalive_settings_(std::make_shared<Native::Interface::Vlan::KeepaliveSettings_>())
	,lisp(std::make_shared<Native::Interface::Vlan::Lisp>())
	,private_vlan(std::make_shared<Native::Interface::Vlan::PrivateVlan>())
	,service_policy(std::make_shared<Native::Interface::Vlan::ServicePolicy>())
	,service_routing(std::make_shared<Native::Interface::Vlan::ServiceRouting>())
	,vrf(std::make_shared<Native::Interface::Vlan::Vrf>())
	,vrf_(std::make_shared<Native::Interface::Vlan::Vrf_>())
	,zone_member(std::make_shared<Native::Interface::Vlan::ZoneMember>())
{
    cisco_ios_xe_interfaces_access_session->parent = this;
    cisco_ios_xe_interfaces_access_session_->parent = this;
    cisco_ios_xe_interfaces_arp->parent = this;
    cisco_ios_xe_interfaces_arp_->parent = this;
    cisco_ios_xe_interfaces_backup->parent = this;
    cisco_ios_xe_interfaces_backup_->parent = this;
    cisco_ios_xe_interfaces_bandwidth->parent = this;
    cisco_ios_xe_interfaces_bandwidth_->parent = this;
    cisco_ios_xe_interfaces_bfd->parent = this;
    cisco_ios_xe_interfaces_bfd_->parent = this;
    cisco_ios_xe_interfaces_cemoudp->parent = this;
    cisco_ios_xe_interfaces_cemoudp_->parent = this;
    cisco_ios_xe_interfaces_cws_tunnel->parent = this;
    cisco_ios_xe_interfaces_cws_tunnel_->parent = this;
    cisco_ios_xe_interfaces_dampening->parent = this;
    cisco_ios_xe_interfaces_dampening_->parent = this;
    cisco_ios_xe_interfaces_domain->parent = this;
    cisco_ios_xe_interfaces_domain_->parent = this;
    cisco_ios_xe_interfaces_encapsulation->parent = this;
    cisco_ios_xe_interfaces_encapsulation_->parent = this;
    cisco_ios_xe_interfaces_fair_queue->parent = this;
    cisco_ios_xe_interfaces_fair_queue_->parent = this;
    cisco_ios_xe_interfaces_fair_queue_conf->parent = this;
    cisco_ios_xe_interfaces_fair_queue_conf_->parent = this;
    cisco_ios_xe_interfaces_flowcontrol->parent = this;
    cisco_ios_xe_interfaces_flowcontrol_->parent = this;
    cisco_ios_xe_interfaces_interface_qos->parent = this;
    cisco_ios_xe_interfaces_interface_qos_->parent = this;
    cisco_ios_xe_interfaces_ip->parent = this;
    cisco_ios_xe_interfaces_ip_->parent = this;
    cisco_ios_xe_interfaces_ipv6->parent = this;
    cisco_ios_xe_interfaces_ipv6_->parent = this;
    cisco_ios_xe_interfaces_isis->parent = this;
    cisco_ios_xe_interfaces_isis_->parent = this;
    cisco_ios_xe_interfaces_logging->parent = this;
    cisco_ios_xe_interfaces_logging_->parent = this;
    cisco_ios_xe_interfaces_mdix->parent = this;
    cisco_ios_xe_interfaces_mdix_->parent = this;
    cisco_ios_xe_interfaces_mop->parent = this;
    cisco_ios_xe_interfaces_mop_->parent = this;
    cisco_ios_xe_interfaces_mpls->parent = this;
    cisco_ios_xe_interfaces_mpls_->parent = this;
    cisco_ios_xe_interfaces_peer->parent = this;
    cisco_ios_xe_interfaces_peer_->parent = this;
    cisco_ios_xe_interfaces_pm_path->parent = this;
    cisco_ios_xe_interfaces_pm_path_->parent = this;
    cisco_ios_xe_interfaces_priority_queue->parent = this;
    cisco_ios_xe_interfaces_priority_queue_->parent = this;
    cisco_ios_xe_interfaces_rcv_queue->parent = this;
    cisco_ios_xe_interfaces_rcv_queue_->parent = this;
    cisco_ios_xe_interfaces_standby->parent = this;
    cisco_ios_xe_interfaces_standby_->parent = this;
    cisco_ios_xe_interfaces_storm_control->parent = this;
    cisco_ios_xe_interfaces_storm_control_->parent = this;
    cisco_ios_xe_interfaces_switchport->parent = this;
    cisco_ios_xe_interfaces_switchport_->parent = this;
    cisco_ios_xe_interfaces_switchport_conf->parent = this;
    cisco_ios_xe_interfaces_switchport_conf_->parent = this;
    cisco_ios_xe_interfaces_trust->parent = this;
    cisco_ios_xe_interfaces_trust_->parent = this;
    cisco_ios_xe_interfaces_utd->parent = this;
    cisco_ios_xe_interfaces_utd_->parent = this;
    crypto->parent = this;
    cts->parent = this;
    glbp->parent = this;
    ip_vrf->parent = this;
    ip_vrf_->parent = this;
    keepalive_settings->parent = this;
    keepalive_settings_->parent = this;
    lisp->parent = this;
    private_vlan->parent = this;
    service_policy->parent = this;
    service_routing->parent = this;
    vrf->parent = this;
    vrf_->parent = this;
    zone_member->parent = this;

    yang_name = "Vlan"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Interface::Vlan::~Vlan()
{
}

bool Native::Interface::Vlan::has_data() const
{
    for (std::size_t index=0; index<cisco_ios_xe_interfaces_hold_queue.size(); index++)
    {
        if(cisco_ios_xe_interfaces_hold_queue[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cisco_ios_xe_interfaces_hold_queue_.size(); index++)
    {
        if(cisco_ios_xe_interfaces_hold_queue_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vrrp.size(); index++)
    {
        if(vrrp[index]->has_data())
            return true;
    }
    return name.is_set
	|| cisco_ios_xe_interfaces_delay.is_set
	|| cisco_ios_xe_interfaces_delay_.is_set
	|| cisco_ios_xe_interfaces_description.is_set
	|| cisco_ios_xe_interfaces_description_.is_set
	|| cisco_ios_xe_interfaces_if_state.is_set
	|| cisco_ios_xe_interfaces_if_state_.is_set
	|| cisco_ios_xe_interfaces_load_interval.is_set
	|| cisco_ios_xe_interfaces_load_interval_.is_set
	|| cisco_ios_xe_interfaces_mac_address.is_set
	|| cisco_ios_xe_interfaces_mac_address_.is_set
	|| cisco_ios_xe_interfaces_max_reserved_bandwidth.is_set
	|| cisco_ios_xe_interfaces_max_reserved_bandwidth_.is_set
	|| cisco_ios_xe_interfaces_mtu.is_set
	|| cisco_ios_xe_interfaces_mtu_.is_set
	|| cisco_ios_xe_interfaces_service_insertion.is_set
	|| cisco_ios_xe_interfaces_service_insertion_.is_set
	|| cisco_ios_xe_interfaces_shutdown.is_set
	|| cisco_ios_xe_interfaces_shutdown_.is_set
	|| keepalive.is_set
	|| keepalive_.is_set
	|| (cisco_ios_xe_interfaces_access_session !=  nullptr && cisco_ios_xe_interfaces_access_session->has_data())
	|| (cisco_ios_xe_interfaces_access_session_ !=  nullptr && cisco_ios_xe_interfaces_access_session_->has_data())
	|| (cisco_ios_xe_interfaces_arp !=  nullptr && cisco_ios_xe_interfaces_arp->has_data())
	|| (cisco_ios_xe_interfaces_arp_ !=  nullptr && cisco_ios_xe_interfaces_arp_->has_data())
	|| (cisco_ios_xe_interfaces_backup !=  nullptr && cisco_ios_xe_interfaces_backup->has_data())
	|| (cisco_ios_xe_interfaces_backup_ !=  nullptr && cisco_ios_xe_interfaces_backup_->has_data())
	|| (cisco_ios_xe_interfaces_bandwidth !=  nullptr && cisco_ios_xe_interfaces_bandwidth->has_data())
	|| (cisco_ios_xe_interfaces_bandwidth_ !=  nullptr && cisco_ios_xe_interfaces_bandwidth_->has_data())
	|| (cisco_ios_xe_interfaces_bfd !=  nullptr && cisco_ios_xe_interfaces_bfd->has_data())
	|| (cisco_ios_xe_interfaces_bfd_ !=  nullptr && cisco_ios_xe_interfaces_bfd_->has_data())
	|| (cisco_ios_xe_interfaces_cemoudp !=  nullptr && cisco_ios_xe_interfaces_cemoudp->has_data())
	|| (cisco_ios_xe_interfaces_cemoudp_ !=  nullptr && cisco_ios_xe_interfaces_cemoudp_->has_data())
	|| (cisco_ios_xe_interfaces_cws_tunnel !=  nullptr && cisco_ios_xe_interfaces_cws_tunnel->has_data())
	|| (cisco_ios_xe_interfaces_cws_tunnel_ !=  nullptr && cisco_ios_xe_interfaces_cws_tunnel_->has_data())
	|| (cisco_ios_xe_interfaces_dampening !=  nullptr && cisco_ios_xe_interfaces_dampening->has_data())
	|| (cisco_ios_xe_interfaces_dampening_ !=  nullptr && cisco_ios_xe_interfaces_dampening_->has_data())
	|| (cisco_ios_xe_interfaces_domain !=  nullptr && cisco_ios_xe_interfaces_domain->has_data())
	|| (cisco_ios_xe_interfaces_domain_ !=  nullptr && cisco_ios_xe_interfaces_domain_->has_data())
	|| (cisco_ios_xe_interfaces_encapsulation !=  nullptr && cisco_ios_xe_interfaces_encapsulation->has_data())
	|| (cisco_ios_xe_interfaces_encapsulation_ !=  nullptr && cisco_ios_xe_interfaces_encapsulation_->has_data())
	|| (cisco_ios_xe_interfaces_fair_queue !=  nullptr && cisco_ios_xe_interfaces_fair_queue->has_data())
	|| (cisco_ios_xe_interfaces_fair_queue_ !=  nullptr && cisco_ios_xe_interfaces_fair_queue_->has_data())
	|| (cisco_ios_xe_interfaces_fair_queue_conf !=  nullptr && cisco_ios_xe_interfaces_fair_queue_conf->has_data())
	|| (cisco_ios_xe_interfaces_fair_queue_conf_ !=  nullptr && cisco_ios_xe_interfaces_fair_queue_conf_->has_data())
	|| (cisco_ios_xe_interfaces_flowcontrol !=  nullptr && cisco_ios_xe_interfaces_flowcontrol->has_data())
	|| (cisco_ios_xe_interfaces_flowcontrol_ !=  nullptr && cisco_ios_xe_interfaces_flowcontrol_->has_data())
	|| (cisco_ios_xe_interfaces_interface_qos !=  nullptr && cisco_ios_xe_interfaces_interface_qos->has_data())
	|| (cisco_ios_xe_interfaces_interface_qos_ !=  nullptr && cisco_ios_xe_interfaces_interface_qos_->has_data())
	|| (cisco_ios_xe_interfaces_ip !=  nullptr && cisco_ios_xe_interfaces_ip->has_data())
	|| (cisco_ios_xe_interfaces_ip_ !=  nullptr && cisco_ios_xe_interfaces_ip_->has_data())
	|| (cisco_ios_xe_interfaces_ipv6 !=  nullptr && cisco_ios_xe_interfaces_ipv6->has_data())
	|| (cisco_ios_xe_interfaces_ipv6_ !=  nullptr && cisco_ios_xe_interfaces_ipv6_->has_data())
	|| (cisco_ios_xe_interfaces_isis !=  nullptr && cisco_ios_xe_interfaces_isis->has_data())
	|| (cisco_ios_xe_interfaces_isis_ !=  nullptr && cisco_ios_xe_interfaces_isis_->has_data())
	|| (cisco_ios_xe_interfaces_l2protocol_tunnel !=  nullptr && cisco_ios_xe_interfaces_l2protocol_tunnel->has_data())
	|| (cisco_ios_xe_interfaces_l2protocol_tunnel_ !=  nullptr && cisco_ios_xe_interfaces_l2protocol_tunnel_->has_data())
	|| (cisco_ios_xe_interfaces_logging !=  nullptr && cisco_ios_xe_interfaces_logging->has_data())
	|| (cisco_ios_xe_interfaces_logging_ !=  nullptr && cisco_ios_xe_interfaces_logging_->has_data())
	|| (cisco_ios_xe_interfaces_mdix !=  nullptr && cisco_ios_xe_interfaces_mdix->has_data())
	|| (cisco_ios_xe_interfaces_mdix_ !=  nullptr && cisco_ios_xe_interfaces_mdix_->has_data())
	|| (cisco_ios_xe_interfaces_mop !=  nullptr && cisco_ios_xe_interfaces_mop->has_data())
	|| (cisco_ios_xe_interfaces_mop_ !=  nullptr && cisco_ios_xe_interfaces_mop_->has_data())
	|| (cisco_ios_xe_interfaces_mpls !=  nullptr && cisco_ios_xe_interfaces_mpls->has_data())
	|| (cisco_ios_xe_interfaces_mpls_ !=  nullptr && cisco_ios_xe_interfaces_mpls_->has_data())
	|| (cisco_ios_xe_interfaces_peer !=  nullptr && cisco_ios_xe_interfaces_peer->has_data())
	|| (cisco_ios_xe_interfaces_peer_ !=  nullptr && cisco_ios_xe_interfaces_peer_->has_data())
	|| (cisco_ios_xe_interfaces_pm_path !=  nullptr && cisco_ios_xe_interfaces_pm_path->has_data())
	|| (cisco_ios_xe_interfaces_pm_path_ !=  nullptr && cisco_ios_xe_interfaces_pm_path_->has_data())
	|| (cisco_ios_xe_interfaces_priority_queue !=  nullptr && cisco_ios_xe_interfaces_priority_queue->has_data())
	|| (cisco_ios_xe_interfaces_priority_queue_ !=  nullptr && cisco_ios_xe_interfaces_priority_queue_->has_data())
	|| (cisco_ios_xe_interfaces_rcv_queue !=  nullptr && cisco_ios_xe_interfaces_rcv_queue->has_data())
	|| (cisco_ios_xe_interfaces_rcv_queue_ !=  nullptr && cisco_ios_xe_interfaces_rcv_queue_->has_data())
	|| (cisco_ios_xe_interfaces_standby !=  nullptr && cisco_ios_xe_interfaces_standby->has_data())
	|| (cisco_ios_xe_interfaces_standby_ !=  nullptr && cisco_ios_xe_interfaces_standby_->has_data())
	|| (cisco_ios_xe_interfaces_storm_control !=  nullptr && cisco_ios_xe_interfaces_storm_control->has_data())
	|| (cisco_ios_xe_interfaces_storm_control_ !=  nullptr && cisco_ios_xe_interfaces_storm_control_->has_data())
	|| (cisco_ios_xe_interfaces_switchport !=  nullptr && cisco_ios_xe_interfaces_switchport->has_data())
	|| (cisco_ios_xe_interfaces_switchport_ !=  nullptr && cisco_ios_xe_interfaces_switchport_->has_data())
	|| (cisco_ios_xe_interfaces_switchport_conf !=  nullptr && cisco_ios_xe_interfaces_switchport_conf->has_data())
	|| (cisco_ios_xe_interfaces_switchport_conf_ !=  nullptr && cisco_ios_xe_interfaces_switchport_conf_->has_data())
	|| (cisco_ios_xe_interfaces_trust !=  nullptr && cisco_ios_xe_interfaces_trust->has_data())
	|| (cisco_ios_xe_interfaces_trust_ !=  nullptr && cisco_ios_xe_interfaces_trust_->has_data())
	|| (cisco_ios_xe_interfaces_utd !=  nullptr && cisco_ios_xe_interfaces_utd->has_data())
	|| (cisco_ios_xe_interfaces_utd_ !=  nullptr && cisco_ios_xe_interfaces_utd_->has_data())
	|| (crypto !=  nullptr && crypto->has_data())
	|| (cts !=  nullptr && cts->has_data())
	|| (glbp !=  nullptr && glbp->has_data())
	|| (ip_vrf !=  nullptr && ip_vrf->has_data())
	|| (ip_vrf_ !=  nullptr && ip_vrf_->has_data())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_data())
	|| (keepalive_settings_ !=  nullptr && keepalive_settings_->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (private_vlan !=  nullptr && private_vlan->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (service_routing !=  nullptr && service_routing->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (vrf_ !=  nullptr && vrf_->has_data())
	|| (zone_member !=  nullptr && zone_member->has_data());
}

bool Native::Interface::Vlan::has_operation() const
{
    for (std::size_t index=0; index<cisco_ios_xe_interfaces_hold_queue.size(); index++)
    {
        if(cisco_ios_xe_interfaces_hold_queue[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cisco_ios_xe_interfaces_hold_queue_.size(); index++)
    {
        if(cisco_ios_xe_interfaces_hold_queue_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vrrp.size(); index++)
    {
        if(vrrp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_delay.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_delay_.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_description.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_description_.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_if_state.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_if_state_.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_load_interval.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_load_interval_.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_mac_address.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_mac_address_.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_max_reserved_bandwidth.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_max_reserved_bandwidth_.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_mtu.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_mtu_.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_service_insertion.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_service_insertion_.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_shutdown.yfilter)
	|| ydk::is_set(cisco_ios_xe_interfaces_shutdown_.yfilter)
	|| ydk::is_set(keepalive.yfilter)
	|| ydk::is_set(keepalive_.yfilter)
	|| (cisco_ios_xe_interfaces_access_session !=  nullptr && cisco_ios_xe_interfaces_access_session->has_operation())
	|| (cisco_ios_xe_interfaces_access_session_ !=  nullptr && cisco_ios_xe_interfaces_access_session_->has_operation())
	|| (cisco_ios_xe_interfaces_arp !=  nullptr && cisco_ios_xe_interfaces_arp->has_operation())
	|| (cisco_ios_xe_interfaces_arp_ !=  nullptr && cisco_ios_xe_interfaces_arp_->has_operation())
	|| (cisco_ios_xe_interfaces_backup !=  nullptr && cisco_ios_xe_interfaces_backup->has_operation())
	|| (cisco_ios_xe_interfaces_backup_ !=  nullptr && cisco_ios_xe_interfaces_backup_->has_operation())
	|| (cisco_ios_xe_interfaces_bandwidth !=  nullptr && cisco_ios_xe_interfaces_bandwidth->has_operation())
	|| (cisco_ios_xe_interfaces_bandwidth_ !=  nullptr && cisco_ios_xe_interfaces_bandwidth_->has_operation())
	|| (cisco_ios_xe_interfaces_bfd !=  nullptr && cisco_ios_xe_interfaces_bfd->has_operation())
	|| (cisco_ios_xe_interfaces_bfd_ !=  nullptr && cisco_ios_xe_interfaces_bfd_->has_operation())
	|| (cisco_ios_xe_interfaces_cemoudp !=  nullptr && cisco_ios_xe_interfaces_cemoudp->has_operation())
	|| (cisco_ios_xe_interfaces_cemoudp_ !=  nullptr && cisco_ios_xe_interfaces_cemoudp_->has_operation())
	|| (cisco_ios_xe_interfaces_cws_tunnel !=  nullptr && cisco_ios_xe_interfaces_cws_tunnel->has_operation())
	|| (cisco_ios_xe_interfaces_cws_tunnel_ !=  nullptr && cisco_ios_xe_interfaces_cws_tunnel_->has_operation())
	|| (cisco_ios_xe_interfaces_dampening !=  nullptr && cisco_ios_xe_interfaces_dampening->has_operation())
	|| (cisco_ios_xe_interfaces_dampening_ !=  nullptr && cisco_ios_xe_interfaces_dampening_->has_operation())
	|| (cisco_ios_xe_interfaces_domain !=  nullptr && cisco_ios_xe_interfaces_domain->has_operation())
	|| (cisco_ios_xe_interfaces_domain_ !=  nullptr && cisco_ios_xe_interfaces_domain_->has_operation())
	|| (cisco_ios_xe_interfaces_encapsulation !=  nullptr && cisco_ios_xe_interfaces_encapsulation->has_operation())
	|| (cisco_ios_xe_interfaces_encapsulation_ !=  nullptr && cisco_ios_xe_interfaces_encapsulation_->has_operation())
	|| (cisco_ios_xe_interfaces_fair_queue !=  nullptr && cisco_ios_xe_interfaces_fair_queue->has_operation())
	|| (cisco_ios_xe_interfaces_fair_queue_ !=  nullptr && cisco_ios_xe_interfaces_fair_queue_->has_operation())
	|| (cisco_ios_xe_interfaces_fair_queue_conf !=  nullptr && cisco_ios_xe_interfaces_fair_queue_conf->has_operation())
	|| (cisco_ios_xe_interfaces_fair_queue_conf_ !=  nullptr && cisco_ios_xe_interfaces_fair_queue_conf_->has_operation())
	|| (cisco_ios_xe_interfaces_flowcontrol !=  nullptr && cisco_ios_xe_interfaces_flowcontrol->has_operation())
	|| (cisco_ios_xe_interfaces_flowcontrol_ !=  nullptr && cisco_ios_xe_interfaces_flowcontrol_->has_operation())
	|| (cisco_ios_xe_interfaces_interface_qos !=  nullptr && cisco_ios_xe_interfaces_interface_qos->has_operation())
	|| (cisco_ios_xe_interfaces_interface_qos_ !=  nullptr && cisco_ios_xe_interfaces_interface_qos_->has_operation())
	|| (cisco_ios_xe_interfaces_ip !=  nullptr && cisco_ios_xe_interfaces_ip->has_operation())
	|| (cisco_ios_xe_interfaces_ip_ !=  nullptr && cisco_ios_xe_interfaces_ip_->has_operation())
	|| (cisco_ios_xe_interfaces_ipv6 !=  nullptr && cisco_ios_xe_interfaces_ipv6->has_operation())
	|| (cisco_ios_xe_interfaces_ipv6_ !=  nullptr && cisco_ios_xe_interfaces_ipv6_->has_operation())
	|| (cisco_ios_xe_interfaces_isis !=  nullptr && cisco_ios_xe_interfaces_isis->has_operation())
	|| (cisco_ios_xe_interfaces_isis_ !=  nullptr && cisco_ios_xe_interfaces_isis_->has_operation())
	|| (cisco_ios_xe_interfaces_l2protocol_tunnel !=  nullptr && cisco_ios_xe_interfaces_l2protocol_tunnel->has_operation())
	|| (cisco_ios_xe_interfaces_l2protocol_tunnel_ !=  nullptr && cisco_ios_xe_interfaces_l2protocol_tunnel_->has_operation())
	|| (cisco_ios_xe_interfaces_logging !=  nullptr && cisco_ios_xe_interfaces_logging->has_operation())
	|| (cisco_ios_xe_interfaces_logging_ !=  nullptr && cisco_ios_xe_interfaces_logging_->has_operation())
	|| (cisco_ios_xe_interfaces_mdix !=  nullptr && cisco_ios_xe_interfaces_mdix->has_operation())
	|| (cisco_ios_xe_interfaces_mdix_ !=  nullptr && cisco_ios_xe_interfaces_mdix_->has_operation())
	|| (cisco_ios_xe_interfaces_mop !=  nullptr && cisco_ios_xe_interfaces_mop->has_operation())
	|| (cisco_ios_xe_interfaces_mop_ !=  nullptr && cisco_ios_xe_interfaces_mop_->has_operation())
	|| (cisco_ios_xe_interfaces_mpls !=  nullptr && cisco_ios_xe_interfaces_mpls->has_operation())
	|| (cisco_ios_xe_interfaces_mpls_ !=  nullptr && cisco_ios_xe_interfaces_mpls_->has_operation())
	|| (cisco_ios_xe_interfaces_peer !=  nullptr && cisco_ios_xe_interfaces_peer->has_operation())
	|| (cisco_ios_xe_interfaces_peer_ !=  nullptr && cisco_ios_xe_interfaces_peer_->has_operation())
	|| (cisco_ios_xe_interfaces_pm_path !=  nullptr && cisco_ios_xe_interfaces_pm_path->has_operation())
	|| (cisco_ios_xe_interfaces_pm_path_ !=  nullptr && cisco_ios_xe_interfaces_pm_path_->has_operation())
	|| (cisco_ios_xe_interfaces_priority_queue !=  nullptr && cisco_ios_xe_interfaces_priority_queue->has_operation())
	|| (cisco_ios_xe_interfaces_priority_queue_ !=  nullptr && cisco_ios_xe_interfaces_priority_queue_->has_operation())
	|| (cisco_ios_xe_interfaces_rcv_queue !=  nullptr && cisco_ios_xe_interfaces_rcv_queue->has_operation())
	|| (cisco_ios_xe_interfaces_rcv_queue_ !=  nullptr && cisco_ios_xe_interfaces_rcv_queue_->has_operation())
	|| (cisco_ios_xe_interfaces_standby !=  nullptr && cisco_ios_xe_interfaces_standby->has_operation())
	|| (cisco_ios_xe_interfaces_standby_ !=  nullptr && cisco_ios_xe_interfaces_standby_->has_operation())
	|| (cisco_ios_xe_interfaces_storm_control !=  nullptr && cisco_ios_xe_interfaces_storm_control->has_operation())
	|| (cisco_ios_xe_interfaces_storm_control_ !=  nullptr && cisco_ios_xe_interfaces_storm_control_->has_operation())
	|| (cisco_ios_xe_interfaces_switchport !=  nullptr && cisco_ios_xe_interfaces_switchport->has_operation())
	|| (cisco_ios_xe_interfaces_switchport_ !=  nullptr && cisco_ios_xe_interfaces_switchport_->has_operation())
	|| (cisco_ios_xe_interfaces_switchport_conf !=  nullptr && cisco_ios_xe_interfaces_switchport_conf->has_operation())
	|| (cisco_ios_xe_interfaces_switchport_conf_ !=  nullptr && cisco_ios_xe_interfaces_switchport_conf_->has_operation())
	|| (cisco_ios_xe_interfaces_trust !=  nullptr && cisco_ios_xe_interfaces_trust->has_operation())
	|| (cisco_ios_xe_interfaces_trust_ !=  nullptr && cisco_ios_xe_interfaces_trust_->has_operation())
	|| (cisco_ios_xe_interfaces_utd !=  nullptr && cisco_ios_xe_interfaces_utd->has_operation())
	|| (cisco_ios_xe_interfaces_utd_ !=  nullptr && cisco_ios_xe_interfaces_utd_->has_operation())
	|| (crypto !=  nullptr && crypto->has_operation())
	|| (cts !=  nullptr && cts->has_operation())
	|| (glbp !=  nullptr && glbp->has_operation())
	|| (ip_vrf !=  nullptr && ip_vrf->has_operation())
	|| (ip_vrf_ !=  nullptr && ip_vrf_->has_operation())
	|| (keepalive_settings !=  nullptr && keepalive_settings->has_operation())
	|| (keepalive_settings_ !=  nullptr && keepalive_settings_->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (private_vlan !=  nullptr && private_vlan->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (service_routing !=  nullptr && service_routing->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (vrf_ !=  nullptr && vrf_->has_operation())
	|| (zone_member !=  nullptr && zone_member->has_operation());
}

std::string Native::Interface::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Interface::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Vlan" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (cisco_ios_xe_interfaces_delay.is_set || is_set(cisco_ios_xe_interfaces_delay.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_delay.get_name_leafdata());
    if (cisco_ios_xe_interfaces_delay_.is_set || is_set(cisco_ios_xe_interfaces_delay_.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_delay_.get_name_leafdata());
    if (cisco_ios_xe_interfaces_description.is_set || is_set(cisco_ios_xe_interfaces_description.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_description.get_name_leafdata());
    if (cisco_ios_xe_interfaces_description_.is_set || is_set(cisco_ios_xe_interfaces_description_.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_description_.get_name_leafdata());
    if (cisco_ios_xe_interfaces_if_state.is_set || is_set(cisco_ios_xe_interfaces_if_state.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_if_state.get_name_leafdata());
    if (cisco_ios_xe_interfaces_if_state_.is_set || is_set(cisco_ios_xe_interfaces_if_state_.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_if_state_.get_name_leafdata());
    if (cisco_ios_xe_interfaces_load_interval.is_set || is_set(cisco_ios_xe_interfaces_load_interval.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_load_interval.get_name_leafdata());
    if (cisco_ios_xe_interfaces_load_interval_.is_set || is_set(cisco_ios_xe_interfaces_load_interval_.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_load_interval_.get_name_leafdata());
    if (cisco_ios_xe_interfaces_mac_address.is_set || is_set(cisco_ios_xe_interfaces_mac_address.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_mac_address.get_name_leafdata());
    if (cisco_ios_xe_interfaces_mac_address_.is_set || is_set(cisco_ios_xe_interfaces_mac_address_.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_mac_address_.get_name_leafdata());
    if (cisco_ios_xe_interfaces_max_reserved_bandwidth.is_set || is_set(cisco_ios_xe_interfaces_max_reserved_bandwidth.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_max_reserved_bandwidth.get_name_leafdata());
    if (cisco_ios_xe_interfaces_max_reserved_bandwidth_.is_set || is_set(cisco_ios_xe_interfaces_max_reserved_bandwidth_.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_max_reserved_bandwidth_.get_name_leafdata());
    if (cisco_ios_xe_interfaces_mtu.is_set || is_set(cisco_ios_xe_interfaces_mtu.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_mtu.get_name_leafdata());
    if (cisco_ios_xe_interfaces_mtu_.is_set || is_set(cisco_ios_xe_interfaces_mtu_.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_mtu_.get_name_leafdata());
    if (cisco_ios_xe_interfaces_service_insertion.is_set || is_set(cisco_ios_xe_interfaces_service_insertion.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_service_insertion.get_name_leafdata());
    if (cisco_ios_xe_interfaces_service_insertion_.is_set || is_set(cisco_ios_xe_interfaces_service_insertion_.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_service_insertion_.get_name_leafdata());
    if (cisco_ios_xe_interfaces_shutdown.is_set || is_set(cisco_ios_xe_interfaces_shutdown.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_shutdown.get_name_leafdata());
    if (cisco_ios_xe_interfaces_shutdown_.is_set || is_set(cisco_ios_xe_interfaces_shutdown_.yfilter)) leaf_name_data.push_back(cisco_ios_xe_interfaces_shutdown_.get_name_leafdata());
    if (keepalive.is_set || is_set(keepalive.yfilter)) leaf_name_data.push_back(keepalive.get_name_leafdata());
    if (keepalive_.is_set || is_set(keepalive_.yfilter)) leaf_name_data.push_back(keepalive_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-interfaces_access-session")
    {
        if(cisco_ios_xe_interfaces_access_session == nullptr)
        {
            cisco_ios_xe_interfaces_access_session = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession>();
        }
        return cisco_ios_xe_interfaces_access_session;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_access-session")
    {
        if(cisco_ios_xe_interfaces_access_session_ == nullptr)
        {
            cisco_ios_xe_interfaces_access_session_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_>();
        }
        return cisco_ios_xe_interfaces_access_session_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_arp")
    {
        if(cisco_ios_xe_interfaces_arp == nullptr)
        {
            cisco_ios_xe_interfaces_arp = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesArp>();
        }
        return cisco_ios_xe_interfaces_arp;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_arp")
    {
        if(cisco_ios_xe_interfaces_arp_ == nullptr)
        {
            cisco_ios_xe_interfaces_arp_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesArp_>();
        }
        return cisco_ios_xe_interfaces_arp_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_backup")
    {
        if(cisco_ios_xe_interfaces_backup == nullptr)
        {
            cisco_ios_xe_interfaces_backup = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup>();
        }
        return cisco_ios_xe_interfaces_backup;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_backup")
    {
        if(cisco_ios_xe_interfaces_backup_ == nullptr)
        {
            cisco_ios_xe_interfaces_backup_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_>();
        }
        return cisco_ios_xe_interfaces_backup_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_bandwidth")
    {
        if(cisco_ios_xe_interfaces_bandwidth == nullptr)
        {
            cisco_ios_xe_interfaces_bandwidth = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth>();
        }
        return cisco_ios_xe_interfaces_bandwidth;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_bandwidth")
    {
        if(cisco_ios_xe_interfaces_bandwidth_ == nullptr)
        {
            cisco_ios_xe_interfaces_bandwidth_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_>();
        }
        return cisco_ios_xe_interfaces_bandwidth_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_bfd")
    {
        if(cisco_ios_xe_interfaces_bfd == nullptr)
        {
            cisco_ios_xe_interfaces_bfd = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBfd>();
        }
        return cisco_ios_xe_interfaces_bfd;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_bfd")
    {
        if(cisco_ios_xe_interfaces_bfd_ == nullptr)
        {
            cisco_ios_xe_interfaces_bfd_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBfd_>();
        }
        return cisco_ios_xe_interfaces_bfd_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_cemoudp")
    {
        if(cisco_ios_xe_interfaces_cemoudp == nullptr)
        {
            cisco_ios_xe_interfaces_cemoudp = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp>();
        }
        return cisco_ios_xe_interfaces_cemoudp;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_cemoudp")
    {
        if(cisco_ios_xe_interfaces_cemoudp_ == nullptr)
        {
            cisco_ios_xe_interfaces_cemoudp_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_>();
        }
        return cisco_ios_xe_interfaces_cemoudp_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_cws-tunnel")
    {
        if(cisco_ios_xe_interfaces_cws_tunnel == nullptr)
        {
            cisco_ios_xe_interfaces_cws_tunnel = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel>();
        }
        return cisco_ios_xe_interfaces_cws_tunnel;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_cws-tunnel")
    {
        if(cisco_ios_xe_interfaces_cws_tunnel_ == nullptr)
        {
            cisco_ios_xe_interfaces_cws_tunnel_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_>();
        }
        return cisco_ios_xe_interfaces_cws_tunnel_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_dampening")
    {
        if(cisco_ios_xe_interfaces_dampening == nullptr)
        {
            cisco_ios_xe_interfaces_dampening = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesDampening>();
        }
        return cisco_ios_xe_interfaces_dampening;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_dampening")
    {
        if(cisco_ios_xe_interfaces_dampening_ == nullptr)
        {
            cisco_ios_xe_interfaces_dampening_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_>();
        }
        return cisco_ios_xe_interfaces_dampening_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_domain")
    {
        if(cisco_ios_xe_interfaces_domain == nullptr)
        {
            cisco_ios_xe_interfaces_domain = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesDomain>();
        }
        return cisco_ios_xe_interfaces_domain;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_domain")
    {
        if(cisco_ios_xe_interfaces_domain_ == nullptr)
        {
            cisco_ios_xe_interfaces_domain_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesDomain_>();
        }
        return cisco_ios_xe_interfaces_domain_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_encapsulation")
    {
        if(cisco_ios_xe_interfaces_encapsulation == nullptr)
        {
            cisco_ios_xe_interfaces_encapsulation = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation>();
        }
        return cisco_ios_xe_interfaces_encapsulation;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_encapsulation")
    {
        if(cisco_ios_xe_interfaces_encapsulation_ == nullptr)
        {
            cisco_ios_xe_interfaces_encapsulation_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_>();
        }
        return cisco_ios_xe_interfaces_encapsulation_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_fair-queue")
    {
        if(cisco_ios_xe_interfaces_fair_queue == nullptr)
        {
            cisco_ios_xe_interfaces_fair_queue = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue>();
        }
        return cisco_ios_xe_interfaces_fair_queue;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_fair-queue")
    {
        if(cisco_ios_xe_interfaces_fair_queue_ == nullptr)
        {
            cisco_ios_xe_interfaces_fair_queue_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue_>();
        }
        return cisco_ios_xe_interfaces_fair_queue_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_fair-queue-conf")
    {
        if(cisco_ios_xe_interfaces_fair_queue_conf == nullptr)
        {
            cisco_ios_xe_interfaces_fair_queue_conf = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf>();
        }
        return cisco_ios_xe_interfaces_fair_queue_conf;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_fair-queue-conf")
    {
        if(cisco_ios_xe_interfaces_fair_queue_conf_ == nullptr)
        {
            cisco_ios_xe_interfaces_fair_queue_conf_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf_>();
        }
        return cisco_ios_xe_interfaces_fair_queue_conf_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_flowcontrol")
    {
        if(cisco_ios_xe_interfaces_flowcontrol == nullptr)
        {
            cisco_ios_xe_interfaces_flowcontrol = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol>();
        }
        return cisco_ios_xe_interfaces_flowcontrol;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_flowcontrol")
    {
        if(cisco_ios_xe_interfaces_flowcontrol_ == nullptr)
        {
            cisco_ios_xe_interfaces_flowcontrol_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_>();
        }
        return cisco_ios_xe_interfaces_flowcontrol_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_hold-queue")
    {
        for(auto const & c : cisco_ios_xe_interfaces_hold_queue)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue>();
        c->parent = this;
        cisco_ios_xe_interfaces_hold_queue.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_hold-queue")
    {
        for(auto const & c : cisco_ios_xe_interfaces_hold_queue_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue_>();
        c->parent = this;
        cisco_ios_xe_interfaces_hold_queue_.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_interface_qos")
    {
        if(cisco_ios_xe_interfaces_interface_qos == nullptr)
        {
            cisco_ios_xe_interfaces_interface_qos = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos>();
        }
        return cisco_ios_xe_interfaces_interface_qos;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_interface_qos")
    {
        if(cisco_ios_xe_interfaces_interface_qos_ == nullptr)
        {
            cisco_ios_xe_interfaces_interface_qos_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_>();
        }
        return cisco_ios_xe_interfaces_interface_qos_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_ip")
    {
        if(cisco_ios_xe_interfaces_ip == nullptr)
        {
            cisco_ios_xe_interfaces_ip = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp>();
        }
        return cisco_ios_xe_interfaces_ip;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_ip")
    {
        if(cisco_ios_xe_interfaces_ip_ == nullptr)
        {
            cisco_ios_xe_interfaces_ip_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_>();
        }
        return cisco_ios_xe_interfaces_ip_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_ipv6")
    {
        if(cisco_ios_xe_interfaces_ipv6 == nullptr)
        {
            cisco_ios_xe_interfaces_ipv6 = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6>();
        }
        return cisco_ios_xe_interfaces_ipv6;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_ipv6")
    {
        if(cisco_ios_xe_interfaces_ipv6_ == nullptr)
        {
            cisco_ios_xe_interfaces_ipv6_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_>();
        }
        return cisco_ios_xe_interfaces_ipv6_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_isis")
    {
        if(cisco_ios_xe_interfaces_isis == nullptr)
        {
            cisco_ios_xe_interfaces_isis = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis>();
        }
        return cisco_ios_xe_interfaces_isis;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_isis")
    {
        if(cisco_ios_xe_interfaces_isis_ == nullptr)
        {
            cisco_ios_xe_interfaces_isis_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis_>();
        }
        return cisco_ios_xe_interfaces_isis_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_l2protocol-tunnel")
    {
        if(cisco_ios_xe_interfaces_l2protocol_tunnel == nullptr)
        {
            cisco_ios_xe_interfaces_l2protocol_tunnel = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel>();
        }
        return cisco_ios_xe_interfaces_l2protocol_tunnel;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_l2protocol-tunnel")
    {
        if(cisco_ios_xe_interfaces_l2protocol_tunnel_ == nullptr)
        {
            cisco_ios_xe_interfaces_l2protocol_tunnel_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_>();
        }
        return cisco_ios_xe_interfaces_l2protocol_tunnel_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_logging")
    {
        if(cisco_ios_xe_interfaces_logging == nullptr)
        {
            cisco_ios_xe_interfaces_logging = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesLogging>();
        }
        return cisco_ios_xe_interfaces_logging;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_logging")
    {
        if(cisco_ios_xe_interfaces_logging_ == nullptr)
        {
            cisco_ios_xe_interfaces_logging_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_>();
        }
        return cisco_ios_xe_interfaces_logging_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_mdix")
    {
        if(cisco_ios_xe_interfaces_mdix == nullptr)
        {
            cisco_ios_xe_interfaces_mdix = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesMdix>();
        }
        return cisco_ios_xe_interfaces_mdix;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_mdix")
    {
        if(cisco_ios_xe_interfaces_mdix_ == nullptr)
        {
            cisco_ios_xe_interfaces_mdix_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesMdix_>();
        }
        return cisco_ios_xe_interfaces_mdix_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_mop")
    {
        if(cisco_ios_xe_interfaces_mop == nullptr)
        {
            cisco_ios_xe_interfaces_mop = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesMop>();
        }
        return cisco_ios_xe_interfaces_mop;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_mop")
    {
        if(cisco_ios_xe_interfaces_mop_ == nullptr)
        {
            cisco_ios_xe_interfaces_mop_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesMop_>();
        }
        return cisco_ios_xe_interfaces_mop_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_mpls")
    {
        if(cisco_ios_xe_interfaces_mpls == nullptr)
        {
            cisco_ios_xe_interfaces_mpls = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesMpls>();
        }
        return cisco_ios_xe_interfaces_mpls;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_mpls")
    {
        if(cisco_ios_xe_interfaces_mpls_ == nullptr)
        {
            cisco_ios_xe_interfaces_mpls_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesMpls_>();
        }
        return cisco_ios_xe_interfaces_mpls_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_peer")
    {
        if(cisco_ios_xe_interfaces_peer == nullptr)
        {
            cisco_ios_xe_interfaces_peer = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPeer>();
        }
        return cisco_ios_xe_interfaces_peer;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_peer")
    {
        if(cisco_ios_xe_interfaces_peer_ == nullptr)
        {
            cisco_ios_xe_interfaces_peer_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPeer_>();
        }
        return cisco_ios_xe_interfaces_peer_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_pm-path")
    {
        if(cisco_ios_xe_interfaces_pm_path == nullptr)
        {
            cisco_ios_xe_interfaces_pm_path = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath>();
        }
        return cisco_ios_xe_interfaces_pm_path;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_pm-path")
    {
        if(cisco_ios_xe_interfaces_pm_path_ == nullptr)
        {
            cisco_ios_xe_interfaces_pm_path_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPmPath_>();
        }
        return cisco_ios_xe_interfaces_pm_path_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_priority-queue")
    {
        if(cisco_ios_xe_interfaces_priority_queue == nullptr)
        {
            cisco_ios_xe_interfaces_priority_queue = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue>();
        }
        return cisco_ios_xe_interfaces_priority_queue;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_priority-queue")
    {
        if(cisco_ios_xe_interfaces_priority_queue_ == nullptr)
        {
            cisco_ios_xe_interfaces_priority_queue_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesPriorityQueue_>();
        }
        return cisco_ios_xe_interfaces_priority_queue_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_rcv-queue")
    {
        if(cisco_ios_xe_interfaces_rcv_queue == nullptr)
        {
            cisco_ios_xe_interfaces_rcv_queue = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue>();
        }
        return cisco_ios_xe_interfaces_rcv_queue;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_rcv-queue")
    {
        if(cisco_ios_xe_interfaces_rcv_queue_ == nullptr)
        {
            cisco_ios_xe_interfaces_rcv_queue_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesRcvQueue_>();
        }
        return cisco_ios_xe_interfaces_rcv_queue_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_standby")
    {
        if(cisco_ios_xe_interfaces_standby == nullptr)
        {
            cisco_ios_xe_interfaces_standby = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby>();
        }
        return cisco_ios_xe_interfaces_standby;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_standby")
    {
        if(cisco_ios_xe_interfaces_standby_ == nullptr)
        {
            cisco_ios_xe_interfaces_standby_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStandby_>();
        }
        return cisco_ios_xe_interfaces_standby_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_storm-control")
    {
        if(cisco_ios_xe_interfaces_storm_control == nullptr)
        {
            cisco_ios_xe_interfaces_storm_control = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl>();
        }
        return cisco_ios_xe_interfaces_storm_control;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_storm-control")
    {
        if(cisco_ios_xe_interfaces_storm_control_ == nullptr)
        {
            cisco_ios_xe_interfaces_storm_control_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesStormControl_>();
        }
        return cisco_ios_xe_interfaces_storm_control_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_switchport")
    {
        if(cisco_ios_xe_interfaces_switchport == nullptr)
        {
            cisco_ios_xe_interfaces_switchport = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport>();
        }
        return cisco_ios_xe_interfaces_switchport;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_switchport")
    {
        if(cisco_ios_xe_interfaces_switchport_ == nullptr)
        {
            cisco_ios_xe_interfaces_switchport_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchport_>();
        }
        return cisco_ios_xe_interfaces_switchport_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_switchport-conf")
    {
        if(cisco_ios_xe_interfaces_switchport_conf == nullptr)
        {
            cisco_ios_xe_interfaces_switchport_conf = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf>();
        }
        return cisco_ios_xe_interfaces_switchport_conf;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_switchport-conf")
    {
        if(cisco_ios_xe_interfaces_switchport_conf_ == nullptr)
        {
            cisco_ios_xe_interfaces_switchport_conf_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesSwitchportConf_>();
        }
        return cisco_ios_xe_interfaces_switchport_conf_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_trust")
    {
        if(cisco_ios_xe_interfaces_trust == nullptr)
        {
            cisco_ios_xe_interfaces_trust = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesTrust>();
        }
        return cisco_ios_xe_interfaces_trust;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_trust")
    {
        if(cisco_ios_xe_interfaces_trust_ == nullptr)
        {
            cisco_ios_xe_interfaces_trust_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesTrust_>();
        }
        return cisco_ios_xe_interfaces_trust_;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_utd")
    {
        if(cisco_ios_xe_interfaces_utd == nullptr)
        {
            cisco_ios_xe_interfaces_utd = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesUtd>();
        }
        return cisco_ios_xe_interfaces_utd;
    }

    if(child_yang_name == "Cisco-IOS-XE-interfaces_utd")
    {
        if(cisco_ios_xe_interfaces_utd_ == nullptr)
        {
            cisco_ios_xe_interfaces_utd_ = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesUtd_>();
        }
        return cisco_ios_xe_interfaces_utd_;
    }

    if(child_yang_name == "crypto")
    {
        if(crypto == nullptr)
        {
            crypto = std::make_shared<Native::Interface::Vlan::Crypto>();
        }
        return crypto;
    }

    if(child_yang_name == "cts")
    {
        if(cts == nullptr)
        {
            cts = std::make_shared<Native::Interface::Vlan::Cts>();
        }
        return cts;
    }

    if(child_yang_name == "glbp")
    {
        if(glbp == nullptr)
        {
            glbp = std::make_shared<Native::Interface::Vlan::Glbp>();
        }
        return glbp;
    }

    if(child_yang_name == "ip-vrf")
    {
        if(ip_vrf == nullptr)
        {
            ip_vrf = std::make_shared<Native::Interface::Vlan::IpVrf>();
        }
        return ip_vrf;
    }

    if(child_yang_name == "ip-vrf")
    {
        if(ip_vrf_ == nullptr)
        {
            ip_vrf_ = std::make_shared<Native::Interface::Vlan::IpVrf_>();
        }
        return ip_vrf_;
    }

    if(child_yang_name == "keepalive-settings")
    {
        if(keepalive_settings == nullptr)
        {
            keepalive_settings = std::make_shared<Native::Interface::Vlan::KeepaliveSettings>();
        }
        return keepalive_settings;
    }

    if(child_yang_name == "keepalive-settings")
    {
        if(keepalive_settings_ == nullptr)
        {
            keepalive_settings_ = std::make_shared<Native::Interface::Vlan::KeepaliveSettings_>();
        }
        return keepalive_settings_;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Interface::Vlan::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "private-vlan")
    {
        if(private_vlan == nullptr)
        {
            private_vlan = std::make_shared<Native::Interface::Vlan::PrivateVlan>();
        }
        return private_vlan;
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::Vlan::ServicePolicy>();
        }
        return service_policy;
    }

    if(child_yang_name == "service-routing")
    {
        if(service_routing == nullptr)
        {
            service_routing = std::make_shared<Native::Interface::Vlan::ServiceRouting>();
        }
        return service_routing;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::Vlan::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf_ == nullptr)
        {
            vrf_ = std::make_shared<Native::Interface::Vlan::Vrf_>();
        }
        return vrf_;
    }

    if(child_yang_name == "vrrp")
    {
        for(auto const & c : vrrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::Vrrp>();
        c->parent = this;
        vrrp.push_back(c);
        return c;
    }

    if(child_yang_name == "zone-member")
    {
        if(zone_member == nullptr)
        {
            zone_member = std::make_shared<Native::Interface::Vlan::ZoneMember>();
        }
        return zone_member;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cisco_ios_xe_interfaces_access_session != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_access-session"] = cisco_ios_xe_interfaces_access_session;
    }

    if(cisco_ios_xe_interfaces_access_session_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_access-session"] = cisco_ios_xe_interfaces_access_session_;
    }

    if(cisco_ios_xe_interfaces_arp != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_arp"] = cisco_ios_xe_interfaces_arp;
    }

    if(cisco_ios_xe_interfaces_arp_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_arp"] = cisco_ios_xe_interfaces_arp_;
    }

    if(cisco_ios_xe_interfaces_backup != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_backup"] = cisco_ios_xe_interfaces_backup;
    }

    if(cisco_ios_xe_interfaces_backup_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_backup"] = cisco_ios_xe_interfaces_backup_;
    }

    if(cisco_ios_xe_interfaces_bandwidth != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_bandwidth"] = cisco_ios_xe_interfaces_bandwidth;
    }

    if(cisco_ios_xe_interfaces_bandwidth_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_bandwidth"] = cisco_ios_xe_interfaces_bandwidth_;
    }

    if(cisco_ios_xe_interfaces_bfd != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_bfd"] = cisco_ios_xe_interfaces_bfd;
    }

    if(cisco_ios_xe_interfaces_bfd_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_bfd"] = cisco_ios_xe_interfaces_bfd_;
    }

    if(cisco_ios_xe_interfaces_cemoudp != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_cemoudp"] = cisco_ios_xe_interfaces_cemoudp;
    }

    if(cisco_ios_xe_interfaces_cemoudp_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_cemoudp"] = cisco_ios_xe_interfaces_cemoudp_;
    }

    if(cisco_ios_xe_interfaces_cws_tunnel != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_cws-tunnel"] = cisco_ios_xe_interfaces_cws_tunnel;
    }

    if(cisco_ios_xe_interfaces_cws_tunnel_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_cws-tunnel"] = cisco_ios_xe_interfaces_cws_tunnel_;
    }

    if(cisco_ios_xe_interfaces_dampening != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_dampening"] = cisco_ios_xe_interfaces_dampening;
    }

    if(cisco_ios_xe_interfaces_dampening_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_dampening"] = cisco_ios_xe_interfaces_dampening_;
    }

    if(cisco_ios_xe_interfaces_domain != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_domain"] = cisco_ios_xe_interfaces_domain;
    }

    if(cisco_ios_xe_interfaces_domain_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_domain"] = cisco_ios_xe_interfaces_domain_;
    }

    if(cisco_ios_xe_interfaces_encapsulation != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_encapsulation"] = cisco_ios_xe_interfaces_encapsulation;
    }

    if(cisco_ios_xe_interfaces_encapsulation_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_encapsulation"] = cisco_ios_xe_interfaces_encapsulation_;
    }

    if(cisco_ios_xe_interfaces_fair_queue != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_fair-queue"] = cisco_ios_xe_interfaces_fair_queue;
    }

    if(cisco_ios_xe_interfaces_fair_queue_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_fair-queue"] = cisco_ios_xe_interfaces_fair_queue_;
    }

    if(cisco_ios_xe_interfaces_fair_queue_conf != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_fair-queue-conf"] = cisco_ios_xe_interfaces_fair_queue_conf;
    }

    if(cisco_ios_xe_interfaces_fair_queue_conf_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_fair-queue-conf"] = cisco_ios_xe_interfaces_fair_queue_conf_;
    }

    if(cisco_ios_xe_interfaces_flowcontrol != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_flowcontrol"] = cisco_ios_xe_interfaces_flowcontrol;
    }

    if(cisco_ios_xe_interfaces_flowcontrol_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_flowcontrol"] = cisco_ios_xe_interfaces_flowcontrol_;
    }

    for (auto const & c : cisco_ios_xe_interfaces_hold_queue)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : cisco_ios_xe_interfaces_hold_queue_)
    {
        children[c->get_segment_path()] = c;
    }

    if(cisco_ios_xe_interfaces_interface_qos != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_interface_qos"] = cisco_ios_xe_interfaces_interface_qos;
    }

    if(cisco_ios_xe_interfaces_interface_qos_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_interface_qos"] = cisco_ios_xe_interfaces_interface_qos_;
    }

    if(cisco_ios_xe_interfaces_ip != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_ip"] = cisco_ios_xe_interfaces_ip;
    }

    if(cisco_ios_xe_interfaces_ip_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_ip"] = cisco_ios_xe_interfaces_ip_;
    }

    if(cisco_ios_xe_interfaces_ipv6 != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_ipv6"] = cisco_ios_xe_interfaces_ipv6;
    }

    if(cisco_ios_xe_interfaces_ipv6_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_ipv6"] = cisco_ios_xe_interfaces_ipv6_;
    }

    if(cisco_ios_xe_interfaces_isis != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_isis"] = cisco_ios_xe_interfaces_isis;
    }

    if(cisco_ios_xe_interfaces_isis_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_isis"] = cisco_ios_xe_interfaces_isis_;
    }

    if(cisco_ios_xe_interfaces_l2protocol_tunnel != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_l2protocol-tunnel"] = cisco_ios_xe_interfaces_l2protocol_tunnel;
    }

    if(cisco_ios_xe_interfaces_l2protocol_tunnel_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_l2protocol-tunnel"] = cisco_ios_xe_interfaces_l2protocol_tunnel_;
    }

    if(cisco_ios_xe_interfaces_logging != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_logging"] = cisco_ios_xe_interfaces_logging;
    }

    if(cisco_ios_xe_interfaces_logging_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_logging"] = cisco_ios_xe_interfaces_logging_;
    }

    if(cisco_ios_xe_interfaces_mdix != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_mdix"] = cisco_ios_xe_interfaces_mdix;
    }

    if(cisco_ios_xe_interfaces_mdix_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_mdix"] = cisco_ios_xe_interfaces_mdix_;
    }

    if(cisco_ios_xe_interfaces_mop != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_mop"] = cisco_ios_xe_interfaces_mop;
    }

    if(cisco_ios_xe_interfaces_mop_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_mop"] = cisco_ios_xe_interfaces_mop_;
    }

    if(cisco_ios_xe_interfaces_mpls != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_mpls"] = cisco_ios_xe_interfaces_mpls;
    }

    if(cisco_ios_xe_interfaces_mpls_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_mpls"] = cisco_ios_xe_interfaces_mpls_;
    }

    if(cisco_ios_xe_interfaces_peer != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_peer"] = cisco_ios_xe_interfaces_peer;
    }

    if(cisco_ios_xe_interfaces_peer_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_peer"] = cisco_ios_xe_interfaces_peer_;
    }

    if(cisco_ios_xe_interfaces_pm_path != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_pm-path"] = cisco_ios_xe_interfaces_pm_path;
    }

    if(cisco_ios_xe_interfaces_pm_path_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_pm-path"] = cisco_ios_xe_interfaces_pm_path_;
    }

    if(cisco_ios_xe_interfaces_priority_queue != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_priority-queue"] = cisco_ios_xe_interfaces_priority_queue;
    }

    if(cisco_ios_xe_interfaces_priority_queue_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_priority-queue"] = cisco_ios_xe_interfaces_priority_queue_;
    }

    if(cisco_ios_xe_interfaces_rcv_queue != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_rcv-queue"] = cisco_ios_xe_interfaces_rcv_queue;
    }

    if(cisco_ios_xe_interfaces_rcv_queue_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_rcv-queue"] = cisco_ios_xe_interfaces_rcv_queue_;
    }

    if(cisco_ios_xe_interfaces_standby != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_standby"] = cisco_ios_xe_interfaces_standby;
    }

    if(cisco_ios_xe_interfaces_standby_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_standby"] = cisco_ios_xe_interfaces_standby_;
    }

    if(cisco_ios_xe_interfaces_storm_control != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_storm-control"] = cisco_ios_xe_interfaces_storm_control;
    }

    if(cisco_ios_xe_interfaces_storm_control_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_storm-control"] = cisco_ios_xe_interfaces_storm_control_;
    }

    if(cisco_ios_xe_interfaces_switchport != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_switchport"] = cisco_ios_xe_interfaces_switchport;
    }

    if(cisco_ios_xe_interfaces_switchport_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_switchport"] = cisco_ios_xe_interfaces_switchport_;
    }

    if(cisco_ios_xe_interfaces_switchport_conf != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_switchport-conf"] = cisco_ios_xe_interfaces_switchport_conf;
    }

    if(cisco_ios_xe_interfaces_switchport_conf_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_switchport-conf"] = cisco_ios_xe_interfaces_switchport_conf_;
    }

    if(cisco_ios_xe_interfaces_trust != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_trust"] = cisco_ios_xe_interfaces_trust;
    }

    if(cisco_ios_xe_interfaces_trust_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_trust"] = cisco_ios_xe_interfaces_trust_;
    }

    if(cisco_ios_xe_interfaces_utd != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_utd"] = cisco_ios_xe_interfaces_utd;
    }

    if(cisco_ios_xe_interfaces_utd_ != nullptr)
    {
        children["Cisco-IOS-XE-interfaces_utd"] = cisco_ios_xe_interfaces_utd_;
    }

    if(crypto != nullptr)
    {
        children["crypto"] = crypto;
    }

    if(cts != nullptr)
    {
        children["cts"] = cts;
    }

    if(glbp != nullptr)
    {
        children["glbp"] = glbp;
    }

    if(ip_vrf != nullptr)
    {
        children["ip-vrf"] = ip_vrf;
    }

    if(ip_vrf_ != nullptr)
    {
        children["ip-vrf"] = ip_vrf_;
    }

    if(keepalive_settings != nullptr)
    {
        children["keepalive-settings"] = keepalive_settings;
    }

    if(keepalive_settings_ != nullptr)
    {
        children["keepalive-settings"] = keepalive_settings_;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(private_vlan != nullptr)
    {
        children["private-vlan"] = private_vlan;
    }

    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    if(service_routing != nullptr)
    {
        children["service-routing"] = service_routing;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    if(vrf_ != nullptr)
    {
        children["vrf"] = vrf_;
    }

    for (auto const & c : vrrp)
    {
        children[c->get_segment_path()] = c;
    }

    if(zone_member != nullptr)
    {
        children["zone-member"] = zone_member;
    }

    return children;
}

void Native::Interface::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_delay")
    {
        cisco_ios_xe_interfaces_delay = value;
        cisco_ios_xe_interfaces_delay.value_namespace = name_space;
        cisco_ios_xe_interfaces_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_delay")
    {
        cisco_ios_xe_interfaces_delay_ = value;
        cisco_ios_xe_interfaces_delay_.value_namespace = name_space;
        cisco_ios_xe_interfaces_delay_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_description")
    {
        cisco_ios_xe_interfaces_description = value;
        cisco_ios_xe_interfaces_description.value_namespace = name_space;
        cisco_ios_xe_interfaces_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_description")
    {
        cisco_ios_xe_interfaces_description_ = value;
        cisco_ios_xe_interfaces_description_.value_namespace = name_space;
        cisco_ios_xe_interfaces_description_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_if-state")
    {
        cisco_ios_xe_interfaces_if_state = value;
        cisco_ios_xe_interfaces_if_state.value_namespace = name_space;
        cisco_ios_xe_interfaces_if_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_if-state")
    {
        cisco_ios_xe_interfaces_if_state_ = value;
        cisco_ios_xe_interfaces_if_state_.value_namespace = name_space;
        cisco_ios_xe_interfaces_if_state_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_load-interval")
    {
        cisco_ios_xe_interfaces_load_interval = value;
        cisco_ios_xe_interfaces_load_interval.value_namespace = name_space;
        cisco_ios_xe_interfaces_load_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_load-interval")
    {
        cisco_ios_xe_interfaces_load_interval_ = value;
        cisco_ios_xe_interfaces_load_interval_.value_namespace = name_space;
        cisco_ios_xe_interfaces_load_interval_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_mac-address")
    {
        cisco_ios_xe_interfaces_mac_address = value;
        cisco_ios_xe_interfaces_mac_address.value_namespace = name_space;
        cisco_ios_xe_interfaces_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_mac-address")
    {
        cisco_ios_xe_interfaces_mac_address_ = value;
        cisco_ios_xe_interfaces_mac_address_.value_namespace = name_space;
        cisco_ios_xe_interfaces_mac_address_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_max-reserved-bandwidth")
    {
        cisco_ios_xe_interfaces_max_reserved_bandwidth = value;
        cisco_ios_xe_interfaces_max_reserved_bandwidth.value_namespace = name_space;
        cisco_ios_xe_interfaces_max_reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_max-reserved-bandwidth")
    {
        cisco_ios_xe_interfaces_max_reserved_bandwidth_ = value;
        cisco_ios_xe_interfaces_max_reserved_bandwidth_.value_namespace = name_space;
        cisco_ios_xe_interfaces_max_reserved_bandwidth_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_mtu")
    {
        cisco_ios_xe_interfaces_mtu = value;
        cisco_ios_xe_interfaces_mtu.value_namespace = name_space;
        cisco_ios_xe_interfaces_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_mtu")
    {
        cisco_ios_xe_interfaces_mtu_ = value;
        cisco_ios_xe_interfaces_mtu_.value_namespace = name_space;
        cisco_ios_xe_interfaces_mtu_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_service-insertion")
    {
        cisco_ios_xe_interfaces_service_insertion = value;
        cisco_ios_xe_interfaces_service_insertion.value_namespace = name_space;
        cisco_ios_xe_interfaces_service_insertion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_service-insertion")
    {
        cisco_ios_xe_interfaces_service_insertion_ = value;
        cisco_ios_xe_interfaces_service_insertion_.value_namespace = name_space;
        cisco_ios_xe_interfaces_service_insertion_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_shutdown")
    {
        cisco_ios_xe_interfaces_shutdown = value;
        cisco_ios_xe_interfaces_shutdown.value_namespace = name_space;
        cisco_ios_xe_interfaces_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_shutdown")
    {
        cisco_ios_xe_interfaces_shutdown_ = value;
        cisco_ios_xe_interfaces_shutdown_.value_namespace = name_space;
        cisco_ios_xe_interfaces_shutdown_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive = value;
        keepalive.value_namespace = name_space;
        keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive")
    {
        keepalive_ = value;
        keepalive_.value_namespace = name_space;
        keepalive_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_delay")
    {
        cisco_ios_xe_interfaces_delay.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_delay")
    {
        cisco_ios_xe_interfaces_delay_.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_description")
    {
        cisco_ios_xe_interfaces_description.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_description")
    {
        cisco_ios_xe_interfaces_description_.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_if-state")
    {
        cisco_ios_xe_interfaces_if_state.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_if-state")
    {
        cisco_ios_xe_interfaces_if_state_.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_load-interval")
    {
        cisco_ios_xe_interfaces_load_interval.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_load-interval")
    {
        cisco_ios_xe_interfaces_load_interval_.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_mac-address")
    {
        cisco_ios_xe_interfaces_mac_address.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_mac-address")
    {
        cisco_ios_xe_interfaces_mac_address_.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_max-reserved-bandwidth")
    {
        cisco_ios_xe_interfaces_max_reserved_bandwidth.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_max-reserved-bandwidth")
    {
        cisco_ios_xe_interfaces_max_reserved_bandwidth_.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_mtu")
    {
        cisco_ios_xe_interfaces_mtu.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_mtu")
    {
        cisco_ios_xe_interfaces_mtu_.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_service-insertion")
    {
        cisco_ios_xe_interfaces_service_insertion.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_service-insertion")
    {
        cisco_ios_xe_interfaces_service_insertion_.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_shutdown")
    {
        cisco_ios_xe_interfaces_shutdown.yfilter = yfilter;
    }
    if(value_path == "Cisco-IOS-XE-interfaces_shutdown")
    {
        cisco_ios_xe_interfaces_shutdown_.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive.yfilter = yfilter;
    }
    if(value_path == "keepalive")
    {
        keepalive_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Cisco-IOS-XE-interfaces_access-session" || name == "Cisco-IOS-XE-interfaces_access-session" || name == "Cisco-IOS-XE-interfaces_arp" || name == "Cisco-IOS-XE-interfaces_arp" || name == "Cisco-IOS-XE-interfaces_backup" || name == "Cisco-IOS-XE-interfaces_backup" || name == "Cisco-IOS-XE-interfaces_bandwidth" || name == "Cisco-IOS-XE-interfaces_bandwidth" || name == "Cisco-IOS-XE-interfaces_bfd" || name == "Cisco-IOS-XE-interfaces_bfd" || name == "Cisco-IOS-XE-interfaces_cemoudp" || name == "Cisco-IOS-XE-interfaces_cemoudp" || name == "Cisco-IOS-XE-interfaces_cws-tunnel" || name == "Cisco-IOS-XE-interfaces_cws-tunnel" || name == "Cisco-IOS-XE-interfaces_dampening" || name == "Cisco-IOS-XE-interfaces_dampening" || name == "Cisco-IOS-XE-interfaces_domain" || name == "Cisco-IOS-XE-interfaces_domain" || name == "Cisco-IOS-XE-interfaces_encapsulation" || name == "Cisco-IOS-XE-interfaces_encapsulation" || name == "Cisco-IOS-XE-interfaces_fair-queue" || name == "Cisco-IOS-XE-interfaces_fair-queue" || name == "Cisco-IOS-XE-interfaces_fair-queue-conf" || name == "Cisco-IOS-XE-interfaces_fair-queue-conf" || name == "Cisco-IOS-XE-interfaces_flowcontrol" || name == "Cisco-IOS-XE-interfaces_flowcontrol" || name == "Cisco-IOS-XE-interfaces_hold-queue" || name == "Cisco-IOS-XE-interfaces_hold-queue" || name == "Cisco-IOS-XE-interfaces_interface_qos" || name == "Cisco-IOS-XE-interfaces_interface_qos" || name == "Cisco-IOS-XE-interfaces_ip" || name == "Cisco-IOS-XE-interfaces_ip" || name == "Cisco-IOS-XE-interfaces_ipv6" || name == "Cisco-IOS-XE-interfaces_ipv6" || name == "Cisco-IOS-XE-interfaces_isis" || name == "Cisco-IOS-XE-interfaces_isis" || name == "Cisco-IOS-XE-interfaces_l2protocol-tunnel" || name == "Cisco-IOS-XE-interfaces_l2protocol-tunnel" || name == "Cisco-IOS-XE-interfaces_logging" || name == "Cisco-IOS-XE-interfaces_logging" || name == "Cisco-IOS-XE-interfaces_mdix" || name == "Cisco-IOS-XE-interfaces_mdix" || name == "Cisco-IOS-XE-interfaces_mop" || name == "Cisco-IOS-XE-interfaces_mop" || name == "Cisco-IOS-XE-interfaces_mpls" || name == "Cisco-IOS-XE-interfaces_mpls" || name == "Cisco-IOS-XE-interfaces_peer" || name == "Cisco-IOS-XE-interfaces_peer" || name == "Cisco-IOS-XE-interfaces_pm-path" || name == "Cisco-IOS-XE-interfaces_pm-path" || name == "Cisco-IOS-XE-interfaces_priority-queue" || name == "Cisco-IOS-XE-interfaces_priority-queue" || name == "Cisco-IOS-XE-interfaces_rcv-queue" || name == "Cisco-IOS-XE-interfaces_rcv-queue" || name == "Cisco-IOS-XE-interfaces_standby" || name == "Cisco-IOS-XE-interfaces_standby" || name == "Cisco-IOS-XE-interfaces_storm-control" || name == "Cisco-IOS-XE-interfaces_storm-control" || name == "Cisco-IOS-XE-interfaces_switchport" || name == "Cisco-IOS-XE-interfaces_switchport" || name == "Cisco-IOS-XE-interfaces_switchport-conf" || name == "Cisco-IOS-XE-interfaces_switchport-conf" || name == "Cisco-IOS-XE-interfaces_trust" || name == "Cisco-IOS-XE-interfaces_trust" || name == "Cisco-IOS-XE-interfaces_utd" || name == "Cisco-IOS-XE-interfaces_utd" || name == "crypto" || name == "cts" || name == "glbp" || name == "ip-vrf" || name == "ip-vrf" || name == "keepalive-settings" || name == "keepalive-settings" || name == "lisp" || name == "private-vlan" || name == "service-policy" || name == "service-routing" || name == "vrf" || name == "vrf" || name == "vrrp" || name == "zone-member" || name == "name" || name == "Cisco-IOS-XE-interfaces_delay" || name == "Cisco-IOS-XE-interfaces_delay" || name == "Cisco-IOS-XE-interfaces_description" || name == "Cisco-IOS-XE-interfaces_description" || name == "Cisco-IOS-XE-interfaces_if-state" || name == "Cisco-IOS-XE-interfaces_if-state" || name == "Cisco-IOS-XE-interfaces_load-interval" || name == "Cisco-IOS-XE-interfaces_load-interval" || name == "Cisco-IOS-XE-interfaces_mac-address" || name == "Cisco-IOS-XE-interfaces_mac-address" || name == "Cisco-IOS-XE-interfaces_max-reserved-bandwidth" || name == "Cisco-IOS-XE-interfaces_max-reserved-bandwidth" || name == "Cisco-IOS-XE-interfaces_mtu" || name == "Cisco-IOS-XE-interfaces_mtu" || name == "Cisco-IOS-XE-interfaces_service-insertion" || name == "Cisco-IOS-XE-interfaces_service-insertion" || name == "Cisco-IOS-XE-interfaces_shutdown" || name == "Cisco-IOS-XE-interfaces_shutdown" || name == "keepalive" || name == "keepalive")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::CiscoIOSXEInterfacesAccessSession()
    :
    closed{YType::empty, "closed"},
    host_mode{YType::enumeration, "host-mode"}
    	,
    port_control(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::PortControl>())
{
    port_control->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_access-session"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::~CiscoIOSXEInterfacesAccessSession()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::has_data() const
{
    return closed.is_set
	|| host_mode.is_set
	|| (port_control !=  nullptr && port_control->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(closed.yfilter)
	|| ydk::is_set(host_mode.yfilter)
	|| (port_control !=  nullptr && port_control->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_access-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (closed.is_set || is_set(closed.yfilter)) leaf_name_data.push_back(closed.get_name_leafdata());
    if (host_mode.is_set || is_set(host_mode.yfilter)) leaf_name_data.push_back(host_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-control")
    {
        if(port_control == nullptr)
        {
            port_control = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::PortControl>();
        }
        return port_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_control != nullptr)
    {
        children["port-control"] = port_control;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "closed")
    {
        closed = value;
        closed.value_namespace = name_space;
        closed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-mode")
    {
        host_mode = value;
        host_mode.value_namespace = name_space;
        host_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "closed")
    {
        closed.yfilter = yfilter;
    }
    if(value_path == "host-mode")
    {
        host_mode.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-control" || name == "closed" || name == "host-mode")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::PortControl::PortControl()
    :
    auto_{YType::empty, "auto"}
{

    yang_name = "port-control"; yang_parent_name = "Cisco-IOS-XE-interfaces_access-session"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::PortControl::~PortControl()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::PortControl::has_data() const
{
    return auto_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::PortControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::PortControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::PortControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::PortControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::PortControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::PortControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::PortControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::PortControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::CiscoIOSXEInterfacesAccessSession_()
    :
    closed{YType::empty, "closed"},
    host_mode{YType::enumeration, "host-mode"}
    	,
    port_control(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::PortControl>())
{
    port_control->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_access-session"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::~CiscoIOSXEInterfacesAccessSession_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::has_data() const
{
    return closed.is_set
	|| host_mode.is_set
	|| (port_control !=  nullptr && port_control->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(closed.yfilter)
	|| ydk::is_set(host_mode.yfilter)
	|| (port_control !=  nullptr && port_control->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_access-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (closed.is_set || is_set(closed.yfilter)) leaf_name_data.push_back(closed.get_name_leafdata());
    if (host_mode.is_set || is_set(host_mode.yfilter)) leaf_name_data.push_back(host_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port-control")
    {
        if(port_control == nullptr)
        {
            port_control = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::PortControl>();
        }
        return port_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port_control != nullptr)
    {
        children["port-control"] = port_control;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "closed")
    {
        closed = value;
        closed.value_namespace = name_space;
        closed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-mode")
    {
        host_mode = value;
        host_mode.value_namespace = name_space;
        host_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "closed")
    {
        closed.yfilter = yfilter;
    }
    if(value_path == "host-mode")
    {
        host_mode.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-control" || name == "closed" || name == "host-mode")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::PortControl::PortControl()
    :
    auto_{YType::empty, "auto"}
{

    yang_name = "port-control"; yang_parent_name = "Cisco-IOS-XE-interfaces_access-session"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::PortControl::~PortControl()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::PortControl::has_data() const
{
    return auto_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::PortControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::PortControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::PortControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::PortControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::PortControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::PortControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::PortControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::PortControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesArp::CiscoIOSXEInterfacesArp()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "Cisco-IOS-XE-interfaces_arp"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesArp::~CiscoIOSXEInterfacesArp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesArp::has_data() const
{
    return timeout.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesArp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesArp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesArp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesArp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesArp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesArp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesArp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesArp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesArp_::CiscoIOSXEInterfacesArp_()
    :
    timeout{YType::uint32, "timeout"}
{

    yang_name = "Cisco-IOS-XE-interfaces_arp"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesArp_::~CiscoIOSXEInterfacesArp_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesArp_::has_data() const
{
    return timeout.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesArp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesArp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesArp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesArp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesArp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesArp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesArp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesArp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::CiscoIOSXEInterfacesBackup()
    :
    delay(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay>())
	,interface(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_>())
	,load(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load>())
{
    delay->parent = this;
    interface->parent = this;
    load->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_backup"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::~CiscoIOSXEInterfacesBackup()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (load !=  nullptr && load->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (load !=  nullptr && load->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_>();
        }
        return interface;
    }

    if(child_yang_name == "load")
    {
        if(load == nullptr)
        {
            load = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load>();
        }
        return load;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(load != nullptr)
    {
        children["load"] = load;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "interface" || name == "load")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::Delay()
    :
    failure{YType::str, "failure"},
    secondary_disable{YType::str, "secondary-disable"}
{

    yang_name = "delay"; yang_parent_name = "Cisco-IOS-XE-interfaces_backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::~Delay()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::has_data() const
{
    return failure.is_set
	|| secondary_disable.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure.yfilter)
	|| ydk::is_set(secondary_disable.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (secondary_disable.is_set || is_set(secondary_disable.yfilter)) leaf_name_data.push_back(secondary_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failure")
    {
        failure = value;
        failure.value_namespace = name_space;
        failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-disable")
    {
        secondary_disable = value;
        secondary_disable.value_namespace = name_space;
        secondary_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failure")
    {
        failure.yfilter = yfilter;
    }
    if(value_path == "secondary-disable")
    {
        secondary_disable.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "secondary-disable")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::Interface_()
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
    atm_acrsubinterface(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "Cisco-IOS-XE-interfaces_backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::~Interface_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::has_data() const
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::has_operation() const
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

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::get_name_leaf_data() const
{
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

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::get_children() const
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Interface_::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::Load()
    :
    kickin{YType::str, "kickin"},
    kickout{YType::str, "kickout"}
{

    yang_name = "load"; yang_parent_name = "Cisco-IOS-XE-interfaces_backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::~Load()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::has_data() const
{
    return kickin.is_set
	|| kickout.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kickin.yfilter)
	|| ydk::is_set(kickout.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kickin.is_set || is_set(kickin.yfilter)) leaf_name_data.push_back(kickin.get_name_leafdata());
    if (kickout.is_set || is_set(kickout.yfilter)) leaf_name_data.push_back(kickout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kickin")
    {
        kickin = value;
        kickin.value_namespace = name_space;
        kickin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kickout")
    {
        kickout = value;
        kickout.value_namespace = name_space;
        kickout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kickin")
    {
        kickin.yfilter = yfilter;
    }
    if(value_path == "kickout")
    {
        kickout.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kickin" || name == "kickout")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::CiscoIOSXEInterfacesBackup_()
    :
    delay(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Delay>())
	,interface(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_>())
	,load(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Load>())
{
    delay->parent = this;
    interface->parent = this;
    load->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_backup"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::~CiscoIOSXEInterfacesBackup_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::has_data() const
{
    return (delay !=  nullptr && delay->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (load !=  nullptr && load->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::has_operation() const
{
    return is_set(yfilter)
	|| (delay !=  nullptr && delay->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (load !=  nullptr && load->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_>();
        }
        return interface;
    }

    if(child_yang_name == "load")
    {
        if(load == nullptr)
        {
            load = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Load>();
        }
        return load;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    if(load != nullptr)
    {
        children["load"] = load;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "interface" || name == "load")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Delay::Delay()
    :
    failure{YType::str, "failure"},
    secondary_disable{YType::str, "secondary-disable"}
{

    yang_name = "delay"; yang_parent_name = "Cisco-IOS-XE-interfaces_backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Delay::~Delay()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Delay::has_data() const
{
    return failure.is_set
	|| secondary_disable.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure.yfilter)
	|| ydk::is_set(secondary_disable.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (secondary_disable.is_set || is_set(secondary_disable.yfilter)) leaf_name_data.push_back(secondary_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failure")
    {
        failure = value;
        failure.value_namespace = name_space;
        failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-disable")
    {
        secondary_disable = value;
        secondary_disable.value_namespace = name_space;
        secondary_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failure")
    {
        failure.yfilter = yfilter;
    }
    if(value_path == "secondary-disable")
    {
        secondary_disable.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "secondary-disable")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::Interface_()
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
    atm_acrsubinterface(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "Cisco-IOS-XE-interfaces_backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::~Interface_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::has_data() const
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::has_operation() const
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

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::get_name_leaf_data() const
{
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

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::get_children() const
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Interface_::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Load::Load()
    :
    kickin{YType::str, "kickin"},
    kickout{YType::str, "kickout"}
{

    yang_name = "load"; yang_parent_name = "Cisco-IOS-XE-interfaces_backup"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Load::~Load()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Load::has_data() const
{
    return kickin.is_set
	|| kickout.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Load::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kickin.yfilter)
	|| ydk::is_set(kickout.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Load::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Load::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kickin.is_set || is_set(kickin.yfilter)) leaf_name_data.push_back(kickin.get_name_leafdata());
    if (kickout.is_set || is_set(kickout.yfilter)) leaf_name_data.push_back(kickout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Load::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Load::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Load::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kickin")
    {
        kickin = value;
        kickin.value_namespace = name_space;
        kickin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kickout")
    {
        kickout = value;
        kickout.value_namespace = name_space;
        kickout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Load::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kickin")
    {
        kickin.yfilter = yfilter;
    }
    if(value_path == "kickout")
    {
        kickout.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Load::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kickin" || name == "kickout")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::CiscoIOSXEInterfacesBandwidth()
    :
    kilobits{YType::uint32, "kilobits"},
    qos_reference{YType::uint32, "qos-reference"}
    	,
    inherit(nullptr) // presence node
	,receive(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive>())
{
    receive->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_bandwidth"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::~CiscoIOSXEInterfacesBandwidth()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::has_data() const
{
    return kilobits.is_set
	|| qos_reference.is_set
	|| (inherit !=  nullptr && inherit->has_data())
	|| (receive !=  nullptr && receive->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kilobits.yfilter)
	|| ydk::is_set(qos_reference.yfilter)
	|| (inherit !=  nullptr && inherit->has_operation())
	|| (receive !=  nullptr && receive->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());
    if (qos_reference.is_set || is_set(qos_reference.yfilter)) leaf_name_data.push_back(qos_reference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit>();
        }
        return inherit;
    }

    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive>();
        }
        return receive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inherit != nullptr)
    {
        children["inherit"] = inherit;
    }

    if(receive != nullptr)
    {
        children["receive"] = receive;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-reference")
    {
        qos_reference = value;
        qos_reference.value_namespace = name_space;
        qos_reference.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
    if(value_path == "qos-reference")
    {
        qos_reference.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inherit" || name == "receive" || name == "kilobits" || name == "qos-reference")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit::Inherit()
    :
    kilobits{YType::uint32, "kilobits"}
{

    yang_name = "inherit"; yang_parent_name = "Cisco-IOS-XE-interfaces_bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit::~Inherit()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit::has_data() const
{
    return kilobits.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kilobits.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kilobits")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive::Receive()
    :
    inherit{YType::empty, "inherit"},
    kilobits{YType::uint32, "kilobits"}
{

    yang_name = "receive"; yang_parent_name = "Cisco-IOS-XE-interfaces_bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive::~Receive()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive::has_data() const
{
    return inherit.is_set
	|| kilobits.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inherit.yfilter)
	|| ydk::is_set(kilobits.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inherit.is_set || is_set(inherit.yfilter)) leaf_name_data.push_back(inherit.get_name_leafdata());
    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth::Receive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inherit" || name == "kilobits")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::CiscoIOSXEInterfacesBandwidth_()
    :
    kilobits{YType::uint32, "kilobits"},
    qos_reference{YType::uint32, "qos-reference"}
    	,
    inherit(nullptr) // presence node
	,receive(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Receive>())
{
    receive->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_bandwidth"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::~CiscoIOSXEInterfacesBandwidth_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::has_data() const
{
    return kilobits.is_set
	|| qos_reference.is_set
	|| (inherit !=  nullptr && inherit->has_data())
	|| (receive !=  nullptr && receive->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kilobits.yfilter)
	|| ydk::is_set(qos_reference.yfilter)
	|| (inherit !=  nullptr && inherit->has_operation())
	|| (receive !=  nullptr && receive->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());
    if (qos_reference.is_set || is_set(qos_reference.yfilter)) leaf_name_data.push_back(qos_reference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Inherit>();
        }
        return inherit;
    }

    if(child_yang_name == "receive")
    {
        if(receive == nullptr)
        {
            receive = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Receive>();
        }
        return receive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inherit != nullptr)
    {
        children["inherit"] = inherit;
    }

    if(receive != nullptr)
    {
        children["receive"] = receive;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qos-reference")
    {
        qos_reference = value;
        qos_reference.value_namespace = name_space;
        qos_reference.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
    if(value_path == "qos-reference")
    {
        qos_reference.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inherit" || name == "receive" || name == "kilobits" || name == "qos-reference")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Inherit::Inherit()
    :
    kilobits{YType::uint32, "kilobits"}
{

    yang_name = "inherit"; yang_parent_name = "Cisco-IOS-XE-interfaces_bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Inherit::~Inherit()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Inherit::has_data() const
{
    return kilobits.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kilobits.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kilobits")
    {
        kilobits = value;
        kilobits.value_namespace = name_space;
        kilobits.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kilobits")
    {
        kilobits.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kilobits")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Receive::Receive()
    :
    inherit{YType::empty, "inherit"},
    kilobits{YType::uint32, "kilobits"}
{

    yang_name = "receive"; yang_parent_name = "Cisco-IOS-XE-interfaces_bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Receive::~Receive()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Receive::has_data() const
{
    return inherit.is_set
	|| kilobits.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Receive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inherit.yfilter)
	|| ydk::is_set(kilobits.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Receive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Receive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inherit.is_set || is_set(inherit.yfilter)) leaf_name_data.push_back(inherit.get_name_leafdata());
    if (kilobits.is_set || is_set(kilobits.yfilter)) leaf_name_data.push_back(kilobits.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Receive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Receive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Receive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Receive::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBandwidth_::Receive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inherit" || name == "kilobits")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBfd::CiscoIOSXEInterfacesBfd()
{

    yang_name = "Cisco-IOS-XE-interfaces_bfd"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBfd::~CiscoIOSXEInterfacesBfd()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBfd::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBfd::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBfd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBfd::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBfd_::CiscoIOSXEInterfacesBfd_()
{

    yang_name = "Cisco-IOS-XE-interfaces_bfd"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesBfd_::~CiscoIOSXEInterfacesBfd_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBfd_::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBfd_::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesBfd_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesBfd_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesBfd_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesBfd_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBfd_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesBfd_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesBfd_::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::CiscoIOSXEInterfacesCemoudp()
    :
    reserve(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve>())
{
    reserve->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_cemoudp"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::~CiscoIOSXEInterfacesCemoudp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::has_data() const
{
    return (reserve !=  nullptr && reserve->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::has_operation() const
{
    return is_set(yfilter)
	|| (reserve !=  nullptr && reserve->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_cemoudp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reserve")
    {
        if(reserve == nullptr)
        {
            reserve = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve>();
        }
        return reserve;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reserve != nullptr)
    {
        children["reserve"] = reserve;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reserve")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve::Reserve()
    :
    acr{YType::uint8, "acr"}
{

    yang_name = "reserve"; yang_parent_name = "Cisco-IOS-XE-interfaces_cemoudp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve::~Reserve()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve::has_data() const
{
    return acr.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acr.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr.is_set || is_set(acr.yfilter)) leaf_name_data.push_back(acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acr")
    {
        acr = value;
        acr.value_namespace = name_space;
        acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acr")
    {
        acr.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp::Reserve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acr")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::CiscoIOSXEInterfacesCemoudp_()
    :
    reserve(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::Reserve>())
{
    reserve->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_cemoudp"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::~CiscoIOSXEInterfacesCemoudp_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::has_data() const
{
    return (reserve !=  nullptr && reserve->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::has_operation() const
{
    return is_set(yfilter)
	|| (reserve !=  nullptr && reserve->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_cemoudp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reserve")
    {
        if(reserve == nullptr)
        {
            reserve = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::Reserve>();
        }
        return reserve;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reserve != nullptr)
    {
        children["reserve"] = reserve;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reserve")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::Reserve::Reserve()
    :
    acr{YType::uint8, "acr"}
{

    yang_name = "reserve"; yang_parent_name = "Cisco-IOS-XE-interfaces_cemoudp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::Reserve::~Reserve()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::Reserve::has_data() const
{
    return acr.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::Reserve::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acr.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::Reserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::Reserve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr.is_set || is_set(acr.yfilter)) leaf_name_data.push_back(acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::Reserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::Reserve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::Reserve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acr")
    {
        acr = value;
        acr.value_namespace = name_space;
        acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::Reserve::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acr")
    {
        acr.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCemoudp_::Reserve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acr")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::CiscoIOSXEInterfacesCwsTunnel()
    :
    in{YType::empty, "in"}
    	,
    out(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out>())
{
    out->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_cws-tunnel"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::~CiscoIOSXEInterfacesCwsTunnel()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::has_data() const
{
    return in.is_set
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_cws-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out" || name == "in")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out::Out()
    :
    tunnel_number{YType::uint16, "tunnel-number"}
{

    yang_name = "out"; yang_parent_name = "Cisco-IOS-XE-interfaces_cws-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out::~Out()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out::has_data() const
{
    return tunnel_number.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_number.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_number.is_set || is_set(tunnel_number.yfilter)) leaf_name_data.push_back(tunnel_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number = value;
        tunnel_number.value_namespace = name_space;
        tunnel_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-number")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::CiscoIOSXEInterfacesCwsTunnel_()
    :
    in{YType::empty, "in"}
    	,
    out(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::Out>())
{
    out->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_cws-tunnel"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::~CiscoIOSXEInterfacesCwsTunnel_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::has_data() const
{
    return in.is_set
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in.yfilter)
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_cws-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out" || name == "in")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::Out::Out()
    :
    tunnel_number{YType::uint16, "tunnel-number"}
{

    yang_name = "out"; yang_parent_name = "Cisco-IOS-XE-interfaces_cws-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::Out::~Out()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::Out::has_data() const
{
    return tunnel_number.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::Out::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_number.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_number.is_set || is_set(tunnel_number.yfilter)) leaf_name_data.push_back(tunnel_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number = value;
        tunnel_number.value_namespace = name_space;
        tunnel_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-number")
    {
        tunnel_number.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesCwsTunnel_::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-number")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::CiscoIOSXEInterfacesDampening()
    :
    dampening_time{YType::uint16, "dampening-time"},
    maximum_supressing_time{YType::uint16, "maximum-supressing-time"},
    start_reusing_time{YType::uint16, "start-reusing-time"},
    start_supressing_time{YType::uint16, "start-supressing-time"}
    	,
    restart(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart>())
{
    restart->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_dampening"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::~CiscoIOSXEInterfacesDampening()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::has_data() const
{
    return dampening_time.is_set
	|| maximum_supressing_time.is_set
	|| start_reusing_time.is_set
	|| start_supressing_time.is_set
	|| (restart !=  nullptr && restart->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dampening_time.yfilter)
	|| ydk::is_set(maximum_supressing_time.yfilter)
	|| ydk::is_set(start_reusing_time.yfilter)
	|| ydk::is_set(start_supressing_time.yfilter)
	|| (restart !=  nullptr && restart->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dampening_time.is_set || is_set(dampening_time.yfilter)) leaf_name_data.push_back(dampening_time.get_name_leafdata());
    if (maximum_supressing_time.is_set || is_set(maximum_supressing_time.yfilter)) leaf_name_data.push_back(maximum_supressing_time.get_name_leafdata());
    if (start_reusing_time.is_set || is_set(start_reusing_time.yfilter)) leaf_name_data.push_back(start_reusing_time.get_name_leafdata());
    if (start_supressing_time.is_set || is_set(start_supressing_time.yfilter)) leaf_name_data.push_back(start_supressing_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "restart")
    {
        if(restart == nullptr)
        {
            restart = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart>();
        }
        return restart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(restart != nullptr)
    {
        children["restart"] = restart;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dampening-time")
    {
        dampening_time = value;
        dampening_time.value_namespace = name_space;
        dampening_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-supressing-time")
    {
        maximum_supressing_time = value;
        maximum_supressing_time.value_namespace = name_space;
        maximum_supressing_time.value_namespace_prefix = name_space_prefix;
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
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dampening-time")
    {
        dampening_time.yfilter = yfilter;
    }
    if(value_path == "maximum-supressing-time")
    {
        maximum_supressing_time.yfilter = yfilter;
    }
    if(value_path == "start-reusing-time")
    {
        start_reusing_time.yfilter = yfilter;
    }
    if(value_path == "start-supressing-time")
    {
        start_supressing_time.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restart" || name == "dampening-time" || name == "maximum-supressing-time" || name == "start-reusing-time" || name == "start-supressing-time")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart::Restart()
    :
    restart{YType::empty, "restart"},
    restart_penalty{YType::uint16, "restart-penalty"}
{

    yang_name = "restart"; yang_parent_name = "Cisco-IOS-XE-interfaces_dampening"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart::~Restart()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart::has_data() const
{
    return restart.is_set
	|| restart_penalty.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(restart_penalty.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.yfilter)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDampening::Restart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restart" || name == "restart-penalty")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::CiscoIOSXEInterfacesDampening_()
    :
    dampening_time{YType::uint16, "dampening-time"},
    maximum_supressing_time{YType::uint16, "maximum-supressing-time"},
    start_reusing_time{YType::uint16, "start-reusing-time"},
    start_supressing_time{YType::uint16, "start-supressing-time"}
    	,
    restart(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::Restart>())
{
    restart->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_dampening"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::~CiscoIOSXEInterfacesDampening_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::has_data() const
{
    return dampening_time.is_set
	|| maximum_supressing_time.is_set
	|| start_reusing_time.is_set
	|| start_supressing_time.is_set
	|| (restart !=  nullptr && restart->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dampening_time.yfilter)
	|| ydk::is_set(maximum_supressing_time.yfilter)
	|| ydk::is_set(start_reusing_time.yfilter)
	|| ydk::is_set(start_supressing_time.yfilter)
	|| (restart !=  nullptr && restart->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dampening_time.is_set || is_set(dampening_time.yfilter)) leaf_name_data.push_back(dampening_time.get_name_leafdata());
    if (maximum_supressing_time.is_set || is_set(maximum_supressing_time.yfilter)) leaf_name_data.push_back(maximum_supressing_time.get_name_leafdata());
    if (start_reusing_time.is_set || is_set(start_reusing_time.yfilter)) leaf_name_data.push_back(start_reusing_time.get_name_leafdata());
    if (start_supressing_time.is_set || is_set(start_supressing_time.yfilter)) leaf_name_data.push_back(start_supressing_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "restart")
    {
        if(restart == nullptr)
        {
            restart = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::Restart>();
        }
        return restart;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(restart != nullptr)
    {
        children["restart"] = restart;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dampening-time")
    {
        dampening_time = value;
        dampening_time.value_namespace = name_space;
        dampening_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-supressing-time")
    {
        maximum_supressing_time = value;
        maximum_supressing_time.value_namespace = name_space;
        maximum_supressing_time.value_namespace_prefix = name_space_prefix;
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
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dampening-time")
    {
        dampening_time.yfilter = yfilter;
    }
    if(value_path == "maximum-supressing-time")
    {
        maximum_supressing_time.yfilter = yfilter;
    }
    if(value_path == "start-reusing-time")
    {
        start_reusing_time.yfilter = yfilter;
    }
    if(value_path == "start-supressing-time")
    {
        start_supressing_time.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restart" || name == "dampening-time" || name == "maximum-supressing-time" || name == "start-reusing-time" || name == "start-supressing-time")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::Restart::Restart()
    :
    restart{YType::empty, "restart"},
    restart_penalty{YType::uint16, "restart-penalty"}
{

    yang_name = "restart"; yang_parent_name = "Cisco-IOS-XE-interfaces_dampening"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::Restart::~Restart()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::Restart::has_data() const
{
    return restart.is_set
	|| restart_penalty.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::Restart::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(restart_penalty.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::Restart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "restart";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::Restart::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (restart_penalty.is_set || is_set(restart_penalty.yfilter)) leaf_name_data.push_back(restart_penalty.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::Restart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::Restart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::Restart::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::Restart::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDampening_::Restart::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "restart" || name == "restart-penalty")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesDomain::CiscoIOSXEInterfacesDomain()
    :
    internet_bound{YType::empty, "internet-bound"},
    name{YType::str, "name"},
    path{YType::str, "path"},
    path_id{YType::uint8, "path-id"},
    path_last_resort{YType::empty, "path-last-resort"},
    zero_sla{YType::empty, "zero-sla"}
{

    yang_name = "Cisco-IOS-XE-interfaces_domain"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesDomain::~CiscoIOSXEInterfacesDomain()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDomain::has_data() const
{
    return internet_bound.is_set
	|| name.is_set
	|| path.is_set
	|| path_id.is_set
	|| path_last_resort.is_set
	|| zero_sla.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDomain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internet_bound.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_last_resort.yfilter)
	|| ydk::is_set(zero_sla.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internet_bound.is_set || is_set(internet_bound.yfilter)) leaf_name_data.push_back(internet_bound.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_last_resort.is_set || is_set(path_last_resort.yfilter)) leaf_name_data.push_back(path_last_resort.get_name_leafdata());
    if (zero_sla.is_set || is_set(zero_sla.yfilter)) leaf_name_data.push_back(zero_sla.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internet-bound")
    {
        internet_bound = value;
        internet_bound.value_namespace = name_space;
        internet_bound.value_namespace_prefix = name_space_prefix;
    }
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internet-bound")
    {
        internet_bound.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internet-bound" || name == "name" || name == "path" || name == "path-id" || name == "path-last-resort" || name == "zero-sla")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesDomain_::CiscoIOSXEInterfacesDomain_()
    :
    internet_bound{YType::empty, "internet-bound"},
    name{YType::str, "name"},
    path{YType::str, "path"},
    path_id{YType::uint8, "path-id"},
    path_last_resort{YType::empty, "path-last-resort"},
    zero_sla{YType::empty, "zero-sla"}
{

    yang_name = "Cisco-IOS-XE-interfaces_domain"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesDomain_::~CiscoIOSXEInterfacesDomain_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDomain_::has_data() const
{
    return internet_bound.is_set
	|| name.is_set
	|| path.is_set
	|| path_id.is_set
	|| path_last_resort.is_set
	|| zero_sla.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDomain_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internet_bound.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(path.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| ydk::is_set(path_last_resort.yfilter)
	|| ydk::is_set(zero_sla.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesDomain_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesDomain_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internet_bound.is_set || is_set(internet_bound.yfilter)) leaf_name_data.push_back(internet_bound.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (path.is_set || is_set(path.yfilter)) leaf_name_data.push_back(path.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_last_resort.is_set || is_set(path_last_resort.yfilter)) leaf_name_data.push_back(path_last_resort.get_name_leafdata());
    if (zero_sla.is_set || is_set(zero_sla.yfilter)) leaf_name_data.push_back(zero_sla.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesDomain_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesDomain_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesDomain_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internet-bound")
    {
        internet_bound = value;
        internet_bound.value_namespace = name_space;
        internet_bound.value_namespace_prefix = name_space_prefix;
    }
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesDomain_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internet-bound")
    {
        internet_bound.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "path")
    {
        path.yfilter = yfilter;
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesDomain_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internet-bound" || name == "name" || name == "path" || name == "path-id" || name == "path-last-resort" || name == "zero-sla")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::CiscoIOSXEInterfacesEncapsulation()
    :
    dot1q(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q>())
	,frame_relay(nullptr) // presence node
	,isl(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl>())
	,ppp(nullptr) // presence node
	,slip(nullptr) // presence node
{
    dot1q->parent = this;
    isl->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_encapsulation"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::~CiscoIOSXEInterfacesEncapsulation()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::has_data() const
{
    return (dot1q !=  nullptr && dot1q->has_data())
	|| (frame_relay !=  nullptr && frame_relay->has_data())
	|| (isl !=  nullptr && isl->has_data())
	|| (ppp !=  nullptr && ppp->has_data())
	|| (slip !=  nullptr && slip->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::has_operation() const
{
    return is_set(yfilter)
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (frame_relay !=  nullptr && frame_relay->has_operation())
	|| (isl !=  nullptr && isl->has_operation())
	|| (ppp !=  nullptr && ppp->has_operation())
	|| (slip !=  nullptr && slip->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1Q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "frame-relay")
    {
        if(frame_relay == nullptr)
        {
            frame_relay = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay>();
        }
        return frame_relay;
    }

    if(child_yang_name == "isl")
    {
        if(isl == nullptr)
        {
            isl = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl>();
        }
        return isl;
    }

    if(child_yang_name == "ppp")
    {
        if(ppp == nullptr)
        {
            ppp = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp>();
        }
        return ppp;
    }

    if(child_yang_name == "slip")
    {
        if(slip == nullptr)
        {
            slip = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip>();
        }
        return slip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1q != nullptr)
    {
        children["dot1Q"] = dot1q;
    }

    if(frame_relay != nullptr)
    {
        children["frame-relay"] = frame_relay;
    }

    if(isl != nullptr)
    {
        children["isl"] = isl;
    }

    if(ppp != nullptr)
    {
        children["ppp"] = ppp;
    }

    if(slip != nullptr)
    {
        children["slip"] = slip;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1Q" || name == "frame-relay" || name == "isl" || name == "ppp" || name == "slip")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q::Dot1Q()
    :
    native{YType::empty, "native"},
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "dot1Q"; yang_parent_name = "Cisco-IOS-XE-interfaces_encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q::has_data() const
{
    return native.is_set
	|| vlan_id.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(native.yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1Q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (native.is_set || is_set(native.yfilter)) leaf_name_data.push_back(native.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "native")
    {
        native = value;
        native.value_namespace = name_space;
        native.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "native")
    {
        native.yfilter = yfilter;
    }
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Dot1Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "native" || name == "vlan-id")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay::FrameRelay()
    :
    ietf{YType::empty, "ietf"}
{

    yang_name = "frame-relay"; yang_parent_name = "Cisco-IOS-XE-interfaces_encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay::~FrameRelay()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay::has_data() const
{
    return ietf.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ietf.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ietf.is_set || is_set(ietf.yfilter)) leaf_name_data.push_back(ietf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ietf")
    {
        ietf = value;
        ietf.value_namespace = name_space;
        ietf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ietf")
    {
        ietf.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::FrameRelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ietf")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl::Isl()
    :
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "isl"; yang_parent_name = "Cisco-IOS-XE-interfaces_encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl::~Isl()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl::has_data() const
{
    return vlan_id.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Isl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp::Ppp()
{

    yang_name = "ppp"; yang_parent_name = "Cisco-IOS-XE-interfaces_encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp::~Ppp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Ppp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip::Slip()
{

    yang_name = "slip"; yang_parent_name = "Cisco-IOS-XE-interfaces_encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip::~Slip()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation::Slip::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::CiscoIOSXEInterfacesEncapsulation_()
    :
    dot1q(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Dot1Q>())
	,frame_relay(nullptr) // presence node
	,isl(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Isl>())
	,ppp(nullptr) // presence node
	,slip(nullptr) // presence node
{
    dot1q->parent = this;
    isl->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_encapsulation"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::~CiscoIOSXEInterfacesEncapsulation_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::has_data() const
{
    return (dot1q !=  nullptr && dot1q->has_data())
	|| (frame_relay !=  nullptr && frame_relay->has_data())
	|| (isl !=  nullptr && isl->has_data())
	|| (ppp !=  nullptr && ppp->has_data())
	|| (slip !=  nullptr && slip->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::has_operation() const
{
    return is_set(yfilter)
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (frame_relay !=  nullptr && frame_relay->has_operation())
	|| (isl !=  nullptr && isl->has_operation())
	|| (ppp !=  nullptr && ppp->has_operation())
	|| (slip !=  nullptr && slip->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1Q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "frame-relay")
    {
        if(frame_relay == nullptr)
        {
            frame_relay = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::FrameRelay>();
        }
        return frame_relay;
    }

    if(child_yang_name == "isl")
    {
        if(isl == nullptr)
        {
            isl = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Isl>();
        }
        return isl;
    }

    if(child_yang_name == "ppp")
    {
        if(ppp == nullptr)
        {
            ppp = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Ppp>();
        }
        return ppp;
    }

    if(child_yang_name == "slip")
    {
        if(slip == nullptr)
        {
            slip = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Slip>();
        }
        return slip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dot1q != nullptr)
    {
        children["dot1Q"] = dot1q;
    }

    if(frame_relay != nullptr)
    {
        children["frame-relay"] = frame_relay;
    }

    if(isl != nullptr)
    {
        children["isl"] = isl;
    }

    if(ppp != nullptr)
    {
        children["ppp"] = ppp;
    }

    if(slip != nullptr)
    {
        children["slip"] = slip;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1Q" || name == "frame-relay" || name == "isl" || name == "ppp" || name == "slip")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Dot1Q::Dot1Q()
    :
    native{YType::empty, "native"},
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "dot1Q"; yang_parent_name = "Cisco-IOS-XE-interfaces_encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Dot1Q::~Dot1Q()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Dot1Q::has_data() const
{
    return native.is_set
	|| vlan_id.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Dot1Q::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(native.yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1Q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Dot1Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (native.is_set || is_set(native.yfilter)) leaf_name_data.push_back(native.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Dot1Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "native")
    {
        native = value;
        native.value_namespace = name_space;
        native.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Dot1Q::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "native")
    {
        native.yfilter = yfilter;
    }
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Dot1Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "native" || name == "vlan-id")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::FrameRelay::FrameRelay()
    :
    ietf{YType::empty, "ietf"}
{

    yang_name = "frame-relay"; yang_parent_name = "Cisco-IOS-XE-interfaces_encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::FrameRelay::~FrameRelay()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::FrameRelay::has_data() const
{
    return ietf.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::FrameRelay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ietf.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::FrameRelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frame-relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::FrameRelay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ietf.is_set || is_set(ietf.yfilter)) leaf_name_data.push_back(ietf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::FrameRelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::FrameRelay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::FrameRelay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ietf")
    {
        ietf = value;
        ietf.value_namespace = name_space;
        ietf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::FrameRelay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ietf")
    {
        ietf.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::FrameRelay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ietf")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Isl::Isl()
    :
    vlan_id{YType::uint16, "vlan-id"}
{

    yang_name = "isl"; yang_parent_name = "Cisco-IOS-XE-interfaces_encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Isl::~Isl()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Isl::has_data() const
{
    return vlan_id.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Isl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Isl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Isl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Isl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Isl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Isl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Isl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Isl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Ppp::Ppp()
{

    yang_name = "ppp"; yang_parent_name = "Cisco-IOS-XE-interfaces_encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Ppp::~Ppp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Ppp::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Ppp::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Ppp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Ppp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Ppp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Ppp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Slip::Slip()
{

    yang_name = "slip"; yang_parent_name = "Cisco-IOS-XE-interfaces_encapsulation"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Slip::~Slip()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Slip::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Slip::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Slip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Slip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Slip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Slip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Slip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Slip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesEncapsulation_::Slip::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue::CiscoIOSXEInterfacesFairQueue()
    :
    incomplete{YType::empty, "incomplete"}
{

    yang_name = "Cisco-IOS-XE-interfaces_fair-queue"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue::~CiscoIOSXEInterfacesFairQueue()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue::has_data() const
{
    return incomplete.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incomplete.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_fair-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incomplete.is_set || is_set(incomplete.yfilter)) leaf_name_data.push_back(incomplete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incomplete")
    {
        incomplete = value;
        incomplete.value_namespace = name_space;
        incomplete.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incomplete")
    {
        incomplete.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incomplete")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf::CiscoIOSXEInterfacesFairQueueConf()
    :
    fair_queue{YType::boolean, "fair-queue"}
{

    yang_name = "Cisco-IOS-XE-interfaces_fair-queue-conf"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf::~CiscoIOSXEInterfacesFairQueueConf()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf::has_data() const
{
    return fair_queue.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fair_queue.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_fair-queue-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fair_queue.is_set || is_set(fair_queue.yfilter)) leaf_name_data.push_back(fair_queue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fair-queue")
    {
        fair_queue = value;
        fair_queue.value_namespace = name_space;
        fair_queue.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fair-queue")
    {
        fair_queue.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fair-queue")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf_::CiscoIOSXEInterfacesFairQueueConf_()
    :
    fair_queue{YType::boolean, "fair-queue"}
{

    yang_name = "Cisco-IOS-XE-interfaces_fair-queue-conf"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf_::~CiscoIOSXEInterfacesFairQueueConf_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf_::has_data() const
{
    return fair_queue.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fair_queue.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_fair-queue-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fair_queue.is_set || is_set(fair_queue.yfilter)) leaf_name_data.push_back(fair_queue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fair-queue")
    {
        fair_queue = value;
        fair_queue.value_namespace = name_space;
        fair_queue.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fair-queue")
    {
        fair_queue.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueueConf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fair-queue")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue_::CiscoIOSXEInterfacesFairQueue_()
    :
    incomplete{YType::empty, "incomplete"}
{

    yang_name = "Cisco-IOS-XE-interfaces_fair-queue"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue_::~CiscoIOSXEInterfacesFairQueue_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue_::has_data() const
{
    return incomplete.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(incomplete.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_fair-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (incomplete.is_set || is_set(incomplete.yfilter)) leaf_name_data.push_back(incomplete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "incomplete")
    {
        incomplete = value;
        incomplete.value_namespace = name_space;
        incomplete.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "incomplete")
    {
        incomplete.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFairQueue_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incomplete")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::CiscoIOSXEInterfacesFlowcontrol()
    :
    receive{YType::enumeration, "receive"},
    send{YType::enumeration, "send"}
{

    yang_name = "Cisco-IOS-XE-interfaces_flowcontrol"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::~CiscoIOSXEInterfacesFlowcontrol()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::has_data() const
{
    return receive.is_set
	|| send.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(send.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_flowcontrol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (send.is_set || is_set(send.yfilter)) leaf_name_data.push_back(send.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "send")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_::CiscoIOSXEInterfacesFlowcontrol_()
    :
    receive{YType::enumeration, "receive"},
    send{YType::enumeration, "send"}
{

    yang_name = "Cisco-IOS-XE-interfaces_flowcontrol"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_::~CiscoIOSXEInterfacesFlowcontrol_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_::has_data() const
{
    return receive.is_set
	|| send.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(send.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_flowcontrol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (send.is_set || is_set(send.yfilter)) leaf_name_data.push_back(send.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive" || name == "send")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::CiscoIOSXEInterfacesHoldQueue()
    :
    direction{YType::enumeration, "direction"},
    queue_length{YType::uint16, "queue-length"}
{

    yang_name = "Cisco-IOS-XE-interfaces_hold-queue"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::~CiscoIOSXEInterfacesHoldQueue()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::has_data() const
{
    return direction.is_set
	|| queue_length.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(queue_length.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_hold-queue" <<"[direction='" <<direction <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (queue_length.is_set || is_set(queue_length.yfilter)) leaf_name_data.push_back(queue_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "queue-length")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue_::CiscoIOSXEInterfacesHoldQueue_()
    :
    direction{YType::enumeration, "direction"},
    queue_length{YType::uint16, "queue-length"}
{

    yang_name = "Cisco-IOS-XE-interfaces_hold-queue"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue_::~CiscoIOSXEInterfacesHoldQueue_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue_::has_data() const
{
    return direction.is_set
	|| queue_length.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(queue_length.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_hold-queue" <<"[direction='" <<direction <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (queue_length.is_set || is_set(queue_length.yfilter)) leaf_name_data.push_back(queue_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue_::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "queue-length")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::CiscoIOSXEInterfacesInterfaceQos()
    :
    trust(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::Trust>())
{
    trust->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_interface_qos"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::~CiscoIOSXEInterfacesInterfaceQos()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::has_data() const
{
    return (trust !=  nullptr && trust->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::has_operation() const
{
    return is_set(yfilter)
	|| (trust !=  nullptr && trust->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_interface_qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::Trust>();
        }
        return trust;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trust != nullptr)
    {
        children["trust"] = trust;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trust")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::Trust::Trust()
    :
    device{YType::enumeration, "device"}
{

    yang_name = "trust"; yang_parent_name = "Cisco-IOS-XE-interfaces_interface_qos"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::Trust::~Trust()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::Trust::has_data() const
{
    return device.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::Trust::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::Trust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.yfilter)) leaf_name_data.push_back(device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::Trust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device")
    {
        device = value;
        device.value_namespace = name_space;
        device.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::Trust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device")
    {
        device.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::Trust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::CiscoIOSXEInterfacesInterfaceQos_()
    :
    trust(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::Trust>())
{
    trust->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_interface_qos"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::~CiscoIOSXEInterfacesInterfaceQos_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::has_data() const
{
    return (trust !=  nullptr && trust->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::has_operation() const
{
    return is_set(yfilter)
	|| (trust !=  nullptr && trust->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_interface_qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::Trust>();
        }
        return trust;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trust != nullptr)
    {
        children["trust"] = trust;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trust")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::Trust::Trust()
    :
    device{YType::enumeration, "device"}
{

    yang_name = "trust"; yang_parent_name = "Cisco-IOS-XE-interfaces_interface_qos"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::Trust::~Trust()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::Trust::has_data() const
{
    return device.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::Trust::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(device.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::Trust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (device.is_set || is_set(device.yfilter)) leaf_name_data.push_back(device.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::Trust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "device")
    {
        device = value;
        device.value_namespace = name_space;
        device.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::Trust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "device")
    {
        device.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::Trust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::CiscoIOSXEInterfacesIp()
    :
    admission{YType::str, "admission"},
    directed_broadcast{YType::str, "directed-broadcast"},
    local_proxy_arp{YType::empty, "local-proxy-arp"},
    mroute_cache{YType::boolean, "mroute-cache"},
    mtu{YType::uint16, "mtu"},
    proxy_arp{YType::boolean, "proxy-arp"},
    redirects{YType::boolean, "redirects"},
    unnumbered{YType::str, "unnumbered"}
    	,
    access_group(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup>())
	,address(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address>())
	,arp(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp>())
	,authentication(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication>())
	,dhcp(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp>())
	,hello_interval(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval>())
	,hold_time(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime>())
	,nbar(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar>())
	,no_address(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress>())
	,pim(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim>())
	,policy(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy>())
	,rip(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip>())
	,route_cache(nullptr) // presence node
	,route_cache_conf(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf>())
	,router(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router>())
	,summary_address(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress>())
	,tcp(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp>())
	,verify(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify>())
	,virtual_reassembly(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly>())
	,vrf(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf>())
{
    access_group->parent = this;
    address->parent = this;
    arp->parent = this;
    authentication->parent = this;
    dhcp->parent = this;
    hello_interval->parent = this;
    hold_time->parent = this;
    nbar->parent = this;
    no_address->parent = this;
    pim->parent = this;
    policy->parent = this;
    rip->parent = this;
    route_cache_conf->parent = this;
    router->parent = this;
    summary_address->parent = this;
    tcp->parent = this;
    verify->parent = this;
    virtual_reassembly->parent = this;
    vrf->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_ip"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::~CiscoIOSXEInterfacesIp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::has_data() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return admission.is_set
	|| directed_broadcast.is_set
	|| local_proxy_arp.is_set
	|| mroute_cache.is_set
	|| mtu.is_set
	|| proxy_arp.is_set
	|| redirects.is_set
	|| unnumbered.is_set
	|| (access_group !=  nullptr && access_group->has_data())
	|| (address !=  nullptr && address->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data())
	|| (hold_time !=  nullptr && hold_time->has_data())
	|| (nbar !=  nullptr && nbar->has_data())
	|| (no_address !=  nullptr && no_address->has_data())
	|| (pim !=  nullptr && pim->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (route_cache !=  nullptr && route_cache->has_data())
	|| (route_cache_conf !=  nullptr && route_cache_conf->has_data())
	|| (router !=  nullptr && router->has_data())
	|| (summary_address !=  nullptr && summary_address->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (verify !=  nullptr && verify->has_data())
	|| (virtual_reassembly !=  nullptr && virtual_reassembly->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::has_operation() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(admission.yfilter)
	|| ydk::is_set(directed_broadcast.yfilter)
	|| ydk::is_set(local_proxy_arp.yfilter)
	|| ydk::is_set(mroute_cache.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(proxy_arp.yfilter)
	|| ydk::is_set(redirects.yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| (access_group !=  nullptr && access_group->has_operation())
	|| (address !=  nullptr && address->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (hold_time !=  nullptr && hold_time->has_operation())
	|| (nbar !=  nullptr && nbar->has_operation())
	|| (no_address !=  nullptr && no_address->has_operation())
	|| (pim !=  nullptr && pim->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (route_cache !=  nullptr && route_cache->has_operation())
	|| (route_cache_conf !=  nullptr && route_cache_conf->has_operation())
	|| (router !=  nullptr && router->has_operation())
	|| (summary_address !=  nullptr && summary_address->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (verify !=  nullptr && verify->has_operation())
	|| (virtual_reassembly !=  nullptr && virtual_reassembly->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admission.is_set || is_set(admission.yfilter)) leaf_name_data.push_back(admission.get_name_leafdata());
    if (directed_broadcast.is_set || is_set(directed_broadcast.yfilter)) leaf_name_data.push_back(directed_broadcast.get_name_leafdata());
    if (local_proxy_arp.is_set || is_set(local_proxy_arp.yfilter)) leaf_name_data.push_back(local_proxy_arp.get_name_leafdata());
    if (mroute_cache.is_set || is_set(mroute_cache.yfilter)) leaf_name_data.push_back(mroute_cache.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (proxy_arp.is_set || is_set(proxy_arp.yfilter)) leaf_name_data.push_back(proxy_arp.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.yfilter)) leaf_name_data.push_back(redirects.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address>();
        }
        return address;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "helper-address")
    {
        for(auto const & c : helper_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress>();
        c->parent = this;
        helper_address.push_back(c);
        return c;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime>();
        }
        return hold_time;
    }

    if(child_yang_name == "nbar")
    {
        if(nbar == nullptr)
        {
            nbar = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar>();
        }
        return nbar;
    }

    if(child_yang_name == "no-address")
    {
        if(no_address == nullptr)
        {
            no_address = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress>();
        }
        return no_address;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "route-cache")
    {
        if(route_cache == nullptr)
        {
            route_cache = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache>();
        }
        return route_cache;
    }

    if(child_yang_name == "route-cache-conf")
    {
        if(route_cache_conf == nullptr)
        {
            route_cache_conf = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf>();
        }
        return route_cache_conf;
    }

    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router>();
        }
        return router;
    }

    if(child_yang_name == "summary-address")
    {
        if(summary_address == nullptr)
        {
            summary_address = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress>();
        }
        return summary_address;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify>();
        }
        return verify;
    }

    if(child_yang_name == "virtual-reassembly")
    {
        if(virtual_reassembly == nullptr)
        {
            virtual_reassembly = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly>();
        }
        return virtual_reassembly;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(arp != nullptr)
    {
        children["arp"] = arp;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    for (auto const & c : helper_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    if(nbar != nullptr)
    {
        children["nbar"] = nbar;
    }

    if(no_address != nullptr)
    {
        children["no-address"] = no_address;
    }

    if(pim != nullptr)
    {
        children["pim"] = pim;
    }

    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    if(route_cache != nullptr)
    {
        children["route-cache"] = route_cache;
    }

    if(route_cache_conf != nullptr)
    {
        children["route-cache-conf"] = route_cache_conf;
    }

    if(router != nullptr)
    {
        children["router"] = router;
    }

    if(summary_address != nullptr)
    {
        children["summary-address"] = summary_address;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(verify != nullptr)
    {
        children["verify"] = verify;
    }

    if(virtual_reassembly != nullptr)
    {
        children["virtual-reassembly"] = virtual_reassembly;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admission")
    {
        admission = value;
        admission.value_namespace = name_space;
        admission.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "directed-broadcast")
    {
        directed_broadcast = value;
        directed_broadcast.value_namespace = name_space;
        directed_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp = value;
        local_proxy_arp.value_namespace = name_space;
        local_proxy_arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mroute-cache")
    {
        mroute_cache = value;
        mroute_cache.value_namespace = name_space;
        mroute_cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admission")
    {
        admission.yfilter = yfilter;
    }
    if(value_path == "directed-broadcast")
    {
        directed_broadcast.yfilter = yfilter;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp.yfilter = yfilter;
    }
    if(value_path == "mroute-cache")
    {
        mroute_cache.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp.yfilter = yfilter;
    }
    if(value_path == "redirects")
    {
        redirects.yfilter = yfilter;
    }
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "address" || name == "arp" || name == "authentication" || name == "dhcp" || name == "hello-interval" || name == "helper-address" || name == "hold-time" || name == "nbar" || name == "no-address" || name == "pim" || name == "policy" || name == "rip" || name == "route-cache" || name == "route-cache-conf" || name == "router" || name == "summary-address" || name == "tcp" || name == "verify" || name == "virtual-reassembly" || name == "vrf" || name == "admission" || name == "directed-broadcast" || name == "local-proxy-arp" || name == "mroute-cache" || name == "mtu" || name == "proxy-arp" || name == "redirects" || name == "unnumbered")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::AccessGroup()
    :
    in(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In>())
	,out(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out>())
{
    in->parent = this;
    out->parent = this;

    yang_name = "access-group"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::~AccessGroup()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::has_data() const
{
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::get_children() const
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::In()
    :
    acl(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl>())
	,common_acl(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl>())
{
    acl->parent = this;
    common_acl->parent = this;

    yang_name = "in"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::~In()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::has_data() const
{
    return (acl !=  nullptr && acl->has_data())
	|| (common_acl !=  nullptr && common_acl->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::has_operation() const
{
    return is_set(yfilter)
	|| (acl !=  nullptr && acl->has_operation())
	|| (common_acl !=  nullptr && common_acl->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl>();
        }
        return common_acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    if(common_acl != nullptr)
    {
        children["common-acl"] = common_acl;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "common-acl")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    in{YType::empty, "in"}
{

    yang_name = "acl"; yang_parent_name = "in"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl::~Acl()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl::has_data() const
{
    return acl_name.is_set
	|| in.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "in")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    in{YType::empty, "in"}
{

    yang_name = "common-acl"; yang_parent_name = "in"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl::has_data() const
{
    return common.is_set
	|| in.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.yfilter)) leaf_name_data.push_back(common.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::In::CommonAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "in")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Out()
    :
    acl(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl>())
	,common_acl(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl>())
{
    acl->parent = this;
    common_acl->parent = this;

    yang_name = "out"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::~Out()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::has_data() const
{
    return (acl !=  nullptr && acl->has_data())
	|| (common_acl !=  nullptr && common_acl->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::has_operation() const
{
    return is_set(yfilter)
	|| (acl !=  nullptr && acl->has_operation())
	|| (common_acl !=  nullptr && common_acl->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl>();
        }
        return common_acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    if(common_acl != nullptr)
    {
        children["common-acl"] = common_acl;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "common-acl")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    out{YType::empty, "out"}
{

    yang_name = "acl"; yang_parent_name = "out"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl::~Acl()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl::has_data() const
{
    return acl_name.is_set
	|| out.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "out")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    out{YType::empty, "out"}
{

    yang_name = "common-acl"; yang_parent_name = "out"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl::has_data() const
{
    return common.is_set
	|| out.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.yfilter)) leaf_name_data.push_back(common.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::AccessGroup::Out::CommonAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "out")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Address()
    :
    negotiated{YType::empty, "negotiated"}
    	,
    dhcp(nullptr) // presence node
	,primary(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary>())
{
    primary->parent = this;

    yang_name = "address"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::~Address()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::has_data() const
{
    for (std::size_t index=0; index<secondary.size(); index++)
    {
        if(secondary[index]->has_data())
            return true;
    }
    return negotiated.is_set
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (primary !=  nullptr && primary->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::has_operation() const
{
    for (std::size_t index=0; index<secondary.size(); index++)
    {
        if(secondary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(negotiated.yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (primary !=  nullptr && primary->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated.is_set || is_set(negotiated.yfilter)) leaf_name_data.push_back(negotiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "secondary")
    {
        for(auto const & c : secondary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary>();
        c->parent = this;
        secondary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(primary != nullptr)
    {
        children["primary"] = primary;
    }

    for (auto const & c : secondary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated")
    {
        negotiated = value;
        negotiated.value_namespace = name_space;
        negotiated.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated")
    {
        negotiated.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp" || name == "primary" || name == "secondary" || name == "negotiated")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::Dhcp()
    :
    hostname{YType::str, "hostname"}
    	,
    client_id(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId>())
{
    client_id->parent = this;

    yang_name = "dhcp"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::~Dhcp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::has_data() const
{
    return hostname.is_set
	|| (client_id !=  nullptr && client_id->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| (client_id !=  nullptr && client_id->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-id")
    {
        if(client_id == nullptr)
        {
            client_id = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId>();
        }
        return client_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_id != nullptr)
    {
        children["client-id"] = client_id;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-id" || name == "hostname")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId::ClientId()
    :
    fastethernet{YType::str, "FastEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    port_channel{YType::uint32, "Port-channel"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    vlan{YType::uint16, "vlan"}
{

    yang_name = "client-id"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId::~ClientId()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId::has_data() const
{
    return fastethernet.is_set
	|| fortygigabitethernet.is_set
	|| gigabitethernet.is_set
	|| port_channel.is_set
	|| tengigabitethernet.is_set
	|| vlan.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Dhcp::ClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FastEthernet" || name == "FortyGigabitEthernet" || name == "GigabitEthernet" || name == "Port-channel" || name == "TenGigabitEthernet" || name == "vlan")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary::Primary()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{

    yang_name = "primary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary::~Primary()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary::has_data() const
{
    return address.is_set
	|| mask.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary::Secondary()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "secondary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary::~Secondary()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary::has_data() const
{
    return address.is_set
	|| mask.is_set
	|| secondary.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Address::Secondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask" || name == "secondary")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Arp()
    :
    inspection(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection>())
{
    inspection->parent = this;

    yang_name = "arp"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::~Arp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::has_data() const
{
    return (inspection !=  nullptr && inspection->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::has_operation() const
{
    return is_set(yfilter)
	|| (inspection !=  nullptr && inspection->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inspection")
    {
        if(inspection == nullptr)
        {
            inspection = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection>();
        }
        return inspection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inspection != nullptr)
    {
        children["inspection"] = inspection;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inspection")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Inspection()
    :
    trust{YType::empty, "trust"}
    	,
    limit(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit>())
{
    limit->parent = this;

    yang_name = "inspection"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::~Inspection()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::has_data() const
{
    return trust.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "trust")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit::Limit()
    :
    none{YType::empty, "none"},
    rate{YType::uint32, "rate"}
{

    yang_name = "limit"; yang_parent_name = "inspection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit::~Limit()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit::has_data() const
{
    return none.is_set
	|| rate.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Arp::Inspection::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "none" || name == "rate")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Authentication()
    :
    key_chain(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain>())
	,mode(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode>())
{
    key_chain->parent = this;
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::~Authentication()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::has_data() const
{
    return (key_chain !=  nullptr && key_chain->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "mode")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain::KeyChain()
    :
    eigrp{YType::uint16, "eigrp"},
    name{YType::str, "name"}
{

    yang_name = "key-chain"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain::has_data() const
{
    return eigrp.is_set
	|| name.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "name")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode::Mode()
    :
    eigrp{YType::uint16, "eigrp"},
    md5{YType::empty, "md5"}
{

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode::~Mode()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode::has_data() const
{
    return eigrp.is_set
	|| md5.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(md5.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "md5")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Dhcp()
    :
    client(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client>())
	,relay(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay>())
	,snooping(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping>())
{
    client->parent = this;
    relay->parent = this;
    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::~Dhcp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::has_data() const
{
    return (client !=  nullptr && client->has_data())
	|| (relay !=  nullptr && relay->has_data())
	|| (snooping !=  nullptr && snooping->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (relay !=  nullptr && relay->has_operation())
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client>();
        }
        return client;
    }

    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay>();
        }
        return relay;
    }

    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(relay != nullptr)
    {
        children["relay"] = relay;
    }

    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "relay" || name == "snooping")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client::Client()
    :
    hostname{YType::str, "hostname"}
{

    yang_name = "client"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client::~Client()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client::has_data() const
{
    return hostname.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hostname")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Relay()
    :
    source_interface{YType::str, "source-interface"}
    	,
    information(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information>())
{
    information->parent = this;

    yang_name = "relay"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::~Relay()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::has_data() const
{
    return source_interface.is_set
	|| (information !=  nullptr && information->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_interface.yfilter)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.yfilter)) leaf_name_data.push_back(source_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
        source_interface.value_namespace = name_space;
        source_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-interface")
    {
        source_interface.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information" || name == "source-interface")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Information()
    :
    policy_action{YType::enumeration, "policy-action"},
    trusted{YType::empty, "trusted"}
    	,
    check_reply(nullptr) // presence node
	,option(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option>())
	,option_insert(nullptr) // presence node
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::~Information()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::has_data() const
{
    return policy_action.is_set
	|| trusted.is_set
	|| (check_reply !=  nullptr && check_reply->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (option_insert !=  nullptr && option_insert->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_action.yfilter)
	|| ydk::is_set(trusted.yfilter)
	|| (check_reply !=  nullptr && check_reply->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (option_insert !=  nullptr && option_insert->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_action.is_set || is_set(policy_action.yfilter)) leaf_name_data.push_back(policy_action.get_name_leafdata());
    if (trusted.is_set || is_set(trusted.yfilter)) leaf_name_data.push_back(trusted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "check-reply")
    {
        if(check_reply == nullptr)
        {
            check_reply = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply>();
        }
        return check_reply;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option>();
        }
        return option;
    }

    if(child_yang_name == "option-insert")
    {
        if(option_insert == nullptr)
        {
            option_insert = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert>();
        }
        return option_insert;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(check_reply != nullptr)
    {
        children["check-reply"] = check_reply;
    }

    if(option != nullptr)
    {
        children["option"] = option;
    }

    if(option_insert != nullptr)
    {
        children["option-insert"] = option_insert;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "check-reply" || name == "option" || name == "option-insert" || name == "policy-action" || name == "trusted")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply::CheckReply()
    :
    none{YType::empty, "none"}
{

    yang_name = "check-reply"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply::~CheckReply()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply::has_data() const
{
    return none.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "check-reply";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::CheckReply::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "none")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option::Option()
    :
    subscriber_id{YType::str, "subscriber-id"}
{

    yang_name = "option"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option::~Option()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option::has_data() const
{
    return subscriber_id.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber_id.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_id.is_set || is_set(subscriber_id.yfilter)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
        subscriber_id.value_namespace = name_space;
        subscriber_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-id")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert::OptionInsert()
    :
    none{YType::empty, "none"}
{

    yang_name = "option-insert"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert::~OptionInsert()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert::has_data() const
{
    return none.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-insert";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::OptionInsert::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "none")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Snooping()
    :
    trust{YType::empty, "trust"}
    	,
    limit(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::~Snooping()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::has_data() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return trust.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::has_operation() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(trust.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Limit>();
        }
        return limit;
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
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_>();
        c->parent = this;
        vlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    for (auto const & c : vlan)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "vlan" || name == "trust")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{

    yang_name = "limit"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Vlan_()
    :
    id{YType::uint16, "id"}
    	,
    information(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information>())
{
    information->parent = this;

    yang_name = "vlan"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::~Vlan_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::has_data() const
{
    return id.is_set
	|| (information !=  nullptr && information->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information" || name == "id")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Information()
    :
    option(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option>())
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::~Information()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::has_data() const
{
    return (option !=  nullptr && option->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::has_operation() const
{
    return is_set(yfilter)
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(option != nullptr)
    {
        children["option"] = option;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::Option()
    :
    format_type(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType>())
{
    format_type->parent = this;

    yang_name = "option"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::~Option()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::has_data() const
{
    return (format_type !=  nullptr && format_type->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::has_operation() const
{
    return is_set(yfilter)
	|| (format_type !=  nullptr && format_type->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format-type")
    {
        if(format_type == nullptr)
        {
            format_type = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType>();
        }
        return format_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(format_type != nullptr)
    {
        children["format-type"] = format_type;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format-type")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Metric::igp {0, "igp"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::Metric::te {1, "te"};

const Enum::YLeaf Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::Adjacency::protected_ {0, "protected"};
const Enum::YLeaf Native::Interface::VirtualTemplate::Tunnel::Mpls::TrafficEng::PathSelection::SegmentRouting::Adjacency::unprotected {1, "unprotected"};

const Enum::YLeaf Native::Interface::Vlan::IfState::nhrp {0, "nhrp"};

const Enum::YLeaf Native::Interface::Vlan::ServiceInsertion::waas {0, "waas"};

const Enum::YLeaf Native::Interface::Vlan::IfState_::nhrp {0, "nhrp"};

const Enum::YLeaf Native::Interface::Vlan::ServiceInsertion_::waas {0, "waas"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::HostMode::multi_auth {0, "multi-auth"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::HostMode::multi_domain {1, "multi-domain"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::HostMode::multi_host {2, "multi-host"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession::HostMode::single_host {3, "single-host"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::HostMode::multi_auth {0, "multi-auth"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::HostMode::multi_domain {1, "multi-domain"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::HostMode::multi_host {2, "multi-host"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesAccessSession_::HostMode::single_host {3, "single-host"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::Failure::never {0, "never"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Delay::SecondaryDisable::never {0, "never"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::Kickin::never {0, "never"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesBackup::Load::Kickout::never {0, "never"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Delay::Failure::never {0, "never"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Delay::SecondaryDisable::never {0, "never"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Load::Kickin::never {0, "never"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesBackup_::Load::Kickout::never {0, "never"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::Receive::desired {0, "desired"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::Receive::off {1, "off"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::Receive::on {2, "on"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::Send::desired {0, "desired"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::Send::off {1, "off"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol::Send::on {2, "on"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_::Receive::desired {0, "desired"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_::Receive::off {1, "off"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_::Receive::on {2, "on"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_::Send::desired {0, "desired"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_::Send::off {1, "off"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesFlowcontrol_::Send::on {2, "on"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::Direction::in {0, "in"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue::Direction::out {1, "out"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue_::Direction::in {0, "in"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesHoldQueue_::Direction::out {1, "out"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos::Trust::Device::cisco_phone {0, "cisco-phone"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesInterfaceQos_::Trust::Device::cisco_phone {0, "cisco-phone"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::PolicyAction::drop {0, "drop"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::PolicyAction::encapsulate {1, "encapsulate"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::PolicyAction::keep {2, "keep"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Relay::Information::PolicyAction::replace {3, "replace"};


}
}

