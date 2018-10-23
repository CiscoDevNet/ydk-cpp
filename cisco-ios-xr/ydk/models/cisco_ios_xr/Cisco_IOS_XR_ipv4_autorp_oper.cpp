
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_autorp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_autorp_oper {

AutoRp::AutoRp()
    :
    standby(std::make_shared<AutoRp::Standby>())
    , active(std::make_shared<AutoRp::Active>())
{
    standby->parent = this;
    active->parent = this;

    yang_name = "auto-rp"; yang_parent_name = "Cisco-IOS-XR-ipv4-autorp-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

AutoRp::~AutoRp()
{
}

bool AutoRp::has_data() const
{
    if (is_presence_container) return true;
    return (standby !=  nullptr && standby->has_data())
	|| (active !=  nullptr && active->has_data());
}

bool AutoRp::has_operation() const
{
    return is_set(yfilter)
	|| (standby !=  nullptr && standby->has_operation())
	|| (active !=  nullptr && active->has_operation());
}

std::string AutoRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AutoRp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AutoRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<AutoRp::Standby>();
        }
        return standby;
    }

    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<AutoRp::Active>();
        }
        return active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AutoRp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(standby != nullptr)
    {
        _children["standby"] = standby;
    }

    if(active != nullptr)
    {
        _children["active"] = active;
    }

    return _children;
}

void AutoRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AutoRp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> AutoRp::clone_ptr() const
{
    return std::make_shared<AutoRp>();
}

std::string AutoRp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string AutoRp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function AutoRp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> AutoRp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool AutoRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "standby" || name == "active")
        return true;
    return false;
}

AutoRp::Standby::Standby()
    :
    candidate_rp(std::make_shared<AutoRp::Standby::CandidateRp>())
    , mapping_agent(std::make_shared<AutoRp::Standby::MappingAgent>())
{
    candidate_rp->parent = this;
    mapping_agent->parent = this;

    yang_name = "standby"; yang_parent_name = "auto-rp"; is_top_level_class = false; has_list_ancestor = false; 
}

AutoRp::Standby::~Standby()
{
}

bool AutoRp::Standby::has_data() const
{
    if (is_presence_container) return true;
    return (candidate_rp !=  nullptr && candidate_rp->has_data())
	|| (mapping_agent !=  nullptr && mapping_agent->has_data());
}

bool AutoRp::Standby::has_operation() const
{
    return is_set(yfilter)
	|| (candidate_rp !=  nullptr && candidate_rp->has_operation())
	|| (mapping_agent !=  nullptr && mapping_agent->has_operation());
}

std::string AutoRp::Standby::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/" << get_segment_path();
    return path_buffer.str();
}

std::string AutoRp::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AutoRp::Standby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AutoRp::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-rp")
    {
        if(candidate_rp == nullptr)
        {
            candidate_rp = std::make_shared<AutoRp::Standby::CandidateRp>();
        }
        return candidate_rp;
    }

    if(child_yang_name == "mapping-agent")
    {
        if(mapping_agent == nullptr)
        {
            mapping_agent = std::make_shared<AutoRp::Standby::MappingAgent>();
        }
        return mapping_agent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AutoRp::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(candidate_rp != nullptr)
    {
        _children["candidate-rp"] = candidate_rp;
    }

    if(mapping_agent != nullptr)
    {
        _children["mapping-agent"] = mapping_agent;
    }

    return _children;
}

void AutoRp::Standby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AutoRp::Standby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AutoRp::Standby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-rp" || name == "mapping-agent")
        return true;
    return false;
}

AutoRp::Standby::CandidateRp::CandidateRp()
    :
    traffic(std::make_shared<AutoRp::Standby::CandidateRp::Traffic>())
    , rps(std::make_shared<AutoRp::Standby::CandidateRp::Rps>())
{
    traffic->parent = this;
    rps->parent = this;

    yang_name = "candidate-rp"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

AutoRp::Standby::CandidateRp::~CandidateRp()
{
}

bool AutoRp::Standby::CandidateRp::has_data() const
{
    if (is_presence_container) return true;
    return (traffic !=  nullptr && traffic->has_data())
	|| (rps !=  nullptr && rps->has_data());
}

bool AutoRp::Standby::CandidateRp::has_operation() const
{
    return is_set(yfilter)
	|| (traffic !=  nullptr && traffic->has_operation())
	|| (rps !=  nullptr && rps->has_operation());
}

std::string AutoRp::Standby::CandidateRp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string AutoRp::Standby::CandidateRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AutoRp::Standby::CandidateRp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AutoRp::Standby::CandidateRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic")
    {
        if(traffic == nullptr)
        {
            traffic = std::make_shared<AutoRp::Standby::CandidateRp::Traffic>();
        }
        return traffic;
    }

    if(child_yang_name == "rps")
    {
        if(rps == nullptr)
        {
            rps = std::make_shared<AutoRp::Standby::CandidateRp::Rps>();
        }
        return rps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AutoRp::Standby::CandidateRp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(traffic != nullptr)
    {
        _children["traffic"] = traffic;
    }

    if(rps != nullptr)
    {
        _children["rps"] = rps;
    }

    return _children;
}

void AutoRp::Standby::CandidateRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AutoRp::Standby::CandidateRp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AutoRp::Standby::CandidateRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic" || name == "rps")
        return true;
    return false;
}

AutoRp::Standby::CandidateRp::Traffic::Traffic()
    :
    active_sent_packets{YType::uint32, "active-sent-packets"},
    standby_sent_packets{YType::uint32, "standby-sent-packets"}
{

    yang_name = "traffic"; yang_parent_name = "candidate-rp"; is_top_level_class = false; has_list_ancestor = false; 
}

AutoRp::Standby::CandidateRp::Traffic::~Traffic()
{
}

bool AutoRp::Standby::CandidateRp::Traffic::has_data() const
{
    if (is_presence_container) return true;
    return active_sent_packets.is_set
	|| standby_sent_packets.is_set;
}

bool AutoRp::Standby::CandidateRp::Traffic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_sent_packets.yfilter)
	|| ydk::is_set(standby_sent_packets.yfilter);
}

std::string AutoRp::Standby::CandidateRp::Traffic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/standby/candidate-rp/" << get_segment_path();
    return path_buffer.str();
}

