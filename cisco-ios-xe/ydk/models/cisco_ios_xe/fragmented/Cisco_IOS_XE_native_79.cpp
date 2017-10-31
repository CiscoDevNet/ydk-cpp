
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_79.hpp"
#include "Cisco_IOS_XE_native_81.hpp"
#include "Cisco_IOS_XE_native_84.hpp"
#include "Cisco_IOS_XE_native_83.hpp"
#include "Cisco_IOS_XE_native_80.hpp"
#include "Cisco_IOS_XE_native_82.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::BridgeDomain::BridgeDomain()
    :
    c_mac(std::make_shared<Native::BridgeDomain::CMac>())
	,otv(std::make_shared<Native::BridgeDomain::Otv>())
	,parameterized(std::make_shared<Native::BridgeDomain::Parameterized>())
{
    c_mac->parent = this;
    otv->parent = this;
    parameterized->parent = this;

    yang_name = "bridge-domain"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::~BridgeDomain()
{
}

bool Native::BridgeDomain::has_data() const
{
    for (std::size_t index=0; index<brd_id.size(); index++)
    {
        if(brd_id[index]->has_data())
            return true;
    }
    return (c_mac !=  nullptr && c_mac->has_data())
	|| (otv !=  nullptr && otv->has_data())
	|| (parameterized !=  nullptr && parameterized->has_data());
}

bool Native::BridgeDomain::has_operation() const
{
    for (std::size_t index=0; index<brd_id.size(); index++)
    {
        if(brd_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (c_mac !=  nullptr && c_mac->has_operation())
	|| (otv !=  nullptr && otv->has_operation())
	|| (parameterized !=  nullptr && parameterized->has_operation());
}

std::string Native::BridgeDomain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brd-id")
    {
        for(auto const & c : brd_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::BrdId>();
        c->parent = this;
        brd_id.push_back(c);
        return c;
    }

    if(child_yang_name == "c-mac")
    {
        if(c_mac == nullptr)
        {
            c_mac = std::make_shared<Native::BridgeDomain::CMac>();
        }
        return c_mac;
    }

    if(child_yang_name == "otv")
    {
        if(otv == nullptr)
        {
            otv = std::make_shared<Native::BridgeDomain::Otv>();
        }
        return otv;
    }

    if(child_yang_name == "parameterized")
    {
        if(parameterized == nullptr)
        {
            parameterized = std::make_shared<Native::BridgeDomain::Parameterized>();
        }
        return parameterized;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : brd_id)
    {
        children[c->get_segment_path()] = c;
    }

    if(c_mac != nullptr)
    {
        children["c-mac"] = c_mac;
    }

    if(otv != nullptr)
    {
        children["otv"] = otv;
    }

    if(parameterized != nullptr)
    {
        children["parameterized"] = parameterized;
    }

    return children;
}

void Native::BridgeDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brd-id" || name == "c-mac" || name == "otv" || name == "parameterized")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::BrdId()
    :
    bridge_domain_id{YType::uint16, "bridge-domain-id"},
    shutdown{YType::empty, "shutdown"}
    	,
    ip(std::make_shared<Native::BridgeDomain::BrdId::Ip>())
	,mac(std::make_shared<Native::BridgeDomain::BrdId::Mac>())
	,member(std::make_shared<Native::BridgeDomain::BrdId::Member>())
{
    ip->parent = this;
    mac->parent = this;
    member->parent = this;

    yang_name = "brd-id"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::BrdId::~BrdId()
{
}

bool Native::BridgeDomain::BrdId::has_data() const
{
    return bridge_domain_id.is_set
	|| shutdown.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (member !=  nullptr && member->has_data());
}

bool Native::BridgeDomain::BrdId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_domain_id.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (member !=  nullptr && member->has_operation());
}

std::string Native::BridgeDomain::BrdId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::BrdId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bridge-domain:brd-id" <<"[bridge-domain-id='" <<bridge_domain_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_domain_id.is_set || is_set(bridge_domain_id.yfilter)) leaf_name_data.push_back(bridge_domain_id.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::BridgeDomain::BrdId::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::BridgeDomain::BrdId::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "member")
    {
        if(member == nullptr)
        {
            member = std::make_shared<Native::BridgeDomain::BrdId::Member>();
        }
        return member;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(member != nullptr)
    {
        children["member"] = member;
    }

    return children;
}

void Native::BridgeDomain::BrdId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id = value;
        bridge_domain_id.value_namespace = name_space;
        bridge_domain_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "mac" || name == "member" || name == "bridge-domain-id" || name == "shutdown")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Ip::Ip()
    :
    igmp(std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp>())
{
    igmp->parent = this;

    yang_name = "ip"; yang_parent_name = "brd-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Ip::~Ip()
{
}

bool Native::BridgeDomain::BrdId::Ip::has_data() const
{
    return (igmp !=  nullptr && igmp->has_data());
}

bool Native::BridgeDomain::BrdId::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (igmp !=  nullptr && igmp->has_operation());
}

std::string Native::BridgeDomain::BrdId::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp>();
        }
        return igmp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igmp != nullptr)
    {
        children["igmp"] = igmp;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::BrdId::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::BrdId::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igmp")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Igmp()
    :
    snooping(nullptr) // presence node
{

    yang_name = "igmp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Ip::Igmp::~Igmp()
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::BridgeDomain::BrdId::Ip::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Ip::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Ip::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::BrdId::Ip::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Snooping()
    :
    immediate_leave{YType::empty, "immediate-leave"},
    last_member_query_count{YType::uint8, "last-member-query-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    report_suppression{YType::empty, "report-suppression"},
    robustness_variable{YType::uint8, "robustness-variable"},
    static_{YType::str, "static"}
    	,
    check(std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check>())
	,explicit_tracking(std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking>())
	,mrouter(std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter>())
	,querier(nullptr) // presence node
{
    check->parent = this;
    explicit_tracking->parent = this;
    mrouter->parent = this;

    yang_name = "snooping"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::~Snooping()
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::has_data() const
{
    return immediate_leave.is_set
	|| last_member_query_count.is_set
	|| last_member_query_interval.is_set
	|| report_suppression.is_set
	|| robustness_variable.is_set
	|| static_.is_set
	|| (check !=  nullptr && check->has_data())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data())
	|| (mrouter !=  nullptr && mrouter->has_data())
	|| (querier !=  nullptr && querier->has_data());
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(immediate_leave.yfilter)
	|| ydk::is_set(last_member_query_count.yfilter)
	|| ydk::is_set(last_member_query_interval.yfilter)
	|| ydk::is_set(report_suppression.yfilter)
	|| ydk::is_set(robustness_variable.yfilter)
	|| ydk::is_set(static_.yfilter)
	|| (check !=  nullptr && check->has_operation())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_operation())
	|| (mrouter !=  nullptr && mrouter->has_operation())
	|| (querier !=  nullptr && querier->has_operation());
}

std::string Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (immediate_leave.is_set || is_set(immediate_leave.yfilter)) leaf_name_data.push_back(immediate_leave.get_name_leafdata());
    if (last_member_query_count.is_set || is_set(last_member_query_count.yfilter)) leaf_name_data.push_back(last_member_query_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.yfilter)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (report_suppression.is_set || is_set(report_suppression.yfilter)) leaf_name_data.push_back(report_suppression.get_name_leafdata());
    if (robustness_variable.is_set || is_set(robustness_variable.yfilter)) leaf_name_data.push_back(robustness_variable.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "check")
    {
        if(check == nullptr)
        {
            check = std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check>();
        }
        return check;
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking == nullptr)
        {
            explicit_tracking = std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking>();
        }
        return explicit_tracking;
    }

    if(child_yang_name == "mrouter")
    {
        if(mrouter == nullptr)
        {
            mrouter = std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter>();
        }
        return mrouter;
    }

    if(child_yang_name == "querier")
    {
        if(querier == nullptr)
        {
            querier = std::make_shared<Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier>();
        }
        return querier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(check != nullptr)
    {
        children["check"] = check;
    }

    if(explicit_tracking != nullptr)
    {
        children["explicit-tracking"] = explicit_tracking;
    }

    if(mrouter != nullptr)
    {
        children["mrouter"] = mrouter;
    }

    if(querier != nullptr)
    {
        children["querier"] = querier;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "immediate-leave")
    {
        immediate_leave = value;
        immediate_leave.value_namespace = name_space;
        immediate_leave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count = value;
        last_member_query_count.value_namespace = name_space;
        last_member_query_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
        last_member_query_interval.value_namespace = name_space;
        last_member_query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-suppression")
    {
        report_suppression = value;
        report_suppression.value_namespace = name_space;
        report_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable = value;
        robustness_variable.value_namespace = name_space;
        robustness_variable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "immediate-leave")
    {
        immediate_leave.yfilter = yfilter;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count.yfilter = yfilter;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval.yfilter = yfilter;
    }
    if(value_path == "report-suppression")
    {
        report_suppression.yfilter = yfilter;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "check" || name == "explicit-tracking" || name == "mrouter" || name == "querier" || name == "immediate-leave" || name == "last-member-query-count" || name == "last-member-query-interval" || name == "report-suppression" || name == "robustness-variable" || name == "static")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::Check()
    :
    rtr_alert_option{YType::empty, "rtr-alert-option"},
    ttl{YType::empty, "ttl"}
{

    yang_name = "check"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::~Check()
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::has_data() const
{
    return rtr_alert_option.is_set
	|| ttl.is_set;
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtr_alert_option.yfilter)
	|| ydk::is_set(ttl.yfilter);
}

std::string Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_alert_option.is_set || is_set(rtr_alert_option.yfilter)) leaf_name_data.push_back(rtr_alert_option.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr-alert-option")
    {
        rtr_alert_option = value;
        rtr_alert_option.value_namespace = name_space;
        rtr_alert_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr-alert-option")
    {
        rtr_alert_option.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Check::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr-alert-option" || name == "ttl")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::ExplicitTracking()
    :
    limit{YType::empty, "limit"}
{

    yang_name = "explicit-tracking"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::~ExplicitTracking()
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::has_data() const
{
    return limit.is_set;
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::ExplicitTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::Mrouter()
    :
    interface{YType::empty, "interface"}
{

    yang_name = "mrouter"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::~Mrouter()
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::has_data() const
{
    return interface.is_set;
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrouter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Mrouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::Querier()
    :
    address{YType::empty, "address"},
    max_response_time{YType::empty, "max-response-time"},
    query_interval{YType::empty, "query-interval"},
    tcn{YType::empty, "tcn"},
    timer{YType::empty, "timer"},
    version{YType::empty, "version"}
{

    yang_name = "querier"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::~Querier()
{
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::has_data() const
{
    return address.is_set
	|| max_response_time.is_set
	|| query_interval.is_set
	|| tcn.is_set
	|| timer.is_set
	|| version.is_set;
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| ydk::is_set(tcn.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (tcn.is_set || is_set(tcn.yfilter)) leaf_name_data.push_back(tcn.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcn")
    {
        tcn = value;
        tcn.value_namespace = name_space;
        tcn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
    if(value_path == "tcn")
    {
        tcn.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Ip::Igmp::Snooping::Querier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "max-response-time" || name == "query-interval" || name == "tcn" || name == "timer" || name == "version")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Mac::Mac()
    :
    aging_time{YType::uint16, "aging-time"},
    learning{YType::empty, "learning"}
    	,
    limit(std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit>())
{
    limit->parent = this;

    yang_name = "mac"; yang_parent_name = "brd-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Mac::~Mac()
{
}

bool Native::BridgeDomain::BrdId::Mac::has_data() const
{
    return aging_time.is_set
	|| learning.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::BridgeDomain::BrdId::Mac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aging_time.yfilter)
	|| ydk::is_set(learning.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::BridgeDomain::BrdId::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aging_time.is_set || is_set(aging_time.yfilter)) leaf_name_data.push_back(aging_time.get_name_leafdata());
    if (learning.is_set || is_set(learning.yfilter)) leaf_name_data.push_back(learning.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aging-time")
    {
        aging_time = value;
        aging_time.value_namespace = name_space;
        aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learning")
    {
        learning = value;
        learning.value_namespace = name_space;
        learning.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aging-time")
    {
        aging_time.yfilter = yfilter;
    }
    if(value_path == "learning")
    {
        learning.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "aging-time" || name == "learning")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Mac::Limit::Limit()
    :
    action(std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit::Action>())
	,maximum(std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit::Maximum>())
{
    action->parent = this;
    maximum->parent = this;

    yang_name = "limit"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Mac::Limit::~Limit()
{
}

bool Native::BridgeDomain::BrdId::Mac::Limit::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (maximum !=  nullptr && maximum->has_data());
}

bool Native::BridgeDomain::BrdId::Mac::Limit::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation());
}

std::string Native::BridgeDomain::BrdId::Mac::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Mac::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Mac::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit::Action>();
        }
        return action;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit::Maximum>();
        }
        return maximum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Mac::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Mac::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::BrdId::Mac::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::BrdId::Mac::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "maximum")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Mac::Limit::Action::Action()
    :
    flooding(std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding>())
{
    flooding->parent = this;

    yang_name = "action"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Mac::Limit::Action::~Action()
{
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Action::has_data() const
{
    return (flooding !=  nullptr && flooding->has_data());
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Action::has_operation() const
{
    return is_set(yfilter)
	|| (flooding !=  nullptr && flooding->has_operation());
}

std::string Native::BridgeDomain::BrdId::Mac::Limit::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Mac::Limit::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Mac::Limit::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flooding")
    {
        if(flooding == nullptr)
        {
            flooding = std::make_shared<Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding>();
        }
        return flooding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Mac::Limit::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flooding != nullptr)
    {
        children["flooding"] = flooding;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Mac::Limit::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::BrdId::Mac::Limit::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flooding")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::Flooding()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "flooding"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::~Flooding()
{
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::has_data() const
{
    return disable.is_set;
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Action::Flooding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Mac::Limit::Maximum::Maximum()
    :
    addresses{YType::uint32, "addresses"}
{

    yang_name = "maximum"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Mac::Limit::Maximum::~Maximum()
{
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Maximum::has_data() const
{
    return addresses.is_set;
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addresses.yfilter);
}

std::string Native::BridgeDomain::BrdId::Mac::Limit::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Mac::Limit::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addresses.is_set || is_set(addresses.yfilter)) leaf_name_data.push_back(addresses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Mac::Limit::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Mac::Limit::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Mac::Limit::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addresses")
    {
        addresses = value;
        addresses.value_namespace = name_space;
        addresses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Mac::Limit::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addresses")
    {
        addresses.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Mac::Limit::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::Member()
    :
    analysis_module{YType::uint8, "Analysis-Module"},
    fcpa{YType::uint8, "Fcpa"},
    sbc{YType::uint32, "SBC"},
    sonet_acr{YType::uint8, "SONET_ACR"},
    y_controller{YType::str, "_controller"},
    service_engine{YType::uint8, "Service-Engine"},
    tunnel_tp{YType::uint16, "Tunnel-tp"},
    vpn{YType::uint32, "VPN"},
    virtual_tokenring{YType::uint32, "Virtual-TokenRing"},
    ucse{YType::uint8, "ucse"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    vfi{YType::str, "vfi"},
    vni{YType::uint32, "vni"}
{

    yang_name = "member"; yang_parent_name = "brd-id"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::~Member()
{
}

bool Native::BridgeDomain::BrdId::Member::has_data() const
{
    for (std::size_t index=0; index<mem_ipv4.size(); index++)
    {
        if(mem_ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<acr.size(); index++)
    {
        if(acr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_data())
            return true;
    }
    return analysis_module.is_set
	|| fcpa.is_set
	|| sbc.is_set
	|| sonet_acr.is_set
	|| y_controller.is_set
	|| service_engine.is_set
	|| tunnel_tp.is_set
	|| vpn.is_set
	|| virtual_tokenring.is_set
	|| ucse.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| vfi.is_set
	|| vni.is_set;
}

bool Native::BridgeDomain::BrdId::Member::has_operation() const
{
    for (std::size_t index=0; index<mem_ipv4.size(); index++)
    {
        if(mem_ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<acr.size(); index++)
    {
        if(acr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(analysis_module.yfilter)
	|| ydk::is_set(fcpa.yfilter)
	|| ydk::is_set(sbc.yfilter)
	|| ydk::is_set(sonet_acr.yfilter)
	|| ydk::is_set(y_controller.yfilter)
	|| ydk::is_set(service_engine.yfilter)
	|| ydk::is_set(tunnel_tp.yfilter)
	|| ydk::is_set(vpn.yfilter)
	|| ydk::is_set(virtual_tokenring.yfilter)
	|| ydk::is_set(ucse.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(vfi.yfilter)
	|| ydk::is_set(vni.yfilter);
}

std::string Native::BridgeDomain::BrdId::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (analysis_module.is_set || is_set(analysis_module.yfilter)) leaf_name_data.push_back(analysis_module.get_name_leafdata());
    if (fcpa.is_set || is_set(fcpa.yfilter)) leaf_name_data.push_back(fcpa.get_name_leafdata());
    if (sbc.is_set || is_set(sbc.yfilter)) leaf_name_data.push_back(sbc.get_name_leafdata());
    if (sonet_acr.is_set || is_set(sonet_acr.yfilter)) leaf_name_data.push_back(sonet_acr.get_name_leafdata());
    if (y_controller.is_set || is_set(y_controller.yfilter)) leaf_name_data.push_back(y_controller.get_name_leafdata());
    if (service_engine.is_set || is_set(service_engine.yfilter)) leaf_name_data.push_back(service_engine.get_name_leafdata());
    if (tunnel_tp.is_set || is_set(tunnel_tp.yfilter)) leaf_name_data.push_back(tunnel_tp.get_name_leafdata());
    if (vpn.is_set || is_set(vpn.yfilter)) leaf_name_data.push_back(vpn.get_name_leafdata());
    if (virtual_tokenring.is_set || is_set(virtual_tokenring.yfilter)) leaf_name_data.push_back(virtual_tokenring.get_name_leafdata());
    if (ucse.is_set || is_set(ucse.yfilter)) leaf_name_data.push_back(ucse.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (vfi.is_set || is_set(vfi.yfilter)) leaf_name_data.push_back(vfi.get_name_leafdata());
    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mem-ipv4")
    {
        for(auto const & c : mem_ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::BrdId::Member::MemIpv4>();
        c->parent = this;
        mem_ipv4.push_back(c);
        return c;
    }

    if(child_yang_name == "ACR")
    {
        for(auto const & c : acr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::BrdId::Member::ACR>();
        c->parent = this;
        acr.push_back(c);
        return c;
    }

    if(child_yang_name == "member-interface")
    {
        for(auto const & c : member_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::BrdId::Member::MemberInterface>();
        c->parent = this;
        member_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mem_ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : acr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : member_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Analysis-Module")
    {
        analysis_module = value;
        analysis_module.value_namespace = name_space;
        analysis_module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Fcpa")
    {
        fcpa = value;
        fcpa.value_namespace = name_space;
        fcpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SBC")
    {
        sbc = value;
        sbc.value_namespace = name_space;
        sbc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SONET_ACR")
    {
        sonet_acr = value;
        sonet_acr.value_namespace = name_space;
        sonet_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "_controller")
    {
        y_controller = value;
        y_controller.value_namespace = name_space;
        y_controller.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Service-Engine")
    {
        service_engine = value;
        service_engine.value_namespace = name_space;
        service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel-tp")
    {
        tunnel_tp = value;
        tunnel_tp.value_namespace = name_space;
        tunnel_tp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VPN")
    {
        vpn = value;
        vpn.value_namespace = name_space;
        vpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-TokenRing")
    {
        virtual_tokenring = value;
        virtual_tokenring.value_namespace = name_space;
        virtual_tokenring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucse")
    {
        ucse = value;
        ucse.value_namespace = name_space;
        ucse.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vfi")
    {
        vfi = value;
        vfi.value_namespace = name_space;
        vfi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Analysis-Module")
    {
        analysis_module.yfilter = yfilter;
    }
    if(value_path == "Fcpa")
    {
        fcpa.yfilter = yfilter;
    }
    if(value_path == "SBC")
    {
        sbc.yfilter = yfilter;
    }
    if(value_path == "SONET_ACR")
    {
        sonet_acr.yfilter = yfilter;
    }
    if(value_path == "_controller")
    {
        y_controller.yfilter = yfilter;
    }
    if(value_path == "Service-Engine")
    {
        service_engine.yfilter = yfilter;
    }
    if(value_path == "Tunnel-tp")
    {
        tunnel_tp.yfilter = yfilter;
    }
    if(value_path == "VPN")
    {
        vpn.yfilter = yfilter;
    }
    if(value_path == "Virtual-TokenRing")
    {
        virtual_tokenring.yfilter = yfilter;
    }
    if(value_path == "ucse")
    {
        ucse.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "vfi")
    {
        vfi.yfilter = yfilter;
    }
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mem-ipv4" || name == "ACR" || name == "member-interface" || name == "Analysis-Module" || name == "Fcpa" || name == "SBC" || name == "SONET_ACR" || name == "_controller" || name == "Service-Engine" || name == "Tunnel-tp" || name == "VPN" || name == "Virtual-TokenRing" || name == "ucse" || name == "vasileft" || name == "vasiright" || name == "vfi" || name == "vni")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemIpv4()
    :
    mem_ipv4{YType::str, "mem-ipv4"},
    template_{YType::str, "template"}
    	,
    encapsulation(std::make_shared<Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation>())
{
    encapsulation->parent = this;

    yang_name = "mem-ipv4"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::~MemIpv4()
{
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::has_data() const
{
    for (std::size_t index=0; index<mem_vcid.size(); index++)
    {
        if(mem_vcid[index]->has_data())
            return true;
    }
    return mem_ipv4.is_set
	|| template_.is_set
	|| (encapsulation !=  nullptr && encapsulation->has_data());
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::has_operation() const
{
    for (std::size_t index=0; index<mem_vcid.size(); index++)
    {
        if(mem_vcid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mem_ipv4.yfilter)
	|| ydk::is_set(template_.yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation());
}

std::string Native::BridgeDomain::BrdId::Member::MemIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mem-ipv4" <<"[mem-ipv4='" <<mem_ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::MemIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mem_ipv4.is_set || is_set(mem_ipv4.yfilter)) leaf_name_data.push_back(mem_ipv4.get_name_leafdata());
    if (template_.is_set || is_set(template_.yfilter)) leaf_name_data.push_back(template_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mem-vcid")
    {
        for(auto const & c : mem_vcid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid>();
        c->parent = this;
        mem_vcid.push_back(c);
        return c;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation>();
        }
        return encapsulation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mem_vcid)
    {
        children[c->get_segment_path()] = c;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mem-ipv4")
    {
        mem_ipv4 = value;
        mem_ipv4.value_namespace = name_space;
        mem_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template")
    {
        template_ = value;
        template_.value_namespace = name_space;
        template_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mem-ipv4")
    {
        mem_ipv4.yfilter = yfilter;
    }
    if(value_path == "template")
    {
        template_.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mem-vcid" || name == "encapsulation" || name == "mem-ipv4" || name == "template")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::MemVcid()
    :
    mem_vcid{YType::uint32, "mem-vcid"}
    	,
    encapsulation(nullptr) // presence node
	,template_(nullptr) // presence node
{

    yang_name = "mem-vcid"; yang_parent_name = "mem-ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::~MemVcid()
{
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::has_data() const
{
    return mem_vcid.is_set
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (template_ !=  nullptr && template_->has_data());
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mem_vcid.yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (template_ !=  nullptr && template_->has_operation());
}

std::string Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mem-vcid" <<"[mem-vcid='" <<mem_vcid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mem_vcid.is_set || is_set(mem_vcid.yfilter)) leaf_name_data.push_back(mem_vcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_>();
        }
        return template_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mem-vcid")
    {
        mem_vcid = value;
        mem_vcid.value_namespace = name_space;
        mem_vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mem-vcid")
    {
        mem_vcid.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "template" || name == "mem-vcid")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::Encapsulation()
    :
    mpls{YType::empty, "mpls"}
{

    yang_name = "encapsulation"; yang_parent_name = "mem-vcid"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::~Encapsulation()
{
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::has_data() const
{
    return mpls.is_set;
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls.yfilter);
}

std::string Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls.is_set || is_set(mpls.yfilter)) leaf_name_data.push_back(mpls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls")
    {
        mpls = value;
        mpls.value_namespace = name_space;
        mpls.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls")
    {
        mpls.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::Template_()
    :
    template_{YType::str, "template"}
{

    yang_name = "template"; yang_parent_name = "mem-vcid"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::~Template_()
{
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::has_data() const
{
    return template_.is_set;
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_.yfilter);
}

std::string Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_.is_set || is_set(template_.yfilter)) leaf_name_data.push_back(template_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template")
    {
        template_ = value;
        template_.value_namespace = name_space;
        template_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template")
    {
        template_.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::MemVcid::Template_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::Encapsulation()
    :
    mpls{YType::empty, "mpls"}
{

    yang_name = "encapsulation"; yang_parent_name = "mem-ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::~Encapsulation()
{
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::has_data() const
{
    return mpls.is_set;
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls.yfilter);
}

std::string Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls.is_set || is_set(mpls.yfilter)) leaf_name_data.push_back(mpls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls")
    {
        mpls = value;
        mpls.value_namespace = name_space;
        mpls.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls")
    {
        mpls.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::MemIpv4::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::ACR::ACR()
    :
    acr_int{YType::str, "acr-int"}
    	,
    service_instance(std::make_shared<Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance>())
{
    service_instance->parent = this;

    yang_name = "ACR"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::ACR::~ACR()
{
}

bool Native::BridgeDomain::BrdId::Member::ACR::has_data() const
{
    return acr_int.is_set
	|| (service_instance !=  nullptr && service_instance->has_data());
}

bool Native::BridgeDomain::BrdId::Member::ACR::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acr_int.yfilter)
	|| (service_instance !=  nullptr && service_instance->has_operation());
}

std::string Native::BridgeDomain::BrdId::Member::ACR::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ACR" <<"[acr-int='" <<acr_int <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::ACR::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr_int.is_set || is_set(acr_int.yfilter)) leaf_name_data.push_back(acr_int.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::ACR::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-instance")
    {
        if(service_instance == nullptr)
        {
            service_instance = std::make_shared<Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance>();
        }
        return service_instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::ACR::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_instance != nullptr)
    {
        children["service-instance"] = service_instance;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Member::ACR::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acr-int")
    {
        acr_int = value;
        acr_int.value_namespace = name_space;
        acr_int.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::ACR::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acr-int")
    {
        acr_int.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::ACR::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-instance" || name == "acr-int")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::ServiceInstance()
{

    yang_name = "service-instance"; yang_parent_name = "ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::~ServiceInstance()
{
}

bool Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::has_data() const
{
    for (std::size_t index=0; index<id.size(); index++)
    {
        if(id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::has_operation() const
{
    for (std::size_t index=0; index<id.size(); index++)
    {
        if(id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        for(auto const & c : id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id>();
        c->parent = this;
        id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::Id()
    :
    id{YType::uint16, "id"},
    split_horizon{YType::empty, "split-horizon"}
{

    yang_name = "id"; yang_parent_name = "service-instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::~Id()
{
}

bool Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::has_data() const
{
    return id.is_set
	|| split_horizon.is_set;
}

bool Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(split_horizon.yfilter);
}

std::string Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.yfilter)) leaf_name_data.push_back(split_horizon.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
        split_horizon.value_namespace = name_space;
        split_horizon.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "split-horizon")
    {
        split_horizon.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::ACR::ServiceInstance::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "split-horizon")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::MemberInterface::MemberInterface()
    :
    interface{YType::str, "interface"},
    interface_id{YType::str, "interface-id"},
    service_instance{YType::uint32, "service-instance"}
    	,
    split_horizon(std::make_shared<Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon>())
{
    split_horizon->parent = this;

    yang_name = "member-interface"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::MemberInterface::~MemberInterface()
{
}

bool Native::BridgeDomain::BrdId::Member::MemberInterface::has_data() const
{
    return interface.is_set
	|| interface_id.is_set
	|| service_instance.is_set
	|| (split_horizon !=  nullptr && split_horizon->has_data());
}

bool Native::BridgeDomain::BrdId::Member::MemberInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(service_instance.yfilter)
	|| (split_horizon !=  nullptr && split_horizon->has_operation());
}

std::string Native::BridgeDomain::BrdId::Member::MemberInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interface" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::MemberInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (service_instance.is_set || is_set(service_instance.yfilter)) leaf_name_data.push_back(service_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemberInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split-horizon")
    {
        if(split_horizon == nullptr)
        {
            split_horizon = std::make_shared<Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon>();
        }
        return split_horizon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemberInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(split_horizon != nullptr)
    {
        children["split-horizon"] = split_horizon;
    }

    return children;
}

void Native::BridgeDomain::BrdId::Member::MemberInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-instance")
    {
        service_instance = value;
        service_instance.value_namespace = name_space;
        service_instance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::MemberInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "service-instance")
    {
        service_instance.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::MemberInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "split-horizon" || name == "interface" || name == "interface-id" || name == "service-instance")
        return true;
    return false;
}

Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::SplitHorizon()
    :
    group{YType::uint8, "group"}
{

    yang_name = "split-horizon"; yang_parent_name = "member-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::~SplitHorizon()
{
}

bool Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::has_data() const
{
    return group.is_set;
}

bool Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::BrdId::Member::MemberInterface::SplitHorizon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::BridgeDomain::CMac::CMac()
    :
    aging_time{YType::uint16, "aging-time"}
{

    yang_name = "c-mac"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::CMac::~CMac()
{
}

bool Native::BridgeDomain::CMac::has_data() const
{
    return aging_time.is_set;
}

bool Native::BridgeDomain::CMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aging_time.yfilter);
}

std::string Native::BridgeDomain::CMac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::CMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bridge-domain:c-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::CMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aging_time.is_set || is_set(aging_time.yfilter)) leaf_name_data.push_back(aging_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::CMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::CMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::CMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aging-time")
    {
        aging_time = value;
        aging_time.value_namespace = name_space;
        aging_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::CMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aging-time")
    {
        aging_time.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::CMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging-time")
        return true;
    return false;
}

Native::BridgeDomain::Otv::Otv()
    :
    default_(std::make_shared<Native::BridgeDomain::Otv::Default_>())
{
    default_->parent = this;

    yang_name = "otv"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Otv::~Otv()
{
}

bool Native::BridgeDomain::Otv::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::BridgeDomain::Otv::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::BridgeDomain::Otv::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Otv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bridge-domain:otv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Otv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Otv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::BridgeDomain::Otv::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Otv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::BridgeDomain::Otv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::Otv::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::Otv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::BridgeDomain::Otv::Default_::Default_()
    :
    age_time{YType::uint16, "age-time"}
{

    yang_name = "default"; yang_parent_name = "otv"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Otv::Default_::~Default_()
{
}

bool Native::BridgeDomain::Otv::Default_::has_data() const
{
    return age_time.is_set;
}

bool Native::BridgeDomain::Otv::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(age_time.yfilter);
}

std::string Native::BridgeDomain::Otv::Default_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:otv/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Otv::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Otv::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (age_time.is_set || is_set(age_time.yfilter)) leaf_name_data.push_back(age_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Otv::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Otv::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Otv::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "age-time")
    {
        age_time = value;
        age_time.value_namespace = name_space;
        age_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Otv::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "age-time")
    {
        age_time.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Otv::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "age-time")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Parameterized()
    :
    vlan(nullptr) // presence node
{

    yang_name = "parameterized"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::~Parameterized()
{
}

bool Native::BridgeDomain::Parameterized::has_data() const
{
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::BridgeDomain::Parameterized::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::BridgeDomain::Parameterized::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bridge-domain:parameterized";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::BridgeDomain::Parameterized::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::Parameterized::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::Parameterized::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Vlan()
    :
    shutdown{YType::empty, "shutdown"}
    	,
    ip(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip>())
	,mac(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac>())
	,member(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member>())
{
    ip->parent = this;
    mac->parent = this;
    member->parent = this;

    yang_name = "vlan"; yang_parent_name = "parameterized"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::~Vlan()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::has_data() const
{
    return shutdown.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (member !=  nullptr && member->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (member !=  nullptr && member->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "member")
    {
        if(member == nullptr)
        {
            member = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member>();
        }
        return member;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(member != nullptr)
    {
        children["member"] = member;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "mac" || name == "member" || name == "shutdown")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Ip()
    :
    igmp(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp>())
{
    igmp->parent = this;

    yang_name = "ip"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::~Ip()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::has_data() const
{
    return (igmp !=  nullptr && igmp->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (igmp !=  nullptr && igmp->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igmp")
    {
        if(igmp == nullptr)
        {
            igmp = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp>();
        }
        return igmp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igmp != nullptr)
    {
        children["igmp"] = igmp;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igmp")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Igmp()
    :
    snooping(nullptr) // presence node
{

    yang_name = "igmp"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::~Igmp()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::has_data() const
{
    return (snooping !=  nullptr && snooping->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::has_operation() const
{
    return is_set(yfilter)
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/ip/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "snooping")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Snooping()
    :
    immediate_leave{YType::empty, "immediate-leave"},
    last_member_query_count{YType::uint8, "last-member-query-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    report_suppression{YType::empty, "report-suppression"},
    robustness_variable{YType::uint8, "robustness-variable"},
    static_{YType::str, "static"}
    	,
    check(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check>())
	,explicit_tracking(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking>())
	,mrouter(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter>())
	,querier(nullptr) // presence node
{
    check->parent = this;
    explicit_tracking->parent = this;
    mrouter->parent = this;

    yang_name = "snooping"; yang_parent_name = "igmp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::~Snooping()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::has_data() const
{
    return immediate_leave.is_set
	|| last_member_query_count.is_set
	|| last_member_query_interval.is_set
	|| report_suppression.is_set
	|| robustness_variable.is_set
	|| static_.is_set
	|| (check !=  nullptr && check->has_data())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_data())
	|| (mrouter !=  nullptr && mrouter->has_data())
	|| (querier !=  nullptr && querier->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(immediate_leave.yfilter)
	|| ydk::is_set(last_member_query_count.yfilter)
	|| ydk::is_set(last_member_query_interval.yfilter)
	|| ydk::is_set(report_suppression.yfilter)
	|| ydk::is_set(robustness_variable.yfilter)
	|| ydk::is_set(static_.yfilter)
	|| (check !=  nullptr && check->has_operation())
	|| (explicit_tracking !=  nullptr && explicit_tracking->has_operation())
	|| (mrouter !=  nullptr && mrouter->has_operation())
	|| (querier !=  nullptr && querier->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/ip/igmp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (immediate_leave.is_set || is_set(immediate_leave.yfilter)) leaf_name_data.push_back(immediate_leave.get_name_leafdata());
    if (last_member_query_count.is_set || is_set(last_member_query_count.yfilter)) leaf_name_data.push_back(last_member_query_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.yfilter)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (report_suppression.is_set || is_set(report_suppression.yfilter)) leaf_name_data.push_back(report_suppression.get_name_leafdata());
    if (robustness_variable.is_set || is_set(robustness_variable.yfilter)) leaf_name_data.push_back(robustness_variable.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "check")
    {
        if(check == nullptr)
        {
            check = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check>();
        }
        return check;
    }

    if(child_yang_name == "explicit-tracking")
    {
        if(explicit_tracking == nullptr)
        {
            explicit_tracking = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking>();
        }
        return explicit_tracking;
    }

    if(child_yang_name == "mrouter")
    {
        if(mrouter == nullptr)
        {
            mrouter = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter>();
        }
        return mrouter;
    }

    if(child_yang_name == "querier")
    {
        if(querier == nullptr)
        {
            querier = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier>();
        }
        return querier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(check != nullptr)
    {
        children["check"] = check;
    }

    if(explicit_tracking != nullptr)
    {
        children["explicit-tracking"] = explicit_tracking;
    }

    if(mrouter != nullptr)
    {
        children["mrouter"] = mrouter;
    }

    if(querier != nullptr)
    {
        children["querier"] = querier;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "immediate-leave")
    {
        immediate_leave = value;
        immediate_leave.value_namespace = name_space;
        immediate_leave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count = value;
        last_member_query_count.value_namespace = name_space;
        last_member_query_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
        last_member_query_interval.value_namespace = name_space;
        last_member_query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "report-suppression")
    {
        report_suppression = value;
        report_suppression.value_namespace = name_space;
        report_suppression.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable = value;
        robustness_variable.value_namespace = name_space;
        robustness_variable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "immediate-leave")
    {
        immediate_leave.yfilter = yfilter;
    }
    if(value_path == "last-member-query-count")
    {
        last_member_query_count.yfilter = yfilter;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval.yfilter = yfilter;
    }
    if(value_path == "report-suppression")
    {
        report_suppression.yfilter = yfilter;
    }
    if(value_path == "robustness-variable")
    {
        robustness_variable.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "check" || name == "explicit-tracking" || name == "mrouter" || name == "querier" || name == "immediate-leave" || name == "last-member-query-count" || name == "last-member-query-interval" || name == "report-suppression" || name == "robustness-variable" || name == "static")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::Check()
    :
    rtr_alert_option{YType::empty, "rtr-alert-option"},
    ttl{YType::empty, "ttl"}
{

    yang_name = "check"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::~Check()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::has_data() const
{
    return rtr_alert_option.is_set
	|| ttl.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rtr_alert_option.yfilter)
	|| ydk::is_set(ttl.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/ip/igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rtr_alert_option.is_set || is_set(rtr_alert_option.yfilter)) leaf_name_data.push_back(rtr_alert_option.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rtr-alert-option")
    {
        rtr_alert_option = value;
        rtr_alert_option.value_namespace = name_space;
        rtr_alert_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rtr-alert-option")
    {
        rtr_alert_option.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Check::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rtr-alert-option" || name == "ttl")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::ExplicitTracking()
    :
    limit{YType::empty, "limit"}
{

    yang_name = "explicit-tracking"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::~ExplicitTracking()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::has_data() const
{
    return limit.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(limit.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/ip/igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (limit.is_set || is_set(limit.yfilter)) leaf_name_data.push_back(limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "limit")
    {
        limit = value;
        limit.value_namespace = name_space;
        limit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "limit")
    {
        limit.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::ExplicitTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::Mrouter()
    :
    interface{YType::empty, "interface"}
{

    yang_name = "mrouter"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::~Mrouter()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::has_data() const
{
    return interface.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/ip/igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mrouter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Mrouter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::Querier()
    :
    address{YType::empty, "address"},
    max_response_time{YType::empty, "max-response-time"},
    query_interval{YType::empty, "query-interval"},
    tcn{YType::empty, "tcn"},
    timer{YType::empty, "timer"},
    version{YType::empty, "version"}
{

    yang_name = "querier"; yang_parent_name = "snooping"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::~Querier()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::has_data() const
{
    return address.is_set
	|| max_response_time.is_set
	|| query_interval.is_set
	|| tcn.is_set
	|| timer.is_set
	|| version.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(max_response_time.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| ydk::is_set(tcn.yfilter)
	|| ydk::is_set(timer.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/ip/igmp/snooping/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (max_response_time.is_set || is_set(max_response_time.yfilter)) leaf_name_data.push_back(max_response_time.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (tcn.is_set || is_set(tcn.yfilter)) leaf_name_data.push_back(tcn.get_name_leafdata());
    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-response-time")
    {
        max_response_time = value;
        max_response_time.value_namespace = name_space;
        max_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcn")
    {
        tcn = value;
        tcn.value_namespace = name_space;
        tcn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "max-response-time")
    {
        max_response_time.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
    if(value_path == "tcn")
    {
        tcn.yfilter = yfilter;
    }
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Ip::Igmp::Snooping::Querier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "max-response-time" || name == "query-interval" || name == "tcn" || name == "timer" || name == "version")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Mac()
    :
    aging_time{YType::uint16, "aging-time"},
    learning{YType::empty, "learning"}
    	,
    limit(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit>())
{
    limit->parent = this;

    yang_name = "mac"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::~Mac()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::has_data() const
{
    return aging_time.is_set
	|| learning.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aging_time.yfilter)
	|| ydk::is_set(learning.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aging_time.is_set || is_set(aging_time.yfilter)) leaf_name_data.push_back(aging_time.get_name_leafdata());
    if (learning.is_set || is_set(learning.yfilter)) leaf_name_data.push_back(learning.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aging-time")
    {
        aging_time = value;
        aging_time.value_namespace = name_space;
        aging_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learning")
    {
        learning = value;
        learning.value_namespace = name_space;
        learning.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aging-time")
    {
        aging_time.yfilter = yfilter;
    }
    if(value_path == "learning")
    {
        learning.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "aging-time" || name == "learning")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Limit()
    :
    action(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action>())
	,maximum(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum>())
{
    action->parent = this;
    maximum->parent = this;

    yang_name = "limit"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::~Limit()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::has_data() const
{
    return (action !=  nullptr && action->has_data())
	|| (maximum !=  nullptr && maximum->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action>();
        }
        return action;
    }

    if(child_yang_name == "maximum")
    {
        if(maximum == nullptr)
        {
            maximum = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum>();
        }
        return maximum;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action != nullptr)
    {
        children["action"] = action;
    }

    if(maximum != nullptr)
    {
        children["maximum"] = maximum;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "maximum")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Action()
    :
    flooding(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding>())
{
    flooding->parent = this;

    yang_name = "action"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::~Action()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::has_data() const
{
    return (flooding !=  nullptr && flooding->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::has_operation() const
{
    return is_set(yfilter)
	|| (flooding !=  nullptr && flooding->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/mac/limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flooding")
    {
        if(flooding == nullptr)
        {
            flooding = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding>();
        }
        return flooding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flooding != nullptr)
    {
        children["flooding"] = flooding;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flooding")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::Flooding()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "flooding"; yang_parent_name = "action"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::~Flooding()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::has_data() const
{
    return disable.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/mac/limit/action/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Action::Flooding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::Maximum()
    :
    addresses{YType::uint32, "addresses"}
{

    yang_name = "maximum"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::~Maximum()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::has_data() const
{
    return addresses.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addresses.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/mac/limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addresses.is_set || is_set(addresses.yfilter)) leaf_name_data.push_back(addresses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addresses")
    {
        addresses = value;
        addresses.value_namespace = name_space;
        addresses.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addresses")
    {
        addresses.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Mac::Limit::Maximum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addresses")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::Member()
    :
    analysis_module{YType::uint8, "Analysis-Module"},
    fcpa{YType::uint8, "Fcpa"},
    sbc{YType::uint32, "SBC"},
    sonet_acr{YType::uint8, "SONET_ACR"},
    y_controller{YType::str, "_controller"},
    service_engine{YType::uint8, "Service-Engine"},
    tunnel_tp{YType::uint16, "Tunnel-tp"},
    vpn{YType::uint32, "VPN"},
    virtual_tokenring{YType::uint32, "Virtual-TokenRing"},
    ucse{YType::uint8, "ucse"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    vfi{YType::str, "vfi"},
    vni{YType::uint32, "vni"}
{

    yang_name = "member"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::~Member()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::has_data() const
{
    for (std::size_t index=0; index<mem_ipv4.size(); index++)
    {
        if(mem_ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<acr.size(); index++)
    {
        if(acr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_data())
            return true;
    }
    return analysis_module.is_set
	|| fcpa.is_set
	|| sbc.is_set
	|| sonet_acr.is_set
	|| y_controller.is_set
	|| service_engine.is_set
	|| tunnel_tp.is_set
	|| vpn.is_set
	|| virtual_tokenring.is_set
	|| ucse.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| vfi.is_set
	|| vni.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::has_operation() const
{
    for (std::size_t index=0; index<mem_ipv4.size(); index++)
    {
        if(mem_ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<acr.size(); index++)
    {
        if(acr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<member_interface.size(); index++)
    {
        if(member_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(analysis_module.yfilter)
	|| ydk::is_set(fcpa.yfilter)
	|| ydk::is_set(sbc.yfilter)
	|| ydk::is_set(sonet_acr.yfilter)
	|| ydk::is_set(y_controller.yfilter)
	|| ydk::is_set(service_engine.yfilter)
	|| ydk::is_set(tunnel_tp.yfilter)
	|| ydk::is_set(vpn.yfilter)
	|| ydk::is_set(virtual_tokenring.yfilter)
	|| ydk::is_set(ucse.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(vfi.yfilter)
	|| ydk::is_set(vni.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (analysis_module.is_set || is_set(analysis_module.yfilter)) leaf_name_data.push_back(analysis_module.get_name_leafdata());
    if (fcpa.is_set || is_set(fcpa.yfilter)) leaf_name_data.push_back(fcpa.get_name_leafdata());
    if (sbc.is_set || is_set(sbc.yfilter)) leaf_name_data.push_back(sbc.get_name_leafdata());
    if (sonet_acr.is_set || is_set(sonet_acr.yfilter)) leaf_name_data.push_back(sonet_acr.get_name_leafdata());
    if (y_controller.is_set || is_set(y_controller.yfilter)) leaf_name_data.push_back(y_controller.get_name_leafdata());
    if (service_engine.is_set || is_set(service_engine.yfilter)) leaf_name_data.push_back(service_engine.get_name_leafdata());
    if (tunnel_tp.is_set || is_set(tunnel_tp.yfilter)) leaf_name_data.push_back(tunnel_tp.get_name_leafdata());
    if (vpn.is_set || is_set(vpn.yfilter)) leaf_name_data.push_back(vpn.get_name_leafdata());
    if (virtual_tokenring.is_set || is_set(virtual_tokenring.yfilter)) leaf_name_data.push_back(virtual_tokenring.get_name_leafdata());
    if (ucse.is_set || is_set(ucse.yfilter)) leaf_name_data.push_back(ucse.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (vfi.is_set || is_set(vfi.yfilter)) leaf_name_data.push_back(vfi.get_name_leafdata());
    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mem-ipv4")
    {
        for(auto const & c : mem_ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4>();
        c->parent = this;
        mem_ipv4.push_back(c);
        return c;
    }

    if(child_yang_name == "ACR")
    {
        for(auto const & c : acr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::ACR>();
        c->parent = this;
        acr.push_back(c);
        return c;
    }

    if(child_yang_name == "member-interface")
    {
        for(auto const & c : member_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface>();
        c->parent = this;
        member_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mem_ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : acr)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : member_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Analysis-Module")
    {
        analysis_module = value;
        analysis_module.value_namespace = name_space;
        analysis_module.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Fcpa")
    {
        fcpa = value;
        fcpa.value_namespace = name_space;
        fcpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SBC")
    {
        sbc = value;
        sbc.value_namespace = name_space;
        sbc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SONET_ACR")
    {
        sonet_acr = value;
        sonet_acr.value_namespace = name_space;
        sonet_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "_controller")
    {
        y_controller = value;
        y_controller.value_namespace = name_space;
        y_controller.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Service-Engine")
    {
        service_engine = value;
        service_engine.value_namespace = name_space;
        service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel-tp")
    {
        tunnel_tp = value;
        tunnel_tp.value_namespace = name_space;
        tunnel_tp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VPN")
    {
        vpn = value;
        vpn.value_namespace = name_space;
        vpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-TokenRing")
    {
        virtual_tokenring = value;
        virtual_tokenring.value_namespace = name_space;
        virtual_tokenring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ucse")
    {
        ucse = value;
        ucse.value_namespace = name_space;
        ucse.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vfi")
    {
        vfi = value;
        vfi.value_namespace = name_space;
        vfi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Analysis-Module")
    {
        analysis_module.yfilter = yfilter;
    }
    if(value_path == "Fcpa")
    {
        fcpa.yfilter = yfilter;
    }
    if(value_path == "SBC")
    {
        sbc.yfilter = yfilter;
    }
    if(value_path == "SONET_ACR")
    {
        sonet_acr.yfilter = yfilter;
    }
    if(value_path == "_controller")
    {
        y_controller.yfilter = yfilter;
    }
    if(value_path == "Service-Engine")
    {
        service_engine.yfilter = yfilter;
    }
    if(value_path == "Tunnel-tp")
    {
        tunnel_tp.yfilter = yfilter;
    }
    if(value_path == "VPN")
    {
        vpn.yfilter = yfilter;
    }
    if(value_path == "Virtual-TokenRing")
    {
        virtual_tokenring.yfilter = yfilter;
    }
    if(value_path == "ucse")
    {
        ucse.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "vfi")
    {
        vfi.yfilter = yfilter;
    }
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mem-ipv4" || name == "ACR" || name == "member-interface" || name == "Analysis-Module" || name == "Fcpa" || name == "SBC" || name == "SONET_ACR" || name == "_controller" || name == "Service-Engine" || name == "Tunnel-tp" || name == "VPN" || name == "Virtual-TokenRing" || name == "ucse" || name == "vasileft" || name == "vasiright" || name == "vfi" || name == "vni")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemIpv4()
    :
    mem_ipv4{YType::str, "mem-ipv4"},
    template_{YType::str, "template"}
    	,
    encapsulation(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation>())
{
    encapsulation->parent = this;

    yang_name = "mem-ipv4"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::~MemIpv4()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::has_data() const
{
    for (std::size_t index=0; index<mem_vcid.size(); index++)
    {
        if(mem_vcid[index]->has_data())
            return true;
    }
    return mem_ipv4.is_set
	|| template_.is_set
	|| (encapsulation !=  nullptr && encapsulation->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::has_operation() const
{
    for (std::size_t index=0; index<mem_vcid.size(); index++)
    {
        if(mem_vcid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mem_ipv4.yfilter)
	|| ydk::is_set(template_.yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/member/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mem-ipv4" <<"[mem-ipv4='" <<mem_ipv4 <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mem_ipv4.is_set || is_set(mem_ipv4.yfilter)) leaf_name_data.push_back(mem_ipv4.get_name_leafdata());
    if (template_.is_set || is_set(template_.yfilter)) leaf_name_data.push_back(template_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mem-vcid")
    {
        for(auto const & c : mem_vcid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid>();
        c->parent = this;
        mem_vcid.push_back(c);
        return c;
    }

    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation>();
        }
        return encapsulation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mem_vcid)
    {
        children[c->get_segment_path()] = c;
    }

    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mem-ipv4")
    {
        mem_ipv4 = value;
        mem_ipv4.value_namespace = name_space;
        mem_ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template")
    {
        template_ = value;
        template_.value_namespace = name_space;
        template_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mem-ipv4")
    {
        mem_ipv4.yfilter = yfilter;
    }
    if(value_path == "template")
    {
        template_.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mem-vcid" || name == "encapsulation" || name == "mem-ipv4" || name == "template")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::MemVcid()
    :
    mem_vcid{YType::uint32, "mem-vcid"}
    	,
    encapsulation(nullptr) // presence node
	,template_(nullptr) // presence node
{

    yang_name = "mem-vcid"; yang_parent_name = "mem-ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::~MemVcid()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::has_data() const
{
    return mem_vcid.is_set
	|| (encapsulation !=  nullptr && encapsulation->has_data())
	|| (template_ !=  nullptr && template_->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mem_vcid.yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation())
	|| (template_ !=  nullptr && template_->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mem-vcid" <<"[mem-vcid='" <<mem_vcid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mem_vcid.is_set || is_set(mem_vcid.yfilter)) leaf_name_data.push_back(mem_vcid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation>();
        }
        return encapsulation;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_>();
        }
        return template_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    if(template_ != nullptr)
    {
        children["template"] = template_;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mem-vcid")
    {
        mem_vcid = value;
        mem_vcid.value_namespace = name_space;
        mem_vcid.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mem-vcid")
    {
        mem_vcid.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation" || name == "template" || name == "mem-vcid")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::Encapsulation()
    :
    mpls{YType::empty, "mpls"}
{

    yang_name = "encapsulation"; yang_parent_name = "mem-vcid"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::~Encapsulation()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::has_data() const
{
    return mpls.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls.is_set || is_set(mpls.yfilter)) leaf_name_data.push_back(mpls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls")
    {
        mpls = value;
        mpls.value_namespace = name_space;
        mpls.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls")
    {
        mpls.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::Template_()
    :
    template_{YType::str, "template"}
{

    yang_name = "template"; yang_parent_name = "mem-vcid"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::~Template_()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::has_data() const
{
    return template_.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_.is_set || is_set(template_.yfilter)) leaf_name_data.push_back(template_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template")
    {
        template_ = value;
        template_.value_namespace = name_space;
        template_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template")
    {
        template_.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::MemVcid::Template_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "template")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::Encapsulation()
    :
    mpls{YType::empty, "mpls"}
{

    yang_name = "encapsulation"; yang_parent_name = "mem-ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::~Encapsulation()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::has_data() const
{
    return mpls.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls.is_set || is_set(mpls.yfilter)) leaf_name_data.push_back(mpls.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls")
    {
        mpls = value;
        mpls.value_namespace = name_space;
        mpls.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls")
    {
        mpls.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemIpv4::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ACR()
    :
    acr_int{YType::str, "acr-int"}
    	,
    service_instance(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance>())
{
    service_instance->parent = this;

    yang_name = "ACR"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::ACR::~ACR()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::has_data() const
{
    return acr_int.is_set
	|| (service_instance !=  nullptr && service_instance->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acr_int.yfilter)
	|| (service_instance !=  nullptr && service_instance->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::ACR::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/member/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::ACR::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ACR" <<"[acr-int='" <<acr_int <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::ACR::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acr_int.is_set || is_set(acr_int.yfilter)) leaf_name_data.push_back(acr_int.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::ACR::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-instance")
    {
        if(service_instance == nullptr)
        {
            service_instance = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance>();
        }
        return service_instance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::ACR::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_instance != nullptr)
    {
        children["service-instance"] = service_instance;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::ACR::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acr-int")
    {
        acr_int = value;
        acr_int.value_namespace = name_space;
        acr_int.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::ACR::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acr-int")
    {
        acr_int.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-instance" || name == "acr-int")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::ServiceInstance()
{

    yang_name = "service-instance"; yang_parent_name = "ACR"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::~ServiceInstance()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::has_data() const
{
    for (std::size_t index=0; index<id.size(); index++)
    {
        if(id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::has_operation() const
{
    for (std::size_t index=0; index<id.size(); index++)
    {
        if(id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        for(auto const & c : id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id>();
        c->parent = this;
        id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::Id()
    :
    id{YType::uint16, "id"},
    split_horizon{YType::empty, "split-horizon"}
{

    yang_name = "id"; yang_parent_name = "service-instance"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::~Id()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::has_data() const
{
    return id.is_set
	|| split_horizon.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(split_horizon.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (split_horizon.is_set || is_set(split_horizon.yfilter)) leaf_name_data.push_back(split_horizon.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "split-horizon")
    {
        split_horizon = value;
        split_horizon.value_namespace = name_space;
        split_horizon.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "split-horizon")
    {
        split_horizon.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::ACR::ServiceInstance::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "split-horizon")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::MemberInterface()
    :
    interface{YType::str, "interface"},
    interface_id{YType::str, "interface-id"},
    service_instance{YType::uint32, "service-instance"}
    	,
    split_horizon(std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon>())
{
    split_horizon->parent = this;

    yang_name = "member-interface"; yang_parent_name = "member"; is_top_level_class = false; has_list_ancestor = false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::~MemberInterface()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::has_data() const
{
    return interface.is_set
	|| interface_id.is_set
	|| service_instance.is_set
	|| (split_horizon !=  nullptr && split_horizon->has_data());
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(service_instance.yfilter)
	|| (split_horizon !=  nullptr && split_horizon->has_operation());
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bridge-domain/Cisco-IOS-XE-bridge-domain:parameterized/vlan/member/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-interface" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (service_instance.is_set || is_set(service_instance.yfilter)) leaf_name_data.push_back(service_instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "split-horizon")
    {
        if(split_horizon == nullptr)
        {
            split_horizon = std::make_shared<Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon>();
        }
        return split_horizon;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(split_horizon != nullptr)
    {
        children["split-horizon"] = split_horizon;
    }

    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-instance")
    {
        service_instance = value;
        service_instance.value_namespace = name_space;
        service_instance.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "service-instance")
    {
        service_instance.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "split-horizon" || name == "interface" || name == "interface-id" || name == "service-instance")
        return true;
    return false;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::SplitHorizon()
    :
    group{YType::uint8, "group"}
{

    yang_name = "split-horizon"; yang_parent_name = "member-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::~SplitHorizon()
{
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::has_data() const
{
    return group.is_set;
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::BridgeDomain::Parameterized::Vlan::Member::MemberInterface::SplitHorizon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Crypto::Crypto()
    :
    xauth{YType::str, "Cisco-IOS-XE-crypto:xauth"}
    	,
    call(std::make_shared<Native::Crypto::Call>())
	,engine(std::make_shared<Native::Crypto::Engine>())
	,gdoi(std::make_shared<Native::Crypto::Gdoi>())
	,ikev2(std::make_shared<Native::Crypto::Ikev2>())
	,gkm(std::make_shared<Native::Crypto::Gkm>())
	,ipsec(std::make_shared<Native::Crypto::Ipsec>())
	,isakmp(std::make_shared<Native::Crypto::Isakmp>())
	,key(std::make_shared<Native::Crypto::Key>())
	,logging(std::make_shared<Native::Crypto::Logging>())
	,crypto_map(std::make_shared<Native::Crypto::CryptoMap>())
	,map_ipv6_gdoi(std::make_shared<Native::Crypto::MapIpv6Gdoi>())
	,map_client(std::make_shared<Native::Crypto::MapClient>())
	,mib(std::make_shared<Native::Crypto::Mib>())
	,pki(std::make_shared<Native::Crypto::Pki>())
	,tls_tunnel(std::make_shared<Native::Crypto::TlsTunnel>())
	,ssl(std::make_shared<Native::Crypto::Ssl>())
	,vpn(std::make_shared<Native::Crypto::Vpn>())
{
    call->parent = this;
    engine->parent = this;
    gdoi->parent = this;
    ikev2->parent = this;
    gkm->parent = this;
    ipsec->parent = this;
    isakmp->parent = this;
    key->parent = this;
    logging->parent = this;
    crypto_map->parent = this;
    map_ipv6_gdoi->parent = this;
    map_client->parent = this;
    mib->parent = this;
    pki->parent = this;
    tls_tunnel->parent = this;
    ssl->parent = this;
    vpn->parent = this;

    yang_name = "crypto"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::~Crypto()
{
}

bool Native::Crypto::has_data() const
{
    for (std::size_t index=0; index<dynamic_map.size(); index++)
    {
        if(dynamic_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<identity.size(); index++)
    {
        if(identity[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<keyring.size(); index++)
    {
        if(keyring[index]->has_data())
            return true;
    }
    return xauth.is_set
	|| (call !=  nullptr && call->has_data())
	|| (engine !=  nullptr && engine->has_data())
	|| (gdoi !=  nullptr && gdoi->has_data())
	|| (ikev2 !=  nullptr && ikev2->has_data())
	|| (gkm !=  nullptr && gkm->has_data())
	|| (ipsec !=  nullptr && ipsec->has_data())
	|| (isakmp !=  nullptr && isakmp->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (crypto_map !=  nullptr && crypto_map->has_data())
	|| (map_ipv6_gdoi !=  nullptr && map_ipv6_gdoi->has_data())
	|| (map_client !=  nullptr && map_client->has_data())
	|| (mib !=  nullptr && mib->has_data())
	|| (pki !=  nullptr && pki->has_data())
	|| (tls_tunnel !=  nullptr && tls_tunnel->has_data())
	|| (ssl !=  nullptr && ssl->has_data())
	|| (vpn !=  nullptr && vpn->has_data());
}

bool Native::Crypto::has_operation() const
{
    for (std::size_t index=0; index<dynamic_map.size(); index++)
    {
        if(dynamic_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<identity.size(); index++)
    {
        if(identity[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<keyring.size(); index++)
    {
        if(keyring[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(xauth.yfilter)
	|| (call !=  nullptr && call->has_operation())
	|| (engine !=  nullptr && engine->has_operation())
	|| (gdoi !=  nullptr && gdoi->has_operation())
	|| (ikev2 !=  nullptr && ikev2->has_operation())
	|| (gkm !=  nullptr && gkm->has_operation())
	|| (ipsec !=  nullptr && ipsec->has_operation())
	|| (isakmp !=  nullptr && isakmp->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (crypto_map !=  nullptr && crypto_map->has_operation())
	|| (map_ipv6_gdoi !=  nullptr && map_ipv6_gdoi->has_operation())
	|| (map_client !=  nullptr && map_client->has_operation())
	|| (mib !=  nullptr && mib->has_operation())
	|| (pki !=  nullptr && pki->has_operation())
	|| (tls_tunnel !=  nullptr && tls_tunnel->has_operation())
	|| (ssl !=  nullptr && ssl->has_operation())
	|| (vpn !=  nullptr && vpn->has_operation());
}

std::string Native::Crypto::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crypto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xauth.is_set || is_set(xauth.yfilter)) leaf_name_data.push_back(xauth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "call")
    {
        if(call == nullptr)
        {
            call = std::make_shared<Native::Crypto::Call>();
        }
        return call;
    }

    if(child_yang_name == "dynamic-map")
    {
        for(auto const & c : dynamic_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::DynamicMap>();
        c->parent = this;
        dynamic_map.push_back(c);
        return c;
    }

    if(child_yang_name == "engine")
    {
        if(engine == nullptr)
        {
            engine = std::make_shared<Native::Crypto::Engine>();
        }
        return engine;
    }

    if(child_yang_name == "gdoi")
    {
        if(gdoi == nullptr)
        {
            gdoi = std::make_shared<Native::Crypto::Gdoi>();
        }
        return gdoi;
    }

    if(child_yang_name == "ikev2")
    {
        if(ikev2 == nullptr)
        {
            ikev2 = std::make_shared<Native::Crypto::Ikev2>();
        }
        return ikev2;
    }

    if(child_yang_name == "gkm")
    {
        if(gkm == nullptr)
        {
            gkm = std::make_shared<Native::Crypto::Gkm>();
        }
        return gkm;
    }

    if(child_yang_name == "identity")
    {
        for(auto const & c : identity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Identity>();
        c->parent = this;
        identity.push_back(c);
        return c;
    }

    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Crypto::Ipsec>();
        }
        return ipsec;
    }

    if(child_yang_name == "isakmp")
    {
        if(isakmp == nullptr)
        {
            isakmp = std::make_shared<Native::Crypto::Isakmp>();
        }
        return isakmp;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Crypto::Key>();
        }
        return key;
    }

    if(child_yang_name == "keyring")
    {
        for(auto const & c : keyring)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Keyring>();
        c->parent = this;
        keyring.push_back(c);
        return c;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Crypto::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "crypto-map")
    {
        if(crypto_map == nullptr)
        {
            crypto_map = std::make_shared<Native::Crypto::CryptoMap>();
        }
        return crypto_map;
    }

    if(child_yang_name == "map-ipv6-gdoi")
    {
        if(map_ipv6_gdoi == nullptr)
        {
            map_ipv6_gdoi = std::make_shared<Native::Crypto::MapIpv6Gdoi>();
        }
        return map_ipv6_gdoi;
    }

    if(child_yang_name == "map-client")
    {
        if(map_client == nullptr)
        {
            map_client = std::make_shared<Native::Crypto::MapClient>();
        }
        return map_client;
    }

    if(child_yang_name == "mib")
    {
        if(mib == nullptr)
        {
            mib = std::make_shared<Native::Crypto::Mib>();
        }
        return mib;
    }

    if(child_yang_name == "pki")
    {
        if(pki == nullptr)
        {
            pki = std::make_shared<Native::Crypto::Pki>();
        }
        return pki;
    }

    if(child_yang_name == "tls-tunnel")
    {
        if(tls_tunnel == nullptr)
        {
            tls_tunnel = std::make_shared<Native::Crypto::TlsTunnel>();
        }
        return tls_tunnel;
    }

    if(child_yang_name == "ssl")
    {
        if(ssl == nullptr)
        {
            ssl = std::make_shared<Native::Crypto::Ssl>();
        }
        return ssl;
    }

    if(child_yang_name == "vpn")
    {
        if(vpn == nullptr)
        {
            vpn = std::make_shared<Native::Crypto::Vpn>();
        }
        return vpn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(call != nullptr)
    {
        children["call"] = call;
    }

    for (auto const & c : dynamic_map)
    {
        children[c->get_segment_path()] = c;
    }

    if(engine != nullptr)
    {
        children["engine"] = engine;
    }

    if(gdoi != nullptr)
    {
        children["gdoi"] = gdoi;
    }

    if(ikev2 != nullptr)
    {
        children["ikev2"] = ikev2;
    }

    if(gkm != nullptr)
    {
        children["gkm"] = gkm;
    }

    for (auto const & c : identity)
    {
        children[c->get_segment_path()] = c;
    }

    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    if(isakmp != nullptr)
    {
        children["isakmp"] = isakmp;
    }

    if(key != nullptr)
    {
        children["key"] = key;
    }

    for (auto const & c : keyring)
    {
        children[c->get_segment_path()] = c;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(crypto_map != nullptr)
    {
        children["crypto-map"] = crypto_map;
    }

    if(map_ipv6_gdoi != nullptr)
    {
        children["map-ipv6-gdoi"] = map_ipv6_gdoi;
    }

    if(map_client != nullptr)
    {
        children["map-client"] = map_client;
    }

    if(mib != nullptr)
    {
        children["mib"] = mib;
    }

    if(pki != nullptr)
    {
        children["pki"] = pki;
    }

    if(tls_tunnel != nullptr)
    {
        children["tls-tunnel"] = tls_tunnel;
    }

    if(ssl != nullptr)
    {
        children["ssl"] = ssl;
    }

    if(vpn != nullptr)
    {
        children["vpn"] = vpn;
    }

    return children;
}

void Native::Crypto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xauth")
    {
        xauth = value;
        xauth.value_namespace = name_space;
        xauth.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xauth")
    {
        xauth.yfilter = yfilter;
    }
}

bool Native::Crypto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "call" || name == "dynamic-map" || name == "engine" || name == "gdoi" || name == "ikev2" || name == "gkm" || name == "identity" || name == "ipsec" || name == "isakmp" || name == "key" || name == "keyring" || name == "logging" || name == "crypto-map" || name == "map-ipv6-gdoi" || name == "map-client" || name == "mib" || name == "pki" || name == "tls-tunnel" || name == "ssl" || name == "vpn" || name == "xauth")
        return true;
    return false;
}

Native::Crypto::Call::Call()
    :
    admission(std::make_shared<Native::Crypto::Call::Admission>())
{
    admission->parent = this;

    yang_name = "call"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Call::~Call()
{
}

bool Native::Crypto::Call::has_data() const
{
    return (admission !=  nullptr && admission->has_data());
}

bool Native::Crypto::Call::has_operation() const
{
    return is_set(yfilter)
	|| (admission !=  nullptr && admission->has_operation());
}

std::string Native::Crypto::Call::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Call::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:call";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Call::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Call::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "admission")
    {
        if(admission == nullptr)
        {
            admission = std::make_shared<Native::Crypto::Call::Admission>();
        }
        return admission;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Call::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(admission != nullptr)
    {
        children["admission"] = admission;
    }

    return children;
}

void Native::Crypto::Call::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Call::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Call::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "admission")
        return true;
    return false;
}

Native::Crypto::Call::Admission::Admission()
    :
    limit(std::make_shared<Native::Crypto::Call::Admission::Limit>())
{
    limit->parent = this;

    yang_name = "admission"; yang_parent_name = "call"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Call::Admission::~Admission()
{
}

bool Native::Crypto::Call::Admission::has_data() const
{
    return (limit !=  nullptr && limit->has_data());
}

bool Native::Crypto::Call::Admission::has_operation() const
{
    return is_set(yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Crypto::Call::Admission::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:call/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Call::Admission::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admission";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Call::Admission::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Call::Admission::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Crypto::Call::Admission::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Call::Admission::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Crypto::Call::Admission::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Call::Admission::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Call::Admission::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit")
        return true;
    return false;
}

Native::Crypto::Call::Admission::Limit::Limit()
    :
    all(std::make_shared<Native::Crypto::Call::Admission::Limit::All>())
	,ike(std::make_shared<Native::Crypto::Call::Admission::Limit::Ike>())
	,ipsec(std::make_shared<Native::Crypto::Call::Admission::Limit::Ipsec>())
{
    all->parent = this;
    ike->parent = this;
    ipsec->parent = this;

    yang_name = "limit"; yang_parent_name = "admission"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Call::Admission::Limit::~Limit()
{
}

bool Native::Crypto::Call::Admission::Limit::has_data() const
{
    return (all !=  nullptr && all->has_data())
	|| (ike !=  nullptr && ike->has_data())
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Crypto::Call::Admission::Limit::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (ike !=  nullptr && ike->has_operation())
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Crypto::Call::Admission::Limit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:call/admission/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Call::Admission::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Call::Admission::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Call::Admission::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Crypto::Call::Admission::Limit::All>();
        }
        return all;
    }

    if(child_yang_name == "ike")
    {
        if(ike == nullptr)
        {
            ike = std::make_shared<Native::Crypto::Call::Admission::Limit::Ike>();
        }
        return ike;
    }

    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Crypto::Call::Admission::Limit::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Call::Admission::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    if(ike != nullptr)
    {
        children["ike"] = ike;
    }

    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    return children;
}

void Native::Crypto::Call::Admission::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Call::Admission::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Call::Admission::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "ike" || name == "ipsec")
        return true;
    return false;
}

Native::Crypto::Call::Admission::Limit::All::All()
    :
    in_negotiation_sa{YType::uint32, "in-negotiation-sa"}
{

    yang_name = "all"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Call::Admission::Limit::All::~All()
{
}

bool Native::Crypto::Call::Admission::Limit::All::has_data() const
{
    return in_negotiation_sa.is_set;
}

bool Native::Crypto::Call::Admission::Limit::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_negotiation_sa.yfilter);
}

std::string Native::Crypto::Call::Admission::Limit::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:call/admission/limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Call::Admission::Limit::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Call::Admission::Limit::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_negotiation_sa.is_set || is_set(in_negotiation_sa.yfilter)) leaf_name_data.push_back(in_negotiation_sa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Call::Admission::Limit::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Call::Admission::Limit::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Call::Admission::Limit::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-negotiation-sa")
    {
        in_negotiation_sa = value;
        in_negotiation_sa.value_namespace = name_space;
        in_negotiation_sa.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Call::Admission::Limit::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-negotiation-sa")
    {
        in_negotiation_sa.yfilter = yfilter;
    }
}

bool Native::Crypto::Call::Admission::Limit::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-negotiation-sa")
        return true;
    return false;
}

Native::Crypto::Call::Admission::Limit::Ike::Ike()
    :
    in_negotiation_sa{YType::uint32, "in-negotiation-sa"},
    sa{YType::uint32, "sa"}
{

    yang_name = "ike"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Call::Admission::Limit::Ike::~Ike()
{
}

bool Native::Crypto::Call::Admission::Limit::Ike::has_data() const
{
    return in_negotiation_sa.is_set
	|| sa.is_set;
}

bool Native::Crypto::Call::Admission::Limit::Ike::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_negotiation_sa.yfilter)
	|| ydk::is_set(sa.yfilter);
}

std::string Native::Crypto::Call::Admission::Limit::Ike::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:call/admission/limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Call::Admission::Limit::Ike::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ike";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Call::Admission::Limit::Ike::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_negotiation_sa.is_set || is_set(in_negotiation_sa.yfilter)) leaf_name_data.push_back(in_negotiation_sa.get_name_leafdata());
    if (sa.is_set || is_set(sa.yfilter)) leaf_name_data.push_back(sa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Call::Admission::Limit::Ike::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Call::Admission::Limit::Ike::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Call::Admission::Limit::Ike::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-negotiation-sa")
    {
        in_negotiation_sa = value;
        in_negotiation_sa.value_namespace = name_space;
        in_negotiation_sa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sa")
    {
        sa = value;
        sa.value_namespace = name_space;
        sa.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Call::Admission::Limit::Ike::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-negotiation-sa")
    {
        in_negotiation_sa.yfilter = yfilter;
    }
    if(value_path == "sa")
    {
        sa.yfilter = yfilter;
    }
}

bool Native::Crypto::Call::Admission::Limit::Ike::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-negotiation-sa" || name == "sa")
        return true;
    return false;
}

Native::Crypto::Call::Admission::Limit::Ipsec::Ipsec()
    :
    sa{YType::uint32, "sa"}
{

    yang_name = "ipsec"; yang_parent_name = "limit"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Call::Admission::Limit::Ipsec::~Ipsec()
{
}

bool Native::Crypto::Call::Admission::Limit::Ipsec::has_data() const
{
    return sa.is_set;
}

bool Native::Crypto::Call::Admission::Limit::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sa.yfilter);
}

std::string Native::Crypto::Call::Admission::Limit::Ipsec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:call/admission/limit/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Call::Admission::Limit::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Call::Admission::Limit::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sa.is_set || is_set(sa.yfilter)) leaf_name_data.push_back(sa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Call::Admission::Limit::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Call::Admission::Limit::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Call::Admission::Limit::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sa")
    {
        sa = value;
        sa.value_namespace = name_space;
        sa.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Call::Admission::Limit::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sa")
    {
        sa.yfilter = yfilter;
    }
}

bool Native::Crypto::Call::Admission::Limit::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sa")
        return true;
    return false;
}

Native::Crypto::DynamicMap::DynamicMap()
    :
    name{YType::str, "name"},
    sequence{YType::uint16, "sequence"},
    description{YType::str, "description"}
    	,
    default_(std::make_shared<Native::Crypto::DynamicMap::Default_>())
	,dialer(std::make_shared<Native::Crypto::DynamicMap::Dialer>())
	,match(std::make_shared<Native::Crypto::DynamicMap::Match>())
	,qos(std::make_shared<Native::Crypto::DynamicMap::Qos>())
	,reverse_route(nullptr) // presence node
	,set(std::make_shared<Native::Crypto::DynamicMap::Set>())
{
    default_->parent = this;
    dialer->parent = this;
    match->parent = this;
    qos->parent = this;
    set->parent = this;

    yang_name = "dynamic-map"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::DynamicMap::~DynamicMap()
{
}

bool Native::Crypto::DynamicMap::has_data() const
{
    return name.is_set
	|| sequence.is_set
	|| description.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (dialer !=  nullptr && dialer->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::DynamicMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (dialer !=  nullptr && dialer->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::DynamicMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::DynamicMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:dynamic-map" <<"[name='" <<name <<"']" <<"[sequence='" <<sequence <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::DynamicMap::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "dialer")
    {
        if(dialer == nullptr)
        {
            dialer = std::make_shared<Native::Crypto::DynamicMap::Dialer>();
        }
        return dialer;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::DynamicMap::Match>();
        }
        return match;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Crypto::DynamicMap::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::DynamicMap::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::DynamicMap::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(dialer != nullptr)
    {
        children["dialer"] = dialer;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Crypto::DynamicMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "dialer" || name == "match" || name == "qos" || name == "reverse-route" || name == "set" || name == "name" || name == "sequence" || name == "description")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Default_::Default_()
    :
    description{YType::empty, "description"}
    	,
    dialer(std::make_shared<Native::Crypto::DynamicMap::Default_::Dialer>())
	,match(std::make_shared<Native::Crypto::DynamicMap::Default_::Match>())
	,qos(std::make_shared<Native::Crypto::DynamicMap::Default_::Qos>())
	,reverse_route(nullptr) // presence node
	,set(std::make_shared<Native::Crypto::DynamicMap::Default_::Set>())
{
    dialer->parent = this;
    match->parent = this;
    qos->parent = this;
    set->parent = this;

    yang_name = "default"; yang_parent_name = "dynamic-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default_::~Default_()
{
}

bool Native::Crypto::DynamicMap::Default_::has_data() const
{
    return description.is_set
	|| (dialer !=  nullptr && dialer->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (set !=  nullptr && set->has_data());
}

bool Native::Crypto::DynamicMap::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| (dialer !=  nullptr && dialer->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::DynamicMap::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dialer")
    {
        if(dialer == nullptr)
        {
            dialer = std::make_shared<Native::Crypto::DynamicMap::Default_::Dialer>();
        }
        return dialer;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::DynamicMap::Default_::Match>();
        }
        return match;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Crypto::DynamicMap::Default_::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::DynamicMap::Default_::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::DynamicMap::Default_::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dialer != nullptr)
    {
        children["dialer"] = dialer;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(qos != nullptr)
    {
        children["qos"] = qos;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Crypto::DynamicMap::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dialer" || name == "match" || name == "qos" || name == "reverse-route" || name == "set" || name == "description")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Default_::Dialer::Dialer()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "dialer"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default_::Dialer::~Dialer()
{
}

bool Native::Crypto::DynamicMap::Default_::Dialer::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::DynamicMap::Default_::Dialer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::DynamicMap::Default_::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default_::Dialer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Dialer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Default_::Dialer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Default_::Dialer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Default_::Match::Match()
    :
    address{YType::empty, "address"}
{

    yang_name = "match"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default_::Match::~Match()
{
}

bool Native::Crypto::DynamicMap::Default_::Match::has_data() const
{
    return address.is_set;
}

bool Native::Crypto::DynamicMap::Default_::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Crypto::DynamicMap::Default_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default_::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Default_::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Default_::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Default_::Qos::Qos()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "qos"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default_::Qos::~Qos()
{
}

bool Native::Crypto::DynamicMap::Default_::Qos::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::DynamicMap::Default_::Qos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::DynamicMap::Default_::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default_::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Default_::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Default_::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Default_::ReverseRoute::ReverseRoute()
{

    yang_name = "reverse-route"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default_::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::DynamicMap::Default_::ReverseRoute::has_data() const
{
    return false;
}

bool Native::Crypto::DynamicMap::Default_::ReverseRoute::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::DynamicMap::Default_::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default_::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::DynamicMap::Default_::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::DynamicMap::Default_::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::DynamicMap::Default_::Set::Set()
    :
    group{YType::empty, "group"},
    identity{YType::empty, "identity"},
    ikev2_profile{YType::str, "ikev2-profile"},
    isakmp_profile{YType::str, "isakmp-profile"},
    transform_set{YType::empty, "transform-set"}
    	,
    ip(std::make_shared<Native::Crypto::DynamicMap::Default_::Set::Ip>())
	,nat(std::make_shared<Native::Crypto::DynamicMap::Default_::Set::Nat>())
	,peer_container(std::make_shared<Native::Crypto::DynamicMap::Default_::Set::PeerContainer>())
	,pfs(nullptr) // presence node
	,reverse_route(nullptr) // presence node
	,security_association(std::make_shared<Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation>())
{
    ip->parent = this;
    nat->parent = this;
    peer_container->parent = this;
    security_association->parent = this;

    yang_name = "set"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default_::Set::~Set()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::has_data() const
{
    return group.is_set
	|| identity.is_set
	|| ikev2_profile.is_set
	|| isakmp_profile.is_set
	|| transform_set.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (nat !=  nullptr && nat->has_data())
	|| (peer_container !=  nullptr && peer_container->has_data())
	|| (pfs !=  nullptr && pfs->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (security_association !=  nullptr && security_association->has_data());
}

bool Native::Crypto::DynamicMap::Default_::Set::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(identity.yfilter)
	|| ydk::is_set(ikev2_profile.yfilter)
	|| ydk::is_set(isakmp_profile.yfilter)
	|| ydk::is_set(transform_set.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (nat !=  nullptr && nat->has_operation())
	|| (peer_container !=  nullptr && peer_container->has_operation())
	|| (pfs !=  nullptr && pfs->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation());
}

std::string Native::Crypto::DynamicMap::Default_::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default_::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (ikev2_profile.is_set || is_set(ikev2_profile.yfilter)) leaf_name_data.push_back(ikev2_profile.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.yfilter)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());
    if (transform_set.is_set || is_set(transform_set.yfilter)) leaf_name_data.push_back(transform_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Crypto::DynamicMap::Default_::Set::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "nat")
    {
        if(nat == nullptr)
        {
            nat = std::make_shared<Native::Crypto::DynamicMap::Default_::Set::Nat>();
        }
        return nat;
    }

    if(child_yang_name == "peer-container")
    {
        if(peer_container == nullptr)
        {
            peer_container = std::make_shared<Native::Crypto::DynamicMap::Default_::Set::PeerContainer>();
        }
        return peer_container;
    }

    if(child_yang_name == "pfs")
    {
        if(pfs == nullptr)
        {
            pfs = std::make_shared<Native::Crypto::DynamicMap::Default_::Set::Pfs>();
        }
        return pfs;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::DynamicMap::Default_::Set::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation>();
        }
        return security_association;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(nat != nullptr)
    {
        children["nat"] = nat;
    }

    if(peer_container != nullptr)
    {
        children["peer-container"] = peer_container;
    }

    if(pfs != nullptr)
    {
        children["pfs"] = pfs;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(security_association != nullptr)
    {
        children["security-association"] = security_association;
    }

    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile = value;
        ikev2_profile.value_namespace = name_space;
        ikev2_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile = value;
        isakmp_profile.value_namespace = name_space;
        isakmp_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-set")
    {
        transform_set = value;
        transform_set.value_namespace = name_space;
        transform_set.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Default_::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile.yfilter = yfilter;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile.yfilter = yfilter;
    }
    if(value_path == "transform-set")
    {
        transform_set.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Default_::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "nat" || name == "peer-container" || name == "pfs" || name == "reverse-route" || name == "security-association" || name == "group" || name == "identity" || name == "ikev2-profile" || name == "isakmp-profile" || name == "transform-set")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Default_::Set::Ip::Ip()
    :
    access_group{YType::str, "access-group"},
    direction{YType::enumeration, "direction"}
{

    yang_name = "ip"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default_::Set::Ip::~Ip()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::Ip::has_data() const
{
    return access_group.is_set
	|| direction.is_set;
}

bool Native::Crypto::DynamicMap::Default_::Set::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(direction.yfilter);
}

std::string Native::Crypto::DynamicMap::Default_::Set::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default_::Set::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-group")
    {
        access_group = value;
        access_group.value_namespace = name_space;
        access_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Default_::Set::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-group")
    {
        access_group.yfilter = yfilter;
    }
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Default_::Set::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "direction")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Default_::Set::Nat::Nat()
    :
    demux{YType::empty, "demux"}
{

    yang_name = "nat"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default_::Set::Nat::~Nat()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::Nat::has_data() const
{
    return demux.is_set;
}

bool Native::Crypto::DynamicMap::Default_::Set::Nat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(demux.yfilter);
}

std::string Native::Crypto::DynamicMap::Default_::Set::Nat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default_::Set::Nat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (demux.is_set || is_set(demux.yfilter)) leaf_name_data.push_back(demux.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::Nat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "demux")
    {
        demux = value;
        demux.value_namespace = name_space;
        demux.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Default_::Set::Nat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "demux")
    {
        demux.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Default_::Set::Nat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "demux")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Default_::Set::PeerContainer::PeerContainer()
    :
    peer{YType::str, "peer"},
    default_{YType::empty, "default"}
{

    yang_name = "peer-container"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default_::Set::PeerContainer::~PeerContainer()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::PeerContainer::has_data() const
{
    return peer.is_set
	|| default_.is_set;
}

bool Native::Crypto::DynamicMap::Default_::Set::PeerContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Crypto::DynamicMap::Default_::Set::PeerContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default_::Set::PeerContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::PeerContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::PeerContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::PeerContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Default_::Set::PeerContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Default_::Set::PeerContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "default")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Default_::Set::Pfs::Pfs()
{

    yang_name = "pfs"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default_::Set::Pfs::~Pfs()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::Pfs::has_data() const
{
    return false;
}

bool Native::Crypto::DynamicMap::Default_::Set::Pfs::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::DynamicMap::Default_::Set::Pfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default_::Set::Pfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::Pfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::Pfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::Pfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::DynamicMap::Default_::Set::Pfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::DynamicMap::Default_::Set::Pfs::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::ReverseRoute()
{

    yang_name = "reverse-route"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::has_data() const
{
    return false;
}

bool Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::DynamicMap::Default_::Set::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::SecurityAssociation()
    :
    dfbit{YType::empty, "dfbit"},
    ecn{YType::empty, "ecn"}
    	,
    dummy(nullptr) // presence node
	,idle_time_container(std::make_shared<Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer>())
	,lifetime(std::make_shared<Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime>())
	,replay(std::make_shared<Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay>())
{
    idle_time_container->parent = this;
    lifetime->parent = this;
    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::has_data() const
{
    return dfbit.is_set
	|| ecn.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (idle_time_container !=  nullptr && idle_time_container->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dfbit.yfilter)
	|| ydk::is_set(ecn.yfilter)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (idle_time_container !=  nullptr && idle_time_container->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (replay !=  nullptr && replay->has_operation());
}

std::string Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dfbit.is_set || is_set(dfbit.yfilter)) leaf_name_data.push_back(dfbit.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "idle-time-container")
    {
        if(idle_time_container == nullptr)
        {
            idle_time_container = std::make_shared<Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer>();
        }
        return idle_time_container;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dummy != nullptr)
    {
        children["dummy"] = dummy;
    }

    if(idle_time_container != nullptr)
    {
        children["idle-time-container"] = idle_time_container;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(replay != nullptr)
    {
        children["replay"] = replay;
    }

    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dfbit")
    {
        dfbit = value;
        dfbit.value_namespace = name_space;
        dfbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dfbit")
    {
        dfbit.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dummy" || name == "idle-time-container" || name == "lifetime" || name == "replay" || name == "dfbit" || name == "ecn")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::Dummy()
{

    yang_name = "dummy"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::has_data() const
{
    return false;
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Dummy::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::IdleTimeContainer()
    :
    idle_time{YType::empty, "idle-time"},
    default_{YType::empty, "default"}
{

    yang_name = "idle-time-container"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::~IdleTimeContainer()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::has_data() const
{
    return idle_time.is_set
	|| default_.is_set;
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idle_time.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::IdleTimeContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle-time" || name == "default")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::empty, "days"},
    kilobytes{YType::empty, "kilobytes"},
    seconds{YType::empty, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::has_data() const
{
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(kilobytes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.yfilter)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobytes")
    {
        kilobytes = value;
        kilobytes.value_namespace = name_space;
        kilobytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "kilobytes")
    {
        kilobytes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "kilobytes" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::Replay()
    :
    disable{YType::empty, "disable"},
    window_size{YType::empty, "window-size"}
{

    yang_name = "replay"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::~Replay()
{
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::has_data() const
{
    return disable.is_set
	|| window_size.is_set;
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Default_::Set::SecurityAssociation::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "window-size")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Dialer::Dialer()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "dialer"; yang_parent_name = "dynamic-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Dialer::~Dialer()
{
}

bool Native::Crypto::DynamicMap::Dialer::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::DynamicMap::Dialer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::DynamicMap::Dialer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dialer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Dialer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Dialer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Dialer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Dialer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Dialer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Dialer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Match::Match()
    :
    address{YType::str, "address"}
{

    yang_name = "match"; yang_parent_name = "dynamic-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Match::~Match()
{
}

bool Native::Crypto::DynamicMap::Match::has_data() const
{
    return address.is_set;
}

bool Native::Crypto::DynamicMap::Match::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Crypto::DynamicMap::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Qos::Qos()
    :
    pre_classify{YType::empty, "pre-classify"}
{

    yang_name = "qos"; yang_parent_name = "dynamic-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Qos::~Qos()
{
}

bool Native::Crypto::DynamicMap::Qos::has_data() const
{
    return pre_classify.is_set;
}

bool Native::Crypto::DynamicMap::Qos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pre_classify.yfilter);
}

std::string Native::Crypto::DynamicMap::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pre_classify.is_set || is_set(pre_classify.yfilter)) leaf_name_data.push_back(pre_classify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pre-classify")
    {
        pre_classify = value;
        pre_classify.value_namespace = name_space;
        pre_classify.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pre-classify")
    {
        pre_classify.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pre-classify")
        return true;
    return false;
}

Native::Crypto::DynamicMap::ReverseRoute::ReverseRoute()
    :
    static_{YType::empty, "static"}
    	,
    remote_peer_conatiner(std::make_shared<Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner>())
{
    remote_peer_conatiner->parent = this;

    yang_name = "reverse-route"; yang_parent_name = "dynamic-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::DynamicMap::ReverseRoute::has_data() const
{
    return static_.is_set
	|| (remote_peer_conatiner !=  nullptr && remote_peer_conatiner->has_data());
}

bool Native::Crypto::DynamicMap::ReverseRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(static_.yfilter)
	|| (remote_peer_conatiner !=  nullptr && remote_peer_conatiner->has_operation());
}

std::string Native::Crypto::DynamicMap::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-peer-conatiner")
    {
        if(remote_peer_conatiner == nullptr)
        {
            remote_peer_conatiner = std::make_shared<Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner>();
        }
        return remote_peer_conatiner;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote_peer_conatiner != nullptr)
    {
        children["remote-peer-conatiner"] = remote_peer_conatiner;
    }

    return children;
}

void Native::Crypto::DynamicMap::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-peer-conatiner" || name == "static")
        return true;
    return false;
}

Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::RemotePeerConatiner()
    :
    remote_peer{YType::str, "remote-peer"},
    gateway{YType::empty, "gateway"},
    static_{YType::empty, "static"}
{

    yang_name = "remote-peer-conatiner"; yang_parent_name = "reverse-route"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::~RemotePeerConatiner()
{
}

bool Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::has_data() const
{
    return remote_peer.is_set
	|| gateway.is_set
	|| static_.is_set;
}

bool Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remote_peer.yfilter)
	|| ydk::is_set(gateway.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-peer-conatiner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_peer.is_set || is_set(remote_peer.yfilter)) leaf_name_data.push_back(remote_peer.get_name_leafdata());
    if (gateway.is_set || is_set(gateway.yfilter)) leaf_name_data.push_back(gateway.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-peer")
    {
        remote_peer = value;
        remote_peer.value_namespace = name_space;
        remote_peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway")
    {
        gateway = value;
        gateway.value_namespace = name_space;
        gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-peer")
    {
        remote_peer.yfilter = yfilter;
    }
    if(value_path == "gateway")
    {
        gateway.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::ReverseRoute::RemotePeerConatiner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-peer" || name == "gateway" || name == "static")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::Set()
    :
    group{YType::str, "group"},
    identity{YType::str, "identity"},
    ikev2_profile{YType::str, "ikev2-profile"},
    isakmp_profile{YType::str, "isakmp-profile"},
    transform_set{YType::str, "transform-set"}
    	,
    peer(std::make_shared<Native::Crypto::DynamicMap::Set::Peer>())
	,pfs(nullptr) // presence node
	,reverse_route(std::make_shared<Native::Crypto::DynamicMap::Set::ReverseRoute>())
	,ip_in(std::make_shared<Native::Crypto::DynamicMap::Set::IpIn>())
	,ip_out(std::make_shared<Native::Crypto::DynamicMap::Set::IpOut>())
	,nat(std::make_shared<Native::Crypto::DynamicMap::Set::Nat>())
	,peer_container(std::make_shared<Native::Crypto::DynamicMap::Set::PeerContainer>())
	,security_association(std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation>())
{
    peer->parent = this;
    reverse_route->parent = this;
    ip_in->parent = this;
    ip_out->parent = this;
    nat->parent = this;
    peer_container->parent = this;
    security_association->parent = this;

    yang_name = "set"; yang_parent_name = "dynamic-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::~Set()
{
}

bool Native::Crypto::DynamicMap::Set::has_data() const
{
    for (auto const & leaf : transform_set.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return group.is_set
	|| identity.is_set
	|| ikev2_profile.is_set
	|| isakmp_profile.is_set
	|| (peer !=  nullptr && peer->has_data())
	|| (pfs !=  nullptr && pfs->has_data())
	|| (reverse_route !=  nullptr && reverse_route->has_data())
	|| (ip_in !=  nullptr && ip_in->has_data())
	|| (ip_out !=  nullptr && ip_out->has_data())
	|| (nat !=  nullptr && nat->has_data())
	|| (peer_container !=  nullptr && peer_container->has_data())
	|| (security_association !=  nullptr && security_association->has_data());
}

bool Native::Crypto::DynamicMap::Set::has_operation() const
{
    for (auto const & leaf : transform_set.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(identity.yfilter)
	|| ydk::is_set(ikev2_profile.yfilter)
	|| ydk::is_set(isakmp_profile.yfilter)
	|| ydk::is_set(transform_set.yfilter)
	|| (peer !=  nullptr && peer->has_operation())
	|| (pfs !=  nullptr && pfs->has_operation())
	|| (reverse_route !=  nullptr && reverse_route->has_operation())
	|| (ip_in !=  nullptr && ip_in->has_operation())
	|| (ip_out !=  nullptr && ip_out->has_operation())
	|| (nat !=  nullptr && nat->has_operation())
	|| (peer_container !=  nullptr && peer_container->has_operation())
	|| (security_association !=  nullptr && security_association->has_operation());
}

std::string Native::Crypto::DynamicMap::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());
    if (ikev2_profile.is_set || is_set(ikev2_profile.yfilter)) leaf_name_data.push_back(ikev2_profile.get_name_leafdata());
    if (isakmp_profile.is_set || is_set(isakmp_profile.yfilter)) leaf_name_data.push_back(isakmp_profile.get_name_leafdata());

    auto transform_set_name_datas = transform_set.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), transform_set_name_datas.begin(), transform_set_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::DynamicMap::Set::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "pfs")
    {
        if(pfs == nullptr)
        {
            pfs = std::make_shared<Native::Crypto::DynamicMap::Set::Pfs>();
        }
        return pfs;
    }

    if(child_yang_name == "reverse-route")
    {
        if(reverse_route == nullptr)
        {
            reverse_route = std::make_shared<Native::Crypto::DynamicMap::Set::ReverseRoute>();
        }
        return reverse_route;
    }

    if(child_yang_name == "ip-in")
    {
        if(ip_in == nullptr)
        {
            ip_in = std::make_shared<Native::Crypto::DynamicMap::Set::IpIn>();
        }
        return ip_in;
    }

    if(child_yang_name == "ip-out")
    {
        if(ip_out == nullptr)
        {
            ip_out = std::make_shared<Native::Crypto::DynamicMap::Set::IpOut>();
        }
        return ip_out;
    }

    if(child_yang_name == "nat")
    {
        if(nat == nullptr)
        {
            nat = std::make_shared<Native::Crypto::DynamicMap::Set::Nat>();
        }
        return nat;
    }

    if(child_yang_name == "peer-container")
    {
        if(peer_container == nullptr)
        {
            peer_container = std::make_shared<Native::Crypto::DynamicMap::Set::PeerContainer>();
        }
        return peer_container;
    }

    if(child_yang_name == "security-association")
    {
        if(security_association == nullptr)
        {
            security_association = std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation>();
        }
        return security_association;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(pfs != nullptr)
    {
        children["pfs"] = pfs;
    }

    if(reverse_route != nullptr)
    {
        children["reverse-route"] = reverse_route;
    }

    if(ip_in != nullptr)
    {
        children["ip-in"] = ip_in;
    }

    if(ip_out != nullptr)
    {
        children["ip-out"] = ip_out;
    }

    if(nat != nullptr)
    {
        children["nat"] = nat;
    }

    if(peer_container != nullptr)
    {
        children["peer-container"] = peer_container;
    }

    if(security_association != nullptr)
    {
        children["security-association"] = security_association;
    }

    return children;
}

void Native::Crypto::DynamicMap::Set::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile = value;
        ikev2_profile.value_namespace = name_space;
        ikev2_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile = value;
        isakmp_profile.value_namespace = name_space;
        isakmp_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-set")
    {
        transform_set.append(value);
    }
}

void Native::Crypto::DynamicMap::Set::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
    if(value_path == "ikev2-profile")
    {
        ikev2_profile.yfilter = yfilter;
    }
    if(value_path == "isakmp-profile")
    {
        isakmp_profile.yfilter = yfilter;
    }
    if(value_path == "transform-set")
    {
        transform_set.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Set::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "pfs" || name == "reverse-route" || name == "ip-in" || name == "ip-out" || name == "nat" || name == "peer-container" || name == "security-association" || name == "group" || name == "identity" || name == "ikev2-profile" || name == "isakmp-profile" || name == "transform-set")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::Peer::Peer()
    :
    address{YType::str, "address"},
    default_{YType::empty, "default"},
    dynamic{YType::empty, "dynamic"}
{

    yang_name = "peer"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::Peer::~Peer()
{
}

bool Native::Crypto::DynamicMap::Set::Peer::has_data() const
{
    return address.is_set
	|| default_.is_set
	|| dynamic.is_set;
}

bool Native::Crypto::DynamicMap::Set::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(dynamic.yfilter);
}

std::string Native::Crypto::DynamicMap::Set::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (dynamic.is_set || is_set(dynamic.yfilter)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamic")
    {
        dynamic = value;
        dynamic.value_namespace = name_space;
        dynamic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Set::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "dynamic")
    {
        dynamic.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Set::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "default" || name == "dynamic")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::Pfs::Pfs()
    :
    group{YType::enumeration, "group"}
{

    yang_name = "pfs"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::Pfs::~Pfs()
{
}

bool Native::Crypto::DynamicMap::Set::Pfs::has_data() const
{
    return group.is_set;
}

bool Native::Crypto::DynamicMap::Set::Pfs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter);
}

std::string Native::Crypto::DynamicMap::Set::Pfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::Pfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::Pfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::Pfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::Pfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Set::Pfs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Set::Pfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::ReverseRoute::ReverseRoute()
    :
    distance{YType::uint8, "distance"},
    tag{YType::uint64, "tag"}
{

    yang_name = "reverse-route"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::ReverseRoute::~ReverseRoute()
{
}

bool Native::Crypto::DynamicMap::Set::ReverseRoute::has_data() const
{
    return distance.is_set
	|| tag.is_set;
}

bool Native::Crypto::DynamicMap::Set::ReverseRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Crypto::DynamicMap::Set::ReverseRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::ReverseRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::ReverseRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::ReverseRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::ReverseRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Set::ReverseRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Set::ReverseRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "distance" || name == "tag")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::IpIn::IpIn()
    :
    ip(std::make_shared<Native::Crypto::DynamicMap::Set::IpIn::Ip>())
{
    ip->parent = this;

    yang_name = "ip-in"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::IpIn::~IpIn()
{
}

bool Native::Crypto::DynamicMap::Set::IpIn::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Crypto::DynamicMap::Set::IpIn::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Crypto::DynamicMap::Set::IpIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::IpIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::IpIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Crypto::DynamicMap::Set::IpIn::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::IpIn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Crypto::DynamicMap::Set::IpIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::DynamicMap::Set::IpIn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::DynamicMap::Set::IpIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::IpIn::Ip::Ip()
    :
    access_group{YType::str, "access-group"},
    in{YType::empty, "in"}
{

    yang_name = "ip"; yang_parent_name = "ip-in"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::IpIn::Ip::~Ip()
{
}

bool Native::Crypto::DynamicMap::Set::IpIn::Ip::has_data() const
{
    return access_group.is_set
	|| in.is_set;
}

bool Native::Crypto::DynamicMap::Set::IpIn::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Crypto::DynamicMap::Set::IpIn::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::IpIn::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::IpIn::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::IpIn::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::IpIn::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-group")
    {
        access_group = value;
        access_group.value_namespace = name_space;
        access_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Set::IpIn::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-group")
    {
        access_group.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Set::IpIn::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "in")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::IpOut::IpOut()
    :
    ip(std::make_shared<Native::Crypto::DynamicMap::Set::IpOut::Ip>())
{
    ip->parent = this;

    yang_name = "ip-out"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::IpOut::~IpOut()
{
}

bool Native::Crypto::DynamicMap::Set::IpOut::has_data() const
{
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Crypto::DynamicMap::Set::IpOut::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Crypto::DynamicMap::Set::IpOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::IpOut::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::IpOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Crypto::DynamicMap::Set::IpOut::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::IpOut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Crypto::DynamicMap::Set::IpOut::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::DynamicMap::Set::IpOut::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::DynamicMap::Set::IpOut::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::IpOut::Ip::Ip()
    :
    access_group{YType::str, "access-group"},
    out{YType::empty, "out"}
{

    yang_name = "ip"; yang_parent_name = "ip-out"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::IpOut::Ip::~Ip()
{
}

bool Native::Crypto::DynamicMap::Set::IpOut::Ip::has_data() const
{
    return access_group.is_set
	|| out.is_set;
}

bool Native::Crypto::DynamicMap::Set::IpOut::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_group.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Crypto::DynamicMap::Set::IpOut::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::IpOut::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_group.is_set || is_set(access_group.yfilter)) leaf_name_data.push_back(access_group.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::IpOut::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::IpOut::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::IpOut::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-group")
    {
        access_group = value;
        access_group.value_namespace = name_space;
        access_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Set::IpOut::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-group")
    {
        access_group.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Set::IpOut::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "out")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::Nat::Nat()
    :
    demux{YType::empty, "demux"}
{

    yang_name = "nat"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::Nat::~Nat()
{
}

bool Native::Crypto::DynamicMap::Set::Nat::has_data() const
{
    return demux.is_set;
}

bool Native::Crypto::DynamicMap::Set::Nat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(demux.yfilter);
}

std::string Native::Crypto::DynamicMap::Set::Nat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::Nat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (demux.is_set || is_set(demux.yfilter)) leaf_name_data.push_back(demux.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::Nat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "demux")
    {
        demux = value;
        demux.value_namespace = name_space;
        demux.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Set::Nat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "demux")
    {
        demux.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Set::Nat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "demux")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::PeerContainer::PeerContainer()
    :
    peer{YType::str, "peer"},
    default_{YType::empty, "default"}
{

    yang_name = "peer-container"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::PeerContainer::~PeerContainer()
{
}

bool Native::Crypto::DynamicMap::Set::PeerContainer::has_data() const
{
    return peer.is_set
	|| default_.is_set;
}

bool Native::Crypto::DynamicMap::Set::PeerContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Crypto::DynamicMap::Set::PeerContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::PeerContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer.is_set || is_set(peer.yfilter)) leaf_name_data.push_back(peer.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::PeerContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::PeerContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::PeerContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer")
    {
        peer = value;
        peer.value_namespace = name_space;
        peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Set::PeerContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer")
    {
        peer.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Set::PeerContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "default")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::SecurityAssociation()
    :
    dfbit{YType::enumeration, "dfbit"},
    ecn{YType::enumeration, "ecn"}
    	,
    dummy(std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy>())
	,idle_time_container(std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer>())
	,lifetime(std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime>())
	,replay(std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay>())
{
    dummy->parent = this;
    idle_time_container->parent = this;
    lifetime->parent = this;
    replay->parent = this;

    yang_name = "security-association"; yang_parent_name = "set"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::~SecurityAssociation()
{
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::has_data() const
{
    return dfbit.is_set
	|| ecn.is_set
	|| (dummy !=  nullptr && dummy->has_data())
	|| (idle_time_container !=  nullptr && idle_time_container->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (replay !=  nullptr && replay->has_data());
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dfbit.yfilter)
	|| ydk::is_set(ecn.yfilter)
	|| (dummy !=  nullptr && dummy->has_operation())
	|| (idle_time_container !=  nullptr && idle_time_container->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (replay !=  nullptr && replay->has_operation());
}

std::string Native::Crypto::DynamicMap::Set::SecurityAssociation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-association";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::SecurityAssociation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dfbit.is_set || is_set(dfbit.yfilter)) leaf_name_data.push_back(dfbit.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.yfilter)) leaf_name_data.push_back(ecn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::SecurityAssociation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dummy")
    {
        if(dummy == nullptr)
        {
            dummy = std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy>();
        }
        return dummy;
    }

    if(child_yang_name == "idle-time-container")
    {
        if(idle_time_container == nullptr)
        {
            idle_time_container = std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer>();
        }
        return idle_time_container;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay>();
        }
        return replay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::SecurityAssociation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dummy != nullptr)
    {
        children["dummy"] = dummy;
    }

    if(idle_time_container != nullptr)
    {
        children["idle-time-container"] = idle_time_container;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(replay != nullptr)
    {
        children["replay"] = replay;
    }

    return children;
}

void Native::Crypto::DynamicMap::Set::SecurityAssociation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dfbit")
    {
        dfbit = value;
        dfbit.value_namespace = name_space;
        dfbit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecn")
    {
        ecn = value;
        ecn.value_namespace = name_space;
        ecn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Set::SecurityAssociation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dfbit")
    {
        dfbit.yfilter = yfilter;
    }
    if(value_path == "ecn")
    {
        ecn.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dummy" || name == "idle-time-container" || name == "lifetime" || name == "replay" || name == "dfbit" || name == "ecn")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::Dummy()
    :
    pps{YType::uint8, "pps"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "dummy"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::~Dummy()
{
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::has_data() const
{
    return pps.is_set
	|| seconds.is_set;
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pps.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dummy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pps.is_set || is_set(pps.yfilter)) leaf_name_data.push_back(pps.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pps")
    {
        pps = value;
        pps.value_namespace = name_space;
        pps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pps")
    {
        pps.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::Dummy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pps" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::IdleTimeContainer()
    :
    idle_time{YType::uint32, "idle-time"},
    default_{YType::empty, "default"}
{

    yang_name = "idle-time-container"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::~IdleTimeContainer()
{
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::has_data() const
{
    return idle_time.is_set
	|| default_.is_set;
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idle_time.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idle-time-container";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_time.is_set || is_set(idle_time.yfilter)) leaf_name_data.push_back(idle_time.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idle-time")
    {
        idle_time = value;
        idle_time.value_namespace = name_space;
        idle_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idle-time")
    {
        idle_time.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::IdleTimeContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idle-time" || name == "default")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::Lifetime()
    :
    days{YType::uint8, "days"},
    kilobytes{YType::str, "kilobytes"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::~Lifetime()
{
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::has_data() const
{
    return days.is_set
	|| kilobytes.is_set
	|| seconds.is_set;
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(kilobytes.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (kilobytes.is_set || is_set(kilobytes.yfilter)) leaf_name_data.push_back(kilobytes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "kilobytes")
    {
        kilobytes = value;
        kilobytes.value_namespace = name_space;
        kilobytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "kilobytes")
    {
        kilobytes.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "kilobytes" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::Replay()
    :
    disable{YType::empty, "disable"},
    window_size{YType::enumeration, "window-size"}
{

    yang_name = "replay"; yang_parent_name = "security-association"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::~Replay()
{
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::has_data() const
{
    return disable.is_set
	|| window_size.is_set;
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(window_size.yfilter);
}

std::string Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.yfilter)) leaf_name_data.push_back(window_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "window-size")
    {
        window_size = value;
        window_size.value_namespace = name_space;
        window_size.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "window-size")
    {
        window_size.yfilter = yfilter;
    }
}

bool Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "window-size")
        return true;
    return false;
}

Native::Crypto::Engine::Engine()
    :
    software{YType::enumeration, "software"}
{

    yang_name = "engine"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Engine::~Engine()
{
}

bool Native::Crypto::Engine::has_data() const
{
    return software.is_set;
}

bool Native::Crypto::Engine::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(software.yfilter);
}

std::string Native::Crypto::Engine::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Engine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:engine";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Engine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (software.is_set || is_set(software.yfilter)) leaf_name_data.push_back(software.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Engine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Engine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Engine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "software")
    {
        software = value;
        software.value_namespace = name_space;
        software.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Engine::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "software")
    {
        software.yfilter = yfilter;
    }
}

bool Native::Crypto::Engine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "software")
        return true;
    return false;
}

Native::Crypto::Gdoi::Gdoi()
{

    yang_name = "gdoi"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Gdoi::~Gdoi()
{
}

bool Native::Crypto::Gdoi::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Gdoi::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Crypto::Gdoi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Gdoi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:gdoi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Gdoi::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Gdoi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Group()
    :
    name{YType::str, "name"},
    ipv6{YType::empty, "ipv6"},
    passive{YType::empty, "passive"}
    	,
    client(std::make_shared<Native::Crypto::Gdoi::Group::Client>())
	,identity(std::make_shared<Native::Crypto::Gdoi::Group::Identity>())
	,server(std::make_shared<Native::Crypto::Gdoi::Group::Server>())
	,default_(std::make_shared<Native::Crypto::Gdoi::Group::Default_>())
{
    client->parent = this;
    identity->parent = this;
    server->parent = this;
    default_->parent = this;

    yang_name = "group"; yang_parent_name = "gdoi"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Crypto::Gdoi::Group::~Group()
{
}

bool Native::Crypto::Gdoi::Group::has_data() const
{
    return name.is_set
	|| ipv6.is_set
	|| passive.is_set
	|| (client !=  nullptr && client->has_data())
	|| (identity !=  nullptr && identity->has_data())
	|| (server !=  nullptr && server->has_data())
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Crypto::Gdoi::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(passive.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (identity !=  nullptr && identity->has_operation())
	|| (server !=  nullptr && server->has_operation())
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Crypto::Gdoi::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:gdoi/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Crypto::Gdoi::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (passive.is_set || is_set(passive.yfilter)) leaf_name_data.push_back(passive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Gdoi::Group::Client>();
        }
        return client;
    }

    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Crypto::Gdoi::Group::Identity>();
        }
        return identity;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Crypto::Gdoi::Group::Server>();
        }
        return server;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gdoi::Group::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(identity != nullptr)
    {
        children["identity"] = identity;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive")
    {
        passive = value;
        passive.value_namespace = name_space;
        passive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "passive")
    {
        passive.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "identity" || name == "server" || name == "default" || name == "name" || name == "ipv6" || name == "passive")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Client::Client()
    :
    bypass_policy{YType::empty, "bypass-policy"},
    transform_sets{YType::str, "transform-sets"},
    transport_encrypt_key{YType::enumeration, "transport-encrypt-key"}
    	,
    protocol(std::make_shared<Native::Crypto::Gdoi::Group::Client::Protocol>())
	,recovery_check(std::make_shared<Native::Crypto::Gdoi::Group::Client::RecoveryCheck>())
	,registration(std::make_shared<Native::Crypto::Gdoi::Group::Client::Registration>())
	,rekey(std::make_shared<Native::Crypto::Gdoi::Group::Client::Rekey>())
	,status(std::make_shared<Native::Crypto::Gdoi::Group::Client::Status>())
{
    protocol->parent = this;
    recovery_check->parent = this;
    registration->parent = this;
    rekey->parent = this;
    status->parent = this;

    yang_name = "client"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Client::~Client()
{
}

bool Native::Crypto::Gdoi::Group::Client::has_data() const
{
    for (auto const & leaf : transform_sets.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return bypass_policy.is_set
	|| transport_encrypt_key.is_set
	|| (protocol !=  nullptr && protocol->has_data())
	|| (recovery_check !=  nullptr && recovery_check->has_data())
	|| (registration !=  nullptr && registration->has_data())
	|| (rekey !=  nullptr && rekey->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool Native::Crypto::Gdoi::Group::Client::has_operation() const
{
    for (auto const & leaf : transform_sets.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bypass_policy.yfilter)
	|| ydk::is_set(transform_sets.yfilter)
	|| ydk::is_set(transport_encrypt_key.yfilter)
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (recovery_check !=  nullptr && recovery_check->has_operation())
	|| (registration !=  nullptr && registration->has_operation())
	|| (rekey !=  nullptr && rekey->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypass_policy.is_set || is_set(bypass_policy.yfilter)) leaf_name_data.push_back(bypass_policy.get_name_leafdata());
    if (transport_encrypt_key.is_set || is_set(transport_encrypt_key.yfilter)) leaf_name_data.push_back(transport_encrypt_key.get_name_leafdata());

    auto transform_sets_name_datas = transform_sets.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), transform_sets_name_datas.begin(), transform_sets_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Crypto::Gdoi::Group::Client::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "recovery-check")
    {
        if(recovery_check == nullptr)
        {
            recovery_check = std::make_shared<Native::Crypto::Gdoi::Group::Client::RecoveryCheck>();
        }
        return recovery_check;
    }

    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Crypto::Gdoi::Group::Client::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "rekey")
    {
        if(rekey == nullptr)
        {
            rekey = std::make_shared<Native::Crypto::Gdoi::Group::Client::Rekey>();
        }
        return rekey;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Native::Crypto::Gdoi::Group::Client::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(recovery_check != nullptr)
    {
        children["recovery-check"] = recovery_check;
    }

    if(registration != nullptr)
    {
        children["registration"] = registration;
    }

    if(rekey != nullptr)
    {
        children["rekey"] = rekey;
    }

    if(status != nullptr)
    {
        children["status"] = status;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bypass-policy")
    {
        bypass_policy = value;
        bypass_policy.value_namespace = name_space;
        bypass_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transform-sets")
    {
        transform_sets.append(value);
    }
    if(value_path == "transport-encrypt-key")
    {
        transport_encrypt_key = value;
        transport_encrypt_key.value_namespace = name_space;
        transport_encrypt_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bypass-policy")
    {
        bypass_policy.yfilter = yfilter;
    }
    if(value_path == "transform-sets")
    {
        transform_sets.yfilter = yfilter;
    }
    if(value_path == "transport-encrypt-key")
    {
        transport_encrypt_key.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "recovery-check" || name == "registration" || name == "rekey" || name == "status" || name == "bypass-policy" || name == "transform-sets" || name == "transport-encrypt-key")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Client::Protocol::Protocol()
    :
    gdoi{YType::empty, "gdoi"},
    gikev2{YType::str, "gikev2"}
{

    yang_name = "protocol"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Client::Protocol::~Protocol()
{
}

bool Native::Crypto::Gdoi::Group::Client::Protocol::has_data() const
{
    return gdoi.is_set
	|| gikev2.is_set;
}

bool Native::Crypto::Gdoi::Group::Client::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gdoi.yfilter)
	|| ydk::is_set(gikev2.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Client::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Client::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gdoi.is_set || is_set(gdoi.yfilter)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (gikev2.is_set || is_set(gikev2.yfilter)) leaf_name_data.push_back(gikev2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Client::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gdoi")
    {
        gdoi = value;
        gdoi.value_namespace = name_space;
        gdoi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gikev2")
    {
        gikev2 = value;
        gikev2.value_namespace = name_space;
        gikev2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Client::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gdoi")
    {
        gdoi.yfilter = yfilter;
    }
    if(value_path == "gikev2")
    {
        gikev2.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Client::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gdoi" || name == "gikev2")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Client::RecoveryCheck::RecoveryCheck()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "recovery-check"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Client::RecoveryCheck::~RecoveryCheck()
{
}

bool Native::Crypto::Gdoi::Group::Client::RecoveryCheck::has_data() const
{
    return interval.is_set;
}

bool Native::Crypto::Gdoi::Group::Client::RecoveryCheck::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Client::RecoveryCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery-check";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Client::RecoveryCheck::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::RecoveryCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::RecoveryCheck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Client::RecoveryCheck::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Client::RecoveryCheck::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Client::RecoveryCheck::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Client::Registration::Registration()
    :
    interface{YType::str, "interface"}
{

    yang_name = "registration"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Client::Registration::~Registration()
{
}

bool Native::Crypto::Gdoi::Group::Client::Registration::has_data() const
{
    return interface.is_set;
}

bool Native::Crypto::Gdoi::Group::Client::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Client::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Client::Registration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Client::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Client::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Client::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Client::Rekey::Rekey()
    :
    encryption(std::make_shared<Native::Crypto::Gdoi::Group::Client::Rekey::Encryption>())
	,hash(std::make_shared<Native::Crypto::Gdoi::Group::Client::Rekey::Hash>())
{
    encryption->parent = this;
    hash->parent = this;

    yang_name = "rekey"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Client::Rekey::~Rekey()
{
}

bool Native::Crypto::Gdoi::Group::Client::Rekey::has_data() const
{
    return (encryption !=  nullptr && encryption->has_data())
	|| (hash !=  nullptr && hash->has_data());
}

bool Native::Crypto::Gdoi::Group::Client::Rekey::has_operation() const
{
    return is_set(yfilter)
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (hash !=  nullptr && hash->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Client::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Client::Rekey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Crypto::Gdoi::Group::Client::Rekey::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "hash")
    {
        if(hash == nullptr)
        {
            hash = std::make_shared<Native::Crypto::Gdoi::Group::Client::Rekey::Hash>();
        }
        return hash;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::Rekey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    if(hash != nullptr)
    {
        children["hash"] = hash;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Client::Rekey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Client::Rekey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Client::Rekey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "hash")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::Encryption()
    :
    rekey_3des_cbc{YType::empty, "rekey-3des-cbc"},
    aes_128{YType::empty, "aes-128"},
    aes_192{YType::empty, "aes-192"},
    aes_256{YType::empty, "aes-256"},
    des_cbc{YType::empty, "des-cbc"}
{

    yang_name = "encryption"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::~Encryption()
{
}

bool Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::has_data() const
{
    return rekey_3des_cbc.is_set
	|| aes_128.is_set
	|| aes_192.is_set
	|| aes_256.is_set
	|| des_cbc.is_set;
}

bool Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rekey_3des_cbc.yfilter)
	|| ydk::is_set(aes_128.yfilter)
	|| ydk::is_set(aes_192.yfilter)
	|| ydk::is_set(aes_256.yfilter)
	|| ydk::is_set(des_cbc.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rekey_3des_cbc.is_set || is_set(rekey_3des_cbc.yfilter)) leaf_name_data.push_back(rekey_3des_cbc.get_name_leafdata());
    if (aes_128.is_set || is_set(aes_128.yfilter)) leaf_name_data.push_back(aes_128.get_name_leafdata());
    if (aes_192.is_set || is_set(aes_192.yfilter)) leaf_name_data.push_back(aes_192.get_name_leafdata());
    if (aes_256.is_set || is_set(aes_256.yfilter)) leaf_name_data.push_back(aes_256.get_name_leafdata());
    if (des_cbc.is_set || is_set(des_cbc.yfilter)) leaf_name_data.push_back(des_cbc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rekey-3des-cbc")
    {
        rekey_3des_cbc = value;
        rekey_3des_cbc.value_namespace = name_space;
        rekey_3des_cbc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-128")
    {
        aes_128 = value;
        aes_128.value_namespace = name_space;
        aes_128.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-192")
    {
        aes_192 = value;
        aes_192.value_namespace = name_space;
        aes_192.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-256")
    {
        aes_256 = value;
        aes_256.value_namespace = name_space;
        aes_256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des-cbc")
    {
        des_cbc = value;
        des_cbc.value_namespace = name_space;
        des_cbc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rekey-3des-cbc")
    {
        rekey_3des_cbc.yfilter = yfilter;
    }
    if(value_path == "aes-128")
    {
        aes_128.yfilter = yfilter;
    }
    if(value_path == "aes-192")
    {
        aes_192.yfilter = yfilter;
    }
    if(value_path == "aes-256")
    {
        aes_256.yfilter = yfilter;
    }
    if(value_path == "des-cbc")
    {
        des_cbc.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Client::Rekey::Encryption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rekey-3des-cbc" || name == "aes-128" || name == "aes-192" || name == "aes-256" || name == "des-cbc")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Client::Rekey::Hash::Hash()
    :
    sha{YType::empty, "sha"},
    sha256{YType::empty, "sha256"},
    sha384{YType::empty, "sha384"},
    sha512{YType::empty, "sha512"}
{

    yang_name = "hash"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Client::Rekey::Hash::~Hash()
{
}

bool Native::Crypto::Gdoi::Group::Client::Rekey::Hash::has_data() const
{
    return sha.is_set
	|| sha256.is_set
	|| sha384.is_set
	|| sha512.is_set;
}

bool Native::Crypto::Gdoi::Group::Client::Rekey::Hash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sha.yfilter)
	|| ydk::is_set(sha256.yfilter)
	|| ydk::is_set(sha384.yfilter)
	|| ydk::is_set(sha512.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Client::Rekey::Hash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Client::Rekey::Hash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sha.is_set || is_set(sha.yfilter)) leaf_name_data.push_back(sha.get_name_leafdata());
    if (sha256.is_set || is_set(sha256.yfilter)) leaf_name_data.push_back(sha256.get_name_leafdata());
    if (sha384.is_set || is_set(sha384.yfilter)) leaf_name_data.push_back(sha384.get_name_leafdata());
    if (sha512.is_set || is_set(sha512.yfilter)) leaf_name_data.push_back(sha512.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::Rekey::Hash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::Rekey::Hash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Client::Rekey::Hash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sha")
    {
        sha = value;
        sha.value_namespace = name_space;
        sha.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha256")
    {
        sha256 = value;
        sha256.value_namespace = name_space;
        sha256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha384")
    {
        sha384 = value;
        sha384.value_namespace = name_space;
        sha384.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha512")
    {
        sha512 = value;
        sha512.value_namespace = name_space;
        sha512.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Client::Rekey::Hash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sha")
    {
        sha.yfilter = yfilter;
    }
    if(value_path == "sha256")
    {
        sha256.yfilter = yfilter;
    }
    if(value_path == "sha384")
    {
        sha384.yfilter = yfilter;
    }
    if(value_path == "sha512")
    {
        sha512.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Client::Rekey::Hash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sha" || name == "sha256" || name == "sha384" || name == "sha512")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Client::Status::Status()
    :
    active_sa(std::make_shared<Native::Crypto::Gdoi::Group::Client::Status::ActiveSa>())
{
    active_sa->parent = this;

    yang_name = "status"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Client::Status::~Status()
{
}

bool Native::Crypto::Gdoi::Group::Client::Status::has_data() const
{
    return (active_sa !=  nullptr && active_sa->has_data());
}

bool Native::Crypto::Gdoi::Group::Client::Status::has_operation() const
{
    return is_set(yfilter)
	|| (active_sa !=  nullptr && active_sa->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Client::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Client::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-sa")
    {
        if(active_sa == nullptr)
        {
            active_sa = std::make_shared<Native::Crypto::Gdoi::Group::Client::Status::ActiveSa>();
        }
        return active_sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_sa != nullptr)
    {
        children["active-sa"] = active_sa;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Client::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Client::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Client::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-sa")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::ActiveSa()
    :
    track{YType::uint16, "track"}
{

    yang_name = "active-sa"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::~ActiveSa()
{
}

bool Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::has_data() const
{
    return track.is_set;
}

bool Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(track.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (track.is_set || is_set(track.yfilter)) leaf_name_data.push_back(track.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "track")
    {
        track = value;
        track.value_namespace = name_space;
        track.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "track")
    {
        track.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Client::Status::ActiveSa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "track")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Identity::Identity()
    :
    number{YType::uint64, "number"}
    	,
    address(std::make_shared<Native::Crypto::Gdoi::Group::Identity::Address>())
{
    address->parent = this;

    yang_name = "identity"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Identity::~Identity()
{
}

bool Native::Crypto::Gdoi::Group::Identity::has_data() const
{
    return number.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gdoi::Group::Identity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Identity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Identity::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Identity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Identity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Identity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "number")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Identity::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "identity"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Identity::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Identity::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Identity::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Identity::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Identity::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Identity::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Identity::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Identity::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Identity::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Identity::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Server()
    :
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Address>())
	,hostname(std::make_shared<Native::Crypto::Gdoi::Group::Server::Hostname>())
	,local(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local>())
{
    address->parent = this;
    hostname->parent = this;
    local->parent = this;

    yang_name = "server"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::~Server()
{
}

bool Native::Crypto::Gdoi::Group::Server::has_data() const
{
    return (address !=  nullptr && address->has_data())
	|| (hostname !=  nullptr && hostname->has_data())
	|| (local !=  nullptr && local->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation())
	|| (local !=  nullptr && local->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Address>();
        }
        return address;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Crypto::Gdoi::Group::Server::Hostname>();
        }
        return hostname;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(hostname != nullptr)
    {
        children["hostname"] = hostname;
    }

    if(local != nullptr)
    {
        children["local"] = local;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "hostname" || name == "local")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Address::Address()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "address"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Address::has_data() const
{
    for (auto const & leaf : ipv4.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv6.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Address::has_operation() const
{
    for (auto const & leaf : ipv4.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : ipv6.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto ipv4_name_datas = ipv4.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_name_datas.begin(), ipv4_name_datas.end());
    auto ipv6_name_datas = ipv6.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_name_datas.begin(), ipv6_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4.append(value);
    }
    if(value_path == "ipv6")
    {
        ipv6.append(value);
    }
}

void Native::Crypto::Gdoi::Group::Server::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Hostname::Hostname()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "hostname"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Hostname::~Hostname()
{
}

bool Native::Crypto::Gdoi::Group::Server::Hostname::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Hostname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Hostname::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Hostname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Hostname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Hostname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Local()
    :
    gdoi{YType::empty, "gdoi"},
    gikev2{YType::str, "gikev2"}
    	,
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Address>())
	,authorization(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Authorization>())
	,group(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Group_>())
	,identifier(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Identifier>())
	,redundancy(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy>())
	,registration(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Registration>())
	,rekey(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey>())
	,sa(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa>())
	,default_(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_>())
{
    address->parent = this;
    authorization->parent = this;
    group->parent = this;
    identifier->parent = this;
    redundancy->parent = this;
    registration->parent = this;
    rekey->parent = this;
    sa->parent = this;
    default_->parent = this;

    yang_name = "local"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::~Local()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::has_data() const
{
    return gdoi.is_set
	|| gikev2.is_set
	|| (address !=  nullptr && address->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (group !=  nullptr && group->has_data())
	|| (identifier !=  nullptr && identifier->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (registration !=  nullptr && registration->has_data())
	|| (rekey !=  nullptr && rekey->has_data())
	|| (sa !=  nullptr && sa->has_data())
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gdoi.yfilter)
	|| ydk::is_set(gikev2.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (group !=  nullptr && group->has_operation())
	|| (identifier !=  nullptr && identifier->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (registration !=  nullptr && registration->has_operation())
	|| (rekey !=  nullptr && rekey->has_operation())
	|| (sa !=  nullptr && sa->has_operation())
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gdoi.is_set || is_set(gdoi.yfilter)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (gikev2.is_set || is_set(gikev2.yfilter)) leaf_name_data.push_back(gikev2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Address>();
        }
        return address;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Group_>();
        }
        return group;
    }

    if(child_yang_name == "identifier")
    {
        if(identifier == nullptr)
        {
            identifier = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Identifier>();
        }
        return identifier;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "rekey")
    {
        if(rekey == nullptr)
        {
            rekey = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey>();
        }
        return rekey;
    }

    if(child_yang_name == "sa")
    {
        if(sa == nullptr)
        {
            sa = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa>();
        }
        return sa;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(identifier != nullptr)
    {
        children["identifier"] = identifier;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    if(registration != nullptr)
    {
        children["registration"] = registration;
    }

    if(rekey != nullptr)
    {
        children["rekey"] = rekey;
    }

    if(sa != nullptr)
    {
        children["sa"] = sa;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gdoi")
    {
        gdoi = value;
        gdoi.value_namespace = name_space;
        gdoi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gikev2")
    {
        gikev2 = value;
        gikev2.value_namespace = name_space;
        gikev2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gdoi")
    {
        gdoi.yfilter = yfilter;
    }
    if(value_path == "gikev2")
    {
        gikev2.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "authorization" || name == "group" || name == "identifier" || name == "redundancy" || name == "registration" || name == "rekey" || name == "sa" || name == "default" || name == "gdoi" || name == "gikev2")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Authorization::Authorization()
    :
    identity{YType::str, "identity"}
    	,
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address>())
{
    address->parent = this;

    yang_name = "authorization"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Authorization::~Authorization()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Authorization::has_data() const
{
    return identity.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identity.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identity.is_set || is_set(identity.yfilter)) leaf_name_data.push_back(identity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identity")
    {
        identity = value;
        identity.value_namespace = name_space;
        identity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identity")
    {
        identity.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "identity")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Authorization::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Group_::Group_()
    :
    size(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Group_::Size>())
{
    size->parent = this;

    yang_name = "group"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Group_::~Group_()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Group_::has_data() const
{
    return (size !=  nullptr && size->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Group_::has_operation() const
{
    return is_set(yfilter)
	|| (size !=  nullptr && size->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Group_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Group_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Group_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "size")
    {
        if(size == nullptr)
        {
            size = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Group_::Size>();
        }
        return size;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Group_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(size != nullptr)
    {
        children["size"] = size;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Group_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Group_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Group_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::Size()
    :
    large{YType::empty, "large"},
    medium{YType::empty, "medium"},
    small{YType::enumeration, "small"}
{

    yang_name = "size"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::~Size()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::has_data() const
{
    return large.is_set
	|| medium.is_set
	|| small.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(large.yfilter)
	|| ydk::is_set(medium.yfilter)
	|| ydk::is_set(small.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (large.is_set || is_set(large.yfilter)) leaf_name_data.push_back(large.get_name_leafdata());
    if (medium.is_set || is_set(medium.yfilter)) leaf_name_data.push_back(medium.get_name_leafdata());
    if (small.is_set || is_set(small.yfilter)) leaf_name_data.push_back(small.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "large")
    {
        large = value;
        large.value_namespace = name_space;
        large.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium")
    {
        medium = value;
        medium.value_namespace = name_space;
        medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "small")
    {
        small = value;
        small.value_namespace = name_space;
        small.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "large")
    {
        large.yfilter = yfilter;
    }
    if(value_path == "medium")
    {
        medium.yfilter = yfilter;
    }
    if(value_path == "small")
    {
        small.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "large" || name == "medium" || name == "small")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Identifier::Identifier()
    :
    value_{YType::uint8, "value"}
    	,
    default_(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_>())
	,range(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range>())
{
    default_->parent = this;
    range->parent = this;

    yang_name = "identifier"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Identifier::~Identifier()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::has_data() const
{
    return value_.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (range !=  nullptr && range->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "range" || name == "value")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Default_()
    :
    value_{YType::uint8, "value"}
    	,
    range(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range>())
{
    range->parent = this;

    yang_name = "default"; yang_parent_name = "identifier"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::~Default_()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::has_data() const
{
    return value_.is_set
	|| (range !=  nullptr && range->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| (range !=  nullptr && range->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        if(range == nullptr)
        {
            range = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range>();
        }
        return range;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(range != nullptr)
    {
        children["range"] = range;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "value")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::Range()
    :
    lowest{YType::uint8, "lowest"},
    hyphen{YType::empty, "hyphen"},
    highest{YType::uint8, "highest"}
{

    yang_name = "range"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::~Range()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::has_data() const
{
    return lowest.is_set
	|| hyphen.is_set
	|| highest.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lowest.yfilter)
	|| ydk::is_set(hyphen.yfilter)
	|| ydk::is_set(highest.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lowest.is_set || is_set(lowest.yfilter)) leaf_name_data.push_back(lowest.get_name_leafdata());
    if (hyphen.is_set || is_set(hyphen.yfilter)) leaf_name_data.push_back(hyphen.get_name_leafdata());
    if (highest.is_set || is_set(highest.yfilter)) leaf_name_data.push_back(highest.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lowest")
    {
        lowest = value;
        lowest.value_namespace = name_space;
        lowest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hyphen")
    {
        hyphen = value;
        hyphen.value_namespace = name_space;
        hyphen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highest")
    {
        highest = value;
        highest.value_namespace = name_space;
        highest.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lowest")
    {
        lowest.yfilter = yfilter;
    }
    if(value_path == "hyphen")
    {
        hyphen.yfilter = yfilter;
    }
    if(value_path == "highest")
    {
        highest.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::Default_::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lowest" || name == "hyphen" || name == "highest")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::Range()
    :
    lowest{YType::uint8, "lowest"},
    hyphen{YType::empty, "hyphen"},
    highest{YType::uint8, "highest"}
{

    yang_name = "range"; yang_parent_name = "identifier"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::~Range()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::has_data() const
{
    return lowest.is_set
	|| hyphen.is_set
	|| highest.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lowest.yfilter)
	|| ydk::is_set(hyphen.yfilter)
	|| ydk::is_set(highest.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lowest.is_set || is_set(lowest.yfilter)) leaf_name_data.push_back(lowest.get_name_leafdata());
    if (hyphen.is_set || is_set(hyphen.yfilter)) leaf_name_data.push_back(hyphen.get_name_leafdata());
    if (highest.is_set || is_set(highest.yfilter)) leaf_name_data.push_back(highest.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lowest")
    {
        lowest = value;
        lowest.value_namespace = name_space;
        lowest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hyphen")
    {
        hyphen = value;
        hyphen.value_namespace = name_space;
        hyphen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "highest")
    {
        highest = value;
        highest.value_namespace = name_space;
        highest.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lowest")
    {
        lowest.yfilter = yfilter;
    }
    if(value_path == "hyphen")
    {
        hyphen.yfilter = yfilter;
    }
    if(value_path == "highest")
    {
        highest.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Identifier::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lowest" || name == "hyphen" || name == "highest")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Redundancy()
    :
    default_(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_>())
	,local(nullptr) // presence node
	,peer(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer>())
	,protocol(nullptr) // presence node
{
    default_->parent = this;
    peer->parent = this;

    yang_name = "redundancy"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::~Redundancy()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::has_data() const
{
    return (default_ !=  nullptr && default_->has_data())
	|| (local !=  nullptr && local->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (protocol !=  nullptr && protocol->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::has_operation() const
{
    return is_set(yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (local !=  nullptr && local->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_>();
        }
        return local;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "local" || name == "peer" || name == "protocol")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Default_()
    :
    local(nullptr) // presence node
	,peer(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer>())
	,protocol(nullptr) // presence node
{
    peer->parent = this;

    yang_name = "default"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::~Default_()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::has_data() const
{
    return (local !=  nullptr && local->has_data())
	|| (peer !=  nullptr && peer->has_data())
	|| (protocol !=  nullptr && protocol->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::has_operation() const
{
    return is_set(yfilter)
	|| (local !=  nullptr && local->has_operation())
	|| (peer !=  nullptr && peer->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_>();
        }
        return local;
    }

    if(child_yang_name == "peer")
    {
        if(peer == nullptr)
        {
            peer = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer>();
        }
        return peer;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol>();
        }
        return protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(peer != nullptr)
    {
        children["peer"] = peer;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local" || name == "peer" || name == "protocol")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::Local_()
    :
    priority{YType::uint8, "priority"}
{

    yang_name = "local"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::~Local_()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::has_data() const
{
    return priority.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Local_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Peer()
    :
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address>())
{
    address->parent = this;

    yang_name = "peer"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::~Peer()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Peer::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::Protocol()
    :
    pdu{YType::uint32, "pdu"},
    version{YType::enumeration, "version"}
{

    yang_name = "protocol"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::~Protocol()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::has_data() const
{
    return pdu.is_set
	|| version.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu.is_set || is_set(pdu.yfilter)) leaf_name_data.push_back(pdu.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu")
    {
        pdu = value;
        pdu.value_namespace = name_space;
        pdu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu")
    {
        pdu.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu" || name == "version")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::Local_()
    :
    priority{YType::uint8, "priority"}
{

    yang_name = "local"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::~Local_()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::has_data() const
{
    return priority.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Local_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Peer()
    :
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address>())
{
    address->parent = this;

    yang_name = "peer"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::~Peer()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::has_operation() const
{
    return is_set(yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "peer"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Peer::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::Protocol()
    :
    pdu{YType::uint32, "pdu"},
    version{YType::enumeration, "version"}
{

    yang_name = "protocol"; yang_parent_name = "redundancy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::~Protocol()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::has_data() const
{
    return pdu.is_set
	|| version.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu.yfilter)
	|| ydk::is_set(version.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu.is_set || is_set(pdu.yfilter)) leaf_name_data.push_back(pdu.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu")
    {
        pdu = value;
        pdu.value_namespace = name_space;
        pdu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu")
    {
        pdu.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu" || name == "version")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Registration::Registration()
    :
    interface{YType::str, "interface"}
    	,
    periodic(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic>())
{
    periodic->parent = this;

    yang_name = "registration"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Registration::~Registration()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::has_data() const
{
    return interface.is_set
	|| (periodic !=  nullptr && periodic->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| (periodic !=  nullptr && periodic->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Registration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "periodic")
    {
        if(periodic == nullptr)
        {
            periodic = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic>();
        }
        return periodic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(periodic != nullptr)
    {
        children["periodic"] = periodic;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Registration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Registration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "periodic" || name == "interface")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Periodic()
    :
    crl(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl>())
{
    crl->parent = this;

    yang_name = "periodic"; yang_parent_name = "registration"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::~Periodic()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::has_data() const
{
    return (crl !=  nullptr && crl->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::has_operation() const
{
    return is_set(yfilter)
	|| (crl !=  nullptr && crl->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "periodic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crl")
    {
        if(crl == nullptr)
        {
            crl = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl>();
        }
        return crl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(crl != nullptr)
    {
        children["crl"] = crl;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crl")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::Crl()
    :
    trustpoint{YType::str, "trustpoint"}
{

    yang_name = "crl"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::~Crl()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::has_data() const
{
    return trustpoint.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trustpoint.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trustpoint.is_set || is_set(trustpoint.yfilter)) leaf_name_data.push_back(trustpoint.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trustpoint")
    {
        trustpoint = value;
        trustpoint.value_namespace = name_space;
        trustpoint.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trustpoint")
    {
        trustpoint.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trustpoint")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Rekey()
    :
    acknowledgement{YType::enumeration, "acknowledgement"}
    	,
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address>())
	,algorithm(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm>())
	,authentication(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication>())
	,lifetime(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime>())
	,retransmit(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit>())
	,sig_hash(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash>())
	,transport(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport>())
{
    address->parent = this;
    algorithm->parent = this;
    authentication->parent = this;
    lifetime->parent = this;
    retransmit->parent = this;
    sig_hash->parent = this;
    transport->parent = this;

    yang_name = "rekey"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::~Rekey()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::has_data() const
{
    return acknowledgement.is_set
	|| (address !=  nullptr && address->has_data())
	|| (algorithm !=  nullptr && algorithm->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (sig_hash !=  nullptr && sig_hash->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acknowledgement.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (algorithm !=  nullptr && algorithm->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (sig_hash !=  nullptr && sig_hash->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement.is_set || is_set(acknowledgement.yfilter)) leaf_name_data.push_back(acknowledgement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address>();
        }
        return address;
    }

    if(child_yang_name == "algorithm")
    {
        if(algorithm == nullptr)
        {
            algorithm = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm>();
        }
        return algorithm;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "sig-hash")
    {
        if(sig_hash == nullptr)
        {
            sig_hash = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash>();
        }
        return sig_hash;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(algorithm != nullptr)
    {
        children["algorithm"] = algorithm;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(retransmit != nullptr)
    {
        children["retransmit"] = retransmit;
    }

    if(sig_hash != nullptr)
    {
        children["sig-hash"] = sig_hash;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement = value;
        acknowledgement.value_namespace = name_space;
        acknowledgement.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "algorithm" || name == "authentication" || name == "lifetime" || name == "retransmit" || name == "sig-hash" || name == "transport" || name == "acknowledgement")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{

    yang_name = "address"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::Algorithm()
    :
    a3des_cbc{YType::empty, "a3des-cbc"},
    aes_128{YType::empty, "aes-128"},
    aes_192{YType::empty, "aes-192"},
    aes_256{YType::empty, "aes-256"},
    des_cbc{YType::empty, "des-cbc"}
{

    yang_name = "algorithm"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::~Algorithm()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::has_data() const
{
    return a3des_cbc.is_set
	|| aes_128.is_set
	|| aes_192.is_set
	|| aes_256.is_set
	|| des_cbc.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(a3des_cbc.yfilter)
	|| ydk::is_set(aes_128.yfilter)
	|| ydk::is_set(aes_192.yfilter)
	|| ydk::is_set(aes_256.yfilter)
	|| ydk::is_set(des_cbc.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a3des_cbc.is_set || is_set(a3des_cbc.yfilter)) leaf_name_data.push_back(a3des_cbc.get_name_leafdata());
    if (aes_128.is_set || is_set(aes_128.yfilter)) leaf_name_data.push_back(aes_128.get_name_leafdata());
    if (aes_192.is_set || is_set(aes_192.yfilter)) leaf_name_data.push_back(aes_192.get_name_leafdata());
    if (aes_256.is_set || is_set(aes_256.yfilter)) leaf_name_data.push_back(aes_256.get_name_leafdata());
    if (des_cbc.is_set || is_set(des_cbc.yfilter)) leaf_name_data.push_back(des_cbc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a3des-cbc")
    {
        a3des_cbc = value;
        a3des_cbc.value_namespace = name_space;
        a3des_cbc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-128")
    {
        aes_128 = value;
        aes_128.value_namespace = name_space;
        aes_128.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-192")
    {
        aes_192 = value;
        aes_192.value_namespace = name_space;
        aes_192.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aes-256")
    {
        aes_256 = value;
        aes_256.value_namespace = name_space;
        aes_256.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "des-cbc")
    {
        des_cbc = value;
        des_cbc.value_namespace = name_space;
        des_cbc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a3des-cbc")
    {
        a3des_cbc.yfilter = yfilter;
    }
    if(value_path == "aes-128")
    {
        aes_128.yfilter = yfilter;
    }
    if(value_path == "aes-192")
    {
        aes_192.yfilter = yfilter;
    }
    if(value_path == "aes-256")
    {
        aes_256.yfilter = yfilter;
    }
    if(value_path == "des-cbc")
    {
        des_cbc.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "a3des-cbc" || name == "aes-128" || name == "aes-192" || name == "aes-256" || name == "des-cbc")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Authentication()
    :
    mypubkey(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey>())
{
    mypubkey->parent = this;

    yang_name = "authentication"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::~Authentication()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::has_data() const
{
    return (mypubkey !=  nullptr && mypubkey->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (mypubkey !=  nullptr && mypubkey->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mypubkey")
    {
        if(mypubkey == nullptr)
        {
            mypubkey = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey>();
        }
        return mypubkey;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mypubkey != nullptr)
    {
        children["mypubkey"] = mypubkey;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mypubkey")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::Mypubkey()
    :
    rsa{YType::str, "rsa"}
{

    yang_name = "mypubkey"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::~Mypubkey()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::has_data() const
{
    return rsa.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rsa.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mypubkey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsa.is_set || is_set(rsa.yfilter)) leaf_name_data.push_back(rsa.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rsa")
    {
        rsa = value;
        rsa.value_namespace = name_space;
        rsa.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rsa")
    {
        rsa.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rsa")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::Lifetime()
    :
    days{YType::uint8, "days"},
    seconds{YType::uint64, "seconds"}
{

    yang_name = "lifetime"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::has_data() const
{
    return days.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(days.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.yfilter)) leaf_name_data.push_back(days.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "days")
    {
        days = value;
        days.value_namespace = name_space;
        days.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "days")
    {
        days.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "days" || name == "seconds")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::Retransmit()
    :
    seconds{YType::uint8, "seconds"},
    number{YType::uint8, "number"},
    periodic{YType::empty, "periodic"}
{

    yang_name = "retransmit"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::~Retransmit()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::has_data() const
{
    return seconds.is_set
	|| number.is_set
	|| periodic.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(periodic.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (periodic.is_set || is_set(periodic.yfilter)) leaf_name_data.push_back(periodic.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "periodic")
    {
        periodic = value;
        periodic.value_namespace = name_space;
        periodic.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "periodic")
    {
        periodic.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "number" || name == "periodic")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::SigHash()
    :
    algorithm{YType::enumeration, "algorithm"}
{

    yang_name = "sig-hash"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::~SigHash()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::has_data() const
{
    return algorithm.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(algorithm.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sig-hash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.yfilter)) leaf_name_data.push_back(algorithm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
        algorithm.value_namespace = name_space;
        algorithm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "algorithm")
    {
        algorithm.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algorithm")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::Transport()
    :
    unicast{YType::empty, "unicast"}
{

    yang_name = "transport"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::~Transport()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::has_data() const
{
    return unicast.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unicast.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unicast")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Sa()
    :
    receive_only{YType::empty, "receive-only"}
    	,
    d3p(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P>())
	,pair_wise_keying(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying>())
{
    d3p->parent = this;
    pair_wise_keying->parent = this;

    yang_name = "sa"; yang_parent_name = "local"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::~Sa()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::has_data() const
{
    for (std::size_t index=0; index<ipsec.size(); index++)
    {
        if(ipsec[index]->has_data())
            return true;
    }
    return receive_only.is_set
	|| (d3p !=  nullptr && d3p->has_data())
	|| (pair_wise_keying !=  nullptr && pair_wise_keying->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::has_operation() const
{
    for (std::size_t index=0; index<ipsec.size(); index++)
    {
        if(ipsec[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(receive_only.yfilter)
	|| (d3p !=  nullptr && d3p->has_operation())
	|| (pair_wise_keying !=  nullptr && pair_wise_keying->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive_only.is_set || is_set(receive_only.yfilter)) leaf_name_data.push_back(receive_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "d3p")
    {
        if(d3p == nullptr)
        {
            d3p = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P>();
        }
        return d3p;
    }

    if(child_yang_name == "ipsec")
    {
        for(auto const & c : ipsec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec>();
        c->parent = this;
        ipsec.push_back(c);
        return c;
    }

    if(child_yang_name == "pair-wise-keying")
    {
        if(pair_wise_keying == nullptr)
        {
            pair_wise_keying = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying>();
        }
        return pair_wise_keying;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(d3p != nullptr)
    {
        children["d3p"] = d3p;
    }

    for (auto const & c : ipsec)
    {
        children[c->get_segment_path()] = c;
    }

    if(pair_wise_keying != nullptr)
    {
        children["pair-wise-keying"] = pair_wise_keying;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive-only")
    {
        receive_only = value;
        receive_only.value_namespace = name_space;
        receive_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive-only")
    {
        receive_only.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "d3p" || name == "ipsec" || name == "pair-wise-keying" || name == "receive-only")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::D3P()
    :
    window(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window>())
{
    window->parent = this;

    yang_name = "d3p"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::~D3P()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::has_data() const
{
    return (window !=  nullptr && window->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::has_operation() const
{
    return is_set(yfilter)
	|| (window !=  nullptr && window->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "d3p";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "window")
    {
        if(window == nullptr)
        {
            window = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window>();
        }
        return window;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(window != nullptr)
    {
        children["window"] = window;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "window")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::Window()
    :
    msec{YType::uint32, "msec"},
    sec{YType::uint8, "sec"}
{

    yang_name = "window"; yang_parent_name = "d3p"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::~Window()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::has_data() const
{
    return msec.is_set
	|| sec.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(sec.yfilter);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (sec.is_set || is_set(sec.yfilter)) leaf_name_data.push_back(sec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sec")
    {
        sec = value;
        sec.value_namespace = name_space;
        sec.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "sec")
    {
        sec.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "sec")
        return true;
    return false;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Ipsec()
    :
    sequence{YType::uint16, "sequence"},
    profile{YType::str, "profile"}
    	,
    default_(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_>())
	,match(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match>())
	,replay(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay>())
	,tag(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag>())
{
    default_->parent = this;
    match->parent = this;
    replay->parent = this;
    tag->parent = this;

    yang_name = "ipsec"; yang_parent_name = "sa"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::~Ipsec()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::has_data() const
{
    return sequence.is_set
	|| profile.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (replay !=  nullptr && replay->has_data())
	|| (tag !=  nullptr && tag->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (replay !=  nullptr && replay->has_operation())
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec" <<"[sequence='" <<sequence <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match>();
        }
        return match;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay>();
        }
        return replay;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(replay != nullptr)
    {
        children["replay"] = replay;
    }

    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence")
    {
        sequence = value;
        sequence.value_namespace = name_space;
        sequence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "match" || name == "replay" || name == "tag" || name == "sequence" || name == "profile")
        return true;
    return false;
}

const Enum::YLeaf Native::Crypto::DynamicMap::Default_::Set::Ip::Direction::in {0, "in"};
const Enum::YLeaf Native::Crypto::DynamicMap::Default_::Set::Ip::Direction::out {1, "out"};

const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::Group::group1 {0, "group1"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::Group::group14 {1, "group14"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::Group::group15 {2, "group15"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::Group::group16 {3, "group16"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::Group::group19 {4, "group19"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::Group::group2 {5, "group2"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::Group::group20 {6, "group20"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::Group::group21 {7, "group21"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::Group::group24 {8, "group24"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::Pfs::Group::group5 {9, "group5"};

const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Dfbit::clear {0, "clear"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Dfbit::copy {1, "copy"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Dfbit::set {2, "set"};

const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Ecn::discard {0, "discard"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Ecn::propagate {1, "propagate"};

const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Lifetime::Kilobytes::disable {0, "disable"};

const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::WindowSize::Y_1024 {0, "1024"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::WindowSize::Y_128 {1, "128"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::WindowSize::Y_256 {2, "256"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::WindowSize::Y_512 {3, "512"};
const Enum::YLeaf Native::Crypto::DynamicMap::Set::SecurityAssociation::Replay::WindowSize::Y_64 {4, "64"};

const Enum::YLeaf Native::Crypto::Engine::Software::ipsec {0, "ipsec"};
const Enum::YLeaf Native::Crypto::Engine::Software::isakmp {1, "isakmp"};

const Enum::YLeaf Native::Crypto::Gdoi::Group::Client::TransportEncryptKey::group_key {0, "group-key"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Client::TransportEncryptKey::pair_wise_key {1, "pair-wise-key"};

const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::Small::Y_12 {0, "12"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::Small::Y_16 {1, "16"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Group_::Size::Small::Y_8 {2, "8"};

const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::Version::base {0, "base"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Default_::Protocol::Version::optimize {1, "optimize"};

const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::Version::base {0, "base"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::Version::optimize {1, "optimize"};

const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::Acknowledgement::any {0, "any"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::Acknowledgement::cisco {1, "cisco"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::Acknowledgement::interoperable {2, "interoperable"};

const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::Algorithm::sha {0, "sha"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::Algorithm::sha256 {1, "sha256"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::Algorithm::sha384 {2, "sha384"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::Algorithm::sha512 {3, "sha512"};


}
}

