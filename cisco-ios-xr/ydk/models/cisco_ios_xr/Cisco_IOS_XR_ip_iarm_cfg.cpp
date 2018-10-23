
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_iarm_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_iarm_cfg {

IpArm::IpArm()
    :
    ipv4(std::make_shared<IpArm::Ipv4>())
    , ipv6(std::make_shared<IpArm::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "ip-arm"; yang_parent_name = "Cisco-IOS-XR-ip-iarm-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

IpArm::~IpArm()
{
}

bool IpArm::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool IpArm::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string IpArm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iarm-cfg:ip-arm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpArm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpArm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<IpArm::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<IpArm::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpArm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    return _children;
}

void IpArm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpArm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> IpArm::clone_ptr() const
{
    return std::make_shared<IpArm>();
}

std::string IpArm::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string IpArm::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function IpArm::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> IpArm::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool IpArm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

IpArm::Ipv4::Ipv4()
    :
    conflict_policy_table(std::make_shared<IpArm::Ipv4::ConflictPolicyTable>())
    , multicast_host(std::make_shared<IpArm::Ipv4::MulticastHost>())
{
    conflict_policy_table->parent = this;
    multicast_host->parent = this;

    yang_name = "ipv4"; yang_parent_name = "ip-arm"; is_top_level_class = false; has_list_ancestor = false; 
}

IpArm::Ipv4::~Ipv4()
{
}

bool IpArm::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return (conflict_policy_table !=  nullptr && conflict_policy_table->has_data())
	|| (multicast_host !=  nullptr && multicast_host->has_data());
}

bool IpArm::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (conflict_policy_table !=  nullptr && conflict_policy_table->has_operation())
	|| (multicast_host !=  nullptr && multicast_host->has_operation());
}

std::string IpArm::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iarm-cfg:ip-arm/" << get_segment_path();
    return path_buffer.str();
}

std::string IpArm::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpArm::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpArm::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conflict-policy-table")
    {
        if(conflict_policy_table == nullptr)
        {
            conflict_policy_table = std::make_shared<IpArm::Ipv4::ConflictPolicyTable>();
        }
        return conflict_policy_table;
    }

    if(child_yang_name == "multicast-host")
    {
        if(multicast_host == nullptr)
        {
            multicast_host = std::make_shared<IpArm::Ipv4::MulticastHost>();
        }
        return multicast_host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpArm::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(conflict_policy_table != nullptr)
    {
        _children["conflict-policy-table"] = conflict_policy_table;
    }

    if(multicast_host != nullptr)
    {
        _children["multicast-host"] = multicast_host;
    }

    return _children;
}

void IpArm::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpArm::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IpArm::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conflict-policy-table" || name == "multicast-host")
        return true;
    return false;
}

IpArm::Ipv4::ConflictPolicyTable::ConflictPolicyTable()
    :
    conflict_policy{YType::enumeration, "conflict-policy"}
{

    yang_name = "conflict-policy-table"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

IpArm::Ipv4::ConflictPolicyTable::~ConflictPolicyTable()
{
}

bool IpArm::Ipv4::ConflictPolicyTable::has_data() const
{
    if (is_presence_container) return true;
    return conflict_policy.is_set;
}

bool IpArm::Ipv4::ConflictPolicyTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(conflict_policy.yfilter);
}

std::string IpArm::Ipv4::ConflictPolicyTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iarm-cfg:ip-arm/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string IpArm::Ipv4::ConflictPolicyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conflict-policy-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpArm::Ipv4::ConflictPolicyTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conflict_policy.is_set || is_set(conflict_policy.yfilter)) leaf_name_data.push_back(conflict_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpArm::Ipv4::ConflictPolicyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpArm::Ipv4::ConflictPolicyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IpArm::Ipv4::ConflictPolicyTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "conflict-policy")
    {
        conflict_policy = value;
        conflict_policy.value_namespace = name_space;
        conflict_policy.value_namespace_prefix = name_space_prefix;
    }
}

void IpArm::Ipv4::ConflictPolicyTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "conflict-policy")
    {
        conflict_policy.yfilter = yfilter;
    }
}

bool IpArm::Ipv4::ConflictPolicyTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conflict-policy")
        return true;
    return false;
}

IpArm::Ipv4::MulticastHost::MulticastHost()
    :
    multicast_host_interface{YType::str, "multicast-host-interface"}
{

    yang_name = "multicast-host"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

IpArm::Ipv4::MulticastHost::~MulticastHost()
{
}

bool IpArm::Ipv4::MulticastHost::has_data() const
{
    if (is_presence_container) return true;
    return multicast_host_interface.is_set;
}

bool IpArm::Ipv4::MulticastHost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast_host_interface.yfilter);
}

std::string IpArm::Ipv4::MulticastHost::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iarm-cfg:ip-arm/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string IpArm::Ipv4::MulticastHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpArm::Ipv4::MulticastHost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_host_interface.is_set || is_set(multicast_host_interface.yfilter)) leaf_name_data.push_back(multicast_host_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpArm::Ipv4::MulticastHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpArm::Ipv4::MulticastHost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IpArm::Ipv4::MulticastHost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast-host-interface")
    {
        multicast_host_interface = value;
        multicast_host_interface.value_namespace = name_space;
        multicast_host_interface.value_namespace_prefix = name_space_prefix;
    }
}

