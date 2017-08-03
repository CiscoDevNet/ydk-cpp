
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
    fib_scale(std::make_shared<HwModuleProfileConfig::FibScale>())
	,profile(std::make_shared<HwModuleProfileConfig::Profile>())
	,tcam(std::make_shared<HwModuleProfileConfig::Tcam>())
{
    fib_scale->parent = this;

    profile->parent = this;

    tcam->parent = this;

    yang_name = "hw-module-profile-config"; yang_parent_name = "Cisco-IOS-XR-fia-hw-profile-cfg";
}

HwModuleProfileConfig::~HwModuleProfileConfig()
{
}

bool HwModuleProfileConfig::has_data() const
{
    return (fib_scale !=  nullptr && fib_scale->has_data())
	|| (profile !=  nullptr && profile->has_data())
	|| (tcam !=  nullptr && tcam->has_data());
}

bool HwModuleProfileConfig::has_operation() const
{
    return is_set(yfilter)
	|| (fib_scale !=  nullptr && fib_scale->has_operation())
	|| (profile !=  nullptr && profile->has_operation())
	|| (tcam !=  nullptr && tcam->has_operation());
}

std::string HwModuleProfileConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config";

    return path_buffer.str();

}

const EntityPath HwModuleProfileConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HwModuleProfileConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fib-scale")
    {
        if(fib_scale == nullptr)
        {
            fib_scale = std::make_shared<HwModuleProfileConfig::FibScale>();
        }
        return fib_scale;
    }

    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<HwModuleProfileConfig::Profile>();
        }
        return profile;
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
    if(fib_scale != nullptr)
    {
        children["fib-scale"] = fib_scale;
    }

    if(profile != nullptr)
    {
        children["profile"] = profile;
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
    if(name == "fib-scale" || name == "profile" || name == "tcam")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::Profile()
    :
    tcam_table(std::make_shared<HwModuleProfileConfig::Profile::TcamTable>())
{
    tcam_table->parent = this;

    yang_name = "profile"; yang_parent_name = "hw-module-profile-config";
}

HwModuleProfileConfig::Profile::~Profile()
{
}

bool HwModuleProfileConfig::Profile::has_data() const
{
    return (tcam_table !=  nullptr && tcam_table->has_data());
}

bool HwModuleProfileConfig::Profile::has_operation() const
{
    return is_set(yfilter)
	|| (tcam_table !=  nullptr && tcam_table->has_operation());
}

std::string HwModuleProfileConfig::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";

    return path_buffer.str();

}

const EntityPath HwModuleProfileConfig::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tcam_table != nullptr)
    {
        children["tcam-table"] = tcam_table;
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
    if(name == "tcam-table")
        return true;
    return false;
}

HwModuleProfileConfig::Profile::TcamTable::TcamTable()
    :
    fib_table(std::make_shared<HwModuleProfileConfig::Profile::TcamTable::FibTable>())
{
    fib_table->parent = this;

    yang_name = "tcam-table"; yang_parent_name = "profile";
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

std::string HwModuleProfileConfig::Profile::TcamTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam-table";

    return path_buffer.str();

}

const EntityPath HwModuleProfileConfig::Profile::TcamTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

    yang_name = "fib-table"; yang_parent_name = "tcam-table";
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

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-table";

    return path_buffer.str();

}

const EntityPath HwModuleProfileConfig::Profile::TcamTable::FibTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

    yang_name = "ipv4-address"; yang_parent_name = "fib-table";
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

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address";

    return path_buffer.str();

}

const EntityPath HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

    yang_name = "ipv4-unicast"; yang_parent_name = "ipv4-address";
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

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast";

    return path_buffer.str();

}

const EntityPath HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/ipv4-address/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_unicast_percent.is_set || is_set(ipv4_unicast_percent.yfilter)) leaf_name_data.push_back(ipv4_unicast_percent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    yang_name = "ipv4-unicast-prefix-lengths"; yang_parent_name = "ipv4-unicast";
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

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast-prefix-lengths";

    return path_buffer.str();

}

const EntityPath HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/ipv4-address/ipv4-unicast/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unicast-prefix-length")
    {
        for(auto const & c : ipv4_unicast_prefix_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : ipv4_unicast_prefix_length)
    {
        children[c->get_segment_path()] = c;
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
    yang_name = "ipv4-unicast-prefix-length"; yang_parent_name = "ipv4-unicast-prefix-lengths";
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

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast-prefix-length" <<"[prefix-length='" <<prefix_length <<"']";

    return path_buffer.str();

}

const EntityPath HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/ipv4-address/ipv4-unicast/ipv4-unicast-prefix-lengths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (ipv4_unicast_prefix_percent.is_set || is_set(ipv4_unicast_prefix_percent.yfilter)) leaf_name_data.push_back(ipv4_unicast_prefix_percent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv4Address::Ipv4Unicast::Ipv4UnicastPrefixLengths::Ipv4UnicastPrefixLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

    yang_name = "ipv6-address"; yang_parent_name = "fib-table";
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

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address";

    return path_buffer.str();

}

const EntityPath HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

    yang_name = "ipv6-unicast"; yang_parent_name = "ipv6-address";
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

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-unicast";

    return path_buffer.str();

}

