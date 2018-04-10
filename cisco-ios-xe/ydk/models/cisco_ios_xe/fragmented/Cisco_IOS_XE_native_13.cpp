
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_13.hpp"
#include "Cisco_IOS_XE_native_18.hpp"
#include "Cisco_IOS_XE_native_14.hpp"
#include "Cisco_IOS_XE_native_17.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_15.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Vlan::VlanList::PrivateVlan::PrivateVlan()
    :
    primary{YType::empty, "primary"},
    association{YType::str, "association"},
    community{YType::empty, "community"},
    isolated{YType::empty, "isolated"}
{

    yang_name = "private-vlan"; yang_parent_name = "vlan-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::VlanList::PrivateVlan::~PrivateVlan()
{
}

bool Native::Vlan::VlanList::PrivateVlan::has_data() const
{
    return primary.is_set
	|| association.is_set
	|| community.is_set
	|| isolated.is_set;
}

bool Native::Vlan::VlanList::PrivateVlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(association.yfilter)
	|| ydk::is_set(community.yfilter)
	|| ydk::is_set(isolated.yfilter);
}

std::string Native::Vlan::VlanList::PrivateVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::VlanList::PrivateVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (association.is_set || is_set(association.yfilter)) leaf_name_data.push_back(association.get_name_leafdata());
    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());
    if (isolated.is_set || is_set(isolated.yfilter)) leaf_name_data.push_back(isolated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::VlanList::PrivateVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::VlanList::PrivateVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vlan::VlanList::PrivateVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "association")
    {
        association = value;
        association.value_namespace = name_space;
        association.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isolated")
    {
        isolated = value;
        isolated.value_namespace = name_space;
        isolated.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::VlanList::PrivateVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "association")
    {
        association.yfilter = yfilter;
    }
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
    if(value_path == "isolated")
    {
        isolated.yfilter = yfilter;
    }
}

bool Native::Vlan::VlanList::PrivateVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "association" || name == "community" || name == "isolated")
        return true;
    return false;
}

Native::Vlan::VlanList::Lldp::Lldp()
    :
    run{YType::empty, "run"}
{

    yang_name = "lldp"; yang_parent_name = "vlan-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::VlanList::Lldp::~Lldp()
{
}

bool Native::Vlan::VlanList::Lldp::has_data() const
{
    return run.is_set;
}

bool Native::Vlan::VlanList::Lldp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(run.yfilter);
}

std::string Native::Vlan::VlanList::Lldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::VlanList::Lldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (run.is_set || is_set(run.yfilter)) leaf_name_data.push_back(run.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::VlanList::Lldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::VlanList::Lldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vlan::VlanList::Lldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "run")
    {
        run = value;
        run.value_namespace = name_space;
        run.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::VlanList::Lldp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "run")
    {
        run.yfilter = yfilter;
    }
}

bool Native::Vlan::VlanList::Lldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "run")
        return true;
    return false;
}

Native::Mvrp::Mvrp()
    :
    global{YType::empty, "Cisco-IOS-XE-mvrp:global"}
    	,
    mac_learning(std::make_shared<Native::Mvrp::MacLearning>())
	,vlan(std::make_shared<Native::Mvrp::Vlan>())
{
    mac_learning->parent = this;
    vlan->parent = this;

    yang_name = "mvrp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mvrp::~Mvrp()
{
}

bool Native::Mvrp::has_data() const
{
    return global.is_set
	|| (mac_learning !=  nullptr && mac_learning->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Mvrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global.yfilter)
	|| (mac_learning !=  nullptr && mac_learning->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Mvrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mvrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mvrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mvrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-mvrp:mac-learning")
    {
        if(mac_learning == nullptr)
        {
            mac_learning = std::make_shared<Native::Mvrp::MacLearning>();
        }
        return mac_learning;
    }

    if(child_yang_name == "Cisco-IOS-XE-mvrp:vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Mvrp::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mvrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mac_learning != nullptr)
    {
        children["Cisco-IOS-XE-mvrp:mac-learning"] = mac_learning;
    }

    if(vlan != nullptr)
    {
        children["Cisco-IOS-XE-mvrp:vlan"] = vlan;
    }

    return children;
}

void Native::Mvrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-mvrp:global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mvrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
}

bool Native::Mvrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-learning" || name == "vlan" || name == "global")
        return true;
    return false;
}

Native::Mvrp::MacLearning::MacLearning()
    :
    auto_{YType::empty, "auto"}
{

    yang_name = "mac-learning"; yang_parent_name = "mvrp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mvrp::MacLearning::~MacLearning()
{
}

bool Native::Mvrp::MacLearning::has_data() const
{
    return auto_.is_set;
}

bool Native::Mvrp::MacLearning::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auto_.yfilter);
}

std::string Native::Mvrp::MacLearning::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mvrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mvrp::MacLearning::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mvrp:mac-learning";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mvrp::MacLearning::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_.is_set || is_set(auto_.yfilter)) leaf_name_data.push_back(auto_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mvrp::MacLearning::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mvrp::MacLearning::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mvrp::MacLearning::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auto")
    {
        auto_ = value;
        auto_.value_namespace = name_space;
        auto_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mvrp::MacLearning::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auto")
    {
        auto_.yfilter = yfilter;
    }
}

bool Native::Mvrp::MacLearning::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto")
        return true;
    return false;
}

Native::Mvrp::Vlan::Vlan()
    :
    create{YType::empty, "create"}
{

    yang_name = "vlan"; yang_parent_name = "mvrp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Mvrp::Vlan::~Vlan()
{
}

bool Native::Mvrp::Vlan::has_data() const
{
    return create.is_set;
}

bool Native::Mvrp::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(create.yfilter);
}

std::string Native::Mvrp::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/mvrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Mvrp::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mvrp:vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Mvrp::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (create.is_set || is_set(create.yfilter)) leaf_name_data.push_back(create.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Mvrp::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Mvrp::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Mvrp::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "create")
    {
        create = value;
        create.value_namespace = name_space;
        create.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Mvrp::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "create")
    {
        create.yfilter = yfilter;
    }
}

bool Native::Mvrp::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "create")
        return true;
    return false;
}

Native::Avb::Avb()
    :
    strict{YType::empty, "Cisco-IOS-XE-avb:strict"}
{

    yang_name = "avb"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Avb::~Avb()
{
}

bool Native::Avb::has_data() const
{
    return strict.is_set;
}

bool Native::Avb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(strict.yfilter);
}

std::string Native::Avb::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (strict.is_set || is_set(strict.yfilter)) leaf_name_data.push_back(strict.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Avb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Avb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Avb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-avb:strict")
    {
        strict = value;
        strict.value_namespace = name_space;
        strict.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Avb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "strict")
    {
        strict.yfilter = yfilter;
    }
}

bool Native::Avb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "strict")
        return true;
    return false;
}

Native::Ptp::Ptp()
    :
    domain{YType::uint8, "Cisco-IOS-XE-ptp:domain"},
    neighbor_propagation_delay_threshold{YType::uint32, "Cisco-IOS-XE-ptp:neighbor-propagation-delay-threshold"},
    priority1{YType::uint8, "Cisco-IOS-XE-ptp:priority1"},
    priority2{YType::uint8, "Cisco-IOS-XE-ptp:priority2"}
    	,
    profile(std::make_shared<Native::Ptp::Profile>())
	,mode(std::make_shared<Native::Ptp::Mode>())
{
    profile->parent = this;
    mode->parent = this;

    yang_name = "ptp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ptp::~Ptp()
{
}

bool Native::Ptp::has_data() const
{
    return domain.is_set
	|| neighbor_propagation_delay_threshold.is_set
	|| priority1.is_set
	|| priority2.is_set
	|| (profile !=  nullptr && profile->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Ptp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(neighbor_propagation_delay_threshold.yfilter)
	|| ydk::is_set(priority1.yfilter)
	|| ydk::is_set(priority2.yfilter)
	|| (profile !=  nullptr && profile->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Ptp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ptp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ptp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (neighbor_propagation_delay_threshold.is_set || is_set(neighbor_propagation_delay_threshold.yfilter)) leaf_name_data.push_back(neighbor_propagation_delay_threshold.get_name_leafdata());
    if (priority1.is_set || is_set(priority1.yfilter)) leaf_name_data.push_back(priority1.get_name_leafdata());
    if (priority2.is_set || is_set(priority2.yfilter)) leaf_name_data.push_back(priority2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ptp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-ptp:profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Native::Ptp::Profile>();
        }
        return profile;
    }

    if(child_yang_name == "Cisco-IOS-XE-ptp:mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Ptp::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ptp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(profile != nullptr)
    {
        children["Cisco-IOS-XE-ptp:profile"] = profile;
    }

    if(mode != nullptr)
    {
        children["Cisco-IOS-XE-ptp:mode"] = mode;
    }

    return children;
}

void Native::Ptp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-ptp:domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ptp:neighbor-propagation-delay-threshold")
    {
        neighbor_propagation_delay_threshold = value;
        neighbor_propagation_delay_threshold.value_namespace = name_space;
        neighbor_propagation_delay_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ptp:priority1")
    {
        priority1 = value;
        priority1.value_namespace = name_space;
        priority1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-ptp:priority2")
    {
        priority2 = value;
        priority2.value_namespace = name_space;
        priority2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ptp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "neighbor-propagation-delay-threshold")
    {
        neighbor_propagation_delay_threshold.yfilter = yfilter;
    }
    if(value_path == "priority1")
    {
        priority1.yfilter = yfilter;
    }
    if(value_path == "priority2")
    {
        priority2.yfilter = yfilter;
    }
}

bool Native::Ptp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile" || name == "mode" || name == "domain" || name == "neighbor-propagation-delay-threshold" || name == "priority1" || name == "priority2")
        return true;
    return false;
}

Native::Ptp::Profile::Profile()
    :
    dot1as{YType::empty, "dot1as"}
{

    yang_name = "profile"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ptp::Profile::~Profile()
{
}

bool Native::Ptp::Profile::has_data() const
{
    return dot1as.is_set;
}

bool Native::Ptp::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1as.yfilter);
}

std::string Native::Ptp::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ptp::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ptp:profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ptp::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1as.is_set || is_set(dot1as.yfilter)) leaf_name_data.push_back(dot1as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ptp::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ptp::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ptp::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1as")
    {
        dot1as = value;
        dot1as.value_namespace = name_space;
        dot1as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ptp::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1as")
    {
        dot1as.yfilter = yfilter;
    }
}

bool Native::Ptp::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1as")
        return true;
    return false;
}

Native::Ptp::Mode::Mode()
    :
    e2etransparent{YType::empty, "e2etransparent"},
    p2ptransparent{YType::empty, "p2ptransparent"}
    	,
    boundary(std::make_shared<Native::Ptp::Mode::Boundary>())
{
    boundary->parent = this;

    yang_name = "mode"; yang_parent_name = "ptp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ptp::Mode::~Mode()
{
}

bool Native::Ptp::Mode::has_data() const
{
    return e2etransparent.is_set
	|| p2ptransparent.is_set
	|| (boundary !=  nullptr && boundary->has_data());
}

bool Native::Ptp::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(e2etransparent.yfilter)
	|| ydk::is_set(p2ptransparent.yfilter)
	|| (boundary !=  nullptr && boundary->has_operation());
}

std::string Native::Ptp::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ptp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ptp::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ptp:mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ptp::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (e2etransparent.is_set || is_set(e2etransparent.yfilter)) leaf_name_data.push_back(e2etransparent.get_name_leafdata());
    if (p2ptransparent.is_set || is_set(p2ptransparent.yfilter)) leaf_name_data.push_back(p2ptransparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ptp::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "boundary")
    {
        if(boundary == nullptr)
        {
            boundary = std::make_shared<Native::Ptp::Mode::Boundary>();
        }
        return boundary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ptp::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(boundary != nullptr)
    {
        children["boundary"] = boundary;
    }

    return children;
}

void Native::Ptp::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "e2etransparent")
    {
        e2etransparent = value;
        e2etransparent.value_namespace = name_space;
        e2etransparent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2ptransparent")
    {
        p2ptransparent = value;
        p2ptransparent.value_namespace = name_space;
        p2ptransparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ptp::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "e2etransparent")
    {
        e2etransparent.yfilter = yfilter;
    }
    if(value_path == "p2ptransparent")
    {
        p2ptransparent.yfilter = yfilter;
    }
}

bool Native::Ptp::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "boundary" || name == "e2etransparent" || name == "p2ptransparent")
        return true;
    return false;
}

Native::Ptp::Mode::Boundary::Boundary()
    :
    delay_req{YType::empty, "delay-req"},
    pdelay_req{YType::empty, "pdelay-req"}
{

    yang_name = "boundary"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ptp::Mode::Boundary::~Boundary()
{
}

bool Native::Ptp::Mode::Boundary::has_data() const
{
    return delay_req.is_set
	|| pdelay_req.is_set;
}

bool Native::Ptp::Mode::Boundary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay_req.yfilter)
	|| ydk::is_set(pdelay_req.yfilter);
}

std::string Native::Ptp::Mode::Boundary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ptp/Cisco-IOS-XE-ptp:mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ptp::Mode::Boundary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boundary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ptp::Mode::Boundary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay_req.is_set || is_set(delay_req.yfilter)) leaf_name_data.push_back(delay_req.get_name_leafdata());
    if (pdelay_req.is_set || is_set(pdelay_req.yfilter)) leaf_name_data.push_back(pdelay_req.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ptp::Mode::Boundary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ptp::Mode::Boundary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ptp::Mode::Boundary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay-req")
    {
        delay_req = value;
        delay_req.value_namespace = name_space;
        delay_req.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdelay-req")
    {
        pdelay_req = value;
        pdelay_req.value_namespace = name_space;
        pdelay_req.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ptp::Mode::Boundary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay-req")
    {
        delay_req.yfilter = yfilter;
    }
    if(value_path == "pdelay-req")
    {
        pdelay_req.yfilter = yfilter;
    }
}

bool Native::Ptp::Mode::Boundary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay-req" || name == "pdelay-req")
        return true;
    return false;
}

Native::Cdp::Cdp()
    :
    holdtime{YType::uint8, "Cisco-IOS-XE-cdp:holdtime"},
    timer{YType::uint8, "Cisco-IOS-XE-cdp:timer"},
    run{YType::empty, "Cisco-IOS-XE-cdp:run"}
{

    yang_name = "cdp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Cdp::~Cdp()
{
}

bool Native::Cdp::has_data() const
{
    return holdtime.is_set
	|| timer.is_set
	|| run.is_set;
}

bool Native::Cdp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| ydk::is_set(run.yfilter);
}

std::string Native::Cdp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cdp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cdp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());
    if (run.is_set || is_set(run.yfilter)) leaf_name_data.push_back(run.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Cdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Cdp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Cdp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-cdp:holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-cdp:timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-cdp:run")
    {
        run = value;
        run.value_namespace = name_space;
        run.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cdp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
    if(value_path == "run")
    {
        run.yfilter = yfilter;
    }
}

bool Native::Cdp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "holdtime" || name == "timer" || name == "run")
        return true;
    return false;
}

Native::Avc::Avc()
    :
    dns_as(std::make_shared<Native::Avc::DnsAs>())
	,sd_service(nullptr) // presence node
{
    dns_as->parent = this;

    yang_name = "avc"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Avc::~Avc()
{
}

bool Native::Avc::has_data() const
{
    return (dns_as !=  nullptr && dns_as->has_data())
	|| (sd_service !=  nullptr && sd_service->has_data());
}

bool Native::Avc::has_operation() const
{
    return is_set(yfilter)
	|| (dns_as !=  nullptr && dns_as->has_operation())
	|| (sd_service !=  nullptr && sd_service->has_operation());
}

std::string Native::Avc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "avc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Avc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-nbar:dns-as")
    {
        if(dns_as == nullptr)
        {
            dns_as = std::make_shared<Native::Avc::DnsAs>();
        }
        return dns_as;
    }

    if(child_yang_name == "Cisco-IOS-XE-nbar:sd-service")
    {
        if(sd_service == nullptr)
        {
            sd_service = std::make_shared<Native::Avc::SdService>();
        }
        return sd_service;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Avc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dns_as != nullptr)
    {
        children["Cisco-IOS-XE-nbar:dns-as"] = dns_as;
    }

    if(sd_service != nullptr)
    {
        children["Cisco-IOS-XE-nbar:sd-service"] = sd_service;
    }

    return children;
}

void Native::Avc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Avc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Avc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns-as" || name == "sd-service")
        return true;
    return false;
}

Native::Avc::DnsAs::DnsAs()
    :
    client(std::make_shared<Native::Avc::DnsAs::Client>())
{
    client->parent = this;

    yang_name = "dns-as"; yang_parent_name = "avc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Avc::DnsAs::~DnsAs()
{
}

bool Native::Avc::DnsAs::has_data() const
{
    return (client !=  nullptr && client->has_data());
}

bool Native::Avc::DnsAs::has_operation() const
{
    return is_set(yfilter)
	|| (client !=  nullptr && client->has_operation());
}

std::string Native::Avc::DnsAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/avc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::DnsAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nbar:dns-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::DnsAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Avc::DnsAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Avc::DnsAs::Client>();
        }
        return client;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Avc::DnsAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(client != nullptr)
    {
        children["client"] = client;
    }

    return children;
}

void Native::Avc::DnsAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Avc::DnsAs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Avc::DnsAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client")
        return true;
    return false;
}

Native::Avc::DnsAs::Client::Client()
    :
    enable{YType::empty, "enable"}
    	,
    trusted_domains(nullptr) // presence node
{

    yang_name = "client"; yang_parent_name = "dns-as"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Avc::DnsAs::Client::~Client()
{
}

bool Native::Avc::DnsAs::Client::has_data() const
{
    return enable.is_set
	|| (trusted_domains !=  nullptr && trusted_domains->has_data());
}

bool Native::Avc::DnsAs::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (trusted_domains !=  nullptr && trusted_domains->has_operation());
}

std::string Native::Avc::DnsAs::Client::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/avc/Cisco-IOS-XE-nbar:dns-as/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::DnsAs::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::DnsAs::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Avc::DnsAs::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trusted-domains")
    {
        if(trusted_domains == nullptr)
        {
            trusted_domains = std::make_shared<Native::Avc::DnsAs::Client::TrustedDomains>();
        }
        return trusted_domains;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Avc::DnsAs::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(trusted_domains != nullptr)
    {
        children["trusted-domains"] = trusted_domains;
    }

    return children;
}

void Native::Avc::DnsAs::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Avc::DnsAs::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Avc::DnsAs::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trusted-domains" || name == "enable")
        return true;
    return false;
}

Native::Avc::DnsAs::Client::TrustedDomains::TrustedDomains()
    :
    domain{YType::str, "domain"}
{

    yang_name = "trusted-domains"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Avc::DnsAs::Client::TrustedDomains::~TrustedDomains()
{
}

bool Native::Avc::DnsAs::Client::TrustedDomains::has_data() const
{
    return domain.is_set;
}

bool Native::Avc::DnsAs::Client::TrustedDomains::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::Avc::DnsAs::Client::TrustedDomains::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/avc/Cisco-IOS-XE-nbar:dns-as/client/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::DnsAs::Client::TrustedDomains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trusted-domains";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::DnsAs::Client::TrustedDomains::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Avc::DnsAs::Client::TrustedDomains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Avc::DnsAs::Client::TrustedDomains::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Avc::DnsAs::Client::TrustedDomains::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Avc::DnsAs::Client::TrustedDomains::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::Avc::DnsAs::Client::TrustedDomains::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain")
        return true;
    return false;
}

Native::Avc::SdService::SdService()
    :
    segment{YType::str, "segment"}
    	,
    controller(nullptr) // presence node
{

    yang_name = "sd-service"; yang_parent_name = "avc"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Avc::SdService::~SdService()
{
}

bool Native::Avc::SdService::has_data() const
{
    return segment.is_set
	|| (controller !=  nullptr && controller->has_data());
}

bool Native::Avc::SdService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment.yfilter)
	|| (controller !=  nullptr && controller->has_operation());
}

std::string Native::Avc::SdService::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/avc/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::SdService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nbar:sd-service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::SdService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment.is_set || is_set(segment.yfilter)) leaf_name_data.push_back(segment.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Avc::SdService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "controller")
    {
        if(controller == nullptr)
        {
            controller = std::make_shared<Native::Avc::SdService::Controller>();
        }
        return controller;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Avc::SdService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(controller != nullptr)
    {
        children["controller"] = controller;
    }

    return children;
}

void Native::Avc::SdService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "segment")
    {
        segment = value;
        segment.value_namespace = name_space;
        segment.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Avc::SdService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "segment")
    {
        segment.yfilter = yfilter;
    }
}

bool Native::Avc::SdService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "controller" || name == "segment")
        return true;
    return false;
}

Native::Avc::SdService::Controller::Controller()
    :
    dscp{YType::uint8, "dscp"},
    vrf{YType::str, "vrf"}
    	,
    address(std::make_shared<Native::Avc::SdService::Controller::Address>())
	,destination_ports(std::make_shared<Native::Avc::SdService::Controller::DestinationPorts>())
{
    address->parent = this;
    destination_ports->parent = this;

    yang_name = "controller"; yang_parent_name = "sd-service"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Avc::SdService::Controller::~Controller()
{
}

bool Native::Avc::SdService::Controller::has_data() const
{
    return dscp.is_set
	|| vrf.is_set
	|| (address !=  nullptr && address->has_data())
	|| (destination_ports !=  nullptr && destination_ports->has_data());
}

bool Native::Avc::SdService::Controller::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (destination_ports !=  nullptr && destination_ports->has_operation());
}

std::string Native::Avc::SdService::Controller::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/avc/Cisco-IOS-XE-nbar:sd-service/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::SdService::Controller::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "controller";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::SdService::Controller::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Avc::SdService::Controller::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Avc::SdService::Controller::Address>();
        }
        return address;
    }

    if(child_yang_name == "destination-ports")
    {
        if(destination_ports == nullptr)
        {
            destination_ports = std::make_shared<Native::Avc::SdService::Controller::DestinationPorts>();
        }
        return destination_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Avc::SdService::Controller::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(destination_ports != nullptr)
    {
        children["destination-ports"] = destination_ports;
    }

    return children;
}

void Native::Avc::SdService::Controller::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Avc::SdService::Controller::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Avc::SdService::Controller::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "destination-ports" || name == "dscp" || name == "vrf")
        return true;
    return false;
}

