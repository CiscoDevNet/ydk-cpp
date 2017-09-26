
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_177.hpp"
#include "Cisco_IOS_XE_native_178.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::TrafficEng()
    :
    down{YType::empty, "down"},
    reroute{YType::empty, "reroute"},
    up{YType::empty, "up"}
{

    yang_name = "traffic-eng"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::~TrafficEng()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::has_data() const
{
    return down.is_set
	|| reroute.is_set
	|| up.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(down.yfilter)
	|| ydk::is_set(reroute.yfilter)
	|| ydk::is_set(up.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-eng";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down.is_set || is_set(down.yfilter)) leaf_name_data.push_back(down.get_name_leafdata());
    if (reroute.is_set || is_set(reroute.yfilter)) leaf_name_data.push_back(reroute.get_name_leafdata());
    if (up.is_set || is_set(up.yfilter)) leaf_name_data.push_back(up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "down")
    {
        down = value;
        down.value_namespace = name_space;
        down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reroute")
    {
        reroute = value;
        reroute.value_namespace = name_space;
        reroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up")
    {
        up = value;
        up.value_namespace = name_space;
        up.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "down")
    {
        down.yfilter = yfilter;
    }
    if(value_path == "reroute")
    {
        reroute.yfilter = yfilter;
    }
    if(value_path == "up")
    {
        up.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Mpls::TrafficEng::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "down" || name == "reroute" || name == "up")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhrp()
    :
    nhc(nullptr) // presence node
	,nhp(nullptr) // presence node
	,nhs(nullptr) // presence node
	,quota_exceeded(nullptr) // presence node
{

    yang_name = "nhrp"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::~Nhrp()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::has_data() const
{
    return (nhc !=  nullptr && nhc->has_data())
	|| (nhp !=  nullptr && nhp->has_data())
	|| (nhs !=  nullptr && nhs->has_data())
	|| (quota_exceeded !=  nullptr && quota_exceeded->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::has_operation() const
{
    return is_set(yfilter)
	|| (nhc !=  nullptr && nhc->has_operation())
	|| (nhp !=  nullptr && nhp->has_operation())
	|| (nhs !=  nullptr && nhs->has_operation())
	|| (quota_exceeded !=  nullptr && quota_exceeded->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhc")
    {
        if(nhc == nullptr)
        {
            nhc = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc>();
        }
        return nhc;
    }

    if(child_yang_name == "nhp")
    {
        if(nhp == nullptr)
        {
            nhp = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp>();
        }
        return nhp;
    }

    if(child_yang_name == "nhs")
    {
        if(nhs == nullptr)
        {
            nhs = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs>();
        }
        return nhs;
    }

    if(child_yang_name == "quota-exceeded")
    {
        if(quota_exceeded == nullptr)
        {
            quota_exceeded = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded>();
        }
        return quota_exceeded;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nhc != nullptr)
    {
        children["nhc"] = nhc;
    }

    if(nhp != nullptr)
    {
        children["nhp"] = nhp;
    }

    if(nhs != nullptr)
    {
        children["nhs"] = nhs;
    }

    if(quota_exceeded != nullptr)
    {
        children["quota-exceeded"] = quota_exceeded;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nhc" || name == "nhp" || name == "nhs" || name == "quota-exceeded")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::Nhc()
{

    yang_name = "nhc"; yang_parent_name = "nhrp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::~Nhc()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::has_data() const
{
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/nhrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhc::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::Nhp()
{

    yang_name = "nhp"; yang_parent_name = "nhrp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::~Nhp()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::has_data() const
{
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/nhrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::Nhs()
{

    yang_name = "nhs"; yang_parent_name = "nhrp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::~Nhs()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::has_data() const
{
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/nhrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::Nhs::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::QuotaExceeded()
{

    yang_name = "quota-exceeded"; yang_parent_name = "nhrp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::~QuotaExceeded()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::has_data() const
{
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/nhrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "quota-exceeded";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Nhrp::QuotaExceeded::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Ospf()
    :
    cisco_specific(nullptr) // presence node
	,errors(nullptr) // presence node
	,lsa(nullptr) // presence node
	,retransmit(nullptr) // presence node
	,state_change(nullptr) // presence node
{

    yang_name = "ospf"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::~Ospf()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::has_data() const
{
    return (cisco_specific !=  nullptr && cisco_specific->has_data())
	|| (errors !=  nullptr && errors->has_data())
	|| (lsa !=  nullptr && lsa->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (state_change !=  nullptr && state_change->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| (cisco_specific !=  nullptr && cisco_specific->has_operation())
	|| (errors !=  nullptr && errors->has_operation())
	|| (lsa !=  nullptr && lsa->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (state_change !=  nullptr && state_change->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cisco-specific")
    {
        if(cisco_specific == nullptr)
        {
            cisco_specific = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific>();
        }
        return cisco_specific;
    }

    if(child_yang_name == "errors")
    {
        if(errors == nullptr)
        {
            errors = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors>();
        }
        return errors;
    }

    if(child_yang_name == "lsa")
    {
        if(lsa == nullptr)
        {
            lsa = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa>();
        }
        return lsa;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "state-change")
    {
        if(state_change == nullptr)
        {
            state_change = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange>();
        }
        return state_change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cisco_specific != nullptr)
    {
        children["cisco-specific"] = cisco_specific;
    }

    if(errors != nullptr)
    {
        children["errors"] = errors;
    }

    if(lsa != nullptr)
    {
        children["lsa"] = lsa;
    }

    if(retransmit != nullptr)
    {
        children["retransmit"] = retransmit;
    }

    if(state_change != nullptr)
    {
        children["state-change"] = state_change;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cisco-specific" || name == "errors" || name == "lsa" || name == "retransmit" || name == "state-change")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::CiscoSpecific()
    :
    errdisable(nullptr) // presence node
	,errors(nullptr) // presence node
	,lsa(nullptr) // presence node
	,retransmit(nullptr) // presence node
	,state_change(nullptr) // presence node
{

    yang_name = "cisco-specific"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::~CiscoSpecific()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::has_data() const
{
    return (errdisable !=  nullptr && errdisable->has_data())
	|| (errors !=  nullptr && errors->has_data())
	|| (lsa !=  nullptr && lsa->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (state_change !=  nullptr && state_change->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::has_operation() const
{
    return is_set(yfilter)
	|| (errdisable !=  nullptr && errdisable->has_operation())
	|| (errors !=  nullptr && errors->has_operation())
	|| (lsa !=  nullptr && lsa->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (state_change !=  nullptr && state_change->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-specific";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "errdisable")
    {
        if(errdisable == nullptr)
        {
            errdisable = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable>();
        }
        return errdisable;
    }

    if(child_yang_name == "errors")
    {
        if(errors == nullptr)
        {
            errors = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors>();
        }
        return errors;
    }

    if(child_yang_name == "lsa")
    {
        if(lsa == nullptr)
        {
            lsa = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa>();
        }
        return lsa;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "state-change")
    {
        if(state_change == nullptr)
        {
            state_change = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange>();
        }
        return state_change;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(errdisable != nullptr)
    {
        children["errdisable"] = errdisable;
    }

    if(errors != nullptr)
    {
        children["errors"] = errors;
    }

    if(lsa != nullptr)
    {
        children["lsa"] = lsa;
    }

    if(retransmit != nullptr)
    {
        children["retransmit"] = retransmit;
    }

    if(state_change != nullptr)
    {
        children["state-change"] = state_change;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "errdisable" || name == "errors" || name == "lsa" || name == "retransmit" || name == "state-change")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::Errdisable()
    :
    notification_rate{YType::uint16, "notification-rate"}
{

    yang_name = "errdisable"; yang_parent_name = "cisco-specific"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::~Errdisable()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::has_data() const
{
    return notification_rate.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(notification_rate.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/cisco-specific/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errdisable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notification_rate.is_set || is_set(notification_rate.yfilter)) leaf_name_data.push_back(notification_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "notification-rate")
    {
        notification_rate = value;
        notification_rate.value_namespace = name_space;
        notification_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "notification-rate")
    {
        notification_rate.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errdisable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "notification-rate")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::Errors()
{

    yang_name = "errors"; yang_parent_name = "cisco-specific"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::~Errors()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::has_data() const
{
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/cisco-specific/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Errors::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::Lsa()
    :
    lsa_maxage{YType::empty, "lsa-maxage"},
    lsa_originate{YType::empty, "lsa-originate"}
{

    yang_name = "lsa"; yang_parent_name = "cisco-specific"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::~Lsa()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::has_data() const
{
    return lsa_maxage.is_set
	|| lsa_originate.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_maxage.yfilter)
	|| ydk::is_set(lsa_originate.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/cisco-specific/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_maxage.is_set || is_set(lsa_maxage.yfilter)) leaf_name_data.push_back(lsa_maxage.get_name_leafdata());
    if (lsa_originate.is_set || is_set(lsa_originate.yfilter)) leaf_name_data.push_back(lsa_originate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-maxage")
    {
        lsa_maxage = value;
        lsa_maxage.value_namespace = name_space;
        lsa_maxage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-originate")
    {
        lsa_originate = value;
        lsa_originate.value_namespace = name_space;
        lsa_originate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-maxage")
    {
        lsa_maxage.yfilter = yfilter;
    }
    if(value_path == "lsa-originate")
    {
        lsa_originate.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-maxage" || name == "lsa-originate")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::Retransmit()
{

    yang_name = "retransmit"; yang_parent_name = "cisco-specific"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::~Retransmit()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::has_data() const
{
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/cisco-specific/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::Retransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::StateChange()
    :
    nssa_trans_change{YType::empty, "nssa-trans-change"}
    	,
    shamlink(nullptr) // presence node
{

    yang_name = "state-change"; yang_parent_name = "cisco-specific"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::~StateChange()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::has_data() const
{
    return nssa_trans_change.is_set
	|| (shamlink !=  nullptr && shamlink->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nssa_trans_change.yfilter)
	|| (shamlink !=  nullptr && shamlink->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/cisco-specific/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nssa_trans_change.is_set || is_set(nssa_trans_change.yfilter)) leaf_name_data.push_back(nssa_trans_change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shamlink")
    {
        if(shamlink == nullptr)
        {
            shamlink = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink>();
        }
        return shamlink;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(shamlink != nullptr)
    {
        children["shamlink"] = shamlink;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nssa-trans-change")
    {
        nssa_trans_change = value;
        nssa_trans_change.value_namespace = name_space;
        nssa_trans_change.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nssa-trans-change")
    {
        nssa_trans_change.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shamlink" || name == "nssa-trans-change")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::Shamlink()
    :
    interface{YType::empty, "interface"},
    interface_old{YType::empty, "interface-old"},
    neighbor{YType::empty, "neighbor"}
{

    yang_name = "shamlink"; yang_parent_name = "state-change"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::~Shamlink()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::has_data() const
{
    return interface.is_set
	|| interface_old.is_set
	|| neighbor.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_old.yfilter)
	|| ydk::is_set(neighbor.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/cisco-specific/state-change/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shamlink";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_old.is_set || is_set(interface_old.yfilter)) leaf_name_data.push_back(interface_old.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-old")
    {
        interface_old = value;
        interface_old.value_namespace = name_space;
        interface_old.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-old")
    {
        interface_old.yfilter = yfilter;
    }
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::CiscoSpecific::StateChange::Shamlink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-old" || name == "neighbor")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::Errors()
{

    yang_name = "errors"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::~Errors()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::has_data() const
{
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "errors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Errors::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::Lsa()
    :
    lsa_maxage{YType::empty, "lsa-maxage"},
    lsa_originate{YType::empty, "lsa-originate"}
{

    yang_name = "lsa"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::~Lsa()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::has_data() const
{
    return lsa_maxage.is_set
	|| lsa_originate.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_maxage.yfilter)
	|| ydk::is_set(lsa_originate.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_maxage.is_set || is_set(lsa_maxage.yfilter)) leaf_name_data.push_back(lsa_maxage.get_name_leafdata());
    if (lsa_originate.is_set || is_set(lsa_originate.yfilter)) leaf_name_data.push_back(lsa_originate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-maxage")
    {
        lsa_maxage = value;
        lsa_maxage.value_namespace = name_space;
        lsa_maxage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-originate")
    {
        lsa_originate = value;
        lsa_originate.value_namespace = name_space;
        lsa_originate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-maxage")
    {
        lsa_maxage.yfilter = yfilter;
    }
    if(value_path == "lsa-originate")
    {
        lsa_originate.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Lsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-maxage" || name == "lsa-originate")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::Retransmit()
    :
    packets{YType::empty, "packets"},
    virt_packets{YType::empty, "virt-packets"}
{

    yang_name = "retransmit"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::~Retransmit()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::has_data() const
{
    return packets.is_set
	|| virt_packets.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(virt_packets.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (virt_packets.is_set || is_set(virt_packets.yfilter)) leaf_name_data.push_back(virt_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virt-packets")
    {
        virt_packets = value;
        virt_packets.value_namespace = name_space;
        virt_packets.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "virt-packets")
    {
        virt_packets.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::Retransmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "virt-packets")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::StateChange()
    :
    if_state_change{YType::empty, "if-state-change"},
    neighbor_state_change{YType::empty, "neighbor-state-change"},
    virtif_state_change{YType::empty, "virtif-state-change"},
    virtneighbor_state_change{YType::empty, "virtneighbor-state-change"}
{

    yang_name = "state-change"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::~StateChange()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::has_data() const
{
    return if_state_change.is_set
	|| neighbor_state_change.is_set
	|| virtif_state_change.is_set
	|| virtneighbor_state_change.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(if_state_change.yfilter)
	|| ydk::is_set(neighbor_state_change.yfilter)
	|| ydk::is_set(virtif_state_change.yfilter)
	|| ydk::is_set(virtneighbor_state_change.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/ospf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-change";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_state_change.is_set || is_set(if_state_change.yfilter)) leaf_name_data.push_back(if_state_change.get_name_leafdata());
    if (neighbor_state_change.is_set || is_set(neighbor_state_change.yfilter)) leaf_name_data.push_back(neighbor_state_change.get_name_leafdata());
    if (virtif_state_change.is_set || is_set(virtif_state_change.yfilter)) leaf_name_data.push_back(virtif_state_change.get_name_leafdata());
    if (virtneighbor_state_change.is_set || is_set(virtneighbor_state_change.yfilter)) leaf_name_data.push_back(virtneighbor_state_change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "if-state-change")
    {
        if_state_change = value;
        if_state_change.value_namespace = name_space;
        if_state_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-state-change")
    {
        neighbor_state_change = value;
        neighbor_state_change.value_namespace = name_space;
        neighbor_state_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtif-state-change")
    {
        virtif_state_change = value;
        virtif_state_change.value_namespace = name_space;
        virtif_state_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtneighbor-state-change")
    {
        virtneighbor_state_change = value;
        virtneighbor_state_change.value_namespace = name_space;
        virtneighbor_state_change.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "if-state-change")
    {
        if_state_change.yfilter = yfilter;
    }
    if(value_path == "neighbor-state-change")
    {
        neighbor_state_change.yfilter = yfilter;
    }
    if(value_path == "virtif-state-change")
    {
        virtif_state_change.yfilter = yfilter;
    }
    if(value_path == "virtneighbor-state-change")
    {
        virtneighbor_state_change.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospf::StateChange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "if-state-change" || name == "neighbor-state-change" || name == "virtif-state-change" || name == "virtneighbor-state-change")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::Ospfv3()
    :
    errors{YType::empty, "errors"},
    state_change{YType::empty, "state-change"}
{

    yang_name = "ospfv3"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::~Ospfv3()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::has_data() const
{
    return errors.is_set
	|| state_change.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(errors.yfilter)
	|| ydk::is_set(state_change.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (errors.is_set || is_set(errors.yfilter)) leaf_name_data.push_back(errors.get_name_leafdata());
    if (state_change.is_set || is_set(state_change.yfilter)) leaf_name_data.push_back(state_change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "errors")
    {
        errors = value;
        errors.value_namespace = name_space;
        errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-change")
    {
        state_change = value;
        state_change.value_namespace = name_space;
        state_change.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "errors")
    {
        errors.yfilter = yfilter;
    }
    if(value_path == "state-change")
    {
        state_change.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "errors" || name == "state-change")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Pim::Pim()
    :
    invalid_pim_message{YType::empty, "invalid-pim-message"},
    neighbor_change{YType::empty, "neighbor-change"},
    rp_mapping_change{YType::empty, "rp-mapping-change"}
{

    yang_name = "pim"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Pim::~Pim()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Pim::has_data() const
{
    return invalid_pim_message.is_set
	|| neighbor_change.is_set
	|| rp_mapping_change.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Pim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(invalid_pim_message.yfilter)
	|| ydk::is_set(neighbor_change.yfilter)
	|| ydk::is_set(rp_mapping_change.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Pim::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Pim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (invalid_pim_message.is_set || is_set(invalid_pim_message.yfilter)) leaf_name_data.push_back(invalid_pim_message.get_name_leafdata());
    if (neighbor_change.is_set || is_set(neighbor_change.yfilter)) leaf_name_data.push_back(neighbor_change.get_name_leafdata());
    if (rp_mapping_change.is_set || is_set(rp_mapping_change.yfilter)) leaf_name_data.push_back(rp_mapping_change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Pim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "invalid-pim-message")
    {
        invalid_pim_message = value;
        invalid_pim_message.value_namespace = name_space;
        invalid_pim_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-change")
    {
        neighbor_change = value;
        neighbor_change.value_namespace = name_space;
        neighbor_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-mapping-change")
    {
        rp_mapping_change = value;
        rp_mapping_change.value_namespace = name_space;
        rp_mapping_change.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Pim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "invalid-pim-message")
    {
        invalid_pim_message.yfilter = yfilter;
    }
    if(value_path == "neighbor-change")
    {
        neighbor_change.yfilter = yfilter;
    }
    if(value_path == "rp-mapping-change")
    {
        rp_mapping_change.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Pim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "invalid-pim-message" || name == "neighbor-change" || name == "rp-mapping-change")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::Plogd()
{

    yang_name = "plogd"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::~Plogd()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::has_data() const
{
    return false;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "plogd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Plogd::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::PortSecurity()
    :
    trap_rate{YType::uint16, "trap-rate"}
{

    yang_name = "port-security"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::~PortSecurity()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::has_data() const
{
    return trap_rate.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trap_rate.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trap_rate.is_set || is_set(trap_rate.yfilter)) leaf_name_data.push_back(trap_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trap-rate")
    {
        trap_rate = value;
        trap_rate.value_namespace = name_space;
        trap_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trap-rate")
    {
        trap_rate.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::PortSecurity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-rate")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::PowerEthernet()
    :
    group{YType::str, "group"},
    police{YType::empty, "police"}
{

    yang_name = "power-ethernet"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::~PowerEthernet()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::has_data() const
{
    return group.is_set
	|| police.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(police.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "power-ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (police.is_set || is_set(police.yfilter)) leaf_name_data.push_back(police.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "police")
    {
        police = value;
        police.value_namespace = name_space;
        police.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "police")
    {
        police.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::PowerEthernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "police")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Pw::Pw()
    :
    vc{YType::empty, "vc"}
{

    yang_name = "pw"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Pw::~Pw()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Pw::has_data() const
{
    return vc.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Pw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vc.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Pw::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Pw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vc.is_set || is_set(vc.yfilter)) leaf_name_data.push_back(vc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Pw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vc")
    {
        vc = value;
        vc.value_namespace = name_space;
        vc.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Pw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vc")
    {
        vc.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Pw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vc")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Slb::Slb()
    :
    csrp{YType::empty, "csrp"},
    real{YType::empty, "real"},
    virtual_{YType::empty, "virtual"}
{

    yang_name = "slb"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Slb::~Slb()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Slb::has_data() const
{
    return csrp.is_set
	|| real.is_set
	|| virtual_.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Slb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(csrp.yfilter)
	|| ydk::is_set(real.yfilter)
	|| ydk::is_set(virtual_.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Slb::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Slb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Slb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (csrp.is_set || is_set(csrp.yfilter)) leaf_name_data.push_back(csrp.get_name_leafdata());
    if (real.is_set || is_set(real.yfilter)) leaf_name_data.push_back(real.get_name_leafdata());
    if (virtual_.is_set || is_set(virtual_.yfilter)) leaf_name_data.push_back(virtual_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Slb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Slb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Slb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "csrp")
    {
        csrp = value;
        csrp.value_namespace = name_space;
        csrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "real")
    {
        real = value;
        real.value_namespace = name_space;
        real.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual")
    {
        virtual_ = value;
        virtual_.value_namespace = name_space;
        virtual_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Slb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "csrp")
    {
        csrp.yfilter = yfilter;
    }
    if(value_path == "real")
    {
        real.yfilter = yfilter;
    }
    if(value_path == "virtual")
    {
        virtual_.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Slb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csrp" || name == "real" || name == "virtual")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::Snmp()
    :
    authentication{YType::empty, "authentication"},
    coldstart{YType::empty, "coldstart"},
    linkdown{YType::empty, "linkdown"},
    linkup{YType::empty, "linkup"},
    warmstart{YType::empty, "warmstart"}
{

    yang_name = "snmp"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::~Snmp()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::has_data() const
{
    return authentication.is_set
	|| coldstart.is_set
	|| linkdown.is_set
	|| linkup.is_set
	|| warmstart.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication.yfilter)
	|| ydk::is_set(coldstart.yfilter)
	|| ydk::is_set(linkdown.yfilter)
	|| ydk::is_set(linkup.yfilter)
	|| ydk::is_set(warmstart.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication.is_set || is_set(authentication.yfilter)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (coldstart.is_set || is_set(coldstart.yfilter)) leaf_name_data.push_back(coldstart.get_name_leafdata());
    if (linkdown.is_set || is_set(linkdown.yfilter)) leaf_name_data.push_back(linkdown.get_name_leafdata());
    if (linkup.is_set || is_set(linkup.yfilter)) leaf_name_data.push_back(linkup.get_name_leafdata());
    if (warmstart.is_set || is_set(warmstart.yfilter)) leaf_name_data.push_back(warmstart.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication")
    {
        authentication = value;
        authentication.value_namespace = name_space;
        authentication.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coldstart")
    {
        coldstart = value;
        coldstart.value_namespace = name_space;
        coldstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkdown")
    {
        linkdown = value;
        linkdown.value_namespace = name_space;
        linkdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linkup")
    {
        linkup = value;
        linkup.value_namespace = name_space;
        linkup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warmstart")
    {
        warmstart = value;
        warmstart.value_namespace = name_space;
        warmstart.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication")
    {
        authentication.yfilter = yfilter;
    }
    if(value_path == "coldstart")
    {
        coldstart.yfilter = yfilter;
    }
    if(value_path == "linkdown")
    {
        linkdown.yfilter = yfilter;
    }
    if(value_path == "linkup")
    {
        linkup.yfilter = yfilter;
    }
    if(value_path == "warmstart")
    {
        warmstart.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "coldstart" || name == "linkdown" || name == "linkup" || name == "warmstart")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::Stackwise()
    :
    gls{YType::empty, "GLS"},
    ils{YType::empty, "ILS"},
    insufficient_power{YType::empty, "insufficient-power"},
    invalid_input_current{YType::empty, "invalid-input-current"},
    invalid_output_current{YType::empty, "invalid-output-current"},
    member_removed{YType::empty, "member-removed"},
    member_upgrade_notification{YType::empty, "member-upgrade-notification"},
    new_master{YType::empty, "new-master"},
    new_member{YType::empty, "new-member"},
    port_change{YType::empty, "port-change"},
    power_budget_warning{YType::empty, "power-budget-warning"},
    power_invalid_topology{YType::empty, "power-invalid-topology"},
    power_link_status_changed{YType::empty, "power-link-status-changed"},
    power_oper_status_changed{YType::empty, "power-oper-status-changed"},
    power_priority_conflict{YType::empty, "power-priority-conflict"},
    power_version_mismatch{YType::empty, "power-version-mismatch"},
    ring_redundant{YType::empty, "ring-redundant"},
    srls{YType::empty, "SRLS"},
    stack_mismatch{YType::empty, "stack-mismatch"},
    unbalanced_power_supplies{YType::empty, "unbalanced-power-supplies"},
    under_budget{YType::empty, "under-budget"},
    under_voltage{YType::empty, "under-voltage"}
{

    yang_name = "stackwise"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::~Stackwise()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::has_data() const
{
    return gls.is_set
	|| ils.is_set
	|| insufficient_power.is_set
	|| invalid_input_current.is_set
	|| invalid_output_current.is_set
	|| member_removed.is_set
	|| member_upgrade_notification.is_set
	|| new_master.is_set
	|| new_member.is_set
	|| port_change.is_set
	|| power_budget_warning.is_set
	|| power_invalid_topology.is_set
	|| power_link_status_changed.is_set
	|| power_oper_status_changed.is_set
	|| power_priority_conflict.is_set
	|| power_version_mismatch.is_set
	|| ring_redundant.is_set
	|| srls.is_set
	|| stack_mismatch.is_set
	|| unbalanced_power_supplies.is_set
	|| under_budget.is_set
	|| under_voltage.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gls.yfilter)
	|| ydk::is_set(ils.yfilter)
	|| ydk::is_set(insufficient_power.yfilter)
	|| ydk::is_set(invalid_input_current.yfilter)
	|| ydk::is_set(invalid_output_current.yfilter)
	|| ydk::is_set(member_removed.yfilter)
	|| ydk::is_set(member_upgrade_notification.yfilter)
	|| ydk::is_set(new_master.yfilter)
	|| ydk::is_set(new_member.yfilter)
	|| ydk::is_set(port_change.yfilter)
	|| ydk::is_set(power_budget_warning.yfilter)
	|| ydk::is_set(power_invalid_topology.yfilter)
	|| ydk::is_set(power_link_status_changed.yfilter)
	|| ydk::is_set(power_oper_status_changed.yfilter)
	|| ydk::is_set(power_priority_conflict.yfilter)
	|| ydk::is_set(power_version_mismatch.yfilter)
	|| ydk::is_set(ring_redundant.yfilter)
	|| ydk::is_set(srls.yfilter)
	|| ydk::is_set(stack_mismatch.yfilter)
	|| ydk::is_set(unbalanced_power_supplies.yfilter)
	|| ydk::is_set(under_budget.yfilter)
	|| ydk::is_set(under_voltage.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stackwise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gls.is_set || is_set(gls.yfilter)) leaf_name_data.push_back(gls.get_name_leafdata());
    if (ils.is_set || is_set(ils.yfilter)) leaf_name_data.push_back(ils.get_name_leafdata());
    if (insufficient_power.is_set || is_set(insufficient_power.yfilter)) leaf_name_data.push_back(insufficient_power.get_name_leafdata());
    if (invalid_input_current.is_set || is_set(invalid_input_current.yfilter)) leaf_name_data.push_back(invalid_input_current.get_name_leafdata());
    if (invalid_output_current.is_set || is_set(invalid_output_current.yfilter)) leaf_name_data.push_back(invalid_output_current.get_name_leafdata());
    if (member_removed.is_set || is_set(member_removed.yfilter)) leaf_name_data.push_back(member_removed.get_name_leafdata());
    if (member_upgrade_notification.is_set || is_set(member_upgrade_notification.yfilter)) leaf_name_data.push_back(member_upgrade_notification.get_name_leafdata());
    if (new_master.is_set || is_set(new_master.yfilter)) leaf_name_data.push_back(new_master.get_name_leafdata());
    if (new_member.is_set || is_set(new_member.yfilter)) leaf_name_data.push_back(new_member.get_name_leafdata());
    if (port_change.is_set || is_set(port_change.yfilter)) leaf_name_data.push_back(port_change.get_name_leafdata());
    if (power_budget_warning.is_set || is_set(power_budget_warning.yfilter)) leaf_name_data.push_back(power_budget_warning.get_name_leafdata());
    if (power_invalid_topology.is_set || is_set(power_invalid_topology.yfilter)) leaf_name_data.push_back(power_invalid_topology.get_name_leafdata());
    if (power_link_status_changed.is_set || is_set(power_link_status_changed.yfilter)) leaf_name_data.push_back(power_link_status_changed.get_name_leafdata());
    if (power_oper_status_changed.is_set || is_set(power_oper_status_changed.yfilter)) leaf_name_data.push_back(power_oper_status_changed.get_name_leafdata());
    if (power_priority_conflict.is_set || is_set(power_priority_conflict.yfilter)) leaf_name_data.push_back(power_priority_conflict.get_name_leafdata());
    if (power_version_mismatch.is_set || is_set(power_version_mismatch.yfilter)) leaf_name_data.push_back(power_version_mismatch.get_name_leafdata());
    if (ring_redundant.is_set || is_set(ring_redundant.yfilter)) leaf_name_data.push_back(ring_redundant.get_name_leafdata());
    if (srls.is_set || is_set(srls.yfilter)) leaf_name_data.push_back(srls.get_name_leafdata());
    if (stack_mismatch.is_set || is_set(stack_mismatch.yfilter)) leaf_name_data.push_back(stack_mismatch.get_name_leafdata());
    if (unbalanced_power_supplies.is_set || is_set(unbalanced_power_supplies.yfilter)) leaf_name_data.push_back(unbalanced_power_supplies.get_name_leafdata());
    if (under_budget.is_set || is_set(under_budget.yfilter)) leaf_name_data.push_back(under_budget.get_name_leafdata());
    if (under_voltage.is_set || is_set(under_voltage.yfilter)) leaf_name_data.push_back(under_voltage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "GLS")
    {
        gls = value;
        gls.value_namespace = name_space;
        gls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ILS")
    {
        ils = value;
        ils.value_namespace = name_space;
        ils.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insufficient-power")
    {
        insufficient_power = value;
        insufficient_power.value_namespace = name_space;
        insufficient_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-input-current")
    {
        invalid_input_current = value;
        invalid_input_current.value_namespace = name_space;
        invalid_input_current.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-output-current")
    {
        invalid_output_current = value;
        invalid_output_current.value_namespace = name_space;
        invalid_output_current.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-removed")
    {
        member_removed = value;
        member_removed.value_namespace = name_space;
        member_removed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-upgrade-notification")
    {
        member_upgrade_notification = value;
        member_upgrade_notification.value_namespace = name_space;
        member_upgrade_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-master")
    {
        new_master = value;
        new_master.value_namespace = name_space;
        new_master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-member")
    {
        new_member = value;
        new_member.value_namespace = name_space;
        new_member.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-change")
    {
        port_change = value;
        port_change.value_namespace = name_space;
        port_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-budget-warning")
    {
        power_budget_warning = value;
        power_budget_warning.value_namespace = name_space;
        power_budget_warning.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-invalid-topology")
    {
        power_invalid_topology = value;
        power_invalid_topology.value_namespace = name_space;
        power_invalid_topology.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-link-status-changed")
    {
        power_link_status_changed = value;
        power_link_status_changed.value_namespace = name_space;
        power_link_status_changed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-oper-status-changed")
    {
        power_oper_status_changed = value;
        power_oper_status_changed.value_namespace = name_space;
        power_oper_status_changed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-priority-conflict")
    {
        power_priority_conflict = value;
        power_priority_conflict.value_namespace = name_space;
        power_priority_conflict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-version-mismatch")
    {
        power_version_mismatch = value;
        power_version_mismatch.value_namespace = name_space;
        power_version_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ring-redundant")
    {
        ring_redundant = value;
        ring_redundant.value_namespace = name_space;
        ring_redundant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SRLS")
    {
        srls = value;
        srls.value_namespace = name_space;
        srls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stack-mismatch")
    {
        stack_mismatch = value;
        stack_mismatch.value_namespace = name_space;
        stack_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unbalanced-power-supplies")
    {
        unbalanced_power_supplies = value;
        unbalanced_power_supplies.value_namespace = name_space;
        unbalanced_power_supplies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "under-budget")
    {
        under_budget = value;
        under_budget.value_namespace = name_space;
        under_budget.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "under-voltage")
    {
        under_voltage = value;
        under_voltage.value_namespace = name_space;
        under_voltage.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "GLS")
    {
        gls.yfilter = yfilter;
    }
    if(value_path == "ILS")
    {
        ils.yfilter = yfilter;
    }
    if(value_path == "insufficient-power")
    {
        insufficient_power.yfilter = yfilter;
    }
    if(value_path == "invalid-input-current")
    {
        invalid_input_current.yfilter = yfilter;
    }
    if(value_path == "invalid-output-current")
    {
        invalid_output_current.yfilter = yfilter;
    }
    if(value_path == "member-removed")
    {
        member_removed.yfilter = yfilter;
    }
    if(value_path == "member-upgrade-notification")
    {
        member_upgrade_notification.yfilter = yfilter;
    }
    if(value_path == "new-master")
    {
        new_master.yfilter = yfilter;
    }
    if(value_path == "new-member")
    {
        new_member.yfilter = yfilter;
    }
    if(value_path == "port-change")
    {
        port_change.yfilter = yfilter;
    }
    if(value_path == "power-budget-warning")
    {
        power_budget_warning.yfilter = yfilter;
    }
    if(value_path == "power-invalid-topology")
    {
        power_invalid_topology.yfilter = yfilter;
    }
    if(value_path == "power-link-status-changed")
    {
        power_link_status_changed.yfilter = yfilter;
    }
    if(value_path == "power-oper-status-changed")
    {
        power_oper_status_changed.yfilter = yfilter;
    }
    if(value_path == "power-priority-conflict")
    {
        power_priority_conflict.yfilter = yfilter;
    }
    if(value_path == "power-version-mismatch")
    {
        power_version_mismatch.yfilter = yfilter;
    }
    if(value_path == "ring-redundant")
    {
        ring_redundant.yfilter = yfilter;
    }
    if(value_path == "SRLS")
    {
        srls.yfilter = yfilter;
    }
    if(value_path == "stack-mismatch")
    {
        stack_mismatch.yfilter = yfilter;
    }
    if(value_path == "unbalanced-power-supplies")
    {
        unbalanced_power_supplies.yfilter = yfilter;
    }
    if(value_path == "under-budget")
    {
        under_budget.yfilter = yfilter;
    }
    if(value_path == "under-voltage")
    {
        under_voltage.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Stackwise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "GLS" || name == "ILS" || name == "insufficient-power" || name == "invalid-input-current" || name == "invalid-output-current" || name == "member-removed" || name == "member-upgrade-notification" || name == "new-master" || name == "new-member" || name == "port-change" || name == "power-budget-warning" || name == "power-invalid-topology" || name == "power-link-status-changed" || name == "power-oper-status-changed" || name == "power-priority-conflict" || name == "power-version-mismatch" || name == "ring-redundant" || name == "SRLS" || name == "stack-mismatch" || name == "unbalanced-power-supplies" || name == "under-budget" || name == "under-voltage")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::Stpx()
    :
    inconsistency{YType::empty, "inconsistency"},
    loop_inconsistency{YType::empty, "loop-inconsistency"},
    root_inconsistency{YType::empty, "root-inconsistency"}
{

    yang_name = "stpx"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::~Stpx()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::has_data() const
{
    return inconsistency.is_set
	|| loop_inconsistency.is_set
	|| root_inconsistency.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inconsistency.yfilter)
	|| ydk::is_set(loop_inconsistency.yfilter)
	|| ydk::is_set(root_inconsistency.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inconsistency.is_set || is_set(inconsistency.yfilter)) leaf_name_data.push_back(inconsistency.get_name_leafdata());
    if (loop_inconsistency.is_set || is_set(loop_inconsistency.yfilter)) leaf_name_data.push_back(loop_inconsistency.get_name_leafdata());
    if (root_inconsistency.is_set || is_set(root_inconsistency.yfilter)) leaf_name_data.push_back(root_inconsistency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inconsistency")
    {
        inconsistency = value;
        inconsistency.value_namespace = name_space;
        inconsistency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "loop-inconsistency")
    {
        loop_inconsistency = value;
        loop_inconsistency.value_namespace = name_space;
        loop_inconsistency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "root-inconsistency")
    {
        root_inconsistency = value;
        root_inconsistency.value_namespace = name_space;
        root_inconsistency.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inconsistency")
    {
        inconsistency.yfilter = yfilter;
    }
    if(value_path == "loop-inconsistency")
    {
        loop_inconsistency.yfilter = yfilter;
    }
    if(value_path == "root-inconsistency")
    {
        root_inconsistency.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Stpx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inconsistency" || name == "loop-inconsistency" || name == "root-inconsistency")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::Transceiver()
    :
    all{YType::empty, "all"}
{

    yang_name = "transceiver"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::~Transceiver()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::has_data() const
{
    return all.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transceiver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Transceiver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::Trustsec()
    :
    authz_file_error(nullptr) // presence node
{

    yang_name = "trustsec"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::~Trustsec()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::has_data() const
{
    return (authz_file_error !=  nullptr && authz_file_error->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::has_operation() const
{
    return is_set(yfilter)
	|| (authz_file_error !=  nullptr && authz_file_error->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trustsec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authz-file-error")
    {
        if(authz_file_error == nullptr)
        {
            authz_file_error = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError>();
        }
        return authz_file_error;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authz_file_error != nullptr)
    {
        children["authz-file-error"] = authz_file_error;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authz-file-error")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::AuthzFileError()
    :
    cache_file_error(nullptr) // presence node
{

    yang_name = "authz-file-error"; yang_parent_name = "trustsec"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::~AuthzFileError()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::has_data() const
{
    return (cache_file_error !=  nullptr && cache_file_error->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::has_operation() const
{
    return is_set(yfilter)
	|| (cache_file_error !=  nullptr && cache_file_error->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authz-file-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cache-file-error")
    {
        if(cache_file_error == nullptr)
        {
            cache_file_error = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError>();
        }
        return cache_file_error;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cache_file_error != nullptr)
    {
        children["cache-file-error"] = cache_file_error;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache-file-error")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::CacheFileError()
    :
    keystore_file_error(nullptr) // presence node
{

    yang_name = "cache-file-error"; yang_parent_name = "authz-file-error"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::~CacheFileError()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::has_data() const
{
    return (keystore_file_error !=  nullptr && keystore_file_error->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::has_operation() const
{
    return is_set(yfilter)
	|| (keystore_file_error !=  nullptr && keystore_file_error->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec/authz-file-error/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache-file-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keystore-file-error")
    {
        if(keystore_file_error == nullptr)
        {
            keystore_file_error = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError>();
        }
        return keystore_file_error;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(keystore_file_error != nullptr)
    {
        children["keystore-file-error"] = keystore_file_error;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keystore-file-error")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreFileError()
    :
    keystore_sync_fail(nullptr) // presence node
{

    yang_name = "keystore-file-error"; yang_parent_name = "cache-file-error"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::~KeystoreFileError()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::has_data() const
{
    return (keystore_sync_fail !=  nullptr && keystore_sync_fail->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::has_operation() const
{
    return is_set(yfilter)
	|| (keystore_sync_fail !=  nullptr && keystore_sync_fail->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec/authz-file-error/cache-file-error/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keystore-file-error";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keystore-sync-fail")
    {
        if(keystore_sync_fail == nullptr)
        {
            keystore_sync_fail = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail>();
        }
        return keystore_sync_fail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(keystore_sync_fail != nullptr)
    {
        children["keystore-sync-fail"] = keystore_sync_fail;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keystore-sync-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::KeystoreSyncFail()
    :
    random_number_fail(nullptr) // presence node
{

    yang_name = "keystore-sync-fail"; yang_parent_name = "keystore-file-error"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::~KeystoreSyncFail()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::has_data() const
{
    return (random_number_fail !=  nullptr && random_number_fail->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::has_operation() const
{
    return is_set(yfilter)
	|| (random_number_fail !=  nullptr && random_number_fail->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec/authz-file-error/cache-file-error/keystore-file-error/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keystore-sync-fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "random-number-fail")
    {
        if(random_number_fail == nullptr)
        {
            random_number_fail = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail>();
        }
        return random_number_fail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(random_number_fail != nullptr)
    {
        children["random-number-fail"] = random_number_fail;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "random-number-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::RandomNumberFail()
    :
    src_entropy_fail{YType::empty, "src-entropy-fail"}
{

    yang_name = "random-number-fail"; yang_parent_name = "keystore-sync-fail"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::~RandomNumberFail()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::has_data() const
{
    return src_entropy_fail.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_entropy_fail.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec/authz-file-error/cache-file-error/keystore-file-error/keystore-sync-fail/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "random-number-fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_entropy_fail.is_set || is_set(src_entropy_fail.yfilter)) leaf_name_data.push_back(src_entropy_fail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src-entropy-fail")
    {
        src_entropy_fail = value;
        src_entropy_fail.value_namespace = name_space;
        src_entropy_fail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src-entropy-fail")
    {
        src_entropy_fail.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Trustsec::AuthzFileError::CacheFileError::KeystoreFileError::KeystoreSyncFail::RandomNumberFail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-entropy-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::TrustsecInterface()
    :
    unauthorized(nullptr) // presence node
{

    yang_name = "trustsec-interface"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::~TrustsecInterface()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::has_data() const
{
    return (unauthorized !=  nullptr && unauthorized->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::has_operation() const
{
    return is_set(yfilter)
	|| (unauthorized !=  nullptr && unauthorized->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trustsec-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "unauthorized")
    {
        if(unauthorized == nullptr)
        {
            unauthorized = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized>();
        }
        return unauthorized;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(unauthorized != nullptr)
    {
        children["unauthorized"] = unauthorized;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unauthorized")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::Unauthorized()
    :
    sap_fail(nullptr) // presence node
{

    yang_name = "unauthorized"; yang_parent_name = "trustsec-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::~Unauthorized()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::has_data() const
{
    return (sap_fail !=  nullptr && sap_fail->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::has_operation() const
{
    return is_set(yfilter)
	|| (sap_fail !=  nullptr && sap_fail->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unauthorized";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sap-fail")
    {
        if(sap_fail == nullptr)
        {
            sap_fail = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail>();
        }
        return sap_fail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sap_fail != nullptr)
    {
        children["sap-fail"] = sap_fail;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sap-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::SapFail()
    :
    authc_fail(nullptr) // presence node
{

    yang_name = "sap-fail"; yang_parent_name = "unauthorized"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::~SapFail()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::has_data() const
{
    return (authc_fail !=  nullptr && authc_fail->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::has_operation() const
{
    return is_set(yfilter)
	|| (authc_fail !=  nullptr && authc_fail->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec-interface/unauthorized/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sap-fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authc-fail")
    {
        if(authc_fail == nullptr)
        {
            authc_fail = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail>();
        }
        return authc_fail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authc_fail != nullptr)
    {
        children["authc-fail"] = authc_fail;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authc-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::AuthcFail()
    :
    supplicant_fail(nullptr) // presence node
{

    yang_name = "authc-fail"; yang_parent_name = "sap-fail"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::~AuthcFail()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::has_data() const
{
    return (supplicant_fail !=  nullptr && supplicant_fail->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::has_operation() const
{
    return is_set(yfilter)
	|| (supplicant_fail !=  nullptr && supplicant_fail->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec-interface/unauthorized/sap-fail/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authc-fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "supplicant-fail")
    {
        if(supplicant_fail == nullptr)
        {
            supplicant_fail = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail>();
        }
        return supplicant_fail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(supplicant_fail != nullptr)
    {
        children["supplicant-fail"] = supplicant_fail;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "supplicant-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::SupplicantFail()
    :
    authz_fail{YType::empty, "authz-fail"}
{

    yang_name = "supplicant-fail"; yang_parent_name = "authc-fail"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::~SupplicantFail()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::has_data() const
{
    return authz_fail.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authz_fail.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec-interface/unauthorized/sap-fail/authc-fail/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supplicant-fail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authz_fail.is_set || is_set(authz_fail.yfilter)) leaf_name_data.push_back(authz_fail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authz-fail")
    {
        authz_fail = value;
        authz_fail.value_namespace = name_space;
        authz_fail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authz-fail")
    {
        authz_fail.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecInterface::Unauthorized::SapFail::AuthcFail::SupplicantFail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authz-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::TrustsecPolicy()
    :
    peer_policy_updated(nullptr) // presence node
{

    yang_name = "trustsec-policy"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::~TrustsecPolicy()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::has_data() const
{
    return (peer_policy_updated !=  nullptr && peer_policy_updated->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::has_operation() const
{
    return is_set(yfilter)
	|| (peer_policy_updated !=  nullptr && peer_policy_updated->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trustsec-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-policy-updated")
    {
        if(peer_policy_updated == nullptr)
        {
            peer_policy_updated = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated>();
        }
        return peer_policy_updated;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_policy_updated != nullptr)
    {
        children["peer-policy-updated"] = peer_policy_updated;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-policy-updated")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::PeerPolicyUpdated()
    :
    authz_sgacl_fail{YType::empty, "authz-sgacl-fail"}
{

    yang_name = "peer-policy-updated"; yang_parent_name = "trustsec-policy"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::~PeerPolicyUpdated()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::has_data() const
{
    return authz_sgacl_fail.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authz_sgacl_fail.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec-policy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-policy-updated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authz_sgacl_fail.is_set || is_set(authz_sgacl_fail.yfilter)) leaf_name_data.push_back(authz_sgacl_fail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authz-sgacl-fail")
    {
        authz_sgacl_fail = value;
        authz_sgacl_fail.value_namespace = name_space;
        authz_sgacl_fail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authz-sgacl-fail")
    {
        authz_sgacl_fail.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecPolicy::PeerPolicyUpdated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authz-sgacl-fail")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::TrustsecServer()
    :
    radius_server(nullptr) // presence node
{

    yang_name = "trustsec-server"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::~TrustsecServer()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::has_data() const
{
    return (radius_server !=  nullptr && radius_server->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::has_operation() const
{
    return is_set(yfilter)
	|| (radius_server !=  nullptr && radius_server->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trustsec-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radius-server")
    {
        if(radius_server == nullptr)
        {
            radius_server = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer>();
        }
        return radius_server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(radius_server != nullptr)
    {
        children["radius-server"] = radius_server;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "radius-server")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::RadiusServer()
    :
    provision_secret{YType::empty, "provision-secret"}
{

    yang_name = "radius-server"; yang_parent_name = "trustsec-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::~RadiusServer()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::has_data() const
{
    return provision_secret.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(provision_secret.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/trustsec-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (provision_secret.is_set || is_set(provision_secret.yfilter)) leaf_name_data.push_back(provision_secret.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "provision-secret")
    {
        provision_secret = value;
        provision_secret.value_namespace = name_space;
        provision_secret.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "provision-secret")
    {
        provision_secret.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecServer::RadiusServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "provision-secret")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::TrustsecSxp()
    :
    binding_conflict{YType::empty, "binding-conflict"},
    binding_err{YType::empty, "binding-err"},
    binding_expn_fail{YType::empty, "binding-expn-fail"},
    conn_config_err{YType::empty, "conn-config-err"},
    conn_down{YType::empty, "conn-down"},
    conn_srcaddr_err{YType::empty, "conn-srcaddr-err"},
    conn_up{YType::empty, "conn-up"},
    msg_parse_err{YType::empty, "msg-parse-err"},
    oper_nodeid_change{YType::empty, "oper-nodeid-change"}
{

    yang_name = "trustsec-sxp"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::~TrustsecSxp()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::has_data() const
{
    return binding_conflict.is_set
	|| binding_err.is_set
	|| binding_expn_fail.is_set
	|| conn_config_err.is_set
	|| conn_down.is_set
	|| conn_srcaddr_err.is_set
	|| conn_up.is_set
	|| msg_parse_err.is_set
	|| oper_nodeid_change.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(binding_conflict.yfilter)
	|| ydk::is_set(binding_err.yfilter)
	|| ydk::is_set(binding_expn_fail.yfilter)
	|| ydk::is_set(conn_config_err.yfilter)
	|| ydk::is_set(conn_down.yfilter)
	|| ydk::is_set(conn_srcaddr_err.yfilter)
	|| ydk::is_set(conn_up.yfilter)
	|| ydk::is_set(msg_parse_err.yfilter)
	|| ydk::is_set(oper_nodeid_change.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trustsec-sxp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (binding_conflict.is_set || is_set(binding_conflict.yfilter)) leaf_name_data.push_back(binding_conflict.get_name_leafdata());
    if (binding_err.is_set || is_set(binding_err.yfilter)) leaf_name_data.push_back(binding_err.get_name_leafdata());
    if (binding_expn_fail.is_set || is_set(binding_expn_fail.yfilter)) leaf_name_data.push_back(binding_expn_fail.get_name_leafdata());
    if (conn_config_err.is_set || is_set(conn_config_err.yfilter)) leaf_name_data.push_back(conn_config_err.get_name_leafdata());
    if (conn_down.is_set || is_set(conn_down.yfilter)) leaf_name_data.push_back(conn_down.get_name_leafdata());
    if (conn_srcaddr_err.is_set || is_set(conn_srcaddr_err.yfilter)) leaf_name_data.push_back(conn_srcaddr_err.get_name_leafdata());
    if (conn_up.is_set || is_set(conn_up.yfilter)) leaf_name_data.push_back(conn_up.get_name_leafdata());
    if (msg_parse_err.is_set || is_set(msg_parse_err.yfilter)) leaf_name_data.push_back(msg_parse_err.get_name_leafdata());
    if (oper_nodeid_change.is_set || is_set(oper_nodeid_change.yfilter)) leaf_name_data.push_back(oper_nodeid_change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "binding-conflict")
    {
        binding_conflict = value;
        binding_conflict.value_namespace = name_space;
        binding_conflict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-err")
    {
        binding_err = value;
        binding_err.value_namespace = name_space;
        binding_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-expn-fail")
    {
        binding_expn_fail = value;
        binding_expn_fail.value_namespace = name_space;
        binding_expn_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-config-err")
    {
        conn_config_err = value;
        conn_config_err.value_namespace = name_space;
        conn_config_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-down")
    {
        conn_down = value;
        conn_down.value_namespace = name_space;
        conn_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-srcaddr-err")
    {
        conn_srcaddr_err = value;
        conn_srcaddr_err.value_namespace = name_space;
        conn_srcaddr_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conn-up")
    {
        conn_up = value;
        conn_up.value_namespace = name_space;
        conn_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-parse-err")
    {
        msg_parse_err = value;
        msg_parse_err.value_namespace = name_space;
        msg_parse_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-nodeid-change")
    {
        oper_nodeid_change = value;
        oper_nodeid_change.value_namespace = name_space;
        oper_nodeid_change.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "binding-conflict")
    {
        binding_conflict.yfilter = yfilter;
    }
    if(value_path == "binding-err")
    {
        binding_err.yfilter = yfilter;
    }
    if(value_path == "binding-expn-fail")
    {
        binding_expn_fail.yfilter = yfilter;
    }
    if(value_path == "conn-config-err")
    {
        conn_config_err.yfilter = yfilter;
    }
    if(value_path == "conn-down")
    {
        conn_down.yfilter = yfilter;
    }
    if(value_path == "conn-srcaddr-err")
    {
        conn_srcaddr_err.yfilter = yfilter;
    }
    if(value_path == "conn-up")
    {
        conn_up.yfilter = yfilter;
    }
    if(value_path == "msg-parse-err")
    {
        msg_parse_err.yfilter = yfilter;
    }
    if(value_path == "oper-nodeid-change")
    {
        oper_nodeid_change.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::TrustsecSxp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-conflict" || name == "binding-err" || name == "binding-expn-fail" || name == "conn-config-err" || name == "conn-down" || name == "conn-srcaddr-err" || name == "conn-up" || name == "msg-parse-err" || name == "oper-nodeid-change")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Udld::Udld()
    :
    link_fail_rpt{YType::empty, "link-fail-rpt"},
    status_change{YType::empty, "status-change"}
{

    yang_name = "udld"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Udld::~Udld()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Udld::has_data() const
{
    return link_fail_rpt.is_set
	|| status_change.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Udld::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(link_fail_rpt.yfilter)
	|| ydk::is_set(status_change.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Udld::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Udld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udld";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Udld::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_fail_rpt.is_set || is_set(link_fail_rpt.yfilter)) leaf_name_data.push_back(link_fail_rpt.get_name_leafdata());
    if (status_change.is_set || is_set(status_change.yfilter)) leaf_name_data.push_back(status_change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Udld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Udld::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Udld::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "link-fail-rpt")
    {
        link_fail_rpt = value;
        link_fail_rpt.value_namespace = name_space;
        link_fail_rpt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status-change")
    {
        status_change = value;
        status_change.value_namespace = name_space;
        status_change.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Udld::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "link-fail-rpt")
    {
        link_fail_rpt.yfilter = yfilter;
    }
    if(value_path == "status-change")
    {
        status_change.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Udld::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link-fail-rpt" || name == "status-change")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::Vrfmib()
    :
    vnet_trunk_down{YType::empty, "vnet-trunk-down"},
    vnet_trunk_up{YType::empty, "vnet-trunk-up"},
    vrf_down{YType::empty, "vrf-down"},
    vrf_up{YType::empty, "vrf-up"}
{

    yang_name = "vrfmib"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::~Vrfmib()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::has_data() const
{
    return vnet_trunk_down.is_set
	|| vnet_trunk_up.is_set
	|| vrf_down.is_set
	|| vrf_up.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vnet_trunk_down.yfilter)
	|| ydk::is_set(vnet_trunk_up.yfilter)
	|| ydk::is_set(vrf_down.yfilter)
	|| ydk::is_set(vrf_up.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfmib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vnet_trunk_down.is_set || is_set(vnet_trunk_down.yfilter)) leaf_name_data.push_back(vnet_trunk_down.get_name_leafdata());
    if (vnet_trunk_up.is_set || is_set(vnet_trunk_up.yfilter)) leaf_name_data.push_back(vnet_trunk_up.get_name_leafdata());
    if (vrf_down.is_set || is_set(vrf_down.yfilter)) leaf_name_data.push_back(vrf_down.get_name_leafdata());
    if (vrf_up.is_set || is_set(vrf_up.yfilter)) leaf_name_data.push_back(vrf_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vnet-trunk-down")
    {
        vnet_trunk_down = value;
        vnet_trunk_down.value_namespace = name_space;
        vnet_trunk_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vnet-trunk-up")
    {
        vnet_trunk_up = value;
        vnet_trunk_up.value_namespace = name_space;
        vnet_trunk_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-down")
    {
        vrf_down = value;
        vrf_down.value_namespace = name_space;
        vrf_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-up")
    {
        vrf_up = value;
        vrf_up.value_namespace = name_space;
        vrf_up.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vnet-trunk-down")
    {
        vnet_trunk_down.yfilter = yfilter;
    }
    if(value_path == "vnet-trunk-up")
    {
        vnet_trunk_up.yfilter = yfilter;
    }
    if(value_path == "vrf-down")
    {
        vrf_down.yfilter = yfilter;
    }
    if(value_path == "vrf-up")
    {
        vrf_up.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vrfmib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vnet-trunk-down" || name == "vnet-trunk-up" || name == "vrf-down" || name == "vrf-up")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::Vstack()
    :
    addition{YType::empty, "addition"},
    failure{YType::empty, "failure"},
    lost{YType::empty, "lost"},
    operation_{YType::empty, "operation"}
{

    yang_name = "vstack"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::~Vstack()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::has_data() const
{
    return addition.is_set
	|| failure.is_set
	|| lost.is_set
	|| operation_.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addition.yfilter)
	|| ydk::is_set(failure.yfilter)
	|| ydk::is_set(lost.yfilter)
	|| ydk::is_set(operation_.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vstack";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addition.is_set || is_set(addition.yfilter)) leaf_name_data.push_back(addition.get_name_leafdata());
    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (lost.is_set || is_set(lost.yfilter)) leaf_name_data.push_back(lost.get_name_leafdata());
    if (operation_.is_set || is_set(operation_.yfilter)) leaf_name_data.push_back(operation_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addition")
    {
        addition = value;
        addition.value_namespace = name_space;
        addition.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure")
    {
        failure = value;
        failure.value_namespace = name_space;
        failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lost")
    {
        lost = value;
        lost.value_namespace = name_space;
        lost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation")
    {
        operation_ = value;
        operation_.value_namespace = name_space;
        operation_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addition")
    {
        addition.yfilter = yfilter;
    }
    if(value_path == "failure")
    {
        failure.yfilter = yfilter;
    }
    if(value_path == "lost")
    {
        lost.yfilter = yfilter;
    }
    if(value_path == "operation")
    {
        operation_.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vstack::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addition" || name == "failure" || name == "lost" || name == "operation")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::Vswitch()
    :
    dual_active(nullptr) // presence node
{

    yang_name = "vswitch"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::~Vswitch()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::has_data() const
{
    return (dual_active !=  nullptr && dual_active->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::has_operation() const
{
    return is_set(yfilter)
	|| (dual_active !=  nullptr && dual_active->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vswitch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dual-active")
    {
        if(dual_active == nullptr)
        {
            dual_active = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive>();
        }
        return dual_active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dual_active != nullptr)
    {
        children["dual-active"] = dual_active;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-active")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::DualActive()
    :
    vsl{YType::empty, "vsl"}
{

    yang_name = "dual-active"; yang_parent_name = "vswitch"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::~DualActive()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::has_data() const
{
    return vsl.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vsl.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/vswitch/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dual-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vsl.is_set || is_set(vsl.yfilter)) leaf_name_data.push_back(vsl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vsl")
    {
        vsl = value;
        vsl.value_namespace = name_space;
        vsl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vsl")
    {
        vsl.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Vswitch::DualActive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vsl")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Wireless()
    :
    bsnmobilestation(nullptr) // presence node
{

    yang_name = "wireless"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::~Wireless()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::has_data() const
{
    return (bsnmobilestation !=  nullptr && bsnmobilestation->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::has_operation() const
{
    return is_set(yfilter)
	|| (bsnmobilestation !=  nullptr && bsnmobilestation->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wireless";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsnMobileStation")
    {
        if(bsnmobilestation == nullptr)
        {
            bsnmobilestation = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation>();
        }
        return bsnmobilestation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bsnmobilestation != nullptr)
    {
        children["bsnMobileStation"] = bsnmobilestation;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsnMobileStation")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnmobilestation()
    :
    bsnaccesspoint(nullptr) // presence node
{

    yang_name = "bsnMobileStation"; yang_parent_name = "wireless"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::~Bsnmobilestation()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::has_data() const
{
    return (bsnaccesspoint !=  nullptr && bsnaccesspoint->has_data());
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::has_operation() const
{
    return is_set(yfilter)
	|| (bsnaccesspoint !=  nullptr && bsnaccesspoint->has_operation());
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/wireless/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsnMobileStation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsnAccessPoint")
    {
        if(bsnaccesspoint == nullptr)
        {
            bsnaccesspoint = std::make_shared<Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint>();
        }
        return bsnaccesspoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bsnaccesspoint != nullptr)
    {
        children["bsnAccessPoint"] = bsnaccesspoint;
    }

    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsnAccessPoint")
        return true;
    return false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::Bsnaccesspoint()
    :
    bsnrogue{YType::empty, "bsnRogue"}
{

    yang_name = "bsnAccessPoint"; yang_parent_name = "bsnMobileStation"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::~Bsnaccesspoint()
{
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::has_data() const
{
    return bsnrogue.is_set;
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bsnrogue.yfilter);
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:enable/enable-choice/traps/wireless/bsnMobileStation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsnAccessPoint";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsnrogue.is_set || is_set(bsnrogue.yfilter)) leaf_name_data.push_back(bsnrogue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bsnRogue")
    {
        bsnrogue = value;
        bsnrogue.value_namespace = name_space;
        bsnrogue.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bsnRogue")
    {
        bsnrogue.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Enable::EnableChoice::Traps::Wireless::Bsnmobilestation::Bsnaccesspoint::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsnRogue")
        return true;
    return false;
}

Native::SnmpServer::Engineid::Engineid()
    :
    local{YType::str, "local"}
    	,
    remote(std::make_shared<Native::SnmpServer::Engineid::Remote>())
{
    remote->parent = this;

    yang_name = "engineID"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Engineid::~Engineid()
{
}

bool Native::SnmpServer::Engineid::has_data() const
{
    return local.is_set
	|| (remote !=  nullptr && remote->has_data());
}

bool Native::SnmpServer::Engineid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local.yfilter)
	|| (remote !=  nullptr && remote->has_operation());
}

std::string Native::SnmpServer::Engineid::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Engineid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:engineID";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Engineid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.yfilter)) leaf_name_data.push_back(local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Engineid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<Native::SnmpServer::Engineid::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Engineid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void Native::SnmpServer::Engineid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local")
    {
        local = value;
        local.value_namespace = name_space;
        local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Engineid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local")
    {
        local.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Engineid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote" || name == "local")
        return true;
    return false;
}

Native::SnmpServer::Engineid::Remote::Remote()
{

    yang_name = "remote"; yang_parent_name = "engineID"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Engineid::Remote::~Remote()
{
}

bool Native::SnmpServer::Engineid::Remote::has_data() const
{
    return false;
}

bool Native::SnmpServer::Engineid::Remote::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Engineid::Remote::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:engineID/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Engineid::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Engineid::Remote::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Engineid::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Engineid::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Engineid::Remote::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Engineid::Remote::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Engineid::Remote::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Group::Group()
    :
    id{YType::str, "id"}
    	,
    v1(std::make_shared<Native::SnmpServer::Group::V1>())
	,v2c(std::make_shared<Native::SnmpServer::Group::V2C>())
	,v3(std::make_shared<Native::SnmpServer::Group::V3>())
{
    v1->parent = this;
    v2c->parent = this;
    v3->parent = this;

    yang_name = "group"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Group::~Group()
{
}

bool Native::SnmpServer::Group::has_data() const
{
    return id.is_set
	|| (v1 !=  nullptr && v1->has_data())
	|| (v2c !=  nullptr && v2c->has_data())
	|| (v3 !=  nullptr && v3->has_data());
}

bool Native::SnmpServer::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| (v1 !=  nullptr && v1->has_operation())
	|| (v2c !=  nullptr && v2c->has_operation())
	|| (v3 !=  nullptr && v3->has_operation());
}

std::string Native::SnmpServer::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:group" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "v1")
    {
        if(v1 == nullptr)
        {
            v1 = std::make_shared<Native::SnmpServer::Group::V1>();
        }
        return v1;
    }

    if(child_yang_name == "v2c")
    {
        if(v2c == nullptr)
        {
            v2c = std::make_shared<Native::SnmpServer::Group::V2C>();
        }
        return v2c;
    }

    if(child_yang_name == "v3")
    {
        if(v3 == nullptr)
        {
            v3 = std::make_shared<Native::SnmpServer::Group::V3>();
        }
        return v3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(v1 != nullptr)
    {
        children["v1"] = v1;
    }

    if(v2c != nullptr)
    {
        children["v2c"] = v2c;
    }

    if(v3 != nullptr)
    {
        children["v3"] = v3;
    }

    return children;
}

void Native::SnmpServer::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v1" || name == "v2c" || name == "v3" || name == "id")
        return true;
    return false;
}

Native::SnmpServer::Group::V1::V1()
{

    yang_name = "v1"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SnmpServer::Group::V1::~V1()
{
}

bool Native::SnmpServer::Group::V1::has_data() const
{
    return false;
}

bool Native::SnmpServer::Group::V1::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Group::V1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Group::V1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Group::V1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Group::V1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Group::V1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Group::V1::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Group::V1::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Group::V2C::V2C()
{

    yang_name = "v2c"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SnmpServer::Group::V2C::~V2C()
{
}

bool Native::SnmpServer::Group::V2C::has_data() const
{
    return false;
}

bool Native::SnmpServer::Group::V2C::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::SnmpServer::Group::V2C::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v2c";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Group::V2C::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Group::V2C::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Group::V2C::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Group::V2C::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::Group::V2C::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::Group::V2C::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::SnmpServer::Group::V3::V3()
    :
    access{YType::str, "access"},
    context{YType::str, "context"},
    match{YType::enumeration, "match"},
    notify{YType::str, "notify"},
    read{YType::str, "read"},
    security_level{YType::enumeration, "security-level"},
    write{YType::str, "write"}
{

    yang_name = "v3"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SnmpServer::Group::V3::~V3()
{
}

bool Native::SnmpServer::Group::V3::has_data() const
{
    return access.is_set
	|| context.is_set
	|| match.is_set
	|| notify.is_set
	|| read.is_set
	|| security_level.is_set
	|| write.is_set;
}

bool Native::SnmpServer::Group::V3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(match.yfilter)
	|| ydk::is_set(notify.yfilter)
	|| ydk::is_set(read.yfilter)
	|| ydk::is_set(security_level.yfilter)
	|| ydk::is_set(write.yfilter);
}

std::string Native::SnmpServer::Group::V3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Group::V3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (match.is_set || is_set(match.yfilter)) leaf_name_data.push_back(match.get_name_leafdata());
    if (notify.is_set || is_set(notify.yfilter)) leaf_name_data.push_back(notify.get_name_leafdata());
    if (read.is_set || is_set(read.yfilter)) leaf_name_data.push_back(read.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.yfilter)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (write.is_set || is_set(write.yfilter)) leaf_name_data.push_back(write.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Group::V3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Group::V3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Group::V3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "context")
    {
        context = value;
        context.value_namespace = name_space;
        context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match")
    {
        match = value;
        match.value_namespace = name_space;
        match.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notify")
    {
        notify = value;
        notify.value_namespace = name_space;
        notify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "read")
    {
        read = value;
        read.value_namespace = name_space;
        read.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-level")
    {
        security_level = value;
        security_level.value_namespace = name_space;
        security_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write")
    {
        write = value;
        write.value_namespace = name_space;
        write.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Group::V3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "match")
    {
        match.yfilter = yfilter;
    }
    if(value_path == "notify")
    {
        notify.yfilter = yfilter;
    }
    if(value_path == "read")
    {
        read.yfilter = yfilter;
    }
    if(value_path == "security-level")
    {
        security_level.yfilter = yfilter;
    }
    if(value_path == "write")
    {
        write.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Group::V3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "context" || name == "match" || name == "notify" || name == "read" || name == "security-level" || name == "write")
        return true;
    return false;
}

Native::SnmpServer::Host::Host()
    :
    ip_address{YType::str, "ip-address"},
    community_string{YType::str, "community-string"},
    informs{YType::empty, "informs"},
    security_level{YType::enumeration, "security-level"},
    traps{YType::empty, "traps"},
    version{YType::enumeration, "version"},
    vrf{YType::str, "vrf"}
    	,
    trap_enable(std::make_shared<Native::SnmpServer::Host::TrapEnable>())
{
    trap_enable->parent = this;

    yang_name = "host"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Host::~Host()
{
}

bool Native::SnmpServer::Host::has_data() const
{
    return ip_address.is_set
	|| community_string.is_set
	|| informs.is_set
	|| security_level.is_set
	|| traps.is_set
	|| version.is_set
	|| vrf.is_set
	|| (trap_enable !=  nullptr && trap_enable->has_data());
}

bool Native::SnmpServer::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(community_string.yfilter)
	|| ydk::is_set(informs.yfilter)
	|| ydk::is_set(security_level.yfilter)
	|| ydk::is_set(traps.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (trap_enable !=  nullptr && trap_enable->has_operation());
}

std::string Native::SnmpServer::Host::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:host" <<"[ip-address='" <<ip_address <<"']" <<"[community-string='" <<community_string <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (community_string.is_set || is_set(community_string.yfilter)) leaf_name_data.push_back(community_string.get_name_leafdata());
    if (informs.is_set || is_set(informs.yfilter)) leaf_name_data.push_back(informs.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.yfilter)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (traps.is_set || is_set(traps.yfilter)) leaf_name_data.push_back(traps.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trap-enable")
    {
        if(trap_enable == nullptr)
        {
            trap_enable = std::make_shared<Native::SnmpServer::Host::TrapEnable>();
        }
        return trap_enable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trap_enable != nullptr)
    {
        children["trap-enable"] = trap_enable;
    }

    return children;
}

void Native::SnmpServer::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community-string")
    {
        community_string = value;
        community_string.value_namespace = name_space;
        community_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "informs")
    {
        informs = value;
        informs.value_namespace = name_space;
        informs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security-level")
    {
        security_level = value;
        security_level.value_namespace = name_space;
        security_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "traps")
    {
        traps = value;
        traps.value_namespace = name_space;
        traps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "community-string")
    {
        community_string.yfilter = yfilter;
    }
    if(value_path == "informs")
    {
        informs.yfilter = yfilter;
    }
    if(value_path == "security-level")
    {
        security_level.yfilter = yfilter;
    }
    if(value_path == "traps")
    {
        traps.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-enable" || name == "ip-address" || name == "community-string" || name == "informs" || name == "security-level" || name == "traps" || name == "version" || name == "vrf")
        return true;
    return false;
}

Native::SnmpServer::Host::TrapEnable::TrapEnable()
    :
    aaa_server{YType::empty, "aaa_server"},
    alarms{YType::empty, "alarms"},
    atm{YType::empty, "atm"},
    bfd{YType::empty, "bfd"},
    bgp{YType::empty, "bgp"},
    bstun{YType::empty, "bstun"},
    bulkstat{YType::empty, "bulkstat"},
    call_home{YType::empty, "call-home"},
    casa{YType::empty, "casa"},
    cef{YType::empty, "cef"},
    cnpd{YType::empty, "cnpd"},
    config{YType::empty, "config"},
    config_copy{YType::empty, "config-copy"},
    config_ctid{YType::empty, "config-ctid"},
    cpu{YType::empty, "cpu"},
    dhcp{YType::empty, "dhcp"},
    dlsw{YType::empty, "dlsw"},
    ds1{YType::empty, "ds1"},
    dsp{YType::empty, "dsp"},
    dspu{YType::empty, "dspu"},
    eigrp{YType::empty, "eigrp"},
    entity_{YType::empty, "entity"},
    entity_diag{YType::empty, "entity-diag"},
    entity_qfp{YType::empty, "entity-qfp"},
    entity_state{YType::empty, "entity-state"},
    ethernet_cfm{YType::empty, "ethernet-cfm"},
    evc{YType::empty, "evc"},
    event_manager{YType::empty, "event-manager"},
    firewall{YType::empty, "firewall"},
    flash{YType::empty, "flash"},
    flowmon{YType::empty, "flowmon"},
    frame_relay{YType::empty, "frame-relay"},
    fru_ctrl{YType::empty, "fru-ctrl"},
    gdoi{YType::empty, "gdoi"},
    hsrp{YType::empty, "hsrp"},
    iplocalpool{YType::empty, "iplocalpool"},
    ipmulticast{YType::empty, "ipmulticast"},
    ipsec{YType::empty, "ipsec"},
    ipsla{YType::empty, "ipsla"},
    isakmp{YType::empty, "isakmp"},
    isg_mib{YType::empty, "isg-mib"},
    isis{YType::empty, "isis"},
    l2tun_pseudowire_status{YType::empty, "l2tun-pseudowire-status"},
    l2tun_session{YType::empty, "l2tun-session"},
    license{YType::empty, "license"},
    memory{YType::empty, "memory"},
    mpls_fast_reroute{YType::empty, "mpls-fast-reroute"},
    mpls_ldp{YType::empty, "mpls-ldp"},
    mpls_traffic_eng{YType::empty, "mpls-traffic-eng"},
    mpls_vpn{YType::empty, "mpls-vpn"},
    msdp{YType::empty, "msdp"},
    mvpn{YType::empty, "mvpn"},
    nhrp{YType::empty, "nhrp"},
    ospf{YType::empty, "ospf"},
    ospfv3{YType::empty, "ospfv3"},
    pfr{YType::empty, "pfr"},
    pim{YType::empty, "pim"},
    pw_vc{YType::empty, "pw-vc"},
    resource_policy{YType::empty, "resource-policy"},
    rf{YType::empty, "rf"},
    rsrb{YType::empty, "rsrb"},
    rsvp{YType::empty, "rsvp"},
    sdlc{YType::empty, "sdlc"},
    sdllc{YType::empty, "sdllc"},
    snmp{YType::empty, "snmp"},
    sonet{YType::empty, "sonet"},
    srp{YType::empty, "srp"},
    stun{YType::empty, "stun"},
    syslog{YType::empty, "syslog"},
    trustsec_sxp{YType::empty, "trustsec-sxp"},
    tty{YType::empty, "tty"},
    udp_port{YType::uint16, "udp-port"},
    voice{YType::empty, "voice"},
    vrfmib{YType::empty, "vrfmib"},
    vrrp{YType::empty, "vrrp"},
    x25{YType::empty, "x25"}
{

    yang_name = "trap-enable"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SnmpServer::Host::TrapEnable::~TrapEnable()
{
}

bool Native::SnmpServer::Host::TrapEnable::has_data() const
{
    return aaa_server.is_set
	|| alarms.is_set
	|| atm.is_set
	|| bfd.is_set
	|| bgp.is_set
	|| bstun.is_set
	|| bulkstat.is_set
	|| call_home.is_set
	|| casa.is_set
	|| cef.is_set
	|| cnpd.is_set
	|| config.is_set
	|| config_copy.is_set
	|| config_ctid.is_set
	|| cpu.is_set
	|| dhcp.is_set
	|| dlsw.is_set
	|| ds1.is_set
	|| dsp.is_set
	|| dspu.is_set
	|| eigrp.is_set
	|| entity_.is_set
	|| entity_diag.is_set
	|| entity_qfp.is_set
	|| entity_state.is_set
	|| ethernet_cfm.is_set
	|| evc.is_set
	|| event_manager.is_set
	|| firewall.is_set
	|| flash.is_set
	|| flowmon.is_set
	|| frame_relay.is_set
	|| fru_ctrl.is_set
	|| gdoi.is_set
	|| hsrp.is_set
	|| iplocalpool.is_set
	|| ipmulticast.is_set
	|| ipsec.is_set
	|| ipsla.is_set
	|| isakmp.is_set
	|| isg_mib.is_set
	|| isis.is_set
	|| l2tun_pseudowire_status.is_set
	|| l2tun_session.is_set
	|| license.is_set
	|| memory.is_set
	|| mpls_fast_reroute.is_set
	|| mpls_ldp.is_set
	|| mpls_traffic_eng.is_set
	|| mpls_vpn.is_set
	|| msdp.is_set
	|| mvpn.is_set
	|| nhrp.is_set
	|| ospf.is_set
	|| ospfv3.is_set
	|| pfr.is_set
	|| pim.is_set
	|| pw_vc.is_set
	|| resource_policy.is_set
	|| rf.is_set
	|| rsrb.is_set
	|| rsvp.is_set
	|| sdlc.is_set
	|| sdllc.is_set
	|| snmp.is_set
	|| sonet.is_set
	|| srp.is_set
	|| stun.is_set
	|| syslog.is_set
	|| trustsec_sxp.is_set
	|| tty.is_set
	|| udp_port.is_set
	|| voice.is_set
	|| vrfmib.is_set
	|| vrrp.is_set
	|| x25.is_set;
}

bool Native::SnmpServer::Host::TrapEnable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_server.yfilter)
	|| ydk::is_set(alarms.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(bgp.yfilter)
	|| ydk::is_set(bstun.yfilter)
	|| ydk::is_set(bulkstat.yfilter)
	|| ydk::is_set(call_home.yfilter)
	|| ydk::is_set(casa.yfilter)
	|| ydk::is_set(cef.yfilter)
	|| ydk::is_set(cnpd.yfilter)
	|| ydk::is_set(config.yfilter)
	|| ydk::is_set(config_copy.yfilter)
	|| ydk::is_set(config_ctid.yfilter)
	|| ydk::is_set(cpu.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(dlsw.yfilter)
	|| ydk::is_set(ds1.yfilter)
	|| ydk::is_set(dsp.yfilter)
	|| ydk::is_set(dspu.yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(entity_.yfilter)
	|| ydk::is_set(entity_diag.yfilter)
	|| ydk::is_set(entity_qfp.yfilter)
	|| ydk::is_set(entity_state.yfilter)
	|| ydk::is_set(ethernet_cfm.yfilter)
	|| ydk::is_set(evc.yfilter)
	|| ydk::is_set(event_manager.yfilter)
	|| ydk::is_set(firewall.yfilter)
	|| ydk::is_set(flash.yfilter)
	|| ydk::is_set(flowmon.yfilter)
	|| ydk::is_set(frame_relay.yfilter)
	|| ydk::is_set(fru_ctrl.yfilter)
	|| ydk::is_set(gdoi.yfilter)
	|| ydk::is_set(hsrp.yfilter)
	|| ydk::is_set(iplocalpool.yfilter)
	|| ydk::is_set(ipmulticast.yfilter)
	|| ydk::is_set(ipsec.yfilter)
	|| ydk::is_set(ipsla.yfilter)
	|| ydk::is_set(isakmp.yfilter)
	|| ydk::is_set(isg_mib.yfilter)
	|| ydk::is_set(isis.yfilter)
	|| ydk::is_set(l2tun_pseudowire_status.yfilter)
	|| ydk::is_set(l2tun_session.yfilter)
	|| ydk::is_set(license.yfilter)
	|| ydk::is_set(memory.yfilter)
	|| ydk::is_set(mpls_fast_reroute.yfilter)
	|| ydk::is_set(mpls_ldp.yfilter)
	|| ydk::is_set(mpls_traffic_eng.yfilter)
	|| ydk::is_set(mpls_vpn.yfilter)
	|| ydk::is_set(msdp.yfilter)
	|| ydk::is_set(mvpn.yfilter)
	|| ydk::is_set(nhrp.yfilter)
	|| ydk::is_set(ospf.yfilter)
	|| ydk::is_set(ospfv3.yfilter)
	|| ydk::is_set(pfr.yfilter)
	|| ydk::is_set(pim.yfilter)
	|| ydk::is_set(pw_vc.yfilter)
	|| ydk::is_set(resource_policy.yfilter)
	|| ydk::is_set(rf.yfilter)
	|| ydk::is_set(rsrb.yfilter)
	|| ydk::is_set(rsvp.yfilter)
	|| ydk::is_set(sdlc.yfilter)
	|| ydk::is_set(sdllc.yfilter)
	|| ydk::is_set(snmp.yfilter)
	|| ydk::is_set(sonet.yfilter)
	|| ydk::is_set(srp.yfilter)
	|| ydk::is_set(stun.yfilter)
	|| ydk::is_set(syslog.yfilter)
	|| ydk::is_set(trustsec_sxp.yfilter)
	|| ydk::is_set(tty.yfilter)
	|| ydk::is_set(udp_port.yfilter)
	|| ydk::is_set(voice.yfilter)
	|| ydk::is_set(vrfmib.yfilter)
	|| ydk::is_set(vrrp.yfilter)
	|| ydk::is_set(x25.yfilter);
}

std::string Native::SnmpServer::Host::TrapEnable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Host::TrapEnable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_server.is_set || is_set(aaa_server.yfilter)) leaf_name_data.push_back(aaa_server.get_name_leafdata());
    if (alarms.is_set || is_set(alarms.yfilter)) leaf_name_data.push_back(alarms.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (bgp.is_set || is_set(bgp.yfilter)) leaf_name_data.push_back(bgp.get_name_leafdata());
    if (bstun.is_set || is_set(bstun.yfilter)) leaf_name_data.push_back(bstun.get_name_leafdata());
    if (bulkstat.is_set || is_set(bulkstat.yfilter)) leaf_name_data.push_back(bulkstat.get_name_leafdata());
    if (call_home.is_set || is_set(call_home.yfilter)) leaf_name_data.push_back(call_home.get_name_leafdata());
    if (casa.is_set || is_set(casa.yfilter)) leaf_name_data.push_back(casa.get_name_leafdata());
    if (cef.is_set || is_set(cef.yfilter)) leaf_name_data.push_back(cef.get_name_leafdata());
    if (cnpd.is_set || is_set(cnpd.yfilter)) leaf_name_data.push_back(cnpd.get_name_leafdata());
    if (config.is_set || is_set(config.yfilter)) leaf_name_data.push_back(config.get_name_leafdata());
    if (config_copy.is_set || is_set(config_copy.yfilter)) leaf_name_data.push_back(config_copy.get_name_leafdata());
    if (config_ctid.is_set || is_set(config_ctid.yfilter)) leaf_name_data.push_back(config_ctid.get_name_leafdata());
    if (cpu.is_set || is_set(cpu.yfilter)) leaf_name_data.push_back(cpu.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (dlsw.is_set || is_set(dlsw.yfilter)) leaf_name_data.push_back(dlsw.get_name_leafdata());
    if (ds1.is_set || is_set(ds1.yfilter)) leaf_name_data.push_back(ds1.get_name_leafdata());
    if (dsp.is_set || is_set(dsp.yfilter)) leaf_name_data.push_back(dsp.get_name_leafdata());
    if (dspu.is_set || is_set(dspu.yfilter)) leaf_name_data.push_back(dspu.get_name_leafdata());
    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (entity_.is_set || is_set(entity_.yfilter)) leaf_name_data.push_back(entity_.get_name_leafdata());
    if (entity_diag.is_set || is_set(entity_diag.yfilter)) leaf_name_data.push_back(entity_diag.get_name_leafdata());
    if (entity_qfp.is_set || is_set(entity_qfp.yfilter)) leaf_name_data.push_back(entity_qfp.get_name_leafdata());
    if (entity_state.is_set || is_set(entity_state.yfilter)) leaf_name_data.push_back(entity_state.get_name_leafdata());
    if (ethernet_cfm.is_set || is_set(ethernet_cfm.yfilter)) leaf_name_data.push_back(ethernet_cfm.get_name_leafdata());
    if (evc.is_set || is_set(evc.yfilter)) leaf_name_data.push_back(evc.get_name_leafdata());
    if (event_manager.is_set || is_set(event_manager.yfilter)) leaf_name_data.push_back(event_manager.get_name_leafdata());
    if (firewall.is_set || is_set(firewall.yfilter)) leaf_name_data.push_back(firewall.get_name_leafdata());
    if (flash.is_set || is_set(flash.yfilter)) leaf_name_data.push_back(flash.get_name_leafdata());
    if (flowmon.is_set || is_set(flowmon.yfilter)) leaf_name_data.push_back(flowmon.get_name_leafdata());
    if (frame_relay.is_set || is_set(frame_relay.yfilter)) leaf_name_data.push_back(frame_relay.get_name_leafdata());
    if (fru_ctrl.is_set || is_set(fru_ctrl.yfilter)) leaf_name_data.push_back(fru_ctrl.get_name_leafdata());
    if (gdoi.is_set || is_set(gdoi.yfilter)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (hsrp.is_set || is_set(hsrp.yfilter)) leaf_name_data.push_back(hsrp.get_name_leafdata());
    if (iplocalpool.is_set || is_set(iplocalpool.yfilter)) leaf_name_data.push_back(iplocalpool.get_name_leafdata());
    if (ipmulticast.is_set || is_set(ipmulticast.yfilter)) leaf_name_data.push_back(ipmulticast.get_name_leafdata());
    if (ipsec.is_set || is_set(ipsec.yfilter)) leaf_name_data.push_back(ipsec.get_name_leafdata());
    if (ipsla.is_set || is_set(ipsla.yfilter)) leaf_name_data.push_back(ipsla.get_name_leafdata());
    if (isakmp.is_set || is_set(isakmp.yfilter)) leaf_name_data.push_back(isakmp.get_name_leafdata());
    if (isg_mib.is_set || is_set(isg_mib.yfilter)) leaf_name_data.push_back(isg_mib.get_name_leafdata());
    if (isis.is_set || is_set(isis.yfilter)) leaf_name_data.push_back(isis.get_name_leafdata());
    if (l2tun_pseudowire_status.is_set || is_set(l2tun_pseudowire_status.yfilter)) leaf_name_data.push_back(l2tun_pseudowire_status.get_name_leafdata());
    if (l2tun_session.is_set || is_set(l2tun_session.yfilter)) leaf_name_data.push_back(l2tun_session.get_name_leafdata());
    if (license.is_set || is_set(license.yfilter)) leaf_name_data.push_back(license.get_name_leafdata());
    if (memory.is_set || is_set(memory.yfilter)) leaf_name_data.push_back(memory.get_name_leafdata());
    if (mpls_fast_reroute.is_set || is_set(mpls_fast_reroute.yfilter)) leaf_name_data.push_back(mpls_fast_reroute.get_name_leafdata());
    if (mpls_ldp.is_set || is_set(mpls_ldp.yfilter)) leaf_name_data.push_back(mpls_ldp.get_name_leafdata());
    if (mpls_traffic_eng.is_set || is_set(mpls_traffic_eng.yfilter)) leaf_name_data.push_back(mpls_traffic_eng.get_name_leafdata());
    if (mpls_vpn.is_set || is_set(mpls_vpn.yfilter)) leaf_name_data.push_back(mpls_vpn.get_name_leafdata());
    if (msdp.is_set || is_set(msdp.yfilter)) leaf_name_data.push_back(msdp.get_name_leafdata());
    if (mvpn.is_set || is_set(mvpn.yfilter)) leaf_name_data.push_back(mvpn.get_name_leafdata());
    if (nhrp.is_set || is_set(nhrp.yfilter)) leaf_name_data.push_back(nhrp.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.yfilter)) leaf_name_data.push_back(ospf.get_name_leafdata());
    if (ospfv3.is_set || is_set(ospfv3.yfilter)) leaf_name_data.push_back(ospfv3.get_name_leafdata());
    if (pfr.is_set || is_set(pfr.yfilter)) leaf_name_data.push_back(pfr.get_name_leafdata());
    if (pim.is_set || is_set(pim.yfilter)) leaf_name_data.push_back(pim.get_name_leafdata());
    if (pw_vc.is_set || is_set(pw_vc.yfilter)) leaf_name_data.push_back(pw_vc.get_name_leafdata());
    if (resource_policy.is_set || is_set(resource_policy.yfilter)) leaf_name_data.push_back(resource_policy.get_name_leafdata());
    if (rf.is_set || is_set(rf.yfilter)) leaf_name_data.push_back(rf.get_name_leafdata());
    if (rsrb.is_set || is_set(rsrb.yfilter)) leaf_name_data.push_back(rsrb.get_name_leafdata());
    if (rsvp.is_set || is_set(rsvp.yfilter)) leaf_name_data.push_back(rsvp.get_name_leafdata());
    if (sdlc.is_set || is_set(sdlc.yfilter)) leaf_name_data.push_back(sdlc.get_name_leafdata());
    if (sdllc.is_set || is_set(sdllc.yfilter)) leaf_name_data.push_back(sdllc.get_name_leafdata());
    if (snmp.is_set || is_set(snmp.yfilter)) leaf_name_data.push_back(snmp.get_name_leafdata());
    if (sonet.is_set || is_set(sonet.yfilter)) leaf_name_data.push_back(sonet.get_name_leafdata());
    if (srp.is_set || is_set(srp.yfilter)) leaf_name_data.push_back(srp.get_name_leafdata());
    if (stun.is_set || is_set(stun.yfilter)) leaf_name_data.push_back(stun.get_name_leafdata());
    if (syslog.is_set || is_set(syslog.yfilter)) leaf_name_data.push_back(syslog.get_name_leafdata());
    if (trustsec_sxp.is_set || is_set(trustsec_sxp.yfilter)) leaf_name_data.push_back(trustsec_sxp.get_name_leafdata());
    if (tty.is_set || is_set(tty.yfilter)) leaf_name_data.push_back(tty.get_name_leafdata());
    if (udp_port.is_set || is_set(udp_port.yfilter)) leaf_name_data.push_back(udp_port.get_name_leafdata());
    if (voice.is_set || is_set(voice.yfilter)) leaf_name_data.push_back(voice.get_name_leafdata());
    if (vrfmib.is_set || is_set(vrfmib.yfilter)) leaf_name_data.push_back(vrfmib.get_name_leafdata());
    if (vrrp.is_set || is_set(vrrp.yfilter)) leaf_name_data.push_back(vrrp.get_name_leafdata());
    if (x25.is_set || is_set(x25.yfilter)) leaf_name_data.push_back(x25.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Host::TrapEnable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Host::TrapEnable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Host::TrapEnable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa_server")
    {
        aaa_server = value;
        aaa_server.value_namespace = name_space;
        aaa_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarms")
    {
        alarms = value;
        alarms.value_namespace = name_space;
        alarms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp")
    {
        bgp = value;
        bgp.value_namespace = name_space;
        bgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bstun")
    {
        bstun = value;
        bstun.value_namespace = name_space;
        bstun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bulkstat")
    {
        bulkstat = value;
        bulkstat.value_namespace = name_space;
        bulkstat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "call-home")
    {
        call_home = value;
        call_home.value_namespace = name_space;
        call_home.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "casa")
    {
        casa = value;
        casa.value_namespace = name_space;
        casa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cef")
    {
        cef = value;
        cef.value_namespace = name_space;
        cef.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cnpd")
    {
        cnpd = value;
        cnpd.value_namespace = name_space;
        cnpd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config")
    {
        config = value;
        config.value_namespace = name_space;
        config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-copy")
    {
        config_copy = value;
        config_copy.value_namespace = name_space;
        config_copy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-ctid")
    {
        config_ctid = value;
        config_ctid.value_namespace = name_space;
        config_ctid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cpu")
    {
        cpu = value;
        cpu.value_namespace = name_space;
        cpu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dlsw")
    {
        dlsw = value;
        dlsw.value_namespace = name_space;
        dlsw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ds1")
    {
        ds1 = value;
        ds1.value_namespace = name_space;
        ds1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsp")
    {
        dsp = value;
        dsp.value_namespace = name_space;
        dsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dspu")
    {
        dspu = value;
        dspu.value_namespace = name_space;
        dspu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entity")
    {
        entity_ = value;
        entity_.value_namespace = name_space;
        entity_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entity-diag")
    {
        entity_diag = value;
        entity_diag.value_namespace = name_space;
        entity_diag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entity-qfp")
    {
        entity_qfp = value;
        entity_qfp.value_namespace = name_space;
        entity_qfp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entity-state")
    {
        entity_state = value;
        entity_state.value_namespace = name_space;
        entity_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ethernet-cfm")
    {
        ethernet_cfm = value;
        ethernet_cfm.value_namespace = name_space;
        ethernet_cfm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evc")
    {
        evc = value;
        evc.value_namespace = name_space;
        evc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-manager")
    {
        event_manager = value;
        event_manager.value_namespace = name_space;
        event_manager.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "firewall")
    {
        firewall = value;
        firewall.value_namespace = name_space;
        firewall.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flash")
    {
        flash = value;
        flash.value_namespace = name_space;
        flash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flowmon")
    {
        flowmon = value;
        flowmon.value_namespace = name_space;
        flowmon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frame-relay")
    {
        frame_relay = value;
        frame_relay.value_namespace = name_space;
        frame_relay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fru-ctrl")
    {
        fru_ctrl = value;
        fru_ctrl.value_namespace = name_space;
        fru_ctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gdoi")
    {
        gdoi = value;
        gdoi.value_namespace = name_space;
        gdoi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hsrp")
    {
        hsrp = value;
        hsrp.value_namespace = name_space;
        hsrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iplocalpool")
    {
        iplocalpool = value;
        iplocalpool.value_namespace = name_space;
        iplocalpool.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipmulticast")
    {
        ipmulticast = value;
        ipmulticast.value_namespace = name_space;
        ipmulticast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipsec")
    {
        ipsec = value;
        ipsec.value_namespace = name_space;
        ipsec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipsla")
    {
        ipsla = value;
        ipsla.value_namespace = name_space;
        ipsla.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isakmp")
    {
        isakmp = value;
        isakmp.value_namespace = name_space;
        isakmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isg-mib")
    {
        isg_mib = value;
        isg_mib.value_namespace = name_space;
        isg_mib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis")
    {
        isis = value;
        isis.value_namespace = name_space;
        isis.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tun-pseudowire-status")
    {
        l2tun_pseudowire_status = value;
        l2tun_pseudowire_status.value_namespace = name_space;
        l2tun_pseudowire_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tun-session")
    {
        l2tun_session = value;
        l2tun_session.value_namespace = name_space;
        l2tun_session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "license")
    {
        license = value;
        license.value_namespace = name_space;
        license.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory")
    {
        memory = value;
        memory.value_namespace = name_space;
        memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-fast-reroute")
    {
        mpls_fast_reroute = value;
        mpls_fast_reroute.value_namespace = name_space;
        mpls_fast_reroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-ldp")
    {
        mpls_ldp = value;
        mpls_ldp.value_namespace = name_space;
        mpls_ldp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-traffic-eng")
    {
        mpls_traffic_eng = value;
        mpls_traffic_eng.value_namespace = name_space;
        mpls_traffic_eng.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-vpn")
    {
        mpls_vpn = value;
        mpls_vpn.value_namespace = name_space;
        mpls_vpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msdp")
    {
        msdp = value;
        msdp.value_namespace = name_space;
        msdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn")
    {
        mvpn = value;
        mvpn.value_namespace = name_space;
        mvpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nhrp")
    {
        nhrp = value;
        nhrp.value_namespace = name_space;
        nhrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf")
    {
        ospf = value;
        ospf.value_namespace = name_space;
        ospf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfv3")
    {
        ospfv3 = value;
        ospfv3.value_namespace = name_space;
        ospfv3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfr")
    {
        pfr = value;
        pfr.value_namespace = name_space;
        pfr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim")
    {
        pim = value;
        pim.value_namespace = name_space;
        pim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-vc")
    {
        pw_vc = value;
        pw_vc.value_namespace = name_space;
        pw_vc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resource-policy")
    {
        resource_policy = value;
        resource_policy.value_namespace = name_space;
        resource_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rf")
    {
        rf = value;
        rf.value_namespace = name_space;
        rf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsrb")
    {
        rsrb = value;
        rsrb.value_namespace = name_space;
        rsrb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp")
    {
        rsvp = value;
        rsvp.value_namespace = name_space;
        rsvp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdlc")
    {
        sdlc = value;
        sdlc.value_namespace = name_space;
        sdlc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sdllc")
    {
        sdllc = value;
        sdllc.value_namespace = name_space;
        sdllc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snmp")
    {
        snmp = value;
        snmp.value_namespace = name_space;
        snmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sonet")
    {
        sonet = value;
        sonet.value_namespace = name_space;
        sonet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srp")
    {
        srp = value;
        srp.value_namespace = name_space;
        srp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stun")
    {
        stun = value;
        stun.value_namespace = name_space;
        stun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syslog")
    {
        syslog = value;
        syslog.value_namespace = name_space;
        syslog.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trustsec-sxp")
    {
        trustsec_sxp = value;
        trustsec_sxp.value_namespace = name_space;
        trustsec_sxp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tty")
    {
        tty = value;
        tty.value_namespace = name_space;
        tty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-port")
    {
        udp_port = value;
        udp_port.value_namespace = name_space;
        udp_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "voice")
    {
        voice = value;
        voice.value_namespace = name_space;
        voice.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfmib")
    {
        vrfmib = value;
        vrfmib.value_namespace = name_space;
        vrfmib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrrp")
    {
        vrrp = value;
        vrrp.value_namespace = name_space;
        vrrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "x25")
    {
        x25 = value;
        x25.value_namespace = name_space;
        x25.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Host::TrapEnable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa_server")
    {
        aaa_server.yfilter = yfilter;
    }
    if(value_path == "alarms")
    {
        alarms.yfilter = yfilter;
    }
    if(value_path == "atm")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "bgp")
    {
        bgp.yfilter = yfilter;
    }
    if(value_path == "bstun")
    {
        bstun.yfilter = yfilter;
    }
    if(value_path == "bulkstat")
    {
        bulkstat.yfilter = yfilter;
    }
    if(value_path == "call-home")
    {
        call_home.yfilter = yfilter;
    }
    if(value_path == "casa")
    {
        casa.yfilter = yfilter;
    }
    if(value_path == "cef")
    {
        cef.yfilter = yfilter;
    }
    if(value_path == "cnpd")
    {
        cnpd.yfilter = yfilter;
    }
    if(value_path == "config")
    {
        config.yfilter = yfilter;
    }
    if(value_path == "config-copy")
    {
        config_copy.yfilter = yfilter;
    }
    if(value_path == "config-ctid")
    {
        config_ctid.yfilter = yfilter;
    }
    if(value_path == "cpu")
    {
        cpu.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "dlsw")
    {
        dlsw.yfilter = yfilter;
    }
    if(value_path == "ds1")
    {
        ds1.yfilter = yfilter;
    }
    if(value_path == "dsp")
    {
        dsp.yfilter = yfilter;
    }
    if(value_path == "dspu")
    {
        dspu.yfilter = yfilter;
    }
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "entity")
    {
        entity_.yfilter = yfilter;
    }
    if(value_path == "entity-diag")
    {
        entity_diag.yfilter = yfilter;
    }
    if(value_path == "entity-qfp")
    {
        entity_qfp.yfilter = yfilter;
    }
    if(value_path == "entity-state")
    {
        entity_state.yfilter = yfilter;
    }
    if(value_path == "ethernet-cfm")
    {
        ethernet_cfm.yfilter = yfilter;
    }
    if(value_path == "evc")
    {
        evc.yfilter = yfilter;
    }
    if(value_path == "event-manager")
    {
        event_manager.yfilter = yfilter;
    }
    if(value_path == "firewall")
    {
        firewall.yfilter = yfilter;
    }
    if(value_path == "flash")
    {
        flash.yfilter = yfilter;
    }
    if(value_path == "flowmon")
    {
        flowmon.yfilter = yfilter;
    }
    if(value_path == "frame-relay")
    {
        frame_relay.yfilter = yfilter;
    }
    if(value_path == "fru-ctrl")
    {
        fru_ctrl.yfilter = yfilter;
    }
    if(value_path == "gdoi")
    {
        gdoi.yfilter = yfilter;
    }
    if(value_path == "hsrp")
    {
        hsrp.yfilter = yfilter;
    }
    if(value_path == "iplocalpool")
    {
        iplocalpool.yfilter = yfilter;
    }
    if(value_path == "ipmulticast")
    {
        ipmulticast.yfilter = yfilter;
    }
    if(value_path == "ipsec")
    {
        ipsec.yfilter = yfilter;
    }
    if(value_path == "ipsla")
    {
        ipsla.yfilter = yfilter;
    }
    if(value_path == "isakmp")
    {
        isakmp.yfilter = yfilter;
    }
    if(value_path == "isg-mib")
    {
        isg_mib.yfilter = yfilter;
    }
    if(value_path == "isis")
    {
        isis.yfilter = yfilter;
    }
    if(value_path == "l2tun-pseudowire-status")
    {
        l2tun_pseudowire_status.yfilter = yfilter;
    }
    if(value_path == "l2tun-session")
    {
        l2tun_session.yfilter = yfilter;
    }
    if(value_path == "license")
    {
        license.yfilter = yfilter;
    }
    if(value_path == "memory")
    {
        memory.yfilter = yfilter;
    }
    if(value_path == "mpls-fast-reroute")
    {
        mpls_fast_reroute.yfilter = yfilter;
    }
    if(value_path == "mpls-ldp")
    {
        mpls_ldp.yfilter = yfilter;
    }
    if(value_path == "mpls-traffic-eng")
    {
        mpls_traffic_eng.yfilter = yfilter;
    }
    if(value_path == "mpls-vpn")
    {
        mpls_vpn.yfilter = yfilter;
    }
    if(value_path == "msdp")
    {
        msdp.yfilter = yfilter;
    }
    if(value_path == "mvpn")
    {
        mvpn.yfilter = yfilter;
    }
    if(value_path == "nhrp")
    {
        nhrp.yfilter = yfilter;
    }
    if(value_path == "ospf")
    {
        ospf.yfilter = yfilter;
    }
    if(value_path == "ospfv3")
    {
        ospfv3.yfilter = yfilter;
    }
    if(value_path == "pfr")
    {
        pfr.yfilter = yfilter;
    }
    if(value_path == "pim")
    {
        pim.yfilter = yfilter;
    }
    if(value_path == "pw-vc")
    {
        pw_vc.yfilter = yfilter;
    }
    if(value_path == "resource-policy")
    {
        resource_policy.yfilter = yfilter;
    }
    if(value_path == "rf")
    {
        rf.yfilter = yfilter;
    }
    if(value_path == "rsrb")
    {
        rsrb.yfilter = yfilter;
    }
    if(value_path == "rsvp")
    {
        rsvp.yfilter = yfilter;
    }
    if(value_path == "sdlc")
    {
        sdlc.yfilter = yfilter;
    }
    if(value_path == "sdllc")
    {
        sdllc.yfilter = yfilter;
    }
    if(value_path == "snmp")
    {
        snmp.yfilter = yfilter;
    }
    if(value_path == "sonet")
    {
        sonet.yfilter = yfilter;
    }
    if(value_path == "srp")
    {
        srp.yfilter = yfilter;
    }
    if(value_path == "stun")
    {
        stun.yfilter = yfilter;
    }
    if(value_path == "syslog")
    {
        syslog.yfilter = yfilter;
    }
    if(value_path == "trustsec-sxp")
    {
        trustsec_sxp.yfilter = yfilter;
    }
    if(value_path == "tty")
    {
        tty.yfilter = yfilter;
    }
    if(value_path == "udp-port")
    {
        udp_port.yfilter = yfilter;
    }
    if(value_path == "voice")
    {
        voice.yfilter = yfilter;
    }
    if(value_path == "vrfmib")
    {
        vrfmib.yfilter = yfilter;
    }
    if(value_path == "vrrp")
    {
        vrrp.yfilter = yfilter;
    }
    if(value_path == "x25")
    {
        x25.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Host::TrapEnable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa_server" || name == "alarms" || name == "atm" || name == "bfd" || name == "bgp" || name == "bstun" || name == "bulkstat" || name == "call-home" || name == "casa" || name == "cef" || name == "cnpd" || name == "config" || name == "config-copy" || name == "config-ctid" || name == "cpu" || name == "dhcp" || name == "dlsw" || name == "ds1" || name == "dsp" || name == "dspu" || name == "eigrp" || name == "entity" || name == "entity-diag" || name == "entity-qfp" || name == "entity-state" || name == "ethernet-cfm" || name == "evc" || name == "event-manager" || name == "firewall" || name == "flash" || name == "flowmon" || name == "frame-relay" || name == "fru-ctrl" || name == "gdoi" || name == "hsrp" || name == "iplocalpool" || name == "ipmulticast" || name == "ipsec" || name == "ipsla" || name == "isakmp" || name == "isg-mib" || name == "isis" || name == "l2tun-pseudowire-status" || name == "l2tun-session" || name == "license" || name == "memory" || name == "mpls-fast-reroute" || name == "mpls-ldp" || name == "mpls-traffic-eng" || name == "mpls-vpn" || name == "msdp" || name == "mvpn" || name == "nhrp" || name == "ospf" || name == "ospfv3" || name == "pfr" || name == "pim" || name == "pw-vc" || name == "resource-policy" || name == "rf" || name == "rsrb" || name == "rsvp" || name == "sdlc" || name == "sdllc" || name == "snmp" || name == "sonet" || name == "srp" || name == "stun" || name == "syslog" || name == "trustsec-sxp" || name == "tty" || name == "udp-port" || name == "voice" || name == "vrfmib" || name == "vrrp" || name == "x25")
        return true;
    return false;
}

Native::SnmpServer::Ifindex::Ifindex()
    :
    persist{YType::empty, "persist"}
{

    yang_name = "ifindex"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Ifindex::~Ifindex()
{
}

bool Native::SnmpServer::Ifindex::has_data() const
{
    return persist.is_set;
}

bool Native::SnmpServer::Ifindex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(persist.yfilter);
}

std::string Native::SnmpServer::Ifindex::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Ifindex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:ifindex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Ifindex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (persist.is_set || is_set(persist.yfilter)) leaf_name_data.push_back(persist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Ifindex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Ifindex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Ifindex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "persist")
    {
        persist = value;
        persist.value_namespace = name_space;
        persist.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Ifindex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "persist")
    {
        persist.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Ifindex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persist")
        return true;
    return false;
}

Native::SnmpServer::Ip::Ip()
    :
    dscp{YType::uint8, "dscp"},
    precedence{YType::uint8, "precedence"}
{

    yang_name = "ip"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Ip::~Ip()
{
}

bool Native::SnmpServer::Ip::has_data() const
{
    return dscp.is_set
	|| precedence.is_set;
}

bool Native::SnmpServer::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dscp.yfilter)
	|| ydk::is_set(precedence.yfilter);
}

std::string Native::SnmpServer::Ip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dscp.is_set || is_set(dscp.yfilter)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.yfilter)) leaf_name_data.push_back(precedence.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dscp")
    {
        dscp = value;
        dscp.value_namespace = name_space;
        dscp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "precedence")
    {
        precedence = value;
        precedence.value_namespace = name_space;
        precedence.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Ip::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::SnmpServer::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp" || name == "precedence")
        return true;
    return false;
}

Native::SnmpServer::Manager::Manager()
    :
    session_timeout{YType::uint32, "session-timeout"}
{

    yang_name = "manager"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Manager::~Manager()
{
}

bool Native::SnmpServer::Manager::has_data() const
{
    return session_timeout.is_set;
}

bool Native::SnmpServer::Manager::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_timeout.yfilter);
}

std::string Native::SnmpServer::Manager::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Manager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:manager";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Manager::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_timeout.is_set || is_set(session_timeout.yfilter)) leaf_name_data.push_back(session_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Manager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Manager::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Manager::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-timeout")
    {
        session_timeout = value;
        session_timeout.value_namespace = name_space;
        session_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Manager::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-timeout")
    {
        session_timeout.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Manager::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-timeout")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::SourceInterface()
    :
    informs(std::make_shared<Native::SnmpServer::SourceInterface::Informs>())
	,traps(std::make_shared<Native::SnmpServer::SourceInterface::Traps>())
{
    informs->parent = this;
    traps->parent = this;

    yang_name = "source-interface"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::SourceInterface::~SourceInterface()
{
}

bool Native::SnmpServer::SourceInterface::has_data() const
{
    return (informs !=  nullptr && informs->has_data())
	|| (traps !=  nullptr && traps->has_data());
}

bool Native::SnmpServer::SourceInterface::has_operation() const
{
    return is_set(yfilter)
	|| (informs !=  nullptr && informs->has_operation())
	|| (traps !=  nullptr && traps->has_operation());
}

std::string Native::SnmpServer::SourceInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::SourceInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "informs")
    {
        if(informs == nullptr)
        {
            informs = std::make_shared<Native::SnmpServer::SourceInterface::Informs>();
        }
        return informs;
    }

    if(child_yang_name == "traps")
    {
        if(traps == nullptr)
        {
            traps = std::make_shared<Native::SnmpServer::SourceInterface::Traps>();
        }
        return traps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(informs != nullptr)
    {
        children["informs"] = informs;
    }

    if(traps != nullptr)
    {
        children["traps"] = traps;
    }

    return children;
}

void Native::SnmpServer::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "informs" || name == "traps")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Informs::Informs()
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
    atm_acrsubinterface(std::make_shared<Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Informs::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Informs::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "informs"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::SourceInterface::Informs::~Informs()
{
}

bool Native::SnmpServer::SourceInterface::Informs::has_data() const
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

bool Native::SnmpServer::SourceInterface::Informs::has_operation() const
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

std::string Native::SnmpServer::SourceInterface::Informs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::SourceInterface::Informs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "informs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::SourceInterface::Informs::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Informs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::SnmpServer::SourceInterface::Informs::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::SnmpServer::SourceInterface::Informs::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Informs::get_children() const
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

void Native::SnmpServer::SourceInterface::Informs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::SnmpServer::SourceInterface::Informs::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::SnmpServer::SourceInterface::Informs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "informs"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/informs/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Informs::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "informs"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::SourceInterface::Informs::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Informs::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::SnmpServer::SourceInterface::Informs::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::SnmpServer::SourceInterface::Informs::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/informs/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::SourceInterface::Informs::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::SourceInterface::Informs::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Informs::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Informs::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::SourceInterface::Informs::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::SourceInterface::Informs::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Informs::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Informs::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "informs"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::SourceInterface::Informs::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Informs::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::SnmpServer::SourceInterface::Informs::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::SnmpServer::SourceInterface::Informs::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/informs/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::SourceInterface::Informs::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::SourceInterface::Informs::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Informs::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Informs::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::SourceInterface::Informs::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::SourceInterface::Informs::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Informs::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "informs"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/informs/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Traps::Traps()
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
    atm_acrsubinterface(std::make_shared<Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Traps::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Traps::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "traps"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::SourceInterface::Traps::~Traps()
{
}

bool Native::SnmpServer::SourceInterface::Traps::has_data() const
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

bool Native::SnmpServer::SourceInterface::Traps::has_operation() const
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

std::string Native::SnmpServer::SourceInterface::Traps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::SourceInterface::Traps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::SourceInterface::Traps::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Traps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::SnmpServer::SourceInterface::Traps::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::SnmpServer::SourceInterface::Traps::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Traps::get_children() const
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

void Native::SnmpServer::SourceInterface::Traps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::SnmpServer::SourceInterface::Traps::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::SnmpServer::SourceInterface::Traps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Traps::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::SourceInterface::Traps::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Traps::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::SnmpServer::SourceInterface::Traps::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::SnmpServer::SourceInterface::Traps::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::SourceInterface::Traps::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::SourceInterface::Traps::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Traps::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Traps::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::SourceInterface::Traps::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::SourceInterface::Traps::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Traps::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Traps::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::SourceInterface::Traps::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Traps::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::SnmpServer::SourceInterface::Traps::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::SnmpServer::SourceInterface::Traps::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::SourceInterface::Traps::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::SourceInterface::Traps::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Traps::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Traps::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::SourceInterface::Traps::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::SourceInterface::Traps::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Traps::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "traps"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:source-interface/traps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::SnmpServer::Trap::Trap()
    :
    timeout{YType::uint16, "timeout"}
    	,
    link(std::make_shared<Native::SnmpServer::Trap::Link>())
{
    link->parent = this;

    yang_name = "trap"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Trap::~Trap()
{
}

bool Native::SnmpServer::Trap::has_data() const
{
    return timeout.is_set
	|| (link !=  nullptr && link->has_data());
}

bool Native::SnmpServer::Trap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| (link !=  nullptr && link->has_operation());
}

std::string Native::SnmpServer::Trap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:trap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Trap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link")
    {
        if(link == nullptr)
        {
            link = std::make_shared<Native::SnmpServer::Trap::Link>();
        }
        return link;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link != nullptr)
    {
        children["link"] = link;
    }

    return children;
}

void Native::SnmpServer::Trap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Trap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Trap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "link" || name == "timeout")
        return true;
    return false;
}

Native::SnmpServer::Trap::Link::Link()
    :
    ietf{YType::empty, "ietf"},
    switchover{YType::empty, "switchover"}
{

    yang_name = "link"; yang_parent_name = "trap"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::Trap::Link::~Link()
{
}

bool Native::SnmpServer::Trap::Link::has_data() const
{
    return ietf.is_set
	|| switchover.is_set;
}

bool Native::SnmpServer::Trap::Link::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ietf.yfilter)
	|| ydk::is_set(switchover.yfilter);
}

std::string Native::SnmpServer::Trap::Link::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:trap/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::Trap::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::Trap::Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ietf.is_set || is_set(ietf.yfilter)) leaf_name_data.push_back(ietf.get_name_leafdata());
    if (switchover.is_set || is_set(switchover.yfilter)) leaf_name_data.push_back(switchover.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::Trap::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::Trap::Link::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::Trap::Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ietf")
    {
        ietf = value;
        ietf.value_namespace = name_space;
        ietf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switchover")
    {
        switchover = value;
        switchover.value_namespace = name_space;
        switchover.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Trap::Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ietf")
    {
        ietf.yfilter = yfilter;
    }
    if(value_path == "switchover")
    {
        switchover.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Trap::Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ietf" || name == "switchover")
        return true;
    return false;
}

Native::SnmpServer::TrapSource::TrapSource()
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
    atm_acrsubinterface(std::make_shared<Native::SnmpServer::TrapSource::ATMACRsubinterface>())
	,atm_subinterface(std::make_shared<Native::SnmpServer::TrapSource::ATMSubinterface>())
	,lisp_subinterface(std::make_shared<Native::SnmpServer::TrapSource::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::SnmpServer::TrapSource::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;
    atm_subinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "trap-source"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::TrapSource::~TrapSource()
{
}

bool Native::SnmpServer::TrapSource::has_data() const
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

bool Native::SnmpServer::TrapSource::has_operation() const
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

std::string Native::SnmpServer::TrapSource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::TrapSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:trap-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::TrapSource::get_name_leaf_data() const
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

std::shared_ptr<Entity> Native::SnmpServer::TrapSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::SnmpServer::TrapSource::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::SnmpServer::TrapSource::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::SnmpServer::TrapSource::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::SnmpServer::TrapSource::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::TrapSource::get_children() const
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

void Native::SnmpServer::TrapSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::SnmpServer::TrapSource::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::SnmpServer::TrapSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::SnmpServer::TrapSource::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "trap-source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::TrapSource::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::SnmpServer::TrapSource::ATMACRsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::SnmpServer::TrapSource::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::SnmpServer::TrapSource::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:trap-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::TrapSource::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::TrapSource::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::TrapSource::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::TrapSource::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::TrapSource::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::TrapSource::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::SnmpServer::TrapSource::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::SnmpServer::TrapSource::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "trap-source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::TrapSource::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::SnmpServer::TrapSource::ATMSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::SnmpServer::TrapSource::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::SnmpServer::TrapSource::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:trap-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::TrapSource::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::TrapSource::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::TrapSource::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::TrapSource::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::TrapSource::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::TrapSource::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::SnmpServer::TrapSource::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::SnmpServer::TrapSource::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "trap-source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::TrapSource::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::SnmpServer::TrapSource::LISPSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::SnmpServer::TrapSource::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::SnmpServer::TrapSource::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:trap-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::TrapSource::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::TrapSource::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::TrapSource::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::TrapSource::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::TrapSource::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::TrapSource::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::SnmpServer::TrapSource::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::SnmpServer::TrapSource::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "trap-source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::TrapSource::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::SnmpServer::TrapSource::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::SnmpServer::TrapSource::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::SnmpServer::TrapSource::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:trap-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::TrapSource::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::TrapSource::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::TrapSource::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::TrapSource::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::TrapSource::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::TrapSource::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::SnmpServer::TrapSource::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::SnmpServer::User::User()
{

    yang_name = "user"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::User::~User()
{
}

bool Native::SnmpServer::User::has_data() const
{
    for (std::size_t index=0; index<names.size(); index++)
    {
        if(names[index]->has_data())
            return true;
    }
    return false;
}

bool Native::SnmpServer::User::has_operation() const
{
    for (std::size_t index=0; index<names.size(); index++)
    {
        if(names[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::SnmpServer::User::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:user";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::User::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "names")
    {
        for(auto const & c : names)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SnmpServer::User::Names>();
        c->parent = this;
        names.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : names)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::SnmpServer::User::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::User::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::User::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "names")
        return true;
    return false;
}

Native::SnmpServer::User::Names::Names()
    :
    username{YType::str, "username"},
    grpname{YType::str, "grpname"}
    	,
    v3(nullptr) // presence node
{

    yang_name = "names"; yang_parent_name = "user"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::User::Names::~Names()
{
}

bool Native::SnmpServer::User::Names::has_data() const
{
    return username.is_set
	|| grpname.is_set
	|| (v3 !=  nullptr && v3->has_data());
}

bool Native::SnmpServer::User::Names::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(grpname.yfilter)
	|| (v3 !=  nullptr && v3->has_operation());
}

std::string Native::SnmpServer::User::Names::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/Cisco-IOS-XE-snmp:user/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::User::Names::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "names" <<"[username='" <<username <<"']" <<"[grpname='" <<grpname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::User::Names::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (grpname.is_set || is_set(grpname.yfilter)) leaf_name_data.push_back(grpname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "v3")
    {
        if(v3 == nullptr)
        {
            v3 = std::make_shared<Native::SnmpServer::User::Names::V3>();
        }
        return v3;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(v3 != nullptr)
    {
        children["v3"] = v3;
    }

    return children;
}

void Native::SnmpServer::User::Names::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "grpname")
    {
        grpname = value;
        grpname.value_namespace = name_space;
        grpname.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::User::Names::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "grpname")
    {
        grpname.yfilter = yfilter;
    }
}

bool Native::SnmpServer::User::Names::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "v3" || name == "username" || name == "grpname")
        return true;
    return false;
}

Native::SnmpServer::User::Names::V3::V3()
    :
    auth(std::make_shared<Native::SnmpServer::User::Names::V3::Auth>())
{
    auth->parent = this;

    yang_name = "v3"; yang_parent_name = "names"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SnmpServer::User::Names::V3::~V3()
{
}

bool Native::SnmpServer::User::Names::V3::has_data() const
{
    return (auth !=  nullptr && auth->has_data());
}

bool Native::SnmpServer::User::Names::V3::has_operation() const
{
    return is_set(yfilter)
	|| (auth !=  nullptr && auth->has_operation());
}

std::string Native::SnmpServer::User::Names::V3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v3";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::User::Names::V3::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::V3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth")
    {
        if(auth == nullptr)
        {
            auth = std::make_shared<Native::SnmpServer::User::Names::V3::Auth>();
        }
        return auth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::V3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auth != nullptr)
    {
        children["auth"] = auth;
    }

    return children;
}

void Native::SnmpServer::User::Names::V3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::User::Names::V3::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::User::Names::V3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth")
        return true;
    return false;
}

Native::SnmpServer::User::Names::V3::Auth::Auth()
    :
    sha(std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha>())
{
    sha->parent = this;

    yang_name = "auth"; yang_parent_name = "v3"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SnmpServer::User::Names::V3::Auth::~Auth()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::has_data() const
{
    return (sha !=  nullptr && sha->has_data());
}

bool Native::SnmpServer::User::Names::V3::Auth::has_operation() const
{
    return is_set(yfilter)
	|| (sha !=  nullptr && sha->has_operation());
}

std::string Native::SnmpServer::User::Names::V3::Auth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::User::Names::V3::Auth::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::V3::Auth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sha")
    {
        if(sha == nullptr)
        {
            sha = std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha>();
        }
        return sha;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::V3::Auth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sha != nullptr)
    {
        children["sha"] = sha;
    }

    return children;
}

void Native::SnmpServer::User::Names::V3::Auth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::User::Names::V3::Auth::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::User::Names::V3::Auth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sha")
        return true;
    return false;
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Sha()
    :
    auth(std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_>())
{
    auth->parent = this;

    yang_name = "sha"; yang_parent_name = "auth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SnmpServer::User::Names::V3::Auth::Sha::~Sha()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::has_data() const
{
    return (auth !=  nullptr && auth->has_data());
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::has_operation() const
{
    return is_set(yfilter)
	|| (auth !=  nullptr && auth->has_operation());
}

std::string Native::SnmpServer::User::Names::V3::Auth::Sha::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sha";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::User::Names::V3::Auth::Sha::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::V3::Auth::Sha::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth")
    {
        if(auth == nullptr)
        {
            auth = std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_>();
        }
        return auth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::V3::Auth::Sha::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auth != nullptr)
    {
        children["auth"] = auth;
    }

    return children;
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auth")
        return true;
    return false;
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Auth_()
    :
    authpass{YType::str, "authpass"}
    	,
    priv(std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv>())
{
    priv->parent = this;

    yang_name = "auth"; yang_parent_name = "sha"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::~Auth_()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::has_data() const
{
    return authpass.is_set
	|| (priv !=  nullptr && priv->has_data());
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authpass.yfilter)
	|| (priv !=  nullptr && priv->has_operation());
}

std::string Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authpass.is_set || is_set(authpass.yfilter)) leaf_name_data.push_back(authpass.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priv")
    {
        if(priv == nullptr)
        {
            priv = std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv>();
        }
        return priv;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priv != nullptr)
    {
        children["priv"] = priv;
    }

    return children;
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authpass")
    {
        authpass = value;
        authpass.value_namespace = name_space;
        authpass.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authpass")
    {
        authpass.yfilter = yfilter;
    }
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priv" || name == "authpass")
        return true;
    return false;
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Priv()
    :
    aes(std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes>())
{
    aes->parent = this;

    yang_name = "priv"; yang_parent_name = "auth"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::~Priv()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::has_data() const
{
    return (aes !=  nullptr && aes->has_data());
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::has_operation() const
{
    return is_set(yfilter)
	|| (aes !=  nullptr && aes->has_operation());
}

std::string Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aes")
    {
        if(aes == nullptr)
        {
            aes = std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes>();
        }
        return aes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aes != nullptr)
    {
        children["aes"] = aes;
    }

    return children;
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aes")
        return true;
    return false;
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Aes()
    :
    algo128(std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128>())
{
    algo128->parent = this;

    yang_name = "aes"; yang_parent_name = "priv"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::~Aes()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::has_data() const
{
    return (algo128 !=  nullptr && algo128->has_data());
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::has_operation() const
{
    return is_set(yfilter)
	|| (algo128 !=  nullptr && algo128->has_operation());
}

std::string Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "algo128")
    {
        if(algo128 == nullptr)
        {
            algo128 = std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128>();
        }
        return algo128;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(algo128 != nullptr)
    {
        children["algo128"] = algo128;
    }

    return children;
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "algo128")
        return true;
    return false;
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Algo128()
    :
    privpass(std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass>())
{
    privpass->parent = this;

    yang_name = "algo128"; yang_parent_name = "aes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::~Algo128()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::has_data() const
{
    return (privpass !=  nullptr && privpass->has_data());
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::has_operation() const
{
    return is_set(yfilter)
	|| (privpass !=  nullptr && privpass->has_operation());
}

std::string Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algo128";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "privpass")
    {
        if(privpass == nullptr)
        {
            privpass = std::make_shared<Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass>();
        }
        return privpass;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(privpass != nullptr)
    {
        children["privpass"] = privpass;
    }

    return children;
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "privpass")
        return true;
    return false;
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::Privpass()
    :
    access{YType::str, "access"},
    privpass{YType::str, "privpass"}
{

    yang_name = "privpass"; yang_parent_name = "algo128"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::~Privpass()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::has_data() const
{
    return access.is_set
	|| privpass.is_set;
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access.yfilter)
	|| ydk::is_set(privpass.yfilter);
}

std::string Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privpass";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());
    if (privpass.is_set || is_set(privpass.yfilter)) leaf_name_data.push_back(privpass.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "privpass")
    {
        privpass = value;
        privpass.value_namespace = name_space;
        privpass.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
    if(value_path == "privpass")
    {
        privpass.yfilter = yfilter;
    }
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "privpass")
        return true;
    return false;
}

Native::SnmpServer::View::View()
    :
    name{YType::str, "name"},
    mib{YType::str, "mib"},
    inc_exl{YType::enumeration, "inc-exl"}
{

    yang_name = "view"; yang_parent_name = "snmp-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SnmpServer::View::~View()
{
}

bool Native::SnmpServer::View::has_data() const
{
    return name.is_set
	|| mib.is_set
	|| inc_exl.is_set;
}

bool Native::SnmpServer::View::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mib.yfilter)
	|| ydk::is_set(inc_exl.yfilter);
}

std::string Native::SnmpServer::View::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/snmp-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SnmpServer::View::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:view" <<"[name='" <<name <<"']" <<"[mib='" <<mib <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SnmpServer::View::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mib.is_set || is_set(mib.yfilter)) leaf_name_data.push_back(mib.get_name_leafdata());
    if (inc_exl.is_set || is_set(inc_exl.yfilter)) leaf_name_data.push_back(inc_exl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::View::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SnmpServer::View::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SnmpServer::View::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mib")
    {
        mib = value;
        mib.value_namespace = name_space;
        mib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inc-exl")
    {
        inc_exl = value;
        inc_exl.value_namespace = name_space;
        inc_exl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::View::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "mib")
    {
        mib.yfilter = yfilter;
    }
    if(value_path == "inc-exl")
    {
        inc_exl.yfilter = yfilter;
    }
}

bool Native::SnmpServer::View::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "mib" || name == "inc-exl")
        return true;
    return false;
}

Native::Software::Software()
    :
    auto_upgrade(std::make_shared<Native::Software::AutoUpgrade>())
{
    auto_upgrade->parent = this;

    yang_name = "software"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Software::~Software()
{
}

bool Native::Software::has_data() const
{
    return (auto_upgrade !=  nullptr && auto_upgrade->has_data());
}

bool Native::Software::has_operation() const
{
    return is_set(yfilter)
	|| (auto_upgrade !=  nullptr && auto_upgrade->has_operation());
}

std::string Native::Software::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Software::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "software";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Software::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Software::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-upgrade")
    {
        if(auto_upgrade == nullptr)
        {
            auto_upgrade = std::make_shared<Native::Software::AutoUpgrade>();
        }
        return auto_upgrade;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Software::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_upgrade != nullptr)
    {
        children["auto-upgrade"] = auto_upgrade;
    }

    return children;
}

void Native::Software::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Software::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Software::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-upgrade")
        return true;
    return false;
}

Native::Software::AutoUpgrade::AutoUpgrade()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "auto-upgrade"; yang_parent_name = "software"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Software::AutoUpgrade::~AutoUpgrade()
{
}

bool Native::Software::AutoUpgrade::has_data() const
{
    return enable.is_set;
}

bool Native::Software::AutoUpgrade::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Software::AutoUpgrade::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/software/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Software::AutoUpgrade::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-upgrade";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Software::AutoUpgrade::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Software::AutoUpgrade::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Software::AutoUpgrade::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Software::AutoUpgrade::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Software::AutoUpgrade::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Software::AutoUpgrade::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::SpanningTree::SpanningTree()
    :
    backbonefast{YType::empty, "Cisco-IOS-XE-spanning-tree:backbonefast"},
    logging{YType::empty, "Cisco-IOS-XE-spanning-tree:logging"},
    mode{YType::enumeration, "Cisco-IOS-XE-spanning-tree:mode"}
    	,
    bridge(std::make_shared<Native::SpanningTree::Bridge>())
	,etherchannel(std::make_shared<Native::SpanningTree::Etherchannel>())
	,extend(std::make_shared<Native::SpanningTree::Extend>())
	,loopguard(std::make_shared<Native::SpanningTree::Loopguard>())
	,mst(std::make_shared<Native::SpanningTree::Mst>())
	,optimize(std::make_shared<Native::SpanningTree::Optimize>())
	,pathcost(std::make_shared<Native::SpanningTree::Pathcost>())
	,portfast(std::make_shared<Native::SpanningTree::Portfast>())
	,transmit(std::make_shared<Native::SpanningTree::Transmit>())
	,uplinkfast(nullptr) // presence node
{
    bridge->parent = this;
    etherchannel->parent = this;
    extend->parent = this;
    loopguard->parent = this;
    mst->parent = this;
    optimize->parent = this;
    pathcost->parent = this;
    portfast->parent = this;
    transmit->parent = this;

    yang_name = "spanning-tree"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::~SpanningTree()
{
}

bool Native::SpanningTree::has_data() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return backbonefast.is_set
	|| logging.is_set
	|| mode.is_set
	|| (bridge !=  nullptr && bridge->has_data())
	|| (etherchannel !=  nullptr && etherchannel->has_data())
	|| (extend !=  nullptr && extend->has_data())
	|| (loopguard !=  nullptr && loopguard->has_data())
	|| (mst !=  nullptr && mst->has_data())
	|| (optimize !=  nullptr && optimize->has_data())
	|| (pathcost !=  nullptr && pathcost->has_data())
	|| (portfast !=  nullptr && portfast->has_data())
	|| (transmit !=  nullptr && transmit->has_data())
	|| (uplinkfast !=  nullptr && uplinkfast->has_data());
}

bool Native::SpanningTree::has_operation() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(backbonefast.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (bridge !=  nullptr && bridge->has_operation())
	|| (etherchannel !=  nullptr && etherchannel->has_operation())
	|| (extend !=  nullptr && extend->has_operation())
	|| (loopguard !=  nullptr && loopguard->has_operation())
	|| (mst !=  nullptr && mst->has_operation())
	|| (optimize !=  nullptr && optimize->has_operation())
	|| (pathcost !=  nullptr && pathcost->has_operation())
	|| (portfast !=  nullptr && portfast->has_operation())
	|| (transmit !=  nullptr && transmit->has_operation())
	|| (uplinkfast !=  nullptr && uplinkfast->has_operation());
}

std::string Native::SpanningTree::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backbonefast.is_set || is_set(backbonefast.yfilter)) leaf_name_data.push_back(backbonefast.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge")
    {
        if(bridge == nullptr)
        {
            bridge = std::make_shared<Native::SpanningTree::Bridge>();
        }
        return bridge;
    }

    if(child_yang_name == "etherchannel")
    {
        if(etherchannel == nullptr)
        {
            etherchannel = std::make_shared<Native::SpanningTree::Etherchannel>();
        }
        return etherchannel;
    }

    if(child_yang_name == "extend")
    {
        if(extend == nullptr)
        {
            extend = std::make_shared<Native::SpanningTree::Extend>();
        }
        return extend;
    }

    if(child_yang_name == "loopguard")
    {
        if(loopguard == nullptr)
        {
            loopguard = std::make_shared<Native::SpanningTree::Loopguard>();
        }
        return loopguard;
    }

    if(child_yang_name == "mst")
    {
        if(mst == nullptr)
        {
            mst = std::make_shared<Native::SpanningTree::Mst>();
        }
        return mst;
    }

    if(child_yang_name == "optimize")
    {
        if(optimize == nullptr)
        {
            optimize = std::make_shared<Native::SpanningTree::Optimize>();
        }
        return optimize;
    }

    if(child_yang_name == "pathcost")
    {
        if(pathcost == nullptr)
        {
            pathcost = std::make_shared<Native::SpanningTree::Pathcost>();
        }
        return pathcost;
    }

    if(child_yang_name == "portfast")
    {
        if(portfast == nullptr)
        {
            portfast = std::make_shared<Native::SpanningTree::Portfast>();
        }
        return portfast;
    }

    if(child_yang_name == "transmit")
    {
        if(transmit == nullptr)
        {
            transmit = std::make_shared<Native::SpanningTree::Transmit>();
        }
        return transmit;
    }

    if(child_yang_name == "uplinkfast")
    {
        if(uplinkfast == nullptr)
        {
            uplinkfast = std::make_shared<Native::SpanningTree::Uplinkfast>();
        }
        return uplinkfast;
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
        auto c = std::make_shared<Native::SpanningTree::Vlan>();
        c->parent = this;
        vlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bridge != nullptr)
    {
        children["bridge"] = bridge;
    }

    if(etherchannel != nullptr)
    {
        children["etherchannel"] = etherchannel;
    }

    if(extend != nullptr)
    {
        children["extend"] = extend;
    }

    if(loopguard != nullptr)
    {
        children["loopguard"] = loopguard;
    }

    if(mst != nullptr)
    {
        children["mst"] = mst;
    }

    if(optimize != nullptr)
    {
        children["optimize"] = optimize;
    }

    if(pathcost != nullptr)
    {
        children["pathcost"] = pathcost;
    }

    if(portfast != nullptr)
    {
        children["portfast"] = portfast;
    }

    if(transmit != nullptr)
    {
        children["transmit"] = transmit;
    }

    if(uplinkfast != nullptr)
    {
        children["uplinkfast"] = uplinkfast;
    }

    for (auto const & c : vlan)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backbonefast")
    {
        backbonefast = value;
        backbonefast.value_namespace = name_space;
        backbonefast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backbonefast")
    {
        backbonefast.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge" || name == "etherchannel" || name == "extend" || name == "loopguard" || name == "mst" || name == "optimize" || name == "pathcost" || name == "portfast" || name == "transmit" || name == "uplinkfast" || name == "vlan" || name == "backbonefast" || name == "logging" || name == "mode")
        return true;
    return false;
}

Native::SpanningTree::Bridge::Bridge()
    :
    id{YType::str, "ID"},
    priority{YType::uint8, "priority"}
{

    yang_name = "bridge"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Bridge::~Bridge()
{
}

bool Native::SpanningTree::Bridge::has_data() const
{
    return id.is_set
	|| priority.is_set;
}

bool Native::SpanningTree::Bridge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::SpanningTree::Bridge::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Bridge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:bridge";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Bridge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Bridge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Bridge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Bridge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ID")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Bridge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ID")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Bridge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ID" || name == "priority")
        return true;
    return false;
}

Native::SpanningTree::Etherchannel::Etherchannel()
    :
    guard(std::make_shared<Native::SpanningTree::Etherchannel::Guard>())
{
    guard->parent = this;

    yang_name = "etherchannel"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Etherchannel::~Etherchannel()
{
}

bool Native::SpanningTree::Etherchannel::has_data() const
{
    return (guard !=  nullptr && guard->has_data());
}

bool Native::SpanningTree::Etherchannel::has_operation() const
{
    return is_set(yfilter)
	|| (guard !=  nullptr && guard->has_operation());
}

std::string Native::SpanningTree::Etherchannel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Etherchannel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:etherchannel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Etherchannel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Etherchannel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "guard")
    {
        if(guard == nullptr)
        {
            guard = std::make_shared<Native::SpanningTree::Etherchannel::Guard>();
        }
        return guard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Etherchannel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(guard != nullptr)
    {
        children["guard"] = guard;
    }

    return children;
}

void Native::SpanningTree::Etherchannel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SpanningTree::Etherchannel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SpanningTree::Etherchannel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "guard")
        return true;
    return false;
}

Native::SpanningTree::Etherchannel::Guard::Guard()
    :
    misconfig{YType::empty, "misconfig"}
{

    yang_name = "guard"; yang_parent_name = "etherchannel"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Etherchannel::Guard::~Guard()
{
}

bool Native::SpanningTree::Etherchannel::Guard::has_data() const
{
    return misconfig.is_set;
}

bool Native::SpanningTree::Etherchannel::Guard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(misconfig.yfilter);
}

std::string Native::SpanningTree::Etherchannel::Guard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:etherchannel/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Etherchannel::Guard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Etherchannel::Guard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (misconfig.is_set || is_set(misconfig.yfilter)) leaf_name_data.push_back(misconfig.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Etherchannel::Guard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Etherchannel::Guard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Etherchannel::Guard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "misconfig")
    {
        misconfig = value;
        misconfig.value_namespace = name_space;
        misconfig.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Etherchannel::Guard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "misconfig")
    {
        misconfig.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Etherchannel::Guard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "misconfig")
        return true;
    return false;
}

Native::SpanningTree::Extend::Extend()
    :
    system_id{YType::empty, "system-id"}
{

    yang_name = "extend"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Extend::~Extend()
{
}

bool Native::SpanningTree::Extend::has_data() const
{
    return system_id.is_set;
}

bool Native::SpanningTree::Extend::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter);
}

std::string Native::SpanningTree::Extend::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Extend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:extend";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Extend::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Extend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Extend::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Extend::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Extend::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Extend::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id")
        return true;
    return false;
}

Native::SpanningTree::Loopguard::Loopguard()
    :
    default_{YType::empty, "default"}
{

    yang_name = "loopguard"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Loopguard::~Loopguard()
{
}

bool Native::SpanningTree::Loopguard::has_data() const
{
    return default_.is_set;
}

bool Native::SpanningTree::Loopguard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::SpanningTree::Loopguard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Loopguard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:loopguard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Loopguard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Loopguard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Loopguard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Loopguard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Loopguard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Loopguard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::SpanningTree::Mst::Mst()
    :
    forward_time{YType::uint8, "forward-time"},
    hello_time{YType::uint8, "hello-time"},
    max_age{YType::uint8, "max-age"},
    max_hops{YType::uint8, "max-hops"}
    	,
    configuration(std::make_shared<Native::SpanningTree::Mst::Configuration>())
{
    configuration->parent = this;

    yang_name = "mst"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Mst::~Mst()
{
}

bool Native::SpanningTree::Mst::has_data() const
{
    for (std::size_t index=0; index<instance_range.size(); index++)
    {
        if(instance_range[index]->has_data())
            return true;
    }
    return forward_time.is_set
	|| hello_time.is_set
	|| max_age.is_set
	|| max_hops.is_set
	|| (configuration !=  nullptr && configuration->has_data());
}

bool Native::SpanningTree::Mst::has_operation() const
{
    for (std::size_t index=0; index<instance_range.size(); index++)
    {
        if(instance_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(forward_time.yfilter)
	|| ydk::is_set(hello_time.yfilter)
	|| ydk::is_set(max_age.yfilter)
	|| ydk::is_set(max_hops.yfilter)
	|| (configuration !=  nullptr && configuration->has_operation());
}

std::string Native::SpanningTree::Mst::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Mst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:mst";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Mst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forward_time.is_set || is_set(forward_time.yfilter)) leaf_name_data.push_back(forward_time.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.yfilter)) leaf_name_data.push_back(hello_time.get_name_leafdata());
    if (max_age.is_set || is_set(max_age.yfilter)) leaf_name_data.push_back(max_age.get_name_leafdata());
    if (max_hops.is_set || is_set(max_hops.yfilter)) leaf_name_data.push_back(max_hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Mst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::SpanningTree::Mst::Configuration>();
        }
        return configuration;
    }

    if(child_yang_name == "instance-range")
    {
        for(auto const & c : instance_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SpanningTree::Mst::InstanceRange>();
        c->parent = this;
        instance_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Mst::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configuration != nullptr)
    {
        children["configuration"] = configuration;
    }

    for (auto const & c : instance_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::SpanningTree::Mst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "forward-time")
    {
        forward_time = value;
        forward_time.value_namespace = name_space;
        forward_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
        hello_time.value_namespace = name_space;
        hello_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-age")
    {
        max_age = value;
        max_age.value_namespace = name_space;
        max_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-hops")
    {
        max_hops = value;
        max_hops.value_namespace = name_space;
        max_hops.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Mst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "forward-time")
    {
        forward_time.yfilter = yfilter;
    }
    if(value_path == "hello-time")
    {
        hello_time.yfilter = yfilter;
    }
    if(value_path == "max-age")
    {
        max_age.yfilter = yfilter;
    }
    if(value_path == "max-hops")
    {
        max_hops.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Mst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration" || name == "instance-range" || name == "forward-time" || name == "hello-time" || name == "max-age" || name == "max-hops")
        return true;
    return false;
}

Native::SpanningTree::Mst::Configuration::Configuration()
    :
    name{YType::str, "name"},
    revision{YType::uint16, "revision"}
    	,
    private_vlan(std::make_shared<Native::SpanningTree::Mst::Configuration::PrivateVlan>())
{
    private_vlan->parent = this;

    yang_name = "configuration"; yang_parent_name = "mst"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Mst::Configuration::~Configuration()
{
}

bool Native::SpanningTree::Mst::Configuration::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return name.is_set
	|| revision.is_set
	|| (private_vlan !=  nullptr && private_vlan->has_data());
}

bool Native::SpanningTree::Mst::Configuration::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(revision.yfilter)
	|| (private_vlan !=  nullptr && private_vlan->has_operation());
}

std::string Native::SpanningTree::Mst::Configuration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:mst/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Mst::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Mst::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (revision.is_set || is_set(revision.yfilter)) leaf_name_data.push_back(revision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Mst::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        for(auto const & c : instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SpanningTree::Mst::Configuration::Instance>();
        c->parent = this;
        instance.push_back(c);
        return c;
    }

    if(child_yang_name == "private-vlan")
    {
        if(private_vlan == nullptr)
        {
            private_vlan = std::make_shared<Native::SpanningTree::Mst::Configuration::PrivateVlan>();
        }
        return private_vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Mst::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance)
    {
        children[c->get_segment_path()] = c;
    }

    if(private_vlan != nullptr)
    {
        children["private-vlan"] = private_vlan;
    }

    return children;
}

void Native::SpanningTree::Mst::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "revision")
    {
        revision = value;
        revision.value_namespace = name_space;
        revision.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Mst::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "revision")
    {
        revision.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Mst::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "private-vlan" || name == "name" || name == "revision")
        return true;
    return false;
}

Native::SpanningTree::Mst::Configuration::Instance::Instance()
    :
    id{YType::uint16, "id"},
    vlan{YType::str, "vlan"}
{

    yang_name = "instance"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Mst::Configuration::Instance::~Instance()
{
}

bool Native::SpanningTree::Mst::Configuration::Instance::has_data() const
{
    for (auto const & leaf : vlan.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return id.is_set;
}

bool Native::SpanningTree::Mst::Configuration::Instance::has_operation() const
{
    for (auto const & leaf : vlan.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::SpanningTree::Mst::Configuration::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:mst/configuration/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Mst::Configuration::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Mst::Configuration::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    auto vlan_name_datas = vlan.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), vlan_name_datas.begin(), vlan_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Mst::Configuration::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Mst::Configuration::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Mst::Configuration::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan.append(value);
    }
}

void Native::SpanningTree::Mst::Configuration::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Mst::Configuration::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "vlan")
        return true;
    return false;
}

Native::SpanningTree::Mst::Configuration::PrivateVlan::PrivateVlan()
    :
    synchronize{YType::empty, "synchronize"}
{

    yang_name = "private-vlan"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Mst::Configuration::PrivateVlan::~PrivateVlan()
{
}

bool Native::SpanningTree::Mst::Configuration::PrivateVlan::has_data() const
{
    return synchronize.is_set;
}

bool Native::SpanningTree::Mst::Configuration::PrivateVlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(synchronize.yfilter);
}

std::string Native::SpanningTree::Mst::Configuration::PrivateVlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:mst/configuration/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Mst::Configuration::PrivateVlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Mst::Configuration::PrivateVlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (synchronize.is_set || is_set(synchronize.yfilter)) leaf_name_data.push_back(synchronize.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Mst::Configuration::PrivateVlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Mst::Configuration::PrivateVlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Mst::Configuration::PrivateVlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "synchronize")
    {
        synchronize = value;
        synchronize.value_namespace = name_space;
        synchronize.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Mst::Configuration::PrivateVlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "synchronize")
    {
        synchronize.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Mst::Configuration::PrivateVlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "synchronize")
        return true;
    return false;
}

Native::SpanningTree::Mst::InstanceRange::InstanceRange()
    :
    id{YType::str, "id"},
    priority{YType::uint16, "priority"},
    root{YType::enumeration, "root"}
{

    yang_name = "instance-range"; yang_parent_name = "mst"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Mst::InstanceRange::~InstanceRange()
{
}

bool Native::SpanningTree::Mst::InstanceRange::has_data() const
{
    return id.is_set
	|| priority.is_set
	|| root.is_set;
}

bool Native::SpanningTree::Mst::InstanceRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(root.yfilter);
}

std::string Native::SpanningTree::Mst::InstanceRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:mst/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Mst::InstanceRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-range" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Mst::InstanceRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (root.is_set || is_set(root.yfilter)) leaf_name_data.push_back(root.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Mst::InstanceRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Mst::InstanceRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Mst::InstanceRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "root")
    {
        root = value;
        root.value_namespace = name_space;
        root.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Mst::InstanceRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "root")
    {
        root.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Mst::InstanceRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "priority" || name == "root")
        return true;
    return false;
}

Native::SpanningTree::Optimize::Optimize()
    :
    bpdu(std::make_shared<Native::SpanningTree::Optimize::Bpdu>())
{
    bpdu->parent = this;

    yang_name = "optimize"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Optimize::~Optimize()
{
}

bool Native::SpanningTree::Optimize::has_data() const
{
    return (bpdu !=  nullptr && bpdu->has_data());
}

bool Native::SpanningTree::Optimize::has_operation() const
{
    return is_set(yfilter)
	|| (bpdu !=  nullptr && bpdu->has_operation());
}

std::string Native::SpanningTree::Optimize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Optimize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:optimize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Optimize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Optimize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bpdu")
    {
        if(bpdu == nullptr)
        {
            bpdu = std::make_shared<Native::SpanningTree::Optimize::Bpdu>();
        }
        return bpdu;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Optimize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bpdu != nullptr)
    {
        children["bpdu"] = bpdu;
    }

    return children;
}

void Native::SpanningTree::Optimize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SpanningTree::Optimize::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SpanningTree::Optimize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpdu")
        return true;
    return false;
}

Native::SpanningTree::Optimize::Bpdu::Bpdu()
    :
    transmission{YType::boolean, "transmission"}
{

    yang_name = "bpdu"; yang_parent_name = "optimize"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Optimize::Bpdu::~Bpdu()
{
}

bool Native::SpanningTree::Optimize::Bpdu::has_data() const
{
    return transmission.is_set;
}

bool Native::SpanningTree::Optimize::Bpdu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmission.yfilter);
}

std::string Native::SpanningTree::Optimize::Bpdu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:optimize/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Optimize::Bpdu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bpdu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Optimize::Bpdu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmission.is_set || is_set(transmission.yfilter)) leaf_name_data.push_back(transmission.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Optimize::Bpdu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Optimize::Bpdu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Optimize::Bpdu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmission")
    {
        transmission = value;
        transmission.value_namespace = name_space;
        transmission.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Optimize::Bpdu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmission")
    {
        transmission.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Optimize::Bpdu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmission")
        return true;
    return false;
}

Native::SpanningTree::Pathcost::Pathcost()
    :
    method(std::make_shared<Native::SpanningTree::Pathcost::Method>())
{
    method->parent = this;

    yang_name = "pathcost"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Pathcost::~Pathcost()
{
}

bool Native::SpanningTree::Pathcost::has_data() const
{
    return (method !=  nullptr && method->has_data());
}

bool Native::SpanningTree::Pathcost::has_operation() const
{
    return is_set(yfilter)
	|| (method !=  nullptr && method->has_operation());
}

std::string Native::SpanningTree::Pathcost::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Pathcost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:pathcost";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Pathcost::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Pathcost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::SpanningTree::Pathcost::Method>();
        }
        return method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Pathcost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(method != nullptr)
    {
        children["method"] = method;
    }

    return children;
}

void Native::SpanningTree::Pathcost::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SpanningTree::Pathcost::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SpanningTree::Pathcost::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "method")
        return true;
    return false;
}

Native::SpanningTree::Pathcost::Method::Method()
    :
    long_{YType::empty, "long"},
    short_{YType::empty, "short"}
{

    yang_name = "method"; yang_parent_name = "pathcost"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Pathcost::Method::~Method()
{
}

bool Native::SpanningTree::Pathcost::Method::has_data() const
{
    return long_.is_set
	|| short_.is_set;
}

bool Native::SpanningTree::Pathcost::Method::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(long_.yfilter)
	|| ydk::is_set(short_.yfilter);
}

std::string Native::SpanningTree::Pathcost::Method::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/Cisco-IOS-XE-spanning-tree:pathcost/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Pathcost::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Pathcost::Method::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (long_.is_set || is_set(long_.yfilter)) leaf_name_data.push_back(long_.get_name_leafdata());
    if (short_.is_set || is_set(short_.yfilter)) leaf_name_data.push_back(short_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Pathcost::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Pathcost::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Pathcost::Method::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "long")
    {
        long_ = value;
        long_.value_namespace = name_space;
        long_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short")
    {
        short_ = value;
        short_.value_namespace = name_space;
        short_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Pathcost::Method::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "long")
    {
        long_.yfilter = yfilter;
    }
    if(value_path == "short")
    {
        short_.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Pathcost::Method::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "long" || name == "short")
        return true;
    return false;
}

Native::SpanningTree::Portfast::Portfast()
    :
    bdpu{YType::enumeration, "bdpu"},
    default_{YType::empty, "default"}
{

    yang_name = "portfast"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Portfast::~Portfast()
{
}

bool Native::SpanningTree::Portfast::has_data() const
{
    return bdpu.is_set
	|| default_.is_set;
}

bool Native::SpanningTree::Portfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bdpu.yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::SpanningTree::Portfast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Portfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:portfast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Portfast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bdpu.is_set || is_set(bdpu.yfilter)) leaf_name_data.push_back(bdpu.get_name_leafdata());
    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Portfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Portfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Portfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bdpu")
    {
        bdpu = value;
        bdpu.value_namespace = name_space;
        bdpu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Portfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bdpu")
    {
        bdpu.yfilter = yfilter;
    }
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Portfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bdpu" || name == "default")
        return true;
    return false;
}

Native::SpanningTree::Transmit::Transmit()
    :
    hold_count{YType::uint8, "hold-count"}
{

    yang_name = "transmit"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Transmit::~Transmit()
{
}

bool Native::SpanningTree::Transmit::has_data() const
{
    return hold_count.is_set;
}

bool Native::SpanningTree::Transmit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_count.yfilter);
}

std::string Native::SpanningTree::Transmit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Transmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:transmit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Transmit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_count.is_set || is_set(hold_count.yfilter)) leaf_name_data.push_back(hold_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Transmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Transmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Transmit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-count")
    {
        hold_count = value;
        hold_count.value_namespace = name_space;
        hold_count.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Transmit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-count")
    {
        hold_count.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Transmit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-count")
        return true;
    return false;
}

Native::SpanningTree::Uplinkfast::Uplinkfast()
    :
    max_update_rate{YType::uint32, "max-update-rate"}
{

    yang_name = "uplinkfast"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Uplinkfast::~Uplinkfast()
{
}

bool Native::SpanningTree::Uplinkfast::has_data() const
{
    return max_update_rate.is_set;
}

bool Native::SpanningTree::Uplinkfast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_update_rate.yfilter);
}

std::string Native::SpanningTree::Uplinkfast::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Uplinkfast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:uplinkfast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Uplinkfast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_update_rate.is_set || is_set(max_update_rate.yfilter)) leaf_name_data.push_back(max_update_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Uplinkfast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Uplinkfast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Uplinkfast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-update-rate")
    {
        max_update_rate = value;
        max_update_rate.value_namespace = name_space;
        max_update_rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Uplinkfast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-update-rate")
    {
        max_update_rate.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Uplinkfast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-update-rate")
        return true;
    return false;
}

Native::SpanningTree::Vlan::Vlan()
    :
    id{YType::str, "id"},
    forward_time{YType::uint8, "forward-time"},
    hello_time{YType::uint8, "hello-time"},
    max_age{YType::uint8, "max-age"},
    priority{YType::uint16, "priority"}
    	,
    root(std::make_shared<Native::SpanningTree::Vlan::Root>())
{
    root->parent = this;

    yang_name = "vlan"; yang_parent_name = "spanning-tree"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SpanningTree::Vlan::~Vlan()
{
}

bool Native::SpanningTree::Vlan::has_data() const
{
    return id.is_set
	|| forward_time.is_set
	|| hello_time.is_set
	|| max_age.is_set
	|| priority.is_set
	|| (root !=  nullptr && root->has_data());
}

bool Native::SpanningTree::Vlan::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(forward_time.yfilter)
	|| ydk::is_set(hello_time.yfilter)
	|| ydk::is_set(max_age.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (root !=  nullptr && root->has_operation());
}

std::string Native::SpanningTree::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/spanning-tree/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SpanningTree::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-spanning-tree:vlan" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (forward_time.is_set || is_set(forward_time.yfilter)) leaf_name_data.push_back(forward_time.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.yfilter)) leaf_name_data.push_back(hello_time.get_name_leafdata());
    if (max_age.is_set || is_set(max_age.yfilter)) leaf_name_data.push_back(max_age.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "root")
    {
        if(root == nullptr)
        {
            root = std::make_shared<Native::SpanningTree::Vlan::Root>();
        }
        return root;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(root != nullptr)
    {
        children["root"] = root;
    }

    return children;
}

void Native::SpanningTree::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-time")
    {
        forward_time = value;
        forward_time.value_namespace = name_space;
        forward_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
        hello_time.value_namespace = name_space;
        hello_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-age")
    {
        max_age = value;
        max_age.value_namespace = name_space;
        max_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "forward-time")
    {
        forward_time.yfilter = yfilter;
    }
    if(value_path == "hello-time")
    {
        hello_time.yfilter = yfilter;
    }
    if(value_path == "max-age")
    {
        max_age.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "root" || name == "id" || name == "forward-time" || name == "hello-time" || name == "max-age" || name == "priority")
        return true;
    return false;
}

Native::SpanningTree::Vlan::Root::Root()
    :
    primary(std::make_shared<Native::SpanningTree::Vlan::Root::Primary>())
	,secondary(std::make_shared<Native::SpanningTree::Vlan::Root::Secondary>())
{
    primary->parent = this;
    secondary->parent = this;

    yang_name = "root"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SpanningTree::Vlan::Root::~Root()
{
}

bool Native::SpanningTree::Vlan::Root::has_data() const
{
    return (primary !=  nullptr && primary->has_data())
	|| (secondary !=  nullptr && secondary->has_data());
}

bool Native::SpanningTree::Vlan::Root::has_operation() const
{
    return is_set(yfilter)
	|| (primary !=  nullptr && primary->has_operation())
	|| (secondary !=  nullptr && secondary->has_operation());
}

std::string Native::SpanningTree::Vlan::Root::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "root";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Vlan::Root::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Vlan::Root::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::SpanningTree::Vlan::Root::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "secondary")
    {
        if(secondary == nullptr)
        {
            secondary = std::make_shared<Native::SpanningTree::Vlan::Root::Secondary>();
        }
        return secondary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Vlan::Root::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(primary != nullptr)
    {
        children["primary"] = primary;
    }

    if(secondary != nullptr)
    {
        children["secondary"] = secondary;
    }

    return children;
}

void Native::SpanningTree::Vlan::Root::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SpanningTree::Vlan::Root::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SpanningTree::Vlan::Root::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "secondary")
        return true;
    return false;
}

Native::SpanningTree::Vlan::Root::Primary::Primary()
    :
    diameter{YType::uint8, "diameter"},
    hello_time{YType::uint8, "hello-time"}
{

    yang_name = "primary"; yang_parent_name = "root"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SpanningTree::Vlan::Root::Primary::~Primary()
{
}

bool Native::SpanningTree::Vlan::Root::Primary::has_data() const
{
    return diameter.is_set
	|| hello_time.is_set;
}

bool Native::SpanningTree::Vlan::Root::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diameter.yfilter)
	|| ydk::is_set(hello_time.yfilter);
}

std::string Native::SpanningTree::Vlan::Root::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Vlan::Root::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diameter.is_set || is_set(diameter.yfilter)) leaf_name_data.push_back(diameter.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.yfilter)) leaf_name_data.push_back(hello_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Vlan::Root::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Vlan::Root::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Vlan::Root::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diameter")
    {
        diameter = value;
        diameter.value_namespace = name_space;
        diameter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
        hello_time.value_namespace = name_space;
        hello_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Vlan::Root::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diameter")
    {
        diameter.yfilter = yfilter;
    }
    if(value_path == "hello-time")
    {
        hello_time.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Vlan::Root::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diameter" || name == "hello-time")
        return true;
    return false;
}

Native::SpanningTree::Vlan::Root::Secondary::Secondary()
    :
    diameter{YType::uint8, "diameter"},
    hello_time{YType::uint8, "hello-time"}
{

    yang_name = "secondary"; yang_parent_name = "root"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SpanningTree::Vlan::Root::Secondary::~Secondary()
{
}

bool Native::SpanningTree::Vlan::Root::Secondary::has_data() const
{
    return diameter.is_set
	|| hello_time.is_set;
}

bool Native::SpanningTree::Vlan::Root::Secondary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diameter.yfilter)
	|| ydk::is_set(hello_time.yfilter);
}

std::string Native::SpanningTree::Vlan::Root::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SpanningTree::Vlan::Root::Secondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diameter.is_set || is_set(diameter.yfilter)) leaf_name_data.push_back(diameter.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.yfilter)) leaf_name_data.push_back(hello_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SpanningTree::Vlan::Root::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SpanningTree::Vlan::Root::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SpanningTree::Vlan::Root::Secondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "diameter")
    {
        diameter = value;
        diameter.value_namespace = name_space;
        diameter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
        hello_time.value_namespace = name_space;
        hello_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SpanningTree::Vlan::Root::Secondary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diameter")
    {
        diameter.yfilter = yfilter;
    }
    if(value_path == "hello-time")
    {
        hello_time.yfilter = yfilter;
    }
}

bool Native::SpanningTree::Vlan::Root::Secondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diameter" || name == "hello-time")
        return true;
    return false;
}

Native::StackMac::StackMac()
    :
    persistent(std::make_shared<Native::StackMac::Persistent>())
{
    persistent->parent = this;

    yang_name = "stack-mac"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::StackMac::~StackMac()
{
}

bool Native::StackMac::has_data() const
{
    return (persistent !=  nullptr && persistent->has_data());
}

bool Native::StackMac::has_operation() const
{
    return is_set(yfilter)
	|| (persistent !=  nullptr && persistent->has_operation());
}

std::string Native::StackMac::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::StackMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:stack-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::StackMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::StackMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "persistent")
    {
        if(persistent == nullptr)
        {
            persistent = std::make_shared<Native::StackMac::Persistent>();
        }
        return persistent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::StackMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(persistent != nullptr)
    {
        children["persistent"] = persistent;
    }

    return children;
}

void Native::StackMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::StackMac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::StackMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "persistent")
        return true;
    return false;
}

Native::StackMac::Persistent::Persistent()
    :
    timer{YType::uint8, "timer"}
{

    yang_name = "persistent"; yang_parent_name = "stack-mac"; is_top_level_class = false; has_list_ancestor = false;
}

Native::StackMac::Persistent::~Persistent()
{
}

bool Native::StackMac::Persistent::has_data() const
{
    return timer.is_set;
}

bool Native::StackMac::Persistent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timer.yfilter);
}

std::string Native::StackMac::Persistent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/Cisco-IOS-XE-switch:stack-mac/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::StackMac::Persistent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "persistent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::StackMac::Persistent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timer.is_set || is_set(timer.yfilter)) leaf_name_data.push_back(timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::StackMac::Persistent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::StackMac::Persistent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::StackMac::Persistent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timer")
    {
        timer = value;
        timer.value_namespace = name_space;
        timer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::StackMac::Persistent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timer")
    {
        timer.yfilter = yfilter;
    }
}

bool Native::StackMac::Persistent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "timer")
        return true;
    return false;
}

Native::Subscriber::Subscriber()
    :
    templating{YType::empty, "templating"}
{

    yang_name = "subscriber"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Subscriber::~Subscriber()
{
}

bool Native::Subscriber::has_data() const
{
    return templating.is_set;
}

bool Native::Subscriber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(templating.yfilter);
}

std::string Native::Subscriber::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Subscriber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Subscriber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (templating.is_set || is_set(templating.yfilter)) leaf_name_data.push_back(templating.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Subscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Subscriber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Subscriber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "templating")
    {
        templating = value;
        templating.value_namespace = name_space;
        templating.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Subscriber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "templating")
    {
        templating.yfilter = yfilter;
    }
}

bool Native::Subscriber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "templating")
        return true;
    return false;
}

Native::SwitchVirtual::SwitchVirtual()
    :
    domain{YType::uint32, "domain"},
    virtual_{YType::empty, "virtual"}
    	,
    dual_active(std::make_shared<Native::SwitchVirtual::DualActive>())
	,mac_address(std::make_shared<Native::SwitchVirtual::MacAddress>())
	,switch_(std::make_shared<Native::SwitchVirtual::Switch_>())
{
    dual_active->parent = this;
    mac_address->parent = this;
    switch_->parent = this;

    yang_name = "switch-virtual"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SwitchVirtual::~SwitchVirtual()
{
}

bool Native::SwitchVirtual::has_data() const
{
    return domain.is_set
	|| virtual_.is_set
	|| (dual_active !=  nullptr && dual_active->has_data())
	|| (mac_address !=  nullptr && mac_address->has_data())
	|| (switch_ !=  nullptr && switch_->has_data());
}

bool Native::SwitchVirtual::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter)
	|| ydk::is_set(virtual_.yfilter)
	|| (dual_active !=  nullptr && dual_active->has_operation())
	|| (mac_address !=  nullptr && mac_address->has_operation())
	|| (switch_ !=  nullptr && switch_->has_operation());
}

std::string Native::SwitchVirtual::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SwitchVirtual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:switch-virtual" <<"[domain='" <<domain <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SwitchVirtual::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (virtual_.is_set || is_set(virtual_.yfilter)) leaf_name_data.push_back(virtual_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SwitchVirtual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dual-active")
    {
        if(dual_active == nullptr)
        {
            dual_active = std::make_shared<Native::SwitchVirtual::DualActive>();
        }
        return dual_active;
    }

    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<Native::SwitchVirtual::MacAddress>();
        }
        return mac_address;
    }

    if(child_yang_name == "switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::SwitchVirtual::Switch_>();
        }
        return switch_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dual_active != nullptr)
    {
        children["dual-active"] = dual_active;
    }

    if(mac_address != nullptr)
    {
        children["mac-address"] = mac_address;
    }

    if(switch_ != nullptr)
    {
        children["switch"] = switch_;
    }

    return children;
}

void Native::SwitchVirtual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual")
    {
        virtual_ = value;
        virtual_.value_namespace = name_space;
        virtual_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SwitchVirtual::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
    if(value_path == "virtual")
    {
        virtual_.yfilter = yfilter;
    }
}

bool Native::SwitchVirtual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-active" || name == "mac-address" || name == "switch" || name == "domain" || name == "virtual")
        return true;
    return false;
}

Native::SwitchVirtual::DualActive::DualActive()
    :
    detection(std::make_shared<Native::SwitchVirtual::DualActive::Detection>())
	,recovery(std::make_shared<Native::SwitchVirtual::DualActive::Recovery>())
{
    detection->parent = this;
    recovery->parent = this;

    yang_name = "dual-active"; yang_parent_name = "switch-virtual"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SwitchVirtual::DualActive::~DualActive()
{
}

bool Native::SwitchVirtual::DualActive::has_data() const
{
    return (detection !=  nullptr && detection->has_data())
	|| (recovery !=  nullptr && recovery->has_data());
}

bool Native::SwitchVirtual::DualActive::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation())
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::SwitchVirtual::DualActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dual-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SwitchVirtual::DualActive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SwitchVirtual::DualActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::SwitchVirtual::DualActive::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::SwitchVirtual::DualActive::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::DualActive::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detection != nullptr)
    {
        children["detection"] = detection;
    }

    if(recovery != nullptr)
    {
        children["recovery"] = recovery;
    }

    return children;
}

void Native::SwitchVirtual::DualActive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SwitchVirtual::DualActive::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SwitchVirtual::DualActive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "recovery")
        return true;
    return false;
}

Native::SwitchVirtual::DualActive::Detection::Detection()
    :
    pagp(nullptr) // presence node
{

    yang_name = "detection"; yang_parent_name = "dual-active"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SwitchVirtual::DualActive::Detection::~Detection()
{
}

bool Native::SwitchVirtual::DualActive::Detection::has_data() const
{
    return (pagp !=  nullptr && pagp->has_data());
}

bool Native::SwitchVirtual::DualActive::Detection::has_operation() const
{
    return is_set(yfilter)
	|| (pagp !=  nullptr && pagp->has_operation());
}

std::string Native::SwitchVirtual::DualActive::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SwitchVirtual::DualActive::Detection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SwitchVirtual::DualActive::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pagp")
    {
        if(pagp == nullptr)
        {
            pagp = std::make_shared<Native::SwitchVirtual::DualActive::Detection::Pagp>();
        }
        return pagp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::DualActive::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pagp != nullptr)
    {
        children["pagp"] = pagp;
    }

    return children;
}

void Native::SwitchVirtual::DualActive::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SwitchVirtual::DualActive::Detection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SwitchVirtual::DualActive::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pagp")
        return true;
    return false;
}

Native::SwitchVirtual::DualActive::Detection::Pagp::Pagp()
    :
    trust(std::make_shared<Native::SwitchVirtual::DualActive::Detection::Pagp::Trust>())
{
    trust->parent = this;

    yang_name = "pagp"; yang_parent_name = "detection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SwitchVirtual::DualActive::Detection::Pagp::~Pagp()
{
}

bool Native::SwitchVirtual::DualActive::Detection::Pagp::has_data() const
{
    return (trust !=  nullptr && trust->has_data());
}

bool Native::SwitchVirtual::DualActive::Detection::Pagp::has_operation() const
{
    return is_set(yfilter)
	|| (trust !=  nullptr && trust->has_operation());
}

std::string Native::SwitchVirtual::DualActive::Detection::Pagp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pagp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SwitchVirtual::DualActive::Detection::Pagp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SwitchVirtual::DualActive::Detection::Pagp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::SwitchVirtual::DualActive::Detection::Pagp::Trust>();
        }
        return trust;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::DualActive::Detection::Pagp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(trust != nullptr)
    {
        children["trust"] = trust;
    }

    return children;
}

void Native::SwitchVirtual::DualActive::Detection::Pagp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SwitchVirtual::DualActive::Detection::Pagp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SwitchVirtual::DualActive::Detection::Pagp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trust")
        return true;
    return false;
}

Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::Trust()
    :
    channel_group{YType::uint8, "channel-group"}
{

    yang_name = "trust"; yang_parent_name = "pagp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::~Trust()
{
}

bool Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::has_data() const
{
    return channel_group.is_set;
}

bool Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(channel_group.yfilter);
}

std::string Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (channel_group.is_set || is_set(channel_group.yfilter)) leaf_name_data.push_back(channel_group.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "channel-group")
    {
        channel_group = value;
        channel_group.value_namespace = name_space;
        channel_group.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "channel-group")
    {
        channel_group.yfilter = yfilter;
    }
}

bool Native::SwitchVirtual::DualActive::Detection::Pagp::Trust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "channel-group")
        return true;
    return false;
}

Native::SwitchVirtual::DualActive::Recovery::Recovery()
    :
    switch_{YType::uint8, "switch"}
    	,
    ip(std::make_shared<Native::SwitchVirtual::DualActive::Recovery::Ip>())
{
    ip->parent = this;

    yang_name = "recovery"; yang_parent_name = "dual-active"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SwitchVirtual::DualActive::Recovery::~Recovery()
{
}

bool Native::SwitchVirtual::DualActive::Recovery::has_data() const
{
    return switch_.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::SwitchVirtual::DualActive::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::SwitchVirtual::DualActive::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SwitchVirtual::DualActive::Recovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SwitchVirtual::DualActive::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::SwitchVirtual::DualActive::Recovery::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::DualActive::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::SwitchVirtual::DualActive::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SwitchVirtual::DualActive::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::SwitchVirtual::DualActive::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "switch")
        return true;
    return false;
}

Native::SwitchVirtual::DualActive::Recovery::Ip::Ip()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{

    yang_name = "ip"; yang_parent_name = "recovery"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SwitchVirtual::DualActive::Recovery::Ip::~Ip()
{
}

bool Native::SwitchVirtual::DualActive::Recovery::Ip::has_data() const
{
    return address.is_set
	|| mask.is_set;
}

bool Native::SwitchVirtual::DualActive::Recovery::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::SwitchVirtual::DualActive::Recovery::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SwitchVirtual::DualActive::Recovery::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SwitchVirtual::DualActive::Recovery::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::DualActive::Recovery::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SwitchVirtual::DualActive::Recovery::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Native::SwitchVirtual::DualActive::Recovery::Ip::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Native::SwitchVirtual::DualActive::Recovery::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask")
        return true;
    return false;
}

Native::SwitchVirtual::MacAddress::MacAddress()
    :
    use_virtual{YType::empty, "use-virtual"}
{

    yang_name = "mac-address"; yang_parent_name = "switch-virtual"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SwitchVirtual::MacAddress::~MacAddress()
{
}

bool Native::SwitchVirtual::MacAddress::has_data() const
{
    return use_virtual.is_set;
}

bool Native::SwitchVirtual::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(use_virtual.yfilter);
}

std::string Native::SwitchVirtual::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SwitchVirtual::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (use_virtual.is_set || is_set(use_virtual.yfilter)) leaf_name_data.push_back(use_virtual.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SwitchVirtual::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SwitchVirtual::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "use-virtual")
    {
        use_virtual = value;
        use_virtual.value_namespace = name_space;
        use_virtual.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SwitchVirtual::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "use-virtual")
    {
        use_virtual.yfilter = yfilter;
    }
}

bool Native::SwitchVirtual::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "use-virtual")
        return true;
    return false;
}

Native::SwitchVirtual::Switch_::Switch_()
    :
    mode{YType::enumeration, "mode"},
    priority{YType::uint32, "priority"},
    switch_number{YType::uint32, "switch-number"}
{

    yang_name = "switch"; yang_parent_name = "switch-virtual"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SwitchVirtual::Switch_::~Switch_()
{
}

bool Native::SwitchVirtual::Switch_::has_data() const
{
    return mode.is_set
	|| priority.is_set
	|| switch_number.is_set;
}

bool Native::SwitchVirtual::Switch_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(switch_number.yfilter);
}

std::string Native::SwitchVirtual::Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SwitchVirtual::Switch_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (switch_number.is_set || is_set(switch_number.yfilter)) leaf_name_data.push_back(switch_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SwitchVirtual::Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SwitchVirtual::Switch_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SwitchVirtual::Switch_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-number")
    {
        switch_number = value;
        switch_number.value_namespace = name_space;
        switch_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SwitchVirtual::Switch_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "switch-number")
    {
        switch_number.yfilter = yfilter;
    }
}

bool Native::SwitchVirtual::Switch_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "priority" || name == "switch-number")
        return true;
    return false;
}

Native::Switch_::Switch_()
    :
    number{YType::uint8, "number"},
    provision{YType::enumeration, "provision"}
{

    yang_name = "switch"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Switch_::~Switch_()
{
}

bool Native::Switch_::has_data() const
{
    return number.is_set
	|| provision.is_set;
}

bool Native::Switch_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(provision.yfilter);
}

std::string Native::Switch_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:switch" <<"[number='" <<number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Switch_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (provision.is_set || is_set(provision.yfilter)) leaf_name_data.push_back(provision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Switch_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Switch_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provision")
    {
        provision = value;
        provision.value_namespace = name_space;
        provision.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Switch_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "provision")
    {
        provision.yfilter = yfilter;
    }
}

bool Native::Switch_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "provision")
        return true;
    return false;
}

Native::System::System()
    :
    debug(std::make_shared<Native::System::Debug>())
	,disable(std::make_shared<Native::System::Disable>())
	,environment(std::make_shared<Native::System::Environment>())
	,fnf(std::make_shared<Native::System::Fnf>())
	,ignore(std::make_shared<Native::System::Ignore>())
	,mode(std::make_shared<Native::System::Mode>())
	,mode_button(std::make_shared<Native::System::ModeButton>())
	,mtu(std::make_shared<Native::System::Mtu>())
{
    debug->parent = this;
    disable->parent = this;
    environment->parent = this;
    fnf->parent = this;
    ignore->parent = this;
    mode->parent = this;
    mode_button->parent = this;
    mtu->parent = this;

    yang_name = "system"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::System::~System()
{
}

bool Native::System::has_data() const
{
    return (debug !=  nullptr && debug->has_data())
	|| (disable !=  nullptr && disable->has_data())
	|| (environment !=  nullptr && environment->has_data())
	|| (fnf !=  nullptr && fnf->has_data())
	|| (ignore !=  nullptr && ignore->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (mode_button !=  nullptr && mode_button->has_data())
	|| (mtu !=  nullptr && mtu->has_data());
}

bool Native::System::has_operation() const
{
    return is_set(yfilter)
	|| (debug !=  nullptr && debug->has_operation())
	|| (disable !=  nullptr && disable->has_operation())
	|| (environment !=  nullptr && environment->has_operation())
	|| (fnf !=  nullptr && fnf->has_operation())
	|| (ignore !=  nullptr && ignore->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (mode_button !=  nullptr && mode_button->has_operation())
	|| (mtu !=  nullptr && mtu->has_operation());
}

std::string Native::System::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "debug")
    {
        if(debug == nullptr)
        {
            debug = std::make_shared<Native::System::Debug>();
        }
        return debug;
    }

    if(child_yang_name == "disable")
    {
        if(disable == nullptr)
        {
            disable = std::make_shared<Native::System::Disable>();
        }
        return disable;
    }

    if(child_yang_name == "environment")
    {
        if(environment == nullptr)
        {
            environment = std::make_shared<Native::System::Environment>();
        }
        return environment;
    }

    if(child_yang_name == "fnf")
    {
        if(fnf == nullptr)
        {
            fnf = std::make_shared<Native::System::Fnf>();
        }
        return fnf;
    }

    if(child_yang_name == "ignore")
    {
        if(ignore == nullptr)
        {
            ignore = std::make_shared<Native::System::Ignore>();
        }
        return ignore;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::System::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "mode-button")
    {
        if(mode_button == nullptr)
        {
            mode_button = std::make_shared<Native::System::ModeButton>();
        }
        return mode_button;
    }

    if(child_yang_name == "mtu")
    {
        if(mtu == nullptr)
        {
            mtu = std::make_shared<Native::System::Mtu>();
        }
        return mtu;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(debug != nullptr)
    {
        children["debug"] = debug;
    }

    if(disable != nullptr)
    {
        children["disable"] = disable;
    }

    if(environment != nullptr)
    {
        children["environment"] = environment;
    }

    if(fnf != nullptr)
    {
        children["fnf"] = fnf;
    }

    if(ignore != nullptr)
    {
        children["ignore"] = ignore;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(mode_button != nullptr)
    {
        children["mode-button"] = mode_button;
    }

    if(mtu != nullptr)
    {
        children["mtu"] = mtu;
    }

    return children;
}

void Native::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "debug" || name == "disable" || name == "environment" || name == "fnf" || name == "ignore" || name == "mode" || name == "mode-button" || name == "mtu")
        return true;
    return false;
}

Native::System::Debug::Debug()
    :
    shell(std::make_shared<Native::System::Debug::Shell>())
{
    shell->parent = this;

    yang_name = "debug"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false;
}

Native::System::Debug::~Debug()
{
}

bool Native::System::Debug::has_data() const
{
    return (shell !=  nullptr && shell->has_data());
}

bool Native::System::Debug::has_operation() const
{
    return is_set(yfilter)
	|| (shell !=  nullptr && shell->has_operation());
}

std::string Native::System::Debug::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Debug::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:debug";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Debug::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::System::Debug::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "shell")
    {
        if(shell == nullptr)
        {
            shell = std::make_shared<Native::System::Debug::Shell>();
        }
        return shell;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Debug::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(shell != nullptr)
    {
        children["shell"] = shell;
    }

    return children;
}

void Native::System::Debug::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Debug::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Debug::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shell")
        return true;
    return false;
}

Native::System::Debug::Shell::Shell()
    :
    switch_(std::make_shared<Native::System::Debug::Shell::Switch_>())
{
    switch_->parent = this;

    yang_name = "shell"; yang_parent_name = "debug"; is_top_level_class = false; has_list_ancestor = false;
}

Native::System::Debug::Shell::~Shell()
{
}

bool Native::System::Debug::Shell::has_data() const
{
    return (switch_ !=  nullptr && switch_->has_data());
}

bool Native::System::Debug::Shell::has_operation() const
{
    return is_set(yfilter)
	|| (switch_ !=  nullptr && switch_->has_operation());
}

std::string Native::System::Debug::Shell::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:debug/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Debug::Shell::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shell";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Debug::Shell::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::System::Debug::Shell::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::System::Debug::Shell::Switch_>();
        }
        return switch_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Debug::Shell::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(switch_ != nullptr)
    {
        children["switch"] = switch_;
    }

    return children;
}

void Native::System::Debug::Shell::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Debug::Shell::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Debug::Shell::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::System::Debug::Shell::Switch_::Switch_()
    :
    all{YType::empty, "all"},
    switch_number{YType::uint8, "switch-number"}
{

    yang_name = "switch"; yang_parent_name = "shell"; is_top_level_class = false; has_list_ancestor = false;
}

Native::System::Debug::Shell::Switch_::~Switch_()
{
}

bool Native::System::Debug::Shell::Switch_::has_data() const
{
    return all.is_set
	|| switch_number.is_set;
}

bool Native::System::Debug::Shell::Switch_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(switch_number.yfilter);
}

std::string Native::System::Debug::Shell::Switch_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:debug/shell/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Debug::Shell::Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Debug::Shell::Switch_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (switch_number.is_set || is_set(switch_number.yfilter)) leaf_name_data.push_back(switch_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::System::Debug::Shell::Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Debug::Shell::Switch_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::System::Debug::Shell::Switch_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch-number")
    {
        switch_number = value;
        switch_number.value_namespace = name_space;
        switch_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Debug::Shell::Switch_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "switch-number")
    {
        switch_number.yfilter = yfilter;
    }
}

bool Native::System::Debug::Shell::Switch_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "switch-number")
        return true;
    return false;
}

Native::System::Disable::Disable()
    :
    password(std::make_shared<Native::System::Disable::Password>())
{
    password->parent = this;

    yang_name = "disable"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false;
}

Native::System::Disable::~Disable()
{
}

bool Native::System::Disable::has_data() const
{
    return (password !=  nullptr && password->has_data());
}

bool Native::System::Disable::has_operation() const
{
    return is_set(yfilter)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::System::Disable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Disable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:disable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Disable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::System::Disable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::System::Disable::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Disable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::System::Disable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Disable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Disable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password")
        return true;
    return false;
}

Native::System::Disable::Password::Password()
    :
    recovery(std::make_shared<Native::System::Disable::Password::Recovery>())
{
    recovery->parent = this;

    yang_name = "password"; yang_parent_name = "disable"; is_top_level_class = false; has_list_ancestor = false;
}

Native::System::Disable::Password::~Password()
{
}

bool Native::System::Disable::Password::has_data() const
{
    return (recovery !=  nullptr && recovery->has_data());
}

bool Native::System::Disable::Password::has_operation() const
{
    return is_set(yfilter)
	|| (recovery !=  nullptr && recovery->has_operation());
}

std::string Native::System::Disable::Password::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:disable/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Disable::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Disable::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::System::Disable::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "recovery")
    {
        if(recovery == nullptr)
        {
            recovery = std::make_shared<Native::System::Disable::Password::Recovery>();
        }
        return recovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Disable::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(recovery != nullptr)
    {
        children["recovery"] = recovery;
    }

    return children;
}

void Native::System::Disable::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Disable::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Disable::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "recovery")
        return true;
    return false;
}

Native::System::Disable::Password::Recovery::Recovery()
    :
    switch_(std::make_shared<Native::System::Disable::Password::Recovery::Switch_>())
{
    switch_->parent = this;

    yang_name = "recovery"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = false;
}

Native::System::Disable::Password::Recovery::~Recovery()
{
}

bool Native::System::Disable::Password::Recovery::has_data() const
{
    return (switch_ !=  nullptr && switch_->has_data());
}

bool Native::System::Disable::Password::Recovery::has_operation() const
{
    return is_set(yfilter)
	|| (switch_ !=  nullptr && switch_->has_operation());
}

std::string Native::System::Disable::Password::Recovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:disable/password/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Disable::Password::Recovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Disable::Password::Recovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::System::Disable::Password::Recovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::System::Disable::Password::Recovery::Switch_>();
        }
        return switch_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Disable::Password::Recovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(switch_ != nullptr)
    {
        children["switch"] = switch_;
    }

    return children;
}

void Native::System::Disable::Password::Recovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Disable::Password::Recovery::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Disable::Password::Recovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::System::Disable::Password::Recovery::Switch_::Switch_()
    :
    all{YType::empty, "all"},
    number{YType::uint8, "number"}
{

    yang_name = "switch"; yang_parent_name = "recovery"; is_top_level_class = false; has_list_ancestor = false;
}

Native::System::Disable::Password::Recovery::Switch_::~Switch_()
{
}

bool Native::System::Disable::Password::Recovery::Switch_::has_data() const
{
    return all.is_set
	|| number.is_set;
}

bool Native::System::Disable::Password::Recovery::Switch_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::System::Disable::Password::Recovery::Switch_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:disable/password/recovery/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Disable::Password::Recovery::Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Disable::Password::Recovery::Switch_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::System::Disable::Password::Recovery::Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Disable::Password::Recovery::Switch_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::System::Disable::Password::Recovery::Switch_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Disable::Password::Recovery::Switch_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::System::Disable::Password::Recovery::Switch_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "number")
        return true;
    return false;
}

Native::System::Environment::Environment()
    :
    fan_fail_action(std::make_shared<Native::System::Environment::FanFailAction>())
	,temperature(std::make_shared<Native::System::Environment::Temperature>())
{
    fan_fail_action->parent = this;
    temperature->parent = this;

    yang_name = "environment"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false;
}

Native::System::Environment::~Environment()
{
}

bool Native::System::Environment::has_data() const
{
    return (fan_fail_action !=  nullptr && fan_fail_action->has_data())
	|| (temperature !=  nullptr && temperature->has_data());
}

bool Native::System::Environment::has_operation() const
{
    return is_set(yfilter)
	|| (fan_fail_action !=  nullptr && fan_fail_action->has_operation())
	|| (temperature !=  nullptr && temperature->has_operation());
}

std::string Native::System::Environment::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Environment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:environment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Environment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::System::Environment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fan-fail-action")
    {
        if(fan_fail_action == nullptr)
        {
            fan_fail_action = std::make_shared<Native::System::Environment::FanFailAction>();
        }
        return fan_fail_action;
    }

    if(child_yang_name == "temperature")
    {
        if(temperature == nullptr)
        {
            temperature = std::make_shared<Native::System::Environment::Temperature>();
        }
        return temperature;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Environment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fan_fail_action != nullptr)
    {
        children["fan-fail-action"] = fan_fail_action;
    }

    if(temperature != nullptr)
    {
        children["temperature"] = temperature;
    }

    return children;
}

void Native::System::Environment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Environment::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Environment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fan-fail-action" || name == "temperature")
        return true;
    return false;
}

Native::System::Environment::FanFailAction::FanFailAction()
    :
    shut{YType::empty, "shut"}
{

    yang_name = "fan-fail-action"; yang_parent_name = "environment"; is_top_level_class = false; has_list_ancestor = false;
}

Native::System::Environment::FanFailAction::~FanFailAction()
{
}

bool Native::System::Environment::FanFailAction::has_data() const
{
    return shut.is_set;
}

bool Native::System::Environment::FanFailAction::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shut.yfilter);
}

std::string Native::System::Environment::FanFailAction::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:environment/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Environment::FanFailAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fan-fail-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Environment::FanFailAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shut.is_set || is_set(shut.yfilter)) leaf_name_data.push_back(shut.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::System::Environment::FanFailAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Environment::FanFailAction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::System::Environment::FanFailAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shut")
    {
        shut = value;
        shut.value_namespace = name_space;
        shut.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Environment::FanFailAction::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shut")
    {
        shut.yfilter = yfilter;
    }
}

bool Native::System::Environment::FanFailAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shut")
        return true;
    return false;
}

Native::System::Environment::Temperature::Temperature()
    :
    threshold(std::make_shared<Native::System::Environment::Temperature::Threshold>())
{
    threshold->parent = this;

    yang_name = "temperature"; yang_parent_name = "environment"; is_top_level_class = false; has_list_ancestor = false;
}

Native::System::Environment::Temperature::~Temperature()
{
}

bool Native::System::Environment::Temperature::has_data() const
{
    return (threshold !=  nullptr && threshold->has_data());
}

bool Native::System::Environment::Temperature::has_operation() const
{
    return is_set(yfilter)
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string Native::System::Environment::Temperature::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:environment/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Environment::Temperature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "temperature";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Environment::Temperature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::System::Environment::Temperature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "threshold")
    {
        if(threshold == nullptr)
        {
            threshold = std::make_shared<Native::System::Environment::Temperature::Threshold>();
        }
        return threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Environment::Temperature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(threshold != nullptr)
    {
        children["threshold"] = threshold;
    }

    return children;
}

void Native::System::Environment::Temperature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Environment::Temperature::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Environment::Temperature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::System::Environment::Temperature::Threshold::Threshold()
    :
    yellow(std::make_shared<Native::System::Environment::Temperature::Threshold::Yellow>())
{
    yellow->parent = this;

    yang_name = "threshold"; yang_parent_name = "temperature"; is_top_level_class = false; has_list_ancestor = false;
}

Native::System::Environment::Temperature::Threshold::~Threshold()
{
}

bool Native::System::Environment::Temperature::Threshold::has_data() const
{
    return (yellow !=  nullptr && yellow->has_data());
}

bool Native::System::Environment::Temperature::Threshold::has_operation() const
{
    return is_set(yfilter)
	|| (yellow !=  nullptr && yellow->has_operation());
}

std::string Native::System::Environment::Temperature::Threshold::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:environment/temperature/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Environment::Temperature::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Environment::Temperature::Threshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::System::Environment::Temperature::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "yellow")
    {
        if(yellow == nullptr)
        {
            yellow = std::make_shared<Native::System::Environment::Temperature::Threshold::Yellow>();
        }
        return yellow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Environment::Temperature::Threshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(yellow != nullptr)
    {
        children["yellow"] = yellow;
    }

    return children;
}

void Native::System::Environment::Temperature::Threshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Environment::Temperature::Threshold::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Environment::Temperature::Threshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "yellow")
        return true;
    return false;
}

Native::System::Environment::Temperature::Threshold::Yellow::Yellow()
    :
    delta_value{YType::uint8, "delta-value"},
    detail{YType::empty, "detail"}
{

    yang_name = "yellow"; yang_parent_name = "threshold"; is_top_level_class = false; has_list_ancestor = false;
}

Native::System::Environment::Temperature::Threshold::Yellow::~Yellow()
{
}

bool Native::System::Environment::Temperature::Threshold::Yellow::has_data() const
{
    return delta_value.is_set
	|| detail.is_set;
}

bool Native::System::Environment::Temperature::Threshold::Yellow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delta_value.yfilter)
	|| ydk::is_set(detail.yfilter);
}

std::string Native::System::Environment::Temperature::Threshold::Yellow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:environment/temperature/threshold/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Environment::Temperature::Threshold::Yellow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "yellow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Environment::Temperature::Threshold::Yellow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delta_value.is_set || is_set(delta_value.yfilter)) leaf_name_data.push_back(delta_value.get_name_leafdata());
    if (detail.is_set || is_set(detail.yfilter)) leaf_name_data.push_back(detail.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::System::Environment::Temperature::Threshold::Yellow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Environment::Temperature::Threshold::Yellow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::System::Environment::Temperature::Threshold::Yellow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delta-value")
    {
        delta_value = value;
        delta_value.value_namespace = name_space;
        delta_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "detail")
    {
        detail = value;
        detail.value_namespace = name_space;
        detail.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Environment::Temperature::Threshold::Yellow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delta-value")
    {
        delta_value.yfilter = yfilter;
    }
    if(value_path == "detail")
    {
        detail.yfilter = yfilter;
    }
}

bool Native::System::Environment::Temperature::Threshold::Yellow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delta-value" || name == "detail")
        return true;
    return false;
}

Native::System::Fnf::Fnf()
    :
    bytes_count(std::make_shared<Native::System::Fnf::BytesCount>())
{
    bytes_count->parent = this;

    yang_name = "fnf"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false;
}

Native::System::Fnf::~Fnf()
{
}

bool Native::System::Fnf::has_data() const
{
    return (bytes_count !=  nullptr && bytes_count->has_data());
}

bool Native::System::Fnf::has_operation() const
{
    return is_set(yfilter)
	|| (bytes_count !=  nullptr && bytes_count->has_operation());
}

std::string Native::System::Fnf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Fnf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:fnf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Fnf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::System::Fnf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bytes-count")
    {
        if(bytes_count == nullptr)
        {
            bytes_count = std::make_shared<Native::System::Fnf::BytesCount>();
        }
        return bytes_count;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Fnf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bytes_count != nullptr)
    {
        children["bytes-count"] = bytes_count;
    }

    return children;
}

void Native::System::Fnf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Fnf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Fnf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bytes-count")
        return true;
    return false;
}

Native::System::Fnf::BytesCount::BytesCount()
    :
    layer2{YType::empty, "layer2"}
{

    yang_name = "bytes-count"; yang_parent_name = "fnf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::System::Fnf::BytesCount::~BytesCount()
{
}

bool Native::System::Fnf::BytesCount::has_data() const
{
    return layer2.is_set;
}

bool Native::System::Fnf::BytesCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(layer2.yfilter);
}

std::string Native::System::Fnf::BytesCount::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:fnf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Fnf::BytesCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bytes-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Fnf::BytesCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (layer2.is_set || is_set(layer2.yfilter)) leaf_name_data.push_back(layer2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::System::Fnf::BytesCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Fnf::BytesCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::System::Fnf::BytesCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "layer2")
    {
        layer2 = value;
        layer2.value_namespace = name_space;
        layer2.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Fnf::BytesCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "layer2")
    {
        layer2.yfilter = yfilter;
    }
}

bool Native::System::Fnf::BytesCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "layer2")
        return true;
    return false;
}

Native::System::Ignore::Ignore()
    :
    startupconfig(std::make_shared<Native::System::Ignore::Startupconfig>())
{
    startupconfig->parent = this;

    yang_name = "ignore"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false;
}

Native::System::Ignore::~Ignore()
{
}

bool Native::System::Ignore::has_data() const
{
    return (startupconfig !=  nullptr && startupconfig->has_data());
}

bool Native::System::Ignore::has_operation() const
{
    return is_set(yfilter)
	|| (startupconfig !=  nullptr && startupconfig->has_operation());
}

std::string Native::System::Ignore::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Ignore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:ignore";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Ignore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::System::Ignore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "startupconfig")
    {
        if(startupconfig == nullptr)
        {
            startupconfig = std::make_shared<Native::System::Ignore::Startupconfig>();
        }
        return startupconfig;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Ignore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(startupconfig != nullptr)
    {
        children["startupconfig"] = startupconfig;
    }

    return children;
}

void Native::System::Ignore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Ignore::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Ignore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "startupconfig")
        return true;
    return false;
}

Native::System::Ignore::Startupconfig::Startupconfig()
    :
    switch_(std::make_shared<Native::System::Ignore::Startupconfig::Switch_>())
{
    switch_->parent = this;

    yang_name = "startupconfig"; yang_parent_name = "ignore"; is_top_level_class = false; has_list_ancestor = false;
}

Native::System::Ignore::Startupconfig::~Startupconfig()
{
}

bool Native::System::Ignore::Startupconfig::has_data() const
{
    return (switch_ !=  nullptr && switch_->has_data());
}

bool Native::System::Ignore::Startupconfig::has_operation() const
{
    return is_set(yfilter)
	|| (switch_ !=  nullptr && switch_->has_operation());
}

std::string Native::System::Ignore::Startupconfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:ignore/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Ignore::Startupconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "startupconfig";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Ignore::Startupconfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::System::Ignore::Startupconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::System::Ignore::Startupconfig::Switch_>();
        }
        return switch_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Ignore::Startupconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(switch_ != nullptr)
    {
        children["switch"] = switch_;
    }

    return children;
}

void Native::System::Ignore::Startupconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Ignore::Startupconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Ignore::Startupconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::System::Ignore::Startupconfig::Switch_::Switch_()
    :
    all{YType::empty, "all"},
    number{YType::uint8, "number"}
{

    yang_name = "switch"; yang_parent_name = "startupconfig"; is_top_level_class = false; has_list_ancestor = false;
}

Native::System::Ignore::Startupconfig::Switch_::~Switch_()
{
}

bool Native::System::Ignore::Startupconfig::Switch_::has_data() const
{
    return all.is_set
	|| number.is_set;
}

bool Native::System::Ignore::Startupconfig::Switch_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::System::Ignore::Startupconfig::Switch_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-switch:ignore/startupconfig/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Ignore::Startupconfig::Switch_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Ignore::Startupconfig::Switch_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::System::Ignore::Startupconfig::Switch_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Ignore::Startupconfig::Switch_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::System::Ignore::Startupconfig::Switch_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::System::Ignore::Startupconfig::Switch_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::System::Ignore::Startupconfig::Switch_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "number")
        return true;
    return false;
}

Native::System::Mode::Mode()
    :
    maintenance(nullptr) // presence node
{

    yang_name = "mode"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false;
}

Native::System::Mode::~Mode()
{
}

bool Native::System::Mode::has_data() const
{
    return (maintenance !=  nullptr && maintenance->has_data());
}

bool Native::System::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (maintenance !=  nullptr && maintenance->has_operation());
}

std::string Native::System::Mode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mmode:mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::System::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "maintenance")
    {
        if(maintenance == nullptr)
        {
            maintenance = std::make_shared<Native::System::Mode::Maintenance>();
        }
        return maintenance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(maintenance != nullptr)
    {
        children["maintenance"] = maintenance;
    }

    return children;
}

void Native::System::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maintenance")
        return true;
    return false;
}

Native::System::Mode::Maintenance::Maintenance()
    :
    config_maintenance(std::make_shared<Native::System::Mode::Maintenance::ConfigMaintenance>())
{
    config_maintenance->parent = this;

    yang_name = "maintenance"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = false;
}

Native::System::Mode::Maintenance::~Maintenance()
{
}

bool Native::System::Mode::Maintenance::has_data() const
{
    return (config_maintenance !=  nullptr && config_maintenance->has_data());
}

bool Native::System::Mode::Maintenance::has_operation() const
{
    return is_set(yfilter)
	|| (config_maintenance !=  nullptr && config_maintenance->has_operation());
}

std::string Native::System::Mode::Maintenance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/system/Cisco-IOS-XE-mmode:mode/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::System::Mode::Maintenance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maintenance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::System::Mode::Maintenance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::System::Mode::Maintenance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-maintenance")
    {
        if(config_maintenance == nullptr)
        {
            config_maintenance = std::make_shared<Native::System::Mode::Maintenance::ConfigMaintenance>();
        }
        return config_maintenance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::System::Mode::Maintenance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config_maintenance != nullptr)
    {
        children["config-maintenance"] = config_maintenance;
    }

    return children;
}

void Native::System::Mode::Maintenance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::System::Mode::Maintenance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::System::Mode::Maintenance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config-maintenance")
        return true;
    return false;
}

const Enum::YLeaf Native::SnmpServer::Group::V3::SecurityLevel::auth {0, "auth"};
const Enum::YLeaf Native::SnmpServer::Group::V3::SecurityLevel::noauth {1, "noauth"};
const Enum::YLeaf Native::SnmpServer::Group::V3::SecurityLevel::priv {2, "priv"};

const Enum::YLeaf Native::SnmpServer::Group::V3::Match::exact {0, "exact"};
const Enum::YLeaf Native::SnmpServer::Group::V3::Match::prefix {1, "prefix"};

const Enum::YLeaf Native::SnmpServer::Host::Version::Y_1 {0, "1"};
const Enum::YLeaf Native::SnmpServer::Host::Version::Y_2c {1, "2c"};
const Enum::YLeaf Native::SnmpServer::Host::Version::Y_3 {2, "3"};

const Enum::YLeaf Native::SnmpServer::Host::SecurityLevel::auth {0, "auth"};
const Enum::YLeaf Native::SnmpServer::Host::SecurityLevel::noauth {1, "noauth"};
const Enum::YLeaf Native::SnmpServer::Host::SecurityLevel::priv {2, "priv"};

const Enum::YLeaf Native::SnmpServer::View::IncExl::excluded {0, "excluded"};
const Enum::YLeaf Native::SnmpServer::View::IncExl::included {1, "included"};

const Enum::YLeaf Native::SpanningTree::Mode::mst {0, "mst"};
const Enum::YLeaf Native::SpanningTree::Mode::pvst {1, "pvst"};
const Enum::YLeaf Native::SpanningTree::Mode::rapid_pvst {2, "rapid-pvst"};

const Enum::YLeaf Native::SpanningTree::Mst::InstanceRange::Root::primary {0, "primary"};
const Enum::YLeaf Native::SpanningTree::Mst::InstanceRange::Root::secondary {1, "secondary"};

const Enum::YLeaf Native::SpanningTree::Portfast::Bdpu::bpdufilter {0, "bpdufilter"};
const Enum::YLeaf Native::SpanningTree::Portfast::Bdpu::bpduguard {1, "bpduguard"};

const Enum::YLeaf Native::SwitchVirtual::Switch_::Mode::virtual_ {0, "virtual"};

const Enum::YLeaf Native::Switch_::Provision::ws_c2960x_24pd_l {0, "ws-c2960x-24pd-l"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_48ps {1, "ws-c3650-48ps"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_24ps {2, "ws-c3650-24ps"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_48p {3, "ws-c3850-48p"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_24p {4, "ws-c3850-24p"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_48t {5, "ws-c3850-48t"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_24t {6, "ws-c3850-24t"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_48f {7, "ws-c3850-48f"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_48u {8, "ws-c3850-48u"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_24u {9, "ws-c3850-24u"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_12x48u {10, "ws-c3850-12x48u"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_24xu {11, "ws-c3850-24xu"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_24ux {12, "ws-c3850-24ux"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_12s {13, "ws-c3850-12s"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_24s {14, "ws-c3850-24s"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_12xs {15, "ws-c3850-12xs"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_24xs {16, "ws-c3850-24xs"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_48xs {17, "ws-c3850-48xs"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_12x48fd {18, "ws-c3650-12x48fd"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_12x48uq {19, "ws-c3650-12x48uq"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_12x48ur {20, "ws-c3650-12x48ur"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_12x48uz {21, "ws-c3650-12x48uz"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_24pd {22, "ws-c3650-24pd"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_24pdm {23, "ws-c3650-24pdm"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_24td {24, "ws-c3650-24td"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_24ts {25, "ws-c3650-24ts"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_48fqm {26, "ws-c3650-48fqm"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_48pd {27, "ws-c3650-48pd"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_48pq {28, "ws-c3650-48pq"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_48td {29, "ws-c3650-48td"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_48tq {30, "ws-c3650-48tq"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_48ts {31, "ws-c3650-48ts"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_8x24pd {32, "ws-c3650-8x24pd"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3650_8x24uq {33, "ws-c3650-8x24uq"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3750x_24p {34, "ws-c3750x-24p"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3750x_12s {35, "ws-c3750x-12s"};
const Enum::YLeaf Native::Switch_::Provision::ws_c3850_12x48au {36, "ws-c3850-12x48au"};
const Enum::YLeaf Native::Switch_::Provision::c9300_24p {37, "c9300-24p"};
const Enum::YLeaf Native::Switch_::Provision::c9300_24t {38, "c9300-24t"};
const Enum::YLeaf Native::Switch_::Provision::c9300_24u {39, "c9300-24u"};
const Enum::YLeaf Native::Switch_::Provision::c9300_48p {40, "c9300-48p"};
const Enum::YLeaf Native::Switch_::Provision::c9300_48t {41, "c9300-48t"};
const Enum::YLeaf Native::Switch_::Provision::c9300_48u {42, "c9300-48u"};


}
}

