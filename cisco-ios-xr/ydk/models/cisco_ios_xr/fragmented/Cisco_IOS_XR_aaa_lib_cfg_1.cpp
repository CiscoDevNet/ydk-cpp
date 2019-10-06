
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_aaa_lib_cfg_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_aaa_lib_cfg {

Aaa::Diameter::DiameterTimer::DiameterTimer()
    :
    transaction{YType::uint32, "transaction"},
    connection{YType::uint32, "connection"},
    watchdog{YType::uint32, "watchdog"}
{

    yang_name = "diameter-timer"; yang_parent_name = "diameter"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Diameter::DiameterTimer::~DiameterTimer()
{
}

bool Aaa::Diameter::DiameterTimer::has_data() const
{
    if (is_presence_container) return true;
    return transaction.is_set
	|| connection.is_set
	|| watchdog.is_set;
}

bool Aaa::Diameter::DiameterTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transaction.yfilter)
	|| ydk::is_set(connection.yfilter)
	|| ydk::is_set(watchdog.yfilter);
}

std::string Aaa::Diameter::DiameterTimer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-diameter-cfg:diameter/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Diameter::DiameterTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diameter-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Diameter::DiameterTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transaction.is_set || is_set(transaction.yfilter)) leaf_name_data.push_back(transaction.get_name_leafdata());
    if (connection.is_set || is_set(connection.yfilter)) leaf_name_data.push_back(connection.get_name_leafdata());
    if (watchdog.is_set || is_set(watchdog.yfilter)) leaf_name_data.push_back(watchdog.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Diameter::DiameterTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Diameter::DiameterTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Diameter::DiameterTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transaction")
    {
        transaction = value;
        transaction.value_namespace = name_space;
        transaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection")
    {
        connection = value;
        connection.value_namespace = name_space;
        connection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "watchdog")
    {
        watchdog = value;
        watchdog.value_namespace = name_space;
        watchdog.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Diameter::DiameterTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transaction")
    {
        transaction.yfilter = yfilter;
    }
    if(value_path == "connection")
    {
        connection.yfilter = yfilter;
    }
    if(value_path == "watchdog")
    {
        watchdog.yfilter = yfilter;
    }
}

bool Aaa::Diameter::DiameterTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transaction" || name == "connection" || name == "watchdog")
        return true;
    return false;
}

Aaa::Diameter::Vendor::Vendor()
    :
    supported(std::make_shared<Aaa::Diameter::Vendor::Supported>())
{
    supported->parent = this;

    yang_name = "vendor"; yang_parent_name = "diameter"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Diameter::Vendor::~Vendor()
{
}

bool Aaa::Diameter::Vendor::has_data() const
{
    if (is_presence_container) return true;
    return (supported !=  nullptr && supported->has_data());
}

bool Aaa::Diameter::Vendor::has_operation() const
{
    return is_set(yfilter)
	|| (supported !=  nullptr && supported->has_operation());
}

std::string Aaa::Diameter::Vendor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-diameter-cfg:diameter/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Diameter::Vendor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vendor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Diameter::Vendor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Diameter::Vendor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "supported")
    {
        if(supported == nullptr)
        {
            supported = std::make_shared<Aaa::Diameter::Vendor::Supported>();
        }
        return supported;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Diameter::Vendor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(supported != nullptr)
    {
        _children["supported"] = supported;
    }

    return _children;
}

void Aaa::Diameter::Vendor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Aaa::Diameter::Vendor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Aaa::Diameter::Vendor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supported")
        return true;
    return false;
}

Aaa::Diameter::Vendor::Supported::Supported()
    :
    cisco{YType::boolean, "cisco"},
    threegpp{YType::boolean, "threegpp"},
    etsi{YType::boolean, "etsi"},
    vodafone{YType::boolean, "vodafone"}
{

    yang_name = "supported"; yang_parent_name = "vendor"; is_top_level_class = false; has_list_ancestor = false; 
}

Aaa::Diameter::Vendor::Supported::~Supported()
{
}

bool Aaa::Diameter::Vendor::Supported::has_data() const
{
    if (is_presence_container) return true;
    return cisco.is_set
	|| threegpp.is_set
	|| etsi.is_set
	|| vodafone.is_set;
}

bool Aaa::Diameter::Vendor::Supported::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cisco.yfilter)
	|| ydk::is_set(threegpp.yfilter)
	|| ydk::is_set(etsi.yfilter)
	|| ydk::is_set(vodafone.yfilter);
}

std::string Aaa::Diameter::Vendor::Supported::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-lib-cfg:aaa/Cisco-IOS-XR-aaa-diameter-cfg:diameter/vendor/" << get_segment_path();
    return path_buffer.str();
}

std::string Aaa::Diameter::Vendor::Supported::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supported";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Aaa::Diameter::Vendor::Supported::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cisco.is_set || is_set(cisco.yfilter)) leaf_name_data.push_back(cisco.get_name_leafdata());
    if (threegpp.is_set || is_set(threegpp.yfilter)) leaf_name_data.push_back(threegpp.get_name_leafdata());
    if (etsi.is_set || is_set(etsi.yfilter)) leaf_name_data.push_back(etsi.get_name_leafdata());
    if (vodafone.is_set || is_set(vodafone.yfilter)) leaf_name_data.push_back(vodafone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Aaa::Diameter::Vendor::Supported::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Aaa::Diameter::Vendor::Supported::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Aaa::Diameter::Vendor::Supported::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cisco")
    {
        cisco = value;
        cisco.value_namespace = name_space;
        cisco.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threegpp")
    {
        threegpp = value;
        threegpp.value_namespace = name_space;
        threegpp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etsi")
    {
        etsi = value;
        etsi.value_namespace = name_space;
        etsi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vodafone")
    {
        vodafone = value;
        vodafone.value_namespace = name_space;
        vodafone.value_namespace_prefix = name_space_prefix;
    }
}

void Aaa::Diameter::Vendor::Supported::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cisco")
    {
        cisco.yfilter = yfilter;
    }
    if(value_path == "threegpp")
    {
        threegpp.yfilter = yfilter;
    }
    if(value_path == "etsi")
    {
        etsi.yfilter = yfilter;
    }
    if(value_path == "vodafone")
    {
        vodafone.yfilter = yfilter;
    }
}

bool Aaa::Diameter::Vendor::Supported::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco" || name == "threegpp" || name == "etsi" || name == "vodafone")
        return true;
    return false;
}


}
}