Native::Avc::SdService::Controller::Address::Address()
{

    yang_name = "address"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Avc::SdService::Controller::Address::~Address()
{
}

bool Native::Avc::SdService::Controller::Address::has_data() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Avc::SdService::Controller::Address::has_operation() const
{
    for (std::size_t index=0; index<ipv4_or_hostname.size(); index++)
    {
        if(ipv4_or_hostname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Avc::SdService::Controller::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/avc/Cisco-IOS-XE-nbar:sd-service/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::SdService::Controller::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::SdService::Controller::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Avc::SdService::Controller::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-or-hostname")
    {
        auto c = std::make_shared<Native::Avc::SdService::Controller::Address::Ipv4OrHostname>();
        c->parent = this;
        ipv4_or_hostname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Avc::SdService::Controller::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : ipv4_or_hostname)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Avc::SdService::Controller::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Avc::SdService::Controller::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Avc::SdService::Controller::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname")
        return true;
    return false;
}

Native::Avc::SdService::Controller::Address::Ipv4OrHostname::Ipv4OrHostname()
    :
    ipv4_or_hostname{YType::str, "ipv4-or-hostname"},
    ipv4_or_hostname0{YType::str, "ipv4-or-hostname0"}
{

    yang_name = "ipv4-or-hostname"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Avc::SdService::Controller::Address::Ipv4OrHostname::~Ipv4OrHostname()
{
}

bool Native::Avc::SdService::Controller::Address::Ipv4OrHostname::has_data() const
{
    return ipv4_or_hostname.is_set
	|| ipv4_or_hostname0.is_set;
}

bool Native::Avc::SdService::Controller::Address::Ipv4OrHostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_or_hostname.yfilter)
	|| ydk::is_set(ipv4_or_hostname0.yfilter);
}

std::string Native::Avc::SdService::Controller::Address::Ipv4OrHostname::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/avc/Cisco-IOS-XE-nbar:sd-service/controller/address/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::SdService::Controller::Address::Ipv4OrHostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-or-hostname" <<"[ipv4-or-hostname='" <<ipv4_or_hostname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::SdService::Controller::Address::Ipv4OrHostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_or_hostname.is_set || is_set(ipv4_or_hostname.yfilter)) leaf_name_data.push_back(ipv4_or_hostname.get_name_leafdata());
    if (ipv4_or_hostname0.is_set || is_set(ipv4_or_hostname0.yfilter)) leaf_name_data.push_back(ipv4_or_hostname0.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Avc::SdService::Controller::Address::Ipv4OrHostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Avc::SdService::Controller::Address::Ipv4OrHostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Avc::SdService::Controller::Address::Ipv4OrHostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname = value;
        ipv4_or_hostname.value_namespace = name_space;
        ipv4_or_hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-or-hostname0")
    {
        ipv4_or_hostname0 = value;
        ipv4_or_hostname0.value_namespace = name_space;
        ipv4_or_hostname0.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Avc::SdService::Controller::Address::Ipv4OrHostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-or-hostname")
    {
        ipv4_or_hostname.yfilter = yfilter;
    }
    if(value_path == "ipv4-or-hostname0")
    {
        ipv4_or_hostname0.yfilter = yfilter;
    }
}

bool Native::Avc::SdService::Controller::Address::Ipv4OrHostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-or-hostname" || name == "ipv4-or-hostname0")
        return true;
    return false;
}

Native::Avc::SdService::Controller::DestinationPorts::DestinationPorts()
    :
    sensor_exporter{YType::uint16, "sensor-exporter"}
{

    yang_name = "destination-ports"; yang_parent_name = "controller"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Avc::SdService::Controller::DestinationPorts::~DestinationPorts()
{
}

bool Native::Avc::SdService::Controller::DestinationPorts::has_data() const
{
    return sensor_exporter.is_set;
}

bool Native::Avc::SdService::Controller::DestinationPorts::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sensor_exporter.yfilter);
}

std::string Native::Avc::SdService::Controller::DestinationPorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/avc/Cisco-IOS-XE-nbar:sd-service/controller/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Avc::SdService::Controller::DestinationPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Avc::SdService::Controller::DestinationPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sensor_exporter.is_set || is_set(sensor_exporter.yfilter)) leaf_name_data.push_back(sensor_exporter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Avc::SdService::Controller::DestinationPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Avc::SdService::Controller::DestinationPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Avc::SdService::Controller::DestinationPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sensor-exporter")
    {
        sensor_exporter = value;
        sensor_exporter.value_namespace = name_space;
        sensor_exporter.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Avc::SdService::Controller::DestinationPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sensor-exporter")
    {
        sensor_exporter.yfilter = yfilter;
    }
}

bool Native::Avc::SdService::Controller::DestinationPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sensor-exporter")
        return true;
    return false;
}

Native::Policy::Policy()
{

    yang_name = "policy"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Policy::~Policy()
{
}

bool Native::Policy::has_data() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<policy_map.size(); index++)
    {
        if(policy_map[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Policy::has_operation() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<policy_map.size(); index++)
    {
        if(policy_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-policy:class-map")
    {
        auto c = std::make_shared<Native::Policy::ClassMap>();
        c->parent = this;
        class_map.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-policy:policy-map")
    {
        auto c = std::make_shared<Native::Policy::PolicyMap>();
        c->parent = this;
        policy_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::get_children() const
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

    count = 0;
    for (auto const & c : policy_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-map" || name == "policy-map")
        return true;
    return false;
}

Native::Policy::ClassMap::ClassMap()
    :
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    subscriber{YType::empty, "subscriber"},
    protocol{YType::enumeration, "protocol"},
    prematch{YType::enumeration, "prematch"},
    description{YType::str, "description"}
    	,
    match(std::make_shared<Native::Policy::ClassMap::Match>())
	,no_match(std::make_shared<Native::Policy::ClassMap::NoMatch>())
{
    match->parent = this;
    no_match->parent = this;

    yang_name = "class-map"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Policy::ClassMap::~ClassMap()
{
}

bool Native::Policy::ClassMap::has_data() const
{
    return name.is_set
	|| type.is_set
	|| subscriber.is_set
	|| protocol.is_set
	|| prematch.is_set
	|| description.is_set
	|| (match !=  nullptr && match->has_data())
	|| (no_match !=  nullptr && no_match->has_data());
}

bool Native::Policy::ClassMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(subscriber.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(prematch.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (match !=  nullptr && match->has_operation())
	|| (no_match !=  nullptr && no_match->has_operation());
}

std::string Native::Policy::ClassMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Policy::ClassMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:class-map" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (subscriber.is_set || is_set(subscriber.yfilter)) leaf_name_data.push_back(subscriber.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (prematch.is_set || is_set(prematch.yfilter)) leaf_name_data.push_back(prematch.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Policy::ClassMap::Match>();
        }
        return match;
    }

    if(child_yang_name == "no-match")
    {
        if(no_match == nullptr)
        {
            no_match = std::make_shared<Native::Policy::ClassMap::NoMatch>();
        }
        return no_match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(no_match != nullptr)
    {
        children["no-match"] = no_match;
    }

    return children;
}

void Native::Policy::ClassMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber")
    {
        subscriber = value;
        subscriber.value_namespace = name_space;
        subscriber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prematch")
    {
        prematch = value;
        prematch.value_namespace = name_space;
        prematch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "subscriber")
    {
        subscriber.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "prematch")
    {
        prematch.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "no-match" || name == "name" || name == "type" || name == "subscriber" || name == "protocol" || name == "prematch" || name == "description")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Match()
    :
    any{YType::empty, "any"},
    class_map{YType::str, "class-map"},
    cos{YType::uint8, "cos"},
    discard_class{YType::uint8, "discard-class"},
    dscp{YType::str, "dscp"},
    fr_de{YType::empty, "fr-de"},
    fr_dlci{YType::uint16, "fr-dlci"},
    input_interface{YType::str, "input-interface"},
    non_client_nrt{YType::empty, "non-client-nrt"},
    precedence{YType::str, "precedence"},
    qos_group{YType::uint16, "qos-group"},
    peer{YType::str, "peer"},
    client_type{YType::enumeration, "client-type"},
    device_type{YType::str, "device-type"},
    interface{YType::str, "interface"},
    ip_address{YType::str, "ip-address"},
    ipv6_address{YType::str, "ipv6-address"},
    mac_address{YType::str, "mac-address"},
    oui{YType::str, "oui"},
    port_type{YType::enumeration, "port-type"},
    service_template{YType::str, "service-template"},
    session_type{YType::enumeration, "session-type"},
    sgt{YType::uint16, "sgt"},
    ssid{YType::str, "ssid"},
    tag{YType::str, "tag"},
    timer{YType::str, "timer"},
    user_role{YType::str, "user-role"},
    username{YType::str, "username"}
    	,
    current_method_priority(std::make_shared<Native::Policy::ClassMap::Match::CurrentMethodPriority>())
	,application(std::make_shared<Native::Policy::ClassMap::Match::Application>())
	,access_group(std::make_shared<Native::Policy::ClassMap::Match::AccessGroup>())
	,destination_address(std::make_shared<Native::Policy::ClassMap::Match::DestinationAddress>())
	,group_object(std::make_shared<Native::Policy::ClassMap::Match::GroupObject>())
	,ip(std::make_shared<Native::Policy::ClassMap::Match::Ip>())
	,mpls(std::make_shared<Native::Policy::ClassMap::Match::Mpls>())
	,packet(std::make_shared<Native::Policy::ClassMap::Match::Packet>())
	,protocol(std::make_shared<Native::Policy::ClassMap::Match::Protocol>())
	,security_group(std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup>())
	,source_address(std::make_shared<Native::Policy::ClassMap::Match::SourceAddress>())
	,vlan(std::make_shared<Native::Policy::ClassMap::Match::Vlan>())
	,authorization_status(std::make_shared<Native::Policy::ClassMap::Match::AuthorizationStatus>())
	,authorizing_method_priority(std::make_shared<Native::Policy::ClassMap::Match::AuthorizingMethodPriority>())
	,method(std::make_shared<Native::Policy::ClassMap::Match::Method>())
	,result_type(std::make_shared<Native::Policy::ClassMap::Match::ResultType>())
	,not_(std::make_shared<Native::Policy::ClassMap::Match::Not>())
{
    current_method_priority->parent = this;
    application->parent = this;
    access_group->parent = this;
    destination_address->parent = this;
    group_object->parent = this;
    ip->parent = this;
    mpls->parent = this;
    packet->parent = this;
    protocol->parent = this;
    security_group->parent = this;
    source_address->parent = this;
    vlan->parent = this;
    authorization_status->parent = this;
    authorizing_method_priority->parent = this;
    method->parent = this;
    result_type->parent = this;
    not_->parent = this;

    yang_name = "match"; yang_parent_name = "class-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::~Match()
{
}

bool Native::Policy::ClassMap::Match::has_data() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<activated_service_template.size(); index++)
    {
        if(activated_service_template[index]->has_data())
            return true;
    }
    for (auto const & leaf : class_map.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : fr_dlci.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : input_interface.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return any.is_set
	|| fr_de.is_set
	|| non_client_nrt.is_set
	|| peer.is_set
	|| client_type.is_set
	|| device_type.is_set
	|| interface.is_set
	|| ip_address.is_set
	|| ipv6_address.is_set
	|| mac_address.is_set
	|| oui.is_set
	|| port_type.is_set
	|| service_template.is_set
	|| session_type.is_set
	|| sgt.is_set
	|| ssid.is_set
	|| tag.is_set
	|| timer.is_set
	|| user_role.is_set
	|| username.is_set
	|| (current_method_priority !=  nullptr && current_method_priority->has_data())
	|| (application !=  nullptr && application->has_data())
	|| (access_group !=  nullptr && access_group->has_data())
	|| (destination_address !=  nullptr && destination_address->has_data())
	|| (group_object !=  nullptr && group_object->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (packet !=  nullptr && packet->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (security_group !=  nullptr && security_group->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (vlan !=  nullptr && vlan->has_data())
	|| (authorization_status !=  nullptr && authorization_status->has_data())
	|| (authorizing_method_priority !=  nullptr && authorizing_method_priority->has_data())
	|| (method !=  nullptr && method->has_data())
	|| (result_type !=  nullptr && result_type->has_data())
	|| (not_ !=  nullptr && not_->has_data());
}

bool Native::Policy::ClassMap::Match::has_operation() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<activated_service_template.size(); index++)
    {
        if(activated_service_template[index]->has_operation())
            return true;
    }
    for (auto const & leaf : class_map.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : fr_dlci.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : input_interface.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(class_map.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(discard_class.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fr_de.yfilter)
	|| ydk::is_set(fr_dlci.yfilter)
	|| ydk::is_set(input_interface.yfilter)
	|| ydk::is_set(non_client_nrt.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(client_type.yfilter)
	|| ydk::is_set(device_type.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(oui.yfilter)
	|| ydk::is_set(port_type.yfilter)
	|| ydk::is_set(service_template.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(ssid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| ydk::is_set(user_role.yfilter)
	|| ydk::is_set(username.yfilter)
	|| (current_method_priority !=  nullptr && current_method_priority->has_operation())
	|| (application !=  nullptr && application->has_operation())
	|| (access_group !=  nullptr && access_group->has_operation())
	|| (destination_address !=  nullptr && destination_address->has_operation())
	|| (group_object !=  nullptr && group_object->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (packet !=  nullptr && packet->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (security_group !=  nullptr && security_group->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (authorization_status !=  nullptr && authorization_status->has_operation())
	|| (authorizing_method_priority !=  nullptr && authorizing_method_priority->has_operation())
	|| (method !=  nullptr && method->has_operation())
	|| (result_type !=  nullptr && result_type->has_operation())
	|| (not_ !=  nullptr && not_->has_operation());
}

std::string Native::Policy::ClassMap::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (fr_de.is_set || is_set(fr_de.yfilter)) leaf_name_data.push_back(fr_de.get_name_leafdata());
    if (non_client_nrt.is_set || is_set(non_client_nrt.yfilter)) leaf_name_data.push_back(non_client_nrt.get_name_leafdata());
    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (client_type.is_set || is_set(client_type.yfilter)) leaf_name_data.push_back(client_type.get_name_leafdata());
    if (device_type.is_set || is_set(device_type.yfilter)) leaf_name_data.push_back(device_type.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (oui.is_set || is_set(oui.yfilter)) leaf_name_data.push_back(oui.get_name_leafdata());
    if (port_type.is_set || is_set(port_type.yfilter)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (service_template.is_set || is_set(service_template.yfilter)) leaf_name_data.push_back(service_template.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (ssid.is_set || is_set(ssid.yfilter)) leaf_name_data.push_back(ssid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());
    if (user_role.is_set || is_set(user_role.yfilter)) leaf_name_data.push_back(user_role.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    auto class_map_name_datas = class_map.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), class_map_name_datas.begin(), class_map_name_datas.end());
    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto discard_class_name_datas = discard_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), discard_class_name_datas.begin(), discard_class_name_datas.end());
    auto dscp_name_datas = dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dscp_name_datas.begin(), dscp_name_datas.end());
    auto fr_dlci_name_datas = fr_dlci.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fr_dlci_name_datas.begin(), fr_dlci_name_datas.end());
    auto input_interface_name_datas = input_interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), input_interface_name_datas.begin(), input_interface_name_datas.end());
    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());
    auto qos_group_name_datas = qos_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), qos_group_name_datas.begin(), qos_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-method-priority")
    {
        if(current_method_priority == nullptr)
        {
            current_method_priority = std::make_shared<Native::Policy::ClassMap::Match::CurrentMethodPriority>();
        }
        return current_method_priority;
    }

    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Policy::ClassMap::Match::Application>();
        }
        return application;
    }

    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Policy::ClassMap::Match::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<Native::Policy::ClassMap::Match::DestinationAddress>();
        }
        return destination_address;
    }

    if(child_yang_name == "group-object")
    {
        if(group_object == nullptr)
        {
            group_object = std::make_shared<Native::Policy::ClassMap::Match::GroupObject>();
        }
        return group_object;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Policy::ClassMap::Match::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Policy::ClassMap::Match::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "packet")
    {
        if(packet == nullptr)
        {
            packet = std::make_shared<Native::Policy::ClassMap::Match::Packet>();
        }
        return packet;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Policy::ClassMap::Match::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "security-group")
    {
        if(security_group == nullptr)
        {
            security_group = std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup>();
        }
        return security_group;
    }

    if(child_yang_name == "service")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Service>();
        c->parent = this;
        service.push_back(c);
        return c;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Native::Policy::ClassMap::Match::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Policy::ClassMap::Match::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "activated-service-template")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::ActivatedServiceTemplate>();
        c->parent = this;
        activated_service_template.push_back(c);
        return c;
    }

    if(child_yang_name == "authorization-status")
    {
        if(authorization_status == nullptr)
        {
            authorization_status = std::make_shared<Native::Policy::ClassMap::Match::AuthorizationStatus>();
        }
        return authorization_status;
    }

    if(child_yang_name == "authorizing-method-priority")
    {
        if(authorizing_method_priority == nullptr)
        {
            authorizing_method_priority = std::make_shared<Native::Policy::ClassMap::Match::AuthorizingMethodPriority>();
        }
        return authorizing_method_priority;
    }

    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Policy::ClassMap::Match::Method>();
        }
        return method;
    }

    if(child_yang_name == "result-type")
    {
        if(result_type == nullptr)
        {
            result_type = std::make_shared<Native::Policy::ClassMap::Match::ResultType>();
        }
        return result_type;
    }

    if(child_yang_name == "not")
    {
        if(not_ == nullptr)
        {
            not_ = std::make_shared<Native::Policy::ClassMap::Match::Not>();
        }
        return not_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(current_method_priority != nullptr)
    {
        children["current-method-priority"] = current_method_priority;
    }

    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    if(group_object != nullptr)
    {
        children["group-object"] = group_object;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(packet != nullptr)
    {
        children["packet"] = packet;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(security_group != nullptr)
    {
        children["security-group"] = security_group;
    }

    count = 0;
    for (auto const & c : service)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    count = 0;
    for (auto const & c : activated_service_template)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(authorization_status != nullptr)
    {
        children["authorization-status"] = authorization_status;
    }

    if(authorizing_method_priority != nullptr)
    {
        children["authorizing-method-priority"] = authorizing_method_priority;
    }

    if(method != nullptr)
    {
        children["method"] = method;
    }

    if(result_type != nullptr)
    {
        children["result-type"] = result_type;
    }

    if(not_ != nullptr)
    {
        children["not"] = not_;
    }

    return children;
}

void Native::Policy::ClassMap::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-map")
    {
        class_map.append(value);
    }
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "discard-class")
    {
        discard_class.append(value);
    }
    if(value_path == "dscp")
    {
        dscp.append(value);
    }
    if(value_path == "fr-de")
    {
        fr_de = value;
        fr_de.value_namespace = name_space;
        fr_de.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fr-dlci")
    {
        fr_dlci.append(value);
    }
    if(value_path == "input-interface")
    {
        input_interface.append(value);
    }
    if(value_path == "non-client-nrt")
    {
        non_client_nrt = value;
        non_client_nrt.value_namespace = name_space;
        non_client_nrt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
    if(value_path == "qos-group")
    {
        qos_group.append(value);
    }
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-type")
    {
        client_type = value;
        client_type.value_namespace = name_space;
        client_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-type")
    {
        device_type = value;
        device_type.value_namespace = name_space;
        device_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oui")
    {
        oui = value;
        oui.value_namespace = name_space;
        oui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-type")
    {
        port_type = value;
        port_type.value_namespace = name_space;
        port_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-template")
    {
        service_template = value;
        service_template.value_namespace = name_space;
        service_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssid")
    {
        ssid = value;
        ssid.value_namespace = name_space;
        ssid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-role")
    {
        user_role = value;
        user_role.value_namespace = name_space;
        user_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "class-map")
    {
        class_map.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "discard-class")
    {
        discard_class.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fr-de")
    {
        fr_de.yfilter = yfilter;
    }
    if(value_path == "fr-dlci")
    {
        fr_dlci.yfilter = yfilter;
    }
    if(value_path == "input-interface")
    {
        input_interface.yfilter = yfilter;
    }
    if(value_path == "non-client-nrt")
    {
        non_client_nrt.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "client-type")
    {
        client_type.yfilter = yfilter;
    }
    if(value_path == "device-type")
    {
        device_type.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "oui")
    {
        oui.yfilter = yfilter;
    }
    if(value_path == "port-type")
    {
        port_type.yfilter = yfilter;
    }
    if(value_path == "service-template")
    {
        service_template.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "ssid")
    {
        ssid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
    if(value_path == "user-role")
    {
        user_role.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-method-priority" || name == "application" || name == "access-group" || name == "destination-address" || name == "group-object" || name == "ip" || name == "mpls" || name == "packet" || name == "protocol" || name == "security-group" || name == "service" || name == "source-address" || name == "vlan" || name == "activated-service-template" || name == "authorization-status" || name == "authorizing-method-priority" || name == "method" || name == "result-type" || name == "not" || name == "any" || name == "class-map" || name == "cos" || name == "discard-class" || name == "dscp" || name == "fr-de" || name == "fr-dlci" || name == "input-interface" || name == "non-client-nrt" || name == "precedence" || name == "qos-group" || name == "peer" || name == "client-type" || name == "device-type" || name == "interface" || name == "ip-address" || name == "ipv6-address" || name == "mac-address" || name == "oui" || name == "port-type" || name == "service-template" || name == "session-type" || name == "sgt" || name == "ssid" || name == "tag" || name == "timer" || name == "user-role" || name == "username")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::CurrentMethodPriority::CurrentMethodPriority()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"}
{

    yang_name = "current-method-priority"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::CurrentMethodPriority::~CurrentMethodPriority()
{
}

bool Native::Policy::ClassMap::Match::CurrentMethodPriority::has_data() const
{
    return eq.is_set
	|| gt.is_set
	|| lt.is_set;
}

bool Native::Policy::ClassMap::Match::CurrentMethodPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter);
}

std::string Native::Policy::ClassMap::Match::CurrentMethodPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-method-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::CurrentMethodPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::CurrentMethodPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::CurrentMethodPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::CurrentMethodPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gt")
    {
        gt = value;
        gt.value_namespace = name_space;
        gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt")
    {
        lt = value;
        lt.value_namespace = name_space;
        lt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::CurrentMethodPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "gt")
    {
        gt.yfilter = yfilter;
    }
    if(value_path == "lt")
    {
        lt.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::CurrentMethodPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eq" || name == "gt" || name == "lt")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Application::Application()
    :
    application_group(std::make_shared<Native::Policy::ClassMap::Match::Application::ApplicationGroup>())
	,attribute(std::make_shared<Native::Policy::ClassMap::Match::Application::Attribute>())
{
    application_group->parent = this;
    attribute->parent = this;

    yang_name = "application"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Application::~Application()
{
}

bool Native::Policy::ClassMap::Match::Application::has_data() const
{
    return (application_group !=  nullptr && application_group->has_data())
	|| (attribute !=  nullptr && attribute->has_data());
}

bool Native::Policy::ClassMap::Match::Application::has_operation() const
{
    return is_set(yfilter)
	|| (application_group !=  nullptr && application_group->has_operation())
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Policy::ClassMap::Match::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-group")
    {
        if(application_group == nullptr)
        {
            application_group = std::make_shared<Native::Policy::ClassMap::Match::Application::ApplicationGroup>();
        }
        return application_group;
    }

    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Policy::ClassMap::Match::Application::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(application_group != nullptr)
    {
        children["application-group"] = application_group;
    }

    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-group" || name == "attribute")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Application::ApplicationGroup::ApplicationGroup()
    :
    telepresence_group{YType::empty, "telepresence-group"},
    vmware_group{YType::empty, "vmware-group"},
    webex_group{YType::empty, "webex-group"}
{

    yang_name = "application-group"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Application::ApplicationGroup::~ApplicationGroup()
{
}

bool Native::Policy::ClassMap::Match::Application::ApplicationGroup::has_data() const
{
    return telepresence_group.is_set
	|| vmware_group.is_set
	|| webex_group.is_set;
}

bool Native::Policy::ClassMap::Match::Application::ApplicationGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(telepresence_group.yfilter)
	|| ydk::is_set(vmware_group.yfilter)
	|| ydk::is_set(webex_group.yfilter);
}

std::string Native::Policy::ClassMap::Match::Application::ApplicationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Application::ApplicationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (telepresence_group.is_set || is_set(telepresence_group.yfilter)) leaf_name_data.push_back(telepresence_group.get_name_leafdata());
    if (vmware_group.is_set || is_set(vmware_group.yfilter)) leaf_name_data.push_back(vmware_group.get_name_leafdata());
    if (webex_group.is_set || is_set(webex_group.yfilter)) leaf_name_data.push_back(webex_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Application::ApplicationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Application::ApplicationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Application::ApplicationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "telepresence-group")
    {
        telepresence_group = value;
        telepresence_group.value_namespace = name_space;
        telepresence_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmware-group")
    {
        vmware_group = value;
        vmware_group.value_namespace = name_space;
        vmware_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webex-group")
    {
        webex_group = value;
        webex_group.value_namespace = name_space;
        webex_group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Application::ApplicationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "telepresence-group")
    {
        telepresence_group.yfilter = yfilter;
    }
    if(value_path == "vmware-group")
    {
        vmware_group.yfilter = yfilter;
    }
    if(value_path == "webex-group")
    {
        webex_group.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Application::ApplicationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "telepresence-group" || name == "vmware-group" || name == "webex-group")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Application::Attribute::Attribute()
    :
    media_type{YType::enumeration, "media-type"}
{

    yang_name = "attribute"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Application::Attribute::~Attribute()
{
}

bool Native::Policy::ClassMap::Match::Application::Attribute::has_data() const
{
    return media_type.is_set;
}

bool Native::Policy::ClassMap::Match::Application::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(media_type.yfilter);
}

std::string Native::Policy::ClassMap::Match::Application::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Application::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (media_type.is_set || is_set(media_type.yfilter)) leaf_name_data.push_back(media_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Application::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Application::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Application::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "media-type")
    {
        media_type = value;
        media_type.value_namespace = name_space;
        media_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Application::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "media-type")
    {
        media_type.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Application::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "media-type")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::AccessGroup::AccessGroup()
    :
    index_{YType::uint32, "index"},
    name{YType::str, "name"}
{

    yang_name = "access-group"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::AccessGroup::~AccessGroup()
{
}

bool Native::Policy::ClassMap::Match::AccessGroup::has_data() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return index_.is_set;
}

bool Native::Policy::ClassMap::Match::AccessGroup::has_operation() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    auto name_name_datas = name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_name_datas.begin(), name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name.append(value);
    }
}

void Native::Policy::ClassMap::Match::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::DestinationAddress::DestinationAddress()
    :
    mac{YType::str, "mac"}
{

    yang_name = "destination-address"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::DestinationAddress::~DestinationAddress()
{
}

bool Native::Policy::ClassMap::Match::DestinationAddress::has_data() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::DestinationAddress::has_operation() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter);
}

std::string Native::Policy::ClassMap::Match::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_name_datas = mac.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_name_datas.begin(), mac_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac.append(value);
    }
}

void Native::Policy::ClassMap::Match::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::GroupObject::GroupObject()
    :
    security(std::make_shared<Native::Policy::ClassMap::Match::GroupObject::Security>())
{
    security->parent = this;

    yang_name = "group-object"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::GroupObject::~GroupObject()
{
}

bool Native::Policy::ClassMap::Match::GroupObject::has_data() const
{
    return (security !=  nullptr && security->has_data());
}

bool Native::Policy::ClassMap::Match::GroupObject::has_operation() const
{
    return is_set(yfilter)
	|| (security !=  nullptr && security->has_operation());
}

std::string Native::Policy::ClassMap::Match::GroupObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::GroupObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::GroupObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Native::Policy::ClassMap::Match::GroupObject::Security>();
        }
        return security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::GroupObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(security != nullptr)
    {
        children["security"] = security;
    }

    return children;
}

void Native::Policy::ClassMap::Match::GroupObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::GroupObject::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::GroupObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::GroupObject::Security::Security()
    :
    source{YType::str, "source"},
    destination{YType::str, "destination"}
{

    yang_name = "security"; yang_parent_name = "group-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::GroupObject::Security::~Security()
{
}

bool Native::Policy::ClassMap::Match::GroupObject::Security::has_data() const
{
    for (auto const & leaf : source.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : destination.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::GroupObject::Security::has_operation() const
{
    for (auto const & leaf : source.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : destination.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string Native::Policy::ClassMap::Match::GroupObject::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::GroupObject::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto source_name_datas = source.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), source_name_datas.begin(), source_name_datas.end());
    auto destination_name_datas = destination.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), destination_name_datas.begin(), destination_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::GroupObject::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::GroupObject::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::GroupObject::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source.append(value);
    }
    if(value_path == "destination")
    {
        destination.append(value);
    }
}

void Native::Policy::ClassMap::Match::GroupObject::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::GroupObject::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Ip::Ip()
    :
    dscp{YType::str, "dscp"},
    precedence{YType::str, "precedence"}
{

    yang_name = "ip"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Ip::~Ip()
{
}

bool Native::Policy::ClassMap::Match::Ip::has_data() const
{
    for (std::size_t index=0; index<rtp.size(); index++)
    {
        if(rtp[index]->has_data())
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Ip::has_operation() const
{
    for (std::size_t index=0; index<rtp.size(); index++)
    {
        if(rtp[index]->has_operation())
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(precedence.yfilter);
}

std::string Native::Policy::ClassMap::Match::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto dscp_name_datas = dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dscp_name_datas.begin(), dscp_name_datas.end());
    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtp")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Ip::Rtp>();
        c->parent = this;
        rtp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rtp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp.append(value);
    }
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
}

void Native::Policy::ClassMap::Match::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtp" || name == "dscp" || name == "precedence")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Ip::Rtp::Rtp()
    :
    port1{YType::uint16, "port1"},
    port2{YType::uint16, "port2"}
{

    yang_name = "rtp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Ip::Rtp::~Rtp()
{
}

bool Native::Policy::ClassMap::Match::Ip::Rtp::has_data() const
{
    return port1.is_set
	|| port2.is_set;
}

bool Native::Policy::ClassMap::Match::Ip::Rtp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port1.yfilter)
	|| ydk::is_set(port2.yfilter);
}

std::string Native::Policy::ClassMap::Match::Ip::Rtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp" <<"[port1='" <<port1 <<"']" <<"[port2='" <<port2 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Ip::Rtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port1.is_set || is_set(port1.yfilter)) leaf_name_data.push_back(port1.get_name_leafdata());
    if (port2.is_set || is_set(port2.yfilter)) leaf_name_data.push_back(port2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Ip::Rtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Ip::Rtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Ip::Rtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port1")
    {
        port1 = value;
        port1.value_namespace = name_space;
        port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2")
    {
        port2 = value;
        port2.value_namespace = name_space;
        port2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Ip::Rtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port1")
    {
        port1.yfilter = yfilter;
    }
    if(value_path == "port2")
    {
        port2.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Ip::Rtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port1" || name == "port2")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Mpls::Mpls()
    :
    experimental(std::make_shared<Native::Policy::ClassMap::Match::Mpls::Experimental>())
{
    experimental->parent = this;

    yang_name = "mpls"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Mpls::~Mpls()
{
}

bool Native::Policy::ClassMap::Match::Mpls::has_data() const
{
    return (experimental !=  nullptr && experimental->has_data());
}

bool Native::Policy::ClassMap::Match::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (experimental !=  nullptr && experimental->has_operation());
}

std::string Native::Policy::ClassMap::Match::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "experimental")
    {
        if(experimental == nullptr)
        {
            experimental = std::make_shared<Native::Policy::ClassMap::Match::Mpls::Experimental>();
        }
        return experimental;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(experimental != nullptr)
    {
        children["experimental"] = experimental;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "experimental")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Mpls::Experimental::Experimental()
    :
    topmost{YType::uint8, "topmost"}
{

    yang_name = "experimental"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Mpls::Experimental::~Experimental()
{
}

bool Native::Policy::ClassMap::Match::Mpls::Experimental::has_data() const
{
    for (auto const & leaf : topmost.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Mpls::Experimental::has_operation() const
{
    for (auto const & leaf : topmost.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(topmost.yfilter);
}

std::string Native::Policy::ClassMap::Match::Mpls::Experimental::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "experimental";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Mpls::Experimental::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto topmost_name_datas = topmost.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), topmost_name_datas.begin(), topmost_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Mpls::Experimental::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Mpls::Experimental::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Mpls::Experimental::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topmost")
    {
        topmost.append(value);
    }
}

void Native::Policy::ClassMap::Match::Mpls::Experimental::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topmost")
    {
        topmost.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Mpls::Experimental::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topmost")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Packet::Packet()
    :
    length(std::make_shared<Native::Policy::ClassMap::Match::Packet::Length>())
{
    length->parent = this;

    yang_name = "packet"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Packet::~Packet()
{
}

bool Native::Policy::ClassMap::Match::Packet::has_data() const
{
    return (length !=  nullptr && length->has_data());
}

bool Native::Policy::ClassMap::Match::Packet::has_operation() const
{
    return is_set(yfilter)
	|| (length !=  nullptr && length->has_operation());
}

std::string Native::Policy::ClassMap::Match::Packet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Packet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Packet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "length")
    {
        if(length == nullptr)
        {
            length = std::make_shared<Native::Policy::ClassMap::Match::Packet::Length>();
        }
        return length;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Packet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(length != nullptr)
    {
        children["length"] = length;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Packet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Packet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Packet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "length")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Packet::Length::Length()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{

    yang_name = "length"; yang_parent_name = "packet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Packet::Length::~Length()
{
}

bool Native::Policy::ClassMap::Match::Packet::Length::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Policy::ClassMap::Match::Packet::Length::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Policy::ClassMap::Match::Packet::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Packet::Length::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Packet::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Packet::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Packet::Length::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Packet::Length::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Packet::Length::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Protocol()
    :
    attribute(std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute>())
{
    attribute->parent = this;

    yang_name = "protocol"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Protocol::~Protocol()
{
}

bool Native::Policy::ClassMap::Match::Protocol::has_data() const
{
    for (std::size_t index=0; index<protocols_list.size(); index++)
    {
        if(protocols_list[index]->has_data())
            return true;
    }
    return (attribute !=  nullptr && attribute->has_data());
}

bool Native::Policy::ClassMap::Match::Protocol::has_operation() const
{
    for (std::size_t index=0; index<protocols_list.size(); index++)
    {
        if(protocols_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Policy::ClassMap::Match::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocols-list")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Protocol::ProtocolsList>();
        c->parent = this;
        protocols_list.push_back(c);
        return c;
    }

    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : protocols_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocols-list" || name == "attribute")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::ProtocolsList::ProtocolsList()
    :
    protocols{YType::str, "protocols"}
{

    yang_name = "protocols-list"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Protocol::ProtocolsList::~ProtocolsList()
{
}

bool Native::Policy::ClassMap::Match::Protocol::ProtocolsList::has_data() const
{
    return protocols.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::ProtocolsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocols.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::ProtocolsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols-list" <<"[protocols='" <<protocols <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::ProtocolsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocols.is_set || is_set(protocols.yfilter)) leaf_name_data.push_back(protocols.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::ProtocolsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::ProtocolsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::ProtocolsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocols")
    {
        protocols = value;
        protocols.value_namespace = name_space;
        protocols.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::ProtocolsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocols")
    {
        protocols.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::ProtocolsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocols")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::Attribute()
{

    yang_name = "attribute"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::~Attribute()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::has_data() const
{
    for (std::size_t index=0; index<application_group.size(); index++)
    {
        if(application_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<application_set.size(); index++)
    {
        if(application_set[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<business_relevance.size(); index++)
    {
        if(business_relevance[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<category.size(); index++)
    {
        if(category[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<encrypted.size(); index++)
    {
        if(encrypted[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sub_category.size(); index++)
    {
        if(sub_category[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<traffic_class.size(); index++)
    {
        if(traffic_class[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::has_operation() const
{
    for (std::size_t index=0; index<application_group.size(); index++)
    {
        if(application_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<application_set.size(); index++)
    {
        if(application_set[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<business_relevance.size(); index++)
    {
        if(business_relevance[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<category.size(); index++)
    {
        if(category[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<encrypted.size(); index++)
    {
        if(encrypted[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sub_category.size(); index++)
    {
        if(sub_category[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<traffic_class.size(); index++)
    {
        if(traffic_class[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-group")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup>();
        c->parent = this;
        application_group.push_back(c);
        return c;
    }

    if(child_yang_name == "application-set")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet>();
        c->parent = this;
        application_set.push_back(c);
        return c;
    }

    if(child_yang_name == "business-relevance")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance>();
        c->parent = this;
        business_relevance.push_back(c);
        return c;
    }

    if(child_yang_name == "category")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::Category>();
        c->parent = this;
        category.push_back(c);
        return c;
    }

    if(child_yang_name == "encrypted")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted>();
        c->parent = this;
        encrypted.push_back(c);
        return c;
    }

    if(child_yang_name == "sub-category")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory>();
        c->parent = this;
        sub_category.push_back(c);
        return c;
    }

    if(child_yang_name == "traffic-class")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass>();
        c->parent = this;
        traffic_class.push_back(c);
        return c;
    }

    if(child_yang_name == "tunnel")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel>();
        c->parent = this;
        tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : application_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : application_set)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : business_relevance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : category)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : encrypted)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : sub_category)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : traffic_class)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-group" || name == "application-set" || name == "business-relevance" || name == "category" || name == "encrypted" || name == "sub-category" || name == "traffic-class" || name == "tunnel")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::ApplicationGroup()
    :
    name{YType::str, "name"}
{

    yang_name = "application-group"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::~ApplicationGroup()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-group" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::ApplicationSet()
    :
    name{YType::str, "name"}
{

    yang_name = "application-set"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::~ApplicationSet()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-set" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::ApplicationSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::BusinessRelevance()
    :
    name{YType::str, "name"}
{

    yang_name = "business-relevance"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::~BusinessRelevance()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "business-relevance" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::BusinessRelevance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::Category::Category()
    :
    name{YType::str, "name"}
{

    yang_name = "category"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::Category::~Category()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Category::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Category::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::Category::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "category" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::Category::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::Category::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::Category::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::Category::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::Category::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Category::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::Encrypted()
    :
    name{YType::str, "name"}
{

    yang_name = "encrypted"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::~Encrypted()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Encrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::SubCategory()
    :
    name{YType::str, "name"}
{

    yang_name = "sub-category"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::~SubCategory()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-category" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::SubCategory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::TrafficClass()
    :
    name{YType::str, "name"}
{

    yang_name = "traffic-class"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::~TrafficClass()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::TrafficClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::Tunnel()
    :
    name{YType::str, "name"}
{

    yang_name = "tunnel"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::~Tunnel()
{
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Protocol::Attribute::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::SecurityGroup::SecurityGroup()
    :
    destination(std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup::Destination>())
	,source(std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup::Source>())
{
    destination->parent = this;
    source->parent = this;

    yang_name = "security-group"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::SecurityGroup::~SecurityGroup()
{
}

bool Native::Policy::ClassMap::Match::SecurityGroup::has_data() const
{
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Policy::ClassMap::Match::SecurityGroup::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Policy::ClassMap::Match::SecurityGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::SecurityGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::SecurityGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Policy::ClassMap::Match::SecurityGroup::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::SecurityGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Policy::ClassMap::Match::SecurityGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::SecurityGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::SecurityGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::SecurityGroup::Destination::Destination()
    :
    tag{YType::uint16, "tag"}
{

    yang_name = "destination"; yang_parent_name = "security-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::SecurityGroup::Destination::~Destination()
{
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Destination::has_data() const
{
    return tag.is_set;
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Policy::ClassMap::Match::SecurityGroup::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::SecurityGroup::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::SecurityGroup::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::SecurityGroup::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::SecurityGroup::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::SecurityGroup::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::SecurityGroup::Source::Source()
    :
    tag{YType::uint16, "tag"}
{

    yang_name = "source"; yang_parent_name = "security-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::SecurityGroup::Source::~Source()
{
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Source::has_data() const
{
    return tag.is_set;
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Policy::ClassMap::Match::SecurityGroup::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::SecurityGroup::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::SecurityGroup::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::SecurityGroup::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::SecurityGroup::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::SecurityGroup::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::SecurityGroup::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Service::Service()
    :
    efp{YType::uint16, "efp"},
    instance{YType::empty, "instance"},
    ethernet{YType::empty, "ethernet"}
{

    yang_name = "service"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Service::~Service()
{
}

bool Native::Policy::ClassMap::Match::Service::has_data() const
{
    return efp.is_set
	|| instance.is_set
	|| ethernet.is_set;
}

bool Native::Policy::ClassMap::Match::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(efp.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(ethernet.yfilter);
}

std::string Native::Policy::ClassMap::Match::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service" <<"[efp='" <<efp <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (efp.is_set || is_set(efp.yfilter)) leaf_name_data.push_back(efp.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "efp")
    {
        efp = value;
        efp.value_namespace = name_space;
        efp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "efp")
    {
        efp.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "ethernet")
    {
        ethernet.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "efp" || name == "instance" || name == "ethernet")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::SourceAddress::SourceAddress()
    :
    mac{YType::str, "mac"}
{

    yang_name = "source-address"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::SourceAddress::~SourceAddress()
{
}

bool Native::Policy::ClassMap::Match::SourceAddress::has_data() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::SourceAddress::has_operation() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter);
}

std::string Native::Policy::ClassMap::Match::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_name_datas = mac.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_name_datas.begin(), mac_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac.append(value);
    }
}

void Native::Policy::ClassMap::Match::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Vlan::Vlan()
    :
    inner{YType::str, "inner"},
    value_{YType::str, "value"}
{

    yang_name = "vlan"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Vlan::~Vlan()
{
}

bool Native::Policy::ClassMap::Match::Vlan::has_data() const
{
    for (auto const & leaf : inner.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Vlan::has_operation() const
{
    for (auto const & leaf : inner.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(inner.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Policy::ClassMap::Match::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto inner_name_datas = inner.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), inner_name_datas.begin(), inner_name_datas.end());
    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inner")
    {
        inner.append(value);
    }
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Native::Policy::ClassMap::Match::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inner")
    {
        inner.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inner" || name == "value")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::ActivatedServiceTemplate::ActivatedServiceTemplate()
    :
    service_name{YType::str, "service-name"}
{

    yang_name = "activated-service-template"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::ActivatedServiceTemplate::~ActivatedServiceTemplate()
{
}

bool Native::Policy::ClassMap::Match::ActivatedServiceTemplate::has_data() const
{
    return service_name.is_set;
}

bool Native::Policy::ClassMap::Match::ActivatedServiceTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_name.yfilter);
}

std::string Native::Policy::ClassMap::Match::ActivatedServiceTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "activated-service-template" <<"[service-name='" <<service_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::ActivatedServiceTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_name.is_set || is_set(service_name.yfilter)) leaf_name_data.push_back(service_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::ActivatedServiceTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::ActivatedServiceTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::ActivatedServiceTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-name")
    {
        service_name = value;
        service_name.value_namespace = name_space;
        service_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::ActivatedServiceTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-name")
    {
        service_name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::ActivatedServiceTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::AuthorizationStatus::AuthorizationStatus()
    :
    authorized{YType::empty, "authorized"},
    unauthorized{YType::empty, "unauthorized"}
{

    yang_name = "authorization-status"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::AuthorizationStatus::~AuthorizationStatus()
{
}

bool Native::Policy::ClassMap::Match::AuthorizationStatus::has_data() const
{
    return authorized.is_set
	|| unauthorized.is_set;
}

bool Native::Policy::ClassMap::Match::AuthorizationStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authorized.yfilter)
	|| ydk::is_set(unauthorized.yfilter);
}

std::string Native::Policy::ClassMap::Match::AuthorizationStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::AuthorizationStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authorized.is_set || is_set(authorized.yfilter)) leaf_name_data.push_back(authorized.get_name_leafdata());
    if (unauthorized.is_set || is_set(unauthorized.yfilter)) leaf_name_data.push_back(unauthorized.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::AuthorizationStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::AuthorizationStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::AuthorizationStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authorized")
    {
        authorized = value;
        authorized.value_namespace = name_space;
        authorized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unauthorized")
    {
        unauthorized = value;
        unauthorized.value_namespace = name_space;
        unauthorized.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::AuthorizationStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authorized")
    {
        authorized.yfilter = yfilter;
    }
    if(value_path == "unauthorized")
    {
        unauthorized.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::AuthorizationStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorized" || name == "unauthorized")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::AuthorizingMethodPriority::AuthorizingMethodPriority()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"}
{

    yang_name = "authorizing-method-priority"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::AuthorizingMethodPriority::~AuthorizingMethodPriority()
{
}

bool Native::Policy::ClassMap::Match::AuthorizingMethodPriority::has_data() const
{
    return eq.is_set
	|| gt.is_set
	|| lt.is_set;
}

bool Native::Policy::ClassMap::Match::AuthorizingMethodPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter);
}

std::string Native::Policy::ClassMap::Match::AuthorizingMethodPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorizing-method-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::AuthorizingMethodPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::AuthorizingMethodPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::AuthorizingMethodPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::AuthorizingMethodPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gt")
    {
        gt = value;
        gt.value_namespace = name_space;
        gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt")
    {
        lt = value;
        lt.value_namespace = name_space;
        lt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::AuthorizingMethodPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "gt")
    {
        gt.yfilter = yfilter;
    }
    if(value_path == "lt")
    {
        lt.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::AuthorizingMethodPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eq" || name == "gt" || name == "lt")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Method::Method()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{

    yang_name = "method"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Method::~Method()
{
}

bool Native::Policy::ClassMap::Match::Method::has_data() const
{
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Policy::ClassMap::Match::Method::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x.yfilter)
	|| ydk::is_set(mab.yfilter)
	|| ydk::is_set(webauth.yfilter);
}

std::string Native::Policy::ClassMap::Match::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.yfilter)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.yfilter)) leaf_name_data.push_back(webauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
        dot1x.value_namespace = name_space;
        dot1x.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mab")
    {
        mab = value;
        mab.value_namespace = name_space;
        mab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webauth")
    {
        webauth = value;
        webauth.value_namespace = name_space;
        webauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1x")
    {
        dot1x.yfilter = yfilter;
    }
    if(value_path == "mab")
    {
        mab.yfilter = yfilter;
    }
    if(value_path == "webauth")
    {
        webauth.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::ResultType::ResultType()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
    	,
    method(std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method>())
{
    method->parent = this;

    yang_name = "result-type"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::ResultType::~ResultType()
{
}

bool Native::Policy::ClassMap::Match::ResultType::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set
	|| (method !=  nullptr && method->has_data());
}

bool Native::Policy::ClassMap::Match::ResultType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter)
	|| (method !=  nullptr && method->has_operation());
}

std::string Native::Policy::ClassMap::Match::ResultType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::ResultType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::ResultType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method>();
        }
        return method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::ResultType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(method != nullptr)
    {
        children["method"] = method;
    }

    return children;
}

void Native::Policy::ClassMap::Match::ResultType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::ResultType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::ResultType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method" || name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::ResultType::Method::Method()
    :
    dot1x(std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Dot1X>())
	,mab(std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Mab>())
	,webauth(std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Webauth>())
{
    dot1x->parent = this;
    mab->parent = this;
    webauth->parent = this;

    yang_name = "method"; yang_parent_name = "result-type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::ResultType::Method::~Method()
{
}

bool Native::Policy::ClassMap::Match::ResultType::Method::has_data() const
{
    return (dot1x !=  nullptr && dot1x->has_data())
	|| (mab !=  nullptr && mab->has_data())
	|| (webauth !=  nullptr && webauth->has_data());
}

bool Native::Policy::ClassMap::Match::ResultType::Method::has_operation() const
{
    return is_set(yfilter)
	|| (dot1x !=  nullptr && dot1x->has_operation())
	|| (mab !=  nullptr && mab->has_operation())
	|| (webauth !=  nullptr && webauth->has_operation());
}

std::string Native::Policy::ClassMap::Match::ResultType::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::ResultType::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::ResultType::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1x")
    {
        if(dot1x == nullptr)
        {
            dot1x = std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Dot1X>();
        }
        return dot1x;
    }

    if(child_yang_name == "mab")
    {
        if(mab == nullptr)
        {
            mab = std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Mab>();
        }
        return mab;
    }

    if(child_yang_name == "webauth")
    {
        if(webauth == nullptr)
        {
            webauth = std::make_shared<Native::Policy::ClassMap::Match::ResultType::Method::Webauth>();
        }
        return webauth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::ResultType::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dot1x != nullptr)
    {
        children["dot1x"] = dot1x;
    }

    if(mab != nullptr)
    {
        children["mab"] = mab;
    }

    if(webauth != nullptr)
    {
        children["webauth"] = webauth;
    }

    return children;
}

void Native::Policy::ClassMap::Match::ResultType::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::ResultType::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::ResultType::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::Dot1X()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{

    yang_name = "dot1x"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::~Dot1X()
{
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter);
}

std::string Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Dot1X::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::ResultType::Method::Mab::Mab()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{

    yang_name = "mab"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::ResultType::Method::Mab::~Mab()
{
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Mab::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Mab::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter);
}

std::string Native::Policy::ClassMap::Match::ResultType::Method::Mab::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mab";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::ResultType::Method::Mab::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::ResultType::Method::Mab::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::ResultType::Method::Mab::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::ResultType::Method::Mab::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::ResultType::Method::Mab::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Mab::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::ResultType::Method::Webauth::Webauth()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{

    yang_name = "webauth"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::ResultType::Method::Webauth::~Webauth()
{
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Webauth::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Webauth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter);
}

std::string Native::Policy::ClassMap::Match::ResultType::Method::Webauth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "webauth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::ResultType::Method::Webauth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::ResultType::Method::Webauth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::ResultType::Method::Webauth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::ResultType::Method::Webauth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::ResultType::Method::Webauth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::ResultType::Method::Webauth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Not()
    :
    any{YType::empty, "any"},
    class_map{YType::str, "class-map"},
    cos{YType::uint8, "cos"},
    discard_class{YType::uint8, "discard-class"},
    dscp{YType::str, "dscp"},
    fr_de{YType::empty, "fr-de"},
    fr_dlci{YType::uint16, "fr-dlci"},
    input_interface{YType::str, "input-interface"},
    non_client_nrt{YType::empty, "non-client-nrt"},
    precedence{YType::str, "precedence"},
    qos_group{YType::uint16, "qos-group"},
    peer{YType::str, "peer"}
    	,
    current_method_priority(std::make_shared<Native::Policy::ClassMap::Match::Not::CurrentMethodPriority>())
	,application(std::make_shared<Native::Policy::ClassMap::Match::Not::Application>())
	,access_group(std::make_shared<Native::Policy::ClassMap::Match::Not::AccessGroup>())
	,destination_address(std::make_shared<Native::Policy::ClassMap::Match::Not::DestinationAddress>())
	,group_object(std::make_shared<Native::Policy::ClassMap::Match::Not::GroupObject>())
	,ip(std::make_shared<Native::Policy::ClassMap::Match::Not::Ip>())
	,mpls(std::make_shared<Native::Policy::ClassMap::Match::Not::Mpls>())
	,packet(std::make_shared<Native::Policy::ClassMap::Match::Not::Packet>())
	,protocol(std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol>())
	,security_group(std::make_shared<Native::Policy::ClassMap::Match::Not::SecurityGroup>())
	,source_address(std::make_shared<Native::Policy::ClassMap::Match::Not::SourceAddress>())
	,vlan(std::make_shared<Native::Policy::ClassMap::Match::Not::Vlan>())
{
    current_method_priority->parent = this;
    application->parent = this;
    access_group->parent = this;
    destination_address->parent = this;
    group_object->parent = this;
    ip->parent = this;
    mpls->parent = this;
    packet->parent = this;
    protocol->parent = this;
    security_group->parent = this;
    source_address->parent = this;
    vlan->parent = this;

    yang_name = "not"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::~Not()
{
}

bool Native::Policy::ClassMap::Match::Not::has_data() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_data())
            return true;
    }
    for (auto const & leaf : class_map.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : fr_dlci.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : input_interface.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return any.is_set
	|| fr_de.is_set
	|| non_client_nrt.is_set
	|| peer.is_set
	|| (current_method_priority !=  nullptr && current_method_priority->has_data())
	|| (application !=  nullptr && application->has_data())
	|| (access_group !=  nullptr && access_group->has_data())
	|| (destination_address !=  nullptr && destination_address->has_data())
	|| (group_object !=  nullptr && group_object->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (packet !=  nullptr && packet->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (security_group !=  nullptr && security_group->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (vlan !=  nullptr && vlan->has_data());
}

bool Native::Policy::ClassMap::Match::Not::has_operation() const
{
    for (std::size_t index=0; index<service.size(); index++)
    {
        if(service[index]->has_operation())
            return true;
    }
    for (auto const & leaf : class_map.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : fr_dlci.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : input_interface.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(class_map.yfilter)
	|| ydk::is_set(cos.yfilter)
	|| ydk::is_set(discard_class.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(fr_de.yfilter)
	|| ydk::is_set(fr_dlci.yfilter)
	|| ydk::is_set(input_interface.yfilter)
	|| ydk::is_set(non_client_nrt.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(qos_group.yfilter)
	|| ydk::is_set(peer.yfilter)
	|| (current_method_priority !=  nullptr && current_method_priority->has_operation())
	|| (application !=  nullptr && application->has_operation())
	|| (access_group !=  nullptr && access_group->has_operation())
	|| (destination_address !=  nullptr && destination_address->has_operation())
	|| (group_object !=  nullptr && group_object->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (packet !=  nullptr && packet->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (security_group !=  nullptr && security_group->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "not";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (fr_de.is_set || is_set(fr_de.yfilter)) leaf_name_data.push_back(fr_de.get_name_leafdata());
    if (non_client_nrt.is_set || is_set(non_client_nrt.yfilter)) leaf_name_data.push_back(non_client_nrt.get_name_leafdata());
    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());

    auto class_map_name_datas = class_map.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), class_map_name_datas.begin(), class_map_name_datas.end());
    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto discard_class_name_datas = discard_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), discard_class_name_datas.begin(), discard_class_name_datas.end());
    auto dscp_name_datas = dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dscp_name_datas.begin(), dscp_name_datas.end());
    auto fr_dlci_name_datas = fr_dlci.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fr_dlci_name_datas.begin(), fr_dlci_name_datas.end());
    auto input_interface_name_datas = input_interface.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), input_interface_name_datas.begin(), input_interface_name_datas.end());
    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());
    auto qos_group_name_datas = qos_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), qos_group_name_datas.begin(), qos_group_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-method-priority")
    {
        if(current_method_priority == nullptr)
        {
            current_method_priority = std::make_shared<Native::Policy::ClassMap::Match::Not::CurrentMethodPriority>();
        }
        return current_method_priority;
    }

    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Policy::ClassMap::Match::Not::Application>();
        }
        return application;
    }

    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Policy::ClassMap::Match::Not::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<Native::Policy::ClassMap::Match::Not::DestinationAddress>();
        }
        return destination_address;
    }

    if(child_yang_name == "group-object")
    {
        if(group_object == nullptr)
        {
            group_object = std::make_shared<Native::Policy::ClassMap::Match::Not::GroupObject>();
        }
        return group_object;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Policy::ClassMap::Match::Not::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Policy::ClassMap::Match::Not::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "packet")
    {
        if(packet == nullptr)
        {
            packet = std::make_shared<Native::Policy::ClassMap::Match::Not::Packet>();
        }
        return packet;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "security-group")
    {
        if(security_group == nullptr)
        {
            security_group = std::make_shared<Native::Policy::ClassMap::Match::Not::SecurityGroup>();
        }
        return security_group;
    }

    if(child_yang_name == "service")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Not::Service>();
        c->parent = this;
        service.push_back(c);
        return c;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Native::Policy::ClassMap::Match::Not::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Policy::ClassMap::Match::Not::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(current_method_priority != nullptr)
    {
        children["current-method-priority"] = current_method_priority;
    }

    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    if(destination_address != nullptr)
    {
        children["destination-address"] = destination_address;
    }

    if(group_object != nullptr)
    {
        children["group-object"] = group_object;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    if(packet != nullptr)
    {
        children["packet"] = packet;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(security_group != nullptr)
    {
        children["security-group"] = security_group;
    }

    count = 0;
    for (auto const & c : service)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-map")
    {
        class_map.append(value);
    }
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "discard-class")
    {
        discard_class.append(value);
    }
    if(value_path == "dscp")
    {
        dscp.append(value);
    }
    if(value_path == "fr-de")
    {
        fr_de = value;
        fr_de.value_namespace = name_space;
        fr_de.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fr-dlci")
    {
        fr_dlci.append(value);
    }
    if(value_path == "input-interface")
    {
        input_interface.append(value);
    }
    if(value_path == "non-client-nrt")
    {
        non_client_nrt = value;
        non_client_nrt.value_namespace = name_space;
        non_client_nrt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
    if(value_path == "qos-group")
    {
        qos_group.append(value);
    }
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "class-map")
    {
        class_map.yfilter = yfilter;
    }
    if(value_path == "cos")
    {
        cos.yfilter = yfilter;
    }
    if(value_path == "discard-class")
    {
        discard_class.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "fr-de")
    {
        fr_de.yfilter = yfilter;
    }
    if(value_path == "fr-dlci")
    {
        fr_dlci.yfilter = yfilter;
    }
    if(value_path == "input-interface")
    {
        input_interface.yfilter = yfilter;
    }
    if(value_path == "non-client-nrt")
    {
        non_client_nrt.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "qos-group")
    {
        qos_group.yfilter = yfilter;
    }
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-method-priority" || name == "application" || name == "access-group" || name == "destination-address" || name == "group-object" || name == "ip" || name == "mpls" || name == "packet" || name == "protocol" || name == "security-group" || name == "service" || name == "source-address" || name == "vlan" || name == "any" || name == "class-map" || name == "cos" || name == "discard-class" || name == "dscp" || name == "fr-de" || name == "fr-dlci" || name == "input-interface" || name == "non-client-nrt" || name == "precedence" || name == "qos-group" || name == "peer")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::CurrentMethodPriority()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"}
{

    yang_name = "current-method-priority"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::~CurrentMethodPriority()
{
}

bool Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::has_data() const
{
    return eq.is_set
	|| gt.is_set
	|| lt.is_set;
}

bool Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-method-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gt")
    {
        gt = value;
        gt.value_namespace = name_space;
        gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt")
    {
        lt = value;
        lt.value_namespace = name_space;
        lt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "gt")
    {
        gt.yfilter = yfilter;
    }
    if(value_path == "lt")
    {
        lt.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::CurrentMethodPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eq" || name == "gt" || name == "lt")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Application::Application()
    :
    application_group(std::make_shared<Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup>())
	,attribute(std::make_shared<Native::Policy::ClassMap::Match::Not::Application::Attribute>())
{
    application_group->parent = this;
    attribute->parent = this;

    yang_name = "application"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Application::~Application()
{
}

bool Native::Policy::ClassMap::Match::Not::Application::has_data() const
{
    return (application_group !=  nullptr && application_group->has_data())
	|| (attribute !=  nullptr && attribute->has_data());
}

bool Native::Policy::ClassMap::Match::Not::Application::has_operation() const
{
    return is_set(yfilter)
	|| (application_group !=  nullptr && application_group->has_operation())
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-group")
    {
        if(application_group == nullptr)
        {
            application_group = std::make_shared<Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup>();
        }
        return application_group;
    }

    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Policy::ClassMap::Match::Not::Application::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(application_group != nullptr)
    {
        children["application-group"] = application_group;
    }

    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-group" || name == "attribute")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::ApplicationGroup()
    :
    telepresence_group{YType::empty, "telepresence-group"},
    vmware_group{YType::empty, "vmware-group"},
    webex_group{YType::empty, "webex-group"}
{

    yang_name = "application-group"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::~ApplicationGroup()
{
}

bool Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::has_data() const
{
    return telepresence_group.is_set
	|| vmware_group.is_set
	|| webex_group.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(telepresence_group.yfilter)
	|| ydk::is_set(vmware_group.yfilter)
	|| ydk::is_set(webex_group.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (telepresence_group.is_set || is_set(telepresence_group.yfilter)) leaf_name_data.push_back(telepresence_group.get_name_leafdata());
    if (vmware_group.is_set || is_set(vmware_group.yfilter)) leaf_name_data.push_back(vmware_group.get_name_leafdata());
    if (webex_group.is_set || is_set(webex_group.yfilter)) leaf_name_data.push_back(webex_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "telepresence-group")
    {
        telepresence_group = value;
        telepresence_group.value_namespace = name_space;
        telepresence_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vmware-group")
    {
        vmware_group = value;
        vmware_group.value_namespace = name_space;
        vmware_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webex-group")
    {
        webex_group = value;
        webex_group.value_namespace = name_space;
        webex_group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "telepresence-group")
    {
        telepresence_group.yfilter = yfilter;
    }
    if(value_path == "vmware-group")
    {
        vmware_group.yfilter = yfilter;
    }
    if(value_path == "webex-group")
    {
        webex_group.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Application::ApplicationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "telepresence-group" || name == "vmware-group" || name == "webex-group")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Application::Attribute::Attribute()
    :
    media_type{YType::enumeration, "media-type"}
{

    yang_name = "attribute"; yang_parent_name = "application"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Application::Attribute::~Attribute()
{
}

bool Native::Policy::ClassMap::Match::Not::Application::Attribute::has_data() const
{
    return media_type.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Application::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(media_type.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Application::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Application::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (media_type.is_set || is_set(media_type.yfilter)) leaf_name_data.push_back(media_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Application::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Application::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Application::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "media-type")
    {
        media_type = value;
        media_type.value_namespace = name_space;
        media_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Application::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "media-type")
    {
        media_type.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Application::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "media-type")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::AccessGroup::AccessGroup()
    :
    index_{YType::uint32, "index"},
    name{YType::str, "name"}
{

    yang_name = "access-group"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::AccessGroup::~AccessGroup()
{
}

bool Native::Policy::ClassMap::Match::Not::AccessGroup::has_data() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return index_.is_set;
}

bool Native::Policy::ClassMap::Match::Not::AccessGroup::has_operation() const
{
    for (auto const & leaf : name.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    auto name_name_datas = name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), name_name_datas.begin(), name_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::DestinationAddress::DestinationAddress()
    :
    mac{YType::str, "mac"}
{

    yang_name = "destination-address"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::DestinationAddress::~DestinationAddress()
{
}

bool Native::Policy::ClassMap::Match::Not::DestinationAddress::has_data() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not::DestinationAddress::has_operation() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_name_datas = mac.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_name_datas.begin(), mac_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::GroupObject::GroupObject()
    :
    security(std::make_shared<Native::Policy::ClassMap::Match::Not::GroupObject::Security>())
{
    security->parent = this;

    yang_name = "group-object"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::GroupObject::~GroupObject()
{
}

bool Native::Policy::ClassMap::Match::Not::GroupObject::has_data() const
{
    return (security !=  nullptr && security->has_data());
}

bool Native::Policy::ClassMap::Match::Not::GroupObject::has_operation() const
{
    return is_set(yfilter)
	|| (security !=  nullptr && security->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::GroupObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-object";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::GroupObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::GroupObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Native::Policy::ClassMap::Match::Not::GroupObject::Security>();
        }
        return security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::GroupObject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(security != nullptr)
    {
        children["security"] = security;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not::GroupObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not::GroupObject::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not::GroupObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::GroupObject::Security::Security()
    :
    source{YType::str, "source"},
    destination{YType::str, "destination"}
{

    yang_name = "security"; yang_parent_name = "group-object"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::GroupObject::Security::~Security()
{
}

bool Native::Policy::ClassMap::Match::Not::GroupObject::Security::has_data() const
{
    for (auto const & leaf : source.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : destination.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not::GroupObject::Security::has_operation() const
{
    for (auto const & leaf : source.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : destination.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::GroupObject::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::GroupObject::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto source_name_datas = source.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), source_name_datas.begin(), source_name_datas.end());
    auto destination_name_datas = destination.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), destination_name_datas.begin(), destination_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::GroupObject::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::GroupObject::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::GroupObject::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source")
    {
        source.append(value);
    }
    if(value_path == "destination")
    {
        destination.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not::GroupObject::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::GroupObject::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "destination")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Ip::Ip()
    :
    dscp{YType::str, "dscp"},
    precedence{YType::str, "precedence"}
{

    yang_name = "ip"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Ip::~Ip()
{
}

bool Native::Policy::ClassMap::Match::Not::Ip::has_data() const
{
    for (std::size_t index=0; index<rtp.size(); index++)
    {
        if(rtp[index]->has_data())
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not::Ip::has_operation() const
{
    for (std::size_t index=0; index<rtp.size(); index++)
    {
        if(rtp[index]->has_operation())
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(precedence.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto dscp_name_datas = dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dscp_name_datas.begin(), dscp_name_datas.end());
    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtp")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Not::Ip::Rtp>();
        c->parent = this;
        rtp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : rtp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp.append(value);
    }
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtp" || name == "dscp" || name == "precedence")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Ip::Rtp::Rtp()
    :
    port1{YType::uint16, "port1"},
    port2{YType::uint16, "port2"}
{

    yang_name = "rtp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Ip::Rtp::~Rtp()
{
}

bool Native::Policy::ClassMap::Match::Not::Ip::Rtp::has_data() const
{
    return port1.is_set
	|| port2.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Ip::Rtp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port1.yfilter)
	|| ydk::is_set(port2.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Ip::Rtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp" <<"[port1='" <<port1 <<"']" <<"[port2='" <<port2 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Ip::Rtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port1.is_set || is_set(port1.yfilter)) leaf_name_data.push_back(port1.get_name_leafdata());
    if (port2.is_set || is_set(port2.yfilter)) leaf_name_data.push_back(port2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Ip::Rtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Ip::Rtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Ip::Rtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port1")
    {
        port1 = value;
        port1.value_namespace = name_space;
        port1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port2")
    {
        port2 = value;
        port2.value_namespace = name_space;
        port2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Ip::Rtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port1")
    {
        port1.yfilter = yfilter;
    }
    if(value_path == "port2")
    {
        port2.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Ip::Rtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port1" || name == "port2")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Mpls::Mpls()
    :
    experimental(std::make_shared<Native::Policy::ClassMap::Match::Not::Mpls::Experimental>())
{
    experimental->parent = this;

    yang_name = "mpls"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Mpls::~Mpls()
{
}

bool Native::Policy::ClassMap::Match::Not::Mpls::has_data() const
{
    return (experimental !=  nullptr && experimental->has_data());
}

bool Native::Policy::ClassMap::Match::Not::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| (experimental !=  nullptr && experimental->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "experimental")
    {
        if(experimental == nullptr)
        {
            experimental = std::make_shared<Native::Policy::ClassMap::Match::Not::Mpls::Experimental>();
        }
        return experimental;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(experimental != nullptr)
    {
        children["experimental"] = experimental;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "experimental")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Mpls::Experimental::Experimental()
    :
    topmost{YType::uint8, "topmost"}
{

    yang_name = "experimental"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Mpls::Experimental::~Experimental()
{
}

bool Native::Policy::ClassMap::Match::Not::Mpls::Experimental::has_data() const
{
    for (auto const & leaf : topmost.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not::Mpls::Experimental::has_operation() const
{
    for (auto const & leaf : topmost.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(topmost.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Mpls::Experimental::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "experimental";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Mpls::Experimental::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto topmost_name_datas = topmost.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), topmost_name_datas.begin(), topmost_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Mpls::Experimental::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Mpls::Experimental::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Mpls::Experimental::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topmost")
    {
        topmost.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not::Mpls::Experimental::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topmost")
    {
        topmost.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Mpls::Experimental::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topmost")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Packet::Packet()
    :
    length(std::make_shared<Native::Policy::ClassMap::Match::Not::Packet::Length>())
{
    length->parent = this;

    yang_name = "packet"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Packet::~Packet()
{
}

bool Native::Policy::ClassMap::Match::Not::Packet::has_data() const
{
    return (length !=  nullptr && length->has_data());
}

bool Native::Policy::ClassMap::Match::Not::Packet::has_operation() const
{
    return is_set(yfilter)
	|| (length !=  nullptr && length->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::Packet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Packet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Packet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "length")
    {
        if(length == nullptr)
        {
            length = std::make_shared<Native::Policy::ClassMap::Match::Not::Packet::Length>();
        }
        return length;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Packet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(length != nullptr)
    {
        children["length"] = length;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not::Packet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not::Packet::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not::Packet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "length")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Packet::Length::Length()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{

    yang_name = "length"; yang_parent_name = "packet"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Packet::Length::~Length()
{
}

bool Native::Policy::ClassMap::Match::Not::Packet::Length::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Packet::Length::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Packet::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Packet::Length::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Packet::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Packet::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Packet::Length::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Packet::Length::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Packet::Length::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Protocol()
    :
    attribute(std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute>())
{
    attribute->parent = this;

    yang_name = "protocol"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Protocol::~Protocol()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::has_data() const
{
    for (std::size_t index=0; index<protocols_list.size(); index++)
    {
        if(protocols_list[index]->has_data())
            return true;
    }
    return (attribute !=  nullptr && attribute->has_data());
}

bool Native::Policy::ClassMap::Match::Not::Protocol::has_operation() const
{
    for (std::size_t index=0; index<protocols_list.size(); index++)
    {
        if(protocols_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocols-list")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList>();
        c->parent = this;
        protocols_list.push_back(c);
        return c;
    }

    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute>();
        }
        return attribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : protocols_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocols-list" || name == "attribute")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::ProtocolsList()
    :
    protocols{YType::str, "protocols"}
{

    yang_name = "protocols-list"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::~ProtocolsList()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::has_data() const
{
    return protocols.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocols.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols-list" <<"[protocols='" <<protocols <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocols.is_set || is_set(protocols.yfilter)) leaf_name_data.push_back(protocols.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocols")
    {
        protocols = value;
        protocols.value_namespace = name_space;
        protocols.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocols")
    {
        protocols.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::ProtocolsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocols")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Attribute()
{

    yang_name = "attribute"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::~Attribute()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::has_data() const
{
    for (std::size_t index=0; index<application_group.size(); index++)
    {
        if(application_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<application_set.size(); index++)
    {
        if(application_set[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<business_relevance.size(); index++)
    {
        if(business_relevance[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<category.size(); index++)
    {
        if(category[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<encrypted.size(); index++)
    {
        if(encrypted[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sub_category.size(); index++)
    {
        if(sub_category[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<traffic_class.size(); index++)
    {
        if(traffic_class[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::has_operation() const
{
    for (std::size_t index=0; index<application_group.size(); index++)
    {
        if(application_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<application_set.size(); index++)
    {
        if(application_set[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<business_relevance.size(); index++)
    {
        if(business_relevance[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<category.size(); index++)
    {
        if(category[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<encrypted.size(); index++)
    {
        if(encrypted[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sub_category.size(); index++)
    {
        if(sub_category[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<traffic_class.size(); index++)
    {
        if(traffic_class[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application-group")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup>();
        c->parent = this;
        application_group.push_back(c);
        return c;
    }

    if(child_yang_name == "application-set")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet>();
        c->parent = this;
        application_set.push_back(c);
        return c;
    }

    if(child_yang_name == "business-relevance")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance>();
        c->parent = this;
        business_relevance.push_back(c);
        return c;
    }

    if(child_yang_name == "category")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category>();
        c->parent = this;
        category.push_back(c);
        return c;
    }

    if(child_yang_name == "encrypted")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted>();
        c->parent = this;
        encrypted.push_back(c);
        return c;
    }

    if(child_yang_name == "sub-category")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory>();
        c->parent = this;
        sub_category.push_back(c);
        return c;
    }

    if(child_yang_name == "traffic-class")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass>();
        c->parent = this;
        traffic_class.push_back(c);
        return c;
    }

    if(child_yang_name == "tunnel")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel>();
        c->parent = this;
        tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : application_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : application_set)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : business_relevance)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : category)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : encrypted)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : sub_category)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : traffic_class)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application-group" || name == "application-set" || name == "business-relevance" || name == "category" || name == "encrypted" || name == "sub-category" || name == "traffic-class" || name == "tunnel")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::ApplicationGroup()
    :
    name{YType::str, "name"}
{

    yang_name = "application-group"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::~ApplicationGroup()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-group" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::ApplicationSet()
    :
    name{YType::str, "name"}
{

    yang_name = "application-set"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::~ApplicationSet()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application-set" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::ApplicationSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::BusinessRelevance()
    :
    name{YType::str, "name"}
{

    yang_name = "business-relevance"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::~BusinessRelevance()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "business-relevance" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::BusinessRelevance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::Category()
    :
    name{YType::str, "name"}
{

    yang_name = "category"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::~Category()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "category" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Category::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::Encrypted()
    :
    name{YType::str, "name"}
{

    yang_name = "encrypted"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::~Encrypted()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encrypted" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Encrypted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::SubCategory()
    :
    name{YType::str, "name"}
{

    yang_name = "sub-category"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::~SubCategory()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-category" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::SubCategory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::TrafficClass()
    :
    name{YType::str, "name"}
{

    yang_name = "traffic-class"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::~TrafficClass()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::TrafficClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::Tunnel()
    :
    name{YType::str, "name"}
{

    yang_name = "tunnel"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::~Tunnel()
{
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::has_data() const
{
    return name.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Protocol::Attribute::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::SecurityGroup::SecurityGroup()
    :
    destination(std::make_shared<Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination>())
	,source(std::make_shared<Native::Policy::ClassMap::Match::Not::SecurityGroup::Source>())
{
    destination->parent = this;
    source->parent = this;

    yang_name = "security-group"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::SecurityGroup::~SecurityGroup()
{
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::has_data() const
{
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Policy::ClassMap::Match::Not::SecurityGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::SecurityGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::SecurityGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Policy::ClassMap::Match::Not::SecurityGroup::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::SecurityGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Policy::ClassMap::Match::Not::SecurityGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::Match::Not::SecurityGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::Destination()
    :
    tag{YType::uint16, "tag"}
{

    yang_name = "destination"; yang_parent_name = "security-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::~Destination()
{
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::has_data() const
{
    return tag.is_set;
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::Source()
    :
    tag{YType::uint16, "tag"}
{

    yang_name = "source"; yang_parent_name = "security-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::~Source()
{
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::has_data() const
{
    return tag.is_set;
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::SecurityGroup::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Service::Service()
    :
    efp{YType::uint16, "efp"},
    instance{YType::empty, "instance"},
    ethernet{YType::empty, "ethernet"}
{

    yang_name = "service"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Service::~Service()
{
}

bool Native::Policy::ClassMap::Match::Not::Service::has_data() const
{
    return efp.is_set
	|| instance.is_set
	|| ethernet.is_set;
}

bool Native::Policy::ClassMap::Match::Not::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(efp.yfilter)
	|| ydk::is_set(instance.yfilter)
	|| ydk::is_set(ethernet.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service" <<"[efp='" <<efp <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (efp.is_set || is_set(efp.yfilter)) leaf_name_data.push_back(efp.get_name_leafdata());
    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "efp")
    {
        efp = value;
        efp.value_namespace = name_space;
        efp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::Match::Not::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "efp")
    {
        efp.yfilter = yfilter;
    }
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
    if(value_path == "ethernet")
    {
        ethernet.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "efp" || name == "instance" || name == "ethernet")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::SourceAddress::SourceAddress()
    :
    mac{YType::str, "mac"}
{

    yang_name = "source-address"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::SourceAddress::~SourceAddress()
{
}

bool Native::Policy::ClassMap::Match::Not::SourceAddress::has_data() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not::SourceAddress::has_operation() const
{
    for (auto const & leaf : mac.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mac.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_name_datas = mac.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_name_datas.begin(), mac_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac")
    {
        mac.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac")
    {
        mac.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac")
        return true;
    return false;
}

Native::Policy::ClassMap::Match::Not::Vlan::Vlan()
    :
    inner{YType::str, "inner"},
    value_{YType::str, "value"}
{

    yang_name = "vlan"; yang_parent_name = "not"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::Match::Not::Vlan::~Vlan()
{
}

bool Native::Policy::ClassMap::Match::Not::Vlan::has_data() const
{
    for (auto const & leaf : inner.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : value_.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Policy::ClassMap::Match::Not::Vlan::has_operation() const
{
    for (auto const & leaf : inner.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : value_.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(inner.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Policy::ClassMap::Match::Not::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::Match::Not::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto inner_name_datas = inner.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), inner_name_datas.begin(), inner_name_datas.end());
    auto value__name_datas = value_.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), value__name_datas.begin(), value__name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::Match::Not::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::Match::Not::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::Match::Not::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inner")
    {
        inner.append(value);
    }
    if(value_path == "value")
    {
        value_.append(value);
    }
}

void Native::Policy::ClassMap::Match::Not::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inner")
    {
        inner.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::Match::Not::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inner" || name == "value")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::NoMatch()
    :
    client_type{YType::enumeration, "client-type"},
    device_type{YType::str, "device-type"},
    interface{YType::str, "interface"},
    ip_address{YType::str, "ip-address"},
    ipv6_address{YType::str, "ipv6-address"},
    mac_address{YType::str, "mac-address"},
    oui{YType::str, "oui"},
    port_type{YType::enumeration, "port-type"},
    service_template{YType::str, "service-template"},
    session_type{YType::enumeration, "session-type"},
    sgt{YType::uint16, "sgt"},
    ssid{YType::str, "ssid"},
    tag{YType::str, "tag"},
    timer{YType::str, "timer"},
    user_role{YType::str, "user-role"},
    username{YType::str, "username"}
    	,
    authorization_status(std::make_shared<Native::Policy::ClassMap::NoMatch::AuthorizationStatus>())
	,authorizing_method_priority(std::make_shared<Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority>())
	,method(std::make_shared<Native::Policy::ClassMap::NoMatch::Method>())
	,result_type(std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType>())
{
    authorization_status->parent = this;
    authorizing_method_priority->parent = this;
    method->parent = this;
    result_type->parent = this;

    yang_name = "no-match"; yang_parent_name = "class-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::~NoMatch()
{
}

bool Native::Policy::ClassMap::NoMatch::has_data() const
{
    for (std::size_t index=0; index<activated_service_template.size(); index++)
    {
        if(activated_service_template[index]->has_data())
            return true;
    }
    return client_type.is_set
	|| device_type.is_set
	|| interface.is_set
	|| ip_address.is_set
	|| ipv6_address.is_set
	|| mac_address.is_set
	|| oui.is_set
	|| port_type.is_set
	|| service_template.is_set
	|| session_type.is_set
	|| sgt.is_set
	|| ssid.is_set
	|| tag.is_set
	|| timer.is_set
	|| user_role.is_set
	|| username.is_set
	|| (authorization_status !=  nullptr && authorization_status->has_data())
	|| (authorizing_method_priority !=  nullptr && authorizing_method_priority->has_data())
	|| (method !=  nullptr && method->has_data())
	|| (result_type !=  nullptr && result_type->has_data());
}

bool Native::Policy::ClassMap::NoMatch::has_operation() const
{
    for (std::size_t index=0; index<activated_service_template.size(); index++)
    {
        if(activated_service_template[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(client_type.yfilter)
	|| ydk::is_set(device_type.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(oui.yfilter)
	|| ydk::is_set(port_type.yfilter)
	|| ydk::is_set(service_template.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(sgt.yfilter)
	|| ydk::is_set(ssid.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| ydk::is_set(user_role.yfilter)
	|| ydk::is_set(username.yfilter)
	|| (authorization_status !=  nullptr && authorization_status->has_operation())
	|| (authorizing_method_priority !=  nullptr && authorizing_method_priority->has_operation())
	|| (method !=  nullptr && method->has_operation())
	|| (result_type !=  nullptr && result_type->has_operation());
}

std::string Native::Policy::ClassMap::NoMatch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client_type.is_set || is_set(client_type.yfilter)) leaf_name_data.push_back(client_type.get_name_leafdata());
    if (device_type.is_set || is_set(device_type.yfilter)) leaf_name_data.push_back(device_type.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (oui.is_set || is_set(oui.yfilter)) leaf_name_data.push_back(oui.get_name_leafdata());
    if (port_type.is_set || is_set(port_type.yfilter)) leaf_name_data.push_back(port_type.get_name_leafdata());
    if (service_template.is_set || is_set(service_template.yfilter)) leaf_name_data.push_back(service_template.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.yfilter)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (ssid.is_set || is_set(ssid.yfilter)) leaf_name_data.push_back(ssid.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());
    if (user_role.is_set || is_set(user_role.yfilter)) leaf_name_data.push_back(user_role.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "activated-service-template")
    {
        auto c = std::make_shared<Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate>();
        c->parent = this;
        activated_service_template.push_back(c);
        return c;
    }

    if(child_yang_name == "authorization-status")
    {
        if(authorization_status == nullptr)
        {
            authorization_status = std::make_shared<Native::Policy::ClassMap::NoMatch::AuthorizationStatus>();
        }
        return authorization_status;
    }

    if(child_yang_name == "authorizing-method-priority")
    {
        if(authorizing_method_priority == nullptr)
        {
            authorizing_method_priority = std::make_shared<Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority>();
        }
        return authorizing_method_priority;
    }

    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Policy::ClassMap::NoMatch::Method>();
        }
        return method;
    }

    if(child_yang_name == "result-type")
    {
        if(result_type == nullptr)
        {
            result_type = std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType>();
        }
        return result_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : activated_service_template)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(authorization_status != nullptr)
    {
        children["authorization-status"] = authorization_status;
    }

    if(authorizing_method_priority != nullptr)
    {
        children["authorizing-method-priority"] = authorizing_method_priority;
    }

    if(method != nullptr)
    {
        children["method"] = method;
    }

    if(result_type != nullptr)
    {
        children["result-type"] = result_type;
    }

    return children;
}

void Native::Policy::ClassMap::NoMatch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client-type")
    {
        client_type = value;
        client_type.value_namespace = name_space;
        client_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "device-type")
    {
        device_type = value;
        device_type.value_namespace = name_space;
        device_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oui")
    {
        oui = value;
        oui.value_namespace = name_space;
        oui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-type")
    {
        port_type = value;
        port_type.value_namespace = name_space;
        port_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-template")
    {
        service_template = value;
        service_template.value_namespace = name_space;
        service_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgt")
    {
        sgt = value;
        sgt.value_namespace = name_space;
        sgt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssid")
    {
        ssid = value;
        ssid.value_namespace = name_space;
        ssid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-role")
    {
        user_role = value;
        user_role.value_namespace = name_space;
        user_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client-type")
    {
        client_type.yfilter = yfilter;
    }
    if(value_path == "device-type")
    {
        device_type.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "oui")
    {
        oui.yfilter = yfilter;
    }
    if(value_path == "port-type")
    {
        port_type.yfilter = yfilter;
    }
    if(value_path == "service-template")
    {
        service_template.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "sgt")
    {
        sgt.yfilter = yfilter;
    }
    if(value_path == "ssid")
    {
        ssid.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
    if(value_path == "user-role")
    {
        user_role.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activated-service-template" || name == "authorization-status" || name == "authorizing-method-priority" || name == "method" || name == "result-type" || name == "client-type" || name == "device-type" || name == "interface" || name == "ip-address" || name == "ipv6-address" || name == "mac-address" || name == "oui" || name == "port-type" || name == "service-template" || name == "session-type" || name == "sgt" || name == "ssid" || name == "tag" || name == "timer" || name == "user-role" || name == "username")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::ActivatedServiceTemplate()
    :
    service_name{YType::str, "service-name"}
{

    yang_name = "activated-service-template"; yang_parent_name = "no-match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::~ActivatedServiceTemplate()
{
}

bool Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::has_data() const
{
    return service_name.is_set;
}

bool Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_name.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "activated-service-template" <<"[service-name='" <<service_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_name.is_set || is_set(service_name.yfilter)) leaf_name_data.push_back(service_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-name")
    {
        service_name = value;
        service_name.value_namespace = name_space;
        service_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-name")
    {
        service_name.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::ActivatedServiceTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-name")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::AuthorizationStatus::AuthorizationStatus()
    :
    authorized{YType::empty, "authorized"},
    unauthorized{YType::empty, "unauthorized"}
{

    yang_name = "authorization-status"; yang_parent_name = "no-match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::AuthorizationStatus::~AuthorizationStatus()
{
}

bool Native::Policy::ClassMap::NoMatch::AuthorizationStatus::has_data() const
{
    return authorized.is_set
	|| unauthorized.is_set;
}

bool Native::Policy::ClassMap::NoMatch::AuthorizationStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authorized.yfilter)
	|| ydk::is_set(unauthorized.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::AuthorizationStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::AuthorizationStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authorized.is_set || is_set(authorized.yfilter)) leaf_name_data.push_back(authorized.get_name_leafdata());
    if (unauthorized.is_set || is_set(unauthorized.yfilter)) leaf_name_data.push_back(unauthorized.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::AuthorizationStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::AuthorizationStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::NoMatch::AuthorizationStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authorized")
    {
        authorized = value;
        authorized.value_namespace = name_space;
        authorized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unauthorized")
    {
        unauthorized = value;
        unauthorized.value_namespace = name_space;
        unauthorized.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::AuthorizationStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authorized")
    {
        authorized.yfilter = yfilter;
    }
    if(value_path == "unauthorized")
    {
        unauthorized.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::AuthorizationStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorized" || name == "unauthorized")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::AuthorizingMethodPriority()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"}
{

    yang_name = "authorizing-method-priority"; yang_parent_name = "no-match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::~AuthorizingMethodPriority()
{
}

bool Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::has_data() const
{
    return eq.is_set
	|| gt.is_set
	|| lt.is_set;
}

bool Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorizing-method-priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eq")
    {
        eq = value;
        eq.value_namespace = name_space;
        eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gt")
    {
        gt = value;
        gt.value_namespace = name_space;
        gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt")
    {
        lt = value;
        lt.value_namespace = name_space;
        lt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eq")
    {
        eq.yfilter = yfilter;
    }
    if(value_path == "gt")
    {
        gt.yfilter = yfilter;
    }
    if(value_path == "lt")
    {
        lt.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::AuthorizingMethodPriority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eq" || name == "gt" || name == "lt")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::Method::Method()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{

    yang_name = "method"; yang_parent_name = "no-match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::Method::~Method()
{
}

bool Native::Policy::ClassMap::NoMatch::Method::has_data() const
{
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Policy::ClassMap::NoMatch::Method::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x.yfilter)
	|| ydk::is_set(mab.yfilter)
	|| ydk::is_set(webauth.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.yfilter)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.yfilter)) leaf_name_data.push_back(webauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::NoMatch::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
        dot1x.value_namespace = name_space;
        dot1x.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mab")
    {
        mab = value;
        mab.value_namespace = name_space;
        mab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webauth")
    {
        webauth = value;
        webauth.value_namespace = name_space;
        webauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1x")
    {
        dot1x.yfilter = yfilter;
    }
    if(value_path == "mab")
    {
        mab.yfilter = yfilter;
    }
    if(value_path == "webauth")
    {
        webauth.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::ResultType::ResultType()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
    	,
    method(std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method>())
{
    method->parent = this;

    yang_name = "result-type"; yang_parent_name = "no-match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::ResultType::~ResultType()
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set
	|| (method !=  nullptr && method->has_data());
}

bool Native::Policy::ClassMap::NoMatch::ResultType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter)
	|| (method !=  nullptr && method->has_operation());
}

std::string Native::Policy::ClassMap::NoMatch::ResultType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "result-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::ResultType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::ResultType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method>();
        }
        return method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::ResultType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(method != nullptr)
    {
        children["method"] = method;
    }

    return children;
}

void Native::Policy::ClassMap::NoMatch::ResultType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::ResultType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::ResultType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method" || name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Method()
    :
    dot1x(std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X>())
	,mab(std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab>())
	,webauth(std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth>())
{
    dot1x->parent = this;
    mab->parent = this;
    webauth->parent = this;

    yang_name = "method"; yang_parent_name = "result-type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::~Method()
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::has_data() const
{
    return (dot1x !=  nullptr && dot1x->has_data())
	|| (mab !=  nullptr && mab->has_data())
	|| (webauth !=  nullptr && webauth->has_data());
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::has_operation() const
{
    return is_set(yfilter)
	|| (dot1x !=  nullptr && dot1x->has_operation())
	|| (mab !=  nullptr && mab->has_operation())
	|| (webauth !=  nullptr && webauth->has_operation());
}

std::string Native::Policy::ClassMap::NoMatch::ResultType::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::ResultType::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::ResultType::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dot1x")
    {
        if(dot1x == nullptr)
        {
            dot1x = std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X>();
        }
        return dot1x;
    }

    if(child_yang_name == "mab")
    {
        if(mab == nullptr)
        {
            mab = std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab>();
        }
        return mab;
    }

    if(child_yang_name == "webauth")
    {
        if(webauth == nullptr)
        {
            webauth = std::make_shared<Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth>();
        }
        return webauth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::ResultType::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dot1x != nullptr)
    {
        children["dot1x"] = dot1x;
    }

    if(mab != nullptr)
    {
        children["mab"] = mab;
    }

    if(webauth != nullptr)
    {
        children["webauth"] = webauth;
    }

    return children;
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::Dot1X()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{

    yang_name = "dot1x"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::~Dot1X()
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Dot1X::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::Mab()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{

    yang_name = "mab"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::~Mab()
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mab";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Mab::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::Webauth()
    :
    aaa_timeout{YType::empty, "aaa-timeout"},
    agent_not_found{YType::empty, "agent-not-found"},
    authoritative{YType::empty, "authoritative"},
    method_timeout{YType::empty, "method-timeout"},
    none{YType::empty, "none"},
    success{YType::empty, "success"}
{

    yang_name = "webauth"; yang_parent_name = "method"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::~Webauth()
{
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::has_data() const
{
    return aaa_timeout.is_set
	|| agent_not_found.is_set
	|| authoritative.is_set
	|| method_timeout.is_set
	|| none.is_set
	|| success.is_set;
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_timeout.yfilter)
	|| ydk::is_set(agent_not_found.yfilter)
	|| ydk::is_set(authoritative.yfilter)
	|| ydk::is_set(method_timeout.yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(success.yfilter);
}

std::string Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "webauth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_timeout.is_set || is_set(aaa_timeout.yfilter)) leaf_name_data.push_back(aaa_timeout.get_name_leafdata());
    if (agent_not_found.is_set || is_set(agent_not_found.yfilter)) leaf_name_data.push_back(agent_not_found.get_name_leafdata());
    if (authoritative.is_set || is_set(authoritative.yfilter)) leaf_name_data.push_back(authoritative.get_name_leafdata());
    if (method_timeout.is_set || is_set(method_timeout.yfilter)) leaf_name_data.push_back(method_timeout.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout = value;
        aaa_timeout.value_namespace = name_space;
        aaa_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found = value;
        agent_not_found.value_namespace = name_space;
        agent_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative")
    {
        authoritative = value;
        authoritative.value_namespace = name_space;
        authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-timeout")
    {
        method_timeout = value;
        method_timeout.value_namespace = name_space;
        method_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-timeout")
    {
        aaa_timeout.yfilter = yfilter;
    }
    if(value_path == "agent-not-found")
    {
        agent_not_found.yfilter = yfilter;
    }
    if(value_path == "authoritative")
    {
        authoritative.yfilter = yfilter;
    }
    if(value_path == "method-timeout")
    {
        method_timeout.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
}

bool Native::Policy::ClassMap::NoMatch::ResultType::Method::Webauth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-timeout" || name == "agent-not-found" || name == "authoritative" || name == "method-timeout" || name == "none" || name == "success")
        return true;
    return false;
}

Native::Policy::PolicyMap::PolicyMap()
    :
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    subscriber{YType::empty, "subscriber"},
    protocol{YType::enumeration, "protocol"},
    description{YType::str, "description"},
    sequence_interval{YType::uint16, "sequence-interval"}
{

    yang_name = "policy-map"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Policy::PolicyMap::~PolicyMap()
{
}

bool Native::Policy::PolicyMap::has_data() const
{
    for (std::size_t index=0; index<event.size(); index++)
    {
        if(event[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return name.is_set
	|| type.is_set
	|| subscriber.is_set
	|| protocol.is_set
	|| description.is_set
	|| sequence_interval.is_set;
}

bool Native::Policy::PolicyMap::has_operation() const
{
    for (std::size_t index=0; index<event.size(); index++)
    {
        if(event[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(subscriber.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(sequence_interval.yfilter);
}

std::string Native::Policy::PolicyMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Policy::PolicyMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:policy-map" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (subscriber.is_set || is_set(subscriber.yfilter)) leaf_name_data.push_back(subscriber.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (sequence_interval.is_set || is_set(sequence_interval.yfilter)) leaf_name_data.push_back(sequence_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        auto c = std::make_shared<Native::Policy::PolicyMap::Event>();
        c->parent = this;
        event.push_back(c);
        return c;
    }

    if(child_yang_name == "class")
    {
        auto c = std::make_shared<Native::Policy::PolicyMap::Class>();
        c->parent = this;
        class_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : event)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : class_)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber")
    {
        subscriber = value;
        subscriber.value_namespace = name_space;
        subscriber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-interval")
    {
        sequence_interval = value;
        sequence_interval.value_namespace = name_space;
        sequence_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "subscriber")
    {
        subscriber.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "sequence-interval")
    {
        sequence_interval.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event" || name == "class" || name == "name" || name == "type" || name == "subscriber" || name == "protocol" || name == "description" || name == "sequence-interval")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::Event()
    :
    event_type{YType::enumeration, "event-type"},
    match_type{YType::enumeration, "match-type"}
{

    yang_name = "event"; yang_parent_name = "policy-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::~Event()
{
}

bool Native::Policy::PolicyMap::Event::has_data() const
{
    for (std::size_t index=0; index<class_number.size(); index++)
    {
        if(class_number[index]->has_data())
            return true;
    }
    return event_type.is_set
	|| match_type.is_set;
}

bool Native::Policy::PolicyMap::Event::has_operation() const
{
    for (std::size_t index=0; index<class_number.size(); index++)
    {
        if(class_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| ydk::is_set(match_type.yfilter);
}

std::string Native::Policy::PolicyMap::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event" <<"[event-type='" <<event_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());
    if (match_type.is_set || is_set(match_type.yfilter)) leaf_name_data.push_back(match_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-number")
    {
        auto c = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber>();
        c->parent = this;
        class_number.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : class_number)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-type")
    {
        match_type = value;
        match_type.value_namespace = name_space;
        match_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
    if(value_path == "match-type")
    {
        match_type.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-number" || name == "event-type" || name == "match-type")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ClassNumber()
    :
    number{YType::uint8, "number"},
    class_{YType::str, "class"},
    execution_type{YType::enumeration, "execution-type"}
{

    yang_name = "class-number"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::~ClassNumber()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::has_data() const
{
    for (std::size_t index=0; index<action_number.size(); index++)
    {
        if(action_number[index]->has_data())
            return true;
    }
    return number.is_set
	|| class_.is_set
	|| execution_type.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::has_operation() const
{
    for (std::size_t index=0; index<action_number.size(); index++)
    {
        if(action_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(execution_type.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-number" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (execution_type.is_set || is_set(execution_type.yfilter)) leaf_name_data.push_back(execution_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-number")
    {
        auto c = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber>();
        c->parent = this;
        action_number.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : action_number)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "execution-type")
    {
        execution_type = value;
        execution_type.value_namespace = name_space;
        execution_type.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "execution-type")
    {
        execution_type.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-number" || name == "number" || name == "class" || name == "execution-type")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::ActionNumber()
    :
    number{YType::uint8, "number"},
    replace{YType::empty, "replace"},
    clear_session{YType::empty, "clear-session"},
    authentication_restart{YType::uint16, "authentication-restart"},
    authorize{YType::empty, "authorize"}
    	,
    terminate(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate>())
	,resume(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume>())
	,pause(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause>())
	,activate(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate>())
	,authenticate(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate>())
	,map(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map>())
{
    terminate->parent = this;
    resume->parent = this;
    pause->parent = this;
    activate->parent = this;
    authenticate->parent = this;
    map->parent = this;

    yang_name = "action-number"; yang_parent_name = "class-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::~ActionNumber()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::has_data() const
{
    return number.is_set
	|| replace.is_set
	|| clear_session.is_set
	|| authentication_restart.is_set
	|| authorize.is_set
	|| (terminate !=  nullptr && terminate->has_data())
	|| (resume !=  nullptr && resume->has_data())
	|| (pause !=  nullptr && pause->has_data())
	|| (activate !=  nullptr && activate->has_data())
	|| (authenticate !=  nullptr && authenticate->has_data())
	|| (map !=  nullptr && map->has_data());
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(replace.yfilter)
	|| ydk::is_set(clear_session.yfilter)
	|| ydk::is_set(authentication_restart.yfilter)
	|| ydk::is_set(authorize.yfilter)
	|| (terminate !=  nullptr && terminate->has_operation())
	|| (resume !=  nullptr && resume->has_operation())
	|| (pause !=  nullptr && pause->has_operation())
	|| (activate !=  nullptr && activate->has_operation())
	|| (authenticate !=  nullptr && authenticate->has_operation())
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-number" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (replace.is_set || is_set(replace.yfilter)) leaf_name_data.push_back(replace.get_name_leafdata());
    if (clear_session.is_set || is_set(clear_session.yfilter)) leaf_name_data.push_back(clear_session.get_name_leafdata());
    if (authentication_restart.is_set || is_set(authentication_restart.yfilter)) leaf_name_data.push_back(authentication_restart.get_name_leafdata());
    if (authorize.is_set || is_set(authorize.yfilter)) leaf_name_data.push_back(authorize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "terminate")
    {
        if(terminate == nullptr)
        {
            terminate = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate>();
        }
        return terminate;
    }

    if(child_yang_name == "resume")
    {
        if(resume == nullptr)
        {
            resume = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume>();
        }
        return resume;
    }

    if(child_yang_name == "pause")
    {
        if(pause == nullptr)
        {
            pause = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause>();
        }
        return pause;
    }

    if(child_yang_name == "activate")
    {
        if(activate == nullptr)
        {
            activate = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate>();
        }
        return activate;
    }

    if(child_yang_name == "authenticate")
    {
        if(authenticate == nullptr)
        {
            authenticate = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate>();
        }
        return authenticate;
    }

    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(terminate != nullptr)
    {
        children["terminate"] = terminate;
    }

    if(resume != nullptr)
    {
        children["resume"] = resume;
    }

    if(pause != nullptr)
    {
        children["pause"] = pause;
    }

    if(activate != nullptr)
    {
        children["activate"] = activate;
    }

    if(authenticate != nullptr)
    {
        children["authenticate"] = authenticate;
    }

    if(map != nullptr)
    {
        children["map"] = map;
    }

    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replace")
    {
        replace = value;
        replace.value_namespace = name_space;
        replace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-session")
    {
        clear_session = value;
        clear_session.value_namespace = name_space;
        clear_session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-restart")
    {
        authentication_restart = value;
        authentication_restart.value_namespace = name_space;
        authentication_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authorize")
    {
        authorize = value;
        authorize.value_namespace = name_space;
        authorize.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "replace")
    {
        replace.yfilter = yfilter;
    }
    if(value_path == "clear-session")
    {
        clear_session.yfilter = yfilter;
    }
    if(value_path == "authentication-restart")
    {
        authentication_restart.yfilter = yfilter;
    }
    if(value_path == "authorize")
    {
        authorize.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "terminate" || name == "resume" || name == "pause" || name == "activate" || name == "authenticate" || name == "map" || name == "number" || name == "replace" || name == "clear-session" || name == "authentication-restart" || name == "authorize")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::Terminate()
    :
    dot1x{YType::empty, "dot1x"},
    mab{YType::empty, "mab"},
    webauth{YType::empty, "webauth"}
{

    yang_name = "terminate"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::~Terminate()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::has_data() const
{
    return dot1x.is_set
	|| mab.is_set
	|| webauth.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dot1x.yfilter)
	|| ydk::is_set(mab.yfilter)
	|| ydk::is_set(webauth.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "terminate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dot1x.is_set || is_set(dot1x.yfilter)) leaf_name_data.push_back(dot1x.get_name_leafdata());
    if (mab.is_set || is_set(mab.yfilter)) leaf_name_data.push_back(mab.get_name_leafdata());
    if (webauth.is_set || is_set(webauth.yfilter)) leaf_name_data.push_back(webauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dot1x")
    {
        dot1x = value;
        dot1x.value_namespace = name_space;
        dot1x.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mab")
    {
        mab = value;
        mab.value_namespace = name_space;
        mab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "webauth")
    {
        webauth = value;
        webauth.value_namespace = name_space;
        webauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dot1x")
    {
        dot1x.yfilter = yfilter;
    }
    if(value_path == "mab")
    {
        mab.yfilter = yfilter;
    }
    if(value_path == "webauth")
    {
        webauth.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Terminate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dot1x" || name == "mab" || name == "webauth")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::Resume()
    :
    reauthentication{YType::empty, "reauthentication"}
{

    yang_name = "resume"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::~Resume()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::has_data() const
{
    return reauthentication.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reauthentication.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resume";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reauthentication.is_set || is_set(reauthentication.yfilter)) leaf_name_data.push_back(reauthentication.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reauthentication")
    {
        reauthentication = value;
        reauthentication.value_namespace = name_space;
        reauthentication.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reauthentication")
    {
        reauthentication.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Resume::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reauthentication")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::Pause()
    :
    reauthentication{YType::empty, "reauthentication"}
{

    yang_name = "pause"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::~Pause()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::has_data() const
{
    return reauthentication.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reauthentication.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pause";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reauthentication.is_set || is_set(reauthentication.yfilter)) leaf_name_data.push_back(reauthentication.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reauthentication")
    {
        reauthentication = value;
        reauthentication.value_namespace = name_space;
        reauthentication.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reauthentication")
    {
        reauthentication.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Pause::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reauthentication")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::Activate()
    :
    service_template{YType::str, "service-template"}
{

    yang_name = "activate"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::~Activate()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::has_data() const
{
    return service_template.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_template.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "activate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_template.is_set || is_set(service_template.yfilter)) leaf_name_data.push_back(service_template.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-template")
    {
        service_template = value;
        service_template.value_namespace = name_space;
        service_template.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-template")
    {
        service_template.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Activate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-template")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Authenticate()
    :
    using_(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using>())
{
    using_->parent = this;

    yang_name = "authenticate"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::~Authenticate()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::has_data() const
{
    return (using_ !=  nullptr && using_->has_data());
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::has_operation() const
{
    return is_set(yfilter)
	|| (using_ !=  nullptr && using_->has_operation());
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authenticate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "using")
    {
        if(using_ == nullptr)
        {
            using_ = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using>();
        }
        return using_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(using_ != nullptr)
    {
        children["using"] = using_;
    }

    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "using")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::Using()
    :
    method{YType::enumeration, "method"},
    both{YType::empty, "both"},
    retries{YType::uint8, "retries"},
    retry_time{YType::uint16, "retry-time"},
    priority{YType::uint8, "priority"},
    parameter_map{YType::str, "parameter-map"}
{

    yang_name = "using"; yang_parent_name = "authenticate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::~Using()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::has_data() const
{
    return method.is_set
	|| both.is_set
	|| retries.is_set
	|| retry_time.is_set
	|| priority.is_set
	|| parameter_map.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(method.yfilter)
	|| ydk::is_set(both.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(retry_time.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(parameter_map.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "using";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (method.is_set || is_set(method.yfilter)) leaf_name_data.push_back(method.get_name_leafdata());
    if (both.is_set || is_set(both.yfilter)) leaf_name_data.push_back(both.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (retry_time.is_set || is_set(retry_time.yfilter)) leaf_name_data.push_back(retry_time.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (parameter_map.is_set || is_set(parameter_map.yfilter)) leaf_name_data.push_back(parameter_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "method")
    {
        method = value;
        method.value_namespace = name_space;
        method.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "both")
    {
        both = value;
        both.value_namespace = name_space;
        both.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-time")
    {
        retry_time = value;
        retry_time.value_namespace = name_space;
        retry_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parameter-map")
    {
        parameter_map = value;
        parameter_map.value_namespace = name_space;
        parameter_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "method")
    {
        method.yfilter = yfilter;
    }
    if(value_path == "both")
    {
        both.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "retry-time")
    {
        retry_time.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "parameter-map")
    {
        parameter_map.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method" || name == "both" || name == "retries" || name == "retry-time" || name == "priority" || name == "parameter-map")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::Map()
    :
    attribute_to_service(std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService>())
{
    attribute_to_service->parent = this;

    yang_name = "map"; yang_parent_name = "action-number"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::~Map()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::has_data() const
{
    return (attribute_to_service !=  nullptr && attribute_to_service->has_data());
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::has_operation() const
{
    return is_set(yfilter)
	|| (attribute_to_service !=  nullptr && attribute_to_service->has_operation());
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-to-service")
    {
        if(attribute_to_service == nullptr)
        {
            attribute_to_service = std::make_shared<Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService>();
        }
        return attribute_to_service;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(attribute_to_service != nullptr)
    {
        children["attribute-to-service"] = attribute_to_service;
    }

    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-to-service")
        return true;
    return false;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService::AttributeToService()
    :
    table{YType::str, "table"}
{

    yang_name = "attribute-to-service"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService::~AttributeToService()
{
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService::has_data() const
{
    return table.is_set;
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-to-service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Map::AttributeToService::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::Class()
    :
    name{YType::str, "name"},
    type{YType::enumeration, "type"},
    insert_before{YType::str, "insert-before"},
    random_detect{YType::empty, "random-detect"}
    	,
    appnav_policy(std::make_shared<Native::Policy::PolicyMap::Class::AppnavPolicy>())
	,policy(std::make_shared<Native::Policy::PolicyMap::Class::Policy_>())
	,pm_policy(std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy>())
	,inspect_police(std::make_shared<Native::Policy::PolicyMap::Class::InspectPolice>())
{
    appnav_policy->parent = this;
    policy->parent = this;
    pm_policy->parent = this;
    inspect_police->parent = this;

    yang_name = "class"; yang_parent_name = "policy-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::~Class()
{
}

bool Native::Policy::PolicyMap::Class::has_data() const
{
    for (std::size_t index=0; index<action_list.size(); index++)
    {
        if(action_list[index]->has_data())
            return true;
    }
    return name.is_set
	|| type.is_set
	|| insert_before.is_set
	|| random_detect.is_set
	|| (appnav_policy !=  nullptr && appnav_policy->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (pm_policy !=  nullptr && pm_policy->has_data())
	|| (inspect_police !=  nullptr && inspect_police->has_data());
}

bool Native::Policy::PolicyMap::Class::has_operation() const
{
    for (std::size_t index=0; index<action_list.size(); index++)
    {
        if(action_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(insert_before.yfilter)
	|| ydk::is_set(random_detect.yfilter)
	|| (appnav_policy !=  nullptr && appnav_policy->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (pm_policy !=  nullptr && pm_policy->has_operation())
	|| (inspect_police !=  nullptr && inspect_police->has_operation());
}

std::string Native::Policy::PolicyMap::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (insert_before.is_set || is_set(insert_before.yfilter)) leaf_name_data.push_back(insert_before.get_name_leafdata());
    if (random_detect.is_set || is_set(random_detect.yfilter)) leaf_name_data.push_back(random_detect.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "appnav-policy")
    {
        if(appnav_policy == nullptr)
        {
            appnav_policy = std::make_shared<Native::Policy::PolicyMap::Class::AppnavPolicy>();
        }
        return appnav_policy;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Policy::PolicyMap::Class::Policy_>();
        }
        return policy;
    }

    if(child_yang_name == "pm-policy")
    {
        if(pm_policy == nullptr)
        {
            pm_policy = std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy>();
        }
        return pm_policy;
    }

    if(child_yang_name == "inspect-police")
    {
        if(inspect_police == nullptr)
        {
            inspect_police = std::make_shared<Native::Policy::PolicyMap::Class::InspectPolice>();
        }
        return inspect_police;
    }

    if(child_yang_name == "action-list")
    {
        auto c = std::make_shared<Native::Policy::PolicyMap::Class::ActionList>();
        c->parent = this;
        action_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(appnav_policy != nullptr)
    {
        children["appnav-policy"] = appnav_policy;
    }

    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(pm_policy != nullptr)
    {
        children["pm-policy"] = pm_policy;
    }

    if(inspect_police != nullptr)
    {
        children["inspect-police"] = inspect_police;
    }

    count = 0;
    for (auto const & c : action_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insert-before")
    {
        insert_before = value;
        insert_before.value_namespace = name_space;
        insert_before.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "random-detect")
    {
        random_detect = value;
        random_detect.value_namespace = name_space;
        random_detect.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "insert-before")
    {
        insert_before.yfilter = yfilter;
    }
    if(value_path == "random-detect")
    {
        random_detect.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appnav-policy" || name == "policy" || name == "pm-policy" || name == "inspect-police" || name == "action-list" || name == "name" || name == "type" || name == "insert-before" || name == "random-detect")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::AppnavPolicy::AppnavPolicy()
    :
    monitor_load{YType::enumeration, "monitor-load"},
    pass_through{YType::empty, "pass-through"}
{

    yang_name = "appnav-policy"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::AppnavPolicy::~AppnavPolicy()
{
}

bool Native::Policy::PolicyMap::Class::AppnavPolicy::has_data() const
{
    for (std::size_t index=0; index<distribute.size(); index++)
    {
        if(distribute[index]->has_data())
            return true;
    }
    return monitor_load.is_set
	|| pass_through.is_set;
}

bool Native::Policy::PolicyMap::Class::AppnavPolicy::has_operation() const
{
    for (std::size_t index=0; index<distribute.size(); index++)
    {
        if(distribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(monitor_load.yfilter)
	|| ydk::is_set(pass_through.yfilter);
}

std::string Native::Policy::PolicyMap::Class::AppnavPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "appnav-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::AppnavPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_load.is_set || is_set(monitor_load.yfilter)) leaf_name_data.push_back(monitor_load.get_name_leafdata());
    if (pass_through.is_set || is_set(pass_through.yfilter)) leaf_name_data.push_back(pass_through.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::AppnavPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "distribute")
    {
        auto c = std::make_shared<Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute>();
        c->parent = this;
        distribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::AppnavPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : distribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::AppnavPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-load")
    {
        monitor_load = value;
        monitor_load.value_namespace = name_space;
        monitor_load.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pass-through")
    {
        pass_through = value;
        pass_through.value_namespace = name_space;
        pass_through.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::AppnavPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-load")
    {
        monitor_load.yfilter = yfilter;
    }
    if(value_path == "pass-through")
    {
        pass_through.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::AppnavPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distribute" || name == "monitor-load" || name == "pass-through")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::Distribute()
    :
    service_node_group{YType::str, "service-node-group"},
    insert_before{YType::str, "insert-before"}
{

    yang_name = "distribute"; yang_parent_name = "appnav-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::~Distribute()
{
}

bool Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::has_data() const
{
    return service_node_group.is_set
	|| insert_before.is_set;
}

bool Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_node_group.yfilter)
	|| ydk::is_set(insert_before.yfilter);
}

std::string Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute" <<"[service-node-group='" <<service_node_group <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_node_group.is_set || is_set(service_node_group.yfilter)) leaf_name_data.push_back(service_node_group.get_name_leafdata());
    if (insert_before.is_set || is_set(insert_before.yfilter)) leaf_name_data.push_back(insert_before.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-node-group")
    {
        service_node_group = value;
        service_node_group.value_namespace = name_space;
        service_node_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insert-before")
    {
        insert_before = value;
        insert_before.value_namespace = name_space;
        insert_before.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-node-group")
    {
        service_node_group.yfilter = yfilter;
    }
    if(value_path == "insert-before")
    {
        insert_before.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::AppnavPolicy::Distribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-node-group" || name == "insert-before")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::Policy_::Policy_()
    :
    action{YType::enumeration, "action"},
    log{YType::empty, "log"},
    parameter_map{YType::str, "parameter-map"}
    	,
    dpi(std::make_shared<Native::Policy::PolicyMap::Class::Policy_::Dpi>())
{
    dpi->parent = this;

    yang_name = "policy"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::Policy_::~Policy_()
{
}

bool Native::Policy::PolicyMap::Class::Policy_::has_data() const
{
    return action.is_set
	|| log.is_set
	|| parameter_map.is_set
	|| (dpi !=  nullptr && dpi->has_data());
}

bool Native::Policy::PolicyMap::Class::Policy_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(parameter_map.yfilter)
	|| (dpi !=  nullptr && dpi->has_operation());
}

std::string Native::Policy::PolicyMap::Class::Policy_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::Policy_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (parameter_map.is_set || is_set(parameter_map.yfilter)) leaf_name_data.push_back(parameter_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::Policy_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dpi")
    {
        if(dpi == nullptr)
        {
            dpi = std::make_shared<Native::Policy::PolicyMap::Class::Policy_::Dpi>();
        }
        return dpi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::Policy_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(dpi != nullptr)
    {
        children["dpi"] = dpi;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::Policy_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parameter-map")
    {
        parameter_map = value;
        parameter_map.value_namespace = name_space;
        parameter_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::Policy_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "parameter-map")
    {
        parameter_map.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::Policy_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dpi" || name == "action" || name == "log" || name == "parameter-map")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::Policy_::Dpi::Dpi()
    :
    type{YType::enumeration, "type"},
    policy_map{YType::str, "policy-map"}
{

    yang_name = "dpi"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::Policy_::Dpi::~Dpi()
{
}

bool Native::Policy::PolicyMap::Class::Policy_::Dpi::has_data() const
{
    return type.is_set
	|| policy_map.is_set;
}

bool Native::Policy::PolicyMap::Class::Policy_::Dpi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(policy_map.yfilter);
}

std::string Native::Policy::PolicyMap::Class::Policy_::Dpi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dpi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::Policy_::Dpi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (policy_map.is_set || is_set(policy_map.yfilter)) leaf_name_data.push_back(policy_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::Policy_::Dpi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::Policy_::Dpi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::Policy_::Dpi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-map")
    {
        policy_map = value;
        policy_map.value_namespace = name_space;
        policy_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::Policy_::Dpi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "policy-map")
    {
        policy_map.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::Policy_::Dpi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "policy-map")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::PmPolicy::PmPolicy()
    :
    flow(std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::Flow>())
	,monitor(std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::Monitor>())
{
    flow->parent = this;
    monitor->parent = this;

    yang_name = "pm-policy"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::PmPolicy::~PmPolicy()
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::has_data() const
{
    for (std::size_t index=0; index<react.size(); index++)
    {
        if(react[index]->has_data())
            return true;
    }
    return (flow !=  nullptr && flow->has_data())
	|| (monitor !=  nullptr && monitor->has_data());
}

bool Native::Policy::PolicyMap::Class::PmPolicy::has_operation() const
{
    for (std::size_t index=0; index<react.size(); index++)
    {
        if(react[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (flow !=  nullptr && flow->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation());
}

std::string Native::Policy::PolicyMap::Class::PmPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pm-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::PmPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::PmPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::Flow>();
        }
        return flow;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "react")
    {
        auto c = std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::React>();
        c->parent = this;
        react.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::PmPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    count = 0;
    for (auto const & c : react)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::PmPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::PmPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow" || name == "monitor" || name == "react")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::PmPolicy::Flow::Flow()
    :
    monitor{YType::str, "monitor"}
{

    yang_name = "flow"; yang_parent_name = "pm-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::PmPolicy::Flow::~Flow()
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Flow::has_data() const
{
    return monitor.is_set;
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Flow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor.yfilter);
}

std::string Native::Policy::PolicyMap::Class::PmPolicy::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::PmPolicy::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::PmPolicy::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::PmPolicy::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::PmPolicy::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::PmPolicy::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Monitor()
    :
    metric(std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric>())
{
    metric->parent = this;

    yang_name = "monitor"; yang_parent_name = "pm-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::PmPolicy::Monitor::~Monitor()
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Monitor::has_data() const
{
    return (metric !=  nullptr && metric->has_data());
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Policy::PolicyMap::Class::PmPolicy::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::PmPolicy::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::PmPolicy::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::PmPolicy::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::PmPolicy::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::PmPolicy::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Metric()
    :
    rtp(std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp>())
{
    rtp->parent = this;

    yang_name = "metric"; yang_parent_name = "monitor"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::~Metric()
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::has_data() const
{
    return (rtp !=  nullptr && rtp->has_data());
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::has_operation() const
{
    return is_set(yfilter)
	|| (rtp !=  nullptr && rtp->has_operation());
}

std::string Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rtp")
    {
        if(rtp == nullptr)
        {
            rtp = std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp>();
        }
        return rtp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rtp != nullptr)
    {
        children["rtp"] = rtp;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtp")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::Rtp()
{

    yang_name = "rtp"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::~Rtp()
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::has_data() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::has_operation() const
{
    for (std::size_t index=0; index<clock_rate.size(); index++)
    {
        if(clock_rate[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rtp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock-rate")
    {
        auto c = std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate>();
        c->parent = this;
        clock_rate.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : clock_rate)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock-rate")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::ClockRate()
    :
    number{YType::str, "number"},
    frequency{YType::uint32, "frequency"}
{

    yang_name = "clock-rate"; yang_parent_name = "rtp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::~ClockRate()
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::has_data() const
{
    return number.is_set
	|| frequency.is_set;
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(frequency.yfilter);
}

std::string Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock-rate" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (frequency.is_set || is_set(frequency.yfilter)) leaf_name_data.push_back(frequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frequency")
    {
        frequency = value;
        frequency.value_namespace = name_space;
        frequency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "frequency")
    {
        frequency.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "frequency")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::PmPolicy::React::React()
    :
    id{YType::uint16, "id"},
    mode{YType::enumeration, "mode"},
    description{YType::str, "description"}
    	,
    action(std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::React::Action>())
	,alarm(std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm>())
	,threshold(std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold>())
{
    action->parent = this;
    alarm->parent = this;
    threshold->parent = this;

    yang_name = "react"; yang_parent_name = "pm-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::PmPolicy::React::~React()
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::React::has_data() const
{
    return id.is_set
	|| mode.is_set
	|| description.is_set
	|| (action !=  nullptr && action->has_data())
	|| (alarm !=  nullptr && alarm->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool Native::Policy::PolicyMap::Class::PmPolicy::React::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (alarm !=  nullptr && alarm->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::Policy::PolicyMap::Class::PmPolicy::React::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "react" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::PmPolicy::React::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::PmPolicy::React::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::React::Action>();
        }
        return action;
    }

    if(child_yang_name == "alarm")
    {
        if(alarm == nullptr)
        {
            alarm = std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm>();
        }
        return alarm;
    }

    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::PmPolicy::React::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(alarm != nullptr)
    {
        children["alarm"] = alarm;
    }

    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::PmPolicy::React::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::PmPolicy::React::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::PmPolicy::React::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "alarm" || name == "threshold" || name == "id" || name == "mode" || name == "description")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::PmPolicy::React::Action::Action()
    :
    snmp{YType::empty, "snmp"},
    syslog{YType::empty, "syslog"}
{

    yang_name = "action"; yang_parent_name = "react"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::PmPolicy::React::Action::~Action()
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::React::Action::has_data() const
{
    return snmp.is_set
	|| syslog.is_set;
}

bool Native::Policy::PolicyMap::Class::PmPolicy::React::Action::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snmp.yfilter)
	|| ydk::is_set(syslog.yfilter);
}

std::string Native::Policy::PolicyMap::Class::PmPolicy::React::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::PmPolicy::React::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmp.is_set || is_set(snmp.yfilter)) leaf_name_data.push_back(snmp.get_name_leafdata());
    if (syslog.is_set || is_set(syslog.yfilter)) leaf_name_data.push_back(syslog.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::PmPolicy::React::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::PmPolicy::React::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::PmPolicy::React::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snmp")
    {
        snmp = value;
        snmp.value_namespace = name_space;
        snmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syslog")
    {
        syslog = value;
        syslog.value_namespace = name_space;
        syslog.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::PmPolicy::React::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snmp")
    {
        snmp.yfilter = yfilter;
    }
    if(value_path == "syslog")
    {
        syslog.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::PmPolicy::React::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snmp" || name == "syslog")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Alarm()
    :
    severity{YType::enumeration, "severity"}
    	,
    type(std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type>())
{
    type->parent = this;

    yang_name = "alarm"; yang_parent_name = "react"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::~Alarm()
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::has_data() const
{
    return severity.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(severity.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "severity")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::Type()
    :
    discrete{YType::empty, "discrete"}
    	,
    grouped(std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::Grouped>())
{
    grouped->parent = this;

    yang_name = "type"; yang_parent_name = "alarm"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::~Type()
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::has_data() const
{
    return discrete.is_set
	|| (grouped !=  nullptr && grouped->has_data());
}

bool Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(discrete.yfilter)
	|| (grouped !=  nullptr && grouped->has_operation());
}

std::string Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discrete.is_set || is_set(discrete.yfilter)) leaf_name_data.push_back(discrete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "grouped")
    {
        if(grouped == nullptr)
        {
            grouped = std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::Grouped>();
        }
        return grouped;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(grouped != nullptr)
    {
        children["grouped"] = grouped;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "discrete")
    {
        discrete = value;
        discrete.value_namespace = name_space;
        discrete.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "discrete")
    {
        discrete.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "grouped" || name == "discrete")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::Grouped::Grouped()
    :
    count{YType::uint16, "count"},
    percent{YType::uint8, "percent"}
{

    yang_name = "grouped"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::Grouped::~Grouped()
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::Grouped::has_data() const
{
    return count.is_set
	|| percent.is_set;
}

bool Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::Grouped::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(percent.yfilter);
}

std::string Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::Grouped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "grouped";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::Grouped::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::Grouped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::Grouped::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::Grouped::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::Grouped::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Type::Grouped::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count" || name == "percent")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Threshold()
    :
    value_(std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value>())
{
    value_->parent = this;

    yang_name = "threshold"; yang_parent_name = "react"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::~Threshold()
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::has_data() const
{
    return (value_ !=  nullptr && value_->has_data());
}

bool Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| (value_ !=  nullptr && value_->has_operation());
}

std::string Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "value")
    {
        if(value_ == nullptr)
        {
            value_ = std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value>();
        }
        return value_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(value_ != nullptr)
    {
        children["value"] = value_;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::Value()
    :
    ge{YType::str, "ge"},
    gt{YType::str, "gt"},
    le{YType::str, "le"},
    lt{YType::str, "lt"}
    	,
    range(std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::Range>())
{
    range->parent = this;

    yang_name = "value"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::~Value()
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::has_data() const
{
    return ge.is_set
	|| gt.is_set
	|| le.is_set
	|| lt.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ge.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(le.yfilter)
	|| ydk::is_set(lt.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "value";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ge.is_set || is_set(ge.yfilter)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (le.is_set || is_set(le.yfilter)) leaf_name_data.push_back(le.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ge")
    {
        ge = value;
        ge.value_namespace = name_space;
        ge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gt")
    {
        gt = value;
        gt.value_namespace = name_space;
        gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le")
    {
        le = value;
        le.value_namespace = name_space;
        le.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lt")
    {
        lt = value;
        lt.value_namespace = name_space;
        lt.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ge")
    {
        ge.yfilter = yfilter;
    }
    if(value_path == "gt")
    {
        gt.yfilter = yfilter;
    }
    if(value_path == "le")
    {
        le.yfilter = yfilter;
    }
    if(value_path == "lt")
    {
        lt.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "ge" || name == "gt" || name == "le" || name == "lt")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::Range::Range()
    :
    low{YType::str, "low"},
    high{YType::str, "high"}
{

    yang_name = "range"; yang_parent_name = "value"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::Range::~Range()
{
}

bool Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::Range::has_data() const
{
    return low.is_set
	|| high.is_set;
}

bool Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low.yfilter)
	|| ydk::is_set(high.yfilter);
}

std::string Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low.is_set || is_set(low.yfilter)) leaf_name_data.push_back(low.get_name_leafdata());
    if (high.is_set || is_set(high.yfilter)) leaf_name_data.push_back(high.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low")
    {
        low = value;
        low.value_namespace = name_space;
        low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high")
    {
        high = value;
        high.value_namespace = name_space;
        high.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low")
    {
        low.yfilter = yfilter;
    }
    if(value_path == "high")
    {
        high.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::PmPolicy::React::Threshold::Value::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "low" || name == "high")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::InspectPolice::InspectPolice()
    :
    police(std::make_shared<Native::Policy::PolicyMap::Class::InspectPolice::Police>())
{
    police->parent = this;

    yang_name = "inspect-police"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::InspectPolice::~InspectPolice()
{
}

bool Native::Policy::PolicyMap::Class::InspectPolice::has_data() const
{
    return (police !=  nullptr && police->has_data());
}

bool Native::Policy::PolicyMap::Class::InspectPolice::has_operation() const
{
    return is_set(yfilter)
	|| (police !=  nullptr && police->has_operation());
}

std::string Native::Policy::PolicyMap::Class::InspectPolice::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspect-police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::InspectPolice::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::InspectPolice::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<Native::Policy::PolicyMap::Class::InspectPolice::Police>();
        }
        return police;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::InspectPolice::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(police != nullptr)
    {
        children["police"] = police;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::InspectPolice::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::InspectPolice::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::InspectPolice::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "police")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::InspectPolice::Police::Police()
    :
    rate{YType::uint32, "rate"},
    burst{YType::uint32, "burst"}
{

    yang_name = "police"; yang_parent_name = "inspect-police"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::InspectPolice::Police::~Police()
{
}

bool Native::Policy::PolicyMap::Class::InspectPolice::Police::has_data() const
{
    return rate.is_set
	|| burst.is_set;
}

bool Native::Policy::PolicyMap::Class::InspectPolice::Police::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rate.yfilter)
	|| ydk::is_set(burst.yfilter);
}

std::string Native::Policy::PolicyMap::Class::InspectPolice::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::InspectPolice::Police::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (burst.is_set || is_set(burst.yfilter)) leaf_name_data.push_back(burst.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::InspectPolice::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::InspectPolice::Police::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::InspectPolice::Police::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "burst")
    {
        burst = value;
        burst.value_namespace = name_space;
        burst.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::InspectPolice::Police::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
    if(value_path == "burst")
    {
        burst.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::InspectPolice::Police::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rate" || name == "burst")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::ActionList()
    :
    action_type{YType::enumeration, "action-type"},
    netflow_sampler{YType::str, "netflow-sampler"},
    service_policy{YType::str, "service-policy"},
    trust{YType::enumeration, "trust"}
    	,
    bandwidth(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::Bandwidth>())
	,compression(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::Compression>())
	,estimate(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::Estimate>())
	,forward(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::Forward>())
	,fair_queue(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::FairQueue>())
	,police_aggregate(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceAggregate>())
	,police_policy_map(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PolicePolicyMap>())
	,police_cir_percent(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceCirPercent>())
	,police_rate_unit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRateUnit>())
	,police_rate_percent(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent>())
	,police_rate_pdp(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp>())
	,police_target_bitrate(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate>())
	,police_flow(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceFlow>())
	,police_catalyst(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst>())
	,police_switch(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceSwitch>())
	,priority(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::Priority>())
	,queue_buffers(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::QueueBuffers>())
	,queue_limit(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::QueueLimit>())
	,queue_limit_dscp(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::QueueLimitDscp>())
	,random_detect(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::RandomDetect>())
	,set(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::Set>())
	,shape(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::Shape>())
{
    bandwidth->parent = this;
    compression->parent = this;
    estimate->parent = this;
    forward->parent = this;
    fair_queue->parent = this;
    police_aggregate->parent = this;
    police_policy_map->parent = this;
    police_cir_percent->parent = this;
    police_rate_unit->parent = this;
    police_rate_percent->parent = this;
    police_rate_pdp->parent = this;
    police_target_bitrate->parent = this;
    police_flow->parent = this;
    police_catalyst->parent = this;
    police_switch->parent = this;
    priority->parent = this;
    queue_buffers->parent = this;
    queue_limit->parent = this;
    queue_limit_dscp->parent = this;
    random_detect->parent = this;
    set->parent = this;
    shape->parent = this;

    yang_name = "action-list"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::~ActionList()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::has_data() const
{
    return action_type.is_set
	|| netflow_sampler.is_set
	|| service_policy.is_set
	|| trust.is_set
	|| (bandwidth !=  nullptr && bandwidth->has_data())
	|| (compression !=  nullptr && compression->has_data())
	|| (estimate !=  nullptr && estimate->has_data())
	|| (forward !=  nullptr && forward->has_data())
	|| (fair_queue !=  nullptr && fair_queue->has_data())
	|| (police_aggregate !=  nullptr && police_aggregate->has_data())
	|| (police_policy_map !=  nullptr && police_policy_map->has_data())
	|| (police_cir_percent !=  nullptr && police_cir_percent->has_data())
	|| (police_rate_unit !=  nullptr && police_rate_unit->has_data())
	|| (police_rate_percent !=  nullptr && police_rate_percent->has_data())
	|| (police_rate_pdp !=  nullptr && police_rate_pdp->has_data())
	|| (police_target_bitrate !=  nullptr && police_target_bitrate->has_data())
	|| (police_flow !=  nullptr && police_flow->has_data())
	|| (police_catalyst !=  nullptr && police_catalyst->has_data())
	|| (police_switch !=  nullptr && police_switch->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (queue_buffers !=  nullptr && queue_buffers->has_data())
	|| (queue_limit !=  nullptr && queue_limit->has_data())
	|| (queue_limit_dscp !=  nullptr && queue_limit_dscp->has_data())
	|| (random_detect !=  nullptr && random_detect->has_data())
	|| (set !=  nullptr && set->has_data())
	|| (shape !=  nullptr && shape->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_type.yfilter)
	|| ydk::is_set(netflow_sampler.yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| ydk::is_set(trust.yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation())
	|| (compression !=  nullptr && compression->has_operation())
	|| (estimate !=  nullptr && estimate->has_operation())
	|| (forward !=  nullptr && forward->has_operation())
	|| (fair_queue !=  nullptr && fair_queue->has_operation())
	|| (police_aggregate !=  nullptr && police_aggregate->has_operation())
	|| (police_policy_map !=  nullptr && police_policy_map->has_operation())
	|| (police_cir_percent !=  nullptr && police_cir_percent->has_operation())
	|| (police_rate_unit !=  nullptr && police_rate_unit->has_operation())
	|| (police_rate_percent !=  nullptr && police_rate_percent->has_operation())
	|| (police_rate_pdp !=  nullptr && police_rate_pdp->has_operation())
	|| (police_target_bitrate !=  nullptr && police_target_bitrate->has_operation())
	|| (police_flow !=  nullptr && police_flow->has_operation())
	|| (police_catalyst !=  nullptr && police_catalyst->has_operation())
	|| (police_switch !=  nullptr && police_switch->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (queue_buffers !=  nullptr && queue_buffers->has_operation())
	|| (queue_limit !=  nullptr && queue_limit->has_operation())
	|| (queue_limit_dscp !=  nullptr && queue_limit_dscp->has_operation())
	|| (random_detect !=  nullptr && random_detect->has_operation())
	|| (set !=  nullptr && set->has_operation())
	|| (shape !=  nullptr && shape->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-list" <<"[action-type='" <<action_type <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_type.is_set || is_set(action_type.yfilter)) leaf_name_data.push_back(action_type.get_name_leafdata());
    if (netflow_sampler.is_set || is_set(netflow_sampler.yfilter)) leaf_name_data.push_back(netflow_sampler.get_name_leafdata());
    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());
    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::Bandwidth>();
        }
        return bandwidth;
    }

    if(child_yang_name == "compression")
    {
        if(compression == nullptr)
        {
            compression = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::Compression>();
        }
        return compression;
    }

    if(child_yang_name == "estimate")
    {
        if(estimate == nullptr)
        {
            estimate = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::Estimate>();
        }
        return estimate;
    }

    if(child_yang_name == "forward")
    {
        if(forward == nullptr)
        {
            forward = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::Forward>();
        }
        return forward;
    }

    if(child_yang_name == "fair-queue")
    {
        if(fair_queue == nullptr)
        {
            fair_queue = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::FairQueue>();
        }
        return fair_queue;
    }

    if(child_yang_name == "police-aggregate")
    {
        if(police_aggregate == nullptr)
        {
            police_aggregate = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceAggregate>();
        }
        return police_aggregate;
    }

    if(child_yang_name == "police-policy-map")
    {
        if(police_policy_map == nullptr)
        {
            police_policy_map = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PolicePolicyMap>();
        }
        return police_policy_map;
    }

    if(child_yang_name == "police-cir-percent")
    {
        if(police_cir_percent == nullptr)
        {
            police_cir_percent = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceCirPercent>();
        }
        return police_cir_percent;
    }

    if(child_yang_name == "police-rate-unit")
    {
        if(police_rate_unit == nullptr)
        {
            police_rate_unit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRateUnit>();
        }
        return police_rate_unit;
    }

    if(child_yang_name == "police-rate-percent")
    {
        if(police_rate_percent == nullptr)
        {
            police_rate_percent = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePercent>();
        }
        return police_rate_percent;
    }

    if(child_yang_name == "police-rate-pdp")
    {
        if(police_rate_pdp == nullptr)
        {
            police_rate_pdp = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceRatePdp>();
        }
        return police_rate_pdp;
    }

    if(child_yang_name == "police-target-bitrate")
    {
        if(police_target_bitrate == nullptr)
        {
            police_target_bitrate = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceTargetBitrate>();
        }
        return police_target_bitrate;
    }

    if(child_yang_name == "police-flow")
    {
        if(police_flow == nullptr)
        {
            police_flow = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceFlow>();
        }
        return police_flow;
    }

    if(child_yang_name == "police-catalyst")
    {
        if(police_catalyst == nullptr)
        {
            police_catalyst = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceCatalyst>();
        }
        return police_catalyst;
    }

    if(child_yang_name == "police-switch")
    {
        if(police_switch == nullptr)
        {
            police_switch = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceSwitch>();
        }
        return police_switch;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "queue-buffers")
    {
        if(queue_buffers == nullptr)
        {
            queue_buffers = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::QueueBuffers>();
        }
        return queue_buffers;
    }

    if(child_yang_name == "queue-limit")
    {
        if(queue_limit == nullptr)
        {
            queue_limit = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::QueueLimit>();
        }
        return queue_limit;
    }

    if(child_yang_name == "queue-limit-dscp")
    {
        if(queue_limit_dscp == nullptr)
        {
            queue_limit_dscp = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::QueueLimitDscp>();
        }
        return queue_limit_dscp;
    }

    if(child_yang_name == "random-detect")
    {
        if(random_detect == nullptr)
        {
            random_detect = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::RandomDetect>();
        }
        return random_detect;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::Set>();
        }
        return set;
    }

    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::Shape>();
        }
        return shape;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    if(compression != nullptr)
    {
        children["compression"] = compression;
    }

    if(estimate != nullptr)
    {
        children["estimate"] = estimate;
    }

    if(forward != nullptr)
    {
        children["forward"] = forward;
    }

    if(fair_queue != nullptr)
    {
        children["fair-queue"] = fair_queue;
    }

    if(police_aggregate != nullptr)
    {
        children["police-aggregate"] = police_aggregate;
    }

    if(police_policy_map != nullptr)
    {
        children["police-policy-map"] = police_policy_map;
    }

    if(police_cir_percent != nullptr)
    {
        children["police-cir-percent"] = police_cir_percent;
    }

    if(police_rate_unit != nullptr)
    {
        children["police-rate-unit"] = police_rate_unit;
    }

    if(police_rate_percent != nullptr)
    {
        children["police-rate-percent"] = police_rate_percent;
    }

    if(police_rate_pdp != nullptr)
    {
        children["police-rate-pdp"] = police_rate_pdp;
    }

    if(police_target_bitrate != nullptr)
    {
        children["police-target-bitrate"] = police_target_bitrate;
    }

    if(police_flow != nullptr)
    {
        children["police-flow"] = police_flow;
    }

    if(police_catalyst != nullptr)
    {
        children["police-catalyst"] = police_catalyst;
    }

    if(police_switch != nullptr)
    {
        children["police-switch"] = police_switch;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(queue_buffers != nullptr)
    {
        children["queue-buffers"] = queue_buffers;
    }

    if(queue_limit != nullptr)
    {
        children["queue-limit"] = queue_limit;
    }

    if(queue_limit_dscp != nullptr)
    {
        children["queue-limit-dscp"] = queue_limit_dscp;
    }

    if(random_detect != nullptr)
    {
        children["random-detect"] = random_detect;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    if(shape != nullptr)
    {
        children["shape"] = shape;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-type")
    {
        action_type = value;
        action_type.value_namespace = name_space;
        action_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "netflow-sampler")
    {
        netflow_sampler = value;
        netflow_sampler.value_namespace = name_space;
        netflow_sampler.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-type")
    {
        action_type.yfilter = yfilter;
    }
    if(value_path == "netflow-sampler")
    {
        netflow_sampler.yfilter = yfilter;
    }
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth" || name == "compression" || name == "estimate" || name == "forward" || name == "fair-queue" || name == "police-aggregate" || name == "police-policy-map" || name == "police-cir-percent" || name == "police-rate-unit" || name == "police-rate-percent" || name == "police-rate-pdp" || name == "police-target-bitrate" || name == "police-flow" || name == "police-catalyst" || name == "police-switch" || name == "priority" || name == "queue-buffers" || name == "queue-limit" || name == "queue-limit-dscp" || name == "random-detect" || name == "set" || name == "shape" || name == "action-type" || name == "netflow-sampler" || name == "service-policy" || name == "trust")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Bandwidth()
    :
    bits{YType::uint32, "bits"},
    percent{YType::uint8, "percent"}
    	,
    remaining(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining>())
{
    remaining->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::Bandwidth::~Bandwidth()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::Bandwidth::has_data() const
{
    return bits.is_set
	|| percent.is_set
	|| (remaining !=  nullptr && remaining->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bits.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| (remaining !=  nullptr && remaining->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bits.is_set || is_set(bits.yfilter)) leaf_name_data.push_back(bits.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remaining")
    {
        if(remaining == nullptr)
        {
            remaining = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining>();
        }
        return remaining;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(remaining != nullptr)
    {
        children["remaining"] = remaining;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bits")
    {
        bits = value;
        bits.value_namespace = name_space;
        bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bits")
    {
        bits.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remaining" || name == "bits" || name == "percent")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::Remaining()
    :
    rem_option{YType::enumeration, "rem-option"},
    percent{YType::uint8, "percent"},
    ratio{YType::uint16, "ratio"}
    	,
    account(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::Account>())
{
    account->parent = this;

    yang_name = "remaining"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::~Remaining()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::has_data() const
{
    return rem_option.is_set
	|| percent.is_set
	|| ratio.is_set
	|| (account !=  nullptr && account->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rem_option.yfilter)
	|| ydk::is_set(percent.yfilter)
	|| ydk::is_set(ratio.yfilter)
	|| (account !=  nullptr && account->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remaining";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rem_option.is_set || is_set(rem_option.yfilter)) leaf_name_data.push_back(rem_option.get_name_leafdata());
    if (percent.is_set || is_set(percent.yfilter)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (ratio.is_set || is_set(ratio.yfilter)) leaf_name_data.push_back(ratio.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "account")
    {
        if(account == nullptr)
        {
            account = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::Account>();
        }
        return account;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(account != nullptr)
    {
        children["account"] = account;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rem-option")
    {
        rem_option = value;
        rem_option.value_namespace = name_space;
        rem_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "percent")
    {
        percent = value;
        percent.value_namespace = name_space;
        percent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ratio")
    {
        ratio = value;
        ratio.value_namespace = name_space;
        ratio.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rem-option")
    {
        rem_option.yfilter = yfilter;
    }
    if(value_path == "percent")
    {
        percent.yfilter = yfilter;
    }
    if(value_path == "ratio")
    {
        ratio.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account" || name == "rem-option" || name == "percent" || name == "ratio")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::Account::Account()
    :
    user_defined{YType::int32, "user-defined"}
{

    yang_name = "account"; yang_parent_name = "remaining"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::Account::~Account()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::Account::has_data() const
{
    return user_defined.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::Account::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(user_defined.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::Account::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::Account::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (user_defined.is_set || is_set(user_defined.yfilter)) leaf_name_data.push_back(user_defined.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::Account::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::Account::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::Account::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "user-defined")
    {
        user_defined = value;
        user_defined.value_namespace = name_space;
        user_defined.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::Account::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "user-defined")
    {
        user_defined.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::Account::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "user-defined")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::Compression::Compression()
    :
    header(nullptr) // presence node
{

    yang_name = "compression"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::Compression::~Compression()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::Compression::has_data() const
{
    return (header !=  nullptr && header->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::Compression::has_operation() const
{
    return is_set(yfilter)
	|| (header !=  nullptr && header->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::Compression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "compression";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::Compression::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::Compression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "header")
    {
        if(header == nullptr)
        {
            header = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::Compression::Header>();
        }
        return header;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::Compression::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(header != nullptr)
    {
        children["header"] = header;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::Compression::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::Compression::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::Compression::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "header")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::Compression::Header::Header()
    :
    ip{YType::enumeration, "ip"}
{

    yang_name = "header"; yang_parent_name = "compression"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::Compression::Header::~Header()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::Compression::Header::has_data() const
{
    return ip.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::Compression::Header::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::Compression::Header::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "header";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::Compression::Header::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::Compression::Header::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::Compression::Header::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::Compression::Header::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::Compression::Header::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::Compression::Header::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::Estimate::Estimate()
    :
    bandwidth(nullptr) // presence node
{

    yang_name = "estimate"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::Estimate::~Estimate()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::Estimate::has_data() const
{
    return (bandwidth !=  nullptr && bandwidth->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::Estimate::has_operation() const
{
    return is_set(yfilter)
	|| (bandwidth !=  nullptr && bandwidth->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::Estimate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "estimate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::Estimate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::Estimate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth")
    {
        if(bandwidth == nullptr)
        {
            bandwidth = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth>();
        }
        return bandwidth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::Estimate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bandwidth != nullptr)
    {
        children["bandwidth"] = bandwidth;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::Estimate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::Estimate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::Estimate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bandwidth")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::Bandwidth()
    :
    drop_one_in{YType::uint32, "drop-one-in"}
    	,
    delay_one_in(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::DelayOneIn>())
{
    delay_one_in->parent = this;

    yang_name = "bandwidth"; yang_parent_name = "estimate"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::~Bandwidth()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::has_data() const
{
    return drop_one_in.is_set
	|| (delay_one_in !=  nullptr && delay_one_in->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop_one_in.yfilter)
	|| (delay_one_in !=  nullptr && delay_one_in->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_one_in.is_set || is_set(drop_one_in.yfilter)) leaf_name_data.push_back(drop_one_in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay-one-in")
    {
        if(delay_one_in == nullptr)
        {
            delay_one_in = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::DelayOneIn>();
        }
        return delay_one_in;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(delay_one_in != nullptr)
    {
        children["delay-one-in"] = delay_one_in;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop-one-in")
    {
        drop_one_in = value;
        drop_one_in.value_namespace = name_space;
        drop_one_in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop-one-in")
    {
        drop_one_in.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay-one-in" || name == "drop-one-in")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::DelayOneIn::DelayOneIn()
    :
    doi{YType::uint32, "doi"},
    milliseconds{YType::uint32, "milliseconds"}
{

    yang_name = "delay-one-in"; yang_parent_name = "bandwidth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::DelayOneIn::~DelayOneIn()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::DelayOneIn::has_data() const
{
    return doi.is_set
	|| milliseconds.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::DelayOneIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(doi.yfilter)
	|| ydk::is_set(milliseconds.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::DelayOneIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-one-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::DelayOneIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (doi.is_set || is_set(doi.yfilter)) leaf_name_data.push_back(doi.get_name_leafdata());
    if (milliseconds.is_set || is_set(milliseconds.yfilter)) leaf_name_data.push_back(milliseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::DelayOneIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::DelayOneIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::DelayOneIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "doi")
    {
        doi = value;
        doi.value_namespace = name_space;
        doi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "milliseconds")
    {
        milliseconds = value;
        milliseconds.value_namespace = name_space;
        milliseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::DelayOneIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "doi")
    {
        doi.yfilter = yfilter;
    }
    if(value_path == "milliseconds")
    {
        milliseconds.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::Estimate::Bandwidth::DelayOneIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "doi" || name == "milliseconds")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::Forward::Forward()
    :
    service_path{YType::uint32, "service-path"},
    service_index{YType::uint8, "service-index"}
{

    yang_name = "forward"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::Forward::~Forward()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::Forward::has_data() const
{
    return service_path.is_set
	|| service_index.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::Forward::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_path.yfilter)
	|| ydk::is_set(service_index.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::Forward::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::Forward::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_path.is_set || is_set(service_path.yfilter)) leaf_name_data.push_back(service_path.get_name_leafdata());
    if (service_index.is_set || is_set(service_index.yfilter)) leaf_name_data.push_back(service_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::Forward::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::Forward::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::Forward::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-path")
    {
        service_path = value;
        service_path.value_namespace = name_space;
        service_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-index")
    {
        service_index = value;
        service_index.value_namespace = name_space;
        service_index.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::Forward::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-path")
    {
        service_path.yfilter = yfilter;
    }
    if(value_path == "service-index")
    {
        service_index.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::Forward::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-path" || name == "service-index")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::FairQueue::FairQueue()
    :
    dynamic_queues{YType::uint32, "dynamic-queues"},
    queue_limit{YType::uint16, "queue-limit"}
{

    yang_name = "fair-queue"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::FairQueue::~FairQueue()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::FairQueue::has_data() const
{
    return dynamic_queues.is_set
	|| queue_limit.is_set;
}

bool Native::Policy::PolicyMap::Class::ActionList::FairQueue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic_queues.yfilter)
	|| ydk::is_set(queue_limit.yfilter);
}

std::string Native::Policy::PolicyMap::Class::ActionList::FairQueue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fair-queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::FairQueue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic_queues.is_set || is_set(dynamic_queues.yfilter)) leaf_name_data.push_back(dynamic_queues.get_name_leafdata());
    if (queue_limit.is_set || is_set(queue_limit.yfilter)) leaf_name_data.push_back(queue_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::FairQueue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::FairQueue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::FairQueue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic-queues")
    {
        dynamic_queues = value;
        dynamic_queues.value_namespace = name_space;
        dynamic_queues.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue-limit")
    {
        queue_limit = value;
        queue_limit.value_namespace = name_space;
        queue_limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Policy::PolicyMap::Class::ActionList::FairQueue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic-queues")
    {
        dynamic_queues.yfilter = yfilter;
    }
    if(value_path == "queue-limit")
    {
        queue_limit.yfilter = yfilter;
    }
}

bool Native::Policy::PolicyMap::Class::ActionList::FairQueue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic-queues" || name == "queue-limit")
        return true;
    return false;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceAggregate::PoliceAggregate()
    :
    police(std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceAggregate::Police>())
{
    police->parent = this;

    yang_name = "police-aggregate"; yang_parent_name = "action-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Policy::PolicyMap::Class::ActionList::PoliceAggregate::~PoliceAggregate()
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceAggregate::has_data() const
{
    return (police !=  nullptr && police->has_data());
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceAggregate::has_operation() const
{
    return is_set(yfilter)
	|| (police !=  nullptr && police->has_operation());
}

std::string Native::Policy::PolicyMap::Class::ActionList::PoliceAggregate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police-aggregate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Policy::PolicyMap::Class::ActionList::PoliceAggregate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Policy::PolicyMap::Class::ActionList::PoliceAggregate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<Native::Policy::PolicyMap::Class::ActionList::PoliceAggregate::Police>();
        }
        return police;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Policy::PolicyMap::Class::ActionList::PoliceAggregate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(police != nullptr)
    {
        children["police"] = police;
    }

    return children;
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceAggregate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Policy::PolicyMap::Class::ActionList::PoliceAggregate::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Policy::PolicyMap::Class::ActionList::PoliceAggregate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "police")
        return true;
    return false;
}

const Enum::YLeaf Native::Policy::ClassMap::Type::access_control {0, "access-control"};
const Enum::YLeaf Native::Policy::ClassMap::Type::appnav {1, "appnav"};
const Enum::YLeaf Native::Policy::ClassMap::Type::control {2, "control"};
const Enum::YLeaf Native::Policy::ClassMap::Type::inspect {3, "inspect"};
const Enum::YLeaf Native::Policy::ClassMap::Type::multicast_flows {4, "multicast-flows"};
const Enum::YLeaf Native::Policy::ClassMap::Type::stack {5, "stack"};
const Enum::YLeaf Native::Policy::ClassMap::Type::traffic {6, "traffic"};

const Enum::YLeaf Native::Policy::ClassMap::Protocol::aol {0, "aol"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::edonkey {1, "edonkey"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::fasttrack {2, "fasttrack"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::gnutella {3, "gnutella"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::http {4, "http"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::imap {5, "imap"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::kazaa2 {6, "kazaa2"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::msnmsgr {7, "msnmsgr"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::pop3 {8, "pop3"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::smtp {9, "smtp"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::sunrpc {10, "sunrpc"};
const Enum::YLeaf Native::Policy::ClassMap::Protocol::ymsgr {11, "ymsgr"};

const Enum::YLeaf Native::Policy::ClassMap::Prematch::match_all {0, "match-all"};
const Enum::YLeaf Native::Policy::ClassMap::Prematch::match_any {1, "match-any"};
const Enum::YLeaf Native::Policy::ClassMap::Prematch::match_none {2, "match-none"};

const Enum::YLeaf Native::Policy::ClassMap::Match::ClientType::data {0, "data"};
const Enum::YLeaf Native::Policy::ClassMap::Match::ClientType::switch_ {1, "switch"};
const Enum::YLeaf Native::Policy::ClassMap::Match::ClientType::video {2, "video"};
const Enum::YLeaf Native::Policy::ClassMap::Match::ClientType::voice {3, "voice"};

const Enum::YLeaf Native::Policy::ClassMap::Match::PortType::dot11_port {0, "dot11-port"};
const Enum::YLeaf Native::Policy::ClassMap::Match::PortType::l2_port {1, "l2-port"};
const Enum::YLeaf Native::Policy::ClassMap::Match::PortType::l3_port {2, "l3-port"};

const Enum::YLeaf Native::Policy::ClassMap::Match::SessionType::wired {0, "wired"};
const Enum::YLeaf Native::Policy::ClassMap::Match::SessionType::wireless {1, "wireless"};

const Enum::YLeaf Native::Policy::ClassMap::Match::Application::Attribute::MediaType::audio {0, "audio"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Application::Attribute::MediaType::audio_video {1, "audio-video"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Application::Attribute::MediaType::control {2, "control"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Application::Attribute::MediaType::data {3, "data"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Application::Attribute::MediaType::video {4, "video"};

const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Application::Attribute::MediaType::audio {0, "audio"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Application::Attribute::MediaType::audio_video {1, "audio-video"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Application::Attribute::MediaType::control {2, "control"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Application::Attribute::MediaType::data {3, "data"};
const Enum::YLeaf Native::Policy::ClassMap::Match::Not::Application::Attribute::MediaType::video {4, "video"};

const Enum::YLeaf Native::Policy::ClassMap::NoMatch::ClientType::data {0, "data"};
const Enum::YLeaf Native::Policy::ClassMap::NoMatch::ClientType::switch_ {1, "switch"};
const Enum::YLeaf Native::Policy::ClassMap::NoMatch::ClientType::video {2, "video"};
const Enum::YLeaf Native::Policy::ClassMap::NoMatch::ClientType::voice {3, "voice"};

const Enum::YLeaf Native::Policy::ClassMap::NoMatch::PortType::dot11_port {0, "dot11-port"};
const Enum::YLeaf Native::Policy::ClassMap::NoMatch::PortType::l2_port {1, "l2-port"};
const Enum::YLeaf Native::Policy::ClassMap::NoMatch::PortType::l3_port {2, "l3-port"};

const Enum::YLeaf Native::Policy::ClassMap::NoMatch::SessionType::wired {0, "wired"};
const Enum::YLeaf Native::Policy::ClassMap::NoMatch::SessionType::wireless {1, "wireless"};

const Enum::YLeaf Native::Policy::PolicyMap::Type::access_control {0, "access-control"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::appnav {1, "appnav"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::inspect {2, "inspect"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::control {3, "control"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::packet_service {4, "packet-service"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::performance_monitor {5, "performance-monitor"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::service {6, "service"};
const Enum::YLeaf Native::Policy::PolicyMap::Type::service_chain {7, "service-chain"};

const Enum::YLeaf Native::Policy::PolicyMap::Protocol::http {0, "http"};
const Enum::YLeaf Native::Policy::PolicyMap::Protocol::im {1, "im"};
const Enum::YLeaf Native::Policy::PolicyMap::Protocol::imap {2, "imap"};
const Enum::YLeaf Native::Policy::PolicyMap::Protocol::p2p {3, "p2p"};
const Enum::YLeaf Native::Policy::PolicyMap::Protocol::pop3 {4, "pop3"};
const Enum::YLeaf Native::Policy::PolicyMap::Protocol::smtp {5, "smtp"};
const Enum::YLeaf Native::Policy::PolicyMap::Protocol::sunrpc {6, "sunrpc"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::aaa_available {0, "aaa-available"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::absolute_timeout {1, "absolute-timeout"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::agent_found {2, "agent-found"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::authentication_failure {3, "authentication-failure"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::authentication_success {4, "authentication-success"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::authorization_failure {5, "authorization-failure"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::authorization_success {6, "authorization-success"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::identity_update {7, "identity-update"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::inactivity_timeout {8, "inactivity-timeout"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::remote_authentication_failure {9, "remote-authentication-failure"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::remote_authentication_success {10, "remote-authentication-success"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::session_disconnected {11, "session-disconnected"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::session_started {12, "session-started"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::tag_added {13, "tag-added"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::tag_removed {14, "tag-removed"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::template_activated {15, "template-activated"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::template_activation_failed {16, "template-activation-failed"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::template_deactivated {17, "template-deactivated"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::template_deactivation_failed {18, "template-deactivation-failed"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::timer_expiry {19, "timer-expiry"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::EventType::violation {20, "violation"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::MatchType::match_all {0, "match-all"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::MatchType::match_first {1, "match-first"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::Class_::always {0, "always"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ExecutionType::do_all {0, "do-all"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ExecutionType::do_until_failure {1, "do-until-failure"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ExecutionType::do_until_success {2, "do-until-success"};

const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::Method::dot1x {0, "dot1x"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::Method::mab {1, "mab"};
const Enum::YLeaf Native::Policy::PolicyMap::Event::ClassNumber::ActionNumber::Authenticate::Using::Method::webauth {2, "webauth"};

const Enum::YLeaf Native::Policy::PolicyMap::Class::Type::inspect {0, "inspect"};

const Enum::YLeaf Native::Policy::PolicyMap::Class::AppnavPolicy::MonitorLoad::MS_port_mapper {0, "MS-port-mapper"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::AppnavPolicy::MonitorLoad::cifs {1, "cifs"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::AppnavPolicy::MonitorLoad::http {2, "http"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::AppnavPolicy::MonitorLoad::ica {3, "ica"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::AppnavPolicy::MonitorLoad::mapi {4, "mapi"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::AppnavPolicy::MonitorLoad::nfs {5, "nfs"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::AppnavPolicy::MonitorLoad::ssl {6, "ssl"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::AppnavPolicy::MonitorLoad::video {7, "video"};

const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::Action::cxsc {0, "cxsc"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::Action::drop {1, "drop"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::Action::inspect {2, "inspect"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::Action::pass {3, "pass"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::Action::service_policy {4, "service-policy"};

const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::ParameterMap::global {0, "global"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::ParameterMap::gtp {1, "gtp"};

const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::Dpi::Type::gtpv0 {0, "gtpv0"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::Dpi::Type::gtpv1 {1, "gtpv1"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::Dpi::Type::imap {2, "imap"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::Dpi::Type::pop3 {3, "pop3"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::Dpi::Type::smtp {4, "smtp"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::Policy_::Dpi::Type::sunrpc {5, "sunrpc"};

const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::celb {0, "celb"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::cn {1, "cn"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::default_ {2, "default"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::dvi4 {3, "dvi4"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::dvi4_2 {4, "dvi4-2"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::dvi4_3 {5, "dvi4-3"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::dvi4_4 {6, "dvi4-4"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::g722 {7, "g722"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::g723 {8, "g723"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::g728 {9, "g728"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::g729 {10, "g729"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::gsm {11, "gsm"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::h261 {12, "h261"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::h263 {13, "h263"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::jpeg {14, "jpeg"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::l16 {15, "l16"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::l16_2 {16, "l16-2"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::lpc {17, "lpc"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::mp2t {18, "mp2t"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::mpa {19, "mpa"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::mpv {20, "mpv"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::nv {21, "nv"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::pcma {22, "pcma"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::pcmu {23, "pcmu"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::Monitor::Metric::Rtp::ClockRate::Number::qcelp {24, "qcelp"};

const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::React::Mode::media_stop {0, "media-stop"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::React::Mode::mrv {1, "mrv"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::React::Mode::rtp_jitter_average {2, "rtp-jitter-average"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::React::Mode::transport_packets_lost_rate {3, "transport-packets-lost-rate"};

const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Severity::alert {0, "alert"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Severity::critical {1, "critical"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Severity::emergency {2, "emergency"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Severity::error {3, "error"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::PmPolicy::React::Alarm::Severity::info {4, "info"};

const Enum::YLeaf Native::Policy::PolicyMap::Class::ActionList::Trust::cos {0, "cos"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::ActionList::Trust::dscp {1, "dscp"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::ActionList::Trust::ip_precedence {2, "ip-precedence"};

const Enum::YLeaf Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::RemOption::percent {0, "percent"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::ActionList::Bandwidth::Remaining::RemOption::ratio {1, "ratio"};

const Enum::YLeaf Native::Policy::PolicyMap::Class::ActionList::Compression::Header::Ip::rtp {0, "rtp"};
const Enum::YLeaf Native::Policy::PolicyMap::Class::ActionList::Compression::Header::Ip::tcp {1, "tcp"};


}
}