std::string AutoRp::Standby::CandidateRp::Traffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AutoRp::Standby::CandidateRp::Traffic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_sent_packets.is_set || is_set(active_sent_packets.yfilter)) leaf_name_data.push_back(active_sent_packets.get_name_leafdata());
    if (standby_sent_packets.is_set || is_set(standby_sent_packets.yfilter)) leaf_name_data.push_back(standby_sent_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AutoRp::Standby::CandidateRp::Traffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AutoRp::Standby::CandidateRp::Traffic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AutoRp::Standby::CandidateRp::Traffic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-sent-packets")
    {
        active_sent_packets = value;
        active_sent_packets.value_namespace = name_space;
        active_sent_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-sent-packets")
    {
        standby_sent_packets = value;
        standby_sent_packets.value_namespace = name_space;
        standby_sent_packets.value_namespace_prefix = name_space_prefix;
    }
}

void AutoRp::Standby::CandidateRp::Traffic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-sent-packets")
    {
        active_sent_packets.yfilter = yfilter;
    }
    if(value_path == "standby-sent-packets")
    {
        standby_sent_packets.yfilter = yfilter;
    }
}

bool AutoRp::Standby::CandidateRp::Traffic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-sent-packets" || name == "standby-sent-packets")
        return true;
    return false;
}

AutoRp::Standby::CandidateRp::Rps::Rps()
    :
    rp(this, {})
{

    yang_name = "rps"; yang_parent_name = "candidate-rp"; is_top_level_class = false; has_list_ancestor = false; 
}

AutoRp::Standby::CandidateRp::Rps::~Rps()
{
}

bool AutoRp::Standby::CandidateRp::Rps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rp.len(); index++)
    {
        if(rp[index]->has_data())
            return true;
    }
    return false;
}