const EntityPath HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/ipv6-address/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_unicast_percent.is_set || is_set(ipv6_unicast_percent.yfilter)) leaf_name_data.push_back(ipv6_unicast_percent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    yang_name = "ipv6-unicast-prefix-lengths"; yang_parent_name = "ipv6-unicast";
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

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-unicast-prefix-lengths";

    return path_buffer.str();

}

const EntityPath HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/ipv6-address/ipv6-unicast/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-unicast-prefix-length")
    {
        for(auto const & c : ipv6_unicast_prefix_length)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
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
    for (auto const & c : ipv6_unicast_prefix_length)
    {
        children[c->get_segment_path()] = c;
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
    yang_name = "ipv6-unicast-prefix-length"; yang_parent_name = "ipv6-unicast-prefix-lengths";
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

std::string HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-unicast-prefix-length" <<"[prefix-length='" <<prefix_length <<"']";

    return path_buffer.str();

}

const EntityPath HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/profile/tcam-table/fib-table/ipv6-address/ipv6-unicast/ipv6-unicast-prefix-lengths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (ipv6_unicast_prefix_percent.is_set || is_set(ipv6_unicast_prefix_percent.yfilter)) leaf_name_data.push_back(ipv6_unicast_prefix_percent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Profile::TcamTable::FibTable::Ipv6Address::Ipv6Unicast::Ipv6UnicastPrefixLengths::Ipv6UnicastPrefixLength::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

HwModuleProfileConfig::FibScale::FibScale()
    :
    ipv4_unicast_scale_no_tcam(std::make_shared<HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam>())
	,ipv6_unicast_scale_no_tcam(std::make_shared<HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam>())
{
    ipv4_unicast_scale_no_tcam->parent = this;

    ipv6_unicast_scale_no_tcam->parent = this;

    yang_name = "fib-scale"; yang_parent_name = "hw-module-profile-config";
}

HwModuleProfileConfig::FibScale::~FibScale()
{
}

bool HwModuleProfileConfig::FibScale::has_data() const
{
    return (ipv4_unicast_scale_no_tcam !=  nullptr && ipv4_unicast_scale_no_tcam->has_data())
	|| (ipv6_unicast_scale_no_tcam !=  nullptr && ipv6_unicast_scale_no_tcam->has_data());
}

bool HwModuleProfileConfig::FibScale::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4_unicast_scale_no_tcam !=  nullptr && ipv4_unicast_scale_no_tcam->has_operation())
	|| (ipv6_unicast_scale_no_tcam !=  nullptr && ipv6_unicast_scale_no_tcam->has_operation());
}

std::string HwModuleProfileConfig::FibScale::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-scale";

    return path_buffer.str();

}

const EntityPath HwModuleProfileConfig::FibScale::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HwModuleProfileConfig::FibScale::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unicast-scale-no-tcam")
    {
        if(ipv4_unicast_scale_no_tcam == nullptr)
        {
            ipv4_unicast_scale_no_tcam = std::make_shared<HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam>();
        }
        return ipv4_unicast_scale_no_tcam;
    }

    if(child_yang_name == "ipv6-unicast-scale-no-tcam")
    {
        if(ipv6_unicast_scale_no_tcam == nullptr)
        {
            ipv6_unicast_scale_no_tcam = std::make_shared<HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam>();
        }
        return ipv6_unicast_scale_no_tcam;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::FibScale::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_unicast_scale_no_tcam != nullptr)
    {
        children["ipv4-unicast-scale-no-tcam"] = ipv4_unicast_scale_no_tcam;
    }

    if(ipv6_unicast_scale_no_tcam != nullptr)
    {
        children["ipv6-unicast-scale-no-tcam"] = ipv6_unicast_scale_no_tcam;
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
    if(name == "ipv4-unicast-scale-no-tcam" || name == "ipv6-unicast-scale-no-tcam")
        return true;
    return false;
}

HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::Ipv6UnicastScaleNoTcam()
    :
    scale_ipv6_no_tcam(std::make_shared<HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam>())
{
    scale_ipv6_no_tcam->parent = this;

    yang_name = "ipv6-unicast-scale-no-tcam"; yang_parent_name = "fib-scale";
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

std::string HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-unicast-scale-no-tcam";

    return path_buffer.str();

}

