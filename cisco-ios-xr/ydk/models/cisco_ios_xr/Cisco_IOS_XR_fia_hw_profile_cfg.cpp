
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_fia_hw_profile_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_fia_hw_profile_cfg {

HwModuleProfileConfig::HwModuleProfileConfig()
    :
    profile(std::make_shared<HwModuleProfileConfig::Profile>())
	,fib_scale(std::make_shared<HwModuleProfileConfig::FibScale>())
	,tcam(std::make_shared<HwModuleProfileConfig::Tcam>())
{
    profile->parent = this;
    fib_scale->parent = this;
    tcam->parent = this;

    yang_name = "hw-module-profile-config"; yang_parent_name = "Cisco-IOS-XR-fia-hw-profile-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

HwModuleProfileConfig::~HwModuleProfileConfig()
{
}

bool HwModuleProfileConfig::has_data() const
{
    return (profile !=  nullptr && profile->has_data())
	|| (fib_scale !=  nullptr && fib_scale->has_data())
	|| (tcam !=  nullptr && tcam->has_data());
}

bool HwModuleProfileConfig::has_operation() const
{
    return is_set(yfilter)
	|| (profile !=  nullptr && profile->has_operation())
	|| (fib_scale !=  nullptr && fib_scale->has_operation())
	|| (tcam !=  nullptr && tcam->has_operation());
}

std::string HwModuleProfileConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<HwModuleProfileConfig::Profile>();
        }
        return profile;
    }

    if(child_yang_name == "fib-scale")
    {
        if(fib_scale == nullptr)
        {
            fib_scale = std::make_shared<HwModuleProfileConfig::FibScale>();
        }
        return fib_scale;
    }

    if(child_yang_name == "tcam")
    {
        if(tcam == nullptr)
        {
            tcam = std::make_shared<HwModuleProfileConfig::Tcam>();
        }
        return tcam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(profile != nullptr)
    {
        children["profile"] = profile;
    }

    if(fib_scale != nullptr)
    {
        children["fib-scale"] = fib_scale;
    }

    if(tcam != nullptr)
    {
        children["tcam"] = tcam;
    }

    return children;
}

void HwModuleProfileConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> HwModuleProfileConfig::clone_ptr() const
{
    return std::make_shared<HwModuleProfileConfig>();
}

std::string HwModuleProfileConfig::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string HwModuleProfileConfig::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function HwModuleProfileConfig::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> HwModuleProfileConfig::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool HwModuleProfileConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile" || name == "fib-scale" || name == "tcam")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Profile()
    :
    tcam_table(std::make_shared<HwModuleProfileConfig::Profile::TcamTable>())
	,load_balance(std::make_shared<HwModuleProfileConfig::Profile::LoadBalance>())
	,stats(std::make_shared<HwModuleProfileConfig::Profile::Stats>())
	,netflows(std::make_shared<HwModuleProfileConfig::Profile::Netflows>())
	,profile_acl(std::make_shared<HwModuleProfileConfig::Profile::ProfileAcl>())
	,profile_tcam(std::make_shared<HwModuleProfileConfig::Profile::ProfileTcam>())
	,qos(std::make_shared<HwModuleProfileConfig::Profile::Qos>())
{
    tcam_table->parent = this;
    load_balance->parent = this;
    stats->parent = this;
    netflows->parent = this;
    profile_acl->parent = this;
    profile_tcam->parent = this;
    qos->parent = this;

    yang_name = "profile"; yang_parent_name = "hw-module-profile-config"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::~Profile()
{
}

bool HwModuleProfileConfig::Profile::has_data() const
{
    return (tcam_table !=  nullptr && tcam_table->has_data())
	|| (load_balance !=  nullptr && load_balance->has_data())
	|| (stats !=  nullptr && stats->has_data())
	|| (netflows !=  nullptr && netflows->has_data())
	|| (profile_acl !=  nullptr && profile_acl->has_data())
	|| (profile_tcam !=  nullptr && profile_tcam->has_data())
	|| (qos !=  nullptr && qos->has_data());
}

bool HwModuleProfileConfig::Profile::has_operation() const
{
    return is_set(yfilter)
	|| (tcam_table !=  nullptr && tcam_table->has_operation())
	|| (load_balance !=  nullptr && load_balance->has_operation())
	|| (stats !=  nullptr && stats->has_operation())
	|| (netflows !=  nullptr && netflows->has_operation())
	|| (profile_acl !=  nullptr && profile_acl->has_operation())
	|| (profile_tcam !=  nullptr && profile_tcam->has_operation())
	|| (qos !=  nullptr && qos->has_operation());
}

std::string HwModuleProfileConfig::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tcam-table")
    {
        if(tcam_table == nullptr)
        {
            tcam_table = std::make_shared<HwModuleProfileConfig::Profile::TcamTable>();
        }
        return tcam_table;
    }

    if(child_yang_name == "load-balance")
    {
        if(load_balance == nullptr)
        {
            load_balance = std::make_shared<HwModuleProfileConfig::Profile::LoadBalance>();
        }
        return load_balance;
    }

    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<HwModuleProfileConfig::Profile::Stats>();
        }
        return stats;
    }

    if(child_yang_name == "netflows")
    {
        if(netflows == nullptr)
        {
            netflows = std::make_shared<HwModuleProfileConfig::Profile::Netflows>();
        }
        return netflows;
    }

    if(child_yang_name == "profile-acl")
    {
        if(profile_acl == nullptr)
        {
            profile_acl = std::make_shared<HwModuleProfileConfig::Profile::ProfileAcl>();
        }
        return profile_acl;
    }

    if(child_yang_name == "profile-tcam")
    {
        if(profile_tcam == nullptr)
        {
            profile_tcam = std::make_shared<HwModuleProfileConfig::Profile::ProfileTcam>();
        }
        return profile_tcam;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<HwModuleProfileConfig::Profile::Qos>();
        }
        return qos;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tcam_table != nullptr)
    {
        children["tcam-table"] = tcam_table;
    }

    if(load_balance != nullptr)
    {
        children["load-balance"] = load_balance;
    }

    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    if(netflows != nullptr)
    {
        children["netflows"] = netflows;
    }

    if(profile_acl != nullptr)
    {
        children["profile-acl"] = profile_acl;
    }

    if(profile_tcam != nullptr)
    {
        children["profile-tcam"] = profile_tcam;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    return children;
}