bool AutoRp::Standby::CandidateRp::Rps::has_operation() const
{
    for (std::size_t index=0; index<rp.len(); index++)
    {
        if(rp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AutoRp::Standby::CandidateRp::Rps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/standby/candidate-rp/" << get_segment_path();
    return path_buffer.str();
}

std::string AutoRp::Standby::CandidateRp::Rps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AutoRp::Standby::CandidateRp::Rps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AutoRp::Standby::CandidateRp::Rps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp")
    {
        auto ent_ = std::make_shared<AutoRp::Standby::CandidateRp::Rps::Rp>();
        ent_->parent = this;
        rp.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AutoRp::Standby::CandidateRp::Rps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void AutoRp::Standby::CandidateRp::Rps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AutoRp::Standby::CandidateRp::Rps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AutoRp::Standby::CandidateRp::Rps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp")
        return true;
    return false;
}

AutoRp::Standby::CandidateRp::Rps::Rp::Rp()
    :
    interface_name{YType::str, "interface-name"},
    protocol_mode{YType::enumeration, "protocol-mode"},
    access_list_name{YType::str, "access-list-name"},
    candidate_rp_address{YType::str, "candidate-rp-address"},
    ttl{YType::int32, "ttl"},
    announce_period{YType::int32, "announce-period"},
    protocol_mode_xr{YType::enumeration, "protocol-mode-xr"}
{

    yang_name = "rp"; yang_parent_name = "rps"; is_top_level_class = false; has_list_ancestor = false; 
}

AutoRp::Standby::CandidateRp::Rps::Rp::~Rp()
{
}

bool AutoRp::Standby::CandidateRp::Rps::Rp::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| protocol_mode.is_set
	|| access_list_name.is_set
	|| candidate_rp_address.is_set
	|| ttl.is_set
	|| announce_period.is_set
	|| protocol_mode_xr.is_set;
}

bool AutoRp::Standby::CandidateRp::Rps::Rp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(protocol_mode.yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(candidate_rp_address.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(announce_period.yfilter)
	|| ydk::is_set(protocol_mode_xr.yfilter);
}

std::string AutoRp::Standby::CandidateRp::Rps::Rp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/standby/candidate-rp/rps/" << get_segment_path();
    return path_buffer.str();
}

std::string AutoRp::Standby::CandidateRp::Rps::Rp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AutoRp::Standby::CandidateRp::Rps::Rp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (protocol_mode.is_set || is_set(protocol_mode.yfilter)) leaf_name_data.push_back(protocol_mode.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (candidate_rp_address.is_set || is_set(candidate_rp_address.yfilter)) leaf_name_data.push_back(candidate_rp_address.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (announce_period.is_set || is_set(announce_period.yfilter)) leaf_name_data.push_back(announce_period.get_name_leafdata());
    if (protocol_mode_xr.is_set || is_set(protocol_mode_xr.yfilter)) leaf_name_data.push_back(protocol_mode_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AutoRp::Standby::CandidateRp::Rps::Rp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AutoRp::Standby::CandidateRp::Rps::Rp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AutoRp::Standby::CandidateRp::Rps::Rp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-mode")
    {
        protocol_mode = value;
        protocol_mode.value_namespace = name_space;
        protocol_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-address")
    {
        candidate_rp_address = value;
        candidate_rp_address.value_namespace = name_space;
        candidate_rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-period")
    {
        announce_period = value;
        announce_period.value_namespace = name_space;
        announce_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-mode-xr")
    {
        protocol_mode_xr = value;
        protocol_mode_xr.value_namespace = name_space;
        protocol_mode_xr.value_namespace_prefix = name_space_prefix;
    }
}

void AutoRp::Standby::CandidateRp::Rps::Rp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "protocol-mode")
    {
        protocol_mode.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-address")
    {
        candidate_rp_address.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "announce-period")
    {
        announce_period.yfilter = yfilter;
    }
    if(value_path == "protocol-mode-xr")
    {
        protocol_mode_xr.yfilter = yfilter;
    }
}

bool AutoRp::Standby::CandidateRp::Rps::Rp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "protocol-mode" || name == "access-list-name" || name == "candidate-rp-address" || name == "ttl" || name == "announce-period" || name == "protocol-mode-xr")
        return true;
    return false;
}

AutoRp::Standby::MappingAgent::MappingAgent()
    :
    traffic(std::make_shared<AutoRp::Standby::MappingAgent::Traffic>())
    , rp_addresses(std::make_shared<AutoRp::Standby::MappingAgent::RpAddresses>())
    , summary(std::make_shared<AutoRp::Standby::MappingAgent::Summary>())
{
    traffic->parent = this;
    rp_addresses->parent = this;
    summary->parent = this;

    yang_name = "mapping-agent"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

AutoRp::Standby::MappingAgent::~MappingAgent()
{
}

bool AutoRp::Standby::MappingAgent::has_data() const
{
    if (is_presence_container) return true;
    return (traffic !=  nullptr && traffic->has_data())
	|| (rp_addresses !=  nullptr && rp_addresses->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool AutoRp::Standby::MappingAgent::has_operation() const
{
    return is_set(yfilter)
	|| (traffic !=  nullptr && traffic->has_operation())
	|| (rp_addresses !=  nullptr && rp_addresses->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string AutoRp::Standby::MappingAgent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string AutoRp::Standby::MappingAgent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-agent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AutoRp::Standby::MappingAgent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AutoRp::Standby::MappingAgent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic")
    {
        if(traffic == nullptr)
        {
            traffic = std::make_shared<AutoRp::Standby::MappingAgent::Traffic>();
        }
        return traffic;
    }

    if(child_yang_name == "rp-addresses")
    {
        if(rp_addresses == nullptr)
        {
            rp_addresses = std::make_shared<AutoRp::Standby::MappingAgent::RpAddresses>();
        }
        return rp_addresses;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<AutoRp::Standby::MappingAgent::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AutoRp::Standby::MappingAgent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(traffic != nullptr)
    {
        _children["traffic"] = traffic;
    }

    if(rp_addresses != nullptr)
    {
        _children["rp-addresses"] = rp_addresses;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    return _children;
}

void AutoRp::Standby::MappingAgent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AutoRp::Standby::MappingAgent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AutoRp::Standby::MappingAgent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic" || name == "rp-addresses" || name == "summary")
        return true;
    return false;
}

AutoRp::Standby::MappingAgent::Traffic::Traffic()
    :
    active_sent_packets{YType::uint32, "active-sent-packets"},
    standby_sent_packets{YType::uint32, "standby-sent-packets"},
    active_received_packets{YType::uint32, "active-received-packets"},
    standby_received_packets{YType::uint32, "standby-received-packets"}
{

    yang_name = "traffic"; yang_parent_name = "mapping-agent"; is_top_level_class = false; has_list_ancestor = false; 
}

AutoRp::Standby::MappingAgent::Traffic::~Traffic()
{
}

bool AutoRp::Standby::MappingAgent::Traffic::has_data() const
{
    if (is_presence_container) return true;
    return active_sent_packets.is_set
	|| standby_sent_packets.is_set
	|| active_received_packets.is_set
	|| standby_received_packets.is_set;
}

bool AutoRp::Standby::MappingAgent::Traffic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_sent_packets.yfilter)
	|| ydk::is_set(standby_sent_packets.yfilter)
	|| ydk::is_set(active_received_packets.yfilter)
	|| ydk::is_set(standby_received_packets.yfilter);
}

std::string AutoRp::Standby::MappingAgent::Traffic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/standby/mapping-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string AutoRp::Standby::MappingAgent::Traffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AutoRp::Standby::MappingAgent::Traffic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_sent_packets.is_set || is_set(active_sent_packets.yfilter)) leaf_name_data.push_back(active_sent_packets.get_name_leafdata());
    if (standby_sent_packets.is_set || is_set(standby_sent_packets.yfilter)) leaf_name_data.push_back(standby_sent_packets.get_name_leafdata());
    if (active_received_packets.is_set || is_set(active_received_packets.yfilter)) leaf_name_data.push_back(active_received_packets.get_name_leafdata());
    if (standby_received_packets.is_set || is_set(standby_received_packets.yfilter)) leaf_name_data.push_back(standby_received_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AutoRp::Standby::MappingAgent::Traffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AutoRp::Standby::MappingAgent::Traffic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AutoRp::Standby::MappingAgent::Traffic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-sent-packets")
    {
        active_sent_packets = value;
        active_sent_packets.value_namespace = name_space;
        active_sent_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-sent-packets")
    {
        standby_sent_packets = value;
        standby_sent_packets.value_namespace = name_space;
        standby_sent_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-received-packets")
    {
        active_received_packets = value;
        active_received_packets.value_namespace = name_space;
        active_received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-received-packets")
    {
        standby_received_packets = value;
        standby_received_packets.value_namespace = name_space;
        standby_received_packets.value_namespace_prefix = name_space_prefix;
    }
}

void AutoRp::Standby::MappingAgent::Traffic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-sent-packets")
    {
        active_sent_packets.yfilter = yfilter;
    }
    if(value_path == "standby-sent-packets")
    {
        standby_sent_packets.yfilter = yfilter;
    }
    if(value_path == "active-received-packets")
    {
        active_received_packets.yfilter = yfilter;
    }
    if(value_path == "standby-received-packets")
    {
        standby_received_packets.yfilter = yfilter;
    }
}

bool AutoRp::Standby::MappingAgent::Traffic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-sent-packets" || name == "standby-sent-packets" || name == "active-received-packets" || name == "standby-received-packets")
        return true;
    return false;
}

AutoRp::Standby::MappingAgent::RpAddresses::RpAddresses()
    :
    rp_address(this, {"rp_address"})
{

    yang_name = "rp-addresses"; yang_parent_name = "mapping-agent"; is_top_level_class = false; has_list_ancestor = false; 
}

AutoRp::Standby::MappingAgent::RpAddresses::~RpAddresses()
{
}

bool AutoRp::Standby::MappingAgent::RpAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rp_address.len(); index++)
    {
        if(rp_address[index]->has_data())
            return true;
    }
    return false;
}

bool AutoRp::Standby::MappingAgent::RpAddresses::has_operation() const
{
    for (std::size_t index=0; index<rp_address.len(); index++)
    {
        if(rp_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AutoRp::Standby::MappingAgent::RpAddresses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/standby/mapping-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string AutoRp::Standby::MappingAgent::RpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AutoRp::Standby::MappingAgent::RpAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AutoRp::Standby::MappingAgent::RpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address")
    {
        auto ent_ = std::make_shared<AutoRp::Standby::MappingAgent::RpAddresses::RpAddress>();
        ent_->parent = this;
        rp_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AutoRp::Standby::MappingAgent::RpAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rp_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void AutoRp::Standby::MappingAgent::RpAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AutoRp::Standby::MappingAgent::RpAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AutoRp::Standby::MappingAgent::RpAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address")
        return true;
    return false;
}

AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::RpAddress()
    :
    rp_address{YType::str, "rp-address"},
    rp_address_xr{YType::str, "rp-address-xr"},
    expiry_time{YType::uint64, "expiry-time"},
    pim_version{YType::uint8, "pim-version"}
        ,
    range(this, {})
{

    yang_name = "rp-address"; yang_parent_name = "rp-addresses"; is_top_level_class = false; has_list_ancestor = false; 
}

AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::~RpAddress()
{
}

bool AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return rp_address.is_set
	|| rp_address_xr.is_set
	|| expiry_time.is_set
	|| pim_version.is_set;
}

bool AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(rp_address_xr.yfilter)
	|| ydk::is_set(expiry_time.yfilter)
	|| ydk::is_set(pim_version.yfilter);
}

std::string AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/standby/mapping-agent/rp-addresses/" << get_segment_path();
    return path_buffer.str();
}

std::string AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    ADD_KEY_TOKEN(rp_address, "rp-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (rp_address_xr.is_set || is_set(rp_address_xr.yfilter)) leaf_name_data.push_back(rp_address_xr.get_name_leafdata());
    if (expiry_time.is_set || is_set(expiry_time.yfilter)) leaf_name_data.push_back(expiry_time.get_name_leafdata());
    if (pim_version.is_set || is_set(pim_version.yfilter)) leaf_name_data.push_back(pim_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-address-xr")
    {
        rp_address_xr = value;
        rp_address_xr.value_namespace = name_space;
        rp_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-time")
    {
        expiry_time = value;
        expiry_time.value_namespace = name_space;
        expiry_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim-version")
    {
        pim_version = value;
        pim_version.value_namespace = name_space;
        pim_version.value_namespace_prefix = name_space_prefix;
    }
}

void AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "rp-address-xr")
    {
        rp_address_xr.yfilter = yfilter;
    }
    if(value_path == "expiry-time")
    {
        expiry_time.yfilter = yfilter;
    }
    if(value_path == "pim-version")
    {
        pim_version.yfilter = yfilter;
    }
}

bool AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "rp-address" || name == "rp-address-xr" || name == "expiry-time" || name == "pim-version")
        return true;
    return false;
}

AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range::Range()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    protocol_mode{YType::enumeration, "protocol-mode"},
    is_advertised{YType::boolean, "is-advertised"},
    create_type{YType::uint8, "create-type"},
    check_point_object_id{YType::uint32, "check-point-object-id"},
    uptime{YType::uint64, "uptime"}
{

    yang_name = "range"; yang_parent_name = "rp-address"; is_top_level_class = false; has_list_ancestor = true; 
}

AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range::~Range()
{
}

bool AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| protocol_mode.is_set
	|| is_advertised.is_set
	|| create_type.is_set
	|| check_point_object_id.is_set
	|| uptime.is_set;
}

bool AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(protocol_mode.yfilter)
	|| ydk::is_set(is_advertised.yfilter)
	|| ydk::is_set(create_type.yfilter)
	|| ydk::is_set(check_point_object_id.yfilter)
	|| ydk::is_set(uptime.yfilter);
}

std::string AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (protocol_mode.is_set || is_set(protocol_mode.yfilter)) leaf_name_data.push_back(protocol_mode.get_name_leafdata());
    if (is_advertised.is_set || is_set(is_advertised.yfilter)) leaf_name_data.push_back(is_advertised.get_name_leafdata());
    if (create_type.is_set || is_set(create_type.yfilter)) leaf_name_data.push_back(create_type.get_name_leafdata());
    if (check_point_object_id.is_set || is_set(check_point_object_id.yfilter)) leaf_name_data.push_back(check_point_object_id.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-mode")
    {
        protocol_mode = value;
        protocol_mode.value_namespace = name_space;
        protocol_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-advertised")
    {
        is_advertised = value;
        is_advertised.value_namespace = name_space;
        is_advertised.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create-type")
    {
        create_type = value;
        create_type.value_namespace = name_space;
        create_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "check-point-object-id")
    {
        check_point_object_id = value;
        check_point_object_id.value_namespace = name_space;
        check_point_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "protocol-mode")
    {
        protocol_mode.yfilter = yfilter;
    }
    if(value_path == "is-advertised")
    {
        is_advertised.yfilter = yfilter;
    }
    if(value_path == "create-type")
    {
        create_type.yfilter = yfilter;
    }
    if(value_path == "check-point-object-id")
    {
        check_point_object_id.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "protocol-mode" || name == "is-advertised" || name == "create-type" || name == "check-point-object-id" || name == "uptime")
        return true;
    return false;
}

AutoRp::Standby::MappingAgent::Summary::Summary()
    :
    is_maximum_disabled{YType::boolean, "is-maximum-disabled"},
    cache_limit{YType::uint32, "cache-limit"},
    cache_count{YType::uint32, "cache-count"}
{

    yang_name = "summary"; yang_parent_name = "mapping-agent"; is_top_level_class = false; has_list_ancestor = false; 
}

AutoRp::Standby::MappingAgent::Summary::~Summary()
{
}

bool AutoRp::Standby::MappingAgent::Summary::has_data() const
{
    if (is_presence_container) return true;
    return is_maximum_disabled.is_set
	|| cache_limit.is_set
	|| cache_count.is_set;
}

bool AutoRp::Standby::MappingAgent::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_maximum_disabled.yfilter)
	|| ydk::is_set(cache_limit.yfilter)
	|| ydk::is_set(cache_count.yfilter);
}

std::string AutoRp::Standby::MappingAgent::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/standby/mapping-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string AutoRp::Standby::MappingAgent::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AutoRp::Standby::MappingAgent::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_maximum_disabled.is_set || is_set(is_maximum_disabled.yfilter)) leaf_name_data.push_back(is_maximum_disabled.get_name_leafdata());
    if (cache_limit.is_set || is_set(cache_limit.yfilter)) leaf_name_data.push_back(cache_limit.get_name_leafdata());
    if (cache_count.is_set || is_set(cache_count.yfilter)) leaf_name_data.push_back(cache_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AutoRp::Standby::MappingAgent::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AutoRp::Standby::MappingAgent::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AutoRp::Standby::MappingAgent::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-maximum-disabled")
    {
        is_maximum_disabled = value;
        is_maximum_disabled.value_namespace = name_space;
        is_maximum_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-limit")
    {
        cache_limit = value;
        cache_limit.value_namespace = name_space;
        cache_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-count")
    {
        cache_count = value;
        cache_count.value_namespace = name_space;
        cache_count.value_namespace_prefix = name_space_prefix;
    }
}

void AutoRp::Standby::MappingAgent::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-maximum-disabled")
    {
        is_maximum_disabled.yfilter = yfilter;
    }
    if(value_path == "cache-limit")
    {
        cache_limit.yfilter = yfilter;
    }
    if(value_path == "cache-count")
    {
        cache_count.yfilter = yfilter;
    }
}

bool AutoRp::Standby::MappingAgent::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-maximum-disabled" || name == "cache-limit" || name == "cache-count")
        return true;
    return false;
}

