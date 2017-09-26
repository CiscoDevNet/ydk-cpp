
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_76.hpp"
#include "Cisco_IOS_XE_native_77.hpp"
#include "Cisco_IOS_XE_native_78.hpp"
#include "Cisco_IOS_XE_native_79.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::Vlan::KeepaliveSettings::Keepalive::Keepalive()
    :
    period{YType::uint16, "period"},
    retries{YType::uint8, "retries"}
{

    yang_name = "keepalive"; yang_parent_name = "keepalive-settings"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::KeepaliveSettings::Keepalive::~Keepalive()
{
}

bool Native::Interface::Vlan::KeepaliveSettings::Keepalive::has_data() const
{
    return period.is_set
	|| retries.is_set;
}

bool Native::Interface::Vlan::KeepaliveSettings::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(retries.yfilter);
}

std::string Native::Interface::Vlan::KeepaliveSettings::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::KeepaliveSettings::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::KeepaliveSettings::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::KeepaliveSettings::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::KeepaliveSettings::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::KeepaliveSettings::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::KeepaliveSettings::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period" || name == "retries")
        return true;
    return false;
}

Native::Interface::Vlan::KeepaliveSettings_::KeepaliveSettings_()
    :
    keepalive(nullptr) // presence node
{

    yang_name = "keepalive-settings"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::KeepaliveSettings_::~KeepaliveSettings_()
{
}

bool Native::Interface::Vlan::KeepaliveSettings_::has_data() const
{
    return (keepalive !=  nullptr && keepalive->has_data());
}

bool Native::Interface::Vlan::KeepaliveSettings_::has_operation() const
{
    return is_set(yfilter)
	|| (keepalive !=  nullptr && keepalive->has_operation());
}

std::string Native::Interface::Vlan::KeepaliveSettings_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:keepalive-settings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::KeepaliveSettings_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::KeepaliveSettings_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keepalive")
    {
        if(keepalive == nullptr)
        {
            keepalive = std::make_shared<Native::Interface::Vlan::KeepaliveSettings_::Keepalive>();
        }
        return keepalive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::KeepaliveSettings_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(keepalive != nullptr)
    {
        children["keepalive"] = keepalive;
    }

    return children;
}

void Native::Interface::Vlan::KeepaliveSettings_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::KeepaliveSettings_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::KeepaliveSettings_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keepalive")
        return true;
    return false;
}

Native::Interface::Vlan::KeepaliveSettings_::Keepalive::Keepalive()
    :
    period{YType::uint16, "period"},
    retries{YType::uint8, "retries"}
{

    yang_name = "keepalive"; yang_parent_name = "keepalive-settings"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::KeepaliveSettings_::Keepalive::~Keepalive()
{
}

bool Native::Interface::Vlan::KeepaliveSettings_::Keepalive::has_data() const
{
    return period.is_set
	|| retries.is_set;
}

bool Native::Interface::Vlan::KeepaliveSettings_::Keepalive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(period.yfilter)
	|| ydk::is_set(retries.yfilter);
}

std::string Native::Interface::Vlan::KeepaliveSettings_::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::KeepaliveSettings_::Keepalive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (period.is_set || is_set(period.yfilter)) leaf_name_data.push_back(period.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::KeepaliveSettings_::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::KeepaliveSettings_::Keepalive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::KeepaliveSettings_::Keepalive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "period")
    {
        period = value;
        period.value_namespace = name_space;
        period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::KeepaliveSettings_::Keepalive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "period")
    {
        period.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::KeepaliveSettings_::Keepalive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "period" || name == "retries")
        return true;
    return false;
}

Native::Interface::Vlan::Lisp::Lisp()
    :
    extended_subnet_mode{YType::empty, "extended-subnet-mode"}
    	,
    mobility(std::make_shared<Native::Interface::Vlan::Lisp::Mobility>())
{
    mobility->parent = this;

    yang_name = "lisp"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Lisp::~Lisp()
{
}

bool Native::Interface::Vlan::Lisp::has_data() const
{
    return extended_subnet_mode.is_set
	|| (mobility !=  nullptr && mobility->has_data());
}

bool Native::Interface::Vlan::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extended_subnet_mode.yfilter)
	|| (mobility !=  nullptr && mobility->has_operation());
}

std::string Native::Interface::Vlan::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lisp:lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_subnet_mode.is_set || is_set(extended_subnet_mode.yfilter)) leaf_name_data.push_back(extended_subnet_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mobility")
    {
        if(mobility == nullptr)
        {
            mobility = std::make_shared<Native::Interface::Vlan::Lisp::Mobility>();
        }
        return mobility;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mobility != nullptr)
    {
        children["mobility"] = mobility;
    }

    return children;
}

void Native::Interface::Vlan::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extended-subnet-mode")
    {
        extended_subnet_mode = value;
        extended_subnet_mode.value_namespace = name_space;
        extended_subnet_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extended-subnet-mode")
    {
        extended_subnet_mode.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mobility" || name == "extended-subnet-mode")
        return true;
    return false;
}

Native::Interface::Vlan::Lisp::Mobility::Mobility()
    :
    discover(std::make_shared<Native::Interface::Vlan::Lisp::Mobility::Discover>())
	,dynamic_eid(std::make_shared<Native::Interface::Vlan::Lisp::Mobility::DynamicEid>())
	,liveness(std::make_shared<Native::Interface::Vlan::Lisp::Mobility::Liveness>())
{
    discover->parent = this;
    dynamic_eid->parent = this;
    liveness->parent = this;

    yang_name = "mobility"; yang_parent_name = "lisp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Lisp::Mobility::~Mobility()
{
}

bool Native::Interface::Vlan::Lisp::Mobility::has_data() const
{
    return (discover !=  nullptr && discover->has_data())
	|| (dynamic_eid !=  nullptr && dynamic_eid->has_data())
	|| (liveness !=  nullptr && liveness->has_data());
}

bool Native::Interface::Vlan::Lisp::Mobility::has_operation() const
{
    return is_set(yfilter)
	|| (discover !=  nullptr && discover->has_operation())
	|| (dynamic_eid !=  nullptr && dynamic_eid->has_operation())
	|| (liveness !=  nullptr && liveness->has_operation());
}

std::string Native::Interface::Vlan::Lisp::Mobility::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobility";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Lisp::Mobility::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Lisp::Mobility::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discover")
    {
        if(discover == nullptr)
        {
            discover = std::make_shared<Native::Interface::Vlan::Lisp::Mobility::Discover>();
        }
        return discover;
    }

    if(child_yang_name == "dynamic-eid")
    {
        if(dynamic_eid == nullptr)
        {
            dynamic_eid = std::make_shared<Native::Interface::Vlan::Lisp::Mobility::DynamicEid>();
        }
        return dynamic_eid;
    }

    if(child_yang_name == "liveness")
    {
        if(liveness == nullptr)
        {
            liveness = std::make_shared<Native::Interface::Vlan::Lisp::Mobility::Liveness>();
        }
        return liveness;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Lisp::Mobility::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(discover != nullptr)
    {
        children["discover"] = discover;
    }

    if(dynamic_eid != nullptr)
    {
        children["dynamic-eid"] = dynamic_eid;
    }

    if(liveness != nullptr)
    {
        children["liveness"] = liveness;
    }

    return children;
}

void Native::Interface::Vlan::Lisp::Mobility::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::Lisp::Mobility::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::Lisp::Mobility::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discover" || name == "dynamic-eid" || name == "liveness")
        return true;
    return false;
}

Native::Interface::Vlan::Lisp::Mobility::Discover::Discover()
    :
    arp{YType::boolean, "arp"}
{

    yang_name = "discover"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Lisp::Mobility::Discover::~Discover()
{
}

bool Native::Interface::Vlan::Lisp::Mobility::Discover::has_data() const
{
    return arp.is_set;
}

bool Native::Interface::Vlan::Lisp::Mobility::Discover::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arp.yfilter);
}

std::string Native::Interface::Vlan::Lisp::Mobility::Discover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discover";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Lisp::Mobility::Discover::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arp.is_set || is_set(arp.yfilter)) leaf_name_data.push_back(arp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Lisp::Mobility::Discover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Lisp::Mobility::Discover::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Lisp::Mobility::Discover::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arp")
    {
        arp = value;
        arp.value_namespace = name_space;
        arp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Lisp::Mobility::Discover::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arp")
    {
        arp.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Lisp::Mobility::Discover::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arp")
        return true;
    return false;
}

Native::Interface::Vlan::Lisp::Mobility::DynamicEid::DynamicEid()
    :
    dynamic_eid_name{YType::str, "dynamic-eid-name"},
    nbr_proxy_reply{YType::empty, "nbr-proxy-reply"},
    requests{YType::uint8, "requests"}
{

    yang_name = "dynamic-eid"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Lisp::Mobility::DynamicEid::~DynamicEid()
{
}

bool Native::Interface::Vlan::Lisp::Mobility::DynamicEid::has_data() const
{
    return dynamic_eid_name.is_set
	|| nbr_proxy_reply.is_set
	|| requests.is_set;
}

bool Native::Interface::Vlan::Lisp::Mobility::DynamicEid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dynamic_eid_name.yfilter)
	|| ydk::is_set(nbr_proxy_reply.yfilter)
	|| ydk::is_set(requests.yfilter);
}

std::string Native::Interface::Vlan::Lisp::Mobility::DynamicEid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-eid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Lisp::Mobility::DynamicEid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic_eid_name.is_set || is_set(dynamic_eid_name.yfilter)) leaf_name_data.push_back(dynamic_eid_name.get_name_leafdata());
    if (nbr_proxy_reply.is_set || is_set(nbr_proxy_reply.yfilter)) leaf_name_data.push_back(nbr_proxy_reply.get_name_leafdata());
    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Lisp::Mobility::DynamicEid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Lisp::Mobility::DynamicEid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Lisp::Mobility::DynamicEid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dynamic-eid-name")
    {
        dynamic_eid_name = value;
        dynamic_eid_name.value_namespace = name_space;
        dynamic_eid_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-proxy-reply")
    {
        nbr_proxy_reply = value;
        nbr_proxy_reply.value_namespace = name_space;
        nbr_proxy_reply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requests")
    {
        requests = value;
        requests.value_namespace = name_space;
        requests.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Lisp::Mobility::DynamicEid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dynamic-eid-name")
    {
        dynamic_eid_name.yfilter = yfilter;
    }
    if(value_path == "nbr-proxy-reply")
    {
        nbr_proxy_reply.yfilter = yfilter;
    }
    if(value_path == "requests")
    {
        requests.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Lisp::Mobility::DynamicEid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic-eid-name" || name == "nbr-proxy-reply" || name == "requests")
        return true;
    return false;
}

Native::Interface::Vlan::Lisp::Mobility::Liveness::Liveness()
    :
    test{YType::boolean, "test"},
    ttl{YType::uint8, "ttl"}
{

    yang_name = "liveness"; yang_parent_name = "mobility"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Lisp::Mobility::Liveness::~Liveness()
{
}

bool Native::Interface::Vlan::Lisp::Mobility::Liveness::has_data() const
{
    return test.is_set
	|| ttl.is_set;
}

bool Native::Interface::Vlan::Lisp::Mobility::Liveness::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(test.yfilter)
	|| ydk::is_set(ttl.yfilter);
}

std::string Native::Interface::Vlan::Lisp::Mobility::Liveness::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "liveness";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Lisp::Mobility::Liveness::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test.is_set || is_set(test.yfilter)) leaf_name_data.push_back(test.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Lisp::Mobility::Liveness::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Lisp::Mobility::Liveness::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Lisp::Mobility::Liveness::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "test")
    {
        test = value;
        test.value_namespace = name_space;
        test.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Lisp::Mobility::Liveness::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "test")
    {
        test.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Lisp::Mobility::Liveness::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "test" || name == "ttl")
        return true;
    return false;
}

Native::Interface::Vlan::PrivateVlan::PrivateVlan()
    :
    mapping{YType::str, "mapping"}
{

    yang_name = "private-vlan"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::PrivateVlan::~PrivateVlan()
{
}

bool Native::Interface::Vlan::PrivateVlan::has_data() const
{
    return mapping.is_set;
}

bool Native::Interface::Vlan::PrivateVlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mapping.yfilter);
}

std::string Native::Interface::Vlan::PrivateVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:private-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::PrivateVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mapping.is_set || is_set(mapping.yfilter)) leaf_name_data.push_back(mapping.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::PrivateVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::PrivateVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::PrivateVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mapping")
    {
        mapping = value;
        mapping.value_namespace = name_space;
        mapping.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::PrivateVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mapping")
    {
        mapping.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::PrivateVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mapping")
        return true;
    return false;
}

Native::Interface::Vlan::ServicePolicy::ServicePolicy()
    :
    history{YType::empty, "history"},
    input{YType::str, "input"},
    output{YType::str, "output"}
    	,
    type(std::make_shared<Native::Interface::Vlan::ServicePolicy::Type>())
{
    type->parent = this;

    yang_name = "service-policy"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::Vlan::ServicePolicy::has_data() const
{
    return history.is_set
	|| input.is_set
	|| output.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::Interface::Vlan::ServicePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(history.yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Interface::Vlan::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:service-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::ServicePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history.is_set || is_set(history.yfilter)) leaf_name_data.push_back(history.get_name_leafdata());
    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Interface::Vlan::ServicePolicy::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Interface::Vlan::ServicePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "history")
    {
        history = value;
        history.value_namespace = name_space;
        history.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::ServicePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "history")
    {
        history.yfilter = yfilter;
    }
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::ServicePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "history" || name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::Vlan::ServicePolicy::Type::Type()
    :
    control(std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::Control>())
	,performance_monitor(std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor>())
	,service_chain(std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::ServiceChain>())
{
    control->parent = this;
    performance_monitor->parent = this;
    service_chain->parent = this;

    yang_name = "type"; yang_parent_name = "service-policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::ServicePolicy::Type::~Type()
{
}

bool Native::Interface::Vlan::ServicePolicy::Type::has_data() const
{
    return (control !=  nullptr && control->has_data())
	|| (performance_monitor !=  nullptr && performance_monitor->has_data())
	|| (service_chain !=  nullptr && service_chain->has_data());
}

bool Native::Interface::Vlan::ServicePolicy::Type::has_operation() const
{
    return is_set(yfilter)
	|| (control !=  nullptr && control->has_operation())
	|| (performance_monitor !=  nullptr && performance_monitor->has_operation())
	|| (service_chain !=  nullptr && service_chain->has_operation());
}

std::string Native::Interface::Vlan::ServicePolicy::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::ServicePolicy::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::ServicePolicy::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "control")
    {
        if(control == nullptr)
        {
            control = std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::Control>();
        }
        return control;
    }

    if(child_yang_name == "performance-monitor")
    {
        if(performance_monitor == nullptr)
        {
            performance_monitor = std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor>();
        }
        return performance_monitor;
    }

    if(child_yang_name == "service-chain")
    {
        if(service_chain == nullptr)
        {
            service_chain = std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::ServiceChain>();
        }
        return service_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::ServicePolicy::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(control != nullptr)
    {
        children["control"] = control;
    }

    if(performance_monitor != nullptr)
    {
        children["performance-monitor"] = performance_monitor;
    }

    if(service_chain != nullptr)
    {
        children["service-chain"] = service_chain;
    }

    return children;
}

void Native::Interface::Vlan::ServicePolicy::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::ServicePolicy::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::ServicePolicy::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "control" || name == "performance-monitor" || name == "service-chain")
        return true;
    return false;
}

Native::Interface::Vlan::ServicePolicy::Type::Control::Control()
    :
    subscriber{YType::str, "subscriber"}
{

    yang_name = "control"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::ServicePolicy::Type::Control::~Control()
{
}

bool Native::Interface::Vlan::ServicePolicy::Type::Control::has_data() const
{
    return subscriber.is_set;
}

bool Native::Interface::Vlan::ServicePolicy::Type::Control::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(subscriber.yfilter);
}

std::string Native::Interface::Vlan::ServicePolicy::Type::Control::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::ServicePolicy::Type::Control::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber.is_set || is_set(subscriber.yfilter)) leaf_name_data.push_back(subscriber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::ServicePolicy::Type::Control::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::ServicePolicy::Type::Control::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::ServicePolicy::Type::Control::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "subscriber")
    {
        subscriber = value;
        subscriber.value_namespace = name_space;
        subscriber.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::ServicePolicy::Type::Control::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "subscriber")
    {
        subscriber.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::ServicePolicy::Type::Control::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber")
        return true;
    return false;
}

Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::PerformanceMonitor()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{

    yang_name = "performance-monitor"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::~PerformanceMonitor()
{
}

bool Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::has_data() const
{
    return direction.is_set
	|| name.is_set;
}

bool Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-monitor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "name")
        return true;
    return false;
}

Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::ServiceChain()
    :
    input(std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input>())
	,output(std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "service-chain"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::~ServiceChain()
{
}

bool Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::Input()
    :
    name{YType::str, "name"}
{

    yang_name = "input"; yang_parent_name = "service-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::~Input()
{
}

bool Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::has_data() const
{
    return name.is_set;
}

bool Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::Output()
    :
    name{YType::str, "name"}
{

    yang_name = "output"; yang_parent_name = "service-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::~Output()
{
}

bool Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::has_data() const
{
    return name.is_set;
}

bool Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::ServicePolicy::Type::ServiceChain::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Interface::Vlan::ServiceRouting::ServiceRouting()
    :
    mdns_sd(std::make_shared<Native::Interface::Vlan::ServiceRouting::MdnsSd>())
{
    mdns_sd->parent = this;

    yang_name = "service-routing"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::ServiceRouting::~ServiceRouting()
{
}

bool Native::Interface::Vlan::ServiceRouting::has_data() const
{
    return (mdns_sd !=  nullptr && mdns_sd->has_data());
}

bool Native::Interface::Vlan::ServiceRouting::has_operation() const
{
    return is_set(yfilter)
	|| (mdns_sd !=  nullptr && mdns_sd->has_operation());
}

std::string Native::Interface::Vlan::ServiceRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:service-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::ServiceRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::ServiceRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mdns-sd")
    {
        if(mdns_sd == nullptr)
        {
            mdns_sd = std::make_shared<Native::Interface::Vlan::ServiceRouting::MdnsSd>();
        }
        return mdns_sd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::ServiceRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mdns_sd != nullptr)
    {
        children["mdns-sd"] = mdns_sd;
    }

    return children;
}

void Native::Interface::Vlan::ServiceRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::ServiceRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::ServiceRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mdns-sd")
        return true;
    return false;
}

Native::Interface::Vlan::ServiceRouting::MdnsSd::MdnsSd()
    :
    redistribute(std::make_shared<Native::Interface::Vlan::ServiceRouting::MdnsSd::Redistribute>())
{
    redistribute->parent = this;

    yang_name = "mdns-sd"; yang_parent_name = "service-routing"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::ServiceRouting::MdnsSd::~MdnsSd()
{
}

bool Native::Interface::Vlan::ServiceRouting::MdnsSd::has_data() const
{
    return (redistribute !=  nullptr && redistribute->has_data());
}

bool Native::Interface::Vlan::ServiceRouting::MdnsSd::has_operation() const
{
    return is_set(yfilter)
	|| (redistribute !=  nullptr && redistribute->has_operation());
}

std::string Native::Interface::Vlan::ServiceRouting::MdnsSd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdns-sd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::ServiceRouting::MdnsSd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::ServiceRouting::MdnsSd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Interface::Vlan::ServiceRouting::MdnsSd::Redistribute>();
        }
        return redistribute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::ServiceRouting::MdnsSd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    return children;
}

void Native::Interface::Vlan::ServiceRouting::MdnsSd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::ServiceRouting::MdnsSd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::ServiceRouting::MdnsSd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redistribute")
        return true;
    return false;
}

Native::Interface::Vlan::ServiceRouting::MdnsSd::Redistribute::Redistribute()
    :
    mdns_sd{YType::empty, "mdns-sd"},
    withdraw_only{YType::empty, "withdraw-only"}
{

    yang_name = "redistribute"; yang_parent_name = "mdns-sd"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::ServiceRouting::MdnsSd::Redistribute::~Redistribute()
{
}

bool Native::Interface::Vlan::ServiceRouting::MdnsSd::Redistribute::has_data() const
{
    return mdns_sd.is_set
	|| withdraw_only.is_set;
}

bool Native::Interface::Vlan::ServiceRouting::MdnsSd::Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mdns_sd.yfilter)
	|| ydk::is_set(withdraw_only.yfilter);
}

