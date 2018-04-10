
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_aaa_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_aaa_oper {

AaaData::AaaData()
{

    yang_name = "aaa-data"; yang_parent_name = "Cisco-IOS-XE-aaa-oper"; is_top_level_class = true; has_list_ancestor = false;
}

AaaData::~AaaData()
{
}

bool AaaData::has_data() const
{
    for (std::size_t index=0; index<aaa_users.size(); index++)
    {
        if(aaa_users[index]->has_data())
            return true;
    }
    return false;
}

bool AaaData::has_operation() const
{
    for (std::size_t index=0; index<aaa_users.size(); index++)
    {
        if(aaa_users[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string AaaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa-oper:aaa-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AaaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> AaaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aaa-users")
    {
        auto c = std::make_shared<AaaData::AaaUsers>();
        c->parent = this;
        aaa_users.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AaaData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : aaa_users)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AaaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void AaaData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> AaaData::clone_ptr() const
{
    return std::make_shared<AaaData>();
}

std::string AaaData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string AaaData::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function AaaData::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> AaaData::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool AaaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-users")
        return true;
    return false;
}

AaaData::AaaUsers::AaaUsers()
    :
    username{YType::str, "username"}
{

    yang_name = "aaa-users"; yang_parent_name = "aaa-data"; is_top_level_class = false; has_list_ancestor = false;
}

AaaData::AaaUsers::~AaaUsers()
{
}

bool AaaData::AaaUsers::has_data() const
{
    for (std::size_t index=0; index<aaa_sessions.size(); index++)
    {
        if(aaa_sessions[index]->has_data())
            return true;
    }
    return username.is_set;
}

bool AaaData::AaaUsers::has_operation() const
{
    for (std::size_t index=0; index<aaa_sessions.size(); index++)
    {
        if(aaa_sessions[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter);
}

std::string AaaData::AaaUsers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa-oper:aaa-data/" << get_segment_path();
    return path_buffer.str();
}

std::string AaaData::AaaUsers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa-users" <<"[username='" <<username <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AaaData::AaaUsers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AaaData::AaaUsers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aaa-sessions")
    {
        auto c = std::make_shared<AaaData::AaaUsers::AaaSessions>();
        c->parent = this;
        aaa_sessions.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AaaData::AaaUsers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : aaa_sessions)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void AaaData::AaaUsers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void AaaData::AaaUsers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool AaaData::AaaUsers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-sessions" || name == "username")
        return true;
    return false;
}

AaaData::AaaUsers::AaaSessions::AaaSessions()
    :
    aaa_uid{YType::uint32, "aaa-uid"},
    session_id{YType::uint32, "session-id"},
    ip_addr{YType::str, "ip-addr"},
    protocol{YType::enumeration, "protocol"},
    login_time{YType::str, "login-time"}
{

    yang_name = "aaa-sessions"; yang_parent_name = "aaa-users"; is_top_level_class = false; has_list_ancestor = true;
}

AaaData::AaaUsers::AaaSessions::~AaaSessions()
{
}

bool AaaData::AaaUsers::AaaSessions::has_data() const
{
    return aaa_uid.is_set
	|| session_id.is_set
	|| ip_addr.is_set
	|| protocol.is_set
	|| login_time.is_set;
}

bool AaaData::AaaUsers::AaaSessions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_uid.yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(login_time.yfilter);
}

std::string AaaData::AaaUsers::AaaSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa-sessions" <<"[aaa-uid='" <<aaa_uid <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > AaaData::AaaUsers::AaaSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_uid.is_set || is_set(aaa_uid.yfilter)) leaf_name_data.push_back(aaa_uid.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (login_time.is_set || is_set(login_time.yfilter)) leaf_name_data.push_back(login_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> AaaData::AaaUsers::AaaSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> AaaData::AaaUsers::AaaSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void AaaData::AaaUsers::AaaSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-uid")
    {
        aaa_uid = value;
        aaa_uid.value_namespace = name_space;
        aaa_uid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "login-time")
    {
        login_time = value;
        login_time.value_namespace = name_space;
        login_time.value_namespace_prefix = name_space_prefix;
    }
}

void AaaData::AaaUsers::AaaSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-uid")
    {
        aaa_uid.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "login-time")
    {
        login_time.yfilter = yfilter;
    }
}

bool AaaData::AaaUsers::AaaSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-uid" || name == "session-id" || name == "ip-addr" || name == "protocol" || name == "login-time")
        return true;
    return false;
}

const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_none {0, "aaa-sess-proto-type-none"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_invalid {1, "aaa-sess-proto-type-invalid"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_lcp {2, "aaa-sess-proto-type-lcp"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_ip {3, "aaa-sess-proto-type-ip"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_ipsec {4, "aaa-sess-proto-type-ipsec"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_ipx {5, "aaa-sess-proto-type-ipx"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_atalk {6, "aaa-sess-proto-type-atalk"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_xremote {7, "aaa-sess-proto-type-xremote"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_tn3270 {8, "aaa-sess-proto-type-tn3270"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_telnet {9, "aaa-sess-proto-type-telnet"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_tcp_clear {10, "aaa-sess-proto-type-tcp-clear"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_rlogin {11, "aaa-sess-proto-type-rlogin"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_lat {12, "aaa-sess-proto-type-lat"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_pad {13, "aaa-sess-proto-type-pad"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_osicp {14, "aaa-sess-proto-type-osicp"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_tagcp {15, "aaa-sess-proto-type-tagcp"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_bacp {16, "aaa-sess-proto-type-bacp"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_decnet {17, "aaa-sess-proto-type-decnet"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_ccp {18, "aaa-sess-proto-type-ccp"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_cdp {19, "aaa-sess-proto-type-cdp"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_bridging {20, "aaa-sess-proto-type-bridging"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_nbf {21, "aaa-sess-proto-type-nbf"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_bap {22, "aaa-sess-proto-type-bap"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_multilink {23, "aaa-sess-proto-type-multilink"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_h323 {24, "aaa-sess-proto-type-h323"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_unknown {25, "aaa-sess-proto-type-unknown"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_call_accept {26, "aaa-sess-proto-type-call-accept"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_vpdn_session {27, "aaa-sess-proto-type-vpdn-session"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_rm_call_status {28, "aaa-sess-proto-type-rm-call-status"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_rm_nas_status {29, "aaa-sess-proto-type-rm-nas-status"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_dial_in {30, "aaa-sess-proto-type-dial-in"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_dial_out {31, "aaa-sess-proto-type-dial-out"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_ss7 {32, "aaa-sess-proto-type-ss7"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_rms_stop {33, "aaa-sess-proto-type-rms-stop"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_rms_start {34, "aaa-sess-proto-type-rms-start"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_vpdn {35, "aaa-sess-proto-type-vpdn"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_sss {36, "aaa-sess-proto-type-sss"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_subscriber {37, "aaa-sess-proto-type-subscriber"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_atm {38, "aaa-sess-proto-type-atm"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_ssh {39, "aaa-sess-proto-type-ssh"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_ipv6 {40, "aaa-sess-proto-type-ipv6"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_aironet {41, "aaa-sess-proto-type-aironet"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_pppoe {42, "aaa-sess-proto-type-pppoe"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_entity {43, "aaa-sess-proto-type-entity"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_cdma {44, "aaa-sess-proto-type-cdma"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_crb {45, "aaa-sess-proto-type-crb"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_template {46, "aaa-sess-proto-type-template"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_aaa {47, "aaa-sess-proto-type-aaa"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_epd {48, "aaa-sess-proto-type-epd"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_mac {49, "aaa-sess-proto-type-mac"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_leap {50, "aaa-sess-proto-type-leap"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_igmp {51, "aaa-sess-proto-type-igmp"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_webvpn {52, "aaa-sess-proto-type-webvpn"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_cts {53, "aaa-sess-proto-type-cts"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_radius {54, "aaa-sess-proto-type-radius"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_evc {55, "aaa-sess-proto-type-evc"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_elmi {56, "aaa-sess-proto-type-elmi"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_dot1x {57, "aaa-sess-proto-type-dot1x"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_dtp {58, "aaa-sess-proto-type-dtp"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_lacp {59, "aaa-sess-proto-type-lacp"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_pagp {60, "aaa-sess-proto-type-pagp"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_stp {61, "aaa-sess-proto-type-stp"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_vtp {62, "aaa-sess-proto-type-vtp"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_ethernet_mac_tunnel {63, "aaa-sess-proto-type-ethernet-mac-tunnel"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_bridge_domain {64, "aaa-sess-proto-type-bridge-domain"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_ethernet_cfm {65, "aaa-sess-proto-type-ethernet-cfm"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_ethernet_service_instance {66, "aaa-sess-proto-type-ethernet-service-instance"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_service_group {67, "aaa-sess-proto-type-service-group"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_ip_dhcp_snooping {68, "aaa-sess-proto-type-ip-dhcp-snooping"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_ip_source_guard {69, "aaa-sess-proto-type-ip-source-guard"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_error_disable {70, "aaa-sess-proto-type-error-disable"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_cmac_bridge_domain {71, "aaa-sess-proto-type-cmac-bridge-domain"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_mac_in_mac_tunnel {72, "aaa-sess-proto-type-mac-in-mac-tunnel"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_l2vpn {73, "aaa-sess-proto-type-l2vpn"};
const Enum::YLeaf AaaSessProtType::aaa_sess_proto_type_snmp {74, "aaa-sess-proto-type-snmp"};


}
}