AutoRp::Active::Active()
    :
    candidate_rp(std::make_shared<AutoRp::Active::CandidateRp>())
    , mapping_agent(std::make_shared<AutoRp::Active::MappingAgent>())
{
    candidate_rp->parent = this;
    mapping_agent->parent = this;

    yang_name = "active"; yang_parent_name = "auto-rp"; is_top_level_class = false; has_list_ancestor = false; 
}

AutoRp::Active::~Active()
{
}

bool AutoRp::Active::has_data() const
{
    if (is_presence_container) return true;
    return (candidate_rp !=  nullptr && candidate_rp->has_data())
	|| (mapping_agent !=  nullptr && mapping_agent->has_data());
}

bool AutoRp::Active::has_operation() const
{
    return is_set(yfilter)
	|| (candidate_rp !=  nullptr && candidate_rp->has_operation())
	|| (mapping_agent !=  nullptr && mapping_agent->has_operation());
}

std::string AutoRp::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/" << get_segment_path();
    return path_buffer.str();
}

std::string AutoRp::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AutoRp::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AutoRp::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-rp")
    {
        if(candidate_rp == nullptr)
        {
            candidate_rp = std::make_shared<AutoRp::Active::CandidateRp>();
        }
        return candidate_rp;
    }

    if(child_yang_name == "mapping-agent")
    {
        if(mapping_agent == nullptr)
        {
            mapping_agent = std::make_shared<AutoRp::Active::MappingAgent>();
        }
        return mapping_agent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AutoRp::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(candidate_rp != nullptr)
    {
        _children["candidate-rp"] = candidate_rp;
    }

    if(mapping_agent != nullptr)
    {
        _children["mapping-agent"] = mapping_agent;
    }

    return _children;
}