std::string Native::Interface::Vlan::ServiceRouting::MdnsSd::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::ServiceRouting::MdnsSd::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mdns_sd.is_set || is_set(mdns_sd.yfilter)) leaf_name_data.push_back(mdns_sd.get_name_leafdata());
    if (withdraw_only.is_set || is_set(withdraw_only.yfilter)) leaf_name_data.push_back(withdraw_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::ServiceRouting::MdnsSd::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::ServiceRouting::MdnsSd::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::ServiceRouting::MdnsSd::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mdns-sd")
    {
        mdns_sd = value;
        mdns_sd.value_namespace = name_space;
        mdns_sd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-only")
    {
        withdraw_only = value;
        withdraw_only.value_namespace = name_space;
        withdraw_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::ServiceRouting::MdnsSd::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mdns-sd")
    {
        mdns_sd.yfilter = yfilter;
    }
    if(value_path == "withdraw-only")
    {
        withdraw_only.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::ServiceRouting::MdnsSd::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mdns-sd" || name == "withdraw-only")
        return true;
    return false;
}

Native::Interface::Vlan::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{

    yang_name = "vrf"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Vrf::~Vrf()
{
}

bool Native::Interface::Vlan::Vrf::has_data() const
{
    return forwarding.is_set;
}

bool Native::Interface::Vlan::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Interface::Vlan::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Interface::Vlan::Vrf_::Vrf_()
    :
    forwarding{YType::str, "forwarding"}
{

    yang_name = "vrf"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Vrf_::~Vrf_()
{
}

bool Native::Interface::Vlan::Vrf_::has_data() const
{
    return forwarding.is_set;
}

bool Native::Interface::Vlan::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(forwarding.yfilter);
}

std::string Native::Interface::Vlan::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding.is_set || is_set(forwarding.yfilter)) leaf_name_data.push_back(forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
        forwarding.value_namespace = name_space;
        forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forwarding")
    {
        forwarding.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::Vrrp()
    :
    number{YType::uint8, "number"}
{

    yang_name = "vrrp"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Vrrp::~Vrrp()
{
}

bool Native::Interface::Vlan::Vrrp::has_data() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    return number.is_set;
}

bool Native::Interface::Vlan::Vrrp::has_operation() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::Interface::Vlan::Vrrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:vrrp" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Vrrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        for(auto const & c : ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::Vrrp::Ip>();
        c->parent = this;
        ip.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Vrrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::Vrrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "number")
        return true;
    return false;
}

Native::Interface::Vlan::Vrrp::Ip::Ip()
    :
    ipv4{YType::str, "ipv4"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "ip"; yang_parent_name = "vrrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::Vrrp::Ip::~Ip()
{
}

bool Native::Interface::Vlan::Vrrp::Ip::has_data() const
{
    return ipv4.is_set
	|| secondary.is_set;
}

bool Native::Interface::Vlan::Vrrp::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Interface::Vlan::Vrrp::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip" <<"[ipv4='" <<ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::Vrrp::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::Vrrp::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::Vrrp::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::Vrrp::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::Vrrp::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::Vrrp::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "secondary")
        return true;
    return false;
}

Native::Interface::Vlan::ZoneMember::ZoneMember()
    :
    security{YType::str, "security"}
{

    yang_name = "zone-member"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::ZoneMember::~ZoneMember()
{
}

bool Native::Interface::Vlan::ZoneMember::has_data() const
{
    return security.is_set;
}

bool Native::Interface::Vlan::ZoneMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(security.yfilter);
}

std::string Native::Interface::Vlan::ZoneMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-zone:zone-member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::ZoneMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (security.is_set || is_set(security.yfilter)) leaf_name_data.push_back(security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::ZoneMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::ZoneMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::ZoneMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "security")
    {
        security = value;
        security.value_namespace = name_space;
        security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::ZoneMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "security")
    {
        security.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::ZoneMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::Iox::Iox()
{

    yang_name = "iox"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Iox::~Iox()
{
}

bool Native::Iox::has_data() const
{
    return false;
}

bool Native::Iox::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Iox::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Iox::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iox";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Iox::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Iox::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Iox::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Iox::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Iox::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Iox::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Ip::Ip()
    :
    classless{YType::empty, "classless"},
    default_gateway{YType::str, "default-gateway"},
    domain_name{YType::str, "domain-name"},
    host_routing{YType::empty, "host-routing"},
    source_route{YType::boolean, "source-route"},
    subnet_zero{YType::boolean, "subnet-zero"}
    	,
    access_list(std::make_shared<Native::Ip::AccessList>())
	,admission(std::make_shared<Native::Ip::Admission>())
	,arp(std::make_shared<Native::Ip::Arp>())
	,as_path(std::make_shared<Native::Ip::AsPath>())
	,bgp_community(std::make_shared<Native::Ip::BgpCommunity>())
	,bootp(std::make_shared<Native::Ip::Bootp>())
	,cef(nullptr) // presence node
	,community_list(std::make_shared<Native::Ip::CommunityList>())
	,device(std::make_shared<Native::Ip::Device>())
	,dhcp(std::make_shared<Native::Ip::Dhcp>())
	,dns(std::make_shared<Native::Ip::Dns>())
	,domain(std::make_shared<Native::Ip::Domain>())
	,domain_list(std::make_shared<Native::Ip::DomainList>())
	,domain_lookup(nullptr) // presence node
	,domain_lookup_conf(std::make_shared<Native::Ip::DomainLookupConf>())
	,explicit_path(std::make_shared<Native::Ip::ExplicitPath>())
	,extcommunity_list(std::make_shared<Native::Ip::ExtcommunityList>())
	,finger(nullptr) // presence node
	,forward_protocol(std::make_shared<Native::Ip::ForwardProtocol>())
	,ftp(std::make_shared<Native::Ip::Ftp>())
	,gratuitous_arps_conf(std::make_shared<Native::Ip::GratuitousArpsConf>())
	,host(std::make_shared<Native::Ip::Host>())
	,http(std::make_shared<Native::Ip::Http>())
	,icmp(std::make_shared<Native::Ip::Icmp>())
	,igmp(std::make_shared<Native::Ip::Igmp>())
	,local(std::make_shared<Native::Ip::Local>())
	,mcr_conf(std::make_shared<Native::Ip::McrConf>())
	,mroute(std::make_shared<Native::Ip::Mroute>())
	,msdp(std::make_shared<Native::Ip::Msdp>())
	,multicast(std::make_shared<Native::Ip::Multicast>())
	,multicast_routing(nullptr) // presence node
	,name_server(std::make_shared<Native::Ip::NameServer>())
	,nat(std::make_shared<Native::Ip::Nat>())
	,nbar(std::make_shared<Native::Ip::Nbar>())
	,pim(std::make_shared<Native::Ip::Pim>())
	,prefix_list(std::make_shared<Native::Ip::PrefixList>())
	,radius(std::make_shared<Native::Ip::Radius>())
	,rcmd(std::make_shared<Native::Ip::Rcmd>())
	,route(std::make_shared<Native::Ip::Route>())
	,routing(nullptr) // presence node
	,rsvp(std::make_shared<Native::Ip::Rsvp>())
	,scp(std::make_shared<Native::Ip::Scp>())
	,sla(std::make_shared<Native::Ip::Sla>())
	,spd(std::make_shared<Native::Ip::Spd>())
	,ssh(std::make_shared<Native::Ip::Ssh>())
	,tacacs(std::make_shared<Native::Ip::Tacacs>())
	,tcp(std::make_shared<Native::Ip::Tcp>())
	,telnet(std::make_shared<Native::Ip::Telnet>())
	,tftp(std::make_shared<Native::Ip::Tftp>())
	,wccp(std::make_shared<Native::Ip::Wccp>())
{
    access_list->parent = this;
    admission->parent = this;
    arp->parent = this;
    as_path->parent = this;
    bgp_community->parent = this;
    bootp->parent = this;
    community_list->parent = this;
    device->parent = this;
    dhcp->parent = this;
    dns->parent = this;
    domain->parent = this;
    domain_list->parent = this;
    domain_lookup_conf->parent = this;
    explicit_path->parent = this;
    extcommunity_list->parent = this;
    forward_protocol->parent = this;
    ftp->parent = this;
    gratuitous_arps_conf->parent = this;
    host->parent = this;
    http->parent = this;
    icmp->parent = this;
    igmp->parent = this;
    local->parent = this;
    mcr_conf->parent = this;
    mroute->parent = this;
    msdp->parent = this;
    multicast->parent = this;
    name_server->parent = this;
    nat->parent = this;
    nbar->parent = this;
    pim->parent = this;
    prefix_list->parent = this;
    radius->parent = this;
    rcmd->parent = this;
    route->parent = this;
    rsvp->parent = this;
    scp->parent = this;
    sla->parent = this;
    spd->parent = this;
    ssh->parent = this;
    tacacs->parent = this;
    tcp->parent = this;
    telnet->parent = this;
    tftp->parent = this;
    wccp->parent = this;

    yang_name = "ip"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::~Ip()
{
}

bool Native::Ip::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return classless.is_set
	|| default_gateway.is_set
	|| domain_name.is_set
	|| host_routing.is_set
	|| source_route.is_set
	|| subnet_zero.is_set
	|| (access_list !=  nullptr && access_list->has_data())
	|| (admission !=  nullptr && admission->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (as_path !=  nullptr && as_path->has_data())
	|| (bgp_community !=  nullptr && bgp_community->has_data())
	|| (bootp !=  nullptr && bootp->has_data())
	|| (cef !=  nullptr && cef->has_data())
	|| (community_list !=  nullptr && community_list->has_data())
	|| (device !=  nullptr && device->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (dns !=  nullptr && dns->has_data())
	|| (domain !=  nullptr && domain->has_data())
	|| (domain_list !=  nullptr && domain_list->has_data())
	|| (domain_lookup !=  nullptr && domain_lookup->has_data())
	|| (domain_lookup_conf !=  nullptr && domain_lookup_conf->has_data())
	|| (explicit_path !=  nullptr && explicit_path->has_data())
	|| (extcommunity_list !=  nullptr && extcommunity_list->has_data())
	|| (finger !=  nullptr && finger->has_data())
	|| (forward_protocol !=  nullptr && forward_protocol->has_data())
	|| (ftp !=  nullptr && ftp->has_data())
	|| (gratuitous_arps_conf !=  nullptr && gratuitous_arps_conf->has_data())
	|| (host !=  nullptr && host->has_data())
	|| (http !=  nullptr && http->has_data())
	|| (icmp !=  nullptr && icmp->has_data())
	|| (igmp !=  nullptr && igmp->has_data())
	|| (local !=  nullptr && local->has_data())
	|| (mcr_conf !=  nullptr && mcr_conf->has_data())
	|| (mroute !=  nullptr && mroute->has_data())
	|| (msdp !=  nullptr && msdp->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (multicast_routing !=  nullptr && multicast_routing->has_data())
	|| (name_server !=  nullptr && name_server->has_data())
	|| (nat !=  nullptr && nat->has_data())
	|| (nbar !=  nullptr && nbar->has_data())
	|| (pim !=  nullptr && pim->has_data())
	|| (prefix_list !=  nullptr && prefix_list->has_data())
	|| (radius !=  nullptr && radius->has_data())
	|| (rcmd !=  nullptr && rcmd->has_data())
	|| (route !=  nullptr && route->has_data())
	|| (routing !=  nullptr && routing->has_data())
	|| (rsvp !=  nullptr && rsvp->has_data())
	|| (scp !=  nullptr && scp->has_data())
	|| (sla !=  nullptr && sla->has_data())
	|| (spd !=  nullptr && spd->has_data())
	|| (ssh !=  nullptr && ssh->has_data())
	|| (tacacs !=  nullptr && tacacs->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (telnet !=  nullptr && telnet->has_data())
	|| (tftp !=  nullptr && tftp->has_data())
	|| (wccp !=  nullptr && wccp->has_data());
}

bool Native::Ip::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(classless.yfilter)
	|| ydk::is_set(default_gateway.yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(host_routing.yfilter)
	|| ydk::is_set(source_route.yfilter)
	|| ydk::is_set(subnet_zero.yfilter)
	|| (access_list !=  nullptr && access_list->has_operation())
	|| (admission !=  nullptr && admission->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (as_path !=  nullptr && as_path->has_operation())
	|| (bgp_community !=  nullptr && bgp_community->has_operation())
	|| (bootp !=  nullptr && bootp->has_operation())
	|| (cef !=  nullptr && cef->has_operation())
	|| (community_list !=  nullptr && community_list->has_operation())
	|| (device !=  nullptr && device->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (dns !=  nullptr && dns->has_operation())
	|| (domain !=  nullptr && domain->has_operation())
	|| (domain_list !=  nullptr && domain_list->has_operation())
	|| (domain_lookup !=  nullptr && domain_lookup->has_operation())
	|| (domain_lookup_conf !=  nullptr && domain_lookup_conf->has_operation())
	|| (explicit_path !=  nullptr && explicit_path->has_operation())
	|| (extcommunity_list !=  nullptr && extcommunity_list->has_operation())
	|| (finger !=  nullptr && finger->has_operation())
	|| (forward_protocol !=  nullptr && forward_protocol->has_operation())
	|| (ftp !=  nullptr && ftp->has_operation())
	|| (gratuitous_arps_conf !=  nullptr && gratuitous_arps_conf->has_operation())
	|| (host !=  nullptr && host->has_operation())
	|| (http !=  nullptr && http->has_operation())
	|| (icmp !=  nullptr && icmp->has_operation())
	|| (igmp !=  nullptr && igmp->has_operation())
	|| (local !=  nullptr && local->has_operation())
	|| (mcr_conf !=  nullptr && mcr_conf->has_operation())
	|| (mroute !=  nullptr && mroute->has_operation())
	|| (msdp !=  nullptr && msdp->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (multicast_routing !=  nullptr && multicast_routing->has_operation())
	|| (name_server !=  nullptr && name_server->has_operation())
	|| (nat !=  nullptr && nat->has_operation())
	|| (nbar !=  nullptr && nbar->has_operation())
	|| (pim !=  nullptr && pim->has_operation())
	|| (prefix_list !=  nullptr && prefix_list->has_operation())
	|| (radius !=  nullptr && radius->has_operation())
	|| (rcmd !=  nullptr && rcmd->has_operation())
	|| (route !=  nullptr && route->has_operation())
	|| (routing !=  nullptr && routing->has_operation())
	|| (rsvp !=  nullptr && rsvp->has_operation())
	|| (scp !=  nullptr && scp->has_operation())
	|| (sla !=  nullptr && sla->has_operation())
	|| (spd !=  nullptr && spd->has_operation())
	|| (ssh !=  nullptr && ssh->has_operation())
	|| (tacacs !=  nullptr && tacacs->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (telnet !=  nullptr && telnet->has_operation())
	|| (tftp !=  nullptr && tftp->has_operation())
	|| (wccp !=  nullptr && wccp->has_operation());
}

std::string Native::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (classless.is_set || is_set(classless.yfilter)) leaf_name_data.push_back(classless.get_name_leafdata());
    if (default_gateway.is_set || is_set(default_gateway.yfilter)) leaf_name_data.push_back(default_gateway.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (host_routing.is_set || is_set(host_routing.yfilter)) leaf_name_data.push_back(host_routing.get_name_leafdata());
    if (source_route.is_set || is_set(source_route.yfilter)) leaf_name_data.push_back(source_route.get_name_leafdata());
    if (subnet_zero.is_set || is_set(subnet_zero.yfilter)) leaf_name_data.push_back(subnet_zero.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list")
    {
        if(access_list == nullptr)
        {
            access_list = std::make_shared<Native::Ip::AccessList>();
        }
        return access_list;
    }

    if(child_yang_name == "admission")
    {
        if(admission == nullptr)
        {
            admission = std::make_shared<Native::Ip::Admission>();
        }
        return admission;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Ip::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "as-path")
    {
        if(as_path == nullptr)
        {
            as_path = std::make_shared<Native::Ip::AsPath>();
        }
        return as_path;
    }

    if(child_yang_name == "bgp-community")
    {
        if(bgp_community == nullptr)
        {
            bgp_community = std::make_shared<Native::Ip::BgpCommunity>();
        }
        return bgp_community;
    }

    if(child_yang_name == "bootp")
    {
        if(bootp == nullptr)
        {
            bootp = std::make_shared<Native::Ip::Bootp>();
        }
        return bootp;
    }

    if(child_yang_name == "cef")
    {
        if(cef == nullptr)
        {
            cef = std::make_shared<Native::Ip::Cef>();
        }
        return cef;
    }

    if(child_yang_name == "community-list")
    {
        if(community_list == nullptr)
        {
            community_list = std::make_shared<Native::Ip::CommunityList>();
        }
        return community_list;
    }

    if(child_yang_name == "device")
    {
        if(device == nullptr)
        {
            device = std::make_shared<Native::Ip::Device>();
        }
        return device;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Ip::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "dns")
    {
        if(dns == nullptr)
        {
            dns = std::make_shared<Native::Ip::Dns>();
        }
        return dns;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Ip::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "domain-list")
    {
        if(domain_list == nullptr)
        {
            domain_list = std::make_shared<Native::Ip::DomainList>();
        }
        return domain_list;
    }

    if(child_yang_name == "domain-lookup")
    {
        if(domain_lookup == nullptr)
        {
            domain_lookup = std::make_shared<Native::Ip::DomainLookup>();
        }
        return domain_lookup;
    }

    if(child_yang_name == "domain-lookup-conf")
    {
        if(domain_lookup_conf == nullptr)
        {
            domain_lookup_conf = std::make_shared<Native::Ip::DomainLookupConf>();
        }
        return domain_lookup_conf;
    }

    if(child_yang_name == "explicit-path")
    {
        if(explicit_path == nullptr)
        {
            explicit_path = std::make_shared<Native::Ip::ExplicitPath>();
        }
        return explicit_path;
    }

    if(child_yang_name == "extcommunity-list")
    {
        if(extcommunity_list == nullptr)
        {
            extcommunity_list = std::make_shared<Native::Ip::ExtcommunityList>();
        }
        return extcommunity_list;
    }

    if(child_yang_name == "finger")
    {
        if(finger == nullptr)
        {
            finger = std::make_shared<Native::Ip::Finger>();
        }
        return finger;
    }

    if(child_yang_name == "forward-protocol")
    {
        if(forward_protocol == nullptr)
        {
            forward_protocol = std::make_shared<Native::Ip::ForwardProtocol>();
        }
        return forward_protocol;
    }

    if(child_yang_name == "ftp")
    {
        if(ftp == nullptr)
        {
            ftp = std::make_shared<Native::Ip::Ftp>();
        }
        return ftp;
    }

    if(child_yang_name == "gratuitous-arps-conf")
    {
        if(gratuitous_arps_conf == nullptr)
        {
            gratuitous_arps_conf = std::make_shared<Native::Ip::GratuitousArpsConf>();
        }
        return gratuitous_arps_conf;
    }

    if(child_yang_name == "host")
    {
        if(host == nullptr)
        {
            host = std::make_shared<Native::Ip::Host>();
        }
        return host;
    }

    if(child_yang_name == "http")
    {
        if(http == nullptr)
        {
            http = std::make_shared<Native::Ip::Http>();
        }
        return http;
    }

    if(child_yang_name == "icmp")
    {
        if(icmp == nullptr)
        {
            icmp = std::make_shared<Native::Ip::Icmp>();
        }
        return icmp;
    }

    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<Native::Ip::Igmp>();
        }
        return igmp;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Ip::Local>();
        }
        return local;
    }

    if(child_yang_name == "mcr-conf")
    {
        if(mcr_conf == nullptr)
        {
            mcr_conf = std::make_shared<Native::Ip::McrConf>();
        }
        return mcr_conf;
    }

    if(child_yang_name == "mroute")
    {
        if(mroute == nullptr)
        {
            mroute = std::make_shared<Native::Ip::Mroute>();
        }
        return mroute;
    }

    if(child_yang_name == "msdp")
    {
        if(msdp == nullptr)
        {
            msdp = std::make_shared<Native::Ip::Msdp>();
        }
        return msdp;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Ip::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "multicast-routing")
    {
        if(multicast_routing == nullptr)
        {
            multicast_routing = std::make_shared<Native::Ip::MulticastRouting>();
        }
        return multicast_routing;
    }

    if(child_yang_name == "name-server")
    {
        if(name_server == nullptr)
        {
            name_server = std::make_shared<Native::Ip::NameServer>();
        }
        return name_server;
    }

    if(child_yang_name == "nat")
    {
        if(nat == nullptr)
        {
            nat = std::make_shared<Native::Ip::Nat>();
        }
        return nat;
    }

    if(child_yang_name == "nbar")
    {
        if(nbar == nullptr)
        {
            nbar = std::make_shared<Native::Ip::Nbar>();
        }
        return nbar;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::Ip::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "prefix-list")
    {
        if(prefix_list == nullptr)
        {
            prefix_list = std::make_shared<Native::Ip::PrefixList>();
        }
        return prefix_list;
    }

    if(child_yang_name == "radius")
    {
        if(radius == nullptr)
        {
            radius = std::make_shared<Native::Ip::Radius>();
        }
        return radius;
    }

    if(child_yang_name == "rcmd")
    {
        if(rcmd == nullptr)
        {
            rcmd = std::make_shared<Native::Ip::Rcmd>();
        }
        return rcmd;
    }

    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Ip::Route>();
        }
        return route;
    }

    if(child_yang_name == "routing")
    {
        if(routing == nullptr)
        {
            routing = std::make_shared<Native::Ip::Routing>();
        }
        return routing;
    }

    if(child_yang_name == "rsvp")
    {
        if(rsvp == nullptr)
        {
            rsvp = std::make_shared<Native::Ip::Rsvp>();
        }
        return rsvp;
    }

    if(child_yang_name == "scp")
    {
        if(scp == nullptr)
        {
            scp = std::make_shared<Native::Ip::Scp>();
        }
        return scp;
    }

    if(child_yang_name == "sla")
    {
        if(sla == nullptr)
        {
            sla = std::make_shared<Native::Ip::Sla>();
        }
        return sla;
    }

    if(child_yang_name == "spd")
    {
        if(spd == nullptr)
        {
            spd = std::make_shared<Native::Ip::Spd>();
        }
        return spd;
    }

    if(child_yang_name == "ssh")
    {
        if(ssh == nullptr)
        {
            ssh = std::make_shared<Native::Ip::Ssh>();
        }
        return ssh;
    }

    if(child_yang_name == "tacacs")
    {
        if(tacacs == nullptr)
        {
            tacacs = std::make_shared<Native::Ip::Tacacs>();
        }
        return tacacs;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Ip::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "telnet")
    {
        if(telnet == nullptr)
        {
            telnet = std::make_shared<Native::Ip::Telnet>();
        }
        return telnet;
    }

    if(child_yang_name == "tftp")
    {
        if(tftp == nullptr)
        {
            tftp = std::make_shared<Native::Ip::Tftp>();
        }
        return tftp;
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    if(child_yang_name == "wccp")
    {
        if(wccp == nullptr)
        {
            wccp = std::make_shared<Native::Ip::Wccp>();
        }
        return wccp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_list != nullptr)
    {
        children["access-list"] = access_list;
    }

    if(admission != nullptr)
    {
        children["admission"] = admission;
    }

    if(arp != nullptr)
    {
        children["arp"] = arp;
    }

    if(as_path != nullptr)
    {
        children["as-path"] = as_path;
    }

    if(bgp_community != nullptr)
    {
        children["bgp-community"] = bgp_community;
    }

    if(bootp != nullptr)
    {
        children["bootp"] = bootp;
    }

    if(cef != nullptr)
    {
        children["cef"] = cef;
    }

    if(community_list != nullptr)
    {
        children["community-list"] = community_list;
    }

    if(device != nullptr)
    {
        children["device"] = device;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(dns != nullptr)
    {
        children["dns"] = dns;
    }

    if(domain != nullptr)
    {
        children["domain"] = domain;
    }

    if(domain_list != nullptr)
    {
        children["domain-list"] = domain_list;
    }

    if(domain_lookup != nullptr)
    {
        children["domain-lookup"] = domain_lookup;
    }

    if(domain_lookup_conf != nullptr)
    {
        children["domain-lookup-conf"] = domain_lookup_conf;
    }

    if(explicit_path != nullptr)
    {
        children["explicit-path"] = explicit_path;
    }

    if(extcommunity_list != nullptr)
    {
        children["extcommunity-list"] = extcommunity_list;
    }

    if(finger != nullptr)
    {
        children["finger"] = finger;
    }

    if(forward_protocol != nullptr)
    {
        children["forward-protocol"] = forward_protocol;
    }

    if(ftp != nullptr)
    {
        children["ftp"] = ftp;
    }

    if(gratuitous_arps_conf != nullptr)
    {
        children["gratuitous-arps-conf"] = gratuitous_arps_conf;
    }

    if(host != nullptr)
    {
        children["host"] = host;
    }

    if(http != nullptr)
    {
        children["http"] = http;
    }

    if(icmp != nullptr)
    {
        children["icmp"] = icmp;
    }

    if(igmp != nullptr)
    {
        children["igmp"] = igmp;
    }

    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(mcr_conf != nullptr)
    {
        children["mcr-conf"] = mcr_conf;
    }

    if(mroute != nullptr)
    {
        children["mroute"] = mroute;
    }

    if(msdp != nullptr)
    {
        children["msdp"] = msdp;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(multicast_routing != nullptr)
    {
        children["multicast-routing"] = multicast_routing;
    }

    if(name_server != nullptr)
    {
        children["name-server"] = name_server;
    }

    if(nat != nullptr)
    {
        children["nat"] = nat;
    }

    if(nbar != nullptr)
    {
        children["nbar"] = nbar;
    }

    if(pim != nullptr)
    {
        children["pim"] = pim;
    }

    if(prefix_list != nullptr)
    {
        children["prefix-list"] = prefix_list;
    }

    if(radius != nullptr)
    {
        children["radius"] = radius;
    }

    if(rcmd != nullptr)
    {
        children["rcmd"] = rcmd;
    }

    if(route != nullptr)
    {
        children["route"] = route;
    }

    if(routing != nullptr)
    {
        children["routing"] = routing;
    }

    if(rsvp != nullptr)
    {
        children["rsvp"] = rsvp;
    }

    if(scp != nullptr)
    {
        children["scp"] = scp;
    }

    if(sla != nullptr)
    {
        children["sla"] = sla;
    }

    if(spd != nullptr)
    {
        children["spd"] = spd;
    }

    if(ssh != nullptr)
    {
        children["ssh"] = ssh;
    }

    if(tacacs != nullptr)
    {
        children["tacacs"] = tacacs;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(telnet != nullptr)
    {
        children["telnet"] = telnet;
    }

    if(tftp != nullptr)
    {
        children["tftp"] = tftp;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    if(wccp != nullptr)
    {
        children["wccp"] = wccp;
    }

    return children;
}

void Native::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "classless")
    {
        classless = value;
        classless.value_namespace = name_space;
        classless.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-gateway")
    {
        default_gateway = value;
        default_gateway.value_namespace = name_space;
        default_gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-routing")
    {
        host_routing = value;
        host_routing.value_namespace = name_space;
        host_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-route")
    {
        source_route = value;
        source_route.value_namespace = name_space;
        source_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subnet-zero")
    {
        subnet_zero = value;
        subnet_zero.value_namespace = name_space;
        subnet_zero.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "classless")
    {
        classless.yfilter = yfilter;
    }
    if(value_path == "default-gateway")
    {
        default_gateway.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "host-routing")
    {
        host_routing.yfilter = yfilter;
    }
    if(value_path == "source-route")
    {
        source_route.yfilter = yfilter;
    }
    if(value_path == "subnet-zero")
    {
        subnet_zero.yfilter = yfilter;
    }
}

bool Native::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list" || name == "admission" || name == "arp" || name == "as-path" || name == "bgp-community" || name == "bootp" || name == "cef" || name == "community-list" || name == "device" || name == "dhcp" || name == "dns" || name == "domain" || name == "domain-list" || name == "domain-lookup" || name == "domain-lookup-conf" || name == "explicit-path" || name == "extcommunity-list" || name == "finger" || name == "forward-protocol" || name == "ftp" || name == "gratuitous-arps-conf" || name == "host" || name == "http" || name == "icmp" || name == "igmp" || name == "local" || name == "mcr-conf" || name == "mroute" || name == "msdp" || name == "multicast" || name == "multicast-routing" || name == "name-server" || name == "nat" || name == "nbar" || name == "pim" || name == "prefix-list" || name == "radius" || name == "rcmd" || name == "route" || name == "routing" || name == "rsvp" || name == "scp" || name == "sla" || name == "spd" || name == "ssh" || name == "tacacs" || name == "tcp" || name == "telnet" || name == "tftp" || name == "vrf" || name == "wccp" || name == "classless" || name == "default-gateway" || name == "domain-name" || name == "host-routing" || name == "source-route" || name == "subnet-zero")
        return true;
    return false;
}

Native::Ip::AccessList::AccessList()
    :
    match_local_traffic{YType::empty, "Cisco-IOS-XE-acl:match-local-traffic"},
    persistent{YType::empty, "Cisco-IOS-XE-acl:persistent"}
    	,
    helper(std::make_shared<Native::Ip::AccessList::Helper>())
	,log_update(std::make_shared<Native::Ip::AccessList::LogUpdate>())
	,logging(std::make_shared<Native::Ip::AccessList::Logging>())
	,resequence(std::make_shared<Native::Ip::AccessList::Resequence>())
{
    helper->parent = this;
    log_update->parent = this;
    logging->parent = this;
    resequence->parent = this;

    yang_name = "access-list"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::AccessList::~AccessList()
{
}

bool Native::Ip::AccessList::has_data() const
{
    for (std::size_t index=0; index<extended.size(); index++)
    {
        if(extended[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<role_based.size(); index++)
    {
        if(role_based[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standard.size(); index++)
    {
        if(standard[index]->has_data())
            return true;
    }
    return match_local_traffic.is_set
	|| persistent.is_set
	|| (helper !=  nullptr && helper->has_data())
	|| (log_update !=  nullptr && log_update->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (resequence !=  nullptr && resequence->has_data());
}

bool Native::Ip::AccessList::has_operation() const
{
    for (std::size_t index=0; index<extended.size(); index++)
    {
        if(extended[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<role_based.size(); index++)
    {
        if(role_based[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standard.size(); index++)
    {
        if(standard[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(match_local_traffic.yfilter)
	|| ydk::is_set(persistent.yfilter)
	|| (helper !=  nullptr && helper->has_operation())
	|| (log_update !=  nullptr && log_update->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (resequence !=  nullptr && resequence->has_operation());
}

std::string Native::Ip::AccessList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_local_traffic.is_set || is_set(match_local_traffic.yfilter)) leaf_name_data.push_back(match_local_traffic.get_name_leafdata());
    if (persistent.is_set || is_set(persistent.yfilter)) leaf_name_data.push_back(persistent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "extended")
    {
        for(auto const & c : extended)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::Extended>();
        c->parent = this;
        extended.push_back(c);
        return c;
    }

    if(child_yang_name == "helper")
    {
        if(helper == nullptr)
        {
            helper = std::make_shared<Native::Ip::AccessList::Helper>();
        }
        return helper;
    }

    if(child_yang_name == "log-update")
    {
        if(log_update == nullptr)
        {
            log_update = std::make_shared<Native::Ip::AccessList::LogUpdate>();
        }
        return log_update;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Ip::AccessList::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "resequence")
    {
        if(resequence == nullptr)
        {
            resequence = std::make_shared<Native::Ip::AccessList::Resequence>();
        }
        return resequence;
    }

    if(child_yang_name == "role-based")
    {
        for(auto const & c : role_based)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::RoleBased>();
        c->parent = this;
        role_based.push_back(c);
        return c;
    }

    if(child_yang_name == "standard")
    {
        for(auto const & c : standard)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::Standard>();
        c->parent = this;
        standard.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : extended)
    {
        children[c->get_segment_path()] = c;
    }

    if(helper != nullptr)
    {
        children["helper"] = helper;
    }

    if(log_update != nullptr)
    {
        children["log-update"] = log_update;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(resequence != nullptr)
    {
        children["resequence"] = resequence;
    }

    for (auto const & c : role_based)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : standard)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "match-local-traffic")
    {
        match_local_traffic = value;
        match_local_traffic.value_namespace = name_space;
        match_local_traffic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "persistent")
    {
        persistent = value;
        persistent.value_namespace = name_space;
        persistent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "match-local-traffic")
    {
        match_local_traffic.yfilter = yfilter;
    }
    if(value_path == "persistent")
    {
        persistent.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "extended" || name == "helper" || name == "log-update" || name == "logging" || name == "resequence" || name == "role-based" || name == "standard" || name == "match-local-traffic" || name == "persistent")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Extended()
    :
    name{YType::str, "name"}
    	,
    default_(std::make_shared<Native::Ip::AccessList::Extended::Default_>())
{
    default_->parent = this;

    yang_name = "extended"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::AccessList::Extended::~Extended()
{
}

bool Native::Ip::AccessList::Extended::has_data() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return name.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Ip::AccessList::Extended::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Ip::AccessList::Extended::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AccessList::Extended::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:extended" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        for(auto const & c : access_list_seq_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule>();
        c->parent = this;
        access_list_seq_rule.push_back(c);
        return c;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Ip::AccessList::Extended::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list_seq_rule)
    {
        children[c->get_segment_path()] = c;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Ip::AccessList::Extended::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule" || name == "default" || name == "name")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
    	,
    ace_rule(std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "extended"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Extended::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::has_data() const
{
    return sequence.is_set
	|| remark.is_set
	|| (ace_rule !=  nullptr && ace_rule->has_data());
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ip::AccessList::Extended::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule" <<"[sequence='" <<sequence <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-rule")
    {
        if(ace_rule == nullptr)
        {
            ace_rule = std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule>();
        }
        return ace_rule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ace_rule != nullptr)
    {
        children["ace-rule"] = ace_rule;
    }

    return children;
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-rule" || name == "sequence" || name == "remark")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::AceRule()
    :
    ack{YType::empty, "ack"},
    action{YType::enumeration, "action"},
    any{YType::empty, "any"},
    dest_ipv4_address{YType::str, "dest-ipv4-address"},
    dest_mask{YType::str, "dest-mask"},
    dscp{YType::str, "dscp"},
    dst_any{YType::empty, "dst-any"},
    dst_eq{YType::str, "dst-eq"},
    dst_gt{YType::str, "dst-gt"},
    dst_host{YType::str, "dst-host"},
    dst_lt{YType::str, "dst-lt"},
    dst_neq{YType::str, "dst-neq"},
    dst_object_group{YType::str, "dst-object-group"},
    dst_range1{YType::str, "dst-range1"},
    dst_range2{YType::str, "dst-range2"},
    established{YType::empty, "established"},
    fin{YType::empty, "fin"},
    fragments{YType::empty, "fragments"},
    host{YType::str, "host"},
    ipv4_address{YType::str, "ipv4-address"},
    log{YType::empty, "log"},
    log_input{YType::empty, "log-input"},
    mask{YType::str, "mask"},
    msg_code{YType::uint8, "msg-code"},
    msg_type{YType::uint8, "msg-type"},
    named_msg_type{YType::enumeration, "named-msg-type"},
    object_group{YType::str, "object-group"},
    object_group_str{YType::str, "object-group-str"},
    option{YType::str, "option"},
    precedence{YType::str, "precedence"},
    protocol{YType::str, "protocol"},
    psh{YType::empty, "psh"},
    rst{YType::empty, "rst"},
    src_eq{YType::str, "src-eq"},
    src_gt{YType::str, "src-gt"},
    src_lt{YType::str, "src-lt"},
    src_neq{YType::str, "src-neq"},
    src_range1{YType::str, "src-range1"},
    src_range2{YType::str, "src-range2"},
    syn{YType::empty, "syn"},
    time_range{YType::str, "time-range"},
    tos{YType::str, "tos"},
    urg{YType::empty, "urg"}
    	,
    match_all(std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll>())
	,match_any(std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny>())
	,ttl(std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl>())
{
    match_all->parent = this;
    match_any->parent = this;
    ttl->parent = this;

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::has_data() const
{
    return ack.is_set
	|| action.is_set
	|| any.is_set
	|| dest_ipv4_address.is_set
	|| dest_mask.is_set
	|| dscp.is_set
	|| dst_any.is_set
	|| dst_eq.is_set
	|| dst_gt.is_set
	|| dst_host.is_set
	|| dst_lt.is_set
	|| dst_neq.is_set
	|| dst_object_group.is_set
	|| dst_range1.is_set
	|| dst_range2.is_set
	|| established.is_set
	|| fin.is_set
	|| fragments.is_set
	|| host.is_set
	|| ipv4_address.is_set
	|| log.is_set
	|| log_input.is_set
	|| mask.is_set
	|| msg_code.is_set
	|| msg_type.is_set
	|| named_msg_type.is_set
	|| object_group.is_set
	|| object_group_str.is_set
	|| option.is_set
	|| precedence.is_set
	|| protocol.is_set
	|| psh.is_set
	|| rst.is_set
	|| src_eq.is_set
	|| src_gt.is_set
	|| src_lt.is_set
	|| src_neq.is_set
	|| src_range1.is_set
	|| src_range2.is_set
	|| syn.is_set
	|| time_range.is_set
	|| tos.is_set
	|| urg.is_set
	|| (match_all !=  nullptr && match_all->has_data())
	|| (match_any !=  nullptr && match_any->has_data())
	|| (ttl !=  nullptr && ttl->has_data());
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(dest_ipv4_address.yfilter)
	|| ydk::is_set(dest_mask.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(dst_any.yfilter)
	|| ydk::is_set(dst_eq.yfilter)
	|| ydk::is_set(dst_gt.yfilter)
	|| ydk::is_set(dst_host.yfilter)
	|| ydk::is_set(dst_lt.yfilter)
	|| ydk::is_set(dst_neq.yfilter)
	|| ydk::is_set(dst_object_group.yfilter)
	|| ydk::is_set(dst_range1.yfilter)
	|| ydk::is_set(dst_range2.yfilter)
	|| ydk::is_set(established.yfilter)
	|| ydk::is_set(fin.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(log_input.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(msg_code.yfilter)
	|| ydk::is_set(msg_type.yfilter)
	|| ydk::is_set(named_msg_type.yfilter)
	|| ydk::is_set(object_group.yfilter)
	|| ydk::is_set(object_group_str.yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(psh.yfilter)
	|| ydk::is_set(rst.yfilter)
	|| ydk::is_set(src_eq.yfilter)
	|| ydk::is_set(src_gt.yfilter)
	|| ydk::is_set(src_lt.yfilter)
	|| ydk::is_set(src_neq.yfilter)
	|| ydk::is_set(src_range1.yfilter)
	|| ydk::is_set(src_range2.yfilter)
	|| ydk::is_set(syn.yfilter)
	|| ydk::is_set(time_range.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(urg.yfilter)
	|| (match_all !=  nullptr && match_all->has_operation())
	|| (match_any !=  nullptr && match_any->has_operation())
	|| (ttl !=  nullptr && ttl->has_operation());
}

std::string Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (dest_ipv4_address.is_set || is_set(dest_ipv4_address.yfilter)) leaf_name_data.push_back(dest_ipv4_address.get_name_leafdata());
    if (dest_mask.is_set || is_set(dest_mask.yfilter)) leaf_name_data.push_back(dest_mask.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (dst_any.is_set || is_set(dst_any.yfilter)) leaf_name_data.push_back(dst_any.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.yfilter)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.yfilter)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_host.is_set || is_set(dst_host.yfilter)) leaf_name_data.push_back(dst_host.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.yfilter)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.yfilter)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_object_group.is_set || is_set(dst_object_group.yfilter)) leaf_name_data.push_back(dst_object_group.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.yfilter)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.yfilter)) leaf_name_data.push_back(dst_range2.get_name_leafdata());
    if (established.is_set || is_set(established.yfilter)) leaf_name_data.push_back(established.get_name_leafdata());
    if (fin.is_set || is_set(fin.yfilter)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.yfilter)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.yfilter)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (msg_type.is_set || is_set(msg_type.yfilter)) leaf_name_data.push_back(msg_type.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.yfilter)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());
    if (object_group.is_set || is_set(object_group.yfilter)) leaf_name_data.push_back(object_group.get_name_leafdata());
    if (object_group_str.is_set || is_set(object_group_str.yfilter)) leaf_name_data.push_back(object_group_str.get_name_leafdata());
    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (psh.is_set || is_set(psh.yfilter)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.yfilter)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (src_eq.is_set || is_set(src_eq.yfilter)) leaf_name_data.push_back(src_eq.get_name_leafdata());
    if (src_gt.is_set || is_set(src_gt.yfilter)) leaf_name_data.push_back(src_gt.get_name_leafdata());
    if (src_lt.is_set || is_set(src_lt.yfilter)) leaf_name_data.push_back(src_lt.get_name_leafdata());
    if (src_neq.is_set || is_set(src_neq.yfilter)) leaf_name_data.push_back(src_neq.get_name_leafdata());
    if (src_range1.is_set || is_set(src_range1.yfilter)) leaf_name_data.push_back(src_range1.get_name_leafdata());
    if (src_range2.is_set || is_set(src_range2.yfilter)) leaf_name_data.push_back(src_range2.get_name_leafdata());
    if (syn.is_set || is_set(syn.yfilter)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.yfilter)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (urg.is_set || is_set(urg.yfilter)) leaf_name_data.push_back(urg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match-all")
    {
        if(match_all == nullptr)
        {
            match_all = std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll>();
        }
        return match_all;
    }

    if(child_yang_name == "match-any")
    {
        if(match_any == nullptr)
        {
            match_any = std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny>();
        }
        return match_any;
    }

    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl>();
        }
        return ttl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match_all != nullptr)
    {
        children["match-all"] = match_all;
    }

    if(match_any != nullptr)
    {
        children["match-any"] = match_any;
    }

    if(ttl != nullptr)
    {
        children["ttl"] = ttl;
    }

    return children;
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-ipv4-address")
    {
        dest_ipv4_address = value;
        dest_ipv4_address.value_namespace = name_space;
        dest_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-mask")
    {
        dest_mask = value;
        dest_mask.value_namespace = name_space;
        dest_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-any")
    {
        dst_any = value;
        dst_any.value_namespace = name_space;
        dst_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-eq")
    {
        dst_eq = value;
        dst_eq.value_namespace = name_space;
        dst_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-gt")
    {
        dst_gt = value;
        dst_gt.value_namespace = name_space;
        dst_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-host")
    {
        dst_host = value;
        dst_host.value_namespace = name_space;
        dst_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-lt")
    {
        dst_lt = value;
        dst_lt.value_namespace = name_space;
        dst_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-neq")
    {
        dst_neq = value;
        dst_neq.value_namespace = name_space;
        dst_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-object-group")
    {
        dst_object_group = value;
        dst_object_group.value_namespace = name_space;
        dst_object_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range1")
    {
        dst_range1 = value;
        dst_range1.value_namespace = name_space;
        dst_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range2")
    {
        dst_range2 = value;
        dst_range2.value_namespace = name_space;
        dst_range2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established")
    {
        established = value;
        established.value_namespace = name_space;
        established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin")
    {
        fin = value;
        fin.value_namespace = name_space;
        fin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragments")
    {
        fragments = value;
        fragments.value_namespace = name_space;
        fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-input")
    {
        log_input = value;
        log_input.value_namespace = name_space;
        log_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-code")
    {
        msg_code = value;
        msg_code.value_namespace = name_space;
        msg_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-type")
    {
        msg_type = value;
        msg_type.value_namespace = name_space;
        msg_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
        named_msg_type.value_namespace = name_space;
        named_msg_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-group")
    {
        object_group = value;
        object_group.value_namespace = name_space;
        object_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-group-str")
    {
        object_group_str = value;
        object_group_str.value_namespace = name_space;
        object_group_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psh")
    {
        psh = value;
        psh.value_namespace = name_space;
        psh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rst")
    {
        rst = value;
        rst.value_namespace = name_space;
        rst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-eq")
    {
        src_eq = value;
        src_eq.value_namespace = name_space;
        src_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-gt")
    {
        src_gt = value;
        src_gt.value_namespace = name_space;
        src_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-lt")
    {
        src_lt = value;
        src_lt.value_namespace = name_space;
        src_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-neq")
    {
        src_neq = value;
        src_neq.value_namespace = name_space;
        src_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range1")
    {
        src_range1 = value;
        src_range1.value_namespace = name_space;
        src_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range2")
    {
        src_range2 = value;
        src_range2.value_namespace = name_space;
        src_range2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn")
    {
        syn = value;
        syn.value_namespace = name_space;
        syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-range")
    {
        time_range = value;
        time_range.value_namespace = name_space;
        time_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urg")
    {
        urg = value;
        urg.value_namespace = name_space;
        urg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "dest-ipv4-address")
    {
        dest_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "dest-mask")
    {
        dest_mask.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "dst-any")
    {
        dst_any.yfilter = yfilter;
    }
    if(value_path == "dst-eq")
    {
        dst_eq.yfilter = yfilter;
    }
    if(value_path == "dst-gt")
    {
        dst_gt.yfilter = yfilter;
    }
    if(value_path == "dst-host")
    {
        dst_host.yfilter = yfilter;
    }
    if(value_path == "dst-lt")
    {
        dst_lt.yfilter = yfilter;
    }
    if(value_path == "dst-neq")
    {
        dst_neq.yfilter = yfilter;
    }
    if(value_path == "dst-object-group")
    {
        dst_object_group.yfilter = yfilter;
    }
    if(value_path == "dst-range1")
    {
        dst_range1.yfilter = yfilter;
    }
    if(value_path == "dst-range2")
    {
        dst_range2.yfilter = yfilter;
    }
    if(value_path == "established")
    {
        established.yfilter = yfilter;
    }
    if(value_path == "fin")
    {
        fin.yfilter = yfilter;
    }
    if(value_path == "fragments")
    {
        fragments.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "log-input")
    {
        log_input.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "msg-code")
    {
        msg_code.yfilter = yfilter;
    }
    if(value_path == "msg-type")
    {
        msg_type.yfilter = yfilter;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type.yfilter = yfilter;
    }
    if(value_path == "object-group")
    {
        object_group.yfilter = yfilter;
    }
    if(value_path == "object-group-str")
    {
        object_group_str.yfilter = yfilter;
    }
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "psh")
    {
        psh.yfilter = yfilter;
    }
    if(value_path == "rst")
    {
        rst.yfilter = yfilter;
    }
    if(value_path == "src-eq")
    {
        src_eq.yfilter = yfilter;
    }
    if(value_path == "src-gt")
    {
        src_gt.yfilter = yfilter;
    }
    if(value_path == "src-lt")
    {
        src_lt.yfilter = yfilter;
    }
    if(value_path == "src-neq")
    {
        src_neq.yfilter = yfilter;
    }
    if(value_path == "src-range1")
    {
        src_range1.yfilter = yfilter;
    }
    if(value_path == "src-range2")
    {
        src_range2.yfilter = yfilter;
    }
    if(value_path == "syn")
    {
        syn.yfilter = yfilter;
    }
    if(value_path == "time-range")
    {
        time_range.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "urg")
    {
        urg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-all" || name == "match-any" || name == "ttl" || name == "ack" || name == "action" || name == "any" || name == "dest-ipv4-address" || name == "dest-mask" || name == "dscp" || name == "dst-any" || name == "dst-eq" || name == "dst-gt" || name == "dst-host" || name == "dst-lt" || name == "dst-neq" || name == "dst-object-group" || name == "dst-range1" || name == "dst-range2" || name == "established" || name == "fin" || name == "fragments" || name == "host" || name == "ipv4-address" || name == "log" || name == "log-input" || name == "mask" || name == "msg-code" || name == "msg-type" || name == "named-msg-type" || name == "object-group" || name == "object-group-str" || name == "option" || name == "precedence" || name == "protocol" || name == "psh" || name == "rst" || name == "src-eq" || name == "src-gt" || name == "src-lt" || name == "src-neq" || name == "src-range1" || name == "src-range2" || name == "syn" || name == "time-range" || name == "tos" || name == "urg")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::MatchAll()
    :
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"},
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"}
{

    yang_name = "match-all"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::~MatchAll()
{
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::has_data() const
{
    return minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set
	|| plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set;
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minusack.yfilter)
	|| ydk::is_set(minusfin.yfilter)
	|| ydk::is_set(minuspsh.yfilter)
	|| ydk::is_set(minusrst.yfilter)
	|| ydk::is_set(minussyn.yfilter)
	|| ydk::is_set(minusurg.yfilter)
	|| ydk::is_set(plusack.yfilter)
	|| ydk::is_set(plusfin.yfilter)
	|| ydk::is_set(pluspsh.yfilter)
	|| ydk::is_set(plusrst.yfilter)
	|| ydk::is_set(plussyn.yfilter)
	|| ydk::is_set(plusurg.yfilter);
}

std::string Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minusack.is_set || is_set(minusack.yfilter)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.yfilter)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.yfilter)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.yfilter)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.yfilter)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.yfilter)) leaf_name_data.push_back(minusurg.get_name_leafdata());
    if (plusack.is_set || is_set(plusack.yfilter)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.yfilter)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.yfilter)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.yfilter)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.yfilter)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.yfilter)) leaf_name_data.push_back(plusurg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minusack")
    {
        minusack = value;
        minusack.value_namespace = name_space;
        minusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
        minusfin.value_namespace = name_space;
        minusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
        minuspsh.value_namespace = name_space;
        minuspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
        minusrst.value_namespace = name_space;
        minusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
        minussyn.value_namespace = name_space;
        minussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
        minusurg.value_namespace = name_space;
        minusurg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusack")
    {
        plusack = value;
        plusack.value_namespace = name_space;
        plusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
        plusfin.value_namespace = name_space;
        plusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
        pluspsh.value_namespace = name_space;
        pluspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
        plusrst.value_namespace = name_space;
        plusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
        plussyn.value_namespace = name_space;
        plussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
        plusurg.value_namespace = name_space;
        plusurg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minusack")
    {
        minusack.yfilter = yfilter;
    }
    if(value_path == "minusfin")
    {
        minusfin.yfilter = yfilter;
    }
    if(value_path == "minuspsh")
    {
        minuspsh.yfilter = yfilter;
    }
    if(value_path == "minusrst")
    {
        minusrst.yfilter = yfilter;
    }
    if(value_path == "minussyn")
    {
        minussyn.yfilter = yfilter;
    }
    if(value_path == "minusurg")
    {
        minusurg.yfilter = yfilter;
    }
    if(value_path == "plusack")
    {
        plusack.yfilter = yfilter;
    }
    if(value_path == "plusfin")
    {
        plusfin.yfilter = yfilter;
    }
    if(value_path == "pluspsh")
    {
        pluspsh.yfilter = yfilter;
    }
    if(value_path == "plusrst")
    {
        plusrst.yfilter = yfilter;
    }
    if(value_path == "plussyn")
    {
        plussyn.yfilter = yfilter;
    }
    if(value_path == "plusurg")
    {
        plusurg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg" || name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::MatchAny()
    :
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"},
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"}
{

    yang_name = "match-any"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::~MatchAny()
{
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::has_data() const
{
    return minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set
	|| plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set;
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minusack.yfilter)
	|| ydk::is_set(minusfin.yfilter)
	|| ydk::is_set(minuspsh.yfilter)
	|| ydk::is_set(minusrst.yfilter)
	|| ydk::is_set(minussyn.yfilter)
	|| ydk::is_set(minusurg.yfilter)
	|| ydk::is_set(plusack.yfilter)
	|| ydk::is_set(plusfin.yfilter)
	|| ydk::is_set(pluspsh.yfilter)
	|| ydk::is_set(plusrst.yfilter)
	|| ydk::is_set(plussyn.yfilter)
	|| ydk::is_set(plusurg.yfilter);
}

std::string Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minusack.is_set || is_set(minusack.yfilter)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.yfilter)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.yfilter)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.yfilter)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.yfilter)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.yfilter)) leaf_name_data.push_back(minusurg.get_name_leafdata());
    if (plusack.is_set || is_set(plusack.yfilter)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.yfilter)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.yfilter)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.yfilter)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.yfilter)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.yfilter)) leaf_name_data.push_back(plusurg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minusack")
    {
        minusack = value;
        minusack.value_namespace = name_space;
        minusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
        minusfin.value_namespace = name_space;
        minusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
        minuspsh.value_namespace = name_space;
        minuspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
        minusrst.value_namespace = name_space;
        minusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
        minussyn.value_namespace = name_space;
        minussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
        minusurg.value_namespace = name_space;
        minusurg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusack")
    {
        plusack = value;
        plusack.value_namespace = name_space;
        plusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
        plusfin.value_namespace = name_space;
        plusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
        pluspsh.value_namespace = name_space;
        pluspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
        plusrst.value_namespace = name_space;
        plusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
        plussyn.value_namespace = name_space;
        plussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
        plusurg.value_namespace = name_space;
        plusurg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minusack")
    {
        minusack.yfilter = yfilter;
    }
    if(value_path == "minusfin")
    {
        minusfin.yfilter = yfilter;
    }
    if(value_path == "minuspsh")
    {
        minuspsh.yfilter = yfilter;
    }
    if(value_path == "minusrst")
    {
        minusrst.yfilter = yfilter;
    }
    if(value_path == "minussyn")
    {
        minussyn.yfilter = yfilter;
    }
    if(value_path == "minusurg")
    {
        minusurg.yfilter = yfilter;
    }
    if(value_path == "plusack")
    {
        plusack.yfilter = yfilter;
    }
    if(value_path == "plusfin")
    {
        plusfin.yfilter = yfilter;
    }
    if(value_path == "pluspsh")
    {
        pluspsh.yfilter = yfilter;
    }
    if(value_path == "plusrst")
    {
        plusrst.yfilter = yfilter;
    }
    if(value_path == "plussyn")
    {
        plussyn.yfilter = yfilter;
    }
    if(value_path == "plusurg")
    {
        plusurg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::MatchAny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg" || name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Ttl()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"},
    neq{YType::uint8, "neq"}
    	,
    range(std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range>())
{
    range->parent = this;

    yang_name = "ttl"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::~Ttl()
{
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::has_data() const
{
    return eq.is_set
	|| gt.is_set
	|| lt.is_set
	|| neq.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter)
	|| ydk::is_set(neq.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());
    if (neq.is_set || is_set(neq.yfilter)) leaf_name_data.push_back(neq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "neq")
    {
        neq = value;
        neq.value_namespace = name_space;
        neq.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "neq")
    {
        neq.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "eq" || name == "gt" || name == "lt" || name == "neq")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::Range()
    :
    value1{YType::uint8, "value1"},
    value2{YType::uint8, "value2"}
{

    yang_name = "range"; yang_parent_name = "ttl"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::~Range()
{
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::has_data() const
{
    return value1.is_set
	|| value2.is_set;
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value1.yfilter)
	|| ydk::is_set(value2.yfilter);
}

std::string Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value1.is_set || is_set(value1.yfilter)) leaf_name_data.push_back(value1.get_name_leafdata());
    if (value2.is_set || is_set(value2.yfilter)) leaf_name_data.push_back(value2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value1")
    {
        value1 = value;
        value1.value_namespace = name_space;
        value1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value2")
    {
        value2 = value;
        value2.value_namespace = name_space;
        value2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value1")
    {
        value1.yfilter = yfilter;
    }
    if(value_path == "value2")
    {
        value2.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Ttl::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value1" || name == "value2")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default_::Default_()
{

    yang_name = "default"; yang_parent_name = "extended"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Extended::Default_::~Default_()
{
}

bool Native::Ip::AccessList::Extended::Default_::has_data() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::AccessList::Extended::Default_::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::AccessList::Extended::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        for(auto const & c : access_list_seq_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule>();
        c->parent = this;
        access_list_seq_rule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list_seq_rule)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::AccessList::Extended::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AccessList::Extended::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AccessList::Extended::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
    	,
    ace_rule(std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::has_data() const
{
    return sequence.is_set
	|| remark.is_set
	|| (ace_rule !=  nullptr && ace_rule->has_data());
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule" <<"[sequence='" <<sequence <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-rule")
    {
        if(ace_rule == nullptr)
        {
            ace_rule = std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule>();
        }
        return ace_rule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ace_rule != nullptr)
    {
        children["ace-rule"] = ace_rule;
    }

    return children;
}

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-rule" || name == "sequence" || name == "remark")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::AceRule()
    :
    ack{YType::empty, "ack"},
    action{YType::enumeration, "action"},
    any{YType::empty, "any"},
    dest_ipv4_address{YType::str, "dest-ipv4-address"},
    dest_mask{YType::str, "dest-mask"},
    dscp{YType::str, "dscp"},
    dst_any{YType::empty, "dst-any"},
    dst_eq{YType::str, "dst-eq"},
    dst_gt{YType::str, "dst-gt"},
    dst_host{YType::str, "dst-host"},
    dst_lt{YType::str, "dst-lt"},
    dst_neq{YType::str, "dst-neq"},
    dst_object_group{YType::str, "dst-object-group"},
    dst_range1{YType::str, "dst-range1"},
    dst_range2{YType::str, "dst-range2"},
    established{YType::empty, "established"},
    fin{YType::empty, "fin"},
    fragments{YType::empty, "fragments"},
    host{YType::str, "host"},
    ipv4_address{YType::str, "ipv4-address"},
    log{YType::empty, "log"},
    log_input{YType::empty, "log-input"},
    mask{YType::str, "mask"},
    msg_code{YType::uint8, "msg-code"},
    msg_type{YType::uint8, "msg-type"},
    named_msg_type{YType::enumeration, "named-msg-type"},
    object_group{YType::str, "object-group"},
    object_group_str{YType::str, "object-group-str"},
    option{YType::str, "option"},
    precedence{YType::str, "precedence"},
    protocol{YType::str, "protocol"},
    psh{YType::empty, "psh"},
    rst{YType::empty, "rst"},
    src_eq{YType::str, "src-eq"},
    src_gt{YType::str, "src-gt"},
    src_lt{YType::str, "src-lt"},
    src_neq{YType::str, "src-neq"},
    src_range1{YType::str, "src-range1"},
    src_range2{YType::str, "src-range2"},
    syn{YType::empty, "syn"},
    time_range{YType::str, "time-range"},
    tos{YType::str, "tos"},
    urg{YType::empty, "urg"}
    	,
    match_all(std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll>())
	,match_any(std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny>())
	,ttl(std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl>())
{
    match_all->parent = this;
    match_any->parent = this;
    ttl->parent = this;

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::has_data() const
{
    return ack.is_set
	|| action.is_set
	|| any.is_set
	|| dest_ipv4_address.is_set
	|| dest_mask.is_set
	|| dscp.is_set
	|| dst_any.is_set
	|| dst_eq.is_set
	|| dst_gt.is_set
	|| dst_host.is_set
	|| dst_lt.is_set
	|| dst_neq.is_set
	|| dst_object_group.is_set
	|| dst_range1.is_set
	|| dst_range2.is_set
	|| established.is_set
	|| fin.is_set
	|| fragments.is_set
	|| host.is_set
	|| ipv4_address.is_set
	|| log.is_set
	|| log_input.is_set
	|| mask.is_set
	|| msg_code.is_set
	|| msg_type.is_set
	|| named_msg_type.is_set
	|| object_group.is_set
	|| object_group_str.is_set
	|| option.is_set
	|| precedence.is_set
	|| protocol.is_set
	|| psh.is_set
	|| rst.is_set
	|| src_eq.is_set
	|| src_gt.is_set
	|| src_lt.is_set
	|| src_neq.is_set
	|| src_range1.is_set
	|| src_range2.is_set
	|| syn.is_set
	|| time_range.is_set
	|| tos.is_set
	|| urg.is_set
	|| (match_all !=  nullptr && match_all->has_data())
	|| (match_any !=  nullptr && match_any->has_data())
	|| (ttl !=  nullptr && ttl->has_data());
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(dest_ipv4_address.yfilter)
	|| ydk::is_set(dest_mask.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(dst_any.yfilter)
	|| ydk::is_set(dst_eq.yfilter)
	|| ydk::is_set(dst_gt.yfilter)
	|| ydk::is_set(dst_host.yfilter)
	|| ydk::is_set(dst_lt.yfilter)
	|| ydk::is_set(dst_neq.yfilter)
	|| ydk::is_set(dst_object_group.yfilter)
	|| ydk::is_set(dst_range1.yfilter)
	|| ydk::is_set(dst_range2.yfilter)
	|| ydk::is_set(established.yfilter)
	|| ydk::is_set(fin.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(log_input.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(msg_code.yfilter)
	|| ydk::is_set(msg_type.yfilter)
	|| ydk::is_set(named_msg_type.yfilter)
	|| ydk::is_set(object_group.yfilter)
	|| ydk::is_set(object_group_str.yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(psh.yfilter)
	|| ydk::is_set(rst.yfilter)
	|| ydk::is_set(src_eq.yfilter)
	|| ydk::is_set(src_gt.yfilter)
	|| ydk::is_set(src_lt.yfilter)
	|| ydk::is_set(src_neq.yfilter)
	|| ydk::is_set(src_range1.yfilter)
	|| ydk::is_set(src_range2.yfilter)
	|| ydk::is_set(syn.yfilter)
	|| ydk::is_set(time_range.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(urg.yfilter)
	|| (match_all !=  nullptr && match_all->has_operation())
	|| (match_any !=  nullptr && match_any->has_operation())
	|| (ttl !=  nullptr && ttl->has_operation());
}

std::string Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (dest_ipv4_address.is_set || is_set(dest_ipv4_address.yfilter)) leaf_name_data.push_back(dest_ipv4_address.get_name_leafdata());
    if (dest_mask.is_set || is_set(dest_mask.yfilter)) leaf_name_data.push_back(dest_mask.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (dst_any.is_set || is_set(dst_any.yfilter)) leaf_name_data.push_back(dst_any.get_name_leafdata());
    if (dst_eq.is_set || is_set(dst_eq.yfilter)) leaf_name_data.push_back(dst_eq.get_name_leafdata());
    if (dst_gt.is_set || is_set(dst_gt.yfilter)) leaf_name_data.push_back(dst_gt.get_name_leafdata());
    if (dst_host.is_set || is_set(dst_host.yfilter)) leaf_name_data.push_back(dst_host.get_name_leafdata());
    if (dst_lt.is_set || is_set(dst_lt.yfilter)) leaf_name_data.push_back(dst_lt.get_name_leafdata());
    if (dst_neq.is_set || is_set(dst_neq.yfilter)) leaf_name_data.push_back(dst_neq.get_name_leafdata());
    if (dst_object_group.is_set || is_set(dst_object_group.yfilter)) leaf_name_data.push_back(dst_object_group.get_name_leafdata());
    if (dst_range1.is_set || is_set(dst_range1.yfilter)) leaf_name_data.push_back(dst_range1.get_name_leafdata());
    if (dst_range2.is_set || is_set(dst_range2.yfilter)) leaf_name_data.push_back(dst_range2.get_name_leafdata());
    if (established.is_set || is_set(established.yfilter)) leaf_name_data.push_back(established.get_name_leafdata());
    if (fin.is_set || is_set(fin.yfilter)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.yfilter)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.yfilter)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (msg_type.is_set || is_set(msg_type.yfilter)) leaf_name_data.push_back(msg_type.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.yfilter)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());
    if (object_group.is_set || is_set(object_group.yfilter)) leaf_name_data.push_back(object_group.get_name_leafdata());
    if (object_group_str.is_set || is_set(object_group_str.yfilter)) leaf_name_data.push_back(object_group_str.get_name_leafdata());
    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (psh.is_set || is_set(psh.yfilter)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.yfilter)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (src_eq.is_set || is_set(src_eq.yfilter)) leaf_name_data.push_back(src_eq.get_name_leafdata());
    if (src_gt.is_set || is_set(src_gt.yfilter)) leaf_name_data.push_back(src_gt.get_name_leafdata());
    if (src_lt.is_set || is_set(src_lt.yfilter)) leaf_name_data.push_back(src_lt.get_name_leafdata());
    if (src_neq.is_set || is_set(src_neq.yfilter)) leaf_name_data.push_back(src_neq.get_name_leafdata());
    if (src_range1.is_set || is_set(src_range1.yfilter)) leaf_name_data.push_back(src_range1.get_name_leafdata());
    if (src_range2.is_set || is_set(src_range2.yfilter)) leaf_name_data.push_back(src_range2.get_name_leafdata());
    if (syn.is_set || is_set(syn.yfilter)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.yfilter)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (urg.is_set || is_set(urg.yfilter)) leaf_name_data.push_back(urg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match-all")
    {
        if(match_all == nullptr)
        {
            match_all = std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll>();
        }
        return match_all;
    }

    if(child_yang_name == "match-any")
    {
        if(match_any == nullptr)
        {
            match_any = std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny>();
        }
        return match_any;
    }

    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl>();
        }
        return ttl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match_all != nullptr)
    {
        children["match-all"] = match_all;
    }

    if(match_any != nullptr)
    {
        children["match-any"] = match_any;
    }

    if(ttl != nullptr)
    {
        children["ttl"] = ttl;
    }

    return children;
}

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-ipv4-address")
    {
        dest_ipv4_address = value;
        dest_ipv4_address.value_namespace = name_space;
        dest_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dest-mask")
    {
        dest_mask = value;
        dest_mask.value_namespace = name_space;
        dest_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-any")
    {
        dst_any = value;
        dst_any.value_namespace = name_space;
        dst_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-eq")
    {
        dst_eq = value;
        dst_eq.value_namespace = name_space;
        dst_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-gt")
    {
        dst_gt = value;
        dst_gt.value_namespace = name_space;
        dst_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-host")
    {
        dst_host = value;
        dst_host.value_namespace = name_space;
        dst_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-lt")
    {
        dst_lt = value;
        dst_lt.value_namespace = name_space;
        dst_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-neq")
    {
        dst_neq = value;
        dst_neq.value_namespace = name_space;
        dst_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-object-group")
    {
        dst_object_group = value;
        dst_object_group.value_namespace = name_space;
        dst_object_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range1")
    {
        dst_range1 = value;
        dst_range1.value_namespace = name_space;
        dst_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-range2")
    {
        dst_range2 = value;
        dst_range2.value_namespace = name_space;
        dst_range2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established")
    {
        established = value;
        established.value_namespace = name_space;
        established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin")
    {
        fin = value;
        fin.value_namespace = name_space;
        fin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragments")
    {
        fragments = value;
        fragments.value_namespace = name_space;
        fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-input")
    {
        log_input = value;
        log_input.value_namespace = name_space;
        log_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-code")
    {
        msg_code = value;
        msg_code.value_namespace = name_space;
        msg_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-type")
    {
        msg_type = value;
        msg_type.value_namespace = name_space;
        msg_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
        named_msg_type.value_namespace = name_space;
        named_msg_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-group")
    {
        object_group = value;
        object_group.value_namespace = name_space;
        object_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-group-str")
    {
        object_group_str = value;
        object_group_str.value_namespace = name_space;
        object_group_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psh")
    {
        psh = value;
        psh.value_namespace = name_space;
        psh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rst")
    {
        rst = value;
        rst.value_namespace = name_space;
        rst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-eq")
    {
        src_eq = value;
        src_eq.value_namespace = name_space;
        src_eq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-gt")
    {
        src_gt = value;
        src_gt.value_namespace = name_space;
        src_gt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-lt")
    {
        src_lt = value;
        src_lt.value_namespace = name_space;
        src_lt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-neq")
    {
        src_neq = value;
        src_neq.value_namespace = name_space;
        src_neq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range1")
    {
        src_range1 = value;
        src_range1.value_namespace = name_space;
        src_range1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-range2")
    {
        src_range2 = value;
        src_range2.value_namespace = name_space;
        src_range2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn")
    {
        syn = value;
        syn.value_namespace = name_space;
        syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-range")
    {
        time_range = value;
        time_range.value_namespace = name_space;
        time_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urg")
    {
        urg = value;
        urg.value_namespace = name_space;
        urg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "dest-ipv4-address")
    {
        dest_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "dest-mask")
    {
        dest_mask.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "dst-any")
    {
        dst_any.yfilter = yfilter;
    }
    if(value_path == "dst-eq")
    {
        dst_eq.yfilter = yfilter;
    }
    if(value_path == "dst-gt")
    {
        dst_gt.yfilter = yfilter;
    }
    if(value_path == "dst-host")
    {
        dst_host.yfilter = yfilter;
    }
    if(value_path == "dst-lt")
    {
        dst_lt.yfilter = yfilter;
    }
    if(value_path == "dst-neq")
    {
        dst_neq.yfilter = yfilter;
    }
    if(value_path == "dst-object-group")
    {
        dst_object_group.yfilter = yfilter;
    }
    if(value_path == "dst-range1")
    {
        dst_range1.yfilter = yfilter;
    }
    if(value_path == "dst-range2")
    {
        dst_range2.yfilter = yfilter;
    }
    if(value_path == "established")
    {
        established.yfilter = yfilter;
    }
    if(value_path == "fin")
    {
        fin.yfilter = yfilter;
    }
    if(value_path == "fragments")
    {
        fragments.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "log-input")
    {
        log_input.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "msg-code")
    {
        msg_code.yfilter = yfilter;
    }
    if(value_path == "msg-type")
    {
        msg_type.yfilter = yfilter;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type.yfilter = yfilter;
    }
    if(value_path == "object-group")
    {
        object_group.yfilter = yfilter;
    }
    if(value_path == "object-group-str")
    {
        object_group_str.yfilter = yfilter;
    }
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "psh")
    {
        psh.yfilter = yfilter;
    }
    if(value_path == "rst")
    {
        rst.yfilter = yfilter;
    }
    if(value_path == "src-eq")
    {
        src_eq.yfilter = yfilter;
    }
    if(value_path == "src-gt")
    {
        src_gt.yfilter = yfilter;
    }
    if(value_path == "src-lt")
    {
        src_lt.yfilter = yfilter;
    }
    if(value_path == "src-neq")
    {
        src_neq.yfilter = yfilter;
    }
    if(value_path == "src-range1")
    {
        src_range1.yfilter = yfilter;
    }
    if(value_path == "src-range2")
    {
        src_range2.yfilter = yfilter;
    }
    if(value_path == "syn")
    {
        syn.yfilter = yfilter;
    }
    if(value_path == "time-range")
    {
        time_range.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "urg")
    {
        urg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-all" || name == "match-any" || name == "ttl" || name == "ack" || name == "action" || name == "any" || name == "dest-ipv4-address" || name == "dest-mask" || name == "dscp" || name == "dst-any" || name == "dst-eq" || name == "dst-gt" || name == "dst-host" || name == "dst-lt" || name == "dst-neq" || name == "dst-object-group" || name == "dst-range1" || name == "dst-range2" || name == "established" || name == "fin" || name == "fragments" || name == "host" || name == "ipv4-address" || name == "log" || name == "log-input" || name == "mask" || name == "msg-code" || name == "msg-type" || name == "named-msg-type" || name == "object-group" || name == "object-group-str" || name == "option" || name == "precedence" || name == "protocol" || name == "psh" || name == "rst" || name == "src-eq" || name == "src-gt" || name == "src-lt" || name == "src-neq" || name == "src-range1" || name == "src-range2" || name == "syn" || name == "time-range" || name == "tos" || name == "urg")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::MatchAll()
    :
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"},
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"}
{

    yang_name = "match-all"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::~MatchAll()
{
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::has_data() const
{
    return minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set
	|| plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set;
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minusack.yfilter)
	|| ydk::is_set(minusfin.yfilter)
	|| ydk::is_set(minuspsh.yfilter)
	|| ydk::is_set(minusrst.yfilter)
	|| ydk::is_set(minussyn.yfilter)
	|| ydk::is_set(minusurg.yfilter)
	|| ydk::is_set(plusack.yfilter)
	|| ydk::is_set(plusfin.yfilter)
	|| ydk::is_set(pluspsh.yfilter)
	|| ydk::is_set(plusrst.yfilter)
	|| ydk::is_set(plussyn.yfilter)
	|| ydk::is_set(plusurg.yfilter);
}

std::string Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minusack.is_set || is_set(minusack.yfilter)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.yfilter)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.yfilter)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.yfilter)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.yfilter)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.yfilter)) leaf_name_data.push_back(minusurg.get_name_leafdata());
    if (plusack.is_set || is_set(plusack.yfilter)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.yfilter)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.yfilter)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.yfilter)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.yfilter)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.yfilter)) leaf_name_data.push_back(plusurg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minusack")
    {
        minusack = value;
        minusack.value_namespace = name_space;
        minusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
        minusfin.value_namespace = name_space;
        minusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
        minuspsh.value_namespace = name_space;
        minuspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
        minusrst.value_namespace = name_space;
        minusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
        minussyn.value_namespace = name_space;
        minussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
        minusurg.value_namespace = name_space;
        minusurg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusack")
    {
        plusack = value;
        plusack.value_namespace = name_space;
        plusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
        plusfin.value_namespace = name_space;
        plusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
        pluspsh.value_namespace = name_space;
        pluspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
        plusrst.value_namespace = name_space;
        plusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
        plussyn.value_namespace = name_space;
        plussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
        plusurg.value_namespace = name_space;
        plusurg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minusack")
    {
        minusack.yfilter = yfilter;
    }
    if(value_path == "minusfin")
    {
        minusfin.yfilter = yfilter;
    }
    if(value_path == "minuspsh")
    {
        minuspsh.yfilter = yfilter;
    }
    if(value_path == "minusrst")
    {
        minusrst.yfilter = yfilter;
    }
    if(value_path == "minussyn")
    {
        minussyn.yfilter = yfilter;
    }
    if(value_path == "minusurg")
    {
        minusurg.yfilter = yfilter;
    }
    if(value_path == "plusack")
    {
        plusack.yfilter = yfilter;
    }
    if(value_path == "plusfin")
    {
        plusfin.yfilter = yfilter;
    }
    if(value_path == "pluspsh")
    {
        pluspsh.yfilter = yfilter;
    }
    if(value_path == "plusrst")
    {
        plusrst.yfilter = yfilter;
    }
    if(value_path == "plussyn")
    {
        plussyn.yfilter = yfilter;
    }
    if(value_path == "plusurg")
    {
        plusurg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg" || name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::MatchAny()
    :
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"},
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"}
{

    yang_name = "match-any"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::~MatchAny()
{
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::has_data() const
{
    return minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set
	|| plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set;
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minusack.yfilter)
	|| ydk::is_set(minusfin.yfilter)
	|| ydk::is_set(minuspsh.yfilter)
	|| ydk::is_set(minusrst.yfilter)
	|| ydk::is_set(minussyn.yfilter)
	|| ydk::is_set(minusurg.yfilter)
	|| ydk::is_set(plusack.yfilter)
	|| ydk::is_set(plusfin.yfilter)
	|| ydk::is_set(pluspsh.yfilter)
	|| ydk::is_set(plusrst.yfilter)
	|| ydk::is_set(plussyn.yfilter)
	|| ydk::is_set(plusurg.yfilter);
}

std::string Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minusack.is_set || is_set(minusack.yfilter)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.yfilter)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.yfilter)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.yfilter)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.yfilter)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.yfilter)) leaf_name_data.push_back(minusurg.get_name_leafdata());
    if (plusack.is_set || is_set(plusack.yfilter)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.yfilter)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.yfilter)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.yfilter)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.yfilter)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.yfilter)) leaf_name_data.push_back(plusurg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minusack")
    {
        minusack = value;
        minusack.value_namespace = name_space;
        minusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
        minusfin.value_namespace = name_space;
        minusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
        minuspsh.value_namespace = name_space;
        minuspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
        minusrst.value_namespace = name_space;
        minusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
        minussyn.value_namespace = name_space;
        minussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
        minusurg.value_namespace = name_space;
        minusurg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusack")
    {
        plusack = value;
        plusack.value_namespace = name_space;
        plusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
        plusfin.value_namespace = name_space;
        plusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
        pluspsh.value_namespace = name_space;
        pluspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
        plusrst.value_namespace = name_space;
        plusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
        plussyn.value_namespace = name_space;
        plussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
        plusurg.value_namespace = name_space;
        plusurg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minusack")
    {
        minusack.yfilter = yfilter;
    }
    if(value_path == "minusfin")
    {
        minusfin.yfilter = yfilter;
    }
    if(value_path == "minuspsh")
    {
        minuspsh.yfilter = yfilter;
    }
    if(value_path == "minusrst")
    {
        minusrst.yfilter = yfilter;
    }
    if(value_path == "minussyn")
    {
        minussyn.yfilter = yfilter;
    }
    if(value_path == "minusurg")
    {
        minusurg.yfilter = yfilter;
    }
    if(value_path == "plusack")
    {
        plusack.yfilter = yfilter;
    }
    if(value_path == "plusfin")
    {
        plusfin.yfilter = yfilter;
    }
    if(value_path == "pluspsh")
    {
        pluspsh.yfilter = yfilter;
    }
    if(value_path == "plusrst")
    {
        plusrst.yfilter = yfilter;
    }
    if(value_path == "plussyn")
    {
        plussyn.yfilter = yfilter;
    }
    if(value_path == "plusurg")
    {
        plusurg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::MatchAny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg" || name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Ttl()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"},
    neq{YType::uint8, "neq"}
    	,
    range(std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range>())
{
    range->parent = this;

    yang_name = "ttl"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::~Ttl()
{
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::has_data() const
{
    return eq.is_set
	|| gt.is_set
	|| lt.is_set
	|| neq.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter)
	|| ydk::is_set(neq.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());
    if (neq.is_set || is_set(neq.yfilter)) leaf_name_data.push_back(neq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "neq")
    {
        neq = value;
        neq.value_namespace = name_space;
        neq.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "neq")
    {
        neq.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "eq" || name == "gt" || name == "lt" || name == "neq")
        return true;
    return false;
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::Range()
    :
    value1{YType::uint8, "value1"},
    value2{YType::uint8, "value2"}
{

    yang_name = "range"; yang_parent_name = "ttl"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::~Range()
{
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::has_data() const
{
    return value1.is_set
	|| value2.is_set;
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value1.yfilter)
	|| ydk::is_set(value2.yfilter);
}

std::string Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value1.is_set || is_set(value1.yfilter)) leaf_name_data.push_back(value1.get_name_leafdata());
    if (value2.is_set || is_set(value2.yfilter)) leaf_name_data.push_back(value2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value1")
    {
        value1 = value;
        value1.value_namespace = name_space;
        value1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value2")
    {
        value2 = value;
        value2.value_namespace = name_space;
        value2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value1")
    {
        value1.yfilter = yfilter;
    }
    if(value_path == "value2")
    {
        value2.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Ttl::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value1" || name == "value2")
        return true;
    return false;
}

Native::Ip::AccessList::Helper::Helper()
    :
    check{YType::empty, "check"},
    egress{YType::empty, "egress"}
{

    yang_name = "helper"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::AccessList::Helper::~Helper()
{
}

bool Native::Ip::AccessList::Helper::has_data() const
{
    return check.is_set
	|| egress.is_set;
}

bool Native::Ip::AccessList::Helper::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(check.yfilter)
	|| ydk::is_set(egress.yfilter);
}

std::string Native::Ip::AccessList::Helper::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AccessList::Helper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:helper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Helper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (check.is_set || is_set(check.yfilter)) leaf_name_data.push_back(check.get_name_leafdata());
    if (egress.is_set || is_set(egress.yfilter)) leaf_name_data.push_back(egress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Helper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Helper::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Helper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "check")
    {
        check = value;
        check.value_namespace = name_space;
        check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress")
    {
        egress = value;
        egress.value_namespace = name_space;
        egress.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Helper::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "check")
    {
        check.yfilter = yfilter;
    }
    if(value_path == "egress")
    {
        egress.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Helper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "check" || name == "egress")
        return true;
    return false;
}

Native::Ip::AccessList::LogUpdate::LogUpdate()
    :
    threshold{YType::uint64, "threshold"}
{

    yang_name = "log-update"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::AccessList::LogUpdate::~LogUpdate()
{
}

bool Native::Ip::AccessList::LogUpdate::has_data() const
{
    return threshold.is_set;
}

bool Native::Ip::AccessList::LogUpdate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Ip::AccessList::LogUpdate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AccessList::LogUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:log-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::LogUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::LogUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::LogUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::LogUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::LogUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::LogUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Ip::AccessList::Logging::Logging()
    :
    hash_generation{YType::empty, "hash-generation"},
    interval{YType::uint64, "interval"}
{

    yang_name = "logging"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::AccessList::Logging::~Logging()
{
}

bool Native::Ip::AccessList::Logging::has_data() const
{
    return hash_generation.is_set
	|| interval.is_set;
}

bool Native::Ip::AccessList::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hash_generation.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Ip::AccessList::Logging::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AccessList::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hash_generation.is_set || is_set(hash_generation.yfilter)) leaf_name_data.push_back(hash_generation.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hash-generation")
    {
        hash_generation = value;
        hash_generation.value_namespace = name_space;
        hash_generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hash-generation")
    {
        hash_generation.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hash-generation" || name == "interval")
        return true;
    return false;
}

Native::Ip::AccessList::Resequence::Resequence()
    :
    numbers{YType::str, "numbers"},
    start_seq_no{YType::uint64, "start-seq-no"},
    step_seq_no{YType::uint64, "step-seq-no"}
{

    yang_name = "resequence"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::AccessList::Resequence::~Resequence()
{
}

bool Native::Ip::AccessList::Resequence::has_data() const
{
    return numbers.is_set
	|| start_seq_no.is_set
	|| step_seq_no.is_set;
}

bool Native::Ip::AccessList::Resequence::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(numbers.yfilter)
	|| ydk::is_set(start_seq_no.yfilter)
	|| ydk::is_set(step_seq_no.yfilter);
}

std::string Native::Ip::AccessList::Resequence::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AccessList::Resequence::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:resequence";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Resequence::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (numbers.is_set || is_set(numbers.yfilter)) leaf_name_data.push_back(numbers.get_name_leafdata());
    if (start_seq_no.is_set || is_set(start_seq_no.yfilter)) leaf_name_data.push_back(start_seq_no.get_name_leafdata());
    if (step_seq_no.is_set || is_set(step_seq_no.yfilter)) leaf_name_data.push_back(step_seq_no.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Resequence::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Resequence::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Resequence::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "numbers")
    {
        numbers = value;
        numbers.value_namespace = name_space;
        numbers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-seq-no")
    {
        start_seq_no = value;
        start_seq_no.value_namespace = name_space;
        start_seq_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "step-seq-no")
    {
        step_seq_no = value;
        step_seq_no.value_namespace = name_space;
        step_seq_no.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Resequence::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "numbers")
    {
        numbers.yfilter = yfilter;
    }
    if(value_path == "start-seq-no")
    {
        start_seq_no.yfilter = yfilter;
    }
    if(value_path == "step-seq-no")
    {
        step_seq_no.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Resequence::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "numbers" || name == "start-seq-no" || name == "step-seq-no")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::RoleBased()
    :
    name{YType::str, "name"}
    	,
    default_(std::make_shared<Native::Ip::AccessList::RoleBased::Default_>())
{
    default_->parent = this;

    yang_name = "role-based"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::AccessList::RoleBased::~RoleBased()
{
}

bool Native::Ip::AccessList::RoleBased::has_data() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return name.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Ip::AccessList::RoleBased::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AccessList::RoleBased::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:role-based" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        for(auto const & c : access_list_seq_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule>();
        c->parent = this;
        access_list_seq_rule.push_back(c);
        return c;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Ip::AccessList::RoleBased::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list_seq_rule)
    {
        children[c->get_segment_path()] = c;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Ip::AccessList::RoleBased::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule" || name == "default" || name == "name")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
    	,
    ace_rule(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "role-based"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::has_data() const
{
    return sequence.is_set
	|| remark.is_set
	|| (ace_rule !=  nullptr && ace_rule->has_data());
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule" <<"[sequence='" <<sequence <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-rule")
    {
        if(ace_rule == nullptr)
        {
            ace_rule = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule>();
        }
        return ace_rule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ace_rule != nullptr)
    {
        children["ace-rule"] = ace_rule;
    }

    return children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-rule" || name == "sequence" || name == "remark")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::AceRule()
    :
    ack{YType::empty, "ack"},
    action{YType::enumeration, "action"},
    dscp{YType::str, "dscp"},
    established{YType::empty, "established"},
    fin{YType::empty, "fin"},
    fragments{YType::empty, "fragments"},
    log{YType::empty, "log"},
    log_input{YType::empty, "log-input"},
    msg_code{YType::uint8, "msg-code"},
    msg_type{YType::uint8, "msg-type"},
    named_msg_type{YType::enumeration, "named-msg-type"},
    object_group_str{YType::str, "object-group-str"},
    option{YType::str, "option"},
    precedence{YType::str, "precedence"},
    protocol{YType::str, "protocol"},
    psh{YType::empty, "psh"},
    rst{YType::empty, "rst"},
    syn{YType::empty, "syn"},
    time_range{YType::str, "time-range"},
    tos{YType::str, "tos"},
    urg{YType::empty, "urg"}
    	,
    match_all(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll>())
	,match_any(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny>())
	,ttl(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl>())
{
    match_all->parent = this;
    match_any->parent = this;
    ttl->parent = this;

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::has_data() const
{
    return ack.is_set
	|| action.is_set
	|| dscp.is_set
	|| established.is_set
	|| fin.is_set
	|| fragments.is_set
	|| log.is_set
	|| log_input.is_set
	|| msg_code.is_set
	|| msg_type.is_set
	|| named_msg_type.is_set
	|| object_group_str.is_set
	|| option.is_set
	|| precedence.is_set
	|| protocol.is_set
	|| psh.is_set
	|| rst.is_set
	|| syn.is_set
	|| time_range.is_set
	|| tos.is_set
	|| urg.is_set
	|| (match_all !=  nullptr && match_all->has_data())
	|| (match_any !=  nullptr && match_any->has_data())
	|| (ttl !=  nullptr && ttl->has_data());
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(established.yfilter)
	|| ydk::is_set(fin.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(log_input.yfilter)
	|| ydk::is_set(msg_code.yfilter)
	|| ydk::is_set(msg_type.yfilter)
	|| ydk::is_set(named_msg_type.yfilter)
	|| ydk::is_set(object_group_str.yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(psh.yfilter)
	|| ydk::is_set(rst.yfilter)
	|| ydk::is_set(syn.yfilter)
	|| ydk::is_set(time_range.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(urg.yfilter)
	|| (match_all !=  nullptr && match_all->has_operation())
	|| (match_any !=  nullptr && match_any->has_operation())
	|| (ttl !=  nullptr && ttl->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (established.is_set || is_set(established.yfilter)) leaf_name_data.push_back(established.get_name_leafdata());
    if (fin.is_set || is_set(fin.yfilter)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.yfilter)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.yfilter)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (msg_type.is_set || is_set(msg_type.yfilter)) leaf_name_data.push_back(msg_type.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.yfilter)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());
    if (object_group_str.is_set || is_set(object_group_str.yfilter)) leaf_name_data.push_back(object_group_str.get_name_leafdata());
    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (psh.is_set || is_set(psh.yfilter)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.yfilter)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (syn.is_set || is_set(syn.yfilter)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.yfilter)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (urg.is_set || is_set(urg.yfilter)) leaf_name_data.push_back(urg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match-all")
    {
        if(match_all == nullptr)
        {
            match_all = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll>();
        }
        return match_all;
    }

    if(child_yang_name == "match-any")
    {
        if(match_any == nullptr)
        {
            match_any = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny>();
        }
        return match_any;
    }

    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl>();
        }
        return ttl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match_all != nullptr)
    {
        children["match-all"] = match_all;
    }

    if(match_any != nullptr)
    {
        children["match-any"] = match_any;
    }

    if(ttl != nullptr)
    {
        children["ttl"] = ttl;
    }

    return children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established")
    {
        established = value;
        established.value_namespace = name_space;
        established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin")
    {
        fin = value;
        fin.value_namespace = name_space;
        fin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragments")
    {
        fragments = value;
        fragments.value_namespace = name_space;
        fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-input")
    {
        log_input = value;
        log_input.value_namespace = name_space;
        log_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-code")
    {
        msg_code = value;
        msg_code.value_namespace = name_space;
        msg_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-type")
    {
        msg_type = value;
        msg_type.value_namespace = name_space;
        msg_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
        named_msg_type.value_namespace = name_space;
        named_msg_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-group-str")
    {
        object_group_str = value;
        object_group_str.value_namespace = name_space;
        object_group_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psh")
    {
        psh = value;
        psh.value_namespace = name_space;
        psh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rst")
    {
        rst = value;
        rst.value_namespace = name_space;
        rst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn")
    {
        syn = value;
        syn.value_namespace = name_space;
        syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-range")
    {
        time_range = value;
        time_range.value_namespace = name_space;
        time_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urg")
    {
        urg = value;
        urg.value_namespace = name_space;
        urg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "established")
    {
        established.yfilter = yfilter;
    }
    if(value_path == "fin")
    {
        fin.yfilter = yfilter;
    }
    if(value_path == "fragments")
    {
        fragments.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "log-input")
    {
        log_input.yfilter = yfilter;
    }
    if(value_path == "msg-code")
    {
        msg_code.yfilter = yfilter;
    }
    if(value_path == "msg-type")
    {
        msg_type.yfilter = yfilter;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type.yfilter = yfilter;
    }
    if(value_path == "object-group-str")
    {
        object_group_str.yfilter = yfilter;
    }
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "psh")
    {
        psh.yfilter = yfilter;
    }
    if(value_path == "rst")
    {
        rst.yfilter = yfilter;
    }
    if(value_path == "syn")
    {
        syn.yfilter = yfilter;
    }
    if(value_path == "time-range")
    {
        time_range.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "urg")
    {
        urg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-all" || name == "match-any" || name == "ttl" || name == "ack" || name == "action" || name == "dscp" || name == "established" || name == "fin" || name == "fragments" || name == "log" || name == "log-input" || name == "msg-code" || name == "msg-type" || name == "named-msg-type" || name == "object-group-str" || name == "option" || name == "precedence" || name == "protocol" || name == "psh" || name == "rst" || name == "syn" || name == "time-range" || name == "tos" || name == "urg")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::MatchAll()
    :
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"},
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"}
{

    yang_name = "match-all"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::~MatchAll()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::has_data() const
{
    return minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set
	|| plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set;
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minusack.yfilter)
	|| ydk::is_set(minusfin.yfilter)
	|| ydk::is_set(minuspsh.yfilter)
	|| ydk::is_set(minusrst.yfilter)
	|| ydk::is_set(minussyn.yfilter)
	|| ydk::is_set(minusurg.yfilter)
	|| ydk::is_set(plusack.yfilter)
	|| ydk::is_set(plusfin.yfilter)
	|| ydk::is_set(pluspsh.yfilter)
	|| ydk::is_set(plusrst.yfilter)
	|| ydk::is_set(plussyn.yfilter)
	|| ydk::is_set(plusurg.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minusack.is_set || is_set(minusack.yfilter)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.yfilter)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.yfilter)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.yfilter)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.yfilter)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.yfilter)) leaf_name_data.push_back(minusurg.get_name_leafdata());
    if (plusack.is_set || is_set(plusack.yfilter)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.yfilter)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.yfilter)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.yfilter)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.yfilter)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.yfilter)) leaf_name_data.push_back(plusurg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minusack")
    {
        minusack = value;
        minusack.value_namespace = name_space;
        minusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
        minusfin.value_namespace = name_space;
        minusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
        minuspsh.value_namespace = name_space;
        minuspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
        minusrst.value_namespace = name_space;
        minusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
        minussyn.value_namespace = name_space;
        minussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
        minusurg.value_namespace = name_space;
        minusurg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusack")
    {
        plusack = value;
        plusack.value_namespace = name_space;
        plusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
        plusfin.value_namespace = name_space;
        plusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
        pluspsh.value_namespace = name_space;
        pluspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
        plusrst.value_namespace = name_space;
        plusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
        plussyn.value_namespace = name_space;
        plussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
        plusurg.value_namespace = name_space;
        plusurg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minusack")
    {
        minusack.yfilter = yfilter;
    }
    if(value_path == "minusfin")
    {
        minusfin.yfilter = yfilter;
    }
    if(value_path == "minuspsh")
    {
        minuspsh.yfilter = yfilter;
    }
    if(value_path == "minusrst")
    {
        minusrst.yfilter = yfilter;
    }
    if(value_path == "minussyn")
    {
        minussyn.yfilter = yfilter;
    }
    if(value_path == "minusurg")
    {
        minusurg.yfilter = yfilter;
    }
    if(value_path == "plusack")
    {
        plusack.yfilter = yfilter;
    }
    if(value_path == "plusfin")
    {
        plusfin.yfilter = yfilter;
    }
    if(value_path == "pluspsh")
    {
        pluspsh.yfilter = yfilter;
    }
    if(value_path == "plusrst")
    {
        plusrst.yfilter = yfilter;
    }
    if(value_path == "plussyn")
    {
        plussyn.yfilter = yfilter;
    }
    if(value_path == "plusurg")
    {
        plusurg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg" || name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::MatchAny()
    :
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"},
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"}
{

    yang_name = "match-any"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::~MatchAny()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::has_data() const
{
    return minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set
	|| plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set;
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minusack.yfilter)
	|| ydk::is_set(minusfin.yfilter)
	|| ydk::is_set(minuspsh.yfilter)
	|| ydk::is_set(minusrst.yfilter)
	|| ydk::is_set(minussyn.yfilter)
	|| ydk::is_set(minusurg.yfilter)
	|| ydk::is_set(plusack.yfilter)
	|| ydk::is_set(plusfin.yfilter)
	|| ydk::is_set(pluspsh.yfilter)
	|| ydk::is_set(plusrst.yfilter)
	|| ydk::is_set(plussyn.yfilter)
	|| ydk::is_set(plusurg.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minusack.is_set || is_set(minusack.yfilter)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.yfilter)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.yfilter)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.yfilter)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.yfilter)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.yfilter)) leaf_name_data.push_back(minusurg.get_name_leafdata());
    if (plusack.is_set || is_set(plusack.yfilter)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.yfilter)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.yfilter)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.yfilter)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.yfilter)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.yfilter)) leaf_name_data.push_back(plusurg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minusack")
    {
        minusack = value;
        minusack.value_namespace = name_space;
        minusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
        minusfin.value_namespace = name_space;
        minusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
        minuspsh.value_namespace = name_space;
        minuspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
        minusrst.value_namespace = name_space;
        minusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
        minussyn.value_namespace = name_space;
        minussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
        minusurg.value_namespace = name_space;
        minusurg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusack")
    {
        plusack = value;
        plusack.value_namespace = name_space;
        plusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
        plusfin.value_namespace = name_space;
        plusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
        pluspsh.value_namespace = name_space;
        pluspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
        plusrst.value_namespace = name_space;
        plusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
        plussyn.value_namespace = name_space;
        plussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
        plusurg.value_namespace = name_space;
        plusurg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minusack")
    {
        minusack.yfilter = yfilter;
    }
    if(value_path == "minusfin")
    {
        minusfin.yfilter = yfilter;
    }
    if(value_path == "minuspsh")
    {
        minuspsh.yfilter = yfilter;
    }
    if(value_path == "minusrst")
    {
        minusrst.yfilter = yfilter;
    }
    if(value_path == "minussyn")
    {
        minussyn.yfilter = yfilter;
    }
    if(value_path == "minusurg")
    {
        minusurg.yfilter = yfilter;
    }
    if(value_path == "plusack")
    {
        plusack.yfilter = yfilter;
    }
    if(value_path == "plusfin")
    {
        plusfin.yfilter = yfilter;
    }
    if(value_path == "pluspsh")
    {
        pluspsh.yfilter = yfilter;
    }
    if(value_path == "plusrst")
    {
        plusrst.yfilter = yfilter;
    }
    if(value_path == "plussyn")
    {
        plussyn.yfilter = yfilter;
    }
    if(value_path == "plusurg")
    {
        plusurg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::MatchAny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg" || name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Ttl()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"},
    neq{YType::uint8, "neq"}
    	,
    range(std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range>())
{
    range->parent = this;

    yang_name = "ttl"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::~Ttl()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::has_data() const
{
    return eq.is_set
	|| gt.is_set
	|| lt.is_set
	|| neq.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter)
	|| ydk::is_set(neq.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());
    if (neq.is_set || is_set(neq.yfilter)) leaf_name_data.push_back(neq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "neq")
    {
        neq = value;
        neq.value_namespace = name_space;
        neq.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "neq")
    {
        neq.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "eq" || name == "gt" || name == "lt" || name == "neq")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::Range()
    :
    value1{YType::uint8, "value1"},
    value2{YType::uint8, "value2"}
{

    yang_name = "range"; yang_parent_name = "ttl"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::~Range()
{
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::has_data() const
{
    return value1.is_set
	|| value2.is_set;
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value1.yfilter)
	|| ydk::is_set(value2.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value1.is_set || is_set(value1.yfilter)) leaf_name_data.push_back(value1.get_name_leafdata());
    if (value2.is_set || is_set(value2.yfilter)) leaf_name_data.push_back(value2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value1")
    {
        value1 = value;
        value1.value_namespace = name_space;
        value1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value2")
    {
        value2 = value;
        value2.value_namespace = name_space;
        value2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value1")
    {
        value1.yfilter = yfilter;
    }
    if(value_path == "value2")
    {
        value2.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Ttl::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value1" || name == "value2")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default_::Default_()
{

    yang_name = "default"; yang_parent_name = "role-based"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::RoleBased::Default_::~Default_()
{
}

bool Native::Ip::AccessList::RoleBased::Default_::has_data() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::AccessList::RoleBased::Default_::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::AccessList::RoleBased::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        for(auto const & c : access_list_seq_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule>();
        c->parent = this;
        access_list_seq_rule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list_seq_rule)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::AccessList::RoleBased::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AccessList::RoleBased::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AccessList::RoleBased::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
    	,
    ace_rule(std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule>())
{
    ace_rule->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::has_data() const
{
    return sequence.is_set
	|| remark.is_set
	|| (ace_rule !=  nullptr && ace_rule->has_data());
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (ace_rule !=  nullptr && ace_rule->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule" <<"[sequence='" <<sequence <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ace-rule")
    {
        if(ace_rule == nullptr)
        {
            ace_rule = std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule>();
        }
        return ace_rule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ace_rule != nullptr)
    {
        children["ace-rule"] = ace_rule;
    }

    return children;
}

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ace-rule" || name == "sequence" || name == "remark")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::AceRule()
    :
    ack{YType::empty, "ack"},
    action{YType::enumeration, "action"},
    dscp{YType::str, "dscp"},
    established{YType::empty, "established"},
    fin{YType::empty, "fin"},
    fragments{YType::empty, "fragments"},
    log{YType::empty, "log"},
    log_input{YType::empty, "log-input"},
    msg_code{YType::uint8, "msg-code"},
    msg_type{YType::uint8, "msg-type"},
    named_msg_type{YType::enumeration, "named-msg-type"},
    object_group_str{YType::str, "object-group-str"},
    option{YType::str, "option"},
    precedence{YType::str, "precedence"},
    protocol{YType::str, "protocol"},
    psh{YType::empty, "psh"},
    rst{YType::empty, "rst"},
    syn{YType::empty, "syn"},
    time_range{YType::str, "time-range"},
    tos{YType::str, "tos"},
    urg{YType::empty, "urg"}
    	,
    match_all(std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll>())
	,match_any(std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny>())
	,ttl(std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl>())
{
    match_all->parent = this;
    match_any->parent = this;
    ttl->parent = this;

    yang_name = "ace-rule"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::~AceRule()
{
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::has_data() const
{
    return ack.is_set
	|| action.is_set
	|| dscp.is_set
	|| established.is_set
	|| fin.is_set
	|| fragments.is_set
	|| log.is_set
	|| log_input.is_set
	|| msg_code.is_set
	|| msg_type.is_set
	|| named_msg_type.is_set
	|| object_group_str.is_set
	|| option.is_set
	|| precedence.is_set
	|| protocol.is_set
	|| psh.is_set
	|| rst.is_set
	|| syn.is_set
	|| time_range.is_set
	|| tos.is_set
	|| urg.is_set
	|| (match_all !=  nullptr && match_all->has_data())
	|| (match_any !=  nullptr && match_any->has_data())
	|| (ttl !=  nullptr && ttl->has_data());
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ack.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(established.yfilter)
	|| ydk::is_set(fin.yfilter)
	|| ydk::is_set(fragments.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(log_input.yfilter)
	|| ydk::is_set(msg_code.yfilter)
	|| ydk::is_set(msg_type.yfilter)
	|| ydk::is_set(named_msg_type.yfilter)
	|| ydk::is_set(object_group_str.yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(precedence.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(psh.yfilter)
	|| ydk::is_set(rst.yfilter)
	|| ydk::is_set(syn.yfilter)
	|| ydk::is_set(time_range.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(urg.yfilter)
	|| (match_all !=  nullptr && match_all->has_operation())
	|| (match_any !=  nullptr && match_any->has_operation())
	|| (ttl !=  nullptr && ttl->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ace-rule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack.is_set || is_set(ack.yfilter)) leaf_name_data.push_back(ack.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (established.is_set || is_set(established.yfilter)) leaf_name_data.push_back(established.get_name_leafdata());
    if (fin.is_set || is_set(fin.yfilter)) leaf_name_data.push_back(fin.get_name_leafdata());
    if (fragments.is_set || is_set(fragments.yfilter)) leaf_name_data.push_back(fragments.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (log_input.is_set || is_set(log_input.yfilter)) leaf_name_data.push_back(log_input.get_name_leafdata());
    if (msg_code.is_set || is_set(msg_code.yfilter)) leaf_name_data.push_back(msg_code.get_name_leafdata());
    if (msg_type.is_set || is_set(msg_type.yfilter)) leaf_name_data.push_back(msg_type.get_name_leafdata());
    if (named_msg_type.is_set || is_set(named_msg_type.yfilter)) leaf_name_data.push_back(named_msg_type.get_name_leafdata());
    if (object_group_str.is_set || is_set(object_group_str.yfilter)) leaf_name_data.push_back(object_group_str.get_name_leafdata());
    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (psh.is_set || is_set(psh.yfilter)) leaf_name_data.push_back(psh.get_name_leafdata());
    if (rst.is_set || is_set(rst.yfilter)) leaf_name_data.push_back(rst.get_name_leafdata());
    if (syn.is_set || is_set(syn.yfilter)) leaf_name_data.push_back(syn.get_name_leafdata());
    if (time_range.is_set || is_set(time_range.yfilter)) leaf_name_data.push_back(time_range.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (urg.is_set || is_set(urg.yfilter)) leaf_name_data.push_back(urg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match-all")
    {
        if(match_all == nullptr)
        {
            match_all = std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll>();
        }
        return match_all;
    }

    if(child_yang_name == "match-any")
    {
        if(match_any == nullptr)
        {
            match_any = std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny>();
        }
        return match_any;
    }

    if(child_yang_name == "ttl")
    {
        if(ttl == nullptr)
        {
            ttl = std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl>();
        }
        return ttl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match_all != nullptr)
    {
        children["match-all"] = match_all;
    }

    if(match_any != nullptr)
    {
        children["match-any"] = match_any;
    }

    if(ttl != nullptr)
    {
        children["ttl"] = ttl;
    }

    return children;
}

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ack")
    {
        ack = value;
        ack.value_namespace = name_space;
        ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "established")
    {
        established = value;
        established.value_namespace = name_space;
        established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fin")
    {
        fin = value;
        fin.value_namespace = name_space;
        fin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fragments")
    {
        fragments = value;
        fragments.value_namespace = name_space;
        fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-input")
    {
        log_input = value;
        log_input.value_namespace = name_space;
        log_input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-code")
    {
        msg_code = value;
        msg_code.value_namespace = name_space;
        msg_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-type")
    {
        msg_type = value;
        msg_type.value_namespace = name_space;
        msg_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type = value;
        named_msg_type.value_namespace = name_space;
        named_msg_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "object-group-str")
    {
        object_group_str = value;
        object_group_str.value_namespace = name_space;
        object_group_str.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psh")
    {
        psh = value;
        psh.value_namespace = name_space;
        psh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rst")
    {
        rst = value;
        rst.value_namespace = name_space;
        rst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syn")
    {
        syn = value;
        syn.value_namespace = name_space;
        syn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-range")
    {
        time_range = value;
        time_range.value_namespace = name_space;
        time_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "urg")
    {
        urg = value;
        urg.value_namespace = name_space;
        urg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ack")
    {
        ack.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "dscp")
    {
        dscp.yfilter = yfilter;
    }
    if(value_path == "established")
    {
        established.yfilter = yfilter;
    }
    if(value_path == "fin")
    {
        fin.yfilter = yfilter;
    }
    if(value_path == "fragments")
    {
        fragments.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "log-input")
    {
        log_input.yfilter = yfilter;
    }
    if(value_path == "msg-code")
    {
        msg_code.yfilter = yfilter;
    }
    if(value_path == "msg-type")
    {
        msg_type.yfilter = yfilter;
    }
    if(value_path == "named-msg-type")
    {
        named_msg_type.yfilter = yfilter;
    }
    if(value_path == "object-group-str")
    {
        object_group_str.yfilter = yfilter;
    }
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "precedence")
    {
        precedence.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "psh")
    {
        psh.yfilter = yfilter;
    }
    if(value_path == "rst")
    {
        rst.yfilter = yfilter;
    }
    if(value_path == "syn")
    {
        syn.yfilter = yfilter;
    }
    if(value_path == "time-range")
    {
        time_range.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "urg")
    {
        urg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-all" || name == "match-any" || name == "ttl" || name == "ack" || name == "action" || name == "dscp" || name == "established" || name == "fin" || name == "fragments" || name == "log" || name == "log-input" || name == "msg-code" || name == "msg-type" || name == "named-msg-type" || name == "object-group-str" || name == "option" || name == "precedence" || name == "protocol" || name == "psh" || name == "rst" || name == "syn" || name == "time-range" || name == "tos" || name == "urg")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::MatchAll()
    :
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"},
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"}
{

    yang_name = "match-all"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::~MatchAll()
{
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::has_data() const
{
    return minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set
	|| plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set;
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minusack.yfilter)
	|| ydk::is_set(minusfin.yfilter)
	|| ydk::is_set(minuspsh.yfilter)
	|| ydk::is_set(minusrst.yfilter)
	|| ydk::is_set(minussyn.yfilter)
	|| ydk::is_set(minusurg.yfilter)
	|| ydk::is_set(plusack.yfilter)
	|| ydk::is_set(plusfin.yfilter)
	|| ydk::is_set(pluspsh.yfilter)
	|| ydk::is_set(plusrst.yfilter)
	|| ydk::is_set(plussyn.yfilter)
	|| ydk::is_set(plusurg.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minusack.is_set || is_set(minusack.yfilter)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.yfilter)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.yfilter)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.yfilter)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.yfilter)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.yfilter)) leaf_name_data.push_back(minusurg.get_name_leafdata());
    if (plusack.is_set || is_set(plusack.yfilter)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.yfilter)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.yfilter)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.yfilter)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.yfilter)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.yfilter)) leaf_name_data.push_back(plusurg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minusack")
    {
        minusack = value;
        minusack.value_namespace = name_space;
        minusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
        minusfin.value_namespace = name_space;
        minusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
        minuspsh.value_namespace = name_space;
        minuspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
        minusrst.value_namespace = name_space;
        minusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
        minussyn.value_namespace = name_space;
        minussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
        minusurg.value_namespace = name_space;
        minusurg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusack")
    {
        plusack = value;
        plusack.value_namespace = name_space;
        plusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
        plusfin.value_namespace = name_space;
        plusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
        pluspsh.value_namespace = name_space;
        pluspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
        plusrst.value_namespace = name_space;
        plusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
        plussyn.value_namespace = name_space;
        plussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
        plusurg.value_namespace = name_space;
        plusurg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minusack")
    {
        minusack.yfilter = yfilter;
    }
    if(value_path == "minusfin")
    {
        minusfin.yfilter = yfilter;
    }
    if(value_path == "minuspsh")
    {
        minuspsh.yfilter = yfilter;
    }
    if(value_path == "minusrst")
    {
        minusrst.yfilter = yfilter;
    }
    if(value_path == "minussyn")
    {
        minussyn.yfilter = yfilter;
    }
    if(value_path == "minusurg")
    {
        minusurg.yfilter = yfilter;
    }
    if(value_path == "plusack")
    {
        plusack.yfilter = yfilter;
    }
    if(value_path == "plusfin")
    {
        plusfin.yfilter = yfilter;
    }
    if(value_path == "pluspsh")
    {
        pluspsh.yfilter = yfilter;
    }
    if(value_path == "plusrst")
    {
        plusrst.yfilter = yfilter;
    }
    if(value_path == "plussyn")
    {
        plussyn.yfilter = yfilter;
    }
    if(value_path == "plusurg")
    {
        plusurg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg" || name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::MatchAny()
    :
    minusack{YType::empty, "minusack"},
    minusfin{YType::empty, "minusfin"},
    minuspsh{YType::empty, "minuspsh"},
    minusrst{YType::empty, "minusrst"},
    minussyn{YType::empty, "minussyn"},
    minusurg{YType::empty, "minusurg"},
    plusack{YType::empty, "plusack"},
    plusfin{YType::empty, "plusfin"},
    pluspsh{YType::empty, "pluspsh"},
    plusrst{YType::empty, "plusrst"},
    plussyn{YType::empty, "plussyn"},
    plusurg{YType::empty, "plusurg"}
{

    yang_name = "match-any"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::~MatchAny()
{
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::has_data() const
{
    return minusack.is_set
	|| minusfin.is_set
	|| minuspsh.is_set
	|| minusrst.is_set
	|| minussyn.is_set
	|| minusurg.is_set
	|| plusack.is_set
	|| plusfin.is_set
	|| pluspsh.is_set
	|| plusrst.is_set
	|| plussyn.is_set
	|| plusurg.is_set;
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minusack.yfilter)
	|| ydk::is_set(minusfin.yfilter)
	|| ydk::is_set(minuspsh.yfilter)
	|| ydk::is_set(minusrst.yfilter)
	|| ydk::is_set(minussyn.yfilter)
	|| ydk::is_set(minusurg.yfilter)
	|| ydk::is_set(plusack.yfilter)
	|| ydk::is_set(plusfin.yfilter)
	|| ydk::is_set(pluspsh.yfilter)
	|| ydk::is_set(plusrst.yfilter)
	|| ydk::is_set(plussyn.yfilter)
	|| ydk::is_set(plusurg.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-any";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minusack.is_set || is_set(minusack.yfilter)) leaf_name_data.push_back(minusack.get_name_leafdata());
    if (minusfin.is_set || is_set(minusfin.yfilter)) leaf_name_data.push_back(minusfin.get_name_leafdata());
    if (minuspsh.is_set || is_set(minuspsh.yfilter)) leaf_name_data.push_back(minuspsh.get_name_leafdata());
    if (minusrst.is_set || is_set(minusrst.yfilter)) leaf_name_data.push_back(minusrst.get_name_leafdata());
    if (minussyn.is_set || is_set(minussyn.yfilter)) leaf_name_data.push_back(minussyn.get_name_leafdata());
    if (minusurg.is_set || is_set(minusurg.yfilter)) leaf_name_data.push_back(minusurg.get_name_leafdata());
    if (plusack.is_set || is_set(plusack.yfilter)) leaf_name_data.push_back(plusack.get_name_leafdata());
    if (plusfin.is_set || is_set(plusfin.yfilter)) leaf_name_data.push_back(plusfin.get_name_leafdata());
    if (pluspsh.is_set || is_set(pluspsh.yfilter)) leaf_name_data.push_back(pluspsh.get_name_leafdata());
    if (plusrst.is_set || is_set(plusrst.yfilter)) leaf_name_data.push_back(plusrst.get_name_leafdata());
    if (plussyn.is_set || is_set(plussyn.yfilter)) leaf_name_data.push_back(plussyn.get_name_leafdata());
    if (plusurg.is_set || is_set(plusurg.yfilter)) leaf_name_data.push_back(plusurg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minusack")
    {
        minusack = value;
        minusack.value_namespace = name_space;
        minusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusfin")
    {
        minusfin = value;
        minusfin.value_namespace = name_space;
        minusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minuspsh")
    {
        minuspsh = value;
        minuspsh.value_namespace = name_space;
        minuspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusrst")
    {
        minusrst = value;
        minusrst.value_namespace = name_space;
        minusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minussyn")
    {
        minussyn = value;
        minussyn.value_namespace = name_space;
        minussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minusurg")
    {
        minusurg = value;
        minusurg.value_namespace = name_space;
        minusurg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusack")
    {
        plusack = value;
        plusack.value_namespace = name_space;
        plusack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusfin")
    {
        plusfin = value;
        plusfin.value_namespace = name_space;
        plusfin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pluspsh")
    {
        pluspsh = value;
        pluspsh.value_namespace = name_space;
        pluspsh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusrst")
    {
        plusrst = value;
        plusrst.value_namespace = name_space;
        plusrst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plussyn")
    {
        plussyn = value;
        plussyn.value_namespace = name_space;
        plussyn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plusurg")
    {
        plusurg = value;
        plusurg.value_namespace = name_space;
        plusurg.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minusack")
    {
        minusack.yfilter = yfilter;
    }
    if(value_path == "minusfin")
    {
        minusfin.yfilter = yfilter;
    }
    if(value_path == "minuspsh")
    {
        minuspsh.yfilter = yfilter;
    }
    if(value_path == "minusrst")
    {
        minusrst.yfilter = yfilter;
    }
    if(value_path == "minussyn")
    {
        minussyn.yfilter = yfilter;
    }
    if(value_path == "minusurg")
    {
        minusurg.yfilter = yfilter;
    }
    if(value_path == "plusack")
    {
        plusack.yfilter = yfilter;
    }
    if(value_path == "plusfin")
    {
        plusfin.yfilter = yfilter;
    }
    if(value_path == "pluspsh")
    {
        pluspsh.yfilter = yfilter;
    }
    if(value_path == "plusrst")
    {
        plusrst.yfilter = yfilter;
    }
    if(value_path == "plussyn")
    {
        plussyn.yfilter = yfilter;
    }
    if(value_path == "plusurg")
    {
        plusurg.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::MatchAny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minusack" || name == "minusfin" || name == "minuspsh" || name == "minusrst" || name == "minussyn" || name == "minusurg" || name == "plusack" || name == "plusfin" || name == "pluspsh" || name == "plusrst" || name == "plussyn" || name == "plusurg")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Ttl()
    :
    eq{YType::uint8, "eq"},
    gt{YType::uint8, "gt"},
    lt{YType::uint8, "lt"},
    neq{YType::uint8, "neq"}
    	,
    range(std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range>())
{
    range->parent = this;

    yang_name = "ttl"; yang_parent_name = "ace-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::~Ttl()
{
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::has_data() const
{
    return eq.is_set
	|| gt.is_set
	|| lt.is_set
	|| neq.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eq.yfilter)
	|| ydk::is_set(gt.yfilter)
	|| ydk::is_set(lt.yfilter)
	|| ydk::is_set(neq.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eq.is_set || is_set(eq.yfilter)) leaf_name_data.push_back(eq.get_name_leafdata());
    if (gt.is_set || is_set(gt.yfilter)) leaf_name_data.push_back(gt.get_name_leafdata());
    if (lt.is_set || is_set(lt.yfilter)) leaf_name_data.push_back(lt.get_name_leafdata());
    if (neq.is_set || is_set(neq.yfilter)) leaf_name_data.push_back(neq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "neq")
    {
        neq = value;
        neq.value_namespace = name_space;
        neq.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "neq")
    {
        neq.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "eq" || name == "gt" || name == "lt" || name == "neq")
        return true;
    return false;
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::Range()
    :
    value1{YType::uint8, "value1"},
    value2{YType::uint8, "value2"}
{

    yang_name = "range"; yang_parent_name = "ttl"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::~Range()
{
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::has_data() const
{
    return value1.is_set
	|| value2.is_set;
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value1.yfilter)
	|| ydk::is_set(value2.yfilter);
}

std::string Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value1.is_set || is_set(value1.yfilter)) leaf_name_data.push_back(value1.get_name_leafdata());
    if (value2.is_set || is_set(value2.yfilter)) leaf_name_data.push_back(value2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value1")
    {
        value1 = value;
        value1.value_namespace = name_space;
        value1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value2")
    {
        value2 = value;
        value2.value_namespace = name_space;
        value2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value1")
    {
        value1.yfilter = yfilter;
    }
    if(value_path == "value2")
    {
        value2.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Ttl::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value1" || name == "value2")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::Standard()
    :
    name{YType::str, "name"}
    	,
    default_(std::make_shared<Native::Ip::AccessList::Standard::Default_>())
{
    default_->parent = this;

    yang_name = "standard"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::AccessList::Standard::~Standard()
{
}

bool Native::Ip::AccessList::Standard::has_data() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return name.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Ip::AccessList::Standard::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Ip::AccessList::Standard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/access-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AccessList::Standard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-acl:standard" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        for(auto const & c : access_list_seq_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule>();
        c->parent = this;
        access_list_seq_rule.push_back(c);
        return c;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Ip::AccessList::Standard::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list_seq_rule)
    {
        children[c->get_segment_path()] = c;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Ip::AccessList::Standard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Standard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Standard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule" || name == "default" || name == "name")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
    	,
    deny(std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Deny>())
	,permit(std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Standard::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::has_data() const
{
    return sequence.is_set
	|| remark.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::AccessList::Standard::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule" <<"[sequence='" <<sequence <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "sequence" || name == "remark")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::Deny()
    :
    std_ace(std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce>())
{
    std_ace->parent = this;

    yang_name = "deny"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::~Deny()
{
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::has_data() const
{
    return (std_ace !=  nullptr && std_ace->has_data());
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::has_operation() const
{
    return is_set(yfilter)
	|| (std_ace !=  nullptr && std_ace->has_operation());
}

std::string Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "std-ace")
    {
        if(std_ace == nullptr)
        {
            std_ace = std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce>();
        }
        return std_ace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(std_ace != nullptr)
    {
        children["std-ace"] = std_ace;
    }

    return children;
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "std-ace")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::StdAce()
    :
    any{YType::empty, "any"},
    host{YType::str, "host"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    log{YType::empty, "log"},
    mask{YType::str, "mask"}
{

    yang_name = "std-ace"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::~StdAce()
{
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::has_data() const
{
    return any.is_set
	|| host.is_set
	|| ipv4_prefix.is_set
	|| log.is_set
	|| mask.is_set;
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "std-ace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Deny::StdAce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "ipv4-prefix" || name == "log" || name == "mask")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::Permit()
    :
    std_ace(std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce>())
{
    std_ace->parent = this;

    yang_name = "permit"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::~Permit()
{
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::has_data() const
{
    return (std_ace !=  nullptr && std_ace->has_data());
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::has_operation() const
{
    return is_set(yfilter)
	|| (std_ace !=  nullptr && std_ace->has_operation());
}

std::string Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "std-ace")
    {
        if(std_ace == nullptr)
        {
            std_ace = std::make_shared<Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce>();
        }
        return std_ace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(std_ace != nullptr)
    {
        children["std-ace"] = std_ace;
    }

    return children;
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "std-ace")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::StdAce()
    :
    any{YType::empty, "any"},
    host{YType::str, "host"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    log{YType::empty, "log"},
    mask{YType::str, "mask"}
{

    yang_name = "std-ace"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::~StdAce()
{
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::has_data() const
{
    return any.is_set
	|| host.is_set
	|| ipv4_prefix.is_set
	|| log.is_set
	|| mask.is_set;
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "std-ace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Standard::AccessListSeqRule::Permit::StdAce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "ipv4-prefix" || name == "log" || name == "mask")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::Default_::Default_()
{

    yang_name = "default"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Standard::Default_::~Default_()
{
}

bool Native::Ip::AccessList::Standard::Default_::has_data() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::AccessList::Standard::Default_::has_operation() const
{
    for (std::size_t index=0; index<access_list_seq_rule.size(); index++)
    {
        if(access_list_seq_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::AccessList::Standard::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list-seq-rule")
    {
        for(auto const & c : access_list_seq_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule>();
        c->parent = this;
        access_list_seq_rule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list_seq_rule)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::AccessList::Standard::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AccessList::Standard::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AccessList::Standard::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list-seq-rule")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::AccessListSeqRule()
    :
    sequence{YType::uint64, "sequence"},
    remark{YType::str, "remark"}
    	,
    deny(std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny>())
	,permit(std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "access-list-seq-rule"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::~AccessListSeqRule()
{
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::has_data() const
{
    return sequence.is_set
	|| remark.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-list-seq-rule" <<"[sequence='" <<sequence <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "sequence" || name == "remark")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::Deny()
    :
    std_ace(std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce>())
{
    std_ace->parent = this;

    yang_name = "deny"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::~Deny()
{
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::has_data() const
{
    return (std_ace !=  nullptr && std_ace->has_data());
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::has_operation() const
{
    return is_set(yfilter)
	|| (std_ace !=  nullptr && std_ace->has_operation());
}

std::string Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "std-ace")
    {
        if(std_ace == nullptr)
        {
            std_ace = std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce>();
        }
        return std_ace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(std_ace != nullptr)
    {
        children["std-ace"] = std_ace;
    }

    return children;
}

void Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "std-ace")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::StdAce()
    :
    any{YType::empty, "any"},
    host{YType::str, "host"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    log{YType::empty, "log"},
    mask{YType::str, "mask"}
{

    yang_name = "std-ace"; yang_parent_name = "deny"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::~StdAce()
{
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::has_data() const
{
    return any.is_set
	|| host.is_set
	|| ipv4_prefix.is_set
	|| log.is_set
	|| mask.is_set;
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "std-ace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Deny::StdAce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "ipv4-prefix" || name == "log" || name == "mask")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::Permit()
    :
    std_ace(std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce>())
{
    std_ace->parent = this;

    yang_name = "permit"; yang_parent_name = "access-list-seq-rule"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::~Permit()
{
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::has_data() const
{
    return (std_ace !=  nullptr && std_ace->has_data());
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::has_operation() const
{
    return is_set(yfilter)
	|| (std_ace !=  nullptr && std_ace->has_operation());
}

std::string Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "std-ace")
    {
        if(std_ace == nullptr)
        {
            std_ace = std::make_shared<Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce>();
        }
        return std_ace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(std_ace != nullptr)
    {
        children["std-ace"] = std_ace;
    }

    return children;
}

void Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "std-ace")
        return true;
    return false;
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::StdAce()
    :
    any{YType::empty, "any"},
    host{YType::str, "host"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    log{YType::empty, "log"},
    mask{YType::str, "mask"}
{

    yang_name = "std-ace"; yang_parent_name = "permit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::~StdAce()
{
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::has_data() const
{
    return any.is_set
	|| host.is_set
	|| ipv4_prefix.is_set
	|| log.is_set
	|| mask.is_set;
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any.yfilter)
	|| ydk::is_set(host.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(log.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "std-ace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.yfilter)) leaf_name_data.push_back(any.get_name_leafdata());
    if (host.is_set || is_set(host.yfilter)) leaf_name_data.push_back(host.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (log.is_set || is_set(log.yfilter)) leaf_name_data.push_back(log.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any")
    {
        any = value;
        any.value_namespace = name_space;
        any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host")
    {
        host = value;
        host.value_namespace = name_space;
        host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log")
    {
        log = value;
        log.value_namespace = name_space;
        log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any")
    {
        any.yfilter = yfilter;
    }
    if(value_path == "host")
    {
        host.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "log")
    {
        log.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Ip::AccessList::Standard::Default_::AccessListSeqRule::Permit::StdAce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any" || name == "host" || name == "ipv4-prefix" || name == "log" || name == "mask")
        return true;
    return false;
}

Native::Ip::Admission::Admission()
    :
    name(std::make_shared<Native::Ip::Admission::Name>())
	,watch_list(std::make_shared<Native::Ip::Admission::WatchList>())
{
    name->parent = this;
    watch_list->parent = this;

    yang_name = "admission"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Admission::~Admission()
{
}

bool Native::Ip::Admission::has_data() const
{
    return (name !=  nullptr && name->has_data())
	|| (watch_list !=  nullptr && watch_list->has_data());
}

bool Native::Ip::Admission::has_operation() const
{
    return is_set(yfilter)
	|| (name !=  nullptr && name->has_operation())
	|| (watch_list !=  nullptr && watch_list->has_operation());
}

std::string Native::Ip::Admission::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Admission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admission";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Admission::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Admission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "name")
    {
        if(name == nullptr)
        {
            name = std::make_shared<Native::Ip::Admission::Name>();
        }
        return name;
    }

    if(child_yang_name == "watch-list")
    {
        if(watch_list == nullptr)
        {
            watch_list = std::make_shared<Native::Ip::Admission::WatchList>();
        }
        return watch_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Admission::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(name != nullptr)
    {
        children["name"] = name;
    }

    if(watch_list != nullptr)
    {
        children["watch-list"] = watch_list;
    }

    return children;
}

void Native::Ip::Admission::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Admission::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Admission::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "watch-list")
        return true;
    return false;
}

Native::Ip::Admission::Name::Name()
    :
    webauth(std::make_shared<Native::Ip::Admission::Name::Webauth>())
{
    webauth->parent = this;

    yang_name = "name"; yang_parent_name = "admission"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Admission::Name::~Name()
{
}

bool Native::Ip::Admission::Name::has_data() const
{
    return (webauth !=  nullptr && webauth->has_data());
}

bool Native::Ip::Admission::Name::has_operation() const
{
    return is_set(yfilter)
	|| (webauth !=  nullptr && webauth->has_operation());
}

std::string Native::Ip::Admission::Name::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/admission/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Admission::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Admission::Name::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Admission::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "webauth")
    {
        if(webauth == nullptr)
        {
            webauth = std::make_shared<Native::Ip::Admission::Name::Webauth>();
        }
        return webauth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Admission::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(webauth != nullptr)
    {
        children["webauth"] = webauth;
    }

    return children;
}

void Native::Ip::Admission::Name::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Admission::Name::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Admission::Name::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "webauth")
        return true;
    return false;
}

Native::Ip::Admission::Name::Webauth::Webauth()
    :
    proxy(std::make_shared<Native::Ip::Admission::Name::Webauth::Proxy>())
{
    proxy->parent = this;

    yang_name = "webauth"; yang_parent_name = "name"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Admission::Name::Webauth::~Webauth()
{
}

bool Native::Ip::Admission::Name::Webauth::has_data() const
{
    return (proxy !=  nullptr && proxy->has_data());
}

bool Native::Ip::Admission::Name::Webauth::has_operation() const
{
    return is_set(yfilter)
	|| (proxy !=  nullptr && proxy->has_operation());
}

std::string Native::Ip::Admission::Name::Webauth::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/admission/name/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Admission::Name::Webauth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "webauth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Admission::Name::Webauth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Admission::Name::Webauth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proxy")
    {
        if(proxy == nullptr)
        {
            proxy = std::make_shared<Native::Ip::Admission::Name::Webauth::Proxy>();
        }
        return proxy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Admission::Name::Webauth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(proxy != nullptr)
    {
        children["proxy"] = proxy;
    }

    return children;
}

void Native::Ip::Admission::Name::Webauth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Admission::Name::Webauth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Admission::Name::Webauth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proxy")
        return true;
    return false;
}

Native::Ip::Admission::Name::Webauth::Proxy::Proxy()
    :
    http{YType::empty, "http"}
{

    yang_name = "proxy"; yang_parent_name = "webauth"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Admission::Name::Webauth::Proxy::~Proxy()
{
}

bool Native::Ip::Admission::Name::Webauth::Proxy::has_data() const
{
    return http.is_set;
}

bool Native::Ip::Admission::Name::Webauth::Proxy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(http.yfilter);
}

std::string Native::Ip::Admission::Name::Webauth::Proxy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/admission/name/webauth/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Admission::Name::Webauth::Proxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Admission::Name::Webauth::Proxy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (http.is_set || is_set(http.yfilter)) leaf_name_data.push_back(http.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Admission::Name::Webauth::Proxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Admission::Name::Webauth::Proxy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Admission::Name::Webauth::Proxy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "http")
    {
        http = value;
        http.value_namespace = name_space;
        http.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Admission::Name::Webauth::Proxy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "http")
    {
        http.yfilter = yfilter;
    }
}

bool Native::Ip::Admission::Name::Webauth::Proxy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "http")
        return true;
    return false;
}

Native::Ip::Admission::WatchList::WatchList()
    :
    expiry_time{YType::uint16, "expiry-time"}
{

    yang_name = "watch-list"; yang_parent_name = "admission"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Admission::WatchList::~WatchList()
{
}

bool Native::Ip::Admission::WatchList::has_data() const
{
    return expiry_time.is_set;
}

bool Native::Ip::Admission::WatchList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expiry_time.yfilter);
}

std::string Native::Ip::Admission::WatchList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/admission/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Admission::WatchList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "watch-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Admission::WatchList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiry_time.is_set || is_set(expiry_time.yfilter)) leaf_name_data.push_back(expiry_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Admission::WatchList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Admission::WatchList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Admission::WatchList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expiry-time")
    {
        expiry_time = value;
        expiry_time.value_namespace = name_space;
        expiry_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Admission::WatchList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expiry-time")
    {
        expiry_time.yfilter = yfilter;
    }
}

bool Native::Ip::Admission::WatchList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expiry-time")
        return true;
    return false;
}

Native::Ip::Arp::Arp()
    :
    incomplete(std::make_shared<Native::Ip::Arp::Incomplete>())
	,inspection(std::make_shared<Native::Ip::Arp::Inspection>())
	,proxy(std::make_shared<Native::Ip::Arp::Proxy>())
{
    incomplete->parent = this;
    inspection->parent = this;
    proxy->parent = this;

    yang_name = "arp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Arp::~Arp()
{
}

bool Native::Ip::Arp::has_data() const
{
    return (incomplete !=  nullptr && incomplete->has_data())
	|| (inspection !=  nullptr && inspection->has_data())
	|| (proxy !=  nullptr && proxy->has_data());
}

bool Native::Ip::Arp::has_operation() const
{
    return is_set(yfilter)
	|| (incomplete !=  nullptr && incomplete->has_operation())
	|| (inspection !=  nullptr && inspection->has_operation())
	|| (proxy !=  nullptr && proxy->has_operation());
}

std::string Native::Ip::Arp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "incomplete")
    {
        if(incomplete == nullptr)
        {
            incomplete = std::make_shared<Native::Ip::Arp::Incomplete>();
        }
        return incomplete;
    }

    if(child_yang_name == "inspection")
    {
        if(inspection == nullptr)
        {
            inspection = std::make_shared<Native::Ip::Arp::Inspection>();
        }
        return inspection;
    }

    if(child_yang_name == "proxy")
    {
        if(proxy == nullptr)
        {
            proxy = std::make_shared<Native::Ip::Arp::Proxy>();
        }
        return proxy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(incomplete != nullptr)
    {
        children["incomplete"] = incomplete;
    }

    if(inspection != nullptr)
    {
        children["inspection"] = inspection;
    }

    if(proxy != nullptr)
    {
        children["proxy"] = proxy;
    }

    return children;
}

void Native::Ip::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incomplete" || name == "inspection" || name == "proxy")
        return true;
    return false;
}

Native::Ip::Arp::Incomplete::Incomplete()
    :
    entries{YType::uint32, "entries"}
{

    yang_name = "incomplete"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Arp::Incomplete::~Incomplete()
{
}

bool Native::Ip::Arp::Incomplete::has_data() const
{
    return entries.is_set;
}

bool Native::Ip::Arp::Incomplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entries.yfilter);
}

std::string Native::Ip::Arp::Incomplete::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/arp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::Incomplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incomplete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Incomplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entries.is_set || is_set(entries.yfilter)) leaf_name_data.push_back(entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Incomplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Incomplete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Arp::Incomplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entries")
    {
        entries = value;
        entries.value_namespace = name_space;
        entries.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Incomplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entries")
    {
        entries.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Incomplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entries")
        return true;
    return false;
}

Native::Ip::Arp::Inspection::Inspection()
    :
    vlan{YType::str, "vlan"}
    	,
    log_buffer(std::make_shared<Native::Ip::Arp::Inspection::LogBuffer>())
	,validate(std::make_shared<Native::Ip::Arp::Inspection::Validate>())
{
    log_buffer->parent = this;
    validate->parent = this;

    yang_name = "inspection"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Arp::Inspection::~Inspection()
{
}

bool Native::Ip::Arp::Inspection::has_data() const
{
    for (std::size_t index=0; index<filter.size(); index++)
    {
        if(filter[index]->has_data())
            return true;
    }
    return vlan.is_set
	|| (log_buffer !=  nullptr && log_buffer->has_data())
	|| (validate !=  nullptr && validate->has_data());
}

bool Native::Ip::Arp::Inspection::has_operation() const
{
    for (std::size_t index=0; index<filter.size(); index++)
    {
        if(filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (log_buffer !=  nullptr && log_buffer->has_operation())
	|| (validate !=  nullptr && validate->has_operation());
}

std::string Native::Ip::Arp::Inspection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/arp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::Inspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Inspection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filter")
    {
        for(auto const & c : filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Arp::Inspection::Filter>();
        c->parent = this;
        filter.push_back(c);
        return c;
    }

    if(child_yang_name == "log-buffer")
    {
        if(log_buffer == nullptr)
        {
            log_buffer = std::make_shared<Native::Ip::Arp::Inspection::LogBuffer>();
        }
        return log_buffer;
    }

    if(child_yang_name == "validate")
    {
        if(validate == nullptr)
        {
            validate = std::make_shared<Native::Ip::Arp::Inspection::Validate>();
        }
        return validate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : filter)
    {
        children[c->get_segment_path()] = c;
    }

    if(log_buffer != nullptr)
    {
        children["log-buffer"] = log_buffer;
    }

    if(validate != nullptr)
    {
        children["validate"] = validate;
    }

    return children;
}

void Native::Ip::Arp::Inspection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Inspection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Inspection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filter" || name == "log-buffer" || name == "validate" || name == "vlan")
        return true;
    return false;
}

Native::Ip::Arp::Inspection::Filter::Filter()
    :
    arpacl{YType::str, "arpacl"}
{

    yang_name = "filter"; yang_parent_name = "inspection"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Arp::Inspection::Filter::~Filter()
{
}

bool Native::Ip::Arp::Inspection::Filter::has_data() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return arpacl.is_set;
}

bool Native::Ip::Arp::Inspection::Filter::has_operation() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(arpacl.yfilter);
}

std::string Native::Ip::Arp::Inspection::Filter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/arp/inspection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::Inspection::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter" <<"[arpacl='" <<arpacl <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Inspection::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arpacl.is_set || is_set(arpacl.yfilter)) leaf_name_data.push_back(arpacl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<Native::Ip::Arp::Inspection::Filter::Vlan>();
        c->parent = this;
        vlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Arp::Inspection::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arpacl")
    {
        arpacl = value;
        arpacl.value_namespace = name_space;
        arpacl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Inspection::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arpacl")
    {
        arpacl.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Inspection::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan" || name == "arpacl")
        return true;
    return false;
}

Native::Ip::Arp::Inspection::Filter::Vlan::Vlan()
    :
    vlan_range{YType::str, "vlan-range"},
    static_{YType::empty, "static"}
{

    yang_name = "vlan"; yang_parent_name = "filter"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Arp::Inspection::Filter::Vlan::~Vlan()
{
}

bool Native::Ip::Arp::Inspection::Filter::Vlan::has_data() const
{
    return vlan_range.is_set
	|| static_.is_set;
}

bool Native::Ip::Arp::Inspection::Filter::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_range.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string Native::Ip::Arp::Inspection::Filter::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan" <<"[vlan-range='" <<vlan_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Inspection::Filter::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_range.is_set || is_set(vlan_range.yfilter)) leaf_name_data.push_back(vlan_range.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::Filter::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::Filter::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Arp::Inspection::Filter::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-range")
    {
        vlan_range = value;
        vlan_range.value_namespace = name_space;
        vlan_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Inspection::Filter::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-range")
    {
        vlan_range.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Inspection::Filter::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-range" || name == "static")
        return true;
    return false;
}

Native::Ip::Arp::Inspection::LogBuffer::LogBuffer()
    :
    entries{YType::uint16, "entries"}
    	,
    logs(std::make_shared<Native::Ip::Arp::Inspection::LogBuffer::Logs>())
{
    logs->parent = this;

    yang_name = "log-buffer"; yang_parent_name = "inspection"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Arp::Inspection::LogBuffer::~LogBuffer()
{
}

bool Native::Ip::Arp::Inspection::LogBuffer::has_data() const
{
    return entries.is_set
	|| (logs !=  nullptr && logs->has_data());
}

bool Native::Ip::Arp::Inspection::LogBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entries.yfilter)
	|| (logs !=  nullptr && logs->has_operation());
}

std::string Native::Ip::Arp::Inspection::LogBuffer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/arp/inspection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::Inspection::LogBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log-buffer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Inspection::LogBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entries.is_set || is_set(entries.yfilter)) leaf_name_data.push_back(entries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::LogBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logs")
    {
        if(logs == nullptr)
        {
            logs = std::make_shared<Native::Ip::Arp::Inspection::LogBuffer::Logs>();
        }
        return logs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::LogBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(logs != nullptr)
    {
        children["logs"] = logs;
    }

    return children;
}

void Native::Ip::Arp::Inspection::LogBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entries")
    {
        entries = value;
        entries.value_namespace = name_space;
        entries.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Inspection::LogBuffer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entries")
    {
        entries.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Inspection::LogBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logs" || name == "entries")
        return true;
    return false;
}

Native::Ip::Arp::Inspection::LogBuffer::Logs::Logs()
    :
    entries{YType::uint16, "entries"},
    interval{YType::uint32, "interval"}
{

    yang_name = "logs"; yang_parent_name = "log-buffer"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Arp::Inspection::LogBuffer::Logs::~Logs()
{
}

bool Native::Ip::Arp::Inspection::LogBuffer::Logs::has_data() const
{
    return entries.is_set
	|| interval.is_set;
}

bool Native::Ip::Arp::Inspection::LogBuffer::Logs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entries.yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Ip::Arp::Inspection::LogBuffer::Logs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/arp/inspection/log-buffer/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::Inspection::LogBuffer::Logs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Inspection::LogBuffer::Logs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entries.is_set || is_set(entries.yfilter)) leaf_name_data.push_back(entries.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::LogBuffer::Logs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::LogBuffer::Logs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Arp::Inspection::LogBuffer::Logs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entries")
    {
        entries = value;
        entries.value_namespace = name_space;
        entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Inspection::LogBuffer::Logs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entries")
    {
        entries.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Inspection::LogBuffer::Logs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entries" || name == "interval")
        return true;
    return false;
}

Native::Ip::Arp::Inspection::Validate::Validate()
    :
    dst_mac{YType::empty, "dst-mac"},
    ip{YType::empty, "ip"},
    src_mac{YType::empty, "src-mac"}
    	,
    allow(std::make_shared<Native::Ip::Arp::Inspection::Validate::Allow>())
{
    allow->parent = this;

    yang_name = "validate"; yang_parent_name = "inspection"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Arp::Inspection::Validate::~Validate()
{
}

bool Native::Ip::Arp::Inspection::Validate::has_data() const
{
    return dst_mac.is_set
	|| ip.is_set
	|| src_mac.is_set
	|| (allow !=  nullptr && allow->has_data());
}

bool Native::Ip::Arp::Inspection::Validate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dst_mac.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(src_mac.yfilter)
	|| (allow !=  nullptr && allow->has_operation());
}

std::string Native::Ip::Arp::Inspection::Validate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/arp/inspection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::Inspection::Validate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "validate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Inspection::Validate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_mac.is_set || is_set(dst_mac.yfilter)) leaf_name_data.push_back(dst_mac.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (src_mac.is_set || is_set(src_mac.yfilter)) leaf_name_data.push_back(src_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::Validate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allow")
    {
        if(allow == nullptr)
        {
            allow = std::make_shared<Native::Ip::Arp::Inspection::Validate::Allow>();
        }
        return allow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::Validate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(allow != nullptr)
    {
        children["allow"] = allow;
    }

    return children;
}

void Native::Ip::Arp::Inspection::Validate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-mac")
    {
        dst_mac = value;
        dst_mac.value_namespace = name_space;
        dst_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-mac")
    {
        src_mac = value;
        src_mac.value_namespace = name_space;
        src_mac.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Inspection::Validate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-mac")
    {
        dst_mac.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "src-mac")
    {
        src_mac.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Inspection::Validate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow" || name == "dst-mac" || name == "ip" || name == "src-mac")
        return true;
    return false;
}

Native::Ip::Arp::Inspection::Validate::Allow::Allow()
    :
    zeros{YType::empty, "zeros"}
{

    yang_name = "allow"; yang_parent_name = "validate"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Arp::Inspection::Validate::Allow::~Allow()
{
}

bool Native::Ip::Arp::Inspection::Validate::Allow::has_data() const
{
    return zeros.is_set;
}

bool Native::Ip::Arp::Inspection::Validate::Allow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(zeros.yfilter);
}

std::string Native::Ip::Arp::Inspection::Validate::Allow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/arp/inspection/validate/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::Inspection::Validate::Allow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Inspection::Validate::Allow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (zeros.is_set || is_set(zeros.yfilter)) leaf_name_data.push_back(zeros.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Inspection::Validate::Allow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Inspection::Validate::Allow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Arp::Inspection::Validate::Allow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "zeros")
    {
        zeros = value;
        zeros.value_namespace = name_space;
        zeros.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Inspection::Validate::Allow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "zeros")
    {
        zeros.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Inspection::Validate::Allow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "zeros")
        return true;
    return false;
}

Native::Ip::Arp::Proxy::Proxy()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "proxy"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Arp::Proxy::~Proxy()
{
}

bool Native::Ip::Arp::Proxy::has_data() const
{
    return disable.is_set;
}

bool Native::Ip::Arp::Proxy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::Ip::Arp::Proxy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/arp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Arp::Proxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Arp::Proxy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Arp::Proxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Arp::Proxy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Arp::Proxy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Arp::Proxy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::Ip::Arp::Proxy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::Ip::AsPath::AsPath()
{

    yang_name = "as-path"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::AsPath::~AsPath()
{
}

bool Native::Ip::AsPath::has_data() const
{
    for (std::size_t index=0; index<access_list.size(); index++)
    {
        if(access_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::AsPath::has_operation() const
{
    for (std::size_t index=0; index<access_list.size(); index++)
    {
        if(access_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::AsPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AsPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-list")
    {
        for(auto const & c : access_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::AsPath::AccessList>();
        c->parent = this;
        access_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AsPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::AsPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::AsPath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::AsPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-list")
        return true;
    return false;
}

Native::Ip::AsPath::AccessList::AccessList()
    :
    name{YType::uint16, "name"}
    	,
    deny(std::make_shared<Native::Ip::AsPath::AccessList::Deny>())
	,permit(std::make_shared<Native::Ip::AsPath::AccessList::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "access-list"; yang_parent_name = "as-path"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::AsPath::AccessList::~AccessList()
{
}

bool Native::Ip::AsPath::AccessList::has_data() const
{
    return name.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::AsPath::AccessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::AsPath::AccessList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/as-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::AsPath::AccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp:access-list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AsPath::AccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AsPath::AccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::AsPath::AccessList::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::AsPath::AccessList::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AsPath::AccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::AsPath::AccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::AsPath::AccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::AsPath::AccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "name")
        return true;
    return false;
}

Native::Ip::AsPath::AccessList::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{

    yang_name = "deny"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AsPath::AccessList::Deny::~Deny()
{
}

bool Native::Ip::AsPath::AccessList::Deny::has_data() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::AsPath::AccessList::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(deny_list.yfilter);
}

std::string Native::Ip::AsPath::AccessList::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AsPath::AccessList::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AsPath::AccessList::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AsPath::AccessList::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AsPath::AccessList::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

void Native::Ip::AsPath::AccessList::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-list")
    {
        deny_list.yfilter = yfilter;
    }
}

bool Native::Ip::AsPath::AccessList::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny-list")
        return true;
    return false;
}

Native::Ip::AsPath::AccessList::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{

    yang_name = "permit"; yang_parent_name = "access-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::AsPath::AccessList::Permit::~Permit()
{
}

bool Native::Ip::AsPath::AccessList::Permit::has_data() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::AsPath::AccessList::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(permit_list.yfilter);
}

std::string Native::Ip::AsPath::AccessList::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::AsPath::AccessList::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::AsPath::AccessList::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::AsPath::AccessList::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::AsPath::AccessList::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

void Native::Ip::AsPath::AccessList::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permit-list")
    {
        permit_list.yfilter = yfilter;
    }
}

bool Native::Ip::AsPath::AccessList::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit-list")
        return true;
    return false;
}

Native::Ip::BgpCommunity::BgpCommunity()
    :
    new_format{YType::empty, "new-format"}
{

    yang_name = "bgp-community"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::BgpCommunity::~BgpCommunity()
{
}

bool Native::Ip::BgpCommunity::has_data() const
{
    return new_format.is_set;
}

bool Native::Ip::BgpCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(new_format.yfilter);
}

std::string Native::Ip::BgpCommunity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::BgpCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::BgpCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (new_format.is_set || is_set(new_format.yfilter)) leaf_name_data.push_back(new_format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::BgpCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::BgpCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::BgpCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "new-format")
    {
        new_format = value;
        new_format.value_namespace = name_space;
        new_format.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::BgpCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "new-format")
    {
        new_format.yfilter = yfilter;
    }
}

bool Native::Ip::BgpCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "new-format")
        return true;
    return false;
}

Native::Ip::Bootp::Bootp()
    :
    server{YType::boolean, "server"}
{

    yang_name = "bootp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Bootp::~Bootp()
{
}

bool Native::Ip::Bootp::has_data() const
{
    return server.is_set;
}

bool Native::Ip::Bootp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(server.yfilter);
}

std::string Native::Ip::Bootp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Bootp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Bootp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Bootp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Bootp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Bootp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Bootp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
}

bool Native::Ip::Bootp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server")
        return true;
    return false;
}

Native::Ip::Cef::Cef()
    :
    distributed{YType::empty, "Cisco-IOS-XE-cef:distributed"}
    	,
    accounting(std::make_shared<Native::Ip::Cef::Accounting>())
	,load_sharing(std::make_shared<Native::Ip::Cef::LoadSharing>())
	,optimize(std::make_shared<Native::Ip::Cef::Optimize>())
	,traffic_statistics(std::make_shared<Native::Ip::Cef::TrafficStatistics>())
{
    accounting->parent = this;
    load_sharing->parent = this;
    optimize->parent = this;
    traffic_statistics->parent = this;

    yang_name = "cef"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::~Cef()
{
}

bool Native::Ip::Cef::has_data() const
{
    return distributed.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (load_sharing !=  nullptr && load_sharing->has_data())
	|| (optimize !=  nullptr && optimize->has_data())
	|| (traffic_statistics !=  nullptr && traffic_statistics->has_data());
}

bool Native::Ip::Cef::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distributed.yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (load_sharing !=  nullptr && load_sharing->has_operation())
	|| (optimize !=  nullptr && optimize->has_operation())
	|| (traffic_statistics !=  nullptr && traffic_statistics->has_operation());
}

std::string Native::Ip::Cef::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cef";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distributed.is_set || is_set(distributed.yfilter)) leaf_name_data.push_back(distributed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Ip::Cef::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "load-sharing")
    {
        if(load_sharing == nullptr)
        {
            load_sharing = std::make_shared<Native::Ip::Cef::LoadSharing>();
        }
        return load_sharing;
    }

    if(child_yang_name == "optimize")
    {
        if(optimize == nullptr)
        {
            optimize = std::make_shared<Native::Ip::Cef::Optimize>();
        }
        return optimize;
    }

    if(child_yang_name == "traffic-statistics")
    {
        if(traffic_statistics == nullptr)
        {
            traffic_statistics = std::make_shared<Native::Ip::Cef::TrafficStatistics>();
        }
        return traffic_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    if(load_sharing != nullptr)
    {
        children["load-sharing"] = load_sharing;
    }

    if(optimize != nullptr)
    {
        children["optimize"] = optimize;
    }

    if(traffic_statistics != nullptr)
    {
        children["traffic-statistics"] = traffic_statistics;
    }

    return children;
}

void Native::Ip::Cef::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distributed")
    {
        distributed = value;
        distributed.value_namespace = name_space;
        distributed.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distributed")
    {
        distributed.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "load-sharing" || name == "optimize" || name == "traffic-statistics" || name == "distributed")
        return true;
    return false;
}

Native::Ip::Cef::Accounting::Accounting()
    :
    load_balance_hash{YType::empty, "load-balance-hash"},
    non_recursive{YType::empty, "non-recursive"},
    per_prefix{YType::empty, "per-prefix"},
    prefix_length{YType::empty, "prefix-length"}
{

    yang_name = "accounting"; yang_parent_name = "cef"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::Accounting::~Accounting()
{
}

bool Native::Ip::Cef::Accounting::has_data() const
{
    return load_balance_hash.is_set
	|| non_recursive.is_set
	|| per_prefix.is_set
	|| prefix_length.is_set;
}

bool Native::Ip::Cef::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_balance_hash.yfilter)
	|| ydk::is_set(non_recursive.yfilter)
	|| ydk::is_set(per_prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter);
}

std::string Native::Ip::Cef::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cef:accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_balance_hash.is_set || is_set(load_balance_hash.yfilter)) leaf_name_data.push_back(load_balance_hash.get_name_leafdata());
    if (non_recursive.is_set || is_set(non_recursive.yfilter)) leaf_name_data.push_back(non_recursive.get_name_leafdata());
    if (per_prefix.is_set || is_set(per_prefix.yfilter)) leaf_name_data.push_back(per_prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Cef::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-balance-hash")
    {
        load_balance_hash = value;
        load_balance_hash.value_namespace = name_space;
        load_balance_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-recursive")
    {
        non_recursive = value;
        non_recursive.value_namespace = name_space;
        non_recursive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "per-prefix")
    {
        per_prefix = value;
        per_prefix.value_namespace = name_space;
        per_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-balance-hash")
    {
        load_balance_hash.yfilter = yfilter;
    }
    if(value_path == "non-recursive")
    {
        non_recursive.yfilter = yfilter;
    }
    if(value_path == "per-prefix")
    {
        per_prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-balance-hash" || name == "non-recursive" || name == "per-prefix" || name == "prefix-length")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::LoadSharing()
    :
    algorithm(std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm>())
	,key_control(std::make_shared<Native::Ip::Cef::LoadSharing::KeyControl>())
{
    algorithm->parent = this;
    key_control->parent = this;

    yang_name = "load-sharing"; yang_parent_name = "cef"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::LoadSharing::~LoadSharing()
{
}

bool Native::Ip::Cef::LoadSharing::has_data() const
{
    return (algorithm !=  nullptr && algorithm->has_data())
	|| (key_control !=  nullptr && key_control->has_data());
}

bool Native::Ip::Cef::LoadSharing::has_operation() const
{
    return is_set(yfilter)
	|| (algorithm !=  nullptr && algorithm->has_operation())
	|| (key_control !=  nullptr && key_control->has_operation());
}

std::string Native::Ip::Cef::LoadSharing::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cef:load-sharing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "algorithm")
    {
        if(algorithm == nullptr)
        {
            algorithm = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm>();
        }
        return algorithm;
    }

    if(child_yang_name == "key-control")
    {
        if(key_control == nullptr)
        {
            key_control = std::make_shared<Native::Ip::Cef::LoadSharing::KeyControl>();
        }
        return key_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(algorithm != nullptr)
    {
        children["algorithm"] = algorithm;
    }

    if(key_control != nullptr)
    {
        children["key-control"] = key_control;
    }

    return children;
}

void Native::Ip::Cef::LoadSharing::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Cef::LoadSharing::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Cef::LoadSharing::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm" || name == "key-control")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::Algorithm::Algorithm()
    :
    include_ports(nullptr) // presence node
	,original(std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::Original>())
	,tunnel(std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::Tunnel>())
	,universal(std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::Universal>())
{
    original->parent = this;
    tunnel->parent = this;
    universal->parent = this;

    yang_name = "algorithm"; yang_parent_name = "load-sharing"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::LoadSharing::Algorithm::~Algorithm()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::has_data() const
{
    return (include_ports !=  nullptr && include_ports->has_data())
	|| (original !=  nullptr && original->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data())
	|| (universal !=  nullptr && universal->has_data());
}

bool Native::Ip::Cef::LoadSharing::Algorithm::has_operation() const
{
    return is_set(yfilter)
	|| (include_ports !=  nullptr && include_ports->has_operation())
	|| (original !=  nullptr && original->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation())
	|| (universal !=  nullptr && universal->has_operation());
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "include-ports")
    {
        if(include_ports == nullptr)
        {
            include_ports = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts>();
        }
        return include_ports;
    }

    if(child_yang_name == "original")
    {
        if(original == nullptr)
        {
            original = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::Original>();
        }
        return original;
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel == nullptr)
        {
            tunnel = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::Tunnel>();
        }
        return tunnel;
    }

    if(child_yang_name == "universal")
    {
        if(universal == nullptr)
        {
            universal = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::Universal>();
        }
        return universal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(include_ports != nullptr)
    {
        children["include-ports"] = include_ports;
    }

    if(original != nullptr)
    {
        children["original"] = original;
    }

    if(tunnel != nullptr)
    {
        children["tunnel"] = tunnel;
    }

    if(universal != nullptr)
    {
        children["universal"] = universal;
    }

    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Cef::LoadSharing::Algorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include-ports" || name == "original" || name == "tunnel" || name == "universal")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::IncludePorts()
    :
    destination(nullptr) // presence node
	,source(nullptr) // presence node
{

    yang_name = "include-ports"; yang_parent_name = "algorithm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::~IncludePorts()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::has_data() const
{
    return (destination !=  nullptr && destination->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::has_operation() const
{
    return is_set(yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "source")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::Destination()
    :
    fixed_id{YType::str, "fixed-id"}
{

    yang_name = "destination"; yang_parent_name = "include-ports"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::~Destination()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::has_data() const
{
    return fixed_id.is_set;
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fixed_id.yfilter);
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/include-ports/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_id.is_set || is_set(fixed_id.yfilter)) leaf_name_data.push_back(fixed_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fixed-id")
    {
        fixed_id = value;
        fixed_id.value_namespace = name_space;
        fixed_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed-id")
    {
        fixed_id.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-id")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Source()
    :
    fixed_id{YType::str, "fixed-id"}
    	,
    destination(nullptr) // presence node
{

    yang_name = "source"; yang_parent_name = "include-ports"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::~Source()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::has_data() const
{
    return fixed_id.is_set
	|| (destination !=  nullptr && destination->has_data());
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fixed_id.yfilter)
	|| (destination !=  nullptr && destination->has_operation());
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/include-ports/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_id.is_set || is_set(fixed_id.yfilter)) leaf_name_data.push_back(fixed_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination>();
        }
        return destination;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(destination != nullptr)
    {
        children["destination"] = destination;
    }

    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fixed-id")
    {
        fixed_id = value;
        fixed_id.value_namespace = name_space;
        fixed_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed-id")
    {
        fixed_id.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "fixed-id")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Destination()
    :
    fixed_id{YType::str, "fixed-id"}
    	,
    gtp(nullptr) // presence node
{

    yang_name = "destination"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::~Destination()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::has_data() const
{
    return fixed_id.is_set
	|| (gtp !=  nullptr && gtp->has_data());
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fixed_id.yfilter)
	|| (gtp !=  nullptr && gtp->has_operation());
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/include-ports/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_id.is_set || is_set(fixed_id.yfilter)) leaf_name_data.push_back(fixed_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gtp")
    {
        if(gtp == nullptr)
        {
            gtp = std::make_shared<Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp>();
        }
        return gtp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gtp != nullptr)
    {
        children["gtp"] = gtp;
    }

    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fixed-id")
    {
        fixed_id = value;
        fixed_id.value_namespace = name_space;
        fixed_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed-id")
    {
        fixed_id.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gtp" || name == "fixed-id")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::Gtp()
    :
    fixed_id{YType::str, "fixed-id"}
{

    yang_name = "gtp"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::~Gtp()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::has_data() const
{
    return fixed_id.is_set;
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fixed_id.yfilter);
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/include-ports/source/destination/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gtp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_id.is_set || is_set(fixed_id.yfilter)) leaf_name_data.push_back(fixed_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fixed-id")
    {
        fixed_id = value;
        fixed_id.value_namespace = name_space;
        fixed_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed-id")
    {
        fixed_id.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::LoadSharing::Algorithm::IncludePorts::Source::Destination::Gtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-id")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::Algorithm::Original::Original()
    :
    original{YType::empty, "original"}
{

    yang_name = "original"; yang_parent_name = "algorithm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::LoadSharing::Algorithm::Original::~Original()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Original::has_data() const
{
    return original.is_set;
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Original::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(original.yfilter);
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::Original::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::Original::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "original";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::Original::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (original.is_set || is_set(original.yfilter)) leaf_name_data.push_back(original.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::Original::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::Original::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::Original::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "original")
    {
        original = value;
        original.value_namespace = name_space;
        original.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::LoadSharing::Algorithm::Original::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "original")
    {
        original.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Original::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "original")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::Tunnel()
    :
    fixed_id{YType::str, "fixed-id"},
    tunnel{YType::empty, "tunnel"}
{

    yang_name = "tunnel"; yang_parent_name = "algorithm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::~Tunnel()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::has_data() const
{
    return fixed_id.is_set
	|| tunnel.is_set;
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fixed_id.yfilter)
	|| ydk::is_set(tunnel.yfilter);
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_id.is_set || is_set(fixed_id.yfilter)) leaf_name_data.push_back(fixed_id.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fixed-id")
    {
        fixed_id = value;
        fixed_id.value_namespace = name_space;
        fixed_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed-id")
    {
        fixed_id.yfilter = yfilter;
    }
    if(value_path == "tunnel")
    {
        tunnel.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-id" || name == "tunnel")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::Algorithm::Universal::Universal()
    :
    fixed_id{YType::str, "fixed-id"},
    universal{YType::empty, "universal"}
{

    yang_name = "universal"; yang_parent_name = "algorithm"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::LoadSharing::Algorithm::Universal::~Universal()
{
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Universal::has_data() const
{
    return fixed_id.is_set
	|| universal.is_set;
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Universal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fixed_id.yfilter)
	|| ydk::is_set(universal.yfilter);
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::Universal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/algorithm/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::Algorithm::Universal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "universal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::Algorithm::Universal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fixed_id.is_set || is_set(fixed_id.yfilter)) leaf_name_data.push_back(fixed_id.get_name_leafdata());
    if (universal.is_set || is_set(universal.yfilter)) leaf_name_data.push_back(universal.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::Algorithm::Universal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::Algorithm::Universal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Cef::LoadSharing::Algorithm::Universal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fixed-id")
    {
        fixed_id = value;
        fixed_id.value_namespace = name_space;
        fixed_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "universal")
    {
        universal = value;
        universal.value_namespace = name_space;
        universal.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::LoadSharing::Algorithm::Universal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fixed-id")
    {
        fixed_id.yfilter = yfilter;
    }
    if(value_path == "universal")
    {
        universal.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::LoadSharing::Algorithm::Universal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fixed-id" || name == "universal")
        return true;
    return false;
}

Native::Ip::Cef::LoadSharing::KeyControl::KeyControl()
{

    yang_name = "key-control"; yang_parent_name = "load-sharing"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::LoadSharing::KeyControl::~KeyControl()
{
}

bool Native::Ip::Cef::LoadSharing::KeyControl::has_data() const
{
    return false;
}

bool Native::Ip::Cef::LoadSharing::KeyControl::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Ip::Cef::LoadSharing::KeyControl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:load-sharing/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::LoadSharing::KeyControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::LoadSharing::KeyControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::LoadSharing::KeyControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::LoadSharing::KeyControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Cef::LoadSharing::KeyControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Cef::LoadSharing::KeyControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Cef::LoadSharing::KeyControl::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Ip::Cef::Optimize::Optimize()
    :
    neighbor(std::make_shared<Native::Ip::Cef::Optimize::Neighbor>())
{
    neighbor->parent = this;

    yang_name = "optimize"; yang_parent_name = "cef"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::Optimize::~Optimize()
{
}

bool Native::Ip::Cef::Optimize::has_data() const
{
    return (neighbor !=  nullptr && neighbor->has_data());
}

bool Native::Ip::Cef::Optimize::has_operation() const
{
    return is_set(yfilter)
	|| (neighbor !=  nullptr && neighbor->has_operation());
}

std::string Native::Ip::Cef::Optimize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::Optimize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cef:optimize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::Optimize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::Optimize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<Native::Ip::Cef::Optimize::Neighbor>();
        }
        return neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::Optimize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    return children;
}

void Native::Ip::Cef::Optimize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Cef::Optimize::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Cef::Optimize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Native::Ip::Cef::Optimize::Neighbor::Neighbor()
    :
    resolution{YType::empty, "resolution"}
{

    yang_name = "neighbor"; yang_parent_name = "optimize"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::Optimize::Neighbor::~Neighbor()
{
}

bool Native::Ip::Cef::Optimize::Neighbor::has_data() const
{
    return resolution.is_set;
}

bool Native::Ip::Cef::Optimize::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(resolution.yfilter);
}

std::string Native::Ip::Cef::Optimize::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/Cisco-IOS-XE-cef:optimize/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::Optimize::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::Optimize::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (resolution.is_set || is_set(resolution.yfilter)) leaf_name_data.push_back(resolution.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::Optimize::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::Optimize::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Cef::Optimize::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "resolution")
    {
        resolution = value;
        resolution.value_namespace = name_space;
        resolution.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::Optimize::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "resolution")
    {
        resolution.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::Optimize::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resolution")
        return true;
    return false;
}

Native::Ip::Cef::TrafficStatistics::TrafficStatistics()
    :
    load_interval{YType::uint16, "load-interval"},
    update_rate{YType::uint16, "update-rate"}
{

    yang_name = "traffic-statistics"; yang_parent_name = "cef"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Cef::TrafficStatistics::~TrafficStatistics()
{
}

bool Native::Ip::Cef::TrafficStatistics::has_data() const
{
    return load_interval.is_set
	|| update_rate.is_set;
}

bool Native::Ip::Cef::TrafficStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_interval.yfilter)
	|| ydk::is_set(update_rate.yfilter);
}

std::string Native::Ip::Cef::TrafficStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/cef/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Cef::TrafficStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cef:traffic-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Cef::TrafficStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_interval.is_set || is_set(load_interval.yfilter)) leaf_name_data.push_back(load_interval.get_name_leafdata());
    if (update_rate.is_set || is_set(update_rate.yfilter)) leaf_name_data.push_back(update_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Cef::TrafficStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Cef::TrafficStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Cef::TrafficStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-interval")
    {
        load_interval = value;
        load_interval.value_namespace = name_space;
        load_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-rate")
    {
        update_rate = value;
        update_rate.value_namespace = name_space;
        update_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Cef::TrafficStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-interval")
    {
        load_interval.yfilter = yfilter;
    }
    if(value_path == "update-rate")
    {
        update_rate.yfilter = yfilter;
    }
}

bool Native::Ip::Cef::TrafficStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-interval" || name == "update-rate")
        return true;
    return false;
}

Native::Ip::CommunityList::CommunityList()
{

    yang_name = "community-list"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::CommunityList::~CommunityList()
{
}

bool Native::Ip::CommunityList::has_data() const
{
    for (std::size_t index=0; index<expanded.size(); index++)
    {
        if(expanded[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<number_expanded.size(); index++)
    {
        if(number_expanded[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<number_standard.size(); index++)
    {
        if(number_standard[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<standard.size(); index++)
    {
        if(standard[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::has_operation() const
{
    for (std::size_t index=0; index<expanded.size(); index++)
    {
        if(expanded[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<number_expanded.size(); index++)
    {
        if(number_expanded[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<number_standard.size(); index++)
    {
        if(number_standard[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<standard.size(); index++)
    {
        if(standard[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::CommunityList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::CommunityList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp:community-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "expanded")
    {
        for(auto const & c : expanded)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::CommunityList::Expanded>();
        c->parent = this;
        expanded.push_back(c);
        return c;
    }

    if(child_yang_name == "number-expanded")
    {
        for(auto const & c : number_expanded)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::CommunityList::NumberExpanded>();
        c->parent = this;
        number_expanded.push_back(c);
        return c;
    }

    if(child_yang_name == "number-standard")
    {
        for(auto const & c : number_standard)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::CommunityList::NumberStandard>();
        c->parent = this;
        number_standard.push_back(c);
        return c;
    }

    if(child_yang_name == "standard")
    {
        for(auto const & c : standard)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::CommunityList::Standard>();
        c->parent = this;
        standard.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : expanded)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : number_expanded)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : number_standard)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : standard)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::CommunityList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::CommunityList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::CommunityList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "expanded" || name == "number-expanded" || name == "number-standard" || name == "standard")
        return true;
    return false;
}

Native::Ip::CommunityList::Expanded::Expanded()
    :
    name{YType::str, "name"}
    	,
    deny(std::make_shared<Native::Ip::CommunityList::Expanded::Deny>())
	,permit(std::make_shared<Native::Ip::CommunityList::Expanded::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "expanded"; yang_parent_name = "community-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::CommunityList::Expanded::~Expanded()
{
}

bool Native::Ip::CommunityList::Expanded::has_data() const
{
    return name.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::CommunityList::Expanded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::CommunityList::Expanded::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:community-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::CommunityList::Expanded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "expanded" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::Expanded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::Expanded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::CommunityList::Expanded::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::CommunityList::Expanded::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::Expanded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::CommunityList::Expanded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::CommunityList::Expanded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::Expanded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "name")
        return true;
    return false;
}

Native::Ip::CommunityList::Expanded::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{

    yang_name = "deny"; yang_parent_name = "expanded"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::CommunityList::Expanded::Deny::~Deny()
{
}

bool Native::Ip::CommunityList::Expanded::Deny::has_data() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::Expanded::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(deny_list.yfilter);
}

std::string Native::Ip::CommunityList::Expanded::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::Expanded::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::Expanded::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::Expanded::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::CommunityList::Expanded::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

void Native::Ip::CommunityList::Expanded::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-list")
    {
        deny_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::Expanded::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny-list")
        return true;
    return false;
}

Native::Ip::CommunityList::Expanded::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{

    yang_name = "permit"; yang_parent_name = "expanded"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::CommunityList::Expanded::Permit::~Permit()
{
}

bool Native::Ip::CommunityList::Expanded::Permit::has_data() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::Expanded::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(permit_list.yfilter);
}

std::string Native::Ip::CommunityList::Expanded::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::Expanded::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::Expanded::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::Expanded::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::CommunityList::Expanded::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

void Native::Ip::CommunityList::Expanded::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permit-list")
    {
        permit_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::Expanded::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit-list")
        return true;
    return false;
}

Native::Ip::CommunityList::NumberExpanded::NumberExpanded()
    :
    no{YType::uint16, "no"}
    	,
    deny(std::make_shared<Native::Ip::CommunityList::NumberExpanded::Deny>())
	,permit(std::make_shared<Native::Ip::CommunityList::NumberExpanded::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "number-expanded"; yang_parent_name = "community-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::CommunityList::NumberExpanded::~NumberExpanded()
{
}

bool Native::Ip::CommunityList::NumberExpanded::has_data() const
{
    return no.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::CommunityList::NumberExpanded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::CommunityList::NumberExpanded::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:community-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::CommunityList::NumberExpanded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number-expanded" <<"[no='" <<no <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::NumberExpanded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no.is_set || is_set(no.yfilter)) leaf_name_data.push_back(no.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::NumberExpanded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::CommunityList::NumberExpanded::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::CommunityList::NumberExpanded::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::NumberExpanded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::CommunityList::NumberExpanded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no")
    {
        no = value;
        no.value_namespace = name_space;
        no.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::CommunityList::NumberExpanded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no")
    {
        no.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::NumberExpanded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "no")
        return true;
    return false;
}

Native::Ip::CommunityList::NumberExpanded::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{

    yang_name = "deny"; yang_parent_name = "number-expanded"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::CommunityList::NumberExpanded::Deny::~Deny()
{
}

bool Native::Ip::CommunityList::NumberExpanded::Deny::has_data() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::NumberExpanded::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(deny_list.yfilter);
}

std::string Native::Ip::CommunityList::NumberExpanded::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::NumberExpanded::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::NumberExpanded::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::NumberExpanded::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::CommunityList::NumberExpanded::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

void Native::Ip::CommunityList::NumberExpanded::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-list")
    {
        deny_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::NumberExpanded::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny-list")
        return true;
    return false;
}

Native::Ip::CommunityList::NumberExpanded::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{

    yang_name = "permit"; yang_parent_name = "number-expanded"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::CommunityList::NumberExpanded::Permit::~Permit()
{
}

bool Native::Ip::CommunityList::NumberExpanded::Permit::has_data() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::NumberExpanded::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(permit_list.yfilter);
}

std::string Native::Ip::CommunityList::NumberExpanded::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::NumberExpanded::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::NumberExpanded::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::NumberExpanded::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::CommunityList::NumberExpanded::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

void Native::Ip::CommunityList::NumberExpanded::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permit-list")
    {
        permit_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::NumberExpanded::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit-list")
        return true;
    return false;
}

Native::Ip::CommunityList::NumberStandard::NumberStandard()
    :
    no{YType::uint16, "no"}
    	,
    deny(std::make_shared<Native::Ip::CommunityList::NumberStandard::Deny>())
	,permit(std::make_shared<Native::Ip::CommunityList::NumberStandard::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "number-standard"; yang_parent_name = "community-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::CommunityList::NumberStandard::~NumberStandard()
{
}

bool Native::Ip::CommunityList::NumberStandard::has_data() const
{
    return no.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::CommunityList::NumberStandard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::CommunityList::NumberStandard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:community-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::CommunityList::NumberStandard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "number-standard" <<"[no='" <<no <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::NumberStandard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no.is_set || is_set(no.yfilter)) leaf_name_data.push_back(no.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::NumberStandard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::CommunityList::NumberStandard::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::CommunityList::NumberStandard::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::NumberStandard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::CommunityList::NumberStandard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no")
    {
        no = value;
        no.value_namespace = name_space;
        no.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::CommunityList::NumberStandard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no")
    {
        no.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::NumberStandard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "no")
        return true;
    return false;
}

Native::Ip::CommunityList::NumberStandard::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{

    yang_name = "deny"; yang_parent_name = "number-standard"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::CommunityList::NumberStandard::Deny::~Deny()
{
}

bool Native::Ip::CommunityList::NumberStandard::Deny::has_data() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::NumberStandard::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(deny_list.yfilter);
}

std::string Native::Ip::CommunityList::NumberStandard::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::NumberStandard::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::NumberStandard::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::NumberStandard::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::CommunityList::NumberStandard::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

void Native::Ip::CommunityList::NumberStandard::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-list")
    {
        deny_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::NumberStandard::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny-list")
        return true;
    return false;
}

Native::Ip::CommunityList::NumberStandard::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{

    yang_name = "permit"; yang_parent_name = "number-standard"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::CommunityList::NumberStandard::Permit::~Permit()
{
}

bool Native::Ip::CommunityList::NumberStandard::Permit::has_data() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::NumberStandard::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(permit_list.yfilter);
}

std::string Native::Ip::CommunityList::NumberStandard::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::NumberStandard::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::NumberStandard::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::NumberStandard::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::CommunityList::NumberStandard::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

void Native::Ip::CommunityList::NumberStandard::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permit-list")
    {
        permit_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::NumberStandard::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit-list")
        return true;
    return false;
}

Native::Ip::CommunityList::Standard::Standard()
    :
    name{YType::str, "name"}
    	,
    deny(std::make_shared<Native::Ip::CommunityList::Standard::Deny>())
	,permit(std::make_shared<Native::Ip::CommunityList::Standard::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "standard"; yang_parent_name = "community-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::CommunityList::Standard::~Standard()
{
}

bool Native::Ip::CommunityList::Standard::has_data() const
{
    return name.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ip::CommunityList::Standard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ip::CommunityList::Standard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/Cisco-IOS-XE-bgp:community-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::CommunityList::Standard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standard" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::Standard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::Standard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ip::CommunityList::Standard::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ip::CommunityList::Standard::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::Standard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ip::CommunityList::Standard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::CommunityList::Standard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::Standard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "name")
        return true;
    return false;
}

Native::Ip::CommunityList::Standard::Deny::Deny()
    :
    deny_list{YType::str, "deny-list"}
{

    yang_name = "deny"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::CommunityList::Standard::Deny::~Deny()
{
}

bool Native::Ip::CommunityList::Standard::Deny::has_data() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::Standard::Deny::has_operation() const
{
    for (auto const & leaf : deny_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(deny_list.yfilter);
}

std::string Native::Ip::CommunityList::Standard::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::Standard::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto deny_list_name_datas = deny_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), deny_list_name_datas.begin(), deny_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::Standard::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::Standard::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::CommunityList::Standard::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "deny-list")
    {
        deny_list.append(value);
    }
}

void Native::Ip::CommunityList::Standard::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "deny-list")
    {
        deny_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::Standard::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny-list")
        return true;
    return false;
}

Native::Ip::CommunityList::Standard::Permit::Permit()
    :
    permit_list{YType::str, "permit-list"}
{

    yang_name = "permit"; yang_parent_name = "standard"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::CommunityList::Standard::Permit::~Permit()
{
}

bool Native::Ip::CommunityList::Standard::Permit::has_data() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Ip::CommunityList::Standard::Permit::has_operation() const
{
    for (auto const & leaf : permit_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(permit_list.yfilter);
}

std::string Native::Ip::CommunityList::Standard::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::CommunityList::Standard::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto permit_list_name_datas = permit_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), permit_list_name_datas.begin(), permit_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::CommunityList::Standard::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::CommunityList::Standard::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::CommunityList::Standard::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permit-list")
    {
        permit_list.append(value);
    }
}

void Native::Ip::CommunityList::Standard::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permit-list")
    {
        permit_list.yfilter = yfilter;
    }
}

bool Native::Ip::CommunityList::Standard::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit-list")
        return true;
    return false;
}

Native::Ip::Device::Device()
    :
    tracking(nullptr) // presence node
{

    yang_name = "device"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Device::~Device()
{
}

bool Native::Ip::Device::has_data() const
{
    return (tracking !=  nullptr && tracking->has_data());
}

bool Native::Ip::Device::has_operation() const
{
    return is_set(yfilter)
	|| (tracking !=  nullptr && tracking->has_operation());
}

std::string Native::Ip::Device::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Device::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Device::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Device::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tracking")
    {
        if(tracking == nullptr)
        {
            tracking = std::make_shared<Native::Ip::Device::Tracking>();
        }
        return tracking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Device::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tracking != nullptr)
    {
        children["tracking"] = tracking;
    }

    return children;
}

void Native::Ip::Device::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Device::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Device::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracking")
        return true;
    return false;
}

Native::Ip::Device::Tracking::Tracking()
    :
    trace_buffer{YType::empty, "trace-buffer"}
    	,
    probe(std::make_shared<Native::Ip::Device::Tracking::Probe>())
{
    probe->parent = this;

    yang_name = "tracking"; yang_parent_name = "device"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Device::Tracking::~Tracking()
{
}

bool Native::Ip::Device::Tracking::has_data() const
{
    return trace_buffer.is_set
	|| (probe !=  nullptr && probe->has_data());
}

bool Native::Ip::Device::Tracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trace_buffer.yfilter)
	|| (probe !=  nullptr && probe->has_operation());
}

std::string Native::Ip::Device::Tracking::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/device/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Device::Tracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-device-tracking:tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Device::Tracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trace_buffer.is_set || is_set(trace_buffer.yfilter)) leaf_name_data.push_back(trace_buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Device::Tracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "probe")
    {
        if(probe == nullptr)
        {
            probe = std::make_shared<Native::Ip::Device::Tracking::Probe>();
        }
        return probe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Device::Tracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(probe != nullptr)
    {
        children["probe"] = probe;
    }

    return children;
}

void Native::Ip::Device::Tracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trace-buffer")
    {
        trace_buffer = value;
        trace_buffer.value_namespace = name_space;
        trace_buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Device::Tracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trace-buffer")
    {
        trace_buffer.yfilter = yfilter;
    }
}

bool Native::Ip::Device::Tracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "probe" || name == "trace-buffer")
        return true;
    return false;
}

Native::Ip::Device::Tracking::Probe::Probe()
    :
    count{YType::uint8, "count"},
    delay{YType::uint8, "delay"},
    interval{YType::uint32, "interval"}
    	,
    auto_source(nullptr) // presence node
{

    yang_name = "probe"; yang_parent_name = "tracking"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Device::Tracking::Probe::~Probe()
{
}

bool Native::Ip::Device::Tracking::Probe::has_data() const
{
    return count.is_set
	|| delay.is_set
	|| interval.is_set
	|| (auto_source !=  nullptr && auto_source->has_data());
}

bool Native::Ip::Device::Tracking::Probe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| (auto_source !=  nullptr && auto_source->has_operation());
}

std::string Native::Ip::Device::Tracking::Probe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/device/Cisco-IOS-XE-device-tracking:tracking/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Device::Tracking::Probe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "probe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Device::Tracking::Probe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Device::Tracking::Probe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-source")
    {
        if(auto_source == nullptr)
        {
            auto_source = std::make_shared<Native::Ip::Device::Tracking::Probe::AutoSource>();
        }
        return auto_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Device::Tracking::Probe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_source != nullptr)
    {
        children["auto-source"] = auto_source;
    }

    return children;
}

void Native::Ip::Device::Tracking::Probe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Device::Tracking::Probe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Ip::Device::Tracking::Probe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-source" || name == "count" || name == "delay" || name == "interval")
        return true;
    return false;
}

Native::Ip::Device::Tracking::Probe::AutoSource::AutoSource()
    :
    override{YType::empty, "override"}
    	,
    fallback(std::make_shared<Native::Ip::Device::Tracking::Probe::AutoSource::Fallback>())
{
    fallback->parent = this;

    yang_name = "auto-source"; yang_parent_name = "probe"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Device::Tracking::Probe::AutoSource::~AutoSource()
{
}

bool Native::Ip::Device::Tracking::Probe::AutoSource::has_data() const
{
    return override.is_set
	|| (fallback !=  nullptr && fallback->has_data());
}

bool Native::Ip::Device::Tracking::Probe::AutoSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(override.yfilter)
	|| (fallback !=  nullptr && fallback->has_operation());
}

std::string Native::Ip::Device::Tracking::Probe::AutoSource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/device/Cisco-IOS-XE-device-tracking:tracking/probe/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Device::Tracking::Probe::AutoSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Device::Tracking::Probe::AutoSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Device::Tracking::Probe::AutoSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fallback")
    {
        if(fallback == nullptr)
        {
            fallback = std::make_shared<Native::Ip::Device::Tracking::Probe::AutoSource::Fallback>();
        }
        return fallback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Device::Tracking::Probe::AutoSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fallback != nullptr)
    {
        children["fallback"] = fallback;
    }

    return children;
}

void Native::Ip::Device::Tracking::Probe::AutoSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Device::Tracking::Probe::AutoSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool Native::Ip::Device::Tracking::Probe::AutoSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fallback" || name == "override")
        return true;
    return false;
}

Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::Fallback()
    :
    mask{YType::str, "mask"},
    src_ip{YType::str, "src-ip"}
{

    yang_name = "fallback"; yang_parent_name = "auto-source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::~Fallback()
{
}

bool Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::has_data() const
{
    return mask.is_set
	|| src_ip.is_set;
}

bool Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(src_ip.yfilter);
}

std::string Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/device/Cisco-IOS-XE-device-tracking:tracking/probe/auto-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (src_ip.is_set || is_set(src_ip.yfilter)) leaf_name_data.push_back(src_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-ip")
    {
        src_ip = value;
        src_ip.value_namespace = name_space;
        src_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "src-ip")
    {
        src_ip.yfilter = yfilter;
    }
}

bool Native::Ip::Device::Tracking::Probe::AutoSource::Fallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "src-ip")
        return true;
    return false;
}

Native::Ip::Dhcp::Dhcp()
    :
    smart_relay{YType::empty, "Cisco-IOS-XE-dhcp:smart-relay"}
    	,
    bootp(std::make_shared<Native::Ip::Dhcp::Bootp>())
	,conflict(std::make_shared<Native::Ip::Dhcp::Conflict>())
	,relay(std::make_shared<Native::Ip::Dhcp::Relay>())
	,snooping(std::make_shared<Native::Ip::Dhcp::Snooping>())
	,snooping_conf(std::make_shared<Native::Ip::Dhcp::SnoopingConf>())
{
    bootp->parent = this;
    conflict->parent = this;
    relay->parent = this;
    snooping->parent = this;
    snooping_conf->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::~Dhcp()
{
}

bool Native::Ip::Dhcp::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<excluded_address.size(); index++)
    {
        if(excluded_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pool.size(); index++)
    {
        if(pool[index]->has_data())
            return true;
    }
    return smart_relay.is_set
	|| (bootp !=  nullptr && bootp->has_data())
	|| (conflict !=  nullptr && conflict->has_data())
	|| (relay !=  nullptr && relay->has_data())
	|| (snooping !=  nullptr && snooping->has_data())
	|| (snooping_conf !=  nullptr && snooping_conf->has_data());
}

bool Native::Ip::Dhcp::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<excluded_address.size(); index++)
    {
        if(excluded_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pool.size(); index++)
    {
        if(pool[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(smart_relay.yfilter)
	|| (bootp !=  nullptr && bootp->has_operation())
	|| (conflict !=  nullptr && conflict->has_operation())
	|| (relay !=  nullptr && relay->has_operation())
	|| (snooping !=  nullptr && snooping->has_operation())
	|| (snooping_conf !=  nullptr && snooping_conf->has_operation());
}

std::string Native::Ip::Dhcp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (smart_relay.is_set || is_set(smart_relay.yfilter)) leaf_name_data.push_back(smart_relay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bootp")
    {
        if(bootp == nullptr)
        {
            bootp = std::make_shared<Native::Ip::Dhcp::Bootp>();
        }
        return bootp;
    }

    if(child_yang_name == "class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Dhcp::Class_>();
        c->parent = this;
        class_.push_back(c);
        return c;
    }

    if(child_yang_name == "conflict")
    {
        if(conflict == nullptr)
        {
            conflict = std::make_shared<Native::Ip::Dhcp::Conflict>();
        }
        return conflict;
    }

    if(child_yang_name == "excluded-address")
    {
        for(auto const & c : excluded_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Dhcp::ExcludedAddress>();
        c->parent = this;
        excluded_address.push_back(c);
        return c;
    }

    if(child_yang_name == "pool")
    {
        for(auto const & c : pool)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Dhcp::Pool>();
        c->parent = this;
        pool.push_back(c);
        return c;
    }

    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Ip::Dhcp::Relay>();
        }
        return relay;
    }

    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    if(child_yang_name == "snooping-conf")
    {
        if(snooping_conf == nullptr)
        {
            snooping_conf = std::make_shared<Native::Ip::Dhcp::SnoopingConf>();
        }
        return snooping_conf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bootp != nullptr)
    {
        children["bootp"] = bootp;
    }

    for (auto const & c : class_)
    {
        children[c->get_segment_path()] = c;
    }

    if(conflict != nullptr)
    {
        children["conflict"] = conflict;
    }

    for (auto const & c : excluded_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pool)
    {
        children[c->get_segment_path()] = c;
    }

    if(relay != nullptr)
    {
        children["relay"] = relay;
    }

    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    if(snooping_conf != nullptr)
    {
        children["snooping-conf"] = snooping_conf;
    }

    return children;
}

void Native::Ip::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "smart-relay")
    {
        smart_relay = value;
        smart_relay.value_namespace = name_space;
        smart_relay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "smart-relay")
    {
        smart_relay.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootp" || name == "class" || name == "conflict" || name == "excluded-address" || name == "pool" || name == "relay" || name == "snooping" || name == "snooping-conf" || name == "smart-relay")
        return true;
    return false;
}

Native::Ip::Dhcp::Bootp::Bootp()
    :
    ignore{YType::empty, "ignore"}
{

    yang_name = "bootp"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Bootp::~Bootp()
{
}

bool Native::Ip::Dhcp::Bootp::has_data() const
{
    return ignore.is_set;
}

bool Native::Ip::Dhcp::Bootp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore.yfilter);
}

std::string Native::Ip::Dhcp::Bootp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Bootp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:bootp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Bootp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.yfilter)) leaf_name_data.push_back(ignore.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Bootp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Bootp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Bootp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore")
    {
        ignore = value;
        ignore.value_namespace = name_space;
        ignore.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Bootp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore")
    {
        ignore.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Bootp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore")
        return true;
    return false;
}

Native::Ip::Dhcp::Class_::Class_()
    :
    id{YType::str, "id"},
    remark{YType::str, "remark"}
    	,
    relay(std::make_shared<Native::Ip::Dhcp::Class_::Relay>())
{
    relay->parent = this;

    yang_name = "class"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Class_::~Class_()
{
}

bool Native::Ip::Dhcp::Class_::has_data() const
{
    return id.is_set
	|| remark.is_set
	|| (relay !=  nullptr && relay->has_data());
}

bool Native::Ip::Dhcp::Class_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(remark.yfilter)
	|| (relay !=  nullptr && relay->has_operation());
}

std::string Native::Ip::Dhcp::Class_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:class" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Class_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (remark.is_set || is_set(remark.yfilter)) leaf_name_data.push_back(remark.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Ip::Dhcp::Class_::Relay>();
        }
        return relay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Class_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(relay != nullptr)
    {
        children["relay"] = relay;
    }

    return children;
}

void Native::Ip::Dhcp::Class_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remark")
    {
        remark = value;
        remark.value_namespace = name_space;
        remark.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Class_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "remark")
    {
        remark.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Class_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "relay" || name == "id" || name == "remark")
        return true;
    return false;
}

Native::Ip::Dhcp::Class_::Relay::Relay()
    :
    agent(std::make_shared<Native::Ip::Dhcp::Class_::Relay::Agent>())
{
    agent->parent = this;

    yang_name = "relay"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Dhcp::Class_::Relay::~Relay()
{
}

bool Native::Ip::Dhcp::Class_::Relay::has_data() const
{
    return (agent !=  nullptr && agent->has_data());
}

bool Native::Ip::Dhcp::Class_::Relay::has_operation() const
{
    return is_set(yfilter)
	|| (agent !=  nullptr && agent->has_operation());
}

std::string Native::Ip::Dhcp::Class_::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Class_::Relay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Class_::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "agent")
    {
        if(agent == nullptr)
        {
            agent = std::make_shared<Native::Ip::Dhcp::Class_::Relay::Agent>();
        }
        return agent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Class_::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(agent != nullptr)
    {
        children["agent"] = agent;
    }

    return children;
}

void Native::Ip::Dhcp::Class_::Relay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Class_::Relay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Class_::Relay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agent")
        return true;
    return false;
}

Native::Ip::Dhcp::Class_::Relay::Agent::Agent()
    :
    information{YType::empty, "information"}
{

    yang_name = "agent"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Dhcp::Class_::Relay::Agent::~Agent()
{
}

bool Native::Ip::Dhcp::Class_::Relay::Agent::has_data() const
{
    return information.is_set;
}

bool Native::Ip::Dhcp::Class_::Relay::Agent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(information.yfilter);
}

std::string Native::Ip::Dhcp::Class_::Relay::Agent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Class_::Relay::Agent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (information.is_set || is_set(information.yfilter)) leaf_name_data.push_back(information.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Class_::Relay::Agent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Class_::Relay::Agent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Class_::Relay::Agent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "information")
    {
        information = value;
        information.value_namespace = name_space;
        information.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Class_::Relay::Agent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "information")
    {
        information.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Class_::Relay::Agent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information")
        return true;
    return false;
}

Native::Ip::Dhcp::Conflict::Conflict()
    :
    logging{YType::boolean, "logging"}
    	,
    resolution(nullptr) // presence node
{

    yang_name = "conflict"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Conflict::~Conflict()
{
}

bool Native::Ip::Dhcp::Conflict::has_data() const
{
    return logging.is_set
	|| (resolution !=  nullptr && resolution->has_data());
}

bool Native::Ip::Dhcp::Conflict::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| (resolution !=  nullptr && resolution->has_operation());
}

std::string Native::Ip::Dhcp::Conflict::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Conflict::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:conflict";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Conflict::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Conflict::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "resolution")
    {
        if(resolution == nullptr)
        {
            resolution = std::make_shared<Native::Ip::Dhcp::Conflict::Resolution>();
        }
        return resolution;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Conflict::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(resolution != nullptr)
    {
        children["resolution"] = resolution;
    }

    return children;
}

void Native::Ip::Dhcp::Conflict::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Conflict::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Conflict::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resolution" || name == "logging")
        return true;
    return false;
}

Native::Ip::Dhcp::Conflict::Resolution::Resolution()
    :
    interval{YType::uint32, "interval"}
{

    yang_name = "resolution"; yang_parent_name = "conflict"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Conflict::Resolution::~Resolution()
{
}

bool Native::Ip::Dhcp::Conflict::Resolution::has_data() const
{
    return interval.is_set;
}

bool Native::Ip::Dhcp::Conflict::Resolution::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Ip::Dhcp::Conflict::Resolution::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:conflict/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Conflict::Resolution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resolution";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Conflict::Resolution::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Conflict::Resolution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Conflict::Resolution::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Conflict::Resolution::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Conflict::Resolution::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Conflict::Resolution::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Ip::Dhcp::ExcludedAddress::ExcludedAddress()
    :
    low_address{YType::str, "low-address"},
    high_address{YType::str, "high-address"},
    vrf{YType::str, "vrf"}
{

    yang_name = "excluded-address"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::ExcludedAddress::~ExcludedAddress()
{
}

bool Native::Ip::Dhcp::ExcludedAddress::has_data() const
{
    return low_address.is_set
	|| high_address.is_set
	|| vrf.is_set;
}

bool Native::Ip::Dhcp::ExcludedAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(low_address.yfilter)
	|| ydk::is_set(high_address.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Ip::Dhcp::ExcludedAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::ExcludedAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:excluded-address" <<"[low-address='" <<low_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::ExcludedAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (low_address.is_set || is_set(low_address.yfilter)) leaf_name_data.push_back(low_address.get_name_leafdata());
    if (high_address.is_set || is_set(high_address.yfilter)) leaf_name_data.push_back(high_address.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::ExcludedAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::ExcludedAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::ExcludedAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "low-address")
    {
        low_address = value;
        low_address.value_namespace = name_space;
        low_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-address")
    {
        high_address = value;
        high_address.value_namespace = name_space;
        high_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::ExcludedAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "low-address")
    {
        low_address.yfilter = yfilter;
    }
    if(value_path == "high-address")
    {
        high_address.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::ExcludedAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "low-address" || name == "high-address" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Pool()
    :
    id{YType::str, "id"},
    default_router{YType::str, "default-router"},
    dns_server{YType::str, "dns-server"},
    domain_name{YType::str, "domain-name"},
    vrf{YType::str, "vrf"}
    	,
    network(std::make_shared<Native::Ip::Dhcp::Pool::Network>())
	,option(std::make_shared<Native::Ip::Dhcp::Pool::Option>())
{
    network->parent = this;
    option->parent = this;

    yang_name = "pool"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Pool::~Pool()
{
}

bool Native::Ip::Dhcp::Pool::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lease.size(); index++)
    {
        if(lease[index]->has_data())
            return true;
    }
    for (auto const & leaf : default_router.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set
	|| domain_name.is_set
	|| vrf.is_set
	|| (network !=  nullptr && network->has_data())
	|| (option !=  nullptr && option->has_data());
}

bool Native::Ip::Dhcp::Pool::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lease.size(); index++)
    {
        if(lease[index]->has_operation())
            return true;
    }
    for (auto const & leaf : default_router.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : dns_server.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(default_router.yfilter)
	|| ydk::is_set(dns_server.yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (network !=  nullptr && network->has_operation())
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Ip::Dhcp::Pool::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Pool::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:pool" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    auto default_router_name_datas = default_router.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), default_router_name_datas.begin(), default_router_name_datas.end());
    auto dns_server_name_datas = dns_server.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dns_server_name_datas.begin(), dns_server_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Dhcp::Pool::Class_>();
        c->parent = this;
        class_.push_back(c);
        return c;
    }

    if(child_yang_name == "lease")
    {
        for(auto const & c : lease)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Dhcp::Pool::Lease>();
        c->parent = this;
        lease.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Ip::Dhcp::Pool::Network>();
        }
        return network;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Ip::Dhcp::Pool::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : lease)
    {
        children[c->get_segment_path()] = c;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(option != nullptr)
    {
        children["option"] = option;
    }

    return children;
}

void Native::Ip::Dhcp::Pool::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-router")
    {
        default_router.append(value);
    }
    if(value_path == "dns-server")
    {
        dns_server.append(value);
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "default-router")
    {
        default_router.yfilter = yfilter;
    }
    if(value_path == "dns-server")
    {
        dns_server.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class" || name == "lease" || name == "network" || name == "option" || name == "id" || name == "default-router" || name == "dns-server" || name == "domain-name" || name == "vrf")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Class_::Class_()
    :
    name{YType::str, "name"}
    	,
    address(std::make_shared<Native::Ip::Dhcp::Pool::Class_::Address>())
{
    address->parent = this;

    yang_name = "class"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Dhcp::Pool::Class_::~Class_()
{
}

bool Native::Ip::Dhcp::Pool::Class_::has_data() const
{
    return name.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::Ip::Dhcp::Pool::Class_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Ip::Dhcp::Pool::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Class_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Ip::Dhcp::Pool::Class_::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Class_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Ip::Dhcp::Pool::Class_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::Class_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Class_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "name")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Class_::Address::Address()
    :
    range(std::make_shared<Native::Ip::Dhcp::Pool::Class_::Address::Range>())
{
    range->parent = this;

    yang_name = "address"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Dhcp::Pool::Class_::Address::~Address()
{
}

bool Native::Ip::Dhcp::Pool::Class_::Address::has_data() const
{
    return (range !=  nullptr && range->has_data());
}

bool Native::Ip::Dhcp::Pool::Class_::Address::has_operation() const
{
    return is_set(yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Ip::Dhcp::Pool::Class_::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Class_::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Class_::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Ip::Dhcp::Pool::Class_::Address::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Class_::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Ip::Dhcp::Pool::Class_::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Pool::Class_::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Pool::Class_::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Class_::Address::Range::Range()
    :
    ipv4_end{YType::str, "ipv4-end"},
    ipv4_start{YType::str, "ipv4-start"}
{

    yang_name = "range"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Dhcp::Pool::Class_::Address::Range::~Range()
{
}

bool Native::Ip::Dhcp::Pool::Class_::Address::Range::has_data() const
{
    return ipv4_end.is_set
	|| ipv4_start.is_set;
}

bool Native::Ip::Dhcp::Pool::Class_::Address::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_end.yfilter)
	|| ydk::is_set(ipv4_start.yfilter);
}

std::string Native::Ip::Dhcp::Pool::Class_::Address::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Class_::Address::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_end.is_set || is_set(ipv4_end.yfilter)) leaf_name_data.push_back(ipv4_end.get_name_leafdata());
    if (ipv4_start.is_set || is_set(ipv4_start.yfilter)) leaf_name_data.push_back(ipv4_start.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Class_::Address::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Class_::Address::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Pool::Class_::Address::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-end")
    {
        ipv4_end = value;
        ipv4_end.value_namespace = name_space;
        ipv4_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-start")
    {
        ipv4_start = value;
        ipv4_start.value_namespace = name_space;
        ipv4_start.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::Class_::Address::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-end")
    {
        ipv4_end.yfilter = yfilter;
    }
    if(value_path == "ipv4-start")
    {
        ipv4_start.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Class_::Address::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-end" || name == "ipv4-start")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Lease::Lease()
    :
    days{YType::uint16, "Days"},
    hours{YType::uint8, "Hours"},
    minutes{YType::uint8, "Minutes"}
{

    yang_name = "lease"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Dhcp::Pool::Lease::~Lease()
{
}

bool Native::Ip::Dhcp::Pool::Lease::has_data() const
{
    return days.is_set
	|| hours.is_set
	|| minutes.is_set;
}

bool Native::Ip::Dhcp::Pool::Lease::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(hours.yfilter)
	|| ydk::is_set(minutes.yfilter);
}

std::string Native::Ip::Dhcp::Pool::Lease::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lease" <<"[Days='" <<days <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Lease::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (hours.is_set || is_set(hours.yfilter)) leaf_name_data.push_back(hours.get_name_leafdata());
    if (minutes.is_set || is_set(minutes.yfilter)) leaf_name_data.push_back(minutes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Lease::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Lease::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Pool::Lease::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Hours")
    {
        hours = value;
        hours.value_namespace = name_space;
        hours.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Minutes")
    {
        minutes = value;
        minutes.value_namespace = name_space;
        minutes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::Lease::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "Hours")
    {
        hours.yfilter = yfilter;
    }
    if(value_path == "Minutes")
    {
        minutes.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Lease::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Days" || name == "Hours" || name == "Minutes")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Network::Network()
    :
    mask{YType::str, "mask"},
    number{YType::str, "number"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "network"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Dhcp::Pool::Network::~Network()
{
}

bool Native::Ip::Dhcp::Pool::Network::has_data() const
{
    return mask.is_set
	|| number.is_set
	|| secondary.is_set;
}

bool Native::Ip::Dhcp::Pool::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Ip::Dhcp::Pool::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Pool::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "secondary")
    {
        secondary.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "number" || name == "secondary")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Option::Option()
{

    yang_name = "option"; yang_parent_name = "pool"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Dhcp::Pool::Option::~Option()
{
}

bool Native::Ip::Dhcp::Pool::Option::has_data() const
{
    for (std::size_t index=0; index<option_range.size(); index++)
    {
        if(option_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ip::Dhcp::Pool::Option::has_operation() const
{
    for (std::size_t index=0; index<option_range.size(); index++)
    {
        if(option_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ip::Dhcp::Pool::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option-range")
    {
        for(auto const & c : option_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Ip::Dhcp::Pool::Option::OptionRange>();
        c->parent = this;
        option_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : option_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Ip::Dhcp::Pool::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Pool::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Pool::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option-range")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Option::OptionRange::OptionRange()
    :
    option_range{YType::uint8, "option-range"},
    ascii{YType::str, "ascii"},
    ip{YType::str, "ip"}
    	,
    hex(std::make_shared<Native::Ip::Dhcp::Pool::Option::OptionRange::Hex>())
{
    hex->parent = this;

    yang_name = "option-range"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Dhcp::Pool::Option::OptionRange::~OptionRange()
{
}

bool Native::Ip::Dhcp::Pool::Option::OptionRange::has_data() const
{
    for (auto const & leaf : ip.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return option_range.is_set
	|| ascii.is_set
	|| (hex !=  nullptr && hex->has_data());
}

bool Native::Ip::Dhcp::Pool::Option::OptionRange::has_operation() const
{
    for (auto const & leaf : ip.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option_range.yfilter)
	|| ydk::is_set(ascii.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| (hex !=  nullptr && hex->has_operation());
}

std::string Native::Ip::Dhcp::Pool::Option::OptionRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-range" <<"[option-range='" <<option_range <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Option::OptionRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_range.is_set || is_set(option_range.yfilter)) leaf_name_data.push_back(option_range.get_name_leafdata());
    if (ascii.is_set || is_set(ascii.yfilter)) leaf_name_data.push_back(ascii.get_name_leafdata());

    auto ip_name_datas = ip.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ip_name_datas.begin(), ip_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Option::OptionRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hex")
    {
        if(hex == nullptr)
        {
            hex = std::make_shared<Native::Ip::Dhcp::Pool::Option::OptionRange::Hex>();
        }
        return hex;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Option::OptionRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hex != nullptr)
    {
        children["hex"] = hex;
    }

    return children;
}

void Native::Ip::Dhcp::Pool::Option::OptionRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option-range")
    {
        option_range = value;
        option_range.value_namespace = name_space;
        option_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ascii")
    {
        ascii = value;
        ascii.value_namespace = name_space;
        ascii.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip.append(value);
    }
}

void Native::Ip::Dhcp::Pool::Option::OptionRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option-range")
    {
        option_range.yfilter = yfilter;
    }
    if(value_path == "ascii")
    {
        ascii.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Option::OptionRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hex" || name == "option-range" || name == "ascii" || name == "ip")
        return true;
    return false;
}

Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::Hex()
    :
    hex_line{YType::str, "hex-line"},
    none{YType::empty, "none"}
{

    yang_name = "hex"; yang_parent_name = "option-range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::~Hex()
{
}

bool Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::has_data() const
{
    return hex_line.is_set
	|| none.is_set;
}

bool Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hex_line.yfilter)
	|| ydk::is_set(none.yfilter);
}

std::string Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hex_line.is_set || is_set(hex_line.yfilter)) leaf_name_data.push_back(hex_line.get_name_leafdata());
    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hex-line")
    {
        hex_line = value;
        hex_line.value_namespace = name_space;
        hex_line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hex-line")
    {
        hex_line.yfilter = yfilter;
    }
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Pool::Option::OptionRange::Hex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hex-line" || name == "none")
        return true;
    return false;
}

Native::Ip::Dhcp::Relay::Relay()
    :
    information(std::make_shared<Native::Ip::Dhcp::Relay::Information>())
{
    information->parent = this;

    yang_name = "relay"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Relay::~Relay()
{
}

bool Native::Ip::Dhcp::Relay::has_data() const
{
    return (information !=  nullptr && information->has_data());
}

bool Native::Ip::Dhcp::Relay::has_operation() const
{
    return is_set(yfilter)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Ip::Dhcp::Relay::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:relay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Relay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Ip::Dhcp::Relay::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    return children;
}

void Native::Ip::Dhcp::Relay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ip::Dhcp::Relay::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ip::Dhcp::Relay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "information")
        return true;
    return false;
}

Native::Ip::Dhcp::Relay::Information::Information()
    :
    trust_all{YType::empty, "trust-all"}
    	,
    option(std::make_shared<Native::Ip::Dhcp::Relay::Information::Option>())
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "relay"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Relay::Information::~Information()
{
}

bool Native::Ip::Dhcp::Relay::Information::has_data() const
{
    return trust_all.is_set
	|| (option !=  nullptr && option->has_data());
}

bool Native::Ip::Dhcp::Relay::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust_all.yfilter)
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Ip::Dhcp::Relay::Information::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:relay/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Relay::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Relay::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust_all.is_set || is_set(trust_all.yfilter)) leaf_name_data.push_back(trust_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Relay::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Ip::Dhcp::Relay::Information::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Relay::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(option != nullptr)
    {
        children["option"] = option;
    }

    return children;
}

void Native::Ip::Dhcp::Relay::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust-all")
    {
        trust_all = value;
        trust_all.value_namespace = name_space;
        trust_all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Relay::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust-all")
    {
        trust_all.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Relay::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option" || name == "trust-all")
        return true;
    return false;
}

Native::Ip::Dhcp::Relay::Information::Option::Option()
    :
    option_default{YType::empty, "option-default"},
    vpn{YType::empty, "vpn"}
{

    yang_name = "option"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Relay::Information::Option::~Option()
{
}

bool Native::Ip::Dhcp::Relay::Information::Option::has_data() const
{
    return option_default.is_set
	|| vpn.is_set;
}

bool Native::Ip::Dhcp::Relay::Information::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(option_default.yfilter)
	|| ydk::is_set(vpn.yfilter);
}

std::string Native::Ip::Dhcp::Relay::Information::Option::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:relay/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Relay::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Relay::Information::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_default.is_set || is_set(option_default.yfilter)) leaf_name_data.push_back(option_default.get_name_leafdata());
    if (vpn.is_set || is_set(vpn.yfilter)) leaf_name_data.push_back(vpn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Relay::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Relay::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Relay::Information::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option-default")
    {
        option_default = value;
        option_default.value_namespace = name_space;
        option_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn")
    {
        vpn = value;
        vpn.value_namespace = name_space;
        vpn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Relay::Information::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option-default")
    {
        option_default.yfilter = yfilter;
    }
    if(value_path == "vpn")
    {
        vpn.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Relay::Information::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option-default" || name == "vpn")
        return true;
    return false;
}

Native::Ip::Dhcp::Snooping::Snooping()
    :
    vlan{YType::str, "vlan"}
    	,
    database(std::make_shared<Native::Ip::Dhcp::Snooping::Database>())
	,information(std::make_shared<Native::Ip::Dhcp::Snooping::Information>())
	,track(std::make_shared<Native::Ip::Dhcp::Snooping::Track>())
	,verify(std::make_shared<Native::Ip::Dhcp::Snooping::Verify>())
{
    database->parent = this;
    information->parent = this;
    track->parent = this;
    verify->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::Ip::Dhcp::Snooping::has_data() const
{
    return vlan.is_set
	|| (database !=  nullptr && database->has_data())
	|| (information !=  nullptr && information->has_data())
	|| (track !=  nullptr && track->has_data())
	|| (verify !=  nullptr && verify->has_data());
}

bool Native::Ip::Dhcp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (database !=  nullptr && database->has_operation())
	|| (information !=  nullptr && information->has_operation())
	|| (track !=  nullptr && track->has_operation())
	|| (verify !=  nullptr && verify->has_operation());
}

std::string Native::Ip::Dhcp::Snooping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<Native::Ip::Dhcp::Snooping::Database>();
        }
        return database;
    }

    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Ip::Dhcp::Snooping::Information>();
        }
        return information;
    }

    if(child_yang_name == "track")
    {
        if(track == nullptr)
        {
            track = std::make_shared<Native::Ip::Dhcp::Snooping::Track>();
        }
        return track;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Ip::Dhcp::Snooping::Verify>();
        }
        return verify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database != nullptr)
    {
        children["database"] = database;
    }

    if(information != nullptr)
    {
        children["information"] = information;
    }

    if(track != nullptr)
    {
        children["track"] = track;
    }

    if(verify != nullptr)
    {
        children["verify"] = verify;
    }

    return children;
}

void Native::Ip::Dhcp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "database" || name == "information" || name == "track" || name == "verify" || name == "vlan")
        return true;
    return false;
}

Native::Ip::Dhcp::Snooping::Database::Database()
    :
    timeout{YType::uint32, "timeout"},
    url{YType::str, "url"},
    write_delay{YType::uint32, "write-delay"}
{

    yang_name = "database"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Snooping::Database::~Database()
{
}

bool Native::Ip::Dhcp::Snooping::Database::has_data() const
{
    return timeout.is_set
	|| url.is_set
	|| write_delay.is_set;
}

bool Native::Ip::Dhcp::Snooping::Database::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(url.yfilter)
	|| ydk::is_set(write_delay.yfilter);
}

std::string Native::Ip::Dhcp::Snooping::Database::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Snooping::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Snooping::Database::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (url.is_set || is_set(url.yfilter)) leaf_name_data.push_back(url.get_name_leafdata());
    if (write_delay.is_set || is_set(write_delay.yfilter)) leaf_name_data.push_back(write_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Ip::Dhcp::Snooping::Database::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "url")
    {
        url = value;
        url.value_namespace = name_space;
        url.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write-delay")
    {
        write_delay = value;
        write_delay.value_namespace = name_space;
        write_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Snooping::Database::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "url")
    {
        url.yfilter = yfilter;
    }
    if(value_path == "write-delay")
    {
        write_delay.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Snooping::Database::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timeout" || name == "url" || name == "write-delay")
        return true;
    return false;
}

Native::Ip::Dhcp::Snooping::Information::Information()
    :
    option_conf{YType::boolean, "option-conf"}
    	,
    option(nullptr) // presence node
{

    yang_name = "information"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Snooping::Information::~Information()
{
}

bool Native::Ip::Dhcp::Snooping::Information::has_data() const
{
    return option_conf.is_set
	|| (option !=  nullptr && option->has_data());
}

bool Native::Ip::Dhcp::Snooping::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(option_conf.yfilter)
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Ip::Dhcp::Snooping::Information::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Snooping::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Snooping::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option_conf.is_set || is_set(option_conf.yfilter)) leaf_name_data.push_back(option_conf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Ip::Dhcp::Snooping::Information::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(option != nullptr)
    {
        children["option"] = option;
    }

    return children;
}

void Native::Ip::Dhcp::Snooping::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option-conf")
    {
        option_conf = value;
        option_conf.value_namespace = name_space;
        option_conf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Snooping::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option-conf")
    {
        option_conf.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Snooping::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "option" || name == "option-conf")
        return true;
    return false;
}

Native::Ip::Dhcp::Snooping::Information::Option::Option()
    :
    allow_untrusted{YType::empty, "allow-untrusted"}
    	,
    format(std::make_shared<Native::Ip::Dhcp::Snooping::Information::Option::Format>())
{
    format->parent = this;

    yang_name = "option"; yang_parent_name = "information"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ip::Dhcp::Snooping::Information::Option::~Option()
{
}

bool Native::Ip::Dhcp::Snooping::Information::Option::has_data() const
{
    return allow_untrusted.is_set
	|| (format !=  nullptr && format->has_data());
}

bool Native::Ip::Dhcp::Snooping::Information::Option::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_untrusted.yfilter)
	|| (format !=  nullptr && format->has_operation());
}

std::string Native::Ip::Dhcp::Snooping::Information::Option::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ip/dhcp/Cisco-IOS-XE-dhcp:snooping/information/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ip::Dhcp::Snooping::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ip::Dhcp::Snooping::Information::Option::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_untrusted.is_set || is_set(allow_untrusted.yfilter)) leaf_name_data.push_back(allow_untrusted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ip::Dhcp::Snooping::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format")
    {
        if(format == nullptr)
        {
            format = std::make_shared<Native::Ip::Dhcp::Snooping::Information::Option::Format>();
        }
        return format;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ip::Dhcp::Snooping::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(format != nullptr)
    {
        children["format"] = format;
    }

    return children;
}

void Native::Ip::Dhcp::Snooping::Information::Option::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-untrusted")
    {
        allow_untrusted = value;
        allow_untrusted.value_namespace = name_space;
        allow_untrusted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ip::Dhcp::Snooping::Information::Option::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-untrusted")
    {
        allow_untrusted.yfilter = yfilter;
    }
}

bool Native::Ip::Dhcp::Snooping::Information::Option::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format" || name == "allow-untrusted")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::Direction::input {0, "input"};
const Enum::YLeaf Native::Interface::Vlan::ServicePolicy::Type::PerformanceMonitor::Direction::output {1, "output"};

const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Action::deny {0, "deny"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Action::permit {1, "permit"};

const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::ahp {0, "ahp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::eigrp {1, "eigrp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::esp {2, "esp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::gre {3, "gre"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::icmp {4, "icmp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::igmp {5, "igmp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::ip {6, "ip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::ipinip {7, "ipinip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::nos {8, "nos"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::object_group {9, "object-group"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::ospf {10, "ospf"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::pcp {11, "pcp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::pim {12, "pim"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::tcp {13, "tcp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Protocol::udp {14, "udp"};

const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::add_ext {0, "add-ext"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::any_options {1, "any-options"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::com_security {2, "com-security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::dps {3, "dps"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::encode {4, "encode"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::eool {5, "eool"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::ext_ip {6, "ext-ip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::ext_security {7, "ext-security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::finn {8, "finn"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::imitd {9, "imitd"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::lsr {10, "lsr"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::mtup {11, "mtup"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::mtur {12, "mtur"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::no_op {13, "no-op"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::nsapa {14, "nsapa"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::record_route {15, "record-route"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::router_alert {16, "router-alert"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::sdb {17, "sdb"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::security {18, "security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::ssr {19, "ssr"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::stream_id {20, "stream-id"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::timestamp {21, "timestamp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::traceroute {22, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::ump {23, "ump"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::visa {24, "visa"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Option::zsu {25, "zsu"};

const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence::critical {0, "critical"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence::flash {1, "flash"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence::flash_override {2, "flash-override"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence::immediate {3, "immediate"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence::internet {4, "internet"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence::network {5, "network"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence::priority {6, "priority"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Precedence::routine {7, "routine"};

const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Tos::max_reliability {0, "max-reliability"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Tos::max_throughput {1, "max-throughput"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Tos::min_delay {2, "min-delay"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Tos::min_monetary_cost {3, "min-monetary-cost"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::Tos::normal {4, "normal"};

const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::administratively_prohibited {0, "administratively-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::alternate_address {1, "alternate-address"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::conversion_error {2, "conversion-error"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::dod_host_prohibited {3, "dod-host-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::dod_net_prohibited {4, "dod-net-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::echo {5, "echo"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::echo_reply {6, "echo-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::general_parameter_problem {7, "general-parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::host_isolated {8, "host-isolated"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::host_precedence_unreachable {9, "host-precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::host_redirect {10, "host-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::host_tos_redirect {11, "host-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::host_tos_unreachable {12, "host-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::host_unknown {13, "host-unknown"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::host_unreachable {14, "host-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::information_reply {15, "information-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::information_request {16, "information-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::mask_reply {17, "mask-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::mask_request {18, "mask-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::mobile_redirect {19, "mobile-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::net_redirect {20, "net-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::net_tos_redirect {21, "net-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::net_tos_unreachable {22, "net-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::net_unreachable {23, "net-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::network_unknown {24, "network-unknown"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::no_room_for_option {25, "no-room-for-option"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::option_missing {26, "option-missing"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::packet_too_big {27, "packet-too-big"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::parameter_problem {28, "parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::port_unreachable {29, "port-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::precedence_unreachable {30, "precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::protocol_unreachable {31, "protocol-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::reassembly_timeout {32, "reassembly-timeout"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::redirect {33, "redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::router_advertisement {34, "router-advertisement"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::router_solicitation {35, "router-solicitation"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::source_quench {36, "source-quench"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::source_route_failed {37, "source-route-failed"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::time_exceeded {38, "time-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::timestamp_reply {39, "timestamp-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::timestamp_request {40, "timestamp-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::traceroute {41, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::ttl_exceeded {42, "ttl-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::Extended::AccessListSeqRule::AceRule::NamedMsgType::unreachable {43, "unreachable"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Action::deny {0, "deny"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Action::permit {1, "permit"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::ahp {0, "ahp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::eigrp {1, "eigrp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::esp {2, "esp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::gre {3, "gre"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::icmp {4, "icmp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::igmp {5, "igmp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::ip {6, "ip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::ipinip {7, "ipinip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::nos {8, "nos"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::object_group {9, "object-group"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::ospf {10, "ospf"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::pcp {11, "pcp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::pim {12, "pim"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::tcp {13, "tcp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Protocol::udp {14, "udp"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::add_ext {0, "add-ext"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::any_options {1, "any-options"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::com_security {2, "com-security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::dps {3, "dps"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::encode {4, "encode"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::eool {5, "eool"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::ext_ip {6, "ext-ip"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::ext_security {7, "ext-security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::finn {8, "finn"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::imitd {9, "imitd"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::lsr {10, "lsr"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::mtup {11, "mtup"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::mtur {12, "mtur"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::no_op {13, "no-op"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::nsapa {14, "nsapa"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::record_route {15, "record-route"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::router_alert {16, "router-alert"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::sdb {17, "sdb"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::security {18, "security"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::ssr {19, "ssr"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::stream_id {20, "stream-id"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::timestamp {21, "timestamp"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::traceroute {22, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::ump {23, "ump"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::visa {24, "visa"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Option::zsu {25, "zsu"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Precedence::critical {0, "critical"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Precedence::flash {1, "flash"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Precedence::flash_override {2, "flash-override"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Precedence::immediate {3, "immediate"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Precedence::internet {4, "internet"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Precedence::network {5, "network"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Precedence::priority {6, "priority"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Precedence::routine {7, "routine"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Tos::max_reliability {0, "max-reliability"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Tos::max_throughput {1, "max-throughput"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Tos::min_delay {2, "min-delay"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Tos::min_monetary_cost {3, "min-monetary-cost"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::Tos::normal {4, "normal"};

const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::administratively_prohibited {0, "administratively-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::alternate_address {1, "alternate-address"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::conversion_error {2, "conversion-error"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::dod_host_prohibited {3, "dod-host-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::dod_net_prohibited {4, "dod-net-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::echo {5, "echo"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::echo_reply {6, "echo-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::general_parameter_problem {7, "general-parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_isolated {8, "host-isolated"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_precedence_unreachable {9, "host-precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_redirect {10, "host-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_tos_redirect {11, "host-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_tos_unreachable {12, "host-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_unknown {13, "host-unknown"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_unreachable {14, "host-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::information_reply {15, "information-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::information_request {16, "information-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::mask_reply {17, "mask-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::mask_request {18, "mask-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::mobile_redirect {19, "mobile-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::net_redirect {20, "net-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::net_tos_redirect {21, "net-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::net_tos_unreachable {22, "net-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::net_unreachable {23, "net-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::network_unknown {24, "network-unknown"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::no_room_for_option {25, "no-room-for-option"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::option_missing {26, "option-missing"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::packet_too_big {27, "packet-too-big"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::parameter_problem {28, "parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::port_unreachable {29, "port-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::precedence_unreachable {30, "precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::protocol_unreachable {31, "protocol-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::reassembly_timeout {32, "reassembly-timeout"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::redirect {33, "redirect"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::router_advertisement {34, "router-advertisement"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::router_solicitation {35, "router-solicitation"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::source_quench {36, "source-quench"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::source_route_failed {37, "source-route-failed"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::time_exceeded {38, "time-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::timestamp_reply {39, "timestamp-reply"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::timestamp_request {40, "timestamp-request"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::traceroute {41, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::ttl_exceeded {42, "ttl-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::Extended::Default_::AccessListSeqRule::AceRule::NamedMsgType::unreachable {43, "unreachable"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Action::deny {0, "deny"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Action::permit {1, "permit"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::ahp {0, "ahp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::eigrp {1, "eigrp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::esp {2, "esp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::gre {3, "gre"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::icmp {4, "icmp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::igmp {5, "igmp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::ip {6, "ip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::ipinip {7, "ipinip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::nos {8, "nos"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::object_group {9, "object-group"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::ospf {10, "ospf"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::pcp {11, "pcp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::pim {12, "pim"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::tcp {13, "tcp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Protocol::udp {14, "udp"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::add_ext {0, "add-ext"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::any_options {1, "any-options"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::com_security {2, "com-security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::dps {3, "dps"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::encode {4, "encode"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::eool {5, "eool"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::ext_ip {6, "ext-ip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::ext_security {7, "ext-security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::finn {8, "finn"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::imitd {9, "imitd"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::lsr {10, "lsr"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::mtup {11, "mtup"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::mtur {12, "mtur"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::no_op {13, "no-op"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::nsapa {14, "nsapa"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::record_route {15, "record-route"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::router_alert {16, "router-alert"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::sdb {17, "sdb"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::security {18, "security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::ssr {19, "ssr"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::stream_id {20, "stream-id"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::timestamp {21, "timestamp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::traceroute {22, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::ump {23, "ump"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::visa {24, "visa"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Option::zsu {25, "zsu"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence::critical {0, "critical"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence::flash {1, "flash"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence::flash_override {2, "flash-override"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence::immediate {3, "immediate"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence::internet {4, "internet"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence::network {5, "network"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence::priority {6, "priority"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Precedence::routine {7, "routine"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Tos::max_reliability {0, "max-reliability"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Tos::max_throughput {1, "max-throughput"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Tos::min_delay {2, "min-delay"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Tos::min_monetary_cost {3, "min-monetary-cost"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::Tos::normal {4, "normal"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::administratively_prohibited {0, "administratively-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::alternate_address {1, "alternate-address"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::conversion_error {2, "conversion-error"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::dod_host_prohibited {3, "dod-host-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::dod_net_prohibited {4, "dod-net-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::echo {5, "echo"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::echo_reply {6, "echo-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::general_parameter_problem {7, "general-parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::host_isolated {8, "host-isolated"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::host_precedence_unreachable {9, "host-precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::host_redirect {10, "host-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::host_tos_redirect {11, "host-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::host_tos_unreachable {12, "host-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::host_unknown {13, "host-unknown"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::host_unreachable {14, "host-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::information_reply {15, "information-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::information_request {16, "information-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::mask_reply {17, "mask-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::mask_request {18, "mask-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::mobile_redirect {19, "mobile-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::net_redirect {20, "net-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::net_tos_redirect {21, "net-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::net_tos_unreachable {22, "net-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::net_unreachable {23, "net-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::network_unknown {24, "network-unknown"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::no_room_for_option {25, "no-room-for-option"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::option_missing {26, "option-missing"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::packet_too_big {27, "packet-too-big"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::parameter_problem {28, "parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::port_unreachable {29, "port-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::precedence_unreachable {30, "precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::protocol_unreachable {31, "protocol-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::reassembly_timeout {32, "reassembly-timeout"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::redirect {33, "redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::router_advertisement {34, "router-advertisement"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::router_solicitation {35, "router-solicitation"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::source_quench {36, "source-quench"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::source_route_failed {37, "source-route-failed"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::time_exceeded {38, "time-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::timestamp_reply {39, "timestamp-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::timestamp_request {40, "timestamp-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::traceroute {41, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::ttl_exceeded {42, "ttl-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::AccessListSeqRule::AceRule::NamedMsgType::unreachable {43, "unreachable"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Action::deny {0, "deny"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Action::permit {1, "permit"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::ahp {0, "ahp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::eigrp {1, "eigrp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::esp {2, "esp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::gre {3, "gre"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::icmp {4, "icmp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::igmp {5, "igmp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::ip {6, "ip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::ipinip {7, "ipinip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::nos {8, "nos"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::object_group {9, "object-group"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::ospf {10, "ospf"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::pcp {11, "pcp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::pim {12, "pim"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::tcp {13, "tcp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Protocol::udp {14, "udp"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::add_ext {0, "add-ext"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::any_options {1, "any-options"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::com_security {2, "com-security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::dps {3, "dps"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::encode {4, "encode"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::eool {5, "eool"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::ext_ip {6, "ext-ip"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::ext_security {7, "ext-security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::finn {8, "finn"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::imitd {9, "imitd"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::lsr {10, "lsr"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::mtup {11, "mtup"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::mtur {12, "mtur"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::no_op {13, "no-op"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::nsapa {14, "nsapa"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::record_route {15, "record-route"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::router_alert {16, "router-alert"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::sdb {17, "sdb"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::security {18, "security"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::ssr {19, "ssr"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::stream_id {20, "stream-id"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::timestamp {21, "timestamp"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::traceroute {22, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::ump {23, "ump"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::visa {24, "visa"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Option::zsu {25, "zsu"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Precedence::critical {0, "critical"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Precedence::flash {1, "flash"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Precedence::flash_override {2, "flash-override"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Precedence::immediate {3, "immediate"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Precedence::internet {4, "internet"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Precedence::network {5, "network"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Precedence::priority {6, "priority"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Precedence::routine {7, "routine"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Tos::max_reliability {0, "max-reliability"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Tos::max_throughput {1, "max-throughput"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Tos::min_delay {2, "min-delay"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Tos::min_monetary_cost {3, "min-monetary-cost"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::Tos::normal {4, "normal"};

const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::administratively_prohibited {0, "administratively-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::alternate_address {1, "alternate-address"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::conversion_error {2, "conversion-error"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::dod_host_prohibited {3, "dod-host-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::dod_net_prohibited {4, "dod-net-prohibited"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::echo {5, "echo"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::echo_reply {6, "echo-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::general_parameter_problem {7, "general-parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_isolated {8, "host-isolated"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_precedence_unreachable {9, "host-precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_redirect {10, "host-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_tos_redirect {11, "host-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_tos_unreachable {12, "host-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_unknown {13, "host-unknown"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::host_unreachable {14, "host-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::information_reply {15, "information-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::information_request {16, "information-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::mask_reply {17, "mask-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::mask_request {18, "mask-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::mobile_redirect {19, "mobile-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::net_redirect {20, "net-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::net_tos_redirect {21, "net-tos-redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::net_tos_unreachable {22, "net-tos-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::net_unreachable {23, "net-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::network_unknown {24, "network-unknown"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::no_room_for_option {25, "no-room-for-option"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::option_missing {26, "option-missing"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::packet_too_big {27, "packet-too-big"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::parameter_problem {28, "parameter-problem"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::port_unreachable {29, "port-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::precedence_unreachable {30, "precedence-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::protocol_unreachable {31, "protocol-unreachable"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::reassembly_timeout {32, "reassembly-timeout"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::redirect {33, "redirect"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::router_advertisement {34, "router-advertisement"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::router_solicitation {35, "router-solicitation"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::source_quench {36, "source-quench"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::source_route_failed {37, "source-route-failed"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::time_exceeded {38, "time-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::timestamp_reply {39, "timestamp-reply"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::timestamp_request {40, "timestamp-request"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::traceroute {41, "traceroute"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::ttl_exceeded {42, "ttl-exceeded"};
const Enum::YLeaf Native::Ip::AccessList::RoleBased::Default_::AccessListSeqRule::AceRule::NamedMsgType::unreachable {43, "unreachable"};


}
}