const EntityPath HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/fib-scale/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    yang_name = "scale-ipv6-no-tcam"; yang_parent_name = "ipv6-unicast-scale-no-tcam";
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

std::string HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scale-ipv6-no-tcam";

    return path_buffer.str();

}

const EntityPath HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/fib-scale/ipv6-unicast-scale-no-tcam/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internet_optimized_ipv6_no_tcam.is_set || is_set(internet_optimized_ipv6_no_tcam.yfilter)) leaf_name_data.push_back(internet_optimized_ipv6_no_tcam.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::FibScale::Ipv6UnicastScaleNoTcam::ScaleIpv6NoTcam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

    yang_name = "ipv4-unicast-scale-no-tcam"; yang_parent_name = "fib-scale";
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

std::string HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast-scale-no-tcam";

    return path_buffer.str();

}

const EntityPath HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/fib-scale/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    host_optimized_ipv4_no_tcam{YType::str, "host-optimized-ipv4-no-tcam"},
    internet_optimized_ipv4_no_tcam{YType::str, "internet-optimized-ipv4-no-tcam"}
{
    yang_name = "scale-ipv4-no-tcam"; yang_parent_name = "ipv4-unicast-scale-no-tcam";
}

HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::~ScaleIpv4NoTcam()
{
}

bool HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::has_data() const
{
    return host_optimized_ipv4_no_tcam.is_set
	|| internet_optimized_ipv4_no_tcam.is_set;
}

bool HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(host_optimized_ipv4_no_tcam.yfilter)
	|| ydk::is_set(internet_optimized_ipv4_no_tcam.yfilter);
}

std::string HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "scale-ipv4-no-tcam";

    return path_buffer.str();

}

const EntityPath HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/fib-scale/ipv4-unicast-scale-no-tcam/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_optimized_ipv4_no_tcam.is_set || is_set(host_optimized_ipv4_no_tcam.yfilter)) leaf_name_data.push_back(host_optimized_ipv4_no_tcam.get_name_leafdata());
    if (internet_optimized_ipv4_no_tcam.is_set || is_set(internet_optimized_ipv4_no_tcam.yfilter)) leaf_name_data.push_back(internet_optimized_ipv4_no_tcam.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-optimized-ipv4-no-tcam")
    {
        host_optimized_ipv4_no_tcam = value;
        host_optimized_ipv4_no_tcam.value_namespace = name_space;
        host_optimized_ipv4_no_tcam.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internet-optimized-ipv4-no-tcam")
    {
        internet_optimized_ipv4_no_tcam = value;
        internet_optimized_ipv4_no_tcam.value_namespace = name_space;
        internet_optimized_ipv4_no_tcam.value_namespace_prefix = name_space_prefix;
    }
}

void HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-optimized-ipv4-no-tcam")
    {
        host_optimized_ipv4_no_tcam.yfilter = yfilter;
    }
    if(value_path == "internet-optimized-ipv4-no-tcam")
    {
        internet_optimized_ipv4_no_tcam.yfilter = yfilter;
    }
}

bool HwModuleProfileConfig::FibScale::Ipv4UnicastScaleNoTcam::ScaleIpv4NoTcam::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host-optimized-ipv4-no-tcam" || name == "internet-optimized-ipv4-no-tcam")
        return true;
    return false;
}

HwModuleProfileConfig::Tcam::Tcam()
    :
    fib_tcam_scale(std::make_shared<HwModuleProfileConfig::Tcam::FibTcamScale>())
{
    fib_tcam_scale->parent = this;

    yang_name = "tcam"; yang_parent_name = "hw-module-profile-config";
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

std::string HwModuleProfileConfig::Tcam::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcam";

    return path_buffer.str();

}

const EntityPath HwModuleProfileConfig::Tcam::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

    yang_name = "fib-tcam-scale"; yang_parent_name = "tcam";
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

std::string HwModuleProfileConfig::Tcam::FibTcamScale::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-tcam-scale";

    return path_buffer.str();

}

const EntityPath HwModuleProfileConfig::Tcam::FibTcamScale::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/tcam/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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
    yang_name = "ipv4-unicast-scale"; yang_parent_name = "fib-tcam-scale";
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

std::string HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unicast-scale";

    return path_buffer.str();

}

const EntityPath HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fia-hw-profile-cfg:hw-module-profile-config/tcam/fib-tcam-scale/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_scale.is_set || is_set(ipv4_scale.yfilter)) leaf_name_data.push_back(ipv4_scale.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> HwModuleProfileConfig::Tcam::FibTcamScale::Ipv4UnicastScale::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