void AutoRp::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AutoRp::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AutoRp::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-rp" || name == "mapping-agent")
        return true;
    return false;
}

AutoRp::Active::CandidateRp::CandidateRp()
    :
    traffic(std::make_shared<AutoRp::Active::CandidateRp::Traffic>())
    , rps(std::make_shared<AutoRp::Active::CandidateRp::Rps>())
{
    traffic->parent = this;
    rps->parent = this;

    yang_name = "candidate-rp"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

AutoRp::Active::CandidateRp::~CandidateRp()
{
}

bool AutoRp::Active::CandidateRp::has_data() const
{
    if (is_presence_container) return true;
    return (traffic !=  nullptr && traffic->has_data())
	|| (rps !=  nullptr && rps->has_data());
}

bool AutoRp::Active::CandidateRp::has_operation() const
{
    return is_set(yfilter)
	|| (traffic !=  nullptr && traffic->has_operation())
	|| (rps !=  nullptr && rps->has_operation());
}

std::string AutoRp::Active::CandidateRp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/active/" << get_segment_path();
    return path_buffer.str();
}

std::string AutoRp::Active::CandidateRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AutoRp::Active::CandidateRp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AutoRp::Active::CandidateRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic")
    {
        if(traffic == nullptr)
        {
            traffic = std::make_shared<AutoRp::Active::CandidateRp::Traffic>();
        }
        return traffic;
    }

    if(child_yang_name == "rps")
    {
        if(rps == nullptr)
        {
            rps = std::make_shared<AutoRp::Active::CandidateRp::Rps>();
        }
        return rps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AutoRp::Active::CandidateRp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(traffic != nullptr)
    {
        _children["traffic"] = traffic;
    }

    if(rps != nullptr)
    {
        _children["rps"] = rps;
    }

    return _children;
}

void AutoRp::Active::CandidateRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AutoRp::Active::CandidateRp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AutoRp::Active::CandidateRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic" || name == "rps")
        return true;
    return false;
}

AutoRp::Active::CandidateRp::Traffic::Traffic()
    :
    active_sent_packets{YType::uint32, "active-sent-packets"},
    standby_sent_packets{YType::uint32, "standby-sent-packets"}
{

    yang_name = "traffic"; yang_parent_name = "candidate-rp"; is_top_level_class = false; has_list_ancestor = false; 
}

AutoRp::Active::CandidateRp::Traffic::~Traffic()
{
}

bool AutoRp::Active::CandidateRp::Traffic::has_data() const
{
    if (is_presence_container) return true;
    return active_sent_packets.is_set
	|| standby_sent_packets.is_set;
}

bool AutoRp::Active::CandidateRp::Traffic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_sent_packets.yfilter)
	|| ydk::is_set(standby_sent_packets.yfilter);
}

std::string AutoRp::Active::CandidateRp::Traffic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/active/candidate-rp/" << get_segment_path();
    return path_buffer.str();
}

std::string AutoRp::Active::CandidateRp::Traffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AutoRp::Active::CandidateRp::Traffic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_sent_packets.is_set || is_set(active_sent_packets.yfilter)) leaf_name_data.push_back(active_sent_packets.get_name_leafdata());
    if (standby_sent_packets.is_set || is_set(standby_sent_packets.yfilter)) leaf_name_data.push_back(standby_sent_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AutoRp::Active::CandidateRp::Traffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AutoRp::Active::CandidateRp::Traffic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AutoRp::Active::CandidateRp::Traffic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-sent-packets")
    {
        active_sent_packets = value;
        active_sent_packets.value_namespace = name_space;
        active_sent_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-sent-packets")
    {
        standby_sent_packets = value;
        standby_sent_packets.value_namespace = name_space;
        standby_sent_packets.value_namespace_prefix = name_space_prefix;
    }
}

void AutoRp::Active::CandidateRp::Traffic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-sent-packets")
    {
        active_sent_packets.yfilter = yfilter;
    }
    if(value_path == "standby-sent-packets")
    {
        standby_sent_packets.yfilter = yfilter;
    }
}

bool AutoRp::Active::CandidateRp::Traffic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-sent-packets" || name == "standby-sent-packets")
        return true;
    return false;
}

AutoRp::Active::CandidateRp::Rps::Rps()
    :
    rp(this, {})
{

    yang_name = "rps"; yang_parent_name = "candidate-rp"; is_top_level_class = false; has_list_ancestor = false; 
}

AutoRp::Active::CandidateRp::Rps::~Rps()
{
}

bool AutoRp::Active::CandidateRp::Rps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rp.len(); index++)
    {
        if(rp[index]->has_data())
            return true;
    }
    return false;
}