void HwModuleProfileConfig::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tcam-table" || name == "load-balance" || name == "stats" || name == "netflows" || name == "profile-acl" || name == "profile-tcam" || name == "qos")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::TcamTable::TcamTable()
    :
    fib_table(std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable>())
{
    fib_table->parent = this;

    yang_name = "tcam-table"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::TcamTable::~TcamTable()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::has_data() const
{
    return (fib_table !=  nullptr && fib_table->has_data());
}

bool HwModuleProfileConfig::Profile::TcamTable::has_operation() const
{
    return is_set(yfilter)
	|| (fib_table !=  nullptr && fib_table->has_operation());
}

std::string HwModuleProfileConfig::Profile::TcamTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::TcamTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::TcamTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::TcamTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fib-table")
    {
        if(fib_table == nullptr)
        {
            fib_table = std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable>();
        }
        return fib_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::TcamTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fib_table != nullptr)
    {
        children["fib-table"] = fib_table;
    }

    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Profile::TcamTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Profile::TcamTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-table")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::FibTable()
    :
    ipv4_address(std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address>())
	,ipv6_address(std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address>())
{
    ipv4_address->parent = this;
    ipv6_address->parent = this;

    yang_name = "fib-table"; yang_parent_name = "tcam-table"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::~FibTable()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::has_data() const
{
    return (ipv4_address !=  nullptr && ipv4_address->has_data())
	|| (ipv6_address !=  nullptr && ipv6_address->has_data());
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4_address !=  nullptr && ipv4_address->has_operation())
	|| (ipv6_address !=  nullptr && ipv6_address->has_operation());
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::TcamTable::FibTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::TcamTable::FibTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-address")
    {
        if(ipv4_address == nullptr)
        {
            ipv4_address = std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address>();
        }
        return ipv4_address;
    }

    if(child_yang_name == "ipv6-address")
    {
        if(ipv6_address == nullptr)
        {
            ipv6_address = std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address>();
        }
        return ipv6_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::TcamTable::FibTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4_address != nullptr)
    {
        children["ipv4-address"] = ipv4_address;
    }

    if(ipv6_address != nullptr)
    {
        children["ipv6-address"] = ipv6_address;
    }

    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Address()
    :
    ipv4_unicast(std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast>())
{
    ipv4_unicast->parent = this;

    yang_name = "ipv4-address"; yang_parent_name = "fib-table"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::~Ipv4Address()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::has_data() const
{
    return (ipv4_unicast !=  nullptr && ipv4_unicast->has_data());
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4_unicast !=  nullptr && ipv4_unicast->has_operation());
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unicast")
    {
        if(ipv4_unicast == nullptr)
        {
            ipv4_unicast = std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast>();
        }
        return ipv4_unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4_unicast != nullptr)
    {
        children["ipv4-unicast"] = ipv4_unicast;
    }

    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unicast")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4Unicast()
    :
    ipv4_unicast_percent{YType::uint32, "ipv4-unicast-percent"}
    	,
    ipv4_unicast_prefix_lengths(std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths>())
{
    ipv4_unicast_prefix_lengths->parent = this;

    yang_name = "ipv4-unicast"; yang_parent_name = "ipv4-address"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::~Ipv4Unicast()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::has_data() const
{
    return ipv4_unicast_percent.is_set
	|| (ipv4_unicast_prefix_lengths !=  nullptr && ipv4_unicast_prefix_lengths->has_data());
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_unicast_percent.yfilter)
	|| (ipv4_unicast_prefix_lengths !=  nullptr && ipv4_unicast_prefix_lengths->has_operation());
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/ipv4-address/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_unicast_percent.is_set || is_set(ipv4_unicast_percent.yfilter)) leaf_name_data.push_back(ipv4_unicast_percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unicast-prefix-lengths")
    {
        if(ipv4_unicast_prefix_lengths == nullptr)
        {
            ipv4_unicast_prefix_lengths = std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths>();
        }
        return ipv4_unicast_prefix_lengths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4_unicast_prefix_lengths != nullptr)
    {
        children["ipv4-unicast-prefix-lengths"] = ipv4_unicast_prefix_lengths;
    }

    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-unicast-percent")
    {
        ipv4_unicast_percent = value;
        ipv4_unicast_percent.value_namespace = name_space;
        ipv4_unicast_percent.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-unicast-percent")
    {
        ipv4_unicast_percent.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unicast-prefix-lengths" || name == "ipv4-unicast-percent")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLengths()
{

    yang_name = "ipv4-unicast-prefix-lengths"; yang_parent_name = "ipv4-unicast"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::~Ipv4UnicastPrefixLengths()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::has_data() const
{
    for (std::size_t index=0; index<ipv4_unicast_prefix_length.size(); index++)
    {
        if(ipv4_unicast_prefix_length[index]->has_data())
            return true;
    }
    return false;
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::has_operation() const
{
    for (std::size_t index=0; index<ipv4_unicast_prefix_length.size(); index++)
    {
        if(ipv4_unicast_prefix_length[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/ipv4-address/ipv4-unicast/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast-prefix-lengths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unicast-prefix-length")
    {
        auto c = std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength>();
        c->parent = this;
        ipv4_unicast_prefix_length.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ipv4_unicast_prefix_length)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unicast-prefix-length")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::Ipv4UnicastPrefixLength()
    :
    prefix_length{YType::uint32, "prefix-length"},
    ipv4_unicast_prefix_percent{YType::str, "ipv4-unicast-prefix-percent"}
{

    yang_name = "ipv4-unicast-prefix-length"; yang_parent_name = "ipv4-unicast-prefix-lengths"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::~Ipv4UnicastPrefixLength()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::has_data() const
{
    return prefix_length.is_set
	|| ipv4_unicast_prefix_percent.is_set;
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(ipv4_unicast_prefix_percent.yfilter);
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/ipv4-address/ipv4-unicast/ipv4-unicast-prefix-lengths/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast-prefix-length" <<"[prefix-length='" <<prefix_length <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (ipv4_unicast_prefix_percent.is_set || is_set(ipv4_unicast_prefix_percent.yfilter)) leaf_name_data.push_back(ipv4_unicast_prefix_percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-unicast-prefix-percent")
    {
        ipv4_unicast_prefix_percent = value;
        ipv4_unicast_prefix_percent.value_namespace = name_space;
        ipv4_unicast_prefix_percent.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "ipv4-unicast-prefix-percent")
    {
        ipv4_unicast_prefix_percent.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-length" || name == "ipv4-unicast-prefix-percent")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Address()
    :
    ipv6_unicast(std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast>())
{
    ipv6_unicast->parent = this;

    yang_name = "ipv6-address"; yang_parent_name = "fib-table"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::~Ipv6Address()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::has_data() const
{
    return (ipv6_unicast !=  nullptr && ipv6_unicast->has_data());
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::has_operation() const
{
    return is_set(yfilter)
	|| (ipv6_unicast !=  nullptr && ipv6_unicast->has_operation());
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-unicast")
    {
        if(ipv6_unicast == nullptr)
        {
            ipv6_unicast = std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast>();
        }
        return ipv6_unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv6_unicast != nullptr)
    {
        children["ipv6-unicast"] = ipv6_unicast;
    }

    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-unicast")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6Unicast()
    :
    ipv6_unicast_percent{YType::uint32, "ipv6-unicast-percent"}
    	,
    ipv6_unicast_prefix_lengths(std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths>())
{
    ipv6_unicast_prefix_lengths->parent = this;

    yang_name = "ipv6-unicast"; yang_parent_name = "ipv6-address"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::~Ipv6Unicast()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::has_data() const
{
    return ipv6_unicast_percent.is_set
	|| (ipv6_unicast_prefix_lengths !=  nullptr && ipv6_unicast_prefix_lengths->has_data());
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_unicast_percent.yfilter)
	|| (ipv6_unicast_prefix_lengths !=  nullptr && ipv6_unicast_prefix_lengths->has_operation());
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/ipv6-address/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_unicast_percent.is_set || is_set(ipv6_unicast_percent.yfilter)) leaf_name_data.push_back(ipv6_unicast_percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-unicast-prefix-lengths")
    {
        if(ipv6_unicast_prefix_lengths == nullptr)
        {
            ipv6_unicast_prefix_lengths = std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths>();
        }
        return ipv6_unicast_prefix_lengths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv6_unicast_prefix_lengths != nullptr)
    {
        children["ipv6-unicast-prefix-lengths"] = ipv6_unicast_prefix_lengths;
    }

    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-unicast-percent")
    {
        ipv6_unicast_percent = value;
        ipv6_unicast_percent.value_namespace = name_space;
        ipv6_unicast_percent.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-unicast-percent")
    {
        ipv6_unicast_percent.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-unicast-prefix-lengths" || name == "ipv6-unicast-percent")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLengths()
{

    yang_name = "ipv6-unicast-prefix-lengths"; yang_parent_name = "ipv6-unicast"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::~Ipv6UnicastPrefixLengths()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::has_data() const
{
    for (std::size_t index=0; index<ipv6_unicast_prefix_length.size(); index++)
    {
        if(ipv6_unicast_prefix_length[index]->has_data())
            return true;
    }
    return false;
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::has_operation() const
{
    for (std::size_t index=0; index<ipv6_unicast_prefix_length.size(); index++)
    {
        if(ipv6_unicast_prefix_length[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/ipv6-address/ipv6-unicast/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-unicast-prefix-lengths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-unicast-prefix-length")
    {
        auto c = std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength>();
        c->parent = this;
        ipv6_unicast_prefix_length.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ipv6_unicast_prefix_length)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-unicast-prefix-length")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::Ipv6UnicastPrefixLength()
    :
    prefix_length{YType::uint32, "prefix-length"},
    ipv6_unicast_prefix_percent{YType::str, "ipv6-unicast-prefix-percent"}
{

    yang_name = "ipv6-unicast-prefix-length"; yang_parent_name = "ipv6-unicast-prefix-lengths"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::~Ipv6UnicastPrefixLength()
{
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::has_data() const
{
    return prefix_length.is_set
	|| ipv6_unicast_prefix_percent.is_set;
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(ipv6_unicast_prefix_percent.yfilter);
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/ipv6-address/ipv6-unicast/ipv6-unicast-prefix-lengths/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-unicast-prefix-length" <<"[prefix-length='" <<prefix_length <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (ipv6_unicast_prefix_percent.is_set || is_set(ipv6_unicast_prefix_percent.yfilter)) leaf_name_data.push_back(ipv6_unicast_prefix_percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-unicast-prefix-percent")
    {
        ipv6_unicast_prefix_percent = value;
        ipv6_unicast_prefix_percent.value_namespace = name_space;
        ipv6_unicast_prefix_percent.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "ipv6-unicast-prefix-percent")
    {
        ipv6_unicast_prefix_percent.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-length" || name == "ipv6-unicast-prefix-percent")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::LoadBalance::LoadBalance()
    :
    load_balance_profile{YType::int32, "load-balance-profile"}
{

    yang_name = "load-balance"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::LoadBalance::~LoadBalance()
{
}

bool HwModuleProfileConfig::Profile::LoadBalance::has_data() const
{
    return load_balance_profile.is_set;
}

bool HwModuleProfileConfig::Profile::LoadBalance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_balance_profile.yfilter);
}

std::string HwModuleProfileConfig::Profile::LoadBalance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::LoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::LoadBalance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_balance_profile.is_set || is_set(load_balance_profile.yfilter)) leaf_name_data.push_back(load_balance_profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::LoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::LoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HwModuleProfileConfig::Profile::LoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-balance-profile")
    {
        load_balance_profile = value;
        load_balance_profile.value_namespace = name_space;
        load_balance_profile.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::LoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-balance-profile")
    {
        load_balance_profile.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::LoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-balance-profile")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Stats::Stats()
    :
    counter_profile{YType::int32, "counter-profile"}
{

    yang_name = "stats"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::Stats::~Stats()
{
}

bool HwModuleProfileConfig::Profile::Stats::has_data() const
{
    return counter_profile.is_set;
}

bool HwModuleProfileConfig::Profile::Stats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(counter_profile.yfilter);
}

std::string HwModuleProfileConfig::Profile::Stats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::Stats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (counter_profile.is_set || is_set(counter_profile.yfilter)) leaf_name_data.push_back(counter_profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HwModuleProfileConfig::Profile::Stats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "counter-profile")
    {
        counter_profile = value;
        counter_profile.value_namespace = name_space;
        counter_profile.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::Stats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "counter-profile")
    {
        counter_profile.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::Stats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "counter-profile")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Netflows::Netflows()
{

    yang_name = "netflows"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::Netflows::~Netflows()
{
}

bool HwModuleProfileConfig::Profile::Netflows::has_data() const
{
    for (std::size_t index=0; index<netflow.size(); index++)
    {
        if(netflow[index]->has_data())
            return true;
    }
    return false;
}

bool HwModuleProfileConfig::Profile::Netflows::has_operation() const
{
    for (std::size_t index=0; index<netflow.size(); index++)
    {
        if(netflow[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HwModuleProfileConfig::Profile::Netflows::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::Netflows::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netflows";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::Netflows::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::Netflows::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "netflow")
    {
        auto c = std::make_shared<HwModuleProfileConfig::Profile::Netflows::Netflow>();
        c->parent = this;
        netflow.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::Netflows::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : netflow)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HwModuleProfileConfig::Profile::Netflows::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Profile::Netflows::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Profile::Netflows::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "netflow")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Netflows::Netflow::Netflow()
    :
    ipfix315_enable{YType::str, "ipfix315-enable"},
    location_string{YType::str, "location-string"},
    location_id{YType::int32, "location-id"},
    enable_val{YType::int32, "enable-val"}
{

    yang_name = "netflow"; yang_parent_name = "netflows"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::Netflows::Netflow::~Netflow()
{
}

bool HwModuleProfileConfig::Profile::Netflows::Netflow::has_data() const
{
    return ipfix315_enable.is_set
	|| location_string.is_set
	|| location_id.is_set
	|| enable_val.is_set;
}

bool HwModuleProfileConfig::Profile::Netflows::Netflow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipfix315_enable.yfilter)
	|| ydk::is_set(location_string.yfilter)
	|| ydk::is_set(location_id.yfilter)
	|| ydk::is_set(enable_val.yfilter);
}

std::string HwModuleProfileConfig::Profile::Netflows::Netflow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/netflows/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::Netflows::Netflow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "netflow" <<"[ipfix315-enable='" <<ipfix315_enable <<"']" <<"[location-string='" <<location_string <<"']" <<"[location-id='" <<location_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::Netflows::Netflow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipfix315_enable.is_set || is_set(ipfix315_enable.yfilter)) leaf_name_data.push_back(ipfix315_enable.get_name_leafdata());
    if (location_string.is_set || is_set(location_string.yfilter)) leaf_name_data.push_back(location_string.get_name_leafdata());
    if (location_id.is_set || is_set(location_id.yfilter)) leaf_name_data.push_back(location_id.get_name_leafdata());
    if (enable_val.is_set || is_set(enable_val.yfilter)) leaf_name_data.push_back(enable_val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::Netflows::Netflow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::Netflows::Netflow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HwModuleProfileConfig::Profile::Netflows::Netflow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipfix315-enable")
    {
        ipfix315_enable = value;
        ipfix315_enable.value_namespace = name_space;
        ipfix315_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location-string")
    {
        location_string = value;
        location_string.value_namespace = name_space;
        location_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location-id")
    {
        location_id = value;
        location_id.value_namespace = name_space;
        location_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-val")
    {
        enable_val = value;
        enable_val.value_namespace = name_space;
        enable_val.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::Netflows::Netflow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipfix315-enable")
    {
        ipfix315_enable.yfilter = yfilter;
    }
    if(value_path == "location-string")
    {
        location_string.yfilter = yfilter;
    }
    if(value_path == "location-id")
    {
        location_id.yfilter = yfilter;
    }
    if(value_path == "enable-val")
    {
        enable_val.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::Netflows::Netflow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipfix315-enable" || name == "location-string" || name == "location-id" || name == "enable-val")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::ProfileAcl::ProfileAcl()
    :
    egress{YType::boolean, "egress"}
{

    yang_name = "profile-acl"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::ProfileAcl::~ProfileAcl()
{
}

bool HwModuleProfileConfig::Profile::ProfileAcl::has_data() const
{
    return egress.is_set;
}

bool HwModuleProfileConfig::Profile::ProfileAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(egress.yfilter);
}

std::string HwModuleProfileConfig::Profile::ProfileAcl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::ProfileAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::ProfileAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress.is_set || is_set(egress.yfilter)) leaf_name_data.push_back(egress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::ProfileAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::ProfileAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HwModuleProfileConfig::Profile::ProfileAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "egress")
    {
        egress = value;
        egress.value_namespace = name_space;
        egress.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::ProfileAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "egress")
    {
        egress.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::ProfileAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "egress")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::ProfileTcam::ProfileTcam()
    :
    key_format(std::make_shared<HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat>())
{
    key_format->parent = this;

    yang_name = "profile-tcam"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::ProfileTcam::~ProfileTcam()
{
}

bool HwModuleProfileConfig::Profile::ProfileTcam::has_data() const
{
    return (key_format !=  nullptr && key_format->has_data());
}

bool HwModuleProfileConfig::Profile::ProfileTcam::has_operation() const
{
    return is_set(yfilter)
	|| (key_format !=  nullptr && key_format->has_operation());
}

std::string HwModuleProfileConfig::Profile::ProfileTcam::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::ProfileTcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile-tcam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::ProfileTcam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::ProfileTcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-format")
    {
        if(key_format == nullptr)
        {
            key_format = std::make_shared<HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat>();
        }
        return key_format;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::ProfileTcam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(key_format != nullptr)
    {
        children["key-format"] = key_format;
    }

    return children;
}

void HwModuleProfileConfig::Profile::ProfileTcam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Profile::ProfileTcam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Profile::ProfileTcam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-format")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::KeyFormat()
    :
    acl_tables(std::make_shared<HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables>())
{
    acl_tables->parent = this;

    yang_name = "key-format"; yang_parent_name = "profile-tcam"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::~KeyFormat()
{
}

bool HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::has_data() const
{
    return (acl_tables !=  nullptr && acl_tables->has_data());
}

bool HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::has_operation() const
{
    return is_set(yfilter)
	|| (acl_tables !=  nullptr && acl_tables->has_operation());
}

std::string HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/profile-tcam/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-format";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-tables")
    {
        if(acl_tables == nullptr)
        {
            acl_tables = std::make_shared<HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables>();
        }
        return acl_tables;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(acl_tables != nullptr)
    {
        children["acl-tables"] = acl_tables;
    }

    return children;
}

void HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-tables")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables::AclTables()
{

    yang_name = "acl-tables"; yang_parent_name = "key-format"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables::~AclTables()
{
}

bool HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables::has_data() const
{
    for (std::size_t index=0; index<acl_table.size(); index++)
    {
        if(acl_table[index]->has_data())
            return true;
    }
    return false;
}

bool HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables::has_operation() const
{
    for (std::size_t index=0; index<acl_table.size(); index++)
    {
        if(acl_table[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/profile-tcam/key-format/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-tables";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl-table")
    {
        auto c = std::make_shared<HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables::AclTable>();
        c->parent = this;
        acl_table.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : acl_table)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-table")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables::AclTable::AclTable()
    :
    address_family{YType::str, "address-family"},
    location_string{YType::str, "location-string"},
    location_id{YType::int32, "location-id"},
    source_addr{YType::int32, "source-addr"},
    destination_addr{YType::int32, "destination-addr"},
    source_port{YType::int32, "source-port"},
    dest_port{YType::int32, "dest-port"},
    prot_type{YType::int32, "prot-type"},
    tcp_flag{YType::int32, "tcp-flag"},
    pack_len{YType::int32, "pack-len"},
    frag_bit{YType::int32, "frag-bit"},
    precedence{YType::int32, "precedence"},
    port_range{YType::int32, "port-range"},
    udf1{YType::str, "udf1"},
    udf2{YType::str, "udf2"},
    udf3{YType::str, "udf3"},
    udf4{YType::str, "udf4"},
    udf5{YType::str, "udf5"},
    udf6{YType::str, "udf6"},
    udf7{YType::str, "udf7"},
    udf8{YType::str, "udf8"},
    en_capture{YType::int32, "en-capture"},
    en_ttl{YType::int32, "en-ttl"},
    en_match{YType::int32, "en-match"},
    en_share_acl{YType::int32, "en-share-acl"}
{

    yang_name = "acl-table"; yang_parent_name = "acl-tables"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables::AclTable::~AclTable()
{
}

bool HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables::AclTable::has_data() const
{
    return address_family.is_set
	|| location_string.is_set
	|| location_id.is_set
	|| source_addr.is_set
	|| destination_addr.is_set
	|| source_port.is_set
	|| dest_port.is_set
	|| prot_type.is_set
	|| tcp_flag.is_set
	|| pack_len.is_set
	|| frag_bit.is_set
	|| precedence.is_set
	|| port_range.is_set
	|| udf1.is_set
	|| udf2.is_set
	|| udf3.is_set
	|| udf4.is_set
	|| udf5.is_set
	|| udf6.is_set
	|| udf7.is_set
	|| udf8.is_set
	|| en_capture.is_set
	|| en_ttl.is_set
	|| en_match.is_set
	|| en_share_acl.is_set;
}

bool HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables::AclTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(location_string.yfilter)
	|| ydk::is_set(location_id.yfilter)
	|| ydk::is_set(source_addr.yfilter)
	|| ydk::is_set(destination_addr.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(dest_port.yfilter)
	|| ydk::is_set(prot_type.yfilter)
	|| ydk::is_set(tcp_flag.yfilter)
	|| ydk::is_set(pack_len.yfilter)
	|| ydk::is_set(frag_bit.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(port_range.yfilter)
	|| ydk::is_set(udf1.yfilter)
	|| ydk::is_set(udf2.yfilter)
	|| ydk::is_set(udf3.yfilter)
	|| ydk::is_set(udf4.yfilter)
	|| ydk::is_set(udf5.yfilter)
	|| ydk::is_set(udf6.yfilter)
	|| ydk::is_set(udf7.yfilter)
	|| ydk::is_set(udf8.yfilter)
	|| ydk::is_set(en_capture.yfilter)
	|| ydk::is_set(en_ttl.yfilter)
	|| ydk::is_set(en_match.yfilter)
	|| ydk::is_set(en_share_acl.yfilter);
}

std::string HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables::AclTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/profile-tcam/key-format/acl-tables/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables::AclTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl-table" <<"[address-family='" <<address_family <<"']" <<"[location-string='" <<location_string <<"']" <<"[location-id='" <<location_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables::AclTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (location_string.is_set || is_set(location_string.yfilter)) leaf_name_data.push_back(location_string.get_name_leafdata());
    if (location_id.is_set || is_set(location_id.yfilter)) leaf_name_data.push_back(location_id.get_name_leafdata());
    if (source_addr.is_set || is_set(source_addr.yfilter)) leaf_name_data.push_back(source_addr.get_name_leafdata());
    if (destination_addr.is_set || is_set(destination_addr.yfilter)) leaf_name_data.push_back(destination_addr.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (dest_port.is_set || is_set(dest_port.yfilter)) leaf_name_data.push_back(dest_port.get_name_leafdata());
    if (prot_type.is_set || is_set(prot_type.yfilter)) leaf_name_data.push_back(prot_type.get_name_leafdata());
    if (tcp_flag.is_set || is_set(tcp_flag.yfilter)) leaf_name_data.push_back(tcp_flag.get_name_leafdata());
    if (pack_len.is_set || is_set(pack_len.yfilter)) leaf_name_data.push_back(pack_len.get_name_leafdata());
    if (frag_bit.is_set || is_set(frag_bit.yfilter)) leaf_name_data.push_back(frag_bit.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (port_range.is_set || is_set(port_range.yfilter)) leaf_name_data.push_back(port_range.get_name_leafdata());
    if (udf1.is_set || is_set(udf1.yfilter)) leaf_name_data.push_back(udf1.get_name_leafdata());
    if (udf2.is_set || is_set(udf2.yfilter)) leaf_name_data.push_back(udf2.get_name_leafdata());
    if (udf3.is_set || is_set(udf3.yfilter)) leaf_name_data.push_back(udf3.get_name_leafdata());
    if (udf4.is_set || is_set(udf4.yfilter)) leaf_name_data.push_back(udf4.get_name_leafdata());
    if (udf5.is_set || is_set(udf5.yfilter)) leaf_name_data.push_back(udf5.get_name_leafdata());
    if (udf6.is_set || is_set(udf6.yfilter)) leaf_name_data.push_back(udf6.get_name_leafdata());
    if (udf7.is_set || is_set(udf7.yfilter)) leaf_name_data.push_back(udf7.get_name_leafdata());
    if (udf8.is_set || is_set(udf8.yfilter)) leaf_name_data.push_back(udf8.get_name_leafdata());
    if (en_capture.is_set || is_set(en_capture.yfilter)) leaf_name_data.push_back(en_capture.get_name_leafdata());
    if (en_ttl.is_set || is_set(en_ttl.yfilter)) leaf_name_data.push_back(en_ttl.get_name_leafdata());
    if (en_match.is_set || is_set(en_match.yfilter)) leaf_name_data.push_back(en_match.get_name_leafdata());
    if (en_share_acl.is_set || is_set(en_share_acl.yfilter)) leaf_name_data.push_back(en_share_acl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables::AclTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables::AclTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables::AclTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location-string")
    {
        location_string = value;
        location_string.value_namespace = name_space;
        location_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location-id")
    {
        location_id = value;
        location_id.value_namespace = name_space;
        location_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-addr")
    {
        source_addr = value;
        source_addr.value_namespace = name_space;
        source_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-addr")
    {
        destination_addr = value;
        destination_addr.value_namespace = name_space;
        destination_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-port")
    {
        dest_port = value;
        dest_port.value_namespace = name_space;
        dest_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prot-type")
    {
        prot_type = value;
        prot_type.value_namespace = name_space;
        prot_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-flag")
    {
        tcp_flag = value;
        tcp_flag.value_namespace = name_space;
        tcp_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pack-len")
    {
        pack_len = value;
        pack_len.value_namespace = name_space;
        pack_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frag-bit")
    {
        frag_bit = value;
        frag_bit.value_namespace = name_space;
        frag_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-range")
    {
        port_range = value;
        port_range.value_namespace = name_space;
        port_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf1")
    {
        udf1 = value;
        udf1.value_namespace = name_space;
        udf1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf2")
    {
        udf2 = value;
        udf2.value_namespace = name_space;
        udf2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf3")
    {
        udf3 = value;
        udf3.value_namespace = name_space;
        udf3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf4")
    {
        udf4 = value;
        udf4.value_namespace = name_space;
        udf4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf5")
    {
        udf5 = value;
        udf5.value_namespace = name_space;
        udf5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf6")
    {
        udf6 = value;
        udf6.value_namespace = name_space;
        udf6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf7")
    {
        udf7 = value;
        udf7.value_namespace = name_space;
        udf7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udf8")
    {
        udf8 = value;
        udf8.value_namespace = name_space;
        udf8.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "en-capture")
    {
        en_capture = value;
        en_capture.value_namespace = name_space;
        en_capture.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "en-ttl")
    {
        en_ttl = value;
        en_ttl.value_namespace = name_space;
        en_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "en-match")
    {
        en_match = value;
        en_match.value_namespace = name_space;
        en_match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "en-share-acl")
    {
        en_share_acl = value;
        en_share_acl.value_namespace = name_space;
        en_share_acl.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables::AclTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "location-string")
    {
        location_string.yfilter = yfilter;
    }
    if(value_path == "location-id")
    {
        location_id.yfilter = yfilter;
    }
    if(value_path == "source-addr")
    {
        source_addr.yfilter = yfilter;
    }
    if(value_path == "destination-addr")
    {
        destination_addr.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "dest-port")
    {
        dest_port.yfilter = yfilter;
    }
    if(value_path == "prot-type")
    {
        prot_type.yfilter = yfilter;
    }
    if(value_path == "tcp-flag")
    {
        tcp_flag.yfilter = yfilter;
    }
    if(value_path == "pack-len")
    {
        pack_len.yfilter = yfilter;
    }
    if(value_path == "frag-bit")
    {
        frag_bit.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "port-range")
    {
        port_range.yfilter = yfilter;
    }
    if(value_path == "udf1")
    {
        udf1.yfilter = yfilter;
    }
    if(value_path == "udf2")
    {
        udf2.yfilter = yfilter;
    }
    if(value_path == "udf3")
    {
        udf3.yfilter = yfilter;
    }
    if(value_path == "udf4")
    {
        udf4.yfilter = yfilter;
    }
    if(value_path == "udf5")
    {
        udf5.yfilter = yfilter;
    }
    if(value_path == "udf6")
    {
        udf6.yfilter = yfilter;
    }
    if(value_path == "udf7")
    {
        udf7.yfilter = yfilter;
    }
    if(value_path == "udf8")
    {
        udf8.yfilter = yfilter;
    }
    if(value_path == "en-capture")
    {
        en_capture.yfilter = yfilter;
    }
    if(value_path == "en-ttl")
    {
        en_ttl.yfilter = yfilter;
    }
    if(value_path == "en-match")
    {
        en_match.yfilter = yfilter;
    }
    if(value_path == "en-share-acl")
    {
        en_share_acl.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::ProfileTcam::KeyFormat::AclTables::AclTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "location-string" || name == "location-id" || name == "source-addr" || name == "destination-addr" || name == "source-port" || name == "dest-port" || name == "prot-type" || name == "tcp-flag" || name == "pack-len" || name == "frag-bit" || name == "precedence" || name == "port-range" || name == "udf1" || name == "udf2" || name == "udf3" || name == "udf4" || name == "udf5" || name == "udf6" || name == "udf7" || name == "udf8" || name == "en-capture" || name == "en-ttl" || name == "en-match" || name == "en-share-acl")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Qos::Qos()
    :
    hqos_enable_all(std::make_shared<HwModuleProfileConfig::Profile::Qos::HqosEnableAll>())
	,ingress_model_root_def(std::make_shared<HwModuleProfileConfig::Profile::Qos::IngressModelRootDef>())
	,ingress_models(std::make_shared<HwModuleProfileConfig::Profile::Qos::IngressModels>())
	,trunks(std::make_shared<HwModuleProfileConfig::Profile::Qos::Trunks>())
	,class_maps_root_def(std::make_shared<HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef>())
	,class_maps(std::make_shared<HwModuleProfileConfig::Profile::Qos::ClassMaps>())
{
    hqos_enable_all->parent = this;
    ingress_model_root_def->parent = this;
    ingress_models->parent = this;
    trunks->parent = this;
    class_maps_root_def->parent = this;
    class_maps->parent = this;

    yang_name = "qos"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::Qos::~Qos()
{
}

bool HwModuleProfileConfig::Profile::Qos::has_data() const
{
    return (hqos_enable_all !=  nullptr && hqos_enable_all->has_data())
	|| (ingress_model_root_def !=  nullptr && ingress_model_root_def->has_data())
	|| (ingress_models !=  nullptr && ingress_models->has_data())
	|| (trunks !=  nullptr && trunks->has_data())
	|| (class_maps_root_def !=  nullptr && class_maps_root_def->has_data())
	|| (class_maps !=  nullptr && class_maps->has_data());
}

bool HwModuleProfileConfig::Profile::Qos::has_operation() const
{
    return is_set(yfilter)
	|| (hqos_enable_all !=  nullptr && hqos_enable_all->has_operation())
	|| (ingress_model_root_def !=  nullptr && ingress_model_root_def->has_operation())
	|| (ingress_models !=  nullptr && ingress_models->has_operation())
	|| (trunks !=  nullptr && trunks->has_operation())
	|| (class_maps_root_def !=  nullptr && class_maps_root_def->has_operation())
	|| (class_maps !=  nullptr && class_maps->has_operation());
}

std::string HwModuleProfileConfig::Profile::Qos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hqos-enable-all")
    {
        if(hqos_enable_all == nullptr)
        {
            hqos_enable_all = std::make_shared<HwModuleProfileConfig::Profile::Qos::HqosEnableAll>();
        }
        return hqos_enable_all;
    }

    if(child_yang_name == "ingress-model-root-def")
    {
        if(ingress_model_root_def == nullptr)
        {
            ingress_model_root_def = std::make_shared<HwModuleProfileConfig::Profile::Qos::IngressModelRootDef>();
        }
        return ingress_model_root_def;
    }

    if(child_yang_name == "ingress-models")
    {
        if(ingress_models == nullptr)
        {
            ingress_models = std::make_shared<HwModuleProfileConfig::Profile::Qos::IngressModels>();
        }
        return ingress_models;
    }

    if(child_yang_name == "trunks")
    {
        if(trunks == nullptr)
        {
            trunks = std::make_shared<HwModuleProfileConfig::Profile::Qos::Trunks>();
        }
        return trunks;
    }

    if(child_yang_name == "class-maps-root-def")
    {
        if(class_maps_root_def == nullptr)
        {
            class_maps_root_def = std::make_shared<HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef>();
        }
        return class_maps_root_def;
    }

    if(child_yang_name == "class-maps")
    {
        if(class_maps == nullptr)
        {
            class_maps = std::make_shared<HwModuleProfileConfig::Profile::Qos::ClassMaps>();
        }
        return class_maps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(hqos_enable_all != nullptr)
    {
        children["hqos-enable-all"] = hqos_enable_all;
    }

    if(ingress_model_root_def != nullptr)
    {
        children["ingress-model-root-def"] = ingress_model_root_def;
    }

    if(ingress_models != nullptr)
    {
        children["ingress-models"] = ingress_models;
    }

    if(trunks != nullptr)
    {
        children["trunks"] = trunks;
    }

    if(class_maps_root_def != nullptr)
    {
        children["class-maps-root-def"] = class_maps_root_def;
    }

    if(class_maps != nullptr)
    {
        children["class-maps"] = class_maps;
    }

    return children;
}

void HwModuleProfileConfig::Profile::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Profile::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Profile::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hqos-enable-all" || name == "ingress-model-root-def" || name == "ingress-models" || name == "trunks" || name == "class-maps-root-def" || name == "class-maps")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Qos::HqosEnableAll::HqosEnableAll()
    :
    hqos_enable{YType::int32, "hqos-enable"}
{

    yang_name = "hqos-enable-all"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::Qos::HqosEnableAll::~HqosEnableAll()
{
}

bool HwModuleProfileConfig::Profile::Qos::HqosEnableAll::has_data() const
{
    return hqos_enable.is_set;
}

bool HwModuleProfileConfig::Profile::Qos::HqosEnableAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hqos_enable.yfilter);
}

std::string HwModuleProfileConfig::Profile::Qos::HqosEnableAll::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::Qos::HqosEnableAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hqos-enable-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::Qos::HqosEnableAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hqos_enable.is_set || is_set(hqos_enable.yfilter)) leaf_name_data.push_back(hqos_enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::Qos::HqosEnableAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::Qos::HqosEnableAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HwModuleProfileConfig::Profile::Qos::HqosEnableAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hqos-enable")
    {
        hqos_enable = value;
        hqos_enable.value_namespace = name_space;
        hqos_enable.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::Qos::HqosEnableAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hqos-enable")
    {
        hqos_enable.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::Qos::HqosEnableAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hqos-enable")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Qos::IngressModelRootDef::IngressModelRootDef()
    :
    ingress_model_leaf_def{YType::int32, "ingress-model-leaf-def"}
{

    yang_name = "ingress-model-root-def"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::Qos::IngressModelRootDef::~IngressModelRootDef()
{
}

bool HwModuleProfileConfig::Profile::Qos::IngressModelRootDef::has_data() const
{
    return ingress_model_leaf_def.is_set;
}

bool HwModuleProfileConfig::Profile::Qos::IngressModelRootDef::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ingress_model_leaf_def.yfilter);
}

std::string HwModuleProfileConfig::Profile::Qos::IngressModelRootDef::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::Qos::IngressModelRootDef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-model-root-def";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::Qos::IngressModelRootDef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ingress_model_leaf_def.is_set || is_set(ingress_model_leaf_def.yfilter)) leaf_name_data.push_back(ingress_model_leaf_def.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::Qos::IngressModelRootDef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::Qos::IngressModelRootDef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HwModuleProfileConfig::Profile::Qos::IngressModelRootDef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ingress-model-leaf-def")
    {
        ingress_model_leaf_def = value;
        ingress_model_leaf_def.value_namespace = name_space;
        ingress_model_leaf_def.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::Qos::IngressModelRootDef::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ingress-model-leaf-def")
    {
        ingress_model_leaf_def.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::Qos::IngressModelRootDef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress-model-leaf-def")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModels()
{

    yang_name = "ingress-models"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::Qos::IngressModels::~IngressModels()
{
}

bool HwModuleProfileConfig::Profile::Qos::IngressModels::has_data() const
{
    for (std::size_t index=0; index<ingress_model.size(); index++)
    {
        if(ingress_model[index]->has_data())
            return true;
    }
    return false;
}

bool HwModuleProfileConfig::Profile::Qos::IngressModels::has_operation() const
{
    for (std::size_t index=0; index<ingress_model.size(); index++)
    {
        if(ingress_model[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HwModuleProfileConfig::Profile::Qos::IngressModels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::Qos::IngressModels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-models";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::Qos::IngressModels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::Qos::IngressModels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress-model")
    {
        auto c = std::make_shared<HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel>();
        c->parent = this;
        ingress_model.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::Qos::IngressModels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ingress_model)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HwModuleProfileConfig::Profile::Qos::IngressModels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Profile::Qos::IngressModels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Profile::Qos::IngressModels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress-model")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModel()
    :
    node_name{YType::str, "node-name"}
{

    yang_name = "ingress-model"; yang_parent_name = "ingress-models"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::~IngressModel()
{
}

bool HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::has_data() const
{
    for (std::size_t index=0; index<ingress_model_leaf.size(); index++)
    {
        if(ingress_model_leaf[index]->has_data())
            return true;
    }
    return node_name.is_set;
}

bool HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::has_operation() const
{
    for (std::size_t index=0; index<ingress_model_leaf.size(); index++)
    {
        if(ingress_model_leaf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter);
}

std::string HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/qos/ingress-models/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-model" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ingress-model-leaf")
    {
        auto c = std::make_shared<HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf>();
        c->parent = this;
        ingress_model_leaf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ingress_model_leaf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ingress-model-leaf" || name == "node-name")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf::IngressModelLeaf()
    :
    location{YType::int32, "location"},
    ingress_model_leaf{YType::int32, "ingress-model-leaf"}
{

    yang_name = "ingress-model-leaf"; yang_parent_name = "ingress-model"; is_top_level_class = false; has_list_ancestor = true;
}

HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf::~IngressModelLeaf()
{
}

bool HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf::has_data() const
{
    return location.is_set
	|| ingress_model_leaf.is_set;
}

bool HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(ingress_model_leaf.yfilter);
}

std::string HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ingress-model-leaf" <<"[location='" <<location <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (ingress_model_leaf.is_set || is_set(ingress_model_leaf.yfilter)) leaf_name_data.push_back(ingress_model_leaf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-model-leaf")
    {
        ingress_model_leaf = value;
        ingress_model_leaf.value_namespace = name_space;
        ingress_model_leaf.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "ingress-model-leaf")
    {
        ingress_model_leaf.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::Qos::IngressModels::IngressModel::IngressModelLeaf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "ingress-model-leaf")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Qos::Trunks::Trunks()
    :
    trunk_size{YType::int32, "trunk-size"}
{

    yang_name = "trunks"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::Qos::Trunks::~Trunks()
{
}

bool HwModuleProfileConfig::Profile::Qos::Trunks::has_data() const
{
    return trunk_size.is_set;
}

bool HwModuleProfileConfig::Profile::Qos::Trunks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trunk_size.yfilter);
}

std::string HwModuleProfileConfig::Profile::Qos::Trunks::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::Qos::Trunks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trunks";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::Qos::Trunks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trunk_size.is_set || is_set(trunk_size.yfilter)) leaf_name_data.push_back(trunk_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::Qos::Trunks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::Qos::Trunks::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HwModuleProfileConfig::Profile::Qos::Trunks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trunk-size")
    {
        trunk_size = value;
        trunk_size.value_namespace = name_space;
        trunk_size.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::Qos::Trunks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trunk-size")
    {
        trunk_size.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::Qos::Trunks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trunk-size")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef::ClassMapsRootDef()
    :
    class_map_size_def{YType::int32, "class-map-size-def"}
{

    yang_name = "class-maps-root-def"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef::~ClassMapsRootDef()
{
}

bool HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef::has_data() const
{
    return class_map_size_def.is_set;
}

bool HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_map_size_def.yfilter);
}

std::string HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-maps-root-def";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_map_size_def.is_set || is_set(class_map_size_def.yfilter)) leaf_name_data.push_back(class_map_size_def.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-map-size-def")
    {
        class_map_size_def = value;
        class_map_size_def.value_namespace = name_space;
        class_map_size_def.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-map-size-def")
    {
        class_map_size_def.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::Qos::ClassMapsRootDef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-map-size-def")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMaps()
{

    yang_name = "class-maps"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::Qos::ClassMaps::~ClassMaps()
{
}

bool HwModuleProfileConfig::Profile::Qos::ClassMaps::has_data() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_data())
            return true;
    }
    return false;
}

bool HwModuleProfileConfig::Profile::Qos::ClassMaps::has_operation() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string HwModuleProfileConfig::Profile::Qos::ClassMaps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::Qos::ClassMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-maps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::Qos::ClassMaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::Qos::ClassMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-map")
    {
        auto c = std::make_shared<HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap>();
        c->parent = this;
        class_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::Qos::ClassMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : class_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HwModuleProfileConfig::Profile::Qos::ClassMaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Profile::Qos::ClassMaps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Profile::Qos::ClassMaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-map")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMap()
    :
    node_name{YType::str, "node-name"}
{

    yang_name = "class-map"; yang_parent_name = "class-maps"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::~ClassMap()
{
}

bool HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::has_data() const
{
    for (std::size_t index=0; index<class_map_size.size(); index++)
    {
        if(class_map_size[index]->has_data())
            return true;
    }
    return node_name.is_set;
}

bool HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::has_operation() const
{
    for (std::size_t index=0; index<class_map_size.size(); index++)
    {
        if(class_map_size[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter);
}

std::string HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/qos/class-maps/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-map-size")
    {
        auto c = std::make_shared<HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize>();
        c->parent = this;
        class_map_size.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : class_map_size)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-map-size" || name == "node-name")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize::ClassMapSize()
    :
    location{YType::int32, "location"},
    class_map_size{YType::int32, "class-map-size"}
{

    yang_name = "class-map-size"; yang_parent_name = "class-map"; is_top_level_class = false; has_list_ancestor = true;
}

HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize::~ClassMapSize()
{
}

bool HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize::has_data() const
{
    return location.is_set
	|| class_map_size.is_set;
}

bool HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(class_map_size.yfilter);
}

std::string HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map-size" <<"[location='" <<location <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (class_map_size.is_set || is_set(class_map_size.yfilter)) leaf_name_data.push_back(class_map_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-map-size")
    {
        class_map_size = value;
        class_map_size.value_namespace = name_space;
        class_map_size.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "class-map-size")
    {
        class_map_size.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Profile::Qos::ClassMaps::ClassMap::ClassMapSize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "class-map-size")
        return true;
    return false;
}

HwModuleProfileConfig::FibScale::FibScale()
    :
    ipv6_unicast_scale_no_tcam(std::make_shared<HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam>())
	,ipv4_unicast_scale_no_tcam(std::make_shared<HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam>())
{
    ipv6_unicast_scale_no_tcam->parent = this;
    ipv4_unicast_scale_no_tcam->parent = this;

    yang_name = "fib-scale"; yang_parent_name = "hw-module-profile-config"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::FibScale::~FibScale()
{
}

bool HwModuleProfileConfig::FibScale::has_data() const
{
    return (ipv6_unicast_scale_no_tcam !=  nullptr && ipv6_unicast_scale_no_tcam->has_data())
	|| (ipv4_unicast_scale_no_tcam !=  nullptr && ipv4_unicast_scale_no_tcam->has_data());
}

bool HwModuleProfileConfig::FibScale::has_operation() const
{
    return is_set(yfilter)
	|| (ipv6_unicast_scale_no_tcam !=  nullptr && ipv6_unicast_scale_no_tcam->has_operation())
	|| (ipv4_unicast_scale_no_tcam !=  nullptr && ipv4_unicast_scale_no_tcam->has_operation());
}

std::string HwModuleProfileConfig::FibScale::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::FibScale::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-scale";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::FibScale::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::FibScale::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-unicast-scale-no-tcam")
    {
        if(ipv6_unicast_scale_no_tcam == nullptr)
        {
            ipv6_unicast_scale_no_tcam = std::make_shared<HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam>();
        }
        return ipv6_unicast_scale_no_tcam;
    }

    if(child_yang_name == "ipv4-unicast-scale-no-tcam")
    {
        if(ipv4_unicast_scale_no_tcam == nullptr)
        {
            ipv4_unicast_scale_no_tcam = std::make_shared<HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam>();
        }
        return ipv4_unicast_scale_no_tcam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::FibScale::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv6_unicast_scale_no_tcam != nullptr)
    {
        children["ipv6-unicast-scale-no-tcam"] = ipv6_unicast_scale_no_tcam;
    }

    if(ipv4_unicast_scale_no_tcam != nullptr)
    {
        children["ipv4-unicast-scale-no-tcam"] = ipv4_unicast_scale_no_tcam;
    }

    return children;
}

void HwModuleProfileConfig::FibScale::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::FibScale::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::FibScale::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-unicast-scale-no-tcam" || name == "ipv4-unicast-scale-no-tcam")
        return true;
    return false;
}

HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::Ipv6UnicastScaleNoTcam()
    :
    scale_ipv6_no_tcam(std::make_shared<HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam>())
{
    scale_ipv6_no_tcam->parent = this;

    yang_name = "ipv6-unicast-scale-no-tcam"; yang_parent_name = "fib-scale"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::~Ipv6UnicastScaleNoTcam()
{
}

bool HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::has_data() const
{
    return (scale_ipv6_no_tcam !=  nullptr && scale_ipv6_no_tcam->has_data());
}

bool HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::has_operation() const
{
    return is_set(yfilter)
	|| (scale_ipv6_no_tcam !=  nullptr && scale_ipv6_no_tcam->has_operation());
}

std::string HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/fib-scale/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-unicast-scale-no-tcam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scale-ipv6-no-tcam")
    {
        if(scale_ipv6_no_tcam == nullptr)
        {
            scale_ipv6_no_tcam = std::make_shared<HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam>();
        }
        return scale_ipv6_no_tcam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(scale_ipv6_no_tcam != nullptr)
    {
        children["scale-ipv6-no-tcam"] = scale_ipv6_no_tcam;
    }

    return children;
}

void HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scale-ipv6-no-tcam")
        return true;
    return false;
}

HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::ScaleIpv6NoTcam()
    :
    internet_optimized_ipv6_no_tcam{YType::str, "internet-optimized-ipv6-no-tcam"}
{

    yang_name = "scale-ipv6-no-tcam"; yang_parent_name = "ipv6-unicast-scale-no-tcam"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::~ScaleIpv6NoTcam()
{
}

bool HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::has_data() const
{
    return internet_optimized_ipv6_no_tcam.is_set;
}

bool HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internet_optimized_ipv6_no_tcam.yfilter);
}

std::string HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/fib-scale/ipv6-unicast-scale-no-tcam/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scale-ipv6-no-tcam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internet_optimized_ipv6_no_tcam.is_set || is_set(internet_optimized_ipv6_no_tcam.yfilter)) leaf_name_data.push_back(internet_optimized_ipv6_no_tcam.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internet-optimized-ipv6-no-tcam")
    {
        internet_optimized_ipv6_no_tcam = value;
        internet_optimized_ipv6_no_tcam.value_namespace = name_space;
        internet_optimized_ipv6_no_tcam.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internet-optimized-ipv6-no-tcam")
    {
        internet_optimized_ipv6_no_tcam.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internet-optimized-ipv6-no-tcam")
        return true;
    return false;
}

HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::Ipv4UnicastScaleNoTcam()
    :
    scale_ipv4_no_tcam(std::make_shared<HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam>())
{
    scale_ipv4_no_tcam->parent = this;

    yang_name = "ipv4-unicast-scale-no-tcam"; yang_parent_name = "fib-scale"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::~Ipv4UnicastScaleNoTcam()
{
}

bool HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::has_data() const
{
    return (scale_ipv4_no_tcam !=  nullptr && scale_ipv4_no_tcam->has_data());
}

bool HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::has_operation() const
{
    return is_set(yfilter)
	|| (scale_ipv4_no_tcam !=  nullptr && scale_ipv4_no_tcam->has_operation());
}

std::string HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/fib-scale/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast-scale-no-tcam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "scale-ipv4-no-tcam")
    {
        if(scale_ipv4_no_tcam == nullptr)
        {
            scale_ipv4_no_tcam = std::make_shared<HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam>();
        }
        return scale_ipv4_no_tcam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(scale_ipv4_no_tcam != nullptr)
    {
        children["scale-ipv4-no-tcam"] = scale_ipv4_no_tcam;
    }

    return children;
}

void HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "scale-ipv4-no-tcam")
        return true;
    return false;
}

HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::ScaleIpv4NoTcam()
    :
    optimized_ipv4_no_tcam{YType::str, "optimized-ipv4-no-tcam"}
{

    yang_name = "scale-ipv4-no-tcam"; yang_parent_name = "ipv4-unicast-scale-no-tcam"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::~ScaleIpv4NoTcam()
{
}

bool HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::has_data() const
{
    return optimized_ipv4_no_tcam.is_set;
}

bool HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(optimized_ipv4_no_tcam.yfilter);
}

std::string HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/fib-scale/ipv4-unicast-scale-no-tcam/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scale-ipv4-no-tcam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (optimized_ipv4_no_tcam.is_set || is_set(optimized_ipv4_no_tcam.yfilter)) leaf_name_data.push_back(optimized_ipv4_no_tcam.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "optimized-ipv4-no-tcam")
    {
        optimized_ipv4_no_tcam = value;
        optimized_ipv4_no_tcam.value_namespace = name_space;
        optimized_ipv4_no_tcam.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "optimized-ipv4-no-tcam")
    {
        optimized_ipv4_no_tcam.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "optimized-ipv4-no-tcam")
        return true;
    return false;
}

HwModuleProfileConfig::Tcam::Tcam()
    :
    fib_tcam_scale(std::make_shared<HwModuleProfileConfig::Tcam::FibTcamScale>())
{
    fib_tcam_scale->parent = this;

    yang_name = "tcam"; yang_parent_name = "hw-module-profile-config"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Tcam::~Tcam()
{
}

bool HwModuleProfileConfig::Tcam::has_data() const
{
    return (fib_tcam_scale !=  nullptr && fib_tcam_scale->has_data());
}

bool HwModuleProfileConfig::Tcam::has_operation() const
{
    return is_set(yfilter)
	|| (fib_tcam_scale !=  nullptr && fib_tcam_scale->has_operation());
}

std::string HwModuleProfileConfig::Tcam::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Tcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Tcam::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Tcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fib-tcam-scale")
    {
        if(fib_tcam_scale == nullptr)
        {
            fib_tcam_scale = std::make_shared<HwModuleProfileConfig::Tcam::FibTcamScale>();
        }
        return fib_tcam_scale;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Tcam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fib_tcam_scale != nullptr)
    {
        children["fib-tcam-scale"] = fib_tcam_scale;
    }

    return children;
}

void HwModuleProfileConfig::Tcam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Tcam::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Tcam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-tcam-scale")
        return true;
    return false;
}

HwModuleProfileConfig::Tcam::FibTcamScale::FibTcamScale()
    :
    ipv4_unicast_scale(std::make_shared<HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale>())
{
    ipv4_unicast_scale->parent = this;

    yang_name = "fib-tcam-scale"; yang_parent_name = "tcam"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Tcam::FibTcamScale::~FibTcamScale()
{
}

bool HwModuleProfileConfig::Tcam::FibTcamScale::has_data() const
{
    return (ipv4_unicast_scale !=  nullptr && ipv4_unicast_scale->has_data());
}

bool HwModuleProfileConfig::Tcam::FibTcamScale::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4_unicast_scale !=  nullptr && ipv4_unicast_scale->has_operation());
}

std::string HwModuleProfileConfig::Tcam::FibTcamScale::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/tcam/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Tcam::FibTcamScale::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-tcam-scale";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Tcam::FibTcamScale::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Tcam::FibTcamScale::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unicast-scale")
    {
        if(ipv4_unicast_scale == nullptr)
        {
            ipv4_unicast_scale = std::make_shared<HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale>();
        }
        return ipv4_unicast_scale;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Tcam::FibTcamScale::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv4_unicast_scale != nullptr)
    {
        children["ipv4-unicast-scale"] = ipv4_unicast_scale;
    }

    return children;
}

void HwModuleProfileConfig::Tcam::FibTcamScale::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void HwModuleProfileConfig::Tcam::FibTcamScale::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool HwModuleProfileConfig::Tcam::FibTcamScale::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-unicast-scale")
        return true;
    return false;
}

HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::Ipv4UnicastScale()
    :
    ipv4_scale{YType::empty, "ipv4-scale"}
{

    yang_name = "ipv4-unicast-scale"; yang_parent_name = "fib-tcam-scale"; is_top_level_class = false; has_list_ancestor = false;
}

HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::~Ipv4UnicastScale()
{
}

bool HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::has_data() const
{
    return ipv4_scale.is_set;
}

bool HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_scale.yfilter);
}

std::string HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/tcam/fib-tcam-scale/" << get_segment_path();
    return path_buffer.str();
}

std::string HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast-scale";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_scale.is_set || is_set(ipv4_scale.yfilter)) leaf_name_data.push_back(ipv4_scale.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-scale")
    {
        ipv4_scale = value;
        ipv4_scale.value_namespace = name_space;
        ipv4_scale.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-scale")
    {
        ipv4_scale.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-scale")
        return true;
    return false;
}


}
}