void IpArm::Ipv4::MulticastHost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast-host-interface")
    {
        multicast_host_interface.yfilter = yfilter;
    }
}

bool IpArm::Ipv4::MulticastHost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-host-interface")
        return true;
    return false;
}

IpArm::Ipv6::Ipv6()
    :
    conflict_policy_table(std::make_shared<IpArm::Ipv6::ConflictPolicyTable>())
    , multicast_host(std::make_shared<IpArm::Ipv6::MulticastHost>())
{
    conflict_policy_table->parent = this;
    multicast_host->parent = this;

    yang_name = "ipv6"; yang_parent_name = "ip-arm"; is_top_level_class = false; has_list_ancestor = false; 
}

IpArm::Ipv6::~Ipv6()
{
}

bool IpArm::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return (conflict_policy_table !=  nullptr && conflict_policy_table->has_data())
	|| (multicast_host !=  nullptr && multicast_host->has_data());
}

bool IpArm::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (conflict_policy_table !=  nullptr && conflict_policy_table->has_operation())
	|| (multicast_host !=  nullptr && multicast_host->has_operation());
}

std::string IpArm::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iarm-cfg:ip-arm/" << get_segment_path();
    return path_buffer.str();
}

std::string IpArm::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpArm::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpArm::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "conflict-policy-table")
    {
        if(conflict_policy_table == nullptr)
        {
            conflict_policy_table = std::make_shared<IpArm::Ipv6::ConflictPolicyTable>();
        }
        return conflict_policy_table;
    }

    if(child_yang_name == "multicast-host")
    {
        if(multicast_host == nullptr)
        {
            multicast_host = std::make_shared<IpArm::Ipv6::MulticastHost>();
        }
        return multicast_host;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpArm::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(conflict_policy_table != nullptr)
    {
        _children["conflict-policy-table"] = conflict_policy_table;
    }

    if(multicast_host != nullptr)
    {
        _children["multicast-host"] = multicast_host;
    }

    return _children;
}

void IpArm::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IpArm::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IpArm::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conflict-policy-table" || name == "multicast-host")
        return true;
    return false;
}

IpArm::Ipv6::ConflictPolicyTable::ConflictPolicyTable()
    :
    conflict_policy{YType::enumeration, "conflict-policy"}
{

    yang_name = "conflict-policy-table"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

IpArm::Ipv6::ConflictPolicyTable::~ConflictPolicyTable()
{
}

bool IpArm::Ipv6::ConflictPolicyTable::has_data() const
{
    if (is_presence_container) return true;
    return conflict_policy.is_set;
}

bool IpArm::Ipv6::ConflictPolicyTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(conflict_policy.yfilter);
}

std::string IpArm::Ipv6::ConflictPolicyTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iarm-cfg:ip-arm/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string IpArm::Ipv6::ConflictPolicyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conflict-policy-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpArm::Ipv6::ConflictPolicyTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conflict_policy.is_set || is_set(conflict_policy.yfilter)) leaf_name_data.push_back(conflict_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpArm::Ipv6::ConflictPolicyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpArm::Ipv6::ConflictPolicyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IpArm::Ipv6::ConflictPolicyTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "conflict-policy")
    {
        conflict_policy = value;
        conflict_policy.value_namespace = name_space;
        conflict_policy.value_namespace_prefix = name_space_prefix;
    }
}

void IpArm::Ipv6::ConflictPolicyTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "conflict-policy")
    {
        conflict_policy.yfilter = yfilter;
    }
}

bool IpArm::Ipv6::ConflictPolicyTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "conflict-policy")
        return true;
    return false;
}

IpArm::Ipv6::MulticastHost::MulticastHost()
    :
    multicast_host_interface{YType::str, "multicast-host-interface"}
{

    yang_name = "multicast-host"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

IpArm::Ipv6::MulticastHost::~MulticastHost()
{
}

bool IpArm::Ipv6::MulticastHost::has_data() const
{
    if (is_presence_container) return true;
    return multicast_host_interface.is_set;
}

bool IpArm::Ipv6::MulticastHost::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(multicast_host_interface.yfilter);
}

std::string IpArm::Ipv6::MulticastHost::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-iarm-cfg:ip-arm/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string IpArm::Ipv6::MulticastHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IpArm::Ipv6::MulticastHost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (multicast_host_interface.is_set || is_set(multicast_host_interface.yfilter)) leaf_name_data.push_back(multicast_host_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IpArm::Ipv6::MulticastHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IpArm::Ipv6::MulticastHost::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IpArm::Ipv6::MulticastHost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "multicast-host-interface")
    {
        multicast_host_interface = value;
        multicast_host_interface.value_namespace = name_space;
        multicast_host_interface.value_namespace_prefix = name_space_prefix;
    }
}

void IpArm::Ipv6::MulticastHost::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "multicast-host-interface")
    {
        multicast_host_interface.yfilter = yfilter;
    }
}

bool IpArm::Ipv6::MulticastHost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-host-interface")
        return true;
    return false;
}

const Enum::YLeaf IpArmConflictPolicy::lowest_rack_slot {0, "lowest-rack-slot"};
const Enum::YLeaf IpArmConflictPolicy::static_ {1, "static"};
const Enum::YLeaf IpArmConflictPolicy::longest_prefix {2, "longest-prefix"};
const Enum::YLeaf IpArmConflictPolicy::highest_ip {4, "highest-ip"};


}
}