bool AutoRp::Active::CandidateRp::Rps::has_operation() const
{
    for (std::size_t index=0; index<rp.len(); index++)
    {
        if(rp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AutoRp::Active::CandidateRp::Rps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/active/candidate-rp/" << get_segment_path();
    return path_buffer.str();
}

std::string AutoRp::Active::CandidateRp::Rps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AutoRp::Active::CandidateRp::Rps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AutoRp::Active::CandidateRp::Rps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp")
    {
        auto ent_ = std::make_shared<AutoRp::Active::CandidateRp::Rps::Rp>();
        ent_->parent = this;
        rp.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AutoRp::Active::CandidateRp::Rps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void AutoRp::Active::CandidateRp::Rps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AutoRp::Active::CandidateRp::Rps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AutoRp::Active::CandidateRp::Rps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp")
        return true;
    return false;
}

AutoRp::Active::CandidateRp::Rps::Rp::Rp()
    :
    interface_name{YType::str, "interface-name"},
    protocol_mode{YType::enumeration, "protocol-mode"},
    access_list_name{YType::str, "access-list-name"},
    candidate_rp_address{YType::str, "candidate-rp-address"},
    ttl{YType::int32, "ttl"},
    announce_period{YType::int32, "announce-period"},
    protocol_mode_xr{YType::enumeration, "protocol-mode-xr"}
{

    yang_name = "rp"; yang_parent_name = "rps"; is_top_level_class = false; has_list_ancestor = false; 
}

AutoRp::Active::CandidateRp::Rps::Rp::~Rp()
{
}

bool AutoRp::Active::CandidateRp::Rps::Rp::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| protocol_mode.is_set
	|| access_list_name.is_set
	|| candidate_rp_address.is_set
	|| ttl.is_set
	|| announce_period.is_set
	|| protocol_mode_xr.is_set;
}

bool AutoRp::Active::CandidateRp::Rps::Rp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(protocol_mode.yfilter)
	|| ydk::is_set(access_list_name.yfilter)
	|| ydk::is_set(candidate_rp_address.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(announce_period.yfilter)
	|| ydk::is_set(protocol_mode_xr.yfilter);
}

std::string AutoRp::Active::CandidateRp::Rps::Rp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/active/candidate-rp/rps/" << get_segment_path();
    return path_buffer.str();
}

