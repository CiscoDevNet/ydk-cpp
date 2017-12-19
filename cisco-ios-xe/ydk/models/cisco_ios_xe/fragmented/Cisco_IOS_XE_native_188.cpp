
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_188.hpp"
#include "Cisco_IOS_XE_native_189.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

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
    security_level{YType::enumeration, "security-level"},
    context{YType::str, "context"},
    match{YType::enumeration, "match"},
    read{YType::str, "read"},
    write{YType::str, "write"},
    notify{YType::str, "notify"},
    access{YType::str, "access"}
{

    yang_name = "v3"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SnmpServer::Group::V3::~V3()
{
}

bool Native::SnmpServer::Group::V3::has_data() const
{
    return security_level.is_set
	|| context.is_set
	|| match.is_set
	|| read.is_set
	|| write.is_set
	|| notify.is_set
	|| access.is_set;
}

bool Native::SnmpServer::Group::V3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(security_level.yfilter)
	|| ydk::is_set(context.yfilter)
	|| ydk::is_set(match.yfilter)
	|| ydk::is_set(read.yfilter)
	|| ydk::is_set(write.yfilter)
	|| ydk::is_set(notify.yfilter)
	|| ydk::is_set(access.yfilter);
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

    if (security_level.is_set || is_set(security_level.yfilter)) leaf_name_data.push_back(security_level.get_name_leafdata());
    if (context.is_set || is_set(context.yfilter)) leaf_name_data.push_back(context.get_name_leafdata());
    if (match.is_set || is_set(match.yfilter)) leaf_name_data.push_back(match.get_name_leafdata());
    if (read.is_set || is_set(read.yfilter)) leaf_name_data.push_back(read.get_name_leafdata());
    if (write.is_set || is_set(write.yfilter)) leaf_name_data.push_back(write.get_name_leafdata());
    if (notify.is_set || is_set(notify.yfilter)) leaf_name_data.push_back(notify.get_name_leafdata());
    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

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
    if(value_path == "security-level")
    {
        security_level = value;
        security_level.value_namespace = name_space;
        security_level.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "read")
    {
        read = value;
        read.value_namespace = name_space;
        read.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write")
    {
        write = value;
        write.value_namespace = name_space;
        write.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notify")
    {
        notify = value;
        notify.value_namespace = name_space;
        notify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::Group::V3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "security-level")
    {
        security_level.yfilter = yfilter;
    }
    if(value_path == "context")
    {
        context.yfilter = yfilter;
    }
    if(value_path == "match")
    {
        match.yfilter = yfilter;
    }
    if(value_path == "read")
    {
        read.yfilter = yfilter;
    }
    if(value_path == "write")
    {
        write.yfilter = yfilter;
    }
    if(value_path == "notify")
    {
        notify.yfilter = yfilter;
    }
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Group::V3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security-level" || name == "context" || name == "match" || name == "read" || name == "write" || name == "notify" || name == "access")
        return true;
    return false;
}

Native::SnmpServer::Host::Host()
    :
    ip_address{YType::str, "ip-address"},
    community_string{YType::str, "community-string"},
    vrf{YType::str, "vrf"},
    informs{YType::empty, "informs"},
    traps{YType::empty, "traps"},
    version{YType::enumeration, "version"},
    security_level{YType::enumeration, "security-level"}
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
	|| vrf.is_set
	|| informs.is_set
	|| traps.is_set
	|| version.is_set
	|| security_level.is_set
	|| (trap_enable !=  nullptr && trap_enable->has_data());
}

bool Native::SnmpServer::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(community_string.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| ydk::is_set(informs.yfilter)
	|| ydk::is_set(traps.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(security_level.yfilter)
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
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());
    if (informs.is_set || is_set(informs.yfilter)) leaf_name_data.push_back(informs.get_name_leafdata());
    if (traps.is_set || is_set(traps.yfilter)) leaf_name_data.push_back(traps.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (security_level.is_set || is_set(security_level.yfilter)) leaf_name_data.push_back(security_level.get_name_leafdata());

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
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "informs")
    {
        informs = value;
        informs.value_namespace = name_space;
        informs.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "security-level")
    {
        security_level = value;
        security_level.value_namespace = name_space;
        security_level.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
    if(value_path == "informs")
    {
        informs.yfilter = yfilter;
    }
    if(value_path == "traps")
    {
        traps.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "security-level")
    {
        security_level.yfilter = yfilter;
    }
}

bool Native::SnmpServer::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trap-enable" || name == "ip-address" || name == "community-string" || name == "vrf" || name == "informs" || name == "traps" || name == "version" || name == "security-level")
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
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegigabitethernet{YType::str, "TwentyFiveGigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
    	,
    atm_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Informs::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Informs::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Informs::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
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
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
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
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
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
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegigabitethernet.is_set || is_set(twentyfivegigabitethernet.yfilter)) leaf_name_data.push_back(twentyfivegigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Informs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::SnmpServer::SourceInterface::Informs::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::SnmpServer::SourceInterface::Informs::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
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
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet = value;
        twentyfivegigabitethernet.value_namespace = name_space;
        twentyfivegigabitethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet.yfilter = yfilter;
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
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Informs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
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
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegigabitethernet{YType::str, "TwentyFiveGigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
    	,
    atm_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Traps::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Traps::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::SnmpServer::SourceInterface::Traps::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
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
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
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
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
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
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegigabitethernet.is_set || is_set(twentyfivegigabitethernet.yfilter)) leaf_name_data.push_back(twentyfivegigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::SourceInterface::Traps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::SnmpServer::SourceInterface::Traps::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::SnmpServer::SourceInterface::Traps::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
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
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet = value;
        twentyfivegigabitethernet.value_namespace = name_space;
        twentyfivegigabitethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet.yfilter = yfilter;
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
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::SnmpServer::SourceInterface::Traps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
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
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegigabitethernet{YType::str, "TwentyFiveGigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    sm{YType::str, "SM"},
    cellular{YType::str, "Cellular"},
    serial{YType::str, "Serial"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    virtual_template{YType::uint16, "Virtual-Template"},
    vlan{YType::uint16, "Vlan"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"}
    	,
    atm_subinterface(std::make_shared<Native::SnmpServer::TrapSource::ATMSubinterface>())
	,atm_acrsubinterface(std::make_shared<Native::SnmpServer::TrapSource::ATMACRsubinterface>())
	,lisp_subinterface(std::make_shared<Native::SnmpServer::TrapSource::LISPSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::SnmpServer::TrapSource::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
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
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| sm.is_set
	|| cellular.is_set
	|| serial.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| virtual_template.is_set
	|| vlan.is_set
	|| virtualportgroup.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
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
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
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
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegigabitethernet.is_set || is_set(twentyfivegigabitethernet.yfilter)) leaf_name_data.push_back(twentyfivegigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SnmpServer::TrapSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::SnmpServer::TrapSource::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::SnmpServer::TrapSource::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
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
    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet = value;
        fivegigabitethernet.value_namespace = name_space;
        fivegigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet = value;
        twentyfivegigabitethernet.value_namespace = name_space;
        twentyfivegigabitethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "FiveGigabitEthernet")
    {
        fivegigabitethernet.yfilter = yfilter;
    }
    if(value_path == "TwentyFiveGigabitEthernet")
    {
        twentyfivegigabitethernet.yfilter = yfilter;
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
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
}

bool Native::SnmpServer::TrapSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
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
    privpass{YType::str, "privpass"},
    access{YType::str, "access"}
{

    yang_name = "privpass"; yang_parent_name = "algo128"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::~Privpass()
{
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::has_data() const
{
    return privpass.is_set
	|| access.is_set;
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(privpass.yfilter)
	|| ydk::is_set(access.yfilter);
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

    if (privpass.is_set || is_set(privpass.yfilter)) leaf_name_data.push_back(privpass.get_name_leafdata());
    if (access.is_set || is_set(access.yfilter)) leaf_name_data.push_back(access.get_name_leafdata());

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
    if(value_path == "privpass")
    {
        privpass = value;
        privpass.value_namespace = name_space;
        privpass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access")
    {
        access = value;
        access.value_namespace = name_space;
        access.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "privpass")
    {
        privpass.yfilter = yfilter;
    }
    if(value_path == "access")
    {
        access.yfilter = yfilter;
    }
}

bool Native::SnmpServer::User::Names::V3::Auth::Sha::Auth_::Priv::Aes::Algo128::Privpass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "privpass" || name == "access")
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

Native::SegmentRouting::SegmentRouting()
    :
    mpls(nullptr) // presence node
{

    yang_name = "segment-routing"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::~SegmentRouting()
{
}

bool Native::SegmentRouting::has_data() const
{
    return (mpls !=  nullptr && mpls->has_data());
}

bool Native::SegmentRouting::has_operation() const
{
    return is_set(yfilter)
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string Native::SegmentRouting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-segment-routing:mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::SegmentRouting::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mpls != nullptr)
    {
        children["Cisco-IOS-XE-segment-routing:mpls"] = mpls;
    }

    return children;
}

void Native::SegmentRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::Mpls()
    :
    shutdown{YType::empty, "shutdown"}
    	,
    connected_prefix_sid_map(nullptr) // presence node
	,global_block(std::make_shared<Native::SegmentRouting::Mpls::GlobalBlock>())
	,mapping_server(nullptr) // presence node
	,set_attributes(nullptr) // presence node
{
    global_block->parent = this;

    yang_name = "mpls"; yang_parent_name = "segment-routing"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::~Mpls()
{
}

bool Native::SegmentRouting::Mpls::has_data() const
{
    return shutdown.is_set
	|| (connected_prefix_sid_map !=  nullptr && connected_prefix_sid_map->has_data())
	|| (global_block !=  nullptr && global_block->has_data())
	|| (mapping_server !=  nullptr && mapping_server->has_data())
	|| (set_attributes !=  nullptr && set_attributes->has_data());
}

bool Native::SegmentRouting::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| (connected_prefix_sid_map !=  nullptr && connected_prefix_sid_map->has_operation())
	|| (global_block !=  nullptr && global_block->has_operation())
	|| (mapping_server !=  nullptr && mapping_server->has_operation())
	|| (set_attributes !=  nullptr && set_attributes->has_operation());
}

std::string Native::SegmentRouting::Mpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-segment-routing:mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected-prefix-sid-map")
    {
        if(connected_prefix_sid_map == nullptr)
        {
            connected_prefix_sid_map = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap>();
        }
        return connected_prefix_sid_map;
    }

    if(child_yang_name == "global-block")
    {
        if(global_block == nullptr)
        {
            global_block = std::make_shared<Native::SegmentRouting::Mpls::GlobalBlock>();
        }
        return global_block;
    }

    if(child_yang_name == "mapping-server")
    {
        if(mapping_server == nullptr)
        {
            mapping_server = std::make_shared<Native::SegmentRouting::Mpls::MappingServer>();
        }
        return mapping_server;
    }

    if(child_yang_name == "set-attributes")
    {
        if(set_attributes == nullptr)
        {
            set_attributes = std::make_shared<Native::SegmentRouting::Mpls::SetAttributes>();
        }
        return set_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(connected_prefix_sid_map != nullptr)
    {
        children["connected-prefix-sid-map"] = connected_prefix_sid_map;
    }

    if(global_block != nullptr)
    {
        children["global-block"] = global_block;
    }

    if(mapping_server != nullptr)
    {
        children["mapping-server"] = mapping_server;
    }

    if(set_attributes != nullptr)
    {
        children["set-attributes"] = set_attributes;
    }

    return children;
}

void Native::SegmentRouting::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "connected-prefix-sid-map" || name == "global-block" || name == "mapping-server" || name == "set-attributes" || name == "shutdown")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::ConnectedPrefixSidMap()
    :
    address_family(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily>())
{
    address_family->parent = this;

    yang_name = "connected-prefix-sid-map"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::~ConnectedPrefixSidMap()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::has_data() const
{
    return (address_family !=  nullptr && address_family->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::has_operation() const
{
    return is_set(yfilter)
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected-prefix-sid-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily>();
        }
        return address_family;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::AddressFamily()
    :
    ipv4(nullptr) // presence node
	,ipv4_strict_spf(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf>())
{
    ipv4_strict_spf->parent = this;

    yang_name = "address-family"; yang_parent_name = "connected-prefix-sid-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::~AddressFamily()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_strict_spf !=  nullptr && ipv4_strict_spf->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_strict_spf !=  nullptr && ipv4_strict_spf->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-strict-spf")
    {
        if(ipv4_strict_spf == nullptr)
        {
            ipv4_strict_spf = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf>();
        }
        return ipv4_strict_spf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv4_strict_spf != nullptr)
    {
        children["ipv4-strict-spf"] = ipv4_strict_spf;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-strict-spf")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Ipv4()
{

    yang_name = "ipv4"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return false;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        for(auto const & c : prefixes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefixes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Prefixes()
    :
    ipprefix{YType::str, "ipprefix"}
    	,
    index_(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_>())
	,absolute(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute>())
{
    index_->parent = this;
    absolute->parent = this;

    yang_name = "prefixes"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::~Prefixes()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::has_data() const
{
    return ipprefix.is_set
	|| (index_ !=  nullptr && index_->has_data())
	|| (absolute !=  nullptr && absolute->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipprefix.yfilter)
	|| (index_ !=  nullptr && index_->has_operation())
	|| (absolute !=  nullptr && absolute->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[ipprefix='" <<ipprefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipprefix.is_set || is_set(ipprefix.yfilter)) leaf_name_data.push_back(ipprefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "index")
    {
        if(index_ == nullptr)
        {
            index_ = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_>();
        }
        return index_;
    }

    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute>();
        }
        return absolute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(index_ != nullptr)
    {
        children["index"] = index_;
    }

    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipprefix")
    {
        ipprefix = value;
        ipprefix.value_namespace = name_space;
        ipprefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipprefix")
    {
        ipprefix.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "absolute" || name == "ipprefix")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::Index_()
    :
    range_start{YType::uint32, "range-start"},
    range{YType::uint32, "range"},
    attach{YType::empty, "attach"}
{

    yang_name = "index"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::~Index_()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::has_data() const
{
    return range_start.is_set
	|| range.is_set
	|| attach.is_set;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(attach.yfilter);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range" || name == "attach")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::Absolute()
    :
    range_start{YType::uint32, "range-start"},
    range{YType::uint32, "range"},
    attach{YType::empty, "attach"}
{

    yang_name = "absolute"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::~Absolute()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_data() const
{
    return range_start.is_set
	|| range.is_set
	|| attach.is_set;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(attach.yfilter);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range" || name == "attach")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4StrictSpf()
    :
    ipv4(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "ipv4-strict-spf"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::~Ipv4StrictSpf()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-strict-spf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::Ipv4()
    :
    strict_spf(nullptr) // presence node
{

    yang_name = "ipv4"; yang_parent_name = "ipv4-strict-spf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::~Ipv4()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::has_data() const
{
    return (strict_spf !=  nullptr && strict_spf->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (strict_spf !=  nullptr && strict_spf->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/ipv4-strict-spf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "strict-spf")
    {
        if(strict_spf == nullptr)
        {
            strict_spf = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf>();
        }
        return strict_spf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(strict_spf != nullptr)
    {
        children["strict-spf"] = strict_spf;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "strict-spf")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::StrictSpf()
{

    yang_name = "strict-spf"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::~StrictSpf()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return false;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/ipv4-strict-spf/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "strict-spf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        for(auto const & c : prefixes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefixes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Prefixes()
    :
    ipprefix{YType::str, "ipprefix"}
    	,
    index_(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_>())
	,absolute(std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute>())
{
    index_->parent = this;
    absolute->parent = this;

    yang_name = "prefixes"; yang_parent_name = "strict-spf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::~Prefixes()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_data() const
{
    return ipprefix.is_set
	|| (index_ !=  nullptr && index_->has_data())
	|| (absolute !=  nullptr && absolute->has_data());
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipprefix.yfilter)
	|| (index_ !=  nullptr && index_->has_operation())
	|| (absolute !=  nullptr && absolute->has_operation());
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/connected-prefix-sid-map/address-family/ipv4-strict-spf/ipv4/strict-spf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[ipprefix='" <<ipprefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipprefix.is_set || is_set(ipprefix.yfilter)) leaf_name_data.push_back(ipprefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "index")
    {
        if(index_ == nullptr)
        {
            index_ = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_>();
        }
        return index_;
    }

    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute>();
        }
        return absolute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(index_ != nullptr)
    {
        children["index"] = index_;
    }

    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipprefix")
    {
        ipprefix = value;
        ipprefix.value_namespace = name_space;
        ipprefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipprefix")
    {
        ipprefix.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "absolute" || name == "ipprefix")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::Index_()
    :
    range_start{YType::uint32, "range-start"},
    range{YType::uint32, "range"},
    attach{YType::empty, "attach"}
{

    yang_name = "index"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::~Index_()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::has_data() const
{
    return range_start.is_set
	|| range.is_set
	|| attach.is_set;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(attach.yfilter);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range" || name == "attach")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::Absolute()
    :
    range_start{YType::uint32, "range-start"},
    range{YType::uint32, "range"},
    attach{YType::empty, "attach"}
{

    yang_name = "absolute"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::~Absolute()
{
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_data() const
{
    return range_start.is_set
	|| range.is_set
	|| attach.is_set;
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(attach.yfilter);
}

std::string Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::ConnectedPrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range" || name == "attach")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::GlobalBlock::GlobalBlock()
    :
    range_start{YType::uint32, "range-start"},
    range_end{YType::uint32, "range-end"}
{

    yang_name = "global-block"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::GlobalBlock::~GlobalBlock()
{
}

bool Native::SegmentRouting::Mpls::GlobalBlock::has_data() const
{
    return range_start.is_set
	|| range_end.is_set;
}

bool Native::SegmentRouting::Mpls::GlobalBlock::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range_end.yfilter);
}

std::string Native::SegmentRouting::Mpls::GlobalBlock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::GlobalBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-block";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::GlobalBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range_end.is_set || is_set(range_end.yfilter)) leaf_name_data.push_back(range_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::GlobalBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::GlobalBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::GlobalBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-end")
    {
        range_end = value;
        range_end.value_namespace = name_space;
        range_end.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::GlobalBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range-end")
    {
        range_end.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::GlobalBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range-end")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::MappingServer()
    :
    prefix_sid_map(nullptr) // presence node
{

    yang_name = "mapping-server"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::MappingServer::~MappingServer()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::has_data() const
{
    return (prefix_sid_map !=  nullptr && prefix_sid_map->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::has_operation() const
{
    return is_set(yfilter)
	|| (prefix_sid_map !=  nullptr && prefix_sid_map->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid-map")
    {
        if(prefix_sid_map == nullptr)
        {
            prefix_sid_map = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap>();
        }
        return prefix_sid_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix_sid_map != nullptr)
    {
        children["prefix-sid-map"] = prefix_sid_map;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::MappingServer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::MappingServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid-map")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::PrefixSidMap()
    :
    address_family(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily>())
{
    address_family->parent = this;

    yang_name = "prefix-sid-map"; yang_parent_name = "mapping-server"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::~PrefixSidMap()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::has_data() const
{
    return (address_family !=  nullptr && address_family->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::has_operation() const
{
    return is_set(yfilter)
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily>();
        }
        return address_family;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::AddressFamily()
    :
    ipv4(nullptr) // presence node
	,ipv4_strict_spf(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf>())
{
    ipv4_strict_spf->parent = this;

    yang_name = "address-family"; yang_parent_name = "prefix-sid-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::~AddressFamily()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv4_strict_spf !=  nullptr && ipv4_strict_spf->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv4_strict_spf !=  nullptr && ipv4_strict_spf->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv4-strict-spf")
    {
        if(ipv4_strict_spf == nullptr)
        {
            ipv4_strict_spf = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf>();
        }
        return ipv4_strict_spf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv4_strict_spf != nullptr)
    {
        children["ipv4-strict-spf"] = ipv4_strict_spf;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv4-strict-spf")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Ipv4()
{

    yang_name = "ipv4"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return false;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        for(auto const & c : prefixes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefixes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Prefixes()
    :
    ipprefix{YType::str, "ipprefix"}
    	,
    index_(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_>())
	,absolute(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute>())
{
    index_->parent = this;
    absolute->parent = this;

    yang_name = "prefixes"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::~Prefixes()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::has_data() const
{
    return ipprefix.is_set
	|| (index_ !=  nullptr && index_->has_data())
	|| (absolute !=  nullptr && absolute->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipprefix.yfilter)
	|| (index_ !=  nullptr && index_->has_operation())
	|| (absolute !=  nullptr && absolute->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[ipprefix='" <<ipprefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipprefix.is_set || is_set(ipprefix.yfilter)) leaf_name_data.push_back(ipprefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "index")
    {
        if(index_ == nullptr)
        {
            index_ = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_>();
        }
        return index_;
    }

    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute>();
        }
        return absolute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(index_ != nullptr)
    {
        children["index"] = index_;
    }

    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipprefix")
    {
        ipprefix = value;
        ipprefix.value_namespace = name_space;
        ipprefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipprefix")
    {
        ipprefix.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "absolute" || name == "ipprefix")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::Index_()
    :
    range_start{YType::uint32, "range-start"},
    range{YType::uint32, "range"},
    attach{YType::empty, "attach"}
{

    yang_name = "index"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::~Index_()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::has_data() const
{
    return range_start.is_set
	|| range.is_set
	|| attach.is_set;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(attach.yfilter);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Index_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range" || name == "attach")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::Absolute()
    :
    range_start{YType::uint32, "range-start"},
    range{YType::uint32, "range"},
    attach{YType::empty, "attach"}
{

    yang_name = "absolute"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::~Absolute()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_data() const
{
    return range_start.is_set
	|| range.is_set
	|| attach.is_set;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(attach.yfilter);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4::Prefixes::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range" || name == "attach")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4StrictSpf()
    :
    ipv4(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "ipv4-strict-spf"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::~Ipv4StrictSpf()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-strict-spf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::Ipv4()
    :
    strict_spf(nullptr) // presence node
{

    yang_name = "ipv4"; yang_parent_name = "ipv4-strict-spf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::~Ipv4()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::has_data() const
{
    return (strict_spf !=  nullptr && strict_spf->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (strict_spf !=  nullptr && strict_spf->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/ipv4-strict-spf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "strict-spf")
    {
        if(strict_spf == nullptr)
        {
            strict_spf = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf>();
        }
        return strict_spf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(strict_spf != nullptr)
    {
        children["strict-spf"] = strict_spf;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "strict-spf")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::StrictSpf()
{

    yang_name = "strict-spf"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::~StrictSpf()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return false;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/ipv4-strict-spf/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "strict-spf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        for(auto const & c : prefixes)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefixes)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Prefixes()
    :
    ipprefix{YType::str, "ipprefix"}
    	,
    index_(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_>())
	,absolute(std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute>())
{
    index_->parent = this;
    absolute->parent = this;

    yang_name = "prefixes"; yang_parent_name = "strict-spf"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::~Prefixes()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_data() const
{
    return ipprefix.is_set
	|| (index_ !=  nullptr && index_->has_data())
	|| (absolute !=  nullptr && absolute->has_data());
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipprefix.yfilter)
	|| (index_ !=  nullptr && index_->has_operation())
	|| (absolute !=  nullptr && absolute->has_operation());
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/mapping-server/prefix-sid-map/address-family/ipv4-strict-spf/ipv4/strict-spf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[ipprefix='" <<ipprefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipprefix.is_set || is_set(ipprefix.yfilter)) leaf_name_data.push_back(ipprefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "index")
    {
        if(index_ == nullptr)
        {
            index_ = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_>();
        }
        return index_;
    }

    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute>();
        }
        return absolute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(index_ != nullptr)
    {
        children["index"] = index_;
    }

    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipprefix")
    {
        ipprefix = value;
        ipprefix.value_namespace = name_space;
        ipprefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipprefix")
    {
        ipprefix.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "index" || name == "absolute" || name == "ipprefix")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::Index_()
    :
    range_start{YType::uint32, "range-start"},
    range{YType::uint32, "range"},
    attach{YType::empty, "attach"}
{

    yang_name = "index"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::~Index_()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::has_data() const
{
    return range_start.is_set
	|| range.is_set
	|| attach.is_set;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(attach.yfilter);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "index";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Index_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range" || name == "attach")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::Absolute()
    :
    range_start{YType::uint32, "range-start"},
    range{YType::uint32, "range"},
    attach{YType::empty, "attach"}
{

    yang_name = "absolute"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::~Absolute()
{
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_data() const
{
    return range_start.is_set
	|| range.is_set
	|| attach.is_set;
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(attach.yfilter);
}

std::string Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (attach.is_set || is_set(attach.yfilter)) leaf_name_data.push_back(attach.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range-start")
    {
        range_start = value;
        range_start.value_namespace = name_space;
        range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attach")
    {
        attach = value;
        attach.value_namespace = name_space;
        attach.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range-start")
    {
        range_start.yfilter = yfilter;
    }
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "attach")
    {
        attach.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::MappingServer::PrefixSidMap::AddressFamily::Ipv4StrictSpf::Ipv4::StrictSpf::Prefixes::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range" || name == "attach")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::SetAttributes::SetAttributes()
    :
    address_family(std::make_shared<Native::SegmentRouting::Mpls::SetAttributes::AddressFamily>())
{
    address_family->parent = this;

    yang_name = "set-attributes"; yang_parent_name = "mpls"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::SetAttributes::~SetAttributes()
{
}

bool Native::SegmentRouting::Mpls::SetAttributes::has_data() const
{
    return (address_family !=  nullptr && address_family->has_data());
}

bool Native::SegmentRouting::Mpls::SetAttributes::has_operation() const
{
    return is_set(yfilter)
	|| (address_family !=  nullptr && address_family->has_operation());
}

std::string Native::SegmentRouting::Mpls::SetAttributes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::SetAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::SetAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::SetAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        if(address_family == nullptr)
        {
            address_family = std::make_shared<Native::SegmentRouting::Mpls::SetAttributes::AddressFamily>();
        }
        return address_family;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::SetAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family != nullptr)
    {
        children["address-family"] = address_family;
    }

    return children;
}

void Native::SegmentRouting::Mpls::SetAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::SetAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::SetAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::AddressFamily()
    :
    ipv4(nullptr) // presence node
{

    yang_name = "address-family"; yang_parent_name = "set-attributes"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::~AddressFamily()
{
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/set-attributes/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4")
        return true;
    return false;
}

Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::Ipv4()
    :
    explicit_null{YType::empty, "explicit-null"},
    sr_label_preferred{YType::empty, "sr-label-preferred"}
{

    yang_name = "ipv4"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = false;
}

Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::~Ipv4()
{
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::has_data() const
{
    return explicit_null.is_set
	|| sr_label_preferred.is_set;
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(explicit_null.yfilter)
	|| ydk::is_set(sr_label_preferred.yfilter);
}

std::string Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/segment-routing/Cisco-IOS-XE-segment-routing:mpls/set-attributes/address-family/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (explicit_null.is_set || is_set(explicit_null.yfilter)) leaf_name_data.push_back(explicit_null.get_name_leafdata());
    if (sr_label_preferred.is_set || is_set(sr_label_preferred.yfilter)) leaf_name_data.push_back(sr_label_preferred.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "explicit-null")
    {
        explicit_null = value;
        explicit_null.value_namespace = name_space;
        explicit_null.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-label-preferred")
    {
        sr_label_preferred = value;
        sr_label_preferred.value_namespace = name_space;
        sr_label_preferred.value_namespace_prefix = name_space_prefix;
    }
}

void Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "explicit-null")
    {
        explicit_null.yfilter = yfilter;
    }
    if(value_path == "sr-label-preferred")
    {
        sr_label_preferred.yfilter = yfilter;
    }
}

bool Native::SegmentRouting::Mpls::SetAttributes::AddressFamily::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-null" || name == "sr-label-preferred")
        return true;
    return false;
}

Native::License::License()
    :
    smart{YType::enumeration, "smart"}
    	,
    udi(std::make_shared<Native::License::Udi>())
	,feature(std::make_shared<Native::License::Feature>())
	,accept(std::make_shared<Native::License::Accept>())
	,boot(std::make_shared<Native::License::Boot>())
{
    udi->parent = this;
    feature->parent = this;
    accept->parent = this;
    boot->parent = this;

    yang_name = "license"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::~License()
{
}

bool Native::License::has_data() const
{
    return smart.is_set
	|| (udi !=  nullptr && udi->has_data())
	|| (feature !=  nullptr && feature->has_data())
	|| (accept !=  nullptr && accept->has_data())
	|| (boot !=  nullptr && boot->has_data());
}

bool Native::License::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(smart.yfilter)
	|| (udi !=  nullptr && udi->has_operation())
	|| (feature !=  nullptr && feature->has_operation())
	|| (accept !=  nullptr && accept->has_operation())
	|| (boot !=  nullptr && boot->has_operation());
}

std::string Native::License::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "license";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (smart.is_set || is_set(smart.yfilter)) leaf_name_data.push_back(smart.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "udi")
    {
        if(udi == nullptr)
        {
            udi = std::make_shared<Native::License::Udi>();
        }
        return udi;
    }

    if(child_yang_name == "feature")
    {
        if(feature == nullptr)
        {
            feature = std::make_shared<Native::License::Feature>();
        }
        return feature;
    }

    if(child_yang_name == "accept")
    {
        if(accept == nullptr)
        {
            accept = std::make_shared<Native::License::Accept>();
        }
        return accept;
    }

    if(child_yang_name == "boot")
    {
        if(boot == nullptr)
        {
            boot = std::make_shared<Native::License::Boot>();
        }
        return boot;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(udi != nullptr)
    {
        children["udi"] = udi;
    }

    if(feature != nullptr)
    {
        children["feature"] = feature;
    }

    if(accept != nullptr)
    {
        children["accept"] = accept;
    }

    if(boot != nullptr)
    {
        children["boot"] = boot;
    }

    return children;
}

void Native::License::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "smart")
    {
        smart = value;
        smart.value_namespace = name_space;
        smart.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "smart")
    {
        smart.yfilter = yfilter;
    }
}

bool Native::License::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udi" || name == "feature" || name == "accept" || name == "boot" || name == "smart")
        return true;
    return false;
}

Native::License::Udi::Udi()
    :
    pid{YType::str, "pid"},
    sn{YType::str, "sn"}
{

    yang_name = "udi"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Udi::~Udi()
{
}

bool Native::License::Udi::has_data() const
{
    return pid.is_set
	|| sn.is_set;
}

bool Native::License::Udi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pid.yfilter)
	|| ydk::is_set(sn.yfilter);
}

std::string Native::License::Udi::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Udi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Udi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pid.is_set || is_set(pid.yfilter)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (sn.is_set || is_set(sn.yfilter)) leaf_name_data.push_back(sn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Udi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Udi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Udi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pid")
    {
        pid = value;
        pid.value_namespace = name_space;
        pid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sn")
    {
        sn = value;
        sn.value_namespace = name_space;
        sn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Udi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pid")
    {
        pid.yfilter = yfilter;
    }
    if(value_path == "sn")
    {
        sn.yfilter = yfilter;
    }
}

bool Native::License::Udi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pid" || name == "sn")
        return true;
    return false;
}

Native::License::Feature::Feature()
    :
    name{YType::str, "name"}
    	,
    port(std::make_shared<Native::License::Feature::Port>())
{
    port->parent = this;

    yang_name = "feature"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Feature::~Feature()
{
}

bool Native::License::Feature::has_data() const
{
    return name.is_set
	|| (port !=  nullptr && port->has_data());
}

bool Native::License::Feature::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string Native::License::Feature::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Feature::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "feature";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Feature::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Feature::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<Native::License::Feature::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Feature::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(port != nullptr)
    {
        children["port"] = port;
    }

    return children;
}

void Native::License::Feature::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Feature::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::License::Feature::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "name")
        return true;
    return false;
}

Native::License::Feature::Port::Port()
    :
    bulk{YType::empty, "bulk"},
    onegig{YType::uint8, "onegig"},
    b_6xonegig{YType::uint8, "b-6xonegig"},
    tengig{YType::uint8, "tengig"}
{

    yang_name = "port"; yang_parent_name = "feature"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Feature::Port::~Port()
{
}

bool Native::License::Feature::Port::has_data() const
{
    return bulk.is_set
	|| onegig.is_set
	|| b_6xonegig.is_set
	|| tengig.is_set;
}

bool Native::License::Feature::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bulk.yfilter)
	|| ydk::is_set(onegig.yfilter)
	|| ydk::is_set(b_6xonegig.yfilter)
	|| ydk::is_set(tengig.yfilter);
}

std::string Native::License::Feature::Port::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/feature/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Feature::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Feature::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bulk.is_set || is_set(bulk.yfilter)) leaf_name_data.push_back(bulk.get_name_leafdata());
    if (onegig.is_set || is_set(onegig.yfilter)) leaf_name_data.push_back(onegig.get_name_leafdata());
    if (b_6xonegig.is_set || is_set(b_6xonegig.yfilter)) leaf_name_data.push_back(b_6xonegig.get_name_leafdata());
    if (tengig.is_set || is_set(tengig.yfilter)) leaf_name_data.push_back(tengig.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Feature::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Feature::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Feature::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bulk")
    {
        bulk = value;
        bulk.value_namespace = name_space;
        bulk.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "onegig")
    {
        onegig = value;
        onegig.value_namespace = name_space;
        onegig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "b-6xonegig")
    {
        b_6xonegig = value;
        b_6xonegig.value_namespace = name_space;
        b_6xonegig.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tengig")
    {
        tengig = value;
        tengig.value_namespace = name_space;
        tengig.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Feature::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bulk")
    {
        bulk.yfilter = yfilter;
    }
    if(value_path == "onegig")
    {
        onegig.yfilter = yfilter;
    }
    if(value_path == "b-6xonegig")
    {
        b_6xonegig.yfilter = yfilter;
    }
    if(value_path == "tengig")
    {
        tengig.yfilter = yfilter;
    }
}

bool Native::License::Feature::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bulk" || name == "onegig" || name == "b-6xonegig" || name == "tengig")
        return true;
    return false;
}

Native::License::Accept::Accept()
    :
    end{YType::empty, "end"},
    user{YType::empty, "user"},
    agreement{YType::empty, "agreement"}
{

    yang_name = "accept"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Accept::~Accept()
{
}

bool Native::License::Accept::has_data() const
{
    return end.is_set
	|| user.is_set
	|| agreement.is_set;
}

bool Native::License::Accept::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(end.yfilter)
	|| ydk::is_set(user.yfilter)
	|| ydk::is_set(agreement.yfilter);
}

std::string Native::License::Accept::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Accept::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accept";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Accept::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end.is_set || is_set(end.yfilter)) leaf_name_data.push_back(end.get_name_leafdata());
    if (user.is_set || is_set(user.yfilter)) leaf_name_data.push_back(user.get_name_leafdata());
    if (agreement.is_set || is_set(agreement.yfilter)) leaf_name_data.push_back(agreement.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Accept::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Accept::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Accept::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "end")
    {
        end = value;
        end.value_namespace = name_space;
        end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user")
    {
        user = value;
        user.value_namespace = name_space;
        user.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "agreement")
    {
        agreement = value;
        agreement.value_namespace = name_space;
        agreement.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Accept::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "end")
    {
        end.yfilter = yfilter;
    }
    if(value_path == "user")
    {
        user.yfilter = yfilter;
    }
    if(value_path == "agreement")
    {
        agreement.yfilter = yfilter;
    }
}

bool Native::License::Accept::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "end" || name == "user" || name == "agreement")
        return true;
    return false;
}

Native::License::Boot::Boot()
    :
    level(std::make_shared<Native::License::Boot::Level>())
	,boot_module(std::make_shared<Native::License::Boot::BootModule>())
{
    level->parent = this;
    boot_module->parent = this;

    yang_name = "boot"; yang_parent_name = "license"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Boot::~Boot()
{
}

bool Native::License::Boot::has_data() const
{
    return (level !=  nullptr && level->has_data())
	|| (boot_module !=  nullptr && boot_module->has_data());
}

bool Native::License::Boot::has_operation() const
{
    return is_set(yfilter)
	|| (level !=  nullptr && level->has_operation())
	|| (boot_module !=  nullptr && boot_module->has_operation());
}

std::string Native::License::Boot::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        if(level == nullptr)
        {
            level = std::make_shared<Native::License::Boot::Level>();
        }
        return level;
    }

    if(child_yang_name == "boot-module")
    {
        if(boot_module == nullptr)
        {
            boot_module = std::make_shared<Native::License::Boot::BootModule>();
        }
        return boot_module;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level != nullptr)
    {
        children["level"] = level;
    }

    if(boot_module != nullptr)
    {
        children["boot-module"] = boot_module;
    }

    return children;
}

void Native::License::Boot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::License::Boot::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::License::Boot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "boot-module")
        return true;
    return false;
}

Native::License::Boot::Level::Level()
    :
    ipbasek9{YType::empty, "ipbasek9"},
    lanbasek9{YType::empty, "lanbasek9"},
    advancedmetroipaccess{YType::empty, "advancedmetroipaccess"},
    metroaccess{YType::empty, "metroaccess"},
    metroipaccess{YType::empty, "metroipaccess"},
    entservices{YType::empty, "entservices"},
    adventerprise{YType::empty, "adventerprise"},
    appx{YType::empty, "appx"},
    appxk9{YType::empty, "appxk9"},
    ax{YType::empty, "ax"},
    security{YType::empty, "security"},
    securityk9{YType::empty, "securityk9"}
    	,
    ipbase(nullptr) // presence node
	,ipservices(nullptr) // presence node
	,ipservicesk9(nullptr) // presence node
	,lanbase(nullptr) // presence node
	,lite(nullptr) // presence node
	,metroaggrservices(nullptr) // presence node
	,uck9(nullptr) // presence node
{

    yang_name = "level"; yang_parent_name = "boot"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Boot::Level::~Level()
{
}

bool Native::License::Boot::Level::has_data() const
{
    return ipbasek9.is_set
	|| lanbasek9.is_set
	|| advancedmetroipaccess.is_set
	|| metroaccess.is_set
	|| metroipaccess.is_set
	|| entservices.is_set
	|| adventerprise.is_set
	|| appx.is_set
	|| appxk9.is_set
	|| ax.is_set
	|| security.is_set
	|| securityk9.is_set
	|| (ipbase !=  nullptr && ipbase->has_data())
	|| (ipservices !=  nullptr && ipservices->has_data())
	|| (ipservicesk9 !=  nullptr && ipservicesk9->has_data())
	|| (lanbase !=  nullptr && lanbase->has_data())
	|| (lite !=  nullptr && lite->has_data())
	|| (metroaggrservices !=  nullptr && metroaggrservices->has_data())
	|| (uck9 !=  nullptr && uck9->has_data());
}

bool Native::License::Boot::Level::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipbasek9.yfilter)
	|| ydk::is_set(lanbasek9.yfilter)
	|| ydk::is_set(advancedmetroipaccess.yfilter)
	|| ydk::is_set(metroaccess.yfilter)
	|| ydk::is_set(metroipaccess.yfilter)
	|| ydk::is_set(entservices.yfilter)
	|| ydk::is_set(adventerprise.yfilter)
	|| ydk::is_set(appx.yfilter)
	|| ydk::is_set(appxk9.yfilter)
	|| ydk::is_set(ax.yfilter)
	|| ydk::is_set(security.yfilter)
	|| ydk::is_set(securityk9.yfilter)
	|| (ipbase !=  nullptr && ipbase->has_operation())
	|| (ipservices !=  nullptr && ipservices->has_operation())
	|| (ipservicesk9 !=  nullptr && ipservicesk9->has_operation())
	|| (lanbase !=  nullptr && lanbase->has_operation())
	|| (lite !=  nullptr && lite->has_operation())
	|| (metroaggrservices !=  nullptr && metroaggrservices->has_operation())
	|| (uck9 !=  nullptr && uck9->has_operation());
}

std::string Native::License::Boot::Level::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipbasek9.is_set || is_set(ipbasek9.yfilter)) leaf_name_data.push_back(ipbasek9.get_name_leafdata());
    if (lanbasek9.is_set || is_set(lanbasek9.yfilter)) leaf_name_data.push_back(lanbasek9.get_name_leafdata());
    if (advancedmetroipaccess.is_set || is_set(advancedmetroipaccess.yfilter)) leaf_name_data.push_back(advancedmetroipaccess.get_name_leafdata());
    if (metroaccess.is_set || is_set(metroaccess.yfilter)) leaf_name_data.push_back(metroaccess.get_name_leafdata());
    if (metroipaccess.is_set || is_set(metroipaccess.yfilter)) leaf_name_data.push_back(metroipaccess.get_name_leafdata());
    if (entservices.is_set || is_set(entservices.yfilter)) leaf_name_data.push_back(entservices.get_name_leafdata());
    if (adventerprise.is_set || is_set(adventerprise.yfilter)) leaf_name_data.push_back(adventerprise.get_name_leafdata());
    if (appx.is_set || is_set(appx.yfilter)) leaf_name_data.push_back(appx.get_name_leafdata());
    if (appxk9.is_set || is_set(appxk9.yfilter)) leaf_name_data.push_back(appxk9.get_name_leafdata());
    if (ax.is_set || is_set(ax.yfilter)) leaf_name_data.push_back(ax.get_name_leafdata());
    if (security.is_set || is_set(security.yfilter)) leaf_name_data.push_back(security.get_name_leafdata());
    if (securityk9.is_set || is_set(securityk9.yfilter)) leaf_name_data.push_back(securityk9.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipbase")
    {
        if(ipbase == nullptr)
        {
            ipbase = std::make_shared<Native::License::Boot::Level::Ipbase>();
        }
        return ipbase;
    }

    if(child_yang_name == "ipservices")
    {
        if(ipservices == nullptr)
        {
            ipservices = std::make_shared<Native::License::Boot::Level::Ipservices>();
        }
        return ipservices;
    }

    if(child_yang_name == "ipservicesk9")
    {
        if(ipservicesk9 == nullptr)
        {
            ipservicesk9 = std::make_shared<Native::License::Boot::Level::Ipservicesk9>();
        }
        return ipservicesk9;
    }

    if(child_yang_name == "lanbase")
    {
        if(lanbase == nullptr)
        {
            lanbase = std::make_shared<Native::License::Boot::Level::Lanbase>();
        }
        return lanbase;
    }

    if(child_yang_name == "lite")
    {
        if(lite == nullptr)
        {
            lite = std::make_shared<Native::License::Boot::Level::Lite>();
        }
        return lite;
    }

    if(child_yang_name == "metroaggrservices")
    {
        if(metroaggrservices == nullptr)
        {
            metroaggrservices = std::make_shared<Native::License::Boot::Level::Metroaggrservices>();
        }
        return metroaggrservices;
    }

    if(child_yang_name == "uck9")
    {
        if(uck9 == nullptr)
        {
            uck9 = std::make_shared<Native::License::Boot::Level::Uck9>();
        }
        return uck9;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipbase != nullptr)
    {
        children["ipbase"] = ipbase;
    }

    if(ipservices != nullptr)
    {
        children["ipservices"] = ipservices;
    }

    if(ipservicesk9 != nullptr)
    {
        children["ipservicesk9"] = ipservicesk9;
    }

    if(lanbase != nullptr)
    {
        children["lanbase"] = lanbase;
    }

    if(lite != nullptr)
    {
        children["lite"] = lite;
    }

    if(metroaggrservices != nullptr)
    {
        children["metroaggrservices"] = metroaggrservices;
    }

    if(uck9 != nullptr)
    {
        children["uck9"] = uck9;
    }

    return children;
}

void Native::License::Boot::Level::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipbasek9")
    {
        ipbasek9 = value;
        ipbasek9.value_namespace = name_space;
        ipbasek9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lanbasek9")
    {
        lanbasek9 = value;
        lanbasek9.value_namespace = name_space;
        lanbasek9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advancedmetroipaccess")
    {
        advancedmetroipaccess = value;
        advancedmetroipaccess.value_namespace = name_space;
        advancedmetroipaccess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metroaccess")
    {
        metroaccess = value;
        metroaccess.value_namespace = name_space;
        metroaccess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metroipaccess")
    {
        metroipaccess = value;
        metroipaccess.value_namespace = name_space;
        metroipaccess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "entservices")
    {
        entservices = value;
        entservices.value_namespace = name_space;
        entservices.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adventerprise")
    {
        adventerprise = value;
        adventerprise.value_namespace = name_space;
        adventerprise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "appx")
    {
        appx = value;
        appx.value_namespace = name_space;
        appx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "appxk9")
    {
        appxk9 = value;
        appxk9.value_namespace = name_space;
        appxk9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ax")
    {
        ax = value;
        ax.value_namespace = name_space;
        ax.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "security")
    {
        security = value;
        security.value_namespace = name_space;
        security.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "securityk9")
    {
        securityk9 = value;
        securityk9.value_namespace = name_space;
        securityk9.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipbasek9")
    {
        ipbasek9.yfilter = yfilter;
    }
    if(value_path == "lanbasek9")
    {
        lanbasek9.yfilter = yfilter;
    }
    if(value_path == "advancedmetroipaccess")
    {
        advancedmetroipaccess.yfilter = yfilter;
    }
    if(value_path == "metroaccess")
    {
        metroaccess.yfilter = yfilter;
    }
    if(value_path == "metroipaccess")
    {
        metroipaccess.yfilter = yfilter;
    }
    if(value_path == "entservices")
    {
        entservices.yfilter = yfilter;
    }
    if(value_path == "adventerprise")
    {
        adventerprise.yfilter = yfilter;
    }
    if(value_path == "appx")
    {
        appx.yfilter = yfilter;
    }
    if(value_path == "appxk9")
    {
        appxk9.yfilter = yfilter;
    }
    if(value_path == "ax")
    {
        ax.yfilter = yfilter;
    }
    if(value_path == "security")
    {
        security.yfilter = yfilter;
    }
    if(value_path == "securityk9")
    {
        securityk9.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipbase" || name == "ipservices" || name == "ipservicesk9" || name == "lanbase" || name == "lite" || name == "metroaggrservices" || name == "uck9" || name == "ipbasek9" || name == "lanbasek9" || name == "advancedmetroipaccess" || name == "metroaccess" || name == "metroipaccess" || name == "entservices" || name == "adventerprise" || name == "appx" || name == "appxk9" || name == "ax" || name == "security" || name == "securityk9")
        return true;
    return false;
}

Native::License::Boot::Level::Ipbase::Ipbase()
    :
    switch_{YType::uint8, "switch"}
{

    yang_name = "ipbase"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Boot::Level::Ipbase::~Ipbase()
{
}

bool Native::License::Boot::Level::Ipbase::has_data() const
{
    return switch_.is_set;
}

bool Native::License::Boot::Level::Ipbase::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::License::Boot::Level::Ipbase::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::Ipbase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipbase";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::Ipbase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Ipbase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Ipbase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Ipbase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Ipbase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Ipbase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::License::Boot::Level::Ipservices::Ipservices()
    :
    switch_{YType::empty, "switch"}
{

    yang_name = "ipservices"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Boot::Level::Ipservices::~Ipservices()
{
}

bool Native::License::Boot::Level::Ipservices::has_data() const
{
    return switch_.is_set;
}

bool Native::License::Boot::Level::Ipservices::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::License::Boot::Level::Ipservices::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::Ipservices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipservices";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::Ipservices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Ipservices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Ipservices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Ipservices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Ipservices::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Ipservices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::License::Boot::Level::Ipservicesk9::Ipservicesk9()
    :
    switch_{YType::empty, "switch"}
{

    yang_name = "ipservicesk9"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Boot::Level::Ipservicesk9::~Ipservicesk9()
{
}

bool Native::License::Boot::Level::Ipservicesk9::has_data() const
{
    return switch_.is_set;
}

bool Native::License::Boot::Level::Ipservicesk9::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::License::Boot::Level::Ipservicesk9::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::Ipservicesk9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipservicesk9";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::Ipservicesk9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Ipservicesk9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Ipservicesk9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Ipservicesk9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Ipservicesk9::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Ipservicesk9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::License::Boot::Level::Lanbase::Lanbase()
    :
    switch_{YType::empty, "switch"}
{

    yang_name = "lanbase"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Boot::Level::Lanbase::~Lanbase()
{
}

bool Native::License::Boot::Level::Lanbase::has_data() const
{
    return switch_.is_set;
}

bool Native::License::Boot::Level::Lanbase::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::License::Boot::Level::Lanbase::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::Lanbase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lanbase";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::Lanbase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Lanbase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Lanbase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Lanbase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Lanbase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Lanbase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::License::Boot::Level::Lite::Lite()
    :
    switch_{YType::empty, "switch"}
{

    yang_name = "lite"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Boot::Level::Lite::~Lite()
{
}

bool Native::License::Boot::Level::Lite::has_data() const
{
    return switch_.is_set;
}

bool Native::License::Boot::Level::Lite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::License::Boot::Level::Lite::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::Lite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::Lite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Lite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Lite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Lite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Lite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Lite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::License::Boot::Level::Metroaggrservices::Metroaggrservices()
    :
    switch_{YType::empty, "switch"}
{

    yang_name = "metroaggrservices"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Boot::Level::Metroaggrservices::~Metroaggrservices()
{
}

bool Native::License::Boot::Level::Metroaggrservices::has_data() const
{
    return switch_.is_set;
}

bool Native::License::Boot::Level::Metroaggrservices::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::License::Boot::Level::Metroaggrservices::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::Metroaggrservices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metroaggrservices";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::Metroaggrservices::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Metroaggrservices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Metroaggrservices::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Metroaggrservices::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Metroaggrservices::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Metroaggrservices::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::License::Boot::Level::Uck9::Uck9()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "uck9"; yang_parent_name = "level"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Boot::Level::Uck9::~Uck9()
{
}

bool Native::License::Boot::Level::Uck9::has_data() const
{
    return disable.is_set;
}

bool Native::License::Boot::Level::Uck9::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Native::License::Boot::Level::Uck9::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/level/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::Level::Uck9::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uck9";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::Level::Uck9::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::Level::Uck9::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::Level::Uck9::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::Level::Uck9::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::Level::Uck9::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Native::License::Boot::Level::Uck9::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

Native::License::Boot::BootModule::BootModule()
    :
    module{YType::enumeration, "module"}
    	,
    technology_package(std::make_shared<Native::License::Boot::BootModule::TechnologyPackage>())
{
    technology_package->parent = this;

    yang_name = "boot-module"; yang_parent_name = "boot"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Boot::BootModule::~BootModule()
{
}

bool Native::License::Boot::BootModule::has_data() const
{
    return module.is_set
	|| (technology_package !=  nullptr && technology_package->has_data());
}

bool Native::License::Boot::BootModule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(module.yfilter)
	|| (technology_package !=  nullptr && technology_package->has_operation());
}

std::string Native::License::Boot::BootModule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::BootModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot-module";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::BootModule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (module.is_set || is_set(module.yfilter)) leaf_name_data.push_back(module.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::BootModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "technology-package")
    {
        if(technology_package == nullptr)
        {
            technology_package = std::make_shared<Native::License::Boot::BootModule::TechnologyPackage>();
        }
        return technology_package;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::BootModule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(technology_package != nullptr)
    {
        children["technology-package"] = technology_package;
    }

    return children;
}

void Native::License::Boot::BootModule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "module")
    {
        module = value;
        module.value_namespace = name_space;
        module.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::BootModule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "module")
    {
        module.yfilter = yfilter;
    }
}

bool Native::License::Boot::BootModule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "technology-package" || name == "module")
        return true;
    return false;
}

Native::License::Boot::BootModule::TechnologyPackage::TechnologyPackage()
    :
    securityk9{YType::empty, "securityk9"},
    uck9{YType::empty, "uck9"},
    datak9{YType::empty, "datak9"}
{

    yang_name = "technology-package"; yang_parent_name = "boot-module"; is_top_level_class = false; has_list_ancestor = false;
}

Native::License::Boot::BootModule::TechnologyPackage::~TechnologyPackage()
{
}

bool Native::License::Boot::BootModule::TechnologyPackage::has_data() const
{
    return securityk9.is_set
	|| uck9.is_set
	|| datak9.is_set;
}

bool Native::License::Boot::BootModule::TechnologyPackage::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(securityk9.yfilter)
	|| ydk::is_set(uck9.yfilter)
	|| ydk::is_set(datak9.yfilter);
}

std::string Native::License::Boot::BootModule::TechnologyPackage::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/license/boot/boot-module/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::License::Boot::BootModule::TechnologyPackage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "technology-package";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::License::Boot::BootModule::TechnologyPackage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (securityk9.is_set || is_set(securityk9.yfilter)) leaf_name_data.push_back(securityk9.get_name_leafdata());
    if (uck9.is_set || is_set(uck9.yfilter)) leaf_name_data.push_back(uck9.get_name_leafdata());
    if (datak9.is_set || is_set(datak9.yfilter)) leaf_name_data.push_back(datak9.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::License::Boot::BootModule::TechnologyPackage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::License::Boot::BootModule::TechnologyPackage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::License::Boot::BootModule::TechnologyPackage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "securityk9")
    {
        securityk9 = value;
        securityk9.value_namespace = name_space;
        securityk9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uck9")
    {
        uck9 = value;
        uck9.value_namespace = name_space;
        uck9.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "datak9")
    {
        datak9 = value;
        datak9.value_namespace = name_space;
        datak9.value_namespace_prefix = name_space_prefix;
    }
}

void Native::License::Boot::BootModule::TechnologyPackage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "securityk9")
    {
        securityk9.yfilter = yfilter;
    }
    if(value_path == "uck9")
    {
        uck9.yfilter = yfilter;
    }
    if(value_path == "datak9")
    {
        datak9.yfilter = yfilter;
    }
}

bool Native::License::Boot::BootModule::TechnologyPackage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "securityk9" || name == "uck9" || name == "datak9")
        return true;
    return false;
}

Native::MemorySize::MemorySize()
    :
    iomem{YType::uint8, "iomem"}
{

    yang_name = "memory-size"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::MemorySize::~MemorySize()
{
}

bool Native::MemorySize::has_data() const
{
    return iomem.is_set;
}

bool Native::MemorySize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iomem.yfilter);
}

std::string Native::MemorySize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::MemorySize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-size";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::MemorySize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iomem.is_set || is_set(iomem.yfilter)) leaf_name_data.push_back(iomem.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::MemorySize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MemorySize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::MemorySize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iomem")
    {
        iomem = value;
        iomem.value_namespace = name_space;
        iomem.value_namespace_prefix = name_space_prefix;
    }
}

void Native::MemorySize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iomem")
    {
        iomem.yfilter = yfilter;
    }
}

bool Native::MemorySize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iomem")
        return true;
    return false;
}

Native::Transceiver::Transceiver()
    :
    type(std::make_shared<Native::Transceiver::Type>())
{
    type->parent = this;

    yang_name = "transceiver"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Transceiver::~Transceiver()
{
}

bool Native::Transceiver::has_data() const
{
    return (type !=  nullptr && type->has_data());
}

bool Native::Transceiver::has_operation() const
{
    return is_set(yfilter)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Transceiver::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Transceiver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transceiver";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Transceiver::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Transceiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Transceiver::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Transceiver::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Transceiver::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Transceiver::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Transceiver::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type")
        return true;
    return false;
}

Native::Transceiver::Type::Type()
    :
    all(std::make_shared<Native::Transceiver::Type::All>())
{
    all->parent = this;

    yang_name = "type"; yang_parent_name = "transceiver"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Transceiver::Type::~Type()
{
}

bool Native::Transceiver::Type::has_data() const
{
    return (all !=  nullptr && all->has_data());
}

bool Native::Transceiver::Type::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Transceiver::Type::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/transceiver/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Transceiver::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Transceiver::Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Transceiver::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Transceiver::Type::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Transceiver::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all != nullptr)
    {
        children["all"] = all;
    }

    return children;
}

void Native::Transceiver::Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Transceiver::Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Transceiver::Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Transceiver::Type::All::All()
    :
    monitoring(nullptr) // presence node
{

    yang_name = "all"; yang_parent_name = "type"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Transceiver::Type::All::~All()
{
}

bool Native::Transceiver::Type::All::has_data() const
{
    return (monitoring !=  nullptr && monitoring->has_data());
}

bool Native::Transceiver::Type::All::has_operation() const
{
    return is_set(yfilter)
	|| (monitoring !=  nullptr && monitoring->has_operation());
}

std::string Native::Transceiver::Type::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/transceiver/type/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Transceiver::Type::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Transceiver::Type::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Transceiver::Type::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitoring")
    {
        if(monitoring == nullptr)
        {
            monitoring = std::make_shared<Native::Transceiver::Type::All::Monitoring>();
        }
        return monitoring;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Transceiver::Type::All::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(monitoring != nullptr)
    {
        children["monitoring"] = monitoring;
    }

    return children;
}

void Native::Transceiver::Type::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Transceiver::Type::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Transceiver::Type::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitoring")
        return true;
    return false;
}

Native::Transceiver::Type::All::Monitoring::Monitoring()
    :
    interval{YType::uint16, "interval"}
{

    yang_name = "monitoring"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Transceiver::Type::All::Monitoring::~Monitoring()
{
}

bool Native::Transceiver::Type::All::Monitoring::has_data() const
{
    return interval.is_set;
}

bool Native::Transceiver::Type::All::Monitoring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter);
}

std::string Native::Transceiver::Type::All::Monitoring::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/transceiver/type/all/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Transceiver::Type::All::Monitoring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitoring";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Transceiver::Type::All::Monitoring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Transceiver::Type::All::Monitoring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Transceiver::Type::All::Monitoring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Transceiver::Type::All::Monitoring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Transceiver::Type::All::Monitoring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
}

bool Native::Transceiver::Type::All::Monitoring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval")
        return true;
    return false;
}

Native::ServiceInsertion::ServiceInsertion()
    :
    acg_reload_delay{YType::uint16, "Cisco-IOS-XE-service-insertion:acg-reload-delay"}
    	,
    service_context(std::make_shared<Native::ServiceInsertion::ServiceContext>())
	,swap(std::make_shared<Native::ServiceInsertion::Swap>())
{
    service_context->parent = this;
    swap->parent = this;

    yang_name = "service-insertion"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ServiceInsertion::~ServiceInsertion()
{
}

bool Native::ServiceInsertion::has_data() const
{
    for (std::size_t index=0; index<appnav_controller_group.size(); index++)
    {
        if(appnav_controller_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_node_group.size(); index++)
    {
        if(service_node_group[index]->has_data())
            return true;
    }
    return acg_reload_delay.is_set
	|| (service_context !=  nullptr && service_context->has_data())
	|| (swap !=  nullptr && swap->has_data());
}

bool Native::ServiceInsertion::has_operation() const
{
    for (std::size_t index=0; index<appnav_controller_group.size(); index++)
    {
        if(appnav_controller_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_node_group.size(); index++)
    {
        if(service_node_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(acg_reload_delay.yfilter)
	|| (service_context !=  nullptr && service_context->has_operation())
	|| (swap !=  nullptr && swap->has_operation());
}

std::string Native::ServiceInsertion::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceInsertion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-insertion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceInsertion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acg_reload_delay.is_set || is_set(acg_reload_delay.yfilter)) leaf_name_data.push_back(acg_reload_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceInsertion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-service-insertion:appnav-controller-group")
    {
        for(auto const & c : appnav_controller_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceInsertion::AppnavControllerGroup>();
        c->parent = this;
        appnav_controller_group.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-service-insertion:service-context")
    {
        if(service_context == nullptr)
        {
            service_context = std::make_shared<Native::ServiceInsertion::ServiceContext>();
        }
        return service_context;
    }

    if(child_yang_name == "Cisco-IOS-XE-service-insertion:service-node-group")
    {
        for(auto const & c : service_node_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceInsertion::ServiceNodeGroup>();
        c->parent = this;
        service_node_group.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-service-insertion:swap")
    {
        if(swap == nullptr)
        {
            swap = std::make_shared<Native::ServiceInsertion::Swap>();
        }
        return swap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : appnav_controller_group)
    {
        children[c->get_segment_path()] = c;
    }

    if(service_context != nullptr)
    {
        children["Cisco-IOS-XE-service-insertion:service-context"] = service_context;
    }

    for (auto const & c : service_node_group)
    {
        children[c->get_segment_path()] = c;
    }

    if(swap != nullptr)
    {
        children["Cisco-IOS-XE-service-insertion:swap"] = swap;
    }

    return children;
}

void Native::ServiceInsertion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-service-insertion:acg-reload-delay")
    {
        acg_reload_delay = value;
        acg_reload_delay.value_namespace = name_space;
        acg_reload_delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceInsertion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acg-reload-delay")
    {
        acg_reload_delay.yfilter = yfilter;
    }
}

bool Native::ServiceInsertion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appnav-controller-group" || name == "service-context" || name == "service-node-group" || name == "swap" || name == "acg-reload-delay")
        return true;
    return false;
}

Native::ServiceInsertion::AppnavControllerGroup::AppnavControllerGroup()
    :
    group_name{YType::str, "group-name"},
    appnav_controller{YType::str, "appnav-controller"},
    description{YType::str, "description"}
{

    yang_name = "appnav-controller-group"; yang_parent_name = "service-insertion"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ServiceInsertion::AppnavControllerGroup::~AppnavControllerGroup()
{
}

bool Native::ServiceInsertion::AppnavControllerGroup::has_data() const
{
    for (auto const & leaf : appnav_controller.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return group_name.is_set
	|| description.is_set;
}

bool Native::ServiceInsertion::AppnavControllerGroup::has_operation() const
{
    for (auto const & leaf : appnav_controller.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(appnav_controller.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string Native::ServiceInsertion::AppnavControllerGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service-insertion/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceInsertion::AppnavControllerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-insertion:appnav-controller-group" <<"[group-name='" <<group_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceInsertion::AppnavControllerGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    auto appnav_controller_name_datas = appnav_controller.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), appnav_controller_name_datas.begin(), appnav_controller_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceInsertion::AppnavControllerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::AppnavControllerGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceInsertion::AppnavControllerGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "appnav-controller")
    {
        appnav_controller.append(value);
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceInsertion::AppnavControllerGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "appnav-controller")
    {
        appnav_controller.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::ServiceInsertion::AppnavControllerGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-name" || name == "appnav-controller" || name == "description")
        return true;
    return false;
}

Native::ServiceInsertion::ServiceContext::ServiceContext()
{

    yang_name = "service-context"; yang_parent_name = "service-insertion"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ServiceInsertion::ServiceContext::~ServiceContext()
{
}

bool Native::ServiceInsertion::ServiceContext::has_data() const
{
    for (std::size_t index=0; index<waas.size(); index++)
    {
        if(waas[index]->has_data())
            return true;
    }
    return false;
}

bool Native::ServiceInsertion::ServiceContext::has_operation() const
{
    for (std::size_t index=0; index<waas.size(); index++)
    {
        if(waas[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::ServiceInsertion::ServiceContext::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service-insertion/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceInsertion::ServiceContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-insertion:service-context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceInsertion::ServiceContext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceInsertion::ServiceContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "waas")
    {
        for(auto const & c : waas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::ServiceInsertion::ServiceContext::Waas>();
        c->parent = this;
        waas.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::ServiceContext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : waas)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::ServiceInsertion::ServiceContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::ServiceInsertion::ServiceContext::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::ServiceInsertion::ServiceContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "waas")
        return true;
    return false;
}

Native::ServiceInsertion::ServiceContext::Waas::Waas()
    :
    name{YType::str, "name"},
    appnav_controller_group{YType::str, "appnav-controller-group"},
    service_node_group{YType::str, "service-node-group"},
    service_policy{YType::str, "service-policy"},
    enable{YType::empty, "enable"}
    	,
    authentication(std::make_shared<Native::ServiceInsertion::ServiceContext::Waas::Authentication>())
	,vrf(std::make_shared<Native::ServiceInsertion::ServiceContext::Waas::Vrf>())
{
    authentication->parent = this;
    vrf->parent = this;

    yang_name = "waas"; yang_parent_name = "service-context"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ServiceInsertion::ServiceContext::Waas::~Waas()
{
}

bool Native::ServiceInsertion::ServiceContext::Waas::has_data() const
{
    return name.is_set
	|| appnav_controller_group.is_set
	|| service_node_group.is_set
	|| service_policy.is_set
	|| enable.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::ServiceInsertion::ServiceContext::Waas::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(appnav_controller_group.yfilter)
	|| ydk::is_set(service_node_group.yfilter)
	|| ydk::is_set(service_policy.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::ServiceInsertion::ServiceContext::Waas::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service-insertion/Cisco-IOS-XE-service-insertion:service-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceInsertion::ServiceContext::Waas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "waas" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceInsertion::ServiceContext::Waas::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (appnav_controller_group.is_set || is_set(appnav_controller_group.yfilter)) leaf_name_data.push_back(appnav_controller_group.get_name_leafdata());
    if (service_node_group.is_set || is_set(service_node_group.yfilter)) leaf_name_data.push_back(service_node_group.get_name_leafdata());
    if (service_policy.is_set || is_set(service_policy.yfilter)) leaf_name_data.push_back(service_policy.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceInsertion::ServiceContext::Waas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::ServiceInsertion::ServiceContext::Waas::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::ServiceInsertion::ServiceContext::Waas::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::ServiceContext::Waas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::ServiceInsertion::ServiceContext::Waas::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "appnav-controller-group")
    {
        appnav_controller_group = value;
        appnav_controller_group.value_namespace = name_space;
        appnav_controller_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-node-group")
    {
        service_node_group = value;
        service_node_group.value_namespace = name_space;
        service_node_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-policy")
    {
        service_policy = value;
        service_policy.value_namespace = name_space;
        service_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceInsertion::ServiceContext::Waas::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "appnav-controller-group")
    {
        appnav_controller_group.yfilter = yfilter;
    }
    if(value_path == "service-node-group")
    {
        service_node_group.yfilter = yfilter;
    }
    if(value_path == "service-policy")
    {
        service_policy.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::ServiceInsertion::ServiceContext::Waas::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "vrf" || name == "name" || name == "appnav-controller-group" || name == "service-node-group" || name == "service-policy" || name == "enable")
        return true;
    return false;
}

Native::ServiceInsertion::ServiceContext::Waas::Authentication::Authentication()
    :
    sha1{YType::empty, "sha1"},
    key{YType::empty, "key"},
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{

    yang_name = "authentication"; yang_parent_name = "waas"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceInsertion::ServiceContext::Waas::Authentication::~Authentication()
{
}

bool Native::ServiceInsertion::ServiceContext::Waas::Authentication::has_data() const
{
    return sha1.is_set
	|| key.is_set
	|| encrypt.is_set
	|| string.is_set;
}

bool Native::ServiceInsertion::ServiceContext::Waas::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sha1.yfilter)
	|| ydk::is_set(key.yfilter)
	|| ydk::is_set(encrypt.yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::ServiceInsertion::ServiceContext::Waas::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceInsertion::ServiceContext::Waas::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sha1.is_set || is_set(sha1.yfilter)) leaf_name_data.push_back(sha1.get_name_leafdata());
    if (key.is_set || is_set(key.yfilter)) leaf_name_data.push_back(key.get_name_leafdata());
    if (encrypt.is_set || is_set(encrypt.yfilter)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceInsertion::ServiceContext::Waas::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::ServiceContext::Waas::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceInsertion::ServiceContext::Waas::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sha1")
    {
        sha1 = value;
        sha1.value_namespace = name_space;
        sha1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key")
    {
        key = value;
        key.value_namespace = name_space;
        key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encrypt")
    {
        encrypt = value;
        encrypt.value_namespace = name_space;
        encrypt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceInsertion::ServiceContext::Waas::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sha1")
    {
        sha1.yfilter = yfilter;
    }
    if(value_path == "key")
    {
        key.yfilter = yfilter;
    }
    if(value_path == "encrypt")
    {
        encrypt.yfilter = yfilter;
    }
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::ServiceInsertion::ServiceContext::Waas::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sha1" || name == "key" || name == "encrypt" || name == "string")
        return true;
    return false;
}

Native::ServiceInsertion::ServiceContext::Waas::Vrf::Vrf()
    :
    default_{YType::empty, "default"},
    global{YType::empty, "global"},
    name{YType::str, "name"}
{

    yang_name = "vrf"; yang_parent_name = "waas"; is_top_level_class = false; has_list_ancestor = true;
}

Native::ServiceInsertion::ServiceContext::Waas::Vrf::~Vrf()
{
}

bool Native::ServiceInsertion::ServiceContext::Waas::Vrf::has_data() const
{
    return default_.is_set
	|| global.is_set
	|| name.is_set;
}

bool Native::ServiceInsertion::ServiceContext::Waas::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::ServiceInsertion::ServiceContext::Waas::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceInsertion::ServiceContext::Waas::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceInsertion::ServiceContext::Waas::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::ServiceContext::Waas::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceInsertion::ServiceContext::Waas::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceInsertion::ServiceContext::Waas::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::ServiceInsertion::ServiceContext::Waas::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "global" || name == "name")
        return true;
    return false;
}

Native::ServiceInsertion::ServiceNodeGroup::ServiceNodeGroup()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    node_discovery{YType::enumeration, "node-discovery"},
    service_node{YType::str, "service-node"}
{

    yang_name = "service-node-group"; yang_parent_name = "service-insertion"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ServiceInsertion::ServiceNodeGroup::~ServiceNodeGroup()
{
}

bool Native::ServiceInsertion::ServiceNodeGroup::has_data() const
{
    for (auto const & leaf : service_node.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| description.is_set
	|| node_discovery.is_set;
}

bool Native::ServiceInsertion::ServiceNodeGroup::has_operation() const
{
    for (auto const & leaf : service_node.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(node_discovery.yfilter)
	|| ydk::is_set(service_node.yfilter);
}

std::string Native::ServiceInsertion::ServiceNodeGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service-insertion/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceInsertion::ServiceNodeGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-insertion:service-node-group" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceInsertion::ServiceNodeGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (node_discovery.is_set || is_set(node_discovery.yfilter)) leaf_name_data.push_back(node_discovery.get_name_leafdata());

    auto service_node_name_datas = service_node.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), service_node_name_datas.begin(), service_node_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceInsertion::ServiceNodeGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::ServiceNodeGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceInsertion::ServiceNodeGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-discovery")
    {
        node_discovery = value;
        node_discovery.value_namespace = name_space;
        node_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-node")
    {
        service_node.append(value);
    }
}

void Native::ServiceInsertion::ServiceNodeGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "node-discovery")
    {
        node_discovery.yfilter = yfilter;
    }
    if(value_path == "service-node")
    {
        service_node.yfilter = yfilter;
    }
}

bool Native::ServiceInsertion::ServiceNodeGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "description" || name == "node-discovery" || name == "service-node")
        return true;
    return false;
}

Native::ServiceInsertion::Swap::Swap()
    :
    src_ip{YType::empty, "src-ip"}
{

    yang_name = "swap"; yang_parent_name = "service-insertion"; is_top_level_class = false; has_list_ancestor = false;
}

Native::ServiceInsertion::Swap::~Swap()
{
}

bool Native::ServiceInsertion::Swap::has_data() const
{
    return src_ip.is_set;
}

bool Native::ServiceInsertion::Swap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_ip.yfilter);
}

std::string Native::ServiceInsertion::Swap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service-insertion/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::ServiceInsertion::Swap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-service-insertion:swap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::ServiceInsertion::Swap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_ip.is_set || is_set(src_ip.yfilter)) leaf_name_data.push_back(src_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::ServiceInsertion::Swap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::ServiceInsertion::Swap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::ServiceInsertion::Swap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src-ip")
    {
        src_ip = value;
        src_ip.value_namespace = name_space;
        src_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::ServiceInsertion::Swap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src-ip")
    {
        src_ip.yfilter = yfilter;
    }
}

bool Native::ServiceInsertion::Swap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-ip")
        return true;
    return false;
}

Native::Udld::Udld()
{

    yang_name = "udld"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Udld::~Udld()
{
}

bool Native::Udld::has_data() const
{
    return false;
}

bool Native::Udld::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Udld::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Udld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "udld";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Udld::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Udld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Udld::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Udld::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Udld::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Udld::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Wireless::Wireless()
    :
    mdns_bridging{YType::boolean, "mdns-bridging"}
{

    yang_name = "wireless"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Wireless::~Wireless()
{
}

bool Native::Wireless::has_data() const
{
    return mdns_bridging.is_set;
}

bool Native::Wireless::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mdns_bridging.yfilter);
}

std::string Native::Wireless::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Wireless::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wireless";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Wireless::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mdns_bridging.is_set || is_set(mdns_bridging.yfilter)) leaf_name_data.push_back(mdns_bridging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Wireless::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Wireless::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Wireless::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mdns-bridging")
    {
        mdns_bridging = value;
        mdns_bridging.value_namespace = name_space;
        mdns_bridging.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Wireless::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mdns-bridging")
    {
        mdns_bridging.yfilter = yfilter;
    }
}

bool Native::Wireless::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mdns-bridging")
        return true;
    return false;
}

Native::Qos::Qos()
    :
    diffservmib{YType::empty, "Cisco-IOS-XE-qos:diffservmib"}
    	,
    account(std::make_shared<Native::Qos::Account>())
	,control_packets(nullptr) // presence node
	,preserve(std::make_shared<Native::Qos::Preserve>())
	,trace(std::make_shared<Native::Qos::Trace>())
	,queue_softmax_multiplier(std::make_shared<Native::Qos::QueueSoftmaxMultiplier>())
{
    account->parent = this;
    preserve->parent = this;
    trace->parent = this;
    queue_softmax_multiplier->parent = this;

    yang_name = "qos"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Qos::~Qos()
{
}

bool Native::Qos::has_data() const
{
    return diffservmib.is_set
	|| (account !=  nullptr && account->has_data())
	|| (control_packets !=  nullptr && control_packets->has_data())
	|| (preserve !=  nullptr && preserve->has_data())
	|| (trace !=  nullptr && trace->has_data())
	|| (queue_softmax_multiplier !=  nullptr && queue_softmax_multiplier->has_data());
}

bool Native::Qos::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(diffservmib.yfilter)
	|| (account !=  nullptr && account->has_operation())
	|| (control_packets !=  nullptr && control_packets->has_operation())
	|| (preserve !=  nullptr && preserve->has_operation())
	|| (trace !=  nullptr && trace->has_operation())
	|| (queue_softmax_multiplier !=  nullptr && queue_softmax_multiplier->has_operation());
}

std::string Native::Qos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diffservmib.is_set || is_set(diffservmib.yfilter)) leaf_name_data.push_back(diffservmib.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-qos:account")
    {
        if(account == nullptr)
        {
            account = std::make_shared<Native::Qos::Account>();
        }
        return account;
    }

    if(child_yang_name == "Cisco-IOS-XE-qos:control-packets")
    {
        if(control_packets == nullptr)
        {
            control_packets = std::make_shared<Native::Qos::ControlPackets>();
        }
        return control_packets;
    }

    if(child_yang_name == "Cisco-IOS-XE-qos:preserve")
    {
        if(preserve == nullptr)
        {
            preserve = std::make_shared<Native::Qos::Preserve>();
        }
        return preserve;
    }

    if(child_yang_name == "Cisco-IOS-XE-qos:trace")
    {
        if(trace == nullptr)
        {
            trace = std::make_shared<Native::Qos::Trace>();
        }
        return trace;
    }

    if(child_yang_name == "Cisco-IOS-XE-qos:queue-softmax-multiplier")
    {
        if(queue_softmax_multiplier == nullptr)
        {
            queue_softmax_multiplier = std::make_shared<Native::Qos::QueueSoftmaxMultiplier>();
        }
        return queue_softmax_multiplier;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(account != nullptr)
    {
        children["Cisco-IOS-XE-qos:account"] = account;
    }

    if(control_packets != nullptr)
    {
        children["Cisco-IOS-XE-qos:control-packets"] = control_packets;
    }

    if(preserve != nullptr)
    {
        children["Cisco-IOS-XE-qos:preserve"] = preserve;
    }

    if(trace != nullptr)
    {
        children["Cisco-IOS-XE-qos:trace"] = trace;
    }

    if(queue_softmax_multiplier != nullptr)
    {
        children["Cisco-IOS-XE-qos:queue-softmax-multiplier"] = queue_softmax_multiplier;
    }

    return children;
}

void Native::Qos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-qos:diffservmib")
    {
        diffservmib = value;
        diffservmib.value_namespace = name_space;
        diffservmib.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "diffservmib")
    {
        diffservmib.yfilter = yfilter;
    }
}

bool Native::Qos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account" || name == "control-packets" || name == "preserve" || name == "trace" || name == "queue-softmax-multiplier" || name == "diffservmib")
        return true;
    return false;
}

Native::Qos::Account::Account()
    :
    layer_all(std::make_shared<Native::Qos::Account::LayerAll>())
	,layer2(std::make_shared<Native::Qos::Account::Layer2>())
{
    layer_all->parent = this;
    layer2->parent = this;

    yang_name = "account"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Qos::Account::~Account()
{
}

bool Native::Qos::Account::has_data() const
{
    return (layer_all !=  nullptr && layer_all->has_data())
	|| (layer2 !=  nullptr && layer2->has_data());
}

bool Native::Qos::Account::has_operation() const
{
    return is_set(yfilter)
	|| (layer_all !=  nullptr && layer_all->has_operation())
	|| (layer2 !=  nullptr && layer2->has_operation());
}

std::string Native::Qos::Account::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Account::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:account";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Account::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Account::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "layer-all")
    {
        if(layer_all == nullptr)
        {
            layer_all = std::make_shared<Native::Qos::Account::LayerAll>();
        }
        return layer_all;
    }

    if(child_yang_name == "layer2")
    {
        if(layer2 == nullptr)
        {
            layer2 = std::make_shared<Native::Qos::Account::Layer2>();
        }
        return layer2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Account::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(layer_all != nullptr)
    {
        children["layer-all"] = layer_all;
    }

    if(layer2 != nullptr)
    {
        children["layer2"] = layer2;
    }

    return children;
}

void Native::Qos::Account::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Qos::Account::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Qos::Account::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "layer-all" || name == "layer2")
        return true;
    return false;
}

Native::Qos::Account::LayerAll::LayerAll()
    :
    encapsulation{YType::empty, "encapsulation"}
{

    yang_name = "layer-all"; yang_parent_name = "account"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Qos::Account::LayerAll::~LayerAll()
{
}

bool Native::Qos::Account::LayerAll::has_data() const
{
    return encapsulation.is_set;
}

bool Native::Qos::Account::LayerAll::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encapsulation.yfilter);
}

std::string Native::Qos::Account::LayerAll::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:account/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Account::LayerAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "layer-all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Account::LayerAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Account::LayerAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Account::LayerAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::Account::LayerAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::Account::LayerAll::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
}

bool Native::Qos::Account::LayerAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation")
        return true;
    return false;
}

Native::Qos::Account::Layer2::Layer2()
    :
    encapsulation(std::make_shared<Native::Qos::Account::Layer2::Encapsulation>())
{
    encapsulation->parent = this;

    yang_name = "layer2"; yang_parent_name = "account"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Qos::Account::Layer2::~Layer2()
{
}

bool Native::Qos::Account::Layer2::has_data() const
{
    return (encapsulation !=  nullptr && encapsulation->has_data());
}

bool Native::Qos::Account::Layer2::has_operation() const
{
    return is_set(yfilter)
	|| (encapsulation !=  nullptr && encapsulation->has_operation());
}

std::string Native::Qos::Account::Layer2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:account/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Account::Layer2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "layer2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Account::Layer2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Account::Layer2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation")
    {
        if(encapsulation == nullptr)
        {
            encapsulation = std::make_shared<Native::Qos::Account::Layer2::Encapsulation>();
        }
        return encapsulation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Account::Layer2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encapsulation != nullptr)
    {
        children["encapsulation"] = encapsulation;
    }

    return children;
}

void Native::Qos::Account::Layer2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Qos::Account::Layer2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Qos::Account::Layer2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation")
        return true;
    return false;
}

Native::Qos::Account::Layer2::Encapsulation::Encapsulation()
    :
    arpa{YType::empty, "arpa"},
    dot1q{YType::empty, "dot1q"},
    isl{YType::empty, "isl"}
    	,
    length(nullptr) // presence node
{

    yang_name = "encapsulation"; yang_parent_name = "layer2"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Qos::Account::Layer2::Encapsulation::~Encapsulation()
{
}

bool Native::Qos::Account::Layer2::Encapsulation::has_data() const
{
    return arpa.is_set
	|| dot1q.is_set
	|| isl.is_set
	|| (length !=  nullptr && length->has_data());
}

bool Native::Qos::Account::Layer2::Encapsulation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arpa.yfilter)
	|| ydk::is_set(dot1q.yfilter)
	|| ydk::is_set(isl.yfilter)
	|| (length !=  nullptr && length->has_operation());
}

std::string Native::Qos::Account::Layer2::Encapsulation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:account/layer2/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Account::Layer2::Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Account::Layer2::Encapsulation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arpa.is_set || is_set(arpa.yfilter)) leaf_name_data.push_back(arpa.get_name_leafdata());
    if (dot1q.is_set || is_set(dot1q.yfilter)) leaf_name_data.push_back(dot1q.get_name_leafdata());
    if (isl.is_set || is_set(isl.yfilter)) leaf_name_data.push_back(isl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Account::Layer2::Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "length")
    {
        if(length == nullptr)
        {
            length = std::make_shared<Native::Qos::Account::Layer2::Encapsulation::Length>();
        }
        return length;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Account::Layer2::Encapsulation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(length != nullptr)
    {
        children["length"] = length;
    }

    return children;
}

void Native::Qos::Account::Layer2::Encapsulation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arpa")
    {
        arpa = value;
        arpa.value_namespace = name_space;
        arpa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1q")
    {
        dot1q = value;
        dot1q.value_namespace = name_space;
        dot1q.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isl")
    {
        isl = value;
        isl.value_namespace = name_space;
        isl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::Account::Layer2::Encapsulation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arpa")
    {
        arpa.yfilter = yfilter;
    }
    if(value_path == "dot1q")
    {
        dot1q.yfilter = yfilter;
    }
    if(value_path == "isl")
    {
        isl.yfilter = yfilter;
    }
}

bool Native::Qos::Account::Layer2::Encapsulation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "length" || name == "arpa" || name == "dot1q" || name == "isl")
        return true;
    return false;
}

Native::Qos::Account::Layer2::Encapsulation::Length::Length()
    :
    byte_length{YType::int8, "byte-length"}
{

    yang_name = "length"; yang_parent_name = "encapsulation"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Qos::Account::Layer2::Encapsulation::Length::~Length()
{
}

bool Native::Qos::Account::Layer2::Encapsulation::Length::has_data() const
{
    return byte_length.is_set;
}

bool Native::Qos::Account::Layer2::Encapsulation::Length::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_length.yfilter);
}

std::string Native::Qos::Account::Layer2::Encapsulation::Length::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:account/layer2/encapsulation/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Account::Layer2::Encapsulation::Length::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "length";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Account::Layer2::Encapsulation::Length::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_length.is_set || is_set(byte_length.yfilter)) leaf_name_data.push_back(byte_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Account::Layer2::Encapsulation::Length::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Account::Layer2::Encapsulation::Length::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::Account::Layer2::Encapsulation::Length::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-length")
    {
        byte_length = value;
        byte_length.value_namespace = name_space;
        byte_length.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::Account::Layer2::Encapsulation::Length::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-length")
    {
        byte_length.yfilter = yfilter;
    }
}

bool Native::Qos::Account::Layer2::Encapsulation::Length::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-length")
        return true;
    return false;
}

Native::Qos::ControlPackets::ControlPackets()
    :
    bpdu_range{YType::empty, "bpdu-range"},
    cdp_vtp{YType::empty, "cdp-vtp"},
    eapol{YType::empty, "eapol"},
    lldp{YType::empty, "lldp"},
    protocol_tunnel{YType::empty, "protocol-tunnel"},
    sstp{YType::empty, "sstp"}
{

    yang_name = "control-packets"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Qos::ControlPackets::~ControlPackets()
{
}

bool Native::Qos::ControlPackets::has_data() const
{
    return bpdu_range.is_set
	|| cdp_vtp.is_set
	|| eapol.is_set
	|| lldp.is_set
	|| protocol_tunnel.is_set
	|| sstp.is_set;
}

bool Native::Qos::ControlPackets::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bpdu_range.yfilter)
	|| ydk::is_set(cdp_vtp.yfilter)
	|| ydk::is_set(eapol.yfilter)
	|| ydk::is_set(lldp.yfilter)
	|| ydk::is_set(protocol_tunnel.yfilter)
	|| ydk::is_set(sstp.yfilter);
}

std::string Native::Qos::ControlPackets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::ControlPackets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:control-packets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::ControlPackets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bpdu_range.is_set || is_set(bpdu_range.yfilter)) leaf_name_data.push_back(bpdu_range.get_name_leafdata());
    if (cdp_vtp.is_set || is_set(cdp_vtp.yfilter)) leaf_name_data.push_back(cdp_vtp.get_name_leafdata());
    if (eapol.is_set || is_set(eapol.yfilter)) leaf_name_data.push_back(eapol.get_name_leafdata());
    if (lldp.is_set || is_set(lldp.yfilter)) leaf_name_data.push_back(lldp.get_name_leafdata());
    if (protocol_tunnel.is_set || is_set(protocol_tunnel.yfilter)) leaf_name_data.push_back(protocol_tunnel.get_name_leafdata());
    if (sstp.is_set || is_set(sstp.yfilter)) leaf_name_data.push_back(sstp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::ControlPackets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::ControlPackets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::ControlPackets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bpdu-range")
    {
        bpdu_range = value;
        bpdu_range.value_namespace = name_space;
        bpdu_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cdp-vtp")
    {
        cdp_vtp = value;
        cdp_vtp.value_namespace = name_space;
        cdp_vtp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eapol")
    {
        eapol = value;
        eapol.value_namespace = name_space;
        eapol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lldp")
    {
        lldp = value;
        lldp.value_namespace = name_space;
        lldp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-tunnel")
    {
        protocol_tunnel = value;
        protocol_tunnel.value_namespace = name_space;
        protocol_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sstp")
    {
        sstp = value;
        sstp.value_namespace = name_space;
        sstp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::ControlPackets::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bpdu-range")
    {
        bpdu_range.yfilter = yfilter;
    }
    if(value_path == "cdp-vtp")
    {
        cdp_vtp.yfilter = yfilter;
    }
    if(value_path == "eapol")
    {
        eapol.yfilter = yfilter;
    }
    if(value_path == "lldp")
    {
        lldp.yfilter = yfilter;
    }
    if(value_path == "protocol-tunnel")
    {
        protocol_tunnel.yfilter = yfilter;
    }
    if(value_path == "sstp")
    {
        sstp.yfilter = yfilter;
    }
}

bool Native::Qos::ControlPackets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bpdu-range" || name == "cdp-vtp" || name == "eapol" || name == "lldp" || name == "protocol-tunnel" || name == "sstp")
        return true;
    return false;
}

Native::Qos::Preserve::Preserve()
    :
    marking(std::make_shared<Native::Qos::Preserve::Marking>())
	,mpls(std::make_shared<Native::Qos::Preserve::Mpls>())
{
    marking->parent = this;
    mpls->parent = this;

    yang_name = "preserve"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Qos::Preserve::~Preserve()
{
}

bool Native::Qos::Preserve::has_data() const
{
    return (marking !=  nullptr && marking->has_data())
	|| (mpls !=  nullptr && mpls->has_data());
}

bool Native::Qos::Preserve::has_operation() const
{
    return is_set(yfilter)
	|| (marking !=  nullptr && marking->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation());
}

std::string Native::Qos::Preserve::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Preserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:preserve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Preserve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Preserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "marking")
    {
        if(marking == nullptr)
        {
            marking = std::make_shared<Native::Qos::Preserve::Marking>();
        }
        return marking;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Qos::Preserve::Mpls>();
        }
        return mpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Preserve::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(marking != nullptr)
    {
        children["marking"] = marking;
    }

    if(mpls != nullptr)
    {
        children["mpls"] = mpls;
    }

    return children;
}

void Native::Qos::Preserve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Qos::Preserve::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Qos::Preserve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "marking" || name == "mpls")
        return true;
    return false;
}

Native::Qos::Preserve::Marking::Marking()
    :
    hipriority{YType::empty, "hipriority"}
{

    yang_name = "marking"; yang_parent_name = "preserve"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Qos::Preserve::Marking::~Marking()
{
}

bool Native::Qos::Preserve::Marking::has_data() const
{
    return hipriority.is_set;
}

bool Native::Qos::Preserve::Marking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hipriority.yfilter);
}

std::string Native::Qos::Preserve::Marking::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:preserve/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Preserve::Marking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "marking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Preserve::Marking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hipriority.is_set || is_set(hipriority.yfilter)) leaf_name_data.push_back(hipriority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Preserve::Marking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Preserve::Marking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::Preserve::Marking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hipriority")
    {
        hipriority = value;
        hipriority.value_namespace = name_space;
        hipriority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::Preserve::Marking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hipriority")
    {
        hipriority.yfilter = yfilter;
    }
}

bool Native::Qos::Preserve::Marking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hipriority")
        return true;
    return false;
}

Native::Qos::Preserve::Mpls::Mpls()
    :
    exp{YType::empty, "exp"}
{

    yang_name = "mpls"; yang_parent_name = "preserve"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Qos::Preserve::Mpls::~Mpls()
{
}

bool Native::Qos::Preserve::Mpls::has_data() const
{
    return exp.is_set;
}

bool Native::Qos::Preserve::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(exp.yfilter);
}

std::string Native::Qos::Preserve::Mpls::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:preserve/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Preserve::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Preserve::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exp.is_set || is_set(exp.yfilter)) leaf_name_data.push_back(exp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Preserve::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Preserve::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::Preserve::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exp")
    {
        exp = value;
        exp.value_namespace = name_space;
        exp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::Preserve::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exp")
    {
        exp.yfilter = yfilter;
    }
}

bool Native::Qos::Preserve::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exp")
        return true;
    return false;
}

Native::Qos::Trace::Trace()
    :
    resize(std::make_shared<Native::Qos::Trace::Resize>())
{
    resize->parent = this;

    yang_name = "trace"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Qos::Trace::~Trace()
{
}

bool Native::Qos::Trace::has_data() const
{
    return (resize !=  nullptr && resize->has_data());
}

bool Native::Qos::Trace::has_operation() const
{
    return is_set(yfilter)
	|| (resize !=  nullptr && resize->has_operation());
}

std::string Native::Qos::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "resize")
    {
        if(resize == nullptr)
        {
            resize = std::make_shared<Native::Qos::Trace::Resize>();
        }
        return resize;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(resize != nullptr)
    {
        children["resize"] = resize;
    }

    return children;
}

void Native::Qos::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Qos::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Qos::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resize")
        return true;
    return false;
}

Native::Qos::Trace::Resize::Resize()
    :
    size{YType::int32, "size"},
    all{YType::int32, "all"},
    error{YType::int32, "error"},
    event{YType::int32, "event"},
    warning{YType::int32, "warning"}
{

    yang_name = "resize"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Qos::Trace::Resize::~Resize()
{
}

bool Native::Qos::Trace::Resize::has_data() const
{
    return size.is_set
	|| all.is_set
	|| error.is_set
	|| event.is_set
	|| warning.is_set;
}

bool Native::Qos::Trace::Resize::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(event.yfilter)
	|| ydk::is_set(warning.yfilter);
}

std::string Native::Qos::Trace::Resize::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/Cisco-IOS-XE-qos:trace/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::Trace::Resize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resize";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::Trace::Resize::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (event.is_set || is_set(event.yfilter)) leaf_name_data.push_back(event.get_name_leafdata());
    if (warning.is_set || is_set(warning.yfilter)) leaf_name_data.push_back(warning.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::Trace::Resize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::Trace::Resize::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::Trace::Resize::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event")
    {
        event = value;
        event.value_namespace = name_space;
        event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning")
    {
        warning = value;
        warning.value_namespace = name_space;
        warning.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::Trace::Resize::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "event")
    {
        event.yfilter = yfilter;
    }
    if(value_path == "warning")
    {
        warning.yfilter = yfilter;
    }
}

bool Native::Qos::Trace::Resize::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "all" || name == "error" || name == "event" || name == "warning")
        return true;
    return false;
}

Native::Qos::QueueSoftmaxMultiplier::QueueSoftmaxMultiplier()
    :
    value_{YType::int16, "value"}
{

    yang_name = "queue-softmax-multiplier"; yang_parent_name = "qos"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Qos::QueueSoftmaxMultiplier::~QueueSoftmaxMultiplier()
{
}

bool Native::Qos::QueueSoftmaxMultiplier::has_data() const
{
    return value_.is_set;
}

bool Native::Qos::QueueSoftmaxMultiplier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Qos::QueueSoftmaxMultiplier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/qos/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Qos::QueueSoftmaxMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-qos:queue-softmax-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Qos::QueueSoftmaxMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Qos::QueueSoftmaxMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Qos::QueueSoftmaxMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Qos::QueueSoftmaxMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Qos::QueueSoftmaxMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Qos::QueueSoftmaxMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value")
        return true;
    return false;
}

Native::TimeRange::TimeRange()
    :
    word{YType::str, "word"}
    	,
    absolute(std::make_shared<Native::TimeRange::Absolute>())
{
    absolute->parent = this;

    yang_name = "time-range"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::TimeRange::~TimeRange()
{
}

bool Native::TimeRange::has_data() const
{
    return word.is_set
	|| (absolute !=  nullptr && absolute->has_data());
}

bool Native::TimeRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| (absolute !=  nullptr && absolute->has_operation());
}

std::string Native::TimeRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::TimeRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-range" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TimeRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TimeRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "absolute")
    {
        if(absolute == nullptr)
        {
            absolute = std::make_shared<Native::TimeRange::Absolute>();
        }
        return absolute;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TimeRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(absolute != nullptr)
    {
        children["absolute"] = absolute;
    }

    return children;
}

void Native::TimeRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TimeRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::TimeRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "absolute" || name == "word")
        return true;
    return false;
}

Native::TimeRange::Absolute::Absolute()
    :
    start(std::make_shared<Native::TimeRange::Absolute::Start>())
{
    start->parent = this;

    yang_name = "absolute"; yang_parent_name = "time-range"; is_top_level_class = false; has_list_ancestor = true;
}

Native::TimeRange::Absolute::~Absolute()
{
}

bool Native::TimeRange::Absolute::has_data() const
{
    return (start !=  nullptr && start->has_data());
}

bool Native::TimeRange::Absolute::has_operation() const
{
    return is_set(yfilter)
	|| (start !=  nullptr && start->has_operation());
}

std::string Native::TimeRange::Absolute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "absolute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TimeRange::Absolute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TimeRange::Absolute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start")
    {
        if(start == nullptr)
        {
            start = std::make_shared<Native::TimeRange::Absolute::Start>();
        }
        return start;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TimeRange::Absolute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start != nullptr)
    {
        children["start"] = start;
    }

    return children;
}

void Native::TimeRange::Absolute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::TimeRange::Absolute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::TimeRange::Absolute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start")
        return true;
    return false;
}

Native::TimeRange::Absolute::Start::Start()
    :
    start_time{YType::str, "start-time"},
    day_of_month{YType::uint8, "day-of-month"},
    month{YType::str, "month"},
    year{YType::uint16, "year"}
{

    yang_name = "start"; yang_parent_name = "absolute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::TimeRange::Absolute::Start::~Start()
{
}

bool Native::TimeRange::Absolute::Start::has_data() const
{
    return start_time.is_set
	|| day_of_month.is_set
	|| month.is_set
	|| year.is_set;
}

bool Native::TimeRange::Absolute::Start::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(day_of_month.yfilter)
	|| ydk::is_set(month.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::TimeRange::Absolute::Start::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::TimeRange::Absolute::Start::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (day_of_month.is_set || is_set(day_of_month.yfilter)) leaf_name_data.push_back(day_of_month.get_name_leafdata());
    if (month.is_set || is_set(month.yfilter)) leaf_name_data.push_back(month.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::TimeRange::Absolute::Start::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::TimeRange::Absolute::Start::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::TimeRange::Absolute::Start::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "day-of-month")
    {
        day_of_month = value;
        day_of_month.value_namespace = name_space;
        day_of_month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "month")
    {
        month = value;
        month.value_namespace = name_space;
        month.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::TimeRange::Absolute::Start::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "day-of-month")
    {
        day_of_month.yfilter = yfilter;
    }
    if(value_path == "month")
    {
        month.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::TimeRange::Absolute::Start::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "day-of-month" || name == "month" || name == "year")
        return true;
    return false;
}

Native::DeviceTracking::DeviceTracking()
    :
    tracking(nullptr) // presence node
{

    yang_name = "device-tracking"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::DeviceTracking::~DeviceTracking()
{
}

bool Native::DeviceTracking::has_data() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return (tracking !=  nullptr && tracking->has_data());
}

bool Native::DeviceTracking::has_operation() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (tracking !=  nullptr && tracking->has_operation());
}

std::string Native::DeviceTracking::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceTracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device-tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-device-tracking:policy")
    {
        for(auto const & c : policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::DeviceTracking::Policy>();
        c->parent = this;
        policy.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-device-tracking:tracking")
    {
        if(tracking == nullptr)
        {
            tracking = std::make_shared<Native::DeviceTracking::Tracking>();
        }
        return tracking;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy)
    {
        children[c->get_segment_path()] = c;
    }

    if(tracking != nullptr)
    {
        children["Cisco-IOS-XE-device-tracking:tracking"] = tracking;
    }

    return children;
}

void Native::DeviceTracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::DeviceTracking::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::DeviceTracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy" || name == "tracking")
        return true;
    return false;
}

Native::DeviceTracking::Policy::Policy()
    :
    word{YType::str, "word"}
    	,
    device_role(std::make_shared<Native::DeviceTracking::Policy::DeviceRole>())
	,protocol(std::make_shared<Native::DeviceTracking::Policy::Protocol>())
	,tracking(std::make_shared<Native::DeviceTracking::Policy::Tracking>())
	,limit(std::make_shared<Native::DeviceTracking::Policy::Limit>())
	,security_level(std::make_shared<Native::DeviceTracking::Policy::SecurityLevel>())
{
    device_role->parent = this;
    protocol->parent = this;
    tracking->parent = this;
    limit->parent = this;
    security_level->parent = this;

    yang_name = "policy"; yang_parent_name = "device-tracking"; is_top_level_class = false; has_list_ancestor = false;
}

Native::DeviceTracking::Policy::~Policy()
{
}

bool Native::DeviceTracking::Policy::has_data() const
{
    return word.is_set
	|| (device_role !=  nullptr && device_role->has_data())
	|| (protocol !=  nullptr && protocol->has_data())
	|| (tracking !=  nullptr && tracking->has_data())
	|| (limit !=  nullptr && limit->has_data())
	|| (security_level !=  nullptr && security_level->has_data());
}

bool Native::DeviceTracking::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| (device_role !=  nullptr && device_role->has_operation())
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (tracking !=  nullptr && tracking->has_operation())
	|| (limit !=  nullptr && limit->has_operation())
	|| (security_level !=  nullptr && security_level->has_operation());
}

std::string Native::DeviceTracking::Policy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/device-tracking/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceTracking::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-device-tracking:policy" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "device-role")
    {
        if(device_role == nullptr)
        {
            device_role = std::make_shared<Native::DeviceTracking::Policy::DeviceRole>();
        }
        return device_role;
    }

    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::DeviceTracking::Policy::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "tracking")
    {
        if(tracking == nullptr)
        {
            tracking = std::make_shared<Native::DeviceTracking::Policy::Tracking>();
        }
        return tracking;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::DeviceTracking::Policy::Limit>();
        }
        return limit;
    }

    if(child_yang_name == "security-level")
    {
        if(security_level == nullptr)
        {
            security_level = std::make_shared<Native::DeviceTracking::Policy::SecurityLevel>();
        }
        return security_level;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(device_role != nullptr)
    {
        children["device-role"] = device_role;
    }

    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(tracking != nullptr)
    {
        children["tracking"] = tracking;
    }

    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    if(security_level != nullptr)
    {
        children["security-level"] = security_level;
    }

    return children;
}

void Native::DeviceTracking::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "device-role" || name == "protocol" || name == "tracking" || name == "limit" || name == "security-level" || name == "word")
        return true;
    return false;
}

Native::DeviceTracking::Policy::DeviceRole::DeviceRole()
    :
    node{YType::boolean, "node"},
    switch_{YType::empty, "switch"}
{

    yang_name = "device-role"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::DeviceTracking::Policy::DeviceRole::~DeviceRole()
{
}

bool Native::DeviceTracking::Policy::DeviceRole::has_data() const
{
    return node.is_set
	|| switch_.is_set;
}

bool Native::DeviceTracking::Policy::DeviceRole::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node.yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::DeviceTracking::Policy::DeviceRole::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "device-role";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Policy::DeviceRole::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.yfilter)) leaf_name_data.push_back(node.get_name_leafdata());
    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::DeviceRole::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::DeviceRole::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceTracking::Policy::DeviceRole::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node")
    {
        node = value;
        node.value_namespace = name_space;
        node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Policy::DeviceRole::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node")
    {
        node.yfilter = yfilter;
    }
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Policy::DeviceRole::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node" || name == "switch")
        return true;
    return false;
}

Native::DeviceTracking::Policy::Protocol::Protocol()
    :
    udp{YType::boolean, "udp"},
    arp{YType::boolean, "arp"},
    dhcp4{YType::boolean, "dhcp4"},
    dhcp6{YType::boolean, "dhcp6"},
    ndp{YType::boolean, "ndp"}
{

    yang_name = "protocol"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::DeviceTracking::Policy::Protocol::~Protocol()
{
}

bool Native::DeviceTracking::Policy::Protocol::has_data() const
{
    return udp.is_set
	|| arp.is_set
	|| dhcp4.is_set
	|| dhcp6.is_set
	|| ndp.is_set;
}

bool Native::DeviceTracking::Policy::Protocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(udp.yfilter)
	|| ydk::is_set(arp.yfilter)
	|| ydk::is_set(dhcp4.yfilter)
	|| ydk::is_set(dhcp6.yfilter)
	|| ydk::is_set(ndp.yfilter);
}

std::string Native::DeviceTracking::Policy::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Policy::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (udp.is_set || is_set(udp.yfilter)) leaf_name_data.push_back(udp.get_name_leafdata());
    if (arp.is_set || is_set(arp.yfilter)) leaf_name_data.push_back(arp.get_name_leafdata());
    if (dhcp4.is_set || is_set(dhcp4.yfilter)) leaf_name_data.push_back(dhcp4.get_name_leafdata());
    if (dhcp6.is_set || is_set(dhcp6.yfilter)) leaf_name_data.push_back(dhcp6.get_name_leafdata());
    if (ndp.is_set || is_set(ndp.yfilter)) leaf_name_data.push_back(ndp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceTracking::Policy::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "udp")
    {
        udp = value;
        udp.value_namespace = name_space;
        udp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp")
    {
        arp = value;
        arp.value_namespace = name_space;
        arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp4")
    {
        dhcp4 = value;
        dhcp4.value_namespace = name_space;
        dhcp4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp6")
    {
        dhcp6 = value;
        dhcp6.value_namespace = name_space;
        dhcp6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ndp")
    {
        ndp = value;
        ndp.value_namespace = name_space;
        ndp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Policy::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "udp")
    {
        udp.yfilter = yfilter;
    }
    if(value_path == "arp")
    {
        arp.yfilter = yfilter;
    }
    if(value_path == "dhcp4")
    {
        dhcp4.yfilter = yfilter;
    }
    if(value_path == "dhcp6")
    {
        dhcp6.yfilter = yfilter;
    }
    if(value_path == "ndp")
    {
        ndp.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Policy::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "udp" || name == "arp" || name == "dhcp4" || name == "dhcp6" || name == "ndp")
        return true;
    return false;
}

Native::DeviceTracking::Policy::Tracking::Tracking()
    :
    tracking_on_off{YType::enumeration, "tracking-on-off"}
{

    yang_name = "tracking"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::DeviceTracking::Policy::Tracking::~Tracking()
{
}

bool Native::DeviceTracking::Policy::Tracking::has_data() const
{
    return tracking_on_off.is_set;
}

bool Native::DeviceTracking::Policy::Tracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tracking_on_off.yfilter);
}

std::string Native::DeviceTracking::Policy::Tracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Policy::Tracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tracking_on_off.is_set || is_set(tracking_on_off.yfilter)) leaf_name_data.push_back(tracking_on_off.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::Tracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::Tracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceTracking::Policy::Tracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tracking-on-off")
    {
        tracking_on_off = value;
        tracking_on_off.value_namespace = name_space;
        tracking_on_off.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Policy::Tracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tracking-on-off")
    {
        tracking_on_off.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Policy::Tracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracking-on-off")
        return true;
    return false;
}

Native::DeviceTracking::Policy::Limit::Limit()
    :
    address_count{YType::uint16, "address-count"}
{

    yang_name = "limit"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::DeviceTracking::Policy::Limit::~Limit()
{
}

bool Native::DeviceTracking::Policy::Limit::has_data() const
{
    return address_count.is_set;
}

bool Native::DeviceTracking::Policy::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_count.yfilter);
}

std::string Native::DeviceTracking::Policy::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Policy::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_count.is_set || is_set(address_count.yfilter)) leaf_name_data.push_back(address_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceTracking::Policy::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-count")
    {
        address_count = value;
        address_count.value_namespace = name_space;
        address_count.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Policy::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-count")
    {
        address_count.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Policy::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-count")
        return true;
    return false;
}

Native::DeviceTracking::Policy::SecurityLevel::SecurityLevel()
    :
    glean{YType::empty, "glean"}
{

    yang_name = "security-level"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true;
}

Native::DeviceTracking::Policy::SecurityLevel::~SecurityLevel()
{
}

bool Native::DeviceTracking::Policy::SecurityLevel::has_data() const
{
    return glean.is_set;
}

bool Native::DeviceTracking::Policy::SecurityLevel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(glean.yfilter);
}

std::string Native::DeviceTracking::Policy::SecurityLevel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security-level";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Policy::SecurityLevel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (glean.is_set || is_set(glean.yfilter)) leaf_name_data.push_back(glean.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Policy::SecurityLevel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Policy::SecurityLevel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceTracking::Policy::SecurityLevel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "glean")
    {
        glean = value;
        glean.value_namespace = name_space;
        glean.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Policy::SecurityLevel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "glean")
    {
        glean.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Policy::SecurityLevel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "glean")
        return true;
    return false;
}

Native::DeviceTracking::Tracking::Tracking()
    :
    retry_interval{YType::uint16, "retry-interval"}
    	,
    auto_source(nullptr) // presence node
{

    yang_name = "tracking"; yang_parent_name = "device-tracking"; is_top_level_class = false; has_list_ancestor = false;
}

Native::DeviceTracking::Tracking::~Tracking()
{
}

bool Native::DeviceTracking::Tracking::has_data() const
{
    return retry_interval.is_set
	|| (auto_source !=  nullptr && auto_source->has_data());
}

bool Native::DeviceTracking::Tracking::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(retry_interval.yfilter)
	|| (auto_source !=  nullptr && auto_source->has_operation());
}

std::string Native::DeviceTracking::Tracking::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/device-tracking/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceTracking::Tracking::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-device-tracking:tracking";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Tracking::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (retry_interval.is_set || is_set(retry_interval.yfilter)) leaf_name_data.push_back(retry_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Tracking::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-source")
    {
        if(auto_source == nullptr)
        {
            auto_source = std::make_shared<Native::DeviceTracking::Tracking::AutoSource>();
        }
        return auto_source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Tracking::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_source != nullptr)
    {
        children["auto-source"] = auto_source;
    }

    return children;
}

void Native::DeviceTracking::Tracking::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "retry-interval")
    {
        retry_interval = value;
        retry_interval.value_namespace = name_space;
        retry_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Tracking::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "retry-interval")
    {
        retry_interval.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Tracking::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-source" || name == "retry-interval")
        return true;
    return false;
}

Native::DeviceTracking::Tracking::AutoSource::AutoSource()
    :
    override{YType::empty, "override"}
    	,
    fallback(std::make_shared<Native::DeviceTracking::Tracking::AutoSource::Fallback>())
{
    fallback->parent = this;

    yang_name = "auto-source"; yang_parent_name = "tracking"; is_top_level_class = false; has_list_ancestor = false;
}

Native::DeviceTracking::Tracking::AutoSource::~AutoSource()
{
}

bool Native::DeviceTracking::Tracking::AutoSource::has_data() const
{
    return override.is_set
	|| (fallback !=  nullptr && fallback->has_data());
}

bool Native::DeviceTracking::Tracking::AutoSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(override.yfilter)
	|| (fallback !=  nullptr && fallback->has_operation());
}

std::string Native::DeviceTracking::Tracking::AutoSource::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/device-tracking/Cisco-IOS-XE-device-tracking:tracking/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceTracking::Tracking::AutoSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Tracking::AutoSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Tracking::AutoSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fallback")
    {
        if(fallback == nullptr)
        {
            fallback = std::make_shared<Native::DeviceTracking::Tracking::AutoSource::Fallback>();
        }
        return fallback;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Tracking::AutoSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fallback != nullptr)
    {
        children["fallback"] = fallback;
    }

    return children;
}

void Native::DeviceTracking::Tracking::AutoSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Tracking::AutoSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Tracking::AutoSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fallback" || name == "override")
        return true;
    return false;
}

Native::DeviceTracking::Tracking::AutoSource::Fallback::Fallback()
    :
    ipv4_subnet_type1(std::make_shared<Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1>())
	,ipv4_subnet_type2(std::make_shared<Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2>())
{
    ipv4_subnet_type1->parent = this;
    ipv4_subnet_type2->parent = this;

    yang_name = "fallback"; yang_parent_name = "auto-source"; is_top_level_class = false; has_list_ancestor = false;
}

Native::DeviceTracking::Tracking::AutoSource::Fallback::~Fallback()
{
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::has_data() const
{
    return (ipv4_subnet_type1 !=  nullptr && ipv4_subnet_type1->has_data())
	|| (ipv4_subnet_type2 !=  nullptr && ipv4_subnet_type2->has_data());
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4_subnet_type1 !=  nullptr && ipv4_subnet_type1->has_operation())
	|| (ipv4_subnet_type2 !=  nullptr && ipv4_subnet_type2->has_operation());
}

std::string Native::DeviceTracking::Tracking::AutoSource::Fallback::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/device-tracking/Cisco-IOS-XE-device-tracking:tracking/auto-source/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceTracking::Tracking::AutoSource::Fallback::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fallback";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Tracking::AutoSource::Fallback::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Tracking::AutoSource::Fallback::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-subnet-type1")
    {
        if(ipv4_subnet_type1 == nullptr)
        {
            ipv4_subnet_type1 = std::make_shared<Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1>();
        }
        return ipv4_subnet_type1;
    }

    if(child_yang_name == "ipv4-subnet-type2")
    {
        if(ipv4_subnet_type2 == nullptr)
        {
            ipv4_subnet_type2 = std::make_shared<Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2>();
        }
        return ipv4_subnet_type2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Tracking::AutoSource::Fallback::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_subnet_type1 != nullptr)
    {
        children["ipv4-subnet-type1"] = ipv4_subnet_type1;
    }

    if(ipv4_subnet_type2 != nullptr)
    {
        children["ipv4-subnet-type2"] = ipv4_subnet_type2;
    }

    return children;
}

void Native::DeviceTracking::Tracking::AutoSource::Fallback::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::DeviceTracking::Tracking::AutoSource::Fallback::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-subnet-type1" || name == "ipv4-subnet-type2")
        return true;
    return false;
}

Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::Ipv4SubnetType1()
    :
    ipv4{YType::str, "ipv4"},
    mask{YType::str, "mask"},
    override{YType::empty, "override"}
{

    yang_name = "ipv4-subnet-type1"; yang_parent_name = "fallback"; is_top_level_class = false; has_list_ancestor = false;
}

Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::~Ipv4SubnetType1()
{
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::has_data() const
{
    return ipv4.is_set
	|| mask.is_set
	|| override.is_set;
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(override.yfilter);
}

std::string Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/device-tracking/Cisco-IOS-XE-device-tracking:tracking/auto-source/fallback/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subnet-type1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "mask" || name == "override")
        return true;
    return false;
}

Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::Ipv4SubnetType2()
    :
    ipv4_prefix_name{YType::str, "ipv4-prefix-name"},
    override{YType::empty, "override"}
{

    yang_name = "ipv4-subnet-type2"; yang_parent_name = "fallback"; is_top_level_class = false; has_list_ancestor = false;
}

Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::~Ipv4SubnetType2()
{
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::has_data() const
{
    return ipv4_prefix_name.is_set
	|| override.is_set;
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_prefix_name.yfilter)
	|| ydk::is_set(override.yfilter);
}

std::string Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/device-tracking/Cisco-IOS-XE-device-tracking:tracking/auto-source/fallback/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subnet-type2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_prefix_name.is_set || is_set(ipv4_prefix_name.yfilter)) leaf_name_data.push_back(ipv4_prefix_name.get_name_leafdata());
    if (override.is_set || is_set(override.yfilter)) leaf_name_data.push_back(override.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-prefix-name")
    {
        ipv4_prefix_name = value;
        ipv4_prefix_name.value_namespace = name_space;
        ipv4_prefix_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override")
    {
        override = value;
        override.value_namespace = name_space;
        override.value_namespace_prefix = name_space_prefix;
    }
}

void Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-prefix-name")
    {
        ipv4_prefix_name.yfilter = yfilter;
    }
    if(value_path == "override")
    {
        override.yfilter = yfilter;
    }
}

bool Native::DeviceTracking::Tracking::AutoSource::Fallback::Ipv4SubnetType2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-prefix-name" || name == "override")
        return true;
    return false;
}

Native::Fhrp::Fhrp()
    :
    version(std::make_shared<Native::Fhrp::Version>())
{
    version->parent = this;

    yang_name = "fhrp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Fhrp::~Fhrp()
{
}

bool Native::Fhrp::has_data() const
{
    return (version !=  nullptr && version->has_data());
}

bool Native::Fhrp::has_operation() const
{
    return is_set(yfilter)
	|| (version !=  nullptr && version->has_operation());
}

std::string Native::Fhrp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fhrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fhrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fhrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fhrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "version")
    {
        if(version == nullptr)
        {
            version = std::make_shared<Native::Fhrp::Version>();
        }
        return version;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fhrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(version != nullptr)
    {
        children["version"] = version;
    }

    return children;
}

void Native::Fhrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Fhrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Fhrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "version")
        return true;
    return false;
}

Native::Fhrp::Version::Version()
    :
    vrrp{YType::enumeration, "vrrp"}
{

    yang_name = "version"; yang_parent_name = "fhrp"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Fhrp::Version::~Version()
{
}

bool Native::Fhrp::Version::has_data() const
{
    return vrrp.is_set;
}

bool Native::Fhrp::Version::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrrp.yfilter);
}

std::string Native::Fhrp::Version::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/fhrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Fhrp::Version::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Fhrp::Version::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrrp.is_set || is_set(vrrp.yfilter)) leaf_name_data.push_back(vrrp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Fhrp::Version::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Fhrp::Version::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Fhrp::Version::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrrp")
    {
        vrrp = value;
        vrrp.value_namespace = name_space;
        vrrp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Fhrp::Version::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrrp")
    {
        vrrp.yfilter = yfilter;
    }
}

bool Native::Fhrp::Version::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrrp")
        return true;
    return false;
}

Native::Metadata::Metadata()
    :
    flow(nullptr) // presence node
{

    yang_name = "metadata"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Metadata::~Metadata()
{
}

bool Native::Metadata::has_data() const
{
    return (flow !=  nullptr && flow->has_data());
}

bool Native::Metadata::has_operation() const
{
    return is_set(yfilter)
	|| (flow !=  nullptr && flow->has_operation());
}

std::string Native::Metadata::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Metadata::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metadata";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Metadata::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Metadata::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Metadata::Flow>();
        }
        return flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Metadata::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    return children;
}

void Native::Metadata::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Metadata::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Metadata::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow")
        return true;
    return false;
}

Native::Metadata::Flow::Flow()
    :
    transmit{YType::empty, "transmit"}
{

    yang_name = "flow"; yang_parent_name = "metadata"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Metadata::Flow::~Flow()
{
}

bool Native::Metadata::Flow::has_data() const
{
    return transmit.is_set;
}

bool Native::Metadata::Flow::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transmit.yfilter);
}

std::string Native::Metadata::Flow::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/metadata/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Metadata::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Metadata::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transmit.is_set || is_set(transmit.yfilter)) leaf_name_data.push_back(transmit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Metadata::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Metadata::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Metadata::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transmit")
    {
        transmit = value;
        transmit.value_namespace = name_space;
        transmit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Metadata::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transmit")
    {
        transmit.yfilter = yfilter;
    }
}

bool Native::Metadata::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transmit")
        return true;
    return false;
}

Native::Profile::Profile()
    :
    flow{YType::empty, "flow"}
{

    yang_name = "profile"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Profile::~Profile()
{
}

bool Native::Profile::has_data() const
{
    return flow.is_set;
}

bool Native::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow.yfilter);
}

std::string Native::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow.is_set || is_set(flow.yfilter)) leaf_name_data.push_back(flow.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow")
    {
        flow = value;
        flow.value_namespace = name_space;
        flow.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow")
    {
        flow.yfilter = yfilter;
    }
}

bool Native::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow")
        return true;
    return false;
}

Native::Alias::Alias()
    :
    exec(std::make_shared<Native::Alias::Exec>())
{
    exec->parent = this;

    yang_name = "alias"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Alias::~Alias()
{
}

bool Native::Alias::has_data() const
{
    return (exec !=  nullptr && exec->has_data());
}

bool Native::Alias::has_operation() const
{
    return is_set(yfilter)
	|| (exec !=  nullptr && exec->has_operation());
}

std::string Native::Alias::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Alias::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alias";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Alias::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Alias::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Alias::Exec>();
        }
        return exec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Alias::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    return children;
}

void Native::Alias::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Alias::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Alias::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exec")
        return true;
    return false;
}

Native::Alias::Exec::Exec()
    :
    alias_name{YType::str, "alias-name"},
    new_alias_name{YType::str, "new-alias-name"}
{

    yang_name = "exec"; yang_parent_name = "alias"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Alias::Exec::~Exec()
{
}

bool Native::Alias::Exec::has_data() const
{
    return alias_name.is_set
	|| new_alias_name.is_set;
}

bool Native::Alias::Exec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alias_name.yfilter)
	|| ydk::is_set(new_alias_name.yfilter);
}

std::string Native::Alias::Exec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/alias/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Alias::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Alias::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alias_name.is_set || is_set(alias_name.yfilter)) leaf_name_data.push_back(alias_name.get_name_leafdata());
    if (new_alias_name.is_set || is_set(new_alias_name.yfilter)) leaf_name_data.push_back(new_alias_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Alias::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Alias::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Alias::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alias-name")
    {
        alias_name = value;
        alias_name.value_namespace = name_space;
        alias_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-alias-name")
    {
        new_alias_name = value;
        new_alias_name.value_namespace = name_space;
        new_alias_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Alias::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alias-name")
    {
        alias_name.yfilter = yfilter;
    }
    if(value_path == "new-alias-name")
    {
        new_alias_name.yfilter = yfilter;
    }
}

bool Native::Alias::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alias-name" || name == "new-alias-name")
        return true;
    return false;
}

Native::Line::Line()
{

    yang_name = "line"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Line::~Line()
{
}

bool Native::Line::has_data() const
{
    for (std::size_t index=0; index<line_list.size(); index++)
    {
        if(line_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<aux.size(); index++)
    {
        if(aux[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<console.size(); index++)
    {
        if(console[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vty.size(); index++)
    {
        if(vty[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::has_operation() const
{
    for (std::size_t index=0; index<line_list.size(); index++)
    {
        if(line_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<aux.size(); index++)
    {
        if(aux[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<console.size(); index++)
    {
        if(console[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vty.size(); index++)
    {
        if(vty[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Line::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Line::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "line-list")
    {
        for(auto const & c : line_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::LineList>();
        c->parent = this;
        line_list.push_back(c);
        return c;
    }

    if(child_yang_name == "aux")
    {
        for(auto const & c : aux)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::Aux>();
        c->parent = this;
        aux.push_back(c);
        return c;
    }

    if(child_yang_name == "console")
    {
        for(auto const & c : console)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::Console>();
        c->parent = this;
        console.push_back(c);
        return c;
    }

    if(child_yang_name == "vty")
    {
        for(auto const & c : vty)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::Vty>();
        c->parent = this;
        vty.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : line_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : aux)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : console)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vty)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Line::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line-list" || name == "aux" || name == "console" || name == "vty")
        return true;
    return false;
}

Native::Line::LineList::LineList()
    :
    first_number{YType::uint8, "first-number"},
    last_number{YType::uint16, "last-number"},
    no_activation_character{YType::boolean, "no-activation-character"},
    activation_character{YType::str, "activation-character"},
    data_character_bits{YType::uint8, "data-character-bits"},
    domain_lookup{YType::empty, "domain-lookup"},
    editing{YType::empty, "editing"},
    exec_banner{YType::empty, "exec-banner"},
    exec_character_bits{YType::uint8, "exec-character-bits"},
    full_help{YType::empty, "full-help"},
    international{YType::empty, "international"},
    length{YType::uint16, "length"},
    line{YType::uint8, "line"},
    location{YType::str, "location"},
    monitor{YType::empty, "monitor"},
    motd_banner{YType::empty, "motd-banner"},
    notify{YType::empty, "notify"},
    rotary{YType::uint8, "rotary"},
    rxspeed{YType::uint32, "rxspeed"},
    session_limit{YType::uint32, "session-limit"},
    special_character_bits{YType::uint8, "special-character-bits"},
    speed{YType::uint32, "speed"},
    start_character{YType::str, "start-character"},
    stop_character{YType::str, "stop-character"},
    stopbits{YType::enumeration, "stopbits"},
    terminal_type{YType::str, "terminal-type"},
    txspeed{YType::uint32, "txspeed"},
    width{YType::uint16, "width"}
    	,
    authorization(std::make_shared<Native::Line::LineList::Authorization>())
	,access_class(std::make_shared<Native::Line::LineList::AccessClass>())
	,autocommand(std::make_shared<Native::Line::LineList::Autocommand>())
	,autocommand_options(nullptr) // presence node
	,databits(std::make_shared<Native::Line::LineList::Databits>())
	,escape_character(std::make_shared<Native::Line::LineList::EscapeCharacter>())
	,no_exec(std::make_shared<Native::Line::LineList::NoExec>())
	,exec(std::make_shared<Native::Line::LineList::Exec>())
	,exec_timeout(std::make_shared<Native::Line::LineList::ExecTimeout>())
	,flowcontrol(std::make_shared<Native::Line::LineList::Flowcontrol>())
	,history(nullptr) // presence node
	,ip(std::make_shared<Native::Line::LineList::Ip>())
	,ipv6(std::make_shared<Native::Line::LineList::Ipv6>())
	,logging(std::make_shared<Native::Line::LineList::Logging>())
	,login(nullptr) // presence node
	,media_type(std::make_shared<Native::Line::LineList::MediaType>())
	,modem(std::make_shared<Native::Line::LineList::Modem>())
	,padding(std::make_shared<Native::Line::LineList::Padding>())
	,parity(std::make_shared<Native::Line::LineList::Parity>())
	,password(std::make_shared<Native::Line::LineList::Password>())
	,prc(std::make_shared<Native::Line::LineList::Prc>())
	,privilege(std::make_shared<Native::Line::LineList::Privilege>())
	,session_timeout(std::make_shared<Native::Line::LineList::SessionTimeout>())
	,timeout(std::make_shared<Native::Line::LineList::Timeout>())
	,telnet(std::make_shared<Native::Line::LineList::Telnet>())
	,transport(std::make_shared<Native::Line::LineList::Transport>())
	,usb_inactivity_timeout(std::make_shared<Native::Line::LineList::UsbInactivityTimeout>())
{
    authorization->parent = this;
    access_class->parent = this;
    autocommand->parent = this;
    databits->parent = this;
    escape_character->parent = this;
    no_exec->parent = this;
    exec->parent = this;
    exec_timeout->parent = this;
    flowcontrol->parent = this;
    ip->parent = this;
    ipv6->parent = this;
    logging->parent = this;
    media_type->parent = this;
    modem->parent = this;
    padding->parent = this;
    parity->parent = this;
    password->parent = this;
    prc->parent = this;
    privilege->parent = this;
    session_timeout->parent = this;
    timeout->parent = this;
    telnet->parent = this;
    transport->parent = this;
    usb_inactivity_timeout->parent = this;

    yang_name = "line-list"; yang_parent_name = "line"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Line::LineList::~LineList()
{
}

bool Native::Line::LineList::has_data() const
{
    return first_number.is_set
	|| last_number.is_set
	|| no_activation_character.is_set
	|| activation_character.is_set
	|| data_character_bits.is_set
	|| domain_lookup.is_set
	|| editing.is_set
	|| exec_banner.is_set
	|| exec_character_bits.is_set
	|| full_help.is_set
	|| international.is_set
	|| length.is_set
	|| line.is_set
	|| location.is_set
	|| monitor.is_set
	|| motd_banner.is_set
	|| notify.is_set
	|| rotary.is_set
	|| rxspeed.is_set
	|| session_limit.is_set
	|| special_character_bits.is_set
	|| speed.is_set
	|| start_character.is_set
	|| stop_character.is_set
	|| stopbits.is_set
	|| terminal_type.is_set
	|| txspeed.is_set
	|| width.is_set
	|| (authorization !=  nullptr && authorization->has_data())
	|| (access_class !=  nullptr && access_class->has_data())
	|| (autocommand !=  nullptr && autocommand->has_data())
	|| (autocommand_options !=  nullptr && autocommand_options->has_data())
	|| (databits !=  nullptr && databits->has_data())
	|| (escape_character !=  nullptr && escape_character->has_data())
	|| (no_exec !=  nullptr && no_exec->has_data())
	|| (exec !=  nullptr && exec->has_data())
	|| (exec_timeout !=  nullptr && exec_timeout->has_data())
	|| (flowcontrol !=  nullptr && flowcontrol->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (login !=  nullptr && login->has_data())
	|| (media_type !=  nullptr && media_type->has_data())
	|| (modem !=  nullptr && modem->has_data())
	|| (padding !=  nullptr && padding->has_data())
	|| (parity !=  nullptr && parity->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (prc !=  nullptr && prc->has_data())
	|| (privilege !=  nullptr && privilege->has_data())
	|| (session_timeout !=  nullptr && session_timeout->has_data())
	|| (timeout !=  nullptr && timeout->has_data())
	|| (telnet !=  nullptr && telnet->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (usb_inactivity_timeout !=  nullptr && usb_inactivity_timeout->has_data());
}

bool Native::Line::LineList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(first_number.yfilter)
	|| ydk::is_set(last_number.yfilter)
	|| ydk::is_set(no_activation_character.yfilter)
	|| ydk::is_set(activation_character.yfilter)
	|| ydk::is_set(data_character_bits.yfilter)
	|| ydk::is_set(domain_lookup.yfilter)
	|| ydk::is_set(editing.yfilter)
	|| ydk::is_set(exec_banner.yfilter)
	|| ydk::is_set(exec_character_bits.yfilter)
	|| ydk::is_set(full_help.yfilter)
	|| ydk::is_set(international.yfilter)
	|| ydk::is_set(length.yfilter)
	|| ydk::is_set(line.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(monitor.yfilter)
	|| ydk::is_set(motd_banner.yfilter)
	|| ydk::is_set(notify.yfilter)
	|| ydk::is_set(rotary.yfilter)
	|| ydk::is_set(rxspeed.yfilter)
	|| ydk::is_set(session_limit.yfilter)
	|| ydk::is_set(special_character_bits.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(start_character.yfilter)
	|| ydk::is_set(stop_character.yfilter)
	|| ydk::is_set(stopbits.yfilter)
	|| ydk::is_set(terminal_type.yfilter)
	|| ydk::is_set(txspeed.yfilter)
	|| ydk::is_set(width.yfilter)
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (access_class !=  nullptr && access_class->has_operation())
	|| (autocommand !=  nullptr && autocommand->has_operation())
	|| (autocommand_options !=  nullptr && autocommand_options->has_operation())
	|| (databits !=  nullptr && databits->has_operation())
	|| (escape_character !=  nullptr && escape_character->has_operation())
	|| (no_exec !=  nullptr && no_exec->has_operation())
	|| (exec !=  nullptr && exec->has_operation())
	|| (exec_timeout !=  nullptr && exec_timeout->has_operation())
	|| (flowcontrol !=  nullptr && flowcontrol->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (login !=  nullptr && login->has_operation())
	|| (media_type !=  nullptr && media_type->has_operation())
	|| (modem !=  nullptr && modem->has_operation())
	|| (padding !=  nullptr && padding->has_operation())
	|| (parity !=  nullptr && parity->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (prc !=  nullptr && prc->has_operation())
	|| (privilege !=  nullptr && privilege->has_operation())
	|| (session_timeout !=  nullptr && session_timeout->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation())
	|| (telnet !=  nullptr && telnet->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (usb_inactivity_timeout !=  nullptr && usb_inactivity_timeout->has_operation());
}

std::string Native::Line::LineList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/line/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Line::LineList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "line-list" <<"[first-number='" <<first_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first_number.is_set || is_set(first_number.yfilter)) leaf_name_data.push_back(first_number.get_name_leafdata());
    if (last_number.is_set || is_set(last_number.yfilter)) leaf_name_data.push_back(last_number.get_name_leafdata());
    if (no_activation_character.is_set || is_set(no_activation_character.yfilter)) leaf_name_data.push_back(no_activation_character.get_name_leafdata());
    if (activation_character.is_set || is_set(activation_character.yfilter)) leaf_name_data.push_back(activation_character.get_name_leafdata());
    if (data_character_bits.is_set || is_set(data_character_bits.yfilter)) leaf_name_data.push_back(data_character_bits.get_name_leafdata());
    if (domain_lookup.is_set || is_set(domain_lookup.yfilter)) leaf_name_data.push_back(domain_lookup.get_name_leafdata());
    if (editing.is_set || is_set(editing.yfilter)) leaf_name_data.push_back(editing.get_name_leafdata());
    if (exec_banner.is_set || is_set(exec_banner.yfilter)) leaf_name_data.push_back(exec_banner.get_name_leafdata());
    if (exec_character_bits.is_set || is_set(exec_character_bits.yfilter)) leaf_name_data.push_back(exec_character_bits.get_name_leafdata());
    if (full_help.is_set || is_set(full_help.yfilter)) leaf_name_data.push_back(full_help.get_name_leafdata());
    if (international.is_set || is_set(international.yfilter)) leaf_name_data.push_back(international.get_name_leafdata());
    if (length.is_set || is_set(length.yfilter)) leaf_name_data.push_back(length.get_name_leafdata());
    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());
    if (motd_banner.is_set || is_set(motd_banner.yfilter)) leaf_name_data.push_back(motd_banner.get_name_leafdata());
    if (notify.is_set || is_set(notify.yfilter)) leaf_name_data.push_back(notify.get_name_leafdata());
    if (rotary.is_set || is_set(rotary.yfilter)) leaf_name_data.push_back(rotary.get_name_leafdata());
    if (rxspeed.is_set || is_set(rxspeed.yfilter)) leaf_name_data.push_back(rxspeed.get_name_leafdata());
    if (session_limit.is_set || is_set(session_limit.yfilter)) leaf_name_data.push_back(session_limit.get_name_leafdata());
    if (special_character_bits.is_set || is_set(special_character_bits.yfilter)) leaf_name_data.push_back(special_character_bits.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (start_character.is_set || is_set(start_character.yfilter)) leaf_name_data.push_back(start_character.get_name_leafdata());
    if (stop_character.is_set || is_set(stop_character.yfilter)) leaf_name_data.push_back(stop_character.get_name_leafdata());
    if (stopbits.is_set || is_set(stopbits.yfilter)) leaf_name_data.push_back(stopbits.get_name_leafdata());
    if (terminal_type.is_set || is_set(terminal_type.yfilter)) leaf_name_data.push_back(terminal_type.get_name_leafdata());
    if (txspeed.is_set || is_set(txspeed.yfilter)) leaf_name_data.push_back(txspeed.get_name_leafdata());
    if (width.is_set || is_set(width.yfilter)) leaf_name_data.push_back(width.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Line::LineList::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "access-class")
    {
        if(access_class == nullptr)
        {
            access_class = std::make_shared<Native::Line::LineList::AccessClass>();
        }
        return access_class;
    }

    if(child_yang_name == "autocommand")
    {
        if(autocommand == nullptr)
        {
            autocommand = std::make_shared<Native::Line::LineList::Autocommand>();
        }
        return autocommand;
    }

    if(child_yang_name == "autocommand-options")
    {
        if(autocommand_options == nullptr)
        {
            autocommand_options = std::make_shared<Native::Line::LineList::AutocommandOptions>();
        }
        return autocommand_options;
    }

    if(child_yang_name == "databits")
    {
        if(databits == nullptr)
        {
            databits = std::make_shared<Native::Line::LineList::Databits>();
        }
        return databits;
    }

    if(child_yang_name == "escape-character")
    {
        if(escape_character == nullptr)
        {
            escape_character = std::make_shared<Native::Line::LineList::EscapeCharacter>();
        }
        return escape_character;
    }

    if(child_yang_name == "no-exec")
    {
        if(no_exec == nullptr)
        {
            no_exec = std::make_shared<Native::Line::LineList::NoExec>();
        }
        return no_exec;
    }

    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Line::LineList::Exec>();
        }
        return exec;
    }

    if(child_yang_name == "exec-timeout")
    {
        if(exec_timeout == nullptr)
        {
            exec_timeout = std::make_shared<Native::Line::LineList::ExecTimeout>();
        }
        return exec_timeout;
    }

    if(child_yang_name == "flowcontrol")
    {
        if(flowcontrol == nullptr)
        {
            flowcontrol = std::make_shared<Native::Line::LineList::Flowcontrol>();
        }
        return flowcontrol;
    }

    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Line::LineList::History>();
        }
        return history;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Line::LineList::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Line::LineList::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Line::LineList::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "login")
    {
        if(login == nullptr)
        {
            login = std::make_shared<Native::Line::LineList::Login>();
        }
        return login;
    }

    if(child_yang_name == "media-type")
    {
        if(media_type == nullptr)
        {
            media_type = std::make_shared<Native::Line::LineList::MediaType>();
        }
        return media_type;
    }

    if(child_yang_name == "modem")
    {
        if(modem == nullptr)
        {
            modem = std::make_shared<Native::Line::LineList::Modem>();
        }
        return modem;
    }

    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Line::LineList::Padding>();
        }
        return padding;
    }

    if(child_yang_name == "parity")
    {
        if(parity == nullptr)
        {
            parity = std::make_shared<Native::Line::LineList::Parity>();
        }
        return parity;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Line::LineList::Password>();
        }
        return password;
    }

    if(child_yang_name == "prc")
    {
        if(prc == nullptr)
        {
            prc = std::make_shared<Native::Line::LineList::Prc>();
        }
        return prc;
    }

    if(child_yang_name == "privilege")
    {
        if(privilege == nullptr)
        {
            privilege = std::make_shared<Native::Line::LineList::Privilege>();
        }
        return privilege;
    }

    if(child_yang_name == "session-timeout")
    {
        if(session_timeout == nullptr)
        {
            session_timeout = std::make_shared<Native::Line::LineList::SessionTimeout>();
        }
        return session_timeout;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Line::LineList::Timeout>();
        }
        return timeout;
    }

    if(child_yang_name == "telnet")
    {
        if(telnet == nullptr)
        {
            telnet = std::make_shared<Native::Line::LineList::Telnet>();
        }
        return telnet;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Line::LineList::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "usb-inactivity-timeout")
    {
        if(usb_inactivity_timeout == nullptr)
        {
            usb_inactivity_timeout = std::make_shared<Native::Line::LineList::UsbInactivityTimeout>();
        }
        return usb_inactivity_timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(access_class != nullptr)
    {
        children["access-class"] = access_class;
    }

    if(autocommand != nullptr)
    {
        children["autocommand"] = autocommand;
    }

    if(autocommand_options != nullptr)
    {
        children["autocommand-options"] = autocommand_options;
    }

    if(databits != nullptr)
    {
        children["databits"] = databits;
    }

    if(escape_character != nullptr)
    {
        children["escape-character"] = escape_character;
    }

    if(no_exec != nullptr)
    {
        children["no-exec"] = no_exec;
    }

    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    if(exec_timeout != nullptr)
    {
        children["exec-timeout"] = exec_timeout;
    }

    if(flowcontrol != nullptr)
    {
        children["flowcontrol"] = flowcontrol;
    }

    if(history != nullptr)
    {
        children["history"] = history;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(logging != nullptr)
    {
        children["logging"] = logging;
    }

    if(login != nullptr)
    {
        children["login"] = login;
    }

    if(media_type != nullptr)
    {
        children["media-type"] = media_type;
    }

    if(modem != nullptr)
    {
        children["modem"] = modem;
    }

    if(padding != nullptr)
    {
        children["padding"] = padding;
    }

    if(parity != nullptr)
    {
        children["parity"] = parity;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(prc != nullptr)
    {
        children["prc"] = prc;
    }

    if(privilege != nullptr)
    {
        children["privilege"] = privilege;
    }

    if(session_timeout != nullptr)
    {
        children["session-timeout"] = session_timeout;
    }

    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    if(telnet != nullptr)
    {
        children["telnet"] = telnet;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    if(usb_inactivity_timeout != nullptr)
    {
        children["usb-inactivity-timeout"] = usb_inactivity_timeout;
    }

    return children;
}

void Native::Line::LineList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "first-number")
    {
        first_number = value;
        first_number.value_namespace = name_space;
        first_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-number")
    {
        last_number = value;
        last_number.value_namespace = name_space;
        last_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-activation-character")
    {
        no_activation_character = value;
        no_activation_character.value_namespace = name_space;
        no_activation_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activation-character")
    {
        activation_character = value;
        activation_character.value_namespace = name_space;
        activation_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "data-character-bits")
    {
        data_character_bits = value;
        data_character_bits.value_namespace = name_space;
        data_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-lookup")
    {
        domain_lookup = value;
        domain_lookup.value_namespace = name_space;
        domain_lookup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "editing")
    {
        editing = value;
        editing.value_namespace = name_space;
        editing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec-banner")
    {
        exec_banner = value;
        exec_banner.value_namespace = name_space;
        exec_banner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec-character-bits")
    {
        exec_character_bits = value;
        exec_character_bits.value_namespace = name_space;
        exec_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "full-help")
    {
        full_help = value;
        full_help.value_namespace = name_space;
        full_help.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "international")
    {
        international = value;
        international.value_namespace = name_space;
        international.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "length")
    {
        length = value;
        length.value_namespace = name_space;
        length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "motd-banner")
    {
        motd_banner = value;
        motd_banner.value_namespace = name_space;
        motd_banner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notify")
    {
        notify = value;
        notify.value_namespace = name_space;
        notify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rotary")
    {
        rotary = value;
        rotary.value_namespace = name_space;
        rotary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxspeed")
    {
        rxspeed = value;
        rxspeed.value_namespace = name_space;
        rxspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-limit")
    {
        session_limit = value;
        session_limit.value_namespace = name_space;
        session_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "special-character-bits")
    {
        special_character_bits = value;
        special_character_bits.value_namespace = name_space;
        special_character_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-character")
    {
        start_character = value;
        start_character.value_namespace = name_space;
        start_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stop-character")
    {
        stop_character = value;
        stop_character.value_namespace = name_space;
        stop_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stopbits")
    {
        stopbits = value;
        stopbits.value_namespace = name_space;
        stopbits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminal-type")
    {
        terminal_type = value;
        terminal_type.value_namespace = name_space;
        terminal_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txspeed")
    {
        txspeed = value;
        txspeed.value_namespace = name_space;
        txspeed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "width")
    {
        width = value;
        width.value_namespace = name_space;
        width.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "first-number")
    {
        first_number.yfilter = yfilter;
    }
    if(value_path == "last-number")
    {
        last_number.yfilter = yfilter;
    }
    if(value_path == "no-activation-character")
    {
        no_activation_character.yfilter = yfilter;
    }
    if(value_path == "activation-character")
    {
        activation_character.yfilter = yfilter;
    }
    if(value_path == "data-character-bits")
    {
        data_character_bits.yfilter = yfilter;
    }
    if(value_path == "domain-lookup")
    {
        domain_lookup.yfilter = yfilter;
    }
    if(value_path == "editing")
    {
        editing.yfilter = yfilter;
    }
    if(value_path == "exec-banner")
    {
        exec_banner.yfilter = yfilter;
    }
    if(value_path == "exec-character-bits")
    {
        exec_character_bits.yfilter = yfilter;
    }
    if(value_path == "full-help")
    {
        full_help.yfilter = yfilter;
    }
    if(value_path == "international")
    {
        international.yfilter = yfilter;
    }
    if(value_path == "length")
    {
        length.yfilter = yfilter;
    }
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
    if(value_path == "motd-banner")
    {
        motd_banner.yfilter = yfilter;
    }
    if(value_path == "notify")
    {
        notify.yfilter = yfilter;
    }
    if(value_path == "rotary")
    {
        rotary.yfilter = yfilter;
    }
    if(value_path == "rxspeed")
    {
        rxspeed.yfilter = yfilter;
    }
    if(value_path == "session-limit")
    {
        session_limit.yfilter = yfilter;
    }
    if(value_path == "special-character-bits")
    {
        special_character_bits.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "start-character")
    {
        start_character.yfilter = yfilter;
    }
    if(value_path == "stop-character")
    {
        stop_character.yfilter = yfilter;
    }
    if(value_path == "stopbits")
    {
        stopbits.yfilter = yfilter;
    }
    if(value_path == "terminal-type")
    {
        terminal_type.yfilter = yfilter;
    }
    if(value_path == "txspeed")
    {
        txspeed.yfilter = yfilter;
    }
    if(value_path == "width")
    {
        width.yfilter = yfilter;
    }
}

bool Native::Line::LineList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authorization" || name == "access-class" || name == "autocommand" || name == "autocommand-options" || name == "databits" || name == "escape-character" || name == "no-exec" || name == "exec" || name == "exec-timeout" || name == "flowcontrol" || name == "history" || name == "ip" || name == "ipv6" || name == "logging" || name == "login" || name == "media-type" || name == "modem" || name == "padding" || name == "parity" || name == "password" || name == "prc" || name == "privilege" || name == "session-timeout" || name == "timeout" || name == "telnet" || name == "transport" || name == "usb-inactivity-timeout" || name == "first-number" || name == "last-number" || name == "no-activation-character" || name == "activation-character" || name == "data-character-bits" || name == "domain-lookup" || name == "editing" || name == "exec-banner" || name == "exec-character-bits" || name == "full-help" || name == "international" || name == "length" || name == "line" || name == "location" || name == "monitor" || name == "motd-banner" || name == "notify" || name == "rotary" || name == "rxspeed" || name == "session-limit" || name == "special-character-bits" || name == "speed" || name == "start-character" || name == "stop-character" || name == "stopbits" || name == "terminal-type" || name == "txspeed" || name == "width")
        return true;
    return false;
}

Native::Line::LineList::Authorization::Authorization()
    :
    command(std::make_shared<Native::Line::LineList::Authorization::Command>())
{
    command->parent = this;

    yang_name = "authorization"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Authorization::~Authorization()
{
}

bool Native::Line::LineList::Authorization::has_data() const
{
    return (command !=  nullptr && command->has_data());
}

bool Native::Line::LineList::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| (command !=  nullptr && command->has_operation());
}

std::string Native::Line::LineList::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command")
    {
        if(command == nullptr)
        {
            command = std::make_shared<Native::Line::LineList::Authorization::Command>();
        }
        return command;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(command != nullptr)
    {
        children["command"] = command;
    }

    return children;
}

void Native::Line::LineList::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::LineList::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::LineList::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command")
        return true;
    return false;
}

Native::Line::LineList::Authorization::Command::Command()
    :
    enable_level{YType::uint8, "enable-level"},
    auth_name{YType::str, "auth-name"}
{

    yang_name = "command"; yang_parent_name = "authorization"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Authorization::Command::~Command()
{
}

bool Native::Line::LineList::Authorization::Command::has_data() const
{
    return enable_level.is_set
	|| auth_name.is_set;
}

bool Native::Line::LineList::Authorization::Command::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable_level.yfilter)
	|| ydk::is_set(auth_name.yfilter);
}

std::string Native::Line::LineList::Authorization::Command::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Authorization::Command::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_level.is_set || is_set(enable_level.yfilter)) leaf_name_data.push_back(enable_level.get_name_leafdata());
    if (auth_name.is_set || is_set(auth_name.yfilter)) leaf_name_data.push_back(auth_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Authorization::Command::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Authorization::Command::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Authorization::Command::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable-level")
    {
        enable_level = value;
        enable_level.value_namespace = name_space;
        enable_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-name")
    {
        auth_name = value;
        auth_name.value_namespace = name_space;
        auth_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Authorization::Command::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-level")
    {
        enable_level.yfilter = yfilter;
    }
    if(value_path == "auth-name")
    {
        auth_name.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Authorization::Command::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable-level" || name == "auth-name")
        return true;
    return false;
}

Native::Line::LineList::AccessClass::AccessClass()
{

    yang_name = "access-class"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::AccessClass::~AccessClass()
{
}

bool Native::Line::LineList::AccessClass::has_data() const
{
    for (std::size_t index=0; index<acccess_list.size(); index++)
    {
        if(acccess_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Line::LineList::AccessClass::has_operation() const
{
    for (std::size_t index=0; index<acccess_list.size(); index++)
    {
        if(acccess_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Line::LineList::AccessClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::AccessClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::AccessClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acccess-list")
    {
        for(auto const & c : acccess_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Line::LineList::AccessClass::AcccessList>();
        c->parent = this;
        acccess_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::AccessClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : acccess_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Line::LineList::AccessClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::LineList::AccessClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::LineList::AccessClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acccess-list")
        return true;
    return false;
}

Native::Line::LineList::AccessClass::AcccessList::AcccessList()
    :
    direction{YType::enumeration, "direction"},
    access_list{YType::str, "access-list"},
    vrf_also{YType::empty, "vrf-also"}
{

    yang_name = "acccess-list"; yang_parent_name = "access-class"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::AccessClass::AcccessList::~AcccessList()
{
}

bool Native::Line::LineList::AccessClass::AcccessList::has_data() const
{
    return direction.is_set
	|| access_list.is_set
	|| vrf_also.is_set;
}

bool Native::Line::LineList::AccessClass::AcccessList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(access_list.yfilter)
	|| ydk::is_set(vrf_also.yfilter);
}

std::string Native::Line::LineList::AccessClass::AcccessList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acccess-list" <<"[direction='" <<direction <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::AccessClass::AcccessList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());
    if (vrf_also.is_set || is_set(vrf_also.yfilter)) leaf_name_data.push_back(vrf_also.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::AccessClass::AcccessList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::AccessClass::AcccessList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::AccessClass::AcccessList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-also")
    {
        vrf_also = value;
        vrf_also.value_namespace = name_space;
        vrf_also.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::AccessClass::AcccessList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
    if(value_path == "vrf-also")
    {
        vrf_also.yfilter = yfilter;
    }
}

bool Native::Line::LineList::AccessClass::AcccessList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "access-list" || name == "vrf-also")
        return true;
    return false;
}

Native::Line::LineList::Autocommand::Autocommand()
    :
    line{YType::str, "line"}
    	,
    no_suppress_linenumber(nullptr) // presence node
{

    yang_name = "autocommand"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Autocommand::~Autocommand()
{
}

bool Native::Line::LineList::Autocommand::has_data() const
{
    return line.is_set
	|| (no_suppress_linenumber !=  nullptr && no_suppress_linenumber->has_data());
}

bool Native::Line::LineList::Autocommand::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter)
	|| (no_suppress_linenumber !=  nullptr && no_suppress_linenumber->has_operation());
}

std::string Native::Line::LineList::Autocommand::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autocommand";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Autocommand::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Autocommand::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "no-suppress-linenumber")
    {
        if(no_suppress_linenumber == nullptr)
        {
            no_suppress_linenumber = std::make_shared<Native::Line::LineList::Autocommand::NoSuppressLinenumber>();
        }
        return no_suppress_linenumber;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Autocommand::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(no_suppress_linenumber != nullptr)
    {
        children["no-suppress-linenumber"] = no_suppress_linenumber;
    }

    return children;
}

void Native::Line::LineList::Autocommand::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Autocommand::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Autocommand::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-suppress-linenumber" || name == "line")
        return true;
    return false;
}

Native::Line::LineList::Autocommand::NoSuppressLinenumber::NoSuppressLinenumber()
    :
    line{YType::str, "line"}
{

    yang_name = "no-suppress-linenumber"; yang_parent_name = "autocommand"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Autocommand::NoSuppressLinenumber::~NoSuppressLinenumber()
{
}

bool Native::Line::LineList::Autocommand::NoSuppressLinenumber::has_data() const
{
    return line.is_set;
}

bool Native::Line::LineList::Autocommand::NoSuppressLinenumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(line.yfilter);
}

std::string Native::Line::LineList::Autocommand::NoSuppressLinenumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-suppress-linenumber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Autocommand::NoSuppressLinenumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (line.is_set || is_set(line.yfilter)) leaf_name_data.push_back(line.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Autocommand::NoSuppressLinenumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Autocommand::NoSuppressLinenumber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Autocommand::NoSuppressLinenumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "line")
    {
        line = value;
        line.value_namespace = name_space;
        line.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Autocommand::NoSuppressLinenumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "line")
    {
        line.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Autocommand::NoSuppressLinenumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "line")
        return true;
    return false;
}

Native::Line::LineList::AutocommandOptions::AutocommandOptions()
    :
    abort_character(nullptr) // presence node
	,delay(nullptr) // presence node
	,nohangup(nullptr) // presence node
{

    yang_name = "autocommand-options"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::AutocommandOptions::~AutocommandOptions()
{
}

bool Native::Line::LineList::AutocommandOptions::has_data() const
{
    return (abort_character !=  nullptr && abort_character->has_data())
	|| (delay !=  nullptr && delay->has_data())
	|| (nohangup !=  nullptr && nohangup->has_data());
}

bool Native::Line::LineList::AutocommandOptions::has_operation() const
{
    return is_set(yfilter)
	|| (abort_character !=  nullptr && abort_character->has_operation())
	|| (delay !=  nullptr && delay->has_operation())
	|| (nohangup !=  nullptr && nohangup->has_operation());
}

std::string Native::Line::LineList::AutocommandOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autocommand-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::AutocommandOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::AutocommandOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "abort-character")
    {
        if(abort_character == nullptr)
        {
            abort_character = std::make_shared<Native::Line::LineList::AutocommandOptions::AbortCharacter>();
        }
        return abort_character;
    }

    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Line::LineList::AutocommandOptions::Delay>();
        }
        return delay;
    }

    if(child_yang_name == "nohangup")
    {
        if(nohangup == nullptr)
        {
            nohangup = std::make_shared<Native::Line::LineList::AutocommandOptions::Nohangup>();
        }
        return nohangup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::AutocommandOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(abort_character != nullptr)
    {
        children["abort-character"] = abort_character;
    }

    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    if(nohangup != nullptr)
    {
        children["nohangup"] = nohangup;
    }

    return children;
}

void Native::Line::LineList::AutocommandOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Line::LineList::AutocommandOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Line::LineList::AutocommandOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abort-character" || name == "delay" || name == "nohangup")
        return true;
    return false;
}

Native::Line::LineList::AutocommandOptions::AbortCharacter::AbortCharacter()
    :
    character{YType::str, "character"}
{

    yang_name = "abort-character"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::AutocommandOptions::AbortCharacter::~AbortCharacter()
{
}

bool Native::Line::LineList::AutocommandOptions::AbortCharacter::has_data() const
{
    return character.is_set;
}

bool Native::Line::LineList::AutocommandOptions::AbortCharacter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(character.yfilter);
}

std::string Native::Line::LineList::AutocommandOptions::AbortCharacter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "abort-character";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::AutocommandOptions::AbortCharacter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (character.is_set || is_set(character.yfilter)) leaf_name_data.push_back(character.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::AutocommandOptions::AbortCharacter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::AutocommandOptions::AbortCharacter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::AutocommandOptions::AbortCharacter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "character")
    {
        character = value;
        character.value_namespace = name_space;
        character.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::AutocommandOptions::AbortCharacter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "character")
    {
        character.yfilter = yfilter;
    }
}

bool Native::Line::LineList::AutocommandOptions::AbortCharacter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "character")
        return true;
    return false;
}

Native::Line::LineList::AutocommandOptions::Delay::Delay()
    :
    time{YType::uint8, "time"}
{

    yang_name = "delay"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::AutocommandOptions::Delay::~Delay()
{
}

bool Native::Line::LineList::AutocommandOptions::Delay::has_data() const
{
    return time.is_set;
}

bool Native::Line::LineList::AutocommandOptions::Delay::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Line::LineList::AutocommandOptions::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::AutocommandOptions::Delay::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::AutocommandOptions::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::AutocommandOptions::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::AutocommandOptions::Delay::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::AutocommandOptions::Delay::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Line::LineList::AutocommandOptions::Delay::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time")
        return true;
    return false;
}

Native::Line::LineList::AutocommandOptions::Nohangup::Nohangup()
    :
    abort_character{YType::empty, "abort-character"},
    delay{YType::empty, "delay"}
{

    yang_name = "nohangup"; yang_parent_name = "autocommand-options"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::AutocommandOptions::Nohangup::~Nohangup()
{
}

bool Native::Line::LineList::AutocommandOptions::Nohangup::has_data() const
{
    return abort_character.is_set
	|| delay.is_set;
}

bool Native::Line::LineList::AutocommandOptions::Nohangup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(abort_character.yfilter)
	|| ydk::is_set(delay.yfilter);
}

std::string Native::Line::LineList::AutocommandOptions::Nohangup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nohangup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::AutocommandOptions::Nohangup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abort_character.is_set || is_set(abort_character.yfilter)) leaf_name_data.push_back(abort_character.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::AutocommandOptions::Nohangup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::AutocommandOptions::Nohangup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::AutocommandOptions::Nohangup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "abort-character")
    {
        abort_character = value;
        abort_character.value_namespace = name_space;
        abort_character.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::AutocommandOptions::Nohangup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "abort-character")
    {
        abort_character.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
}

bool Native::Line::LineList::AutocommandOptions::Nohangup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "abort-character" || name == "delay")
        return true;
    return false;
}

Native::Line::LineList::Databits::Databits()
    :
    set_to_5{YType::empty, "set-to-5"},
    set_to_6{YType::empty, "set-to-6"},
    set_to_7{YType::empty, "set-to-7"},
    set_to_8{YType::empty, "set-to-8"}
{

    yang_name = "databits"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::Databits::~Databits()
{
}

bool Native::Line::LineList::Databits::has_data() const
{
    return set_to_5.is_set
	|| set_to_6.is_set
	|| set_to_7.is_set
	|| set_to_8.is_set;
}

bool Native::Line::LineList::Databits::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(set_to_5.yfilter)
	|| ydk::is_set(set_to_6.yfilter)
	|| ydk::is_set(set_to_7.yfilter)
	|| ydk::is_set(set_to_8.yfilter);
}

std::string Native::Line::LineList::Databits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "databits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::Databits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_to_5.is_set || is_set(set_to_5.yfilter)) leaf_name_data.push_back(set_to_5.get_name_leafdata());
    if (set_to_6.is_set || is_set(set_to_6.yfilter)) leaf_name_data.push_back(set_to_6.get_name_leafdata());
    if (set_to_7.is_set || is_set(set_to_7.yfilter)) leaf_name_data.push_back(set_to_7.get_name_leafdata());
    if (set_to_8.is_set || is_set(set_to_8.yfilter)) leaf_name_data.push_back(set_to_8.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::Databits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::Databits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::Databits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "set-to-5")
    {
        set_to_5 = value;
        set_to_5.value_namespace = name_space;
        set_to_5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-6")
    {
        set_to_6 = value;
        set_to_6.value_namespace = name_space;
        set_to_6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-7")
    {
        set_to_7 = value;
        set_to_7.value_namespace = name_space;
        set_to_7.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-to-8")
    {
        set_to_8 = value;
        set_to_8.value_namespace = name_space;
        set_to_8.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::Databits::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "set-to-5")
    {
        set_to_5.yfilter = yfilter;
    }
    if(value_path == "set-to-6")
    {
        set_to_6.yfilter = yfilter;
    }
    if(value_path == "set-to-7")
    {
        set_to_7.yfilter = yfilter;
    }
    if(value_path == "set-to-8")
    {
        set_to_8.yfilter = yfilter;
    }
}

bool Native::Line::LineList::Databits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "set-to-5" || name == "set-to-6" || name == "set-to-7" || name == "set-to-8")
        return true;
    return false;
}

Native::Line::LineList::EscapeCharacter::EscapeCharacter()
    :
    char_{YType::str, "char"},
    soft{YType::empty, "soft"}
{

    yang_name = "escape-character"; yang_parent_name = "line-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Line::LineList::EscapeCharacter::~EscapeCharacter()
{
}

bool Native::Line::LineList::EscapeCharacter::has_data() const
{
    return char_.is_set
	|| soft.is_set;
}

bool Native::Line::LineList::EscapeCharacter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(char_.yfilter)
	|| ydk::is_set(soft.yfilter);
}

std::string Native::Line::LineList::EscapeCharacter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "escape-character";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Line::LineList::EscapeCharacter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (char_.is_set || is_set(char_.yfilter)) leaf_name_data.push_back(char_.get_name_leafdata());
    if (soft.is_set || is_set(soft.yfilter)) leaf_name_data.push_back(soft.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Line::LineList::EscapeCharacter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Line::LineList::EscapeCharacter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Line::LineList::EscapeCharacter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "char")
    {
        char_ = value;
        char_.value_namespace = name_space;
        char_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft")
    {
        soft = value;
        soft.value_namespace = name_space;
        soft.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Line::LineList::EscapeCharacter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "char")
    {
        char_.yfilter = yfilter;
    }
    if(value_path == "soft")
    {
        soft.yfilter = yfilter;
    }
}

bool Native::Line::LineList::EscapeCharacter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "char" || name == "soft")
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

const Enum::YLeaf Native::License::Smart::enable {0, "enable"};

const Enum::YLeaf Native::License::Boot::BootModule::Module::c2900 {0, "c2900"};

const Enum::YLeaf Native::ServiceInsertion::ServiceContext::Waas::Authentication::Encrypt::Y_0 {0, "0"};
const Enum::YLeaf Native::ServiceInsertion::ServiceContext::Waas::Authentication::Encrypt::Y_7 {1, "7"};

const Enum::YLeaf Native::ServiceInsertion::ServiceNodeGroup::NodeDiscovery::enable {0, "enable"};

const Enum::YLeaf Native::DeviceTracking::Policy::Tracking::TrackingOnOff::enable {0, "enable"};
const Enum::YLeaf Native::DeviceTracking::Policy::Tracking::TrackingOnOff::disable {1, "disable"};

const Enum::YLeaf Native::Fhrp::Version::Vrrp::v2 {0, "v2"};
const Enum::YLeaf Native::Fhrp::Version::Vrrp::v3 {1, "v3"};

const Enum::YLeaf Native::Line::LineList::Stopbits::Y_1 {0, "1"};
const Enum::YLeaf Native::Line::LineList::Stopbits::Y_1__DOT__5 {1, "1.5"};
const Enum::YLeaf Native::Line::LineList::Stopbits::Y_2 {2, "2"};

const Enum::YLeaf Native::Line::LineList::AccessClass::AcccessList::Direction::in {0, "in"};
const Enum::YLeaf Native::Line::LineList::AccessClass::AcccessList::Direction::out {1, "out"};

const Enum::YLeaf Native::Line::LineList::EscapeCharacter::Char_::BREAK {0, "BREAK"};
const Enum::YLeaf Native::Line::LineList::EscapeCharacter::Char_::DEFAULT {1, "DEFAULT"};
const Enum::YLeaf Native::Line::LineList::EscapeCharacter::Char_::NONE {2, "NONE"};


}
}