std::string AutoRp::Active::CandidateRp::Rps::Rp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AutoRp::Active::CandidateRp::Rps::Rp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (protocol_mode.is_set || is_set(protocol_mode.yfilter)) leaf_name_data.push_back(protocol_mode.get_name_leafdata());
    if (access_list_name.is_set || is_set(access_list_name.yfilter)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (candidate_rp_address.is_set || is_set(candidate_rp_address.yfilter)) leaf_name_data.push_back(candidate_rp_address.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (announce_period.is_set || is_set(announce_period.yfilter)) leaf_name_data.push_back(announce_period.get_name_leafdata());
    if (protocol_mode_xr.is_set || is_set(protocol_mode_xr.yfilter)) leaf_name_data.push_back(protocol_mode_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AutoRp::Active::CandidateRp::Rps::Rp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AutoRp::Active::CandidateRp::Rps::Rp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AutoRp::Active::CandidateRp::Rps::Rp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-mode")
    {
        protocol_mode = value;
        protocol_mode.value_namespace = name_space;
        protocol_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list-name")
    {
        access_list_name = value;
        access_list_name.value_namespace = name_space;
        access_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-address")
    {
        candidate_rp_address = value;
        candidate_rp_address.value_namespace = name_space;
        candidate_rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "announce-period")
    {
        announce_period = value;
        announce_period.value_namespace = name_space;
        announce_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-mode-xr")
    {
        protocol_mode_xr = value;
        protocol_mode_xr.value_namespace = name_space;
        protocol_mode_xr.value_namespace_prefix = name_space_prefix;
    }
}

void AutoRp::Active::CandidateRp::Rps::Rp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "protocol-mode")
    {
        protocol_mode.yfilter = yfilter;
    }
    if(value_path == "access-list-name")
    {
        access_list_name.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-address")
    {
        candidate_rp_address.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "announce-period")
    {
        announce_period.yfilter = yfilter;
    }
    if(value_path == "protocol-mode-xr")
    {
        protocol_mode_xr.yfilter = yfilter;
    }
}

bool AutoRp::Active::CandidateRp::Rps::Rp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "protocol-mode" || name == "access-list-name" || name == "candidate-rp-address" || name == "ttl" || name == "announce-period" || name == "protocol-mode-xr")
        return true;
    return false;
}

AutoRp::Active::MappingAgent::MappingAgent()
    :
    traffic(std::make_shared<AutoRp::Active::MappingAgent::Traffic>())
    , rp_addresses(std::make_shared<AutoRp::Active::MappingAgent::RpAddresses>())
    , summary(std::make_shared<AutoRp::Active::MappingAgent::Summary>())
{
    traffic->parent = this;
    rp_addresses->parent = this;
    summary->parent = this;

    yang_name = "mapping-agent"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

AutoRp::Active::MappingAgent::~MappingAgent()
{
}

bool AutoRp::Active::MappingAgent::has_data() const
{
    if (is_presence_container) return true;
    return (traffic !=  nullptr && traffic->has_data())
	|| (rp_addresses !=  nullptr && rp_addresses->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool AutoRp::Active::MappingAgent::has_operation() const
{
    return is_set(yfilter)
	|| (traffic !=  nullptr && traffic->has_operation())
	|| (rp_addresses !=  nullptr && rp_addresses->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string AutoRp::Active::MappingAgent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/active/" << get_segment_path();
    return path_buffer.str();
}

std::string AutoRp::Active::MappingAgent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-agent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AutoRp::Active::MappingAgent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AutoRp::Active::MappingAgent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "traffic")
    {
        if(traffic == nullptr)
        {
            traffic = std::make_shared<AutoRp::Active::MappingAgent::Traffic>();
        }
        return traffic;
    }

    if(child_yang_name == "rp-addresses")
    {
        if(rp_addresses == nullptr)
        {
            rp_addresses = std::make_shared<AutoRp::Active::MappingAgent::RpAddresses>();
        }
        return rp_addresses;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<AutoRp::Active::MappingAgent::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AutoRp::Active::MappingAgent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(traffic != nullptr)
    {
        _children["traffic"] = traffic;
    }

    if(rp_addresses != nullptr)
    {
        _children["rp-addresses"] = rp_addresses;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    return _children;
}

void AutoRp::Active::MappingAgent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AutoRp::Active::MappingAgent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AutoRp::Active::MappingAgent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic" || name == "rp-addresses" || name == "summary")
        return true;
    return false;
}

AutoRp::Active::MappingAgent::Traffic::Traffic()
    :
    active_sent_packets{YType::uint32, "active-sent-packets"},
    standby_sent_packets{YType::uint32, "standby-sent-packets"},
    active_received_packets{YType::uint32, "active-received-packets"},
    standby_received_packets{YType::uint32, "standby-received-packets"}
{

    yang_name = "traffic"; yang_parent_name = "mapping-agent"; is_top_level_class = false; has_list_ancestor = false; 
}

AutoRp::Active::MappingAgent::Traffic::~Traffic()
{
}

bool AutoRp::Active::MappingAgent::Traffic::has_data() const
{
    if (is_presence_container) return true;
    return active_sent_packets.is_set
	|| standby_sent_packets.is_set
	|| active_received_packets.is_set
	|| standby_received_packets.is_set;
}

bool AutoRp::Active::MappingAgent::Traffic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_sent_packets.yfilter)
	|| ydk::is_set(standby_sent_packets.yfilter)
	|| ydk::is_set(active_received_packets.yfilter)
	|| ydk::is_set(standby_received_packets.yfilter);
}

std::string AutoRp::Active::MappingAgent::Traffic::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/active/mapping-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string AutoRp::Active::MappingAgent::Traffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AutoRp::Active::MappingAgent::Traffic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_sent_packets.is_set || is_set(active_sent_packets.yfilter)) leaf_name_data.push_back(active_sent_packets.get_name_leafdata());
    if (standby_sent_packets.is_set || is_set(standby_sent_packets.yfilter)) leaf_name_data.push_back(standby_sent_packets.get_name_leafdata());
    if (active_received_packets.is_set || is_set(active_received_packets.yfilter)) leaf_name_data.push_back(active_received_packets.get_name_leafdata());
    if (standby_received_packets.is_set || is_set(standby_received_packets.yfilter)) leaf_name_data.push_back(standby_received_packets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AutoRp::Active::MappingAgent::Traffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AutoRp::Active::MappingAgent::Traffic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AutoRp::Active::MappingAgent::Traffic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-sent-packets")
    {
        active_sent_packets = value;
        active_sent_packets.value_namespace = name_space;
        active_sent_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-sent-packets")
    {
        standby_sent_packets = value;
        standby_sent_packets.value_namespace = name_space;
        standby_sent_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-received-packets")
    {
        active_received_packets = value;
        active_received_packets.value_namespace = name_space;
        active_received_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-received-packets")
    {
        standby_received_packets = value;
        standby_received_packets.value_namespace = name_space;
        standby_received_packets.value_namespace_prefix = name_space_prefix;
    }
}

void AutoRp::Active::MappingAgent::Traffic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-sent-packets")
    {
        active_sent_packets.yfilter = yfilter;
    }
    if(value_path == "standby-sent-packets")
    {
        standby_sent_packets.yfilter = yfilter;
    }
    if(value_path == "active-received-packets")
    {
        active_received_packets.yfilter = yfilter;
    }
    if(value_path == "standby-received-packets")
    {
        standby_received_packets.yfilter = yfilter;
    }
}

bool AutoRp::Active::MappingAgent::Traffic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-sent-packets" || name == "standby-sent-packets" || name == "active-received-packets" || name == "standby-received-packets")
        return true;
    return false;
}

AutoRp::Active::MappingAgent::RpAddresses::RpAddresses()
    :
    rp_address(this, {"rp_address"})
{

    yang_name = "rp-addresses"; yang_parent_name = "mapping-agent"; is_top_level_class = false; has_list_ancestor = false; 
}

AutoRp::Active::MappingAgent::RpAddresses::~RpAddresses()
{
}

bool AutoRp::Active::MappingAgent::RpAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rp_address.len(); index++)
    {
        if(rp_address[index]->has_data())
            return true;
    }
    return false;
}

bool AutoRp::Active::MappingAgent::RpAddresses::has_operation() const
{
    for (std::size_t index=0; index<rp_address.len(); index++)
    {
        if(rp_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AutoRp::Active::MappingAgent::RpAddresses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/active/mapping-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string AutoRp::Active::MappingAgent::RpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AutoRp::Active::MappingAgent::RpAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AutoRp::Active::MappingAgent::RpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address")
    {
        auto ent_ = std::make_shared<AutoRp::Active::MappingAgent::RpAddresses::RpAddress>();
        ent_->parent = this;
        rp_address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AutoRp::Active::MappingAgent::RpAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rp_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void AutoRp::Active::MappingAgent::RpAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AutoRp::Active::MappingAgent::RpAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool AutoRp::Active::MappingAgent::RpAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address")
        return true;
    return false;
}

AutoRp::Active::MappingAgent::RpAddresses::RpAddress::RpAddress()
    :
    rp_address{YType::str, "rp-address"},
    rp_address_xr{YType::str, "rp-address-xr"},
    expiry_time{YType::uint64, "expiry-time"},
    pim_version{YType::uint8, "pim-version"}
        ,
    range(this, {})
{

    yang_name = "rp-address"; yang_parent_name = "rp-addresses"; is_top_level_class = false; has_list_ancestor = false; 
}

AutoRp::Active::MappingAgent::RpAddresses::RpAddress::~RpAddress()
{
}

bool AutoRp::Active::MappingAgent::RpAddresses::RpAddress::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return rp_address.is_set
	|| rp_address_xr.is_set
	|| expiry_time.is_set
	|| pim_version.is_set;
}

bool AutoRp::Active::MappingAgent::RpAddresses::RpAddress::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(rp_address_xr.yfilter)
	|| ydk::is_set(expiry_time.yfilter)
	|| ydk::is_set(pim_version.yfilter);
}

std::string AutoRp::Active::MappingAgent::RpAddresses::RpAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/active/mapping-agent/rp-addresses/" << get_segment_path();
    return path_buffer.str();
}

std::string AutoRp::Active::MappingAgent::RpAddresses::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    ADD_KEY_TOKEN(rp_address, "rp-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AutoRp::Active::MappingAgent::RpAddresses::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (rp_address_xr.is_set || is_set(rp_address_xr.yfilter)) leaf_name_data.push_back(rp_address_xr.get_name_leafdata());
    if (expiry_time.is_set || is_set(expiry_time.yfilter)) leaf_name_data.push_back(expiry_time.get_name_leafdata());
    if (pim_version.is_set || is_set(pim_version.yfilter)) leaf_name_data.push_back(pim_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AutoRp::Active::MappingAgent::RpAddresses::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AutoRp::Active::MappingAgent::RpAddresses::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void AutoRp::Active::MappingAgent::RpAddresses::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-address-xr")
    {
        rp_address_xr = value;
        rp_address_xr.value_namespace = name_space;
        rp_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-time")
    {
        expiry_time = value;
        expiry_time.value_namespace = name_space;
        expiry_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim-version")
    {
        pim_version = value;
        pim_version.value_namespace = name_space;
        pim_version.value_namespace_prefix = name_space_prefix;
    }
}

void AutoRp::Active::MappingAgent::RpAddresses::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "rp-address-xr")
    {
        rp_address_xr.yfilter = yfilter;
    }
    if(value_path == "expiry-time")
    {
        expiry_time.yfilter = yfilter;
    }
    if(value_path == "pim-version")
    {
        pim_version.yfilter = yfilter;
    }
}

bool AutoRp::Active::MappingAgent::RpAddresses::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "rp-address" || name == "rp-address-xr" || name == "expiry-time" || name == "pim-version")
        return true;
    return false;
}

AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range::Range()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    protocol_mode{YType::enumeration, "protocol-mode"},
    is_advertised{YType::boolean, "is-advertised"},
    create_type{YType::uint8, "create-type"},
    check_point_object_id{YType::uint32, "check-point-object-id"},
    uptime{YType::uint64, "uptime"}
{

    yang_name = "range"; yang_parent_name = "rp-address"; is_top_level_class = false; has_list_ancestor = true; 
}

AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range::~Range()
{
}

bool AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| prefix_length.is_set
	|| protocol_mode.is_set
	|| is_advertised.is_set
	|| create_type.is_set
	|| check_point_object_id.is_set
	|| uptime.is_set;
}

bool AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(protocol_mode.yfilter)
	|| ydk::is_set(is_advertised.yfilter)
	|| ydk::is_set(create_type.yfilter)
	|| ydk::is_set(check_point_object_id.yfilter)
	|| ydk::is_set(uptime.yfilter);
}

std::string AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (protocol_mode.is_set || is_set(protocol_mode.yfilter)) leaf_name_data.push_back(protocol_mode.get_name_leafdata());
    if (is_advertised.is_set || is_set(is_advertised.yfilter)) leaf_name_data.push_back(is_advertised.get_name_leafdata());
    if (create_type.is_set || is_set(create_type.yfilter)) leaf_name_data.push_back(create_type.get_name_leafdata());
    if (check_point_object_id.is_set || is_set(check_point_object_id.yfilter)) leaf_name_data.push_back(check_point_object_id.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-mode")
    {
        protocol_mode = value;
        protocol_mode.value_namespace = name_space;
        protocol_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-advertised")
    {
        is_advertised = value;
        is_advertised.value_namespace = name_space;
        is_advertised.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create-type")
    {
        create_type = value;
        create_type.value_namespace = name_space;
        create_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "check-point-object-id")
    {
        check_point_object_id = value;
        check_point_object_id.value_namespace = name_space;
        check_point_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "protocol-mode")
    {
        protocol_mode.yfilter = yfilter;
    }
    if(value_path == "is-advertised")
    {
        is_advertised.yfilter = yfilter;
    }
    if(value_path == "create-type")
    {
        create_type.yfilter = yfilter;
    }
    if(value_path == "check-point-object-id")
    {
        check_point_object_id.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "protocol-mode" || name == "is-advertised" || name == "create-type" || name == "check-point-object-id" || name == "uptime")
        return true;
    return false;
}

AutoRp::Active::MappingAgent::Summary::Summary()
    :
    is_maximum_disabled{YType::boolean, "is-maximum-disabled"},
    cache_limit{YType::uint32, "cache-limit"},
    cache_count{YType::uint32, "cache-count"}
{

    yang_name = "summary"; yang_parent_name = "mapping-agent"; is_top_level_class = false; has_list_ancestor = false; 
}

AutoRp::Active::MappingAgent::Summary::~Summary()
{
}

bool AutoRp::Active::MappingAgent::Summary::has_data() const
{
    if (is_presence_container) return true;
    return is_maximum_disabled.is_set
	|| cache_limit.is_set
	|| cache_count.is_set;
}

bool AutoRp::Active::MappingAgent::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_maximum_disabled.yfilter)
	|| ydk::is_set(cache_limit.yfilter)
	|| ydk::is_set(cache_count.yfilter);
}

std::string AutoRp::Active::MappingAgent::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/active/mapping-agent/" << get_segment_path();
    return path_buffer.str();
}

std::string AutoRp::Active::MappingAgent::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AutoRp::Active::MappingAgent::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_maximum_disabled.is_set || is_set(is_maximum_disabled.yfilter)) leaf_name_data.push_back(is_maximum_disabled.get_name_leafdata());
    if (cache_limit.is_set || is_set(cache_limit.yfilter)) leaf_name_data.push_back(cache_limit.get_name_leafdata());
    if (cache_count.is_set || is_set(cache_count.yfilter)) leaf_name_data.push_back(cache_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> AutoRp::Active::MappingAgent::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> AutoRp::Active::MappingAgent::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void AutoRp::Active::MappingAgent::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-maximum-disabled")
    {
        is_maximum_disabled = value;
        is_maximum_disabled.value_namespace = name_space;
        is_maximum_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-limit")
    {
        cache_limit = value;
        cache_limit.value_namespace = name_space;
        cache_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cache-count")
    {
        cache_count = value;
        cache_count.value_namespace = name_space;
        cache_count.value_namespace_prefix = name_space_prefix;
    }
}

void AutoRp::Active::MappingAgent::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-maximum-disabled")
    {
        is_maximum_disabled.yfilter = yfilter;
    }
    if(value_path == "cache-limit")
    {
        cache_limit.yfilter = yfilter;
    }
    if(value_path == "cache-count")
    {
        cache_count.yfilter = yfilter;
    }
}

bool AutoRp::Active::MappingAgent::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-maximum-disabled" || name == "cache-limit" || name == "cache-count")
        return true;
    return false;
}

const Enum::YLeaf AutorpProtocolMode::sparse {0, "sparse"};
const Enum::YLeaf AutorpProtocolMode::bidirectional {1, "bidirectional"};


}
}

