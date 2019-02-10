
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_229.hpp"
#include "Cisco_IOS_XE_native_12.hpp"
#include "Cisco_IOS_XE_native_2.hpp"
#include "Cisco_IOS_XE_native_129.hpp"
#include "Cisco_IOS_XE_native_222.hpp"
#include "Cisco_IOS_XE_native_116.hpp"
#include "Cisco_IOS_XE_native_221.hpp"
#include "Cisco_IOS_XE_native_1.hpp"
#include "Cisco_IOS_XE_native_225.hpp"
#include "Cisco_IOS_XE_native_123.hpp"
#include "Cisco_IOS_XE_native_7.hpp"
#include "Cisco_IOS_XE_native_121.hpp"
#include "Cisco_IOS_XE_native_122.hpp"
#include "Cisco_IOS_XE_native_228.hpp"
#include "Cisco_IOS_XE_native_230.hpp"
#include "Cisco_IOS_XE_native_13.hpp"
#include "Cisco_IOS_XE_native_115.hpp"
#include "Cisco_IOS_XE_native_220.hpp"
#include "Cisco_IOS_XE_native_131.hpp"
#include "Cisco_IOS_XE_native_219.hpp"
#include "Cisco_IOS_XE_native_124.hpp"
#include "Cisco_IOS_XE_native_117.hpp"
#include "Cisco_IOS_XE_native_130.hpp"
#include "Cisco_IOS_XE_native_19.hpp"
#include "Cisco_IOS_XE_native_132.hpp"
#include "Cisco_IOS_XE_native_120.hpp"
#include "Cisco_IOS_XE_native_218.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Native()
    :
    version{YType::str, "version"},
    boot_start_marker{YType::empty, "boot-start-marker"},
    boot_end_marker{YType::empty, "boot-end-marker"},
    captive_portal_bypass{YType::empty, "captive-portal-bypass"},
    hostname{YType::str, "hostname"},
    aqm_register_fnf{YType::empty, "aqm-register-fnf"},
    config_register{YType::str, "config-register"},
    disable_eadi{YType::empty, "disable-eadi"}
        ,
    default_(std::make_shared<Native::Default>())
    , bfd(std::make_shared<Native::Bfd>())
    , stackwise_virtual(nullptr) // presence node
    , boot(std::make_shared<Native::Boot>())
    , banner(std::make_shared<Native::Banner>())
    , memory(std::make_shared<Native::Memory>())
    , location(std::make_shared<Native::Location>())
    , call_home(nullptr) // presence node
    , hw_module(std::make_shared<Native::HwModule>())
    , cisp(std::make_shared<Native::Cisp>())
    , module(std::make_shared<Native::Module>())
    , domain(this, {"name"})
    , parser(std::make_shared<Native::Parser>())
    , service(std::make_shared<Native::Service>())
    , platform(std::make_shared<Native::Platform>())
    , enable(std::make_shared<Native::Enable>())
    , password(std::make_shared<Native::Password>())
    , eap(std::make_shared<Native::Eap>())
    , archive(std::make_shared<Native::Archive>())
    , username(this, {"name"})
    , card(std::make_shared<Native::Card>())
    , controller(std::make_shared<Native::Controller>())
    , vrf(std::make_shared<Native::Vrf>())
    , rmon(std::make_shared<Native::Rmon>())
    , sampler(this, {"name"})
    , flow(std::make_shared<Native::Flow>())
    , ip(std::make_shared<Native::Ip>())
    , mka(std::make_shared<Native::Mka>())
    , macro(std::make_shared<Native::Macro>())
    , ipv6(std::make_shared<Native::Ipv6>())
    , vlan(std::make_shared<Native::Vlan>())
    , mvrp(std::make_shared<Native::Mvrp>())
    , avb(nullptr) // presence node
    , ptp(std::make_shared<Native::Ptp>())
    , cdp(std::make_shared<Native::Cdp>())
    , avc(std::make_shared<Native::Avc>())
    , policy(std::make_shared<Native::Policy>())
    , interface(std::make_shared<Native::Interface>())
    , route_map(this, {"name"})
    , route_tag(std::make_shared<Native::RouteTag>())
    , table_map(this, {"name"})
    , sdm(std::make_shared<Native::Sdm>())
    , mls(std::make_shared<Native::Mls>())
    , object_group(std::make_shared<Native::ObjectGroup>())
    , pseudowire_class(this, {"name"})
    , control_plane(nullptr) // presence node
    , control_plane_host(std::make_shared<Native::ControlPlaneHost>())
    , clock_(std::make_shared<Native::Clock>())
    , logging(std::make_shared<Native::Logging>())
    , aaa(std::make_shared<Native::Aaa>())
    , privilege(std::make_shared<Native::Privilege>())
    , login(std::make_shared<Native::Login>())
    , multilink(std::make_shared<Native::Multilink>())
    , mac_address_table(std::make_shared<Native::MacAddressTable>())
    , redundancy(nullptr) // presence node
    , scheduler(std::make_shared<Native::Scheduler>())
    , epm(std::make_shared<Native::Epm>())
    , spanning_tree(std::make_shared<Native::SpanningTree>())
    , subscriber(std::make_shared<Native::Subscriber>())
    , track(std::make_shared<Native::Track>())
    , dot1x(std::make_shared<Native::Dot1x>())
    , mab(std::make_shared<Native::Mab>())
    , fallback(std::make_shared<Native::Fallback>())
    , parameter_map(std::make_shared<Native::ParameterMap>())
    , ppp(std::make_shared<Native::Ppp>())
    , mac(std::make_shared<Native::Mac>())
    , tacacs(std::make_shared<Native::Tacacs>())
    , tacacs_server(std::make_shared<Native::TacacsServer>())
    , software(std::make_shared<Native::Software>())
    , upgrade(std::make_shared<Native::Upgrade>())
    , vtp(std::make_shared<Native::Vtp>())
    , xconnect(std::make_shared<Native::Xconnect>())
    , fabric(std::make_shared<Native::Fabric>())
    , port_channel(std::make_shared<Native::PortChannel>())
    , key(std::make_shared<Native::Key>())
    , l2(std::make_shared<Native::L2>())
    , system(std::make_shared<Native::System>())
    , errdisable(std::make_shared<Native::Errdisable>())
    , identity(std::make_shared<Native::Identity>())
    , monitor(std::make_shared<Native::Monitor>())
    , tftp_server(this, {"name"})
    , radius_server(std::make_shared<Native::RadiusServer>())
    , radius(std::make_shared<Native::Radius>())
    , zone(std::make_shared<Native::Zone>())
    , zone_pair(std::make_shared<Native::ZonePair>())
    , alarm_contact(this, {"name"})
    , ethernet(std::make_shared<Native::Ethernet>())
    , bridge_domain(std::make_shared<Native::BridgeDomain>())
    , crypto(std::make_shared<Native::Crypto>())
    , cts(std::make_shared<Native::Cts>())
    , bfd_template(std::make_shared<Native::BfdTemplate>())
    , pfr(std::make_shared<Native::Pfr>())
    , pfr_map(this, {"pfr_tg"})
    , facility_alarm(std::make_shared<Native::FacilityAlarm>())
    , setup(std::make_shared<Native::Setup>())
    , tod_clock(std::make_shared<Native::TodClock>())
    , network_clock(std::make_shared<Native::NetworkClock>())
    , l2vpn(std::make_shared<Native::L2vpn>())
    , l2vpn_config(std::make_shared<Native::L2vpnConfig>())
    , l3vpn(std::make_shared<Native::L3vpn>())
    , mpls(std::make_shared<Native::Mpls>())
    , router(std::make_shared<Native::Router>())
    , service_chain(std::make_shared<Native::ServiceChain>())
    , performance(std::make_shared<Native::Performance>())
    , otv(std::make_shared<Native::Otv>())
    , remote_management(std::make_shared<Native::RemoteManagement>())
    , virtual_service(this, {"name"})
    , snmp(std::make_shared<Native::Snmp>())
    , snmp_server(std::make_shared<Native::SnmpServer>())
    , segment_routing(std::make_shared<Native::SegmentRouting>())
    , license(std::make_shared<Native::License>())
    , memory_size(std::make_shared<Native::MemorySize>())
    , transceiver(std::make_shared<Native::Transceiver>())
    , service_insertion(std::make_shared<Native::ServiceInsertion>())
    , udld(std::make_shared<Native::Udld>())
    , qos(nullptr) // presence node
    , time_range(this, {"word"})
    , device_tracking(std::make_shared<Native::DeviceTracking>())
    , fhrp(std::make_shared<Native::Fhrp>())
    , metadata(std::make_shared<Native::Metadata>())
    , profile(std::make_shared<Native::Profile>())
    , alias(std::make_shared<Native::Alias>())
    , line(std::make_shared<Native::Line>())
    , ntp(std::make_shared<Native::Ntp>())
    , wsma(std::make_shared<Native::Wsma>())
    , event(std::make_shared<Native::Event>())
    , template_(std::make_shared<Native::Template>())
    , process(std::make_shared<Native::Process>())
    , exception(std::make_shared<Native::Exception>())
    , iox(nullptr) // presence node
    , power(std::make_shared<Native::Power>())
    , vpdn(std::make_shared<Native::Vpdn>())
    , esmc(std::make_shared<Native::Esmc>())
    , access_session(std::make_shared<Native::AccessSession>())
    , authentication(std::make_shared<Native::Authentication>())
    , dialer(std::make_shared<Native::Dialer>())
    , dialer_list(this, {"group_number"})
    , vstack(std::make_shared<Native::Vstack>())
    , et_analytics(nullptr) // presence node
    , arp(std::make_shared<Native::Arp>())
    , network_policy(std::make_shared<Native::NetworkPolicy>())
    , energywise(std::make_shared<Native::Energywise>())
    , service_template(this, {"word"})
    , switch_(this, {"number"})
    , switch_virtual(this, {"domain"})
    , device(std::make_shared<Native::Device>())
    , stack_mac(std::make_shared<Native::StackMac>())
    , l2protocol_tunnel(std::make_shared<Native::L2protocolTunnel>())
    , rep(std::make_shared<Native::Rep>())
    , hw_switch(std::make_shared<Native::HwSwitch>())
    , feature(std::make_shared<Native::Feature>())
    , openflow(std::make_shared<Native::Openflow>())
    , bba_group(std::make_shared<Native::BbaGroup>())
    , maintenance_template(this, {"templ_name"})
    , cef(std::make_shared<Native::Cef>())
    , nat66(std::make_shared<Native::Nat66>())
    , shell(std::make_shared<Native::Shell>())
    , voice(std::make_shared<Native::Voice>())
    , voice_card(this, {"slot"})
    , service_routing(std::make_shared<Native::ServiceRouting>())
    , lldp(std::make_shared<Native::Lldp>())
    , service_list(std::make_shared<Native::ServiceList>())
    , diagnostic(std::make_shared<Native::Diagnostic>())
    , pm_agent(nullptr) // presence node
    , named_ordering_route_map(std::make_shared<Native::NamedOrderingRouteMap>())
    , fabric_group(std::make_shared<Native::FabricGroup>())
    , device_sensor(std::make_shared<Native::DeviceSensor>())
    , coap(std::make_shared<Native::Coap>())
    , utd(nullptr) // presence node
    , utd_st(std::make_shared<Native::UtdSt>())
    , utd_mt(std::make_shared<Native::UtdMt>())
{
    default_->parent = this;
    bfd->parent = this;
    boot->parent = this;
    banner->parent = this;
    memory->parent = this;
    location->parent = this;
    hw_module->parent = this;
    cisp->parent = this;
    module->parent = this;
    parser->parent = this;
    service->parent = this;
    platform->parent = this;
    enable->parent = this;
    password->parent = this;
    eap->parent = this;
    archive->parent = this;
    card->parent = this;
    controller->parent = this;
    vrf->parent = this;
    rmon->parent = this;
    flow->parent = this;
    ip->parent = this;
    mka->parent = this;
    macro->parent = this;
    ipv6->parent = this;
    vlan->parent = this;
    mvrp->parent = this;
    ptp->parent = this;
    cdp->parent = this;
    avc->parent = this;
    policy->parent = this;
    interface->parent = this;
    route_tag->parent = this;
    sdm->parent = this;
    mls->parent = this;
    object_group->parent = this;
    control_plane_host->parent = this;
    clock_->parent = this;
    logging->parent = this;
    aaa->parent = this;
    privilege->parent = this;
    login->parent = this;
    multilink->parent = this;
    mac_address_table->parent = this;
    scheduler->parent = this;
    epm->parent = this;
    spanning_tree->parent = this;
    subscriber->parent = this;
    track->parent = this;
    dot1x->parent = this;
    mab->parent = this;
    fallback->parent = this;
    parameter_map->parent = this;
    ppp->parent = this;
    mac->parent = this;
    tacacs->parent = this;
    tacacs_server->parent = this;
    software->parent = this;
    upgrade->parent = this;
    vtp->parent = this;
    xconnect->parent = this;
    fabric->parent = this;
    port_channel->parent = this;
    key->parent = this;
    l2->parent = this;
    system->parent = this;
    errdisable->parent = this;
    identity->parent = this;
    monitor->parent = this;
    radius_server->parent = this;
    radius->parent = this;
    zone->parent = this;
    zone_pair->parent = this;
    ethernet->parent = this;
    bridge_domain->parent = this;
    crypto->parent = this;
    cts->parent = this;
    bfd_template->parent = this;
    pfr->parent = this;
    facility_alarm->parent = this;
    setup->parent = this;
    tod_clock->parent = this;
    network_clock->parent = this;
    l2vpn->parent = this;
    l2vpn_config->parent = this;
    l3vpn->parent = this;
    mpls->parent = this;
    router->parent = this;
    service_chain->parent = this;
    performance->parent = this;
    otv->parent = this;
    remote_management->parent = this;
    snmp->parent = this;
    snmp_server->parent = this;
    segment_routing->parent = this;
    license->parent = this;
    memory_size->parent = this;
    transceiver->parent = this;
    service_insertion->parent = this;
    udld->parent = this;
    device_tracking->parent = this;
    fhrp->parent = this;
    metadata->parent = this;
    profile->parent = this;
    alias->parent = this;
    line->parent = this;
    ntp->parent = this;
    wsma->parent = this;
    event->parent = this;
    template_->parent = this;
    process->parent = this;
    exception->parent = this;
    power->parent = this;
    vpdn->parent = this;
    esmc->parent = this;
    access_session->parent = this;
    authentication->parent = this;
    dialer->parent = this;
    vstack->parent = this;
    arp->parent = this;
    network_policy->parent = this;
    energywise->parent = this;
    device->parent = this;
    stack_mac->parent = this;
    l2protocol_tunnel->parent = this;
    rep->parent = this;
    hw_switch->parent = this;
    feature->parent = this;
    openflow->parent = this;
    bba_group->parent = this;
    cef->parent = this;
    nat66->parent = this;
    shell->parent = this;
    voice->parent = this;
    service_routing->parent = this;
    lldp->parent = this;
    service_list->parent = this;
    diagnostic->parent = this;
    named_ordering_route_map->parent = this;
    fabric_group->parent = this;
    device_sensor->parent = this;
    coap->parent = this;
    utd_st->parent = this;
    utd_mt->parent = this;

    yang_name = "native"; yang_parent_name = "Cisco-IOS-XE-native"; is_top_level_class = true; has_list_ancestor = false; 
}

Native::~Native()
{
}

bool Native::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<domain.len(); index++)
    {
        if(domain[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<username.len(); index++)
    {
        if(username[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sampler.len(); index++)
    {
        if(sampler[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<table_map.len(); index++)
    {
        if(table_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pseudowire_class.len(); index++)
    {
        if(pseudowire_class[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tftp_server.len(); index++)
    {
        if(tftp_server[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<alarm_contact.len(); index++)
    {
        if(alarm_contact[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pfr_map.len(); index++)
    {
        if(pfr_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<virtual_service.len(); index++)
    {
        if(virtual_service[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<time_range.len(); index++)
    {
        if(time_range[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<dialer_list.len(); index++)
    {
        if(dialer_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<service_template.len(); index++)
    {
        if(service_template[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<switch_.len(); index++)
    {
        if(switch_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<switch_virtual.len(); index++)
    {
        if(switch_virtual[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<maintenance_template.len(); index++)
    {
        if(maintenance_template[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<voice_card.len(); index++)
    {
        if(voice_card[index]->has_data())
            return true;
    }
    return version.is_set
	|| boot_start_marker.is_set
	|| boot_end_marker.is_set
	|| captive_portal_bypass.is_set
	|| hostname.is_set
	|| aqm_register_fnf.is_set
	|| config_register.is_set
	|| disable_eadi.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (stackwise_virtual !=  nullptr && stackwise_virtual->has_data())
	|| (boot !=  nullptr && boot->has_data())
	|| (banner !=  nullptr && banner->has_data())
	|| (memory !=  nullptr && memory->has_data())
	|| (location !=  nullptr && location->has_data())
	|| (call_home !=  nullptr && call_home->has_data())
	|| (hw_module !=  nullptr && hw_module->has_data())
	|| (cisp !=  nullptr && cisp->has_data())
	|| (module !=  nullptr && module->has_data())
	|| (parser !=  nullptr && parser->has_data())
	|| (service !=  nullptr && service->has_data())
	|| (platform !=  nullptr && platform->has_data())
	|| (enable !=  nullptr && enable->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (eap !=  nullptr && eap->has_data())
	|| (archive !=  nullptr && archive->has_data())
	|| (card !=  nullptr && card->has_data())
	|| (controller !=  nullptr && controller->has_data())
	|| (vrf !=  nullptr && vrf->has_data())
	|| (rmon !=  nullptr && rmon->has_data())
	|| (flow !=  nullptr && flow->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (mka !=  nullptr && mka->has_data())
	|| (macro !=  nullptr && macro->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (vlan !=  nullptr && vlan->has_data())
	|| (mvrp !=  nullptr && mvrp->has_data())
	|| (avb !=  nullptr && avb->has_data())
	|| (ptp !=  nullptr && ptp->has_data())
	|| (cdp !=  nullptr && cdp->has_data())
	|| (avc !=  nullptr && avc->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (interface !=  nullptr && interface->has_data())
	|| (route_tag !=  nullptr && route_tag->has_data())
	|| (sdm !=  nullptr && sdm->has_data())
	|| (mls !=  nullptr && mls->has_data())
	|| (object_group !=  nullptr && object_group->has_data())
	|| (control_plane !=  nullptr && control_plane->has_data())
	|| (control_plane_host !=  nullptr && control_plane_host->has_data())
	|| (clock_ !=  nullptr && clock_->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (aaa !=  nullptr && aaa->has_data())
	|| (privilege !=  nullptr && privilege->has_data())
	|| (login !=  nullptr && login->has_data())
	|| (multilink !=  nullptr && multilink->has_data())
	|| (mac_address_table !=  nullptr && mac_address_table->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (scheduler !=  nullptr && scheduler->has_data())
	|| (epm !=  nullptr && epm->has_data())
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (subscriber !=  nullptr && subscriber->has_data())
	|| (track !=  nullptr && track->has_data())
	|| (dot1x !=  nullptr && dot1x->has_data())
	|| (mab !=  nullptr && mab->has_data())
	|| (fallback !=  nullptr && fallback->has_data())
	|| (parameter_map !=  nullptr && parameter_map->has_data())
	|| (ppp !=  nullptr && ppp->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (tacacs !=  nullptr && tacacs->has_data())
	|| (tacacs_server !=  nullptr && tacacs_server->has_data())
	|| (software !=  nullptr && software->has_data())
	|| (upgrade !=  nullptr && upgrade->has_data())
	|| (vtp !=  nullptr && vtp->has_data())
	|| (xconnect !=  nullptr && xconnect->has_data())
	|| (fabric !=  nullptr && fabric->has_data())
	|| (port_channel !=  nullptr && port_channel->has_data())
	|| (key !=  nullptr && key->has_data())
	|| (l2 !=  nullptr && l2->has_data())
	|| (system !=  nullptr && system->has_data())
	|| (errdisable !=  nullptr && errdisable->has_data())
	|| (identity !=  nullptr && identity->has_data())
	|| (monitor !=  nullptr && monitor->has_data())
	|| (radius_server !=  nullptr && radius_server->has_data())
	|| (radius !=  nullptr && radius->has_data())
	|| (zone !=  nullptr && zone->has_data())
	|| (zone_pair !=  nullptr && zone_pair->has_data())
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (bridge_domain !=  nullptr && bridge_domain->has_data())
	|| (crypto !=  nullptr && crypto->has_data())
	|| (cts !=  nullptr && cts->has_data())
	|| (bfd_template !=  nullptr && bfd_template->has_data())
	|| (pfr !=  nullptr && pfr->has_data())
	|| (facility_alarm !=  nullptr && facility_alarm->has_data())
	|| (setup !=  nullptr && setup->has_data())
	|| (tod_clock !=  nullptr && tod_clock->has_data())
	|| (network_clock !=  nullptr && network_clock->has_data())
	|| (l2vpn !=  nullptr && l2vpn->has_data())
	|| (l2vpn_config !=  nullptr && l2vpn_config->has_data())
	|| (l3vpn !=  nullptr && l3vpn->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (router !=  nullptr && router->has_data())
	|| (service_chain !=  nullptr && service_chain->has_data())
	|| (performance !=  nullptr && performance->has_data())
	|| (otv !=  nullptr && otv->has_data())
	|| (remote_management !=  nullptr && remote_management->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (snmp_server !=  nullptr && snmp_server->has_data())
	|| (segment_routing !=  nullptr && segment_routing->has_data())
	|| (license !=  nullptr && license->has_data())
	|| (memory_size !=  nullptr && memory_size->has_data())
	|| (transceiver !=  nullptr && transceiver->has_data())
	|| (service_insertion !=  nullptr && service_insertion->has_data())
	|| (udld !=  nullptr && udld->has_data())
	|| (qos !=  nullptr && qos->has_data())
	|| (device_tracking !=  nullptr && device_tracking->has_data())
	|| (fhrp !=  nullptr && fhrp->has_data())
	|| (metadata !=  nullptr && metadata->has_data())
	|| (profile !=  nullptr && profile->has_data())
	|| (alias !=  nullptr && alias->has_data())
	|| (line !=  nullptr && line->has_data())
	|| (ntp !=  nullptr && ntp->has_data())
	|| (wsma !=  nullptr && wsma->has_data())
	|| (event !=  nullptr && event->has_data())
	|| (template_ !=  nullptr && template_->has_data())
	|| (process !=  nullptr && process->has_data())
	|| (exception !=  nullptr && exception->has_data())
	|| (iox !=  nullptr && iox->has_data())
	|| (power !=  nullptr && power->has_data())
	|| (vpdn !=  nullptr && vpdn->has_data())
	|| (esmc !=  nullptr && esmc->has_data())
	|| (access_session !=  nullptr && access_session->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (dialer !=  nullptr && dialer->has_data())
	|| (vstack !=  nullptr && vstack->has_data())
	|| (et_analytics !=  nullptr && et_analytics->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (network_policy !=  nullptr && network_policy->has_data())
	|| (energywise !=  nullptr && energywise->has_data())
	|| (device !=  nullptr && device->has_data())
	|| (stack_mac !=  nullptr && stack_mac->has_data())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_data())
	|| (rep !=  nullptr && rep->has_data())
	|| (hw_switch !=  nullptr && hw_switch->has_data())
	|| (feature !=  nullptr && feature->has_data())
	|| (openflow !=  nullptr && openflow->has_data())
	|| (bba_group !=  nullptr && bba_group->has_data())
	|| (cef !=  nullptr && cef->has_data())
	|| (nat66 !=  nullptr && nat66->has_data())
	|| (shell !=  nullptr && shell->has_data())
	|| (voice !=  nullptr && voice->has_data())
	|| (service_routing !=  nullptr && service_routing->has_data())
	|| (lldp !=  nullptr && lldp->has_data())
	|| (service_list !=  nullptr && service_list->has_data())
	|| (diagnostic !=  nullptr && diagnostic->has_data())
	|| (pm_agent !=  nullptr && pm_agent->has_data())
	|| (named_ordering_route_map !=  nullptr && named_ordering_route_map->has_data())
	|| (fabric_group !=  nullptr && fabric_group->has_data())
	|| (device_sensor !=  nullptr && device_sensor->has_data())
	|| (coap !=  nullptr && coap->has_data())
	|| (utd !=  nullptr && utd->has_data())
	|| (utd_st !=  nullptr && utd_st->has_data())
	|| (utd_mt !=  nullptr && utd_mt->has_data());
}

bool Native::has_operation() const
{
    for (std::size_t index=0; index<domain.len(); index++)
    {
        if(domain[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<username.len(); index++)
    {
        if(username[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sampler.len(); index++)
    {
        if(sampler[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<table_map.len(); index++)
    {
        if(table_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pseudowire_class.len(); index++)
    {
        if(pseudowire_class[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tftp_server.len(); index++)
    {
        if(tftp_server[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<alarm_contact.len(); index++)
    {
        if(alarm_contact[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pfr_map.len(); index++)
    {
        if(pfr_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<virtual_service.len(); index++)
    {
        if(virtual_service[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<time_range.len(); index++)
    {
        if(time_range[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<dialer_list.len(); index++)
    {
        if(dialer_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<service_template.len(); index++)
    {
        if(service_template[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<switch_.len(); index++)
    {
        if(switch_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<switch_virtual.len(); index++)
    {
        if(switch_virtual[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<maintenance_template.len(); index++)
    {
        if(maintenance_template[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<voice_card.len(); index++)
    {
        if(voice_card[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(boot_start_marker.yfilter)
	|| ydk::is_set(boot_end_marker.yfilter)
	|| ydk::is_set(captive_portal_bypass.yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| ydk::is_set(aqm_register_fnf.yfilter)
	|| ydk::is_set(config_register.yfilter)
	|| ydk::is_set(disable_eadi.yfilter)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (stackwise_virtual !=  nullptr && stackwise_virtual->has_operation())
	|| (boot !=  nullptr && boot->has_operation())
	|| (banner !=  nullptr && banner->has_operation())
	|| (memory !=  nullptr && memory->has_operation())
	|| (location !=  nullptr && location->has_operation())
	|| (call_home !=  nullptr && call_home->has_operation())
	|| (hw_module !=  nullptr && hw_module->has_operation())
	|| (cisp !=  nullptr && cisp->has_operation())
	|| (module !=  nullptr && module->has_operation())
	|| (parser !=  nullptr && parser->has_operation())
	|| (service !=  nullptr && service->has_operation())
	|| (platform !=  nullptr && platform->has_operation())
	|| (enable !=  nullptr && enable->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (eap !=  nullptr && eap->has_operation())
	|| (archive !=  nullptr && archive->has_operation())
	|| (card !=  nullptr && card->has_operation())
	|| (controller !=  nullptr && controller->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation())
	|| (rmon !=  nullptr && rmon->has_operation())
	|| (flow !=  nullptr && flow->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (mka !=  nullptr && mka->has_operation())
	|| (macro !=  nullptr && macro->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (mvrp !=  nullptr && mvrp->has_operation())
	|| (avb !=  nullptr && avb->has_operation())
	|| (ptp !=  nullptr && ptp->has_operation())
	|| (cdp !=  nullptr && cdp->has_operation())
	|| (avc !=  nullptr && avc->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (interface !=  nullptr && interface->has_operation())
	|| (route_tag !=  nullptr && route_tag->has_operation())
	|| (sdm !=  nullptr && sdm->has_operation())
	|| (mls !=  nullptr && mls->has_operation())
	|| (object_group !=  nullptr && object_group->has_operation())
	|| (control_plane !=  nullptr && control_plane->has_operation())
	|| (control_plane_host !=  nullptr && control_plane_host->has_operation())
	|| (clock_ !=  nullptr && clock_->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (aaa !=  nullptr && aaa->has_operation())
	|| (privilege !=  nullptr && privilege->has_operation())
	|| (login !=  nullptr && login->has_operation())
	|| (multilink !=  nullptr && multilink->has_operation())
	|| (mac_address_table !=  nullptr && mac_address_table->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (scheduler !=  nullptr && scheduler->has_operation())
	|| (epm !=  nullptr && epm->has_operation())
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (subscriber !=  nullptr && subscriber->has_operation())
	|| (track !=  nullptr && track->has_operation())
	|| (dot1x !=  nullptr && dot1x->has_operation())
	|| (mab !=  nullptr && mab->has_operation())
	|| (fallback !=  nullptr && fallback->has_operation())
	|| (parameter_map !=  nullptr && parameter_map->has_operation())
	|| (ppp !=  nullptr && ppp->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (tacacs !=  nullptr && tacacs->has_operation())
	|| (tacacs_server !=  nullptr && tacacs_server->has_operation())
	|| (software !=  nullptr && software->has_operation())
	|| (upgrade !=  nullptr && upgrade->has_operation())
	|| (vtp !=  nullptr && vtp->has_operation())
	|| (xconnect !=  nullptr && xconnect->has_operation())
	|| (fabric !=  nullptr && fabric->has_operation())
	|| (port_channel !=  nullptr && port_channel->has_operation())
	|| (key !=  nullptr && key->has_operation())
	|| (l2 !=  nullptr && l2->has_operation())
	|| (system !=  nullptr && system->has_operation())
	|| (errdisable !=  nullptr && errdisable->has_operation())
	|| (identity !=  nullptr && identity->has_operation())
	|| (monitor !=  nullptr && monitor->has_operation())
	|| (radius_server !=  nullptr && radius_server->has_operation())
	|| (radius !=  nullptr && radius->has_operation())
	|| (zone !=  nullptr && zone->has_operation())
	|| (zone_pair !=  nullptr && zone_pair->has_operation())
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (bridge_domain !=  nullptr && bridge_domain->has_operation())
	|| (crypto !=  nullptr && crypto->has_operation())
	|| (cts !=  nullptr && cts->has_operation())
	|| (bfd_template !=  nullptr && bfd_template->has_operation())
	|| (pfr !=  nullptr && pfr->has_operation())
	|| (facility_alarm !=  nullptr && facility_alarm->has_operation())
	|| (setup !=  nullptr && setup->has_operation())
	|| (tod_clock !=  nullptr && tod_clock->has_operation())
	|| (network_clock !=  nullptr && network_clock->has_operation())
	|| (l2vpn !=  nullptr && l2vpn->has_operation())
	|| (l2vpn_config !=  nullptr && l2vpn_config->has_operation())
	|| (l3vpn !=  nullptr && l3vpn->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (router !=  nullptr && router->has_operation())
	|| (service_chain !=  nullptr && service_chain->has_operation())
	|| (performance !=  nullptr && performance->has_operation())
	|| (otv !=  nullptr && otv->has_operation())
	|| (remote_management !=  nullptr && remote_management->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (snmp_server !=  nullptr && snmp_server->has_operation())
	|| (segment_routing !=  nullptr && segment_routing->has_operation())
	|| (license !=  nullptr && license->has_operation())
	|| (memory_size !=  nullptr && memory_size->has_operation())
	|| (transceiver !=  nullptr && transceiver->has_operation())
	|| (service_insertion !=  nullptr && service_insertion->has_operation())
	|| (udld !=  nullptr && udld->has_operation())
	|| (qos !=  nullptr && qos->has_operation())
	|| (device_tracking !=  nullptr && device_tracking->has_operation())
	|| (fhrp !=  nullptr && fhrp->has_operation())
	|| (metadata !=  nullptr && metadata->has_operation())
	|| (profile !=  nullptr && profile->has_operation())
	|| (alias !=  nullptr && alias->has_operation())
	|| (line !=  nullptr && line->has_operation())
	|| (ntp !=  nullptr && ntp->has_operation())
	|| (wsma !=  nullptr && wsma->has_operation())
	|| (event !=  nullptr && event->has_operation())
	|| (template_ !=  nullptr && template_->has_operation())
	|| (process !=  nullptr && process->has_operation())
	|| (exception !=  nullptr && exception->has_operation())
	|| (iox !=  nullptr && iox->has_operation())
	|| (power !=  nullptr && power->has_operation())
	|| (vpdn !=  nullptr && vpdn->has_operation())
	|| (esmc !=  nullptr && esmc->has_operation())
	|| (access_session !=  nullptr && access_session->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (dialer !=  nullptr && dialer->has_operation())
	|| (vstack !=  nullptr && vstack->has_operation())
	|| (et_analytics !=  nullptr && et_analytics->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (network_policy !=  nullptr && network_policy->has_operation())
	|| (energywise !=  nullptr && energywise->has_operation())
	|| (device !=  nullptr && device->has_operation())
	|| (stack_mac !=  nullptr && stack_mac->has_operation())
	|| (l2protocol_tunnel !=  nullptr && l2protocol_tunnel->has_operation())
	|| (rep !=  nullptr && rep->has_operation())
	|| (hw_switch !=  nullptr && hw_switch->has_operation())
	|| (feature !=  nullptr && feature->has_operation())
	|| (openflow !=  nullptr && openflow->has_operation())
	|| (bba_group !=  nullptr && bba_group->has_operation())
	|| (cef !=  nullptr && cef->has_operation())
	|| (nat66 !=  nullptr && nat66->has_operation())
	|| (shell !=  nullptr && shell->has_operation())
	|| (voice !=  nullptr && voice->has_operation())
	|| (service_routing !=  nullptr && service_routing->has_operation())
	|| (lldp !=  nullptr && lldp->has_operation())
	|| (service_list !=  nullptr && service_list->has_operation())
	|| (diagnostic !=  nullptr && diagnostic->has_operation())
	|| (pm_agent !=  nullptr && pm_agent->has_operation())
	|| (named_ordering_route_map !=  nullptr && named_ordering_route_map->has_operation())
	|| (fabric_group !=  nullptr && fabric_group->has_operation())
	|| (device_sensor !=  nullptr && device_sensor->has_operation())
	|| (coap !=  nullptr && coap->has_operation())
	|| (utd !=  nullptr && utd->has_operation())
	|| (utd_st !=  nullptr && utd_st->has_operation())
	|| (utd_mt !=  nullptr && utd_mt->has_operation());
}

std::string Native::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (boot_start_marker.is_set || is_set(boot_start_marker.yfilter)) leaf_name_data.push_back(boot_start_marker.get_name_leafdata());
    if (boot_end_marker.is_set || is_set(boot_end_marker.yfilter)) leaf_name_data.push_back(boot_end_marker.get_name_leafdata());
    if (captive_portal_bypass.is_set || is_set(captive_portal_bypass.yfilter)) leaf_name_data.push_back(captive_portal_bypass.get_name_leafdata());
    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());
    if (aqm_register_fnf.is_set || is_set(aqm_register_fnf.yfilter)) leaf_name_data.push_back(aqm_register_fnf.get_name_leafdata());
    if (config_register.is_set || is_set(config_register.yfilter)) leaf_name_data.push_back(config_register.get_name_leafdata());
    if (disable_eadi.is_set || is_set(disable_eadi.yfilter)) leaf_name_data.push_back(disable_eadi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Default>();
        }
        return default_;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "stackwise-virtual")
    {
        if(stackwise_virtual == nullptr)
        {
            stackwise_virtual = std::make_shared<Native::StackwiseVirtual>();
        }
        return stackwise_virtual;
    }

    if(child_yang_name == "boot")
    {
        if(boot == nullptr)
        {
            boot = std::make_shared<Native::Boot>();
        }
        return boot;
    }

    if(child_yang_name == "banner")
    {
        if(banner == nullptr)
        {
            banner = std::make_shared<Native::Banner>();
        }
        return banner;
    }

    if(child_yang_name == "memory")
    {
        if(memory == nullptr)
        {
            memory = std::make_shared<Native::Memory>();
        }
        return memory;
    }

    if(child_yang_name == "location")
    {
        if(location == nullptr)
        {
            location = std::make_shared<Native::Location>();
        }
        return location;
    }

    if(child_yang_name == "call-home")
    {
        if(call_home == nullptr)
        {
            call_home = std::make_shared<Native::CallHome>();
        }
        return call_home;
    }

    if(child_yang_name == "hw-module")
    {
        if(hw_module == nullptr)
        {
            hw_module = std::make_shared<Native::HwModule>();
        }
        return hw_module;
    }

    if(child_yang_name == "cisp")
    {
        if(cisp == nullptr)
        {
            cisp = std::make_shared<Native::Cisp>();
        }
        return cisp;
    }

    if(child_yang_name == "module")
    {
        if(module == nullptr)
        {
            module = std::make_shared<Native::Module>();
        }
        return module;
    }

    if(child_yang_name == "domain")
    {
        auto ent_ = std::make_shared<Native::Domain>();
        ent_->parent = this;
        domain.append(ent_);
        return ent_;
    }

    if(child_yang_name == "parser")
    {
        if(parser == nullptr)
        {
            parser = std::make_shared<Native::Parser>();
        }
        return parser;
    }

    if(child_yang_name == "service")
    {
        if(service == nullptr)
        {
            service = std::make_shared<Native::Service>();
        }
        return service;
    }

    if(child_yang_name == "platform")
    {
        if(platform == nullptr)
        {
            platform = std::make_shared<Native::Platform>();
        }
        return platform;
    }

    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Password>();
        }
        return password;
    }

    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Eap>();
        }
        return eap;
    }

    if(child_yang_name == "archive")
    {
        if(archive == nullptr)
        {
            archive = std::make_shared<Native::Archive>();
        }
        return archive;
    }

    if(child_yang_name == "username")
    {
        auto ent_ = std::make_shared<Native::Username>();
        ent_->parent = this;
        username.append(ent_);
        return ent_;
    }

    if(child_yang_name == "card")
    {
        if(card == nullptr)
        {
            card = std::make_shared<Native::Card>();
        }
        return card;
    }

    if(child_yang_name == "controller")
    {
        if(controller == nullptr)
        {
            controller = std::make_shared<Native::Controller>();
        }
        return controller;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Vrf>();
        }
        return vrf;
    }

    if(child_yang_name == "rmon")
    {
        if(rmon == nullptr)
        {
            rmon = std::make_shared<Native::Rmon>();
        }
        return rmon;
    }

    if(child_yang_name == "sampler")
    {
        auto ent_ = std::make_shared<Native::Sampler>();
        ent_->parent = this;
        sampler.append(ent_);
        return ent_;
    }

    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Flow>();
        }
        return flow;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "mka")
    {
        if(mka == nullptr)
        {
            mka = std::make_shared<Native::Mka>();
        }
        return mka;
    }

    if(child_yang_name == "macro")
    {
        if(macro == nullptr)
        {
            macro = std::make_shared<Native::Macro>();
        }
        return macro;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "mvrp")
    {
        if(mvrp == nullptr)
        {
            mvrp = std::make_shared<Native::Mvrp>();
        }
        return mvrp;
    }

    if(child_yang_name == "avb")
    {
        if(avb == nullptr)
        {
            avb = std::make_shared<Native::Avb>();
        }
        return avb;
    }

    if(child_yang_name == "ptp")
    {
        if(ptp == nullptr)
        {
            ptp = std::make_shared<Native::Ptp>();
        }
        return ptp;
    }

    if(child_yang_name == "cdp")
    {
        if(cdp == nullptr)
        {
            cdp = std::make_shared<Native::Cdp>();
        }
        return cdp;
    }

    if(child_yang_name == "avc")
    {
        if(avc == nullptr)
        {
            avc = std::make_shared<Native::Avc>();
        }
        return avc;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "route-map")
    {
        auto ent_ = std::make_shared<Native::RouteMap>();
        ent_->parent = this;
        route_map.append(ent_);
        return ent_;
    }

    if(child_yang_name == "route-tag")
    {
        if(route_tag == nullptr)
        {
            route_tag = std::make_shared<Native::RouteTag>();
        }
        return route_tag;
    }

    if(child_yang_name == "table-map")
    {
        auto ent_ = std::make_shared<Native::TableMap>();
        ent_->parent = this;
        table_map.append(ent_);
        return ent_;
    }

    if(child_yang_name == "sdm")
    {
        if(sdm == nullptr)
        {
            sdm = std::make_shared<Native::Sdm>();
        }
        return sdm;
    }

    if(child_yang_name == "mls")
    {
        if(mls == nullptr)
        {
            mls = std::make_shared<Native::Mls>();
        }
        return mls;
    }

    if(child_yang_name == "object-group")
    {
        if(object_group == nullptr)
        {
            object_group = std::make_shared<Native::ObjectGroup>();
        }
        return object_group;
    }

    if(child_yang_name == "pseudowire-class")
    {
        auto ent_ = std::make_shared<Native::PseudowireClass>();
        ent_->parent = this;
        pseudowire_class.append(ent_);
        return ent_;
    }

    if(child_yang_name == "control-plane")
    {
        if(control_plane == nullptr)
        {
            control_plane = std::make_shared<Native::ControlPlane>();
        }
        return control_plane;
    }

    if(child_yang_name == "control-plane-host")
    {
        if(control_plane_host == nullptr)
        {
            control_plane_host = std::make_shared<Native::ControlPlaneHost>();
        }
        return control_plane_host;
    }

    if(child_yang_name == "clock")
    {
        if(clock_ == nullptr)
        {
            clock_ = std::make_shared<Native::Clock>();
        }
        return clock_;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<Native::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "aaa")
    {
        if(aaa == nullptr)
        {
            aaa = std::make_shared<Native::Aaa>();
        }
        return aaa;
    }

    if(child_yang_name == "privilege")
    {
        if(privilege == nullptr)
        {
            privilege = std::make_shared<Native::Privilege>();
        }
        return privilege;
    }

    if(child_yang_name == "login")
    {
        if(login == nullptr)
        {
            login = std::make_shared<Native::Login>();
        }
        return login;
    }

    if(child_yang_name == "multilink")
    {
        if(multilink == nullptr)
        {
            multilink = std::make_shared<Native::Multilink>();
        }
        return multilink;
    }

    if(child_yang_name == "mac-address-table")
    {
        if(mac_address_table == nullptr)
        {
            mac_address_table = std::make_shared<Native::MacAddressTable>();
        }
        return mac_address_table;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "scheduler")
    {
        if(scheduler == nullptr)
        {
            scheduler = std::make_shared<Native::Scheduler>();
        }
        return scheduler;
    }

    if(child_yang_name == "epm")
    {
        if(epm == nullptr)
        {
            epm = std::make_shared<Native::Epm>();
        }
        return epm;
    }

    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "subscriber")
    {
        if(subscriber == nullptr)
        {
            subscriber = std::make_shared<Native::Subscriber>();
        }
        return subscriber;
    }

    if(child_yang_name == "track")
    {
        if(track == nullptr)
        {
            track = std::make_shared<Native::Track>();
        }
        return track;
    }

    if(child_yang_name == "dot1x")
    {
        if(dot1x == nullptr)
        {
            dot1x = std::make_shared<Native::Dot1x>();
        }
        return dot1x;
    }

    if(child_yang_name == "mab")
    {
        if(mab == nullptr)
        {
            mab = std::make_shared<Native::Mab>();
        }
        return mab;
    }

    if(child_yang_name == "fallback")
    {
        if(fallback == nullptr)
        {
            fallback = std::make_shared<Native::Fallback>();
        }
        return fallback;
    }

    if(child_yang_name == "parameter-map")
    {
        if(parameter_map == nullptr)
        {
            parameter_map = std::make_shared<Native::ParameterMap>();
        }
        return parameter_map;
    }

    if(child_yang_name == "ppp")
    {
        if(ppp == nullptr)
        {
            ppp = std::make_shared<Native::Ppp>();
        }
        return ppp;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<Native::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "tacacs")
    {
        if(tacacs == nullptr)
        {
            tacacs = std::make_shared<Native::Tacacs>();
        }
        return tacacs;
    }

    if(child_yang_name == "tacacs-server")
    {
        if(tacacs_server == nullptr)
        {
            tacacs_server = std::make_shared<Native::TacacsServer>();
        }
        return tacacs_server;
    }

    if(child_yang_name == "software")
    {
        if(software == nullptr)
        {
            software = std::make_shared<Native::Software>();
        }
        return software;
    }

    if(child_yang_name == "upgrade")
    {
        if(upgrade == nullptr)
        {
            upgrade = std::make_shared<Native::Upgrade>();
        }
        return upgrade;
    }

    if(child_yang_name == "vtp")
    {
        if(vtp == nullptr)
        {
            vtp = std::make_shared<Native::Vtp>();
        }
        return vtp;
    }

    if(child_yang_name == "xconnect")
    {
        if(xconnect == nullptr)
        {
            xconnect = std::make_shared<Native::Xconnect>();
        }
        return xconnect;
    }

    if(child_yang_name == "fabric")
    {
        if(fabric == nullptr)
        {
            fabric = std::make_shared<Native::Fabric>();
        }
        return fabric;
    }

    if(child_yang_name == "port-channel")
    {
        if(port_channel == nullptr)
        {
            port_channel = std::make_shared<Native::PortChannel>();
        }
        return port_channel;
    }

    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Key>();
        }
        return key;
    }

    if(child_yang_name == "l2")
    {
        if(l2 == nullptr)
        {
            l2 = std::make_shared<Native::L2>();
        }
        return l2;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<Native::System>();
        }
        return system;
    }

    if(child_yang_name == "errdisable")
    {
        if(errdisable == nullptr)
        {
            errdisable = std::make_shared<Native::Errdisable>();
        }
        return errdisable;
    }

    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Identity>();
        }
        return identity;
    }

    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Monitor>();
        }
        return monitor;
    }

    if(child_yang_name == "tftp-server")
    {
        auto ent_ = std::make_shared<Native::TftpServer>();
        ent_->parent = this;
        tftp_server.append(ent_);
        return ent_;
    }

    if(child_yang_name == "radius-server")
    {
        if(radius_server == nullptr)
        {
            radius_server = std::make_shared<Native::RadiusServer>();
        }
        return radius_server;
    }

    if(child_yang_name == "radius")
    {
        if(radius == nullptr)
        {
            radius = std::make_shared<Native::Radius>();
        }
        return radius;
    }

    if(child_yang_name == "zone")
    {
        if(zone == nullptr)
        {
            zone = std::make_shared<Native::Zone>();
        }
        return zone;
    }

    if(child_yang_name == "zone-pair")
    {
        if(zone_pair == nullptr)
        {
            zone_pair = std::make_shared<Native::ZonePair>();
        }
        return zone_pair;
    }

    if(child_yang_name == "alarm-contact")
    {
        auto ent_ = std::make_shared<Native::AlarmContact>();
        ent_->parent = this;
        alarm_contact.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<Native::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "bridge-domain")
    {
        if(bridge_domain == nullptr)
        {
            bridge_domain = std::make_shared<Native::BridgeDomain>();
        }
        return bridge_domain;
    }

    if(child_yang_name == "crypto")
    {
        if(crypto == nullptr)
        {
            crypto = std::make_shared<Native::Crypto>();
        }
        return crypto;
    }

    if(child_yang_name == "cts")
    {
        if(cts == nullptr)
        {
            cts = std::make_shared<Native::Cts>();
        }
        return cts;
    }

    if(child_yang_name == "bfd-template")
    {
        if(bfd_template == nullptr)
        {
            bfd_template = std::make_shared<Native::BfdTemplate>();
        }
        return bfd_template;
    }

    if(child_yang_name == "pfr")
    {
        if(pfr == nullptr)
        {
            pfr = std::make_shared<Native::Pfr>();
        }
        return pfr;
    }

    if(child_yang_name == "pfr-map")
    {
        auto ent_ = std::make_shared<Native::PfrMap>();
        ent_->parent = this;
        pfr_map.append(ent_);
        return ent_;
    }

    if(child_yang_name == "facility-alarm")
    {
        if(facility_alarm == nullptr)
        {
            facility_alarm = std::make_shared<Native::FacilityAlarm>();
        }
        return facility_alarm;
    }

    if(child_yang_name == "setup")
    {
        if(setup == nullptr)
        {
            setup = std::make_shared<Native::Setup>();
        }
        return setup;
    }

    if(child_yang_name == "tod-clock")
    {
        if(tod_clock == nullptr)
        {
            tod_clock = std::make_shared<Native::TodClock>();
        }
        return tod_clock;
    }

    if(child_yang_name == "network-clock")
    {
        if(network_clock == nullptr)
        {
            network_clock = std::make_shared<Native::NetworkClock>();
        }
        return network_clock;
    }

    if(child_yang_name == "l2vpn")
    {
        if(l2vpn == nullptr)
        {
            l2vpn = std::make_shared<Native::L2vpn>();
        }
        return l2vpn;
    }

    if(child_yang_name == "l2vpn-config")
    {
        if(l2vpn_config == nullptr)
        {
            l2vpn_config = std::make_shared<Native::L2vpnConfig>();
        }
        return l2vpn_config;
    }

    if(child_yang_name == "l3vpn")
    {
        if(l3vpn == nullptr)
        {
            l3vpn = std::make_shared<Native::L3vpn>();
        }
        return l3vpn;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<Native::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<Native::Router>();
        }
        return router;
    }

    if(child_yang_name == "service-chain")
    {
        if(service_chain == nullptr)
        {
            service_chain = std::make_shared<Native::ServiceChain>();
        }
        return service_chain;
    }

    if(child_yang_name == "performance")
    {
        if(performance == nullptr)
        {
            performance = std::make_shared<Native::Performance>();
        }
        return performance;
    }

    if(child_yang_name == "otv")
    {
        if(otv == nullptr)
        {
            otv = std::make_shared<Native::Otv>();
        }
        return otv;
    }

    if(child_yang_name == "remote-management")
    {
        if(remote_management == nullptr)
        {
            remote_management = std::make_shared<Native::RemoteManagement>();
        }
        return remote_management;
    }

    if(child_yang_name == "virtual-service")
    {
        auto ent_ = std::make_shared<Native::VirtualService>();
        ent_->parent = this;
        virtual_service.append(ent_);
        return ent_;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Snmp>();
        }
        return snmp;
    }

    if(child_yang_name == "snmp-server")
    {
        if(snmp_server == nullptr)
        {
            snmp_server = std::make_shared<Native::SnmpServer>();
        }
        return snmp_server;
    }

    if(child_yang_name == "segment-routing")
    {
        if(segment_routing == nullptr)
        {
            segment_routing = std::make_shared<Native::SegmentRouting>();
        }
        return segment_routing;
    }

    if(child_yang_name == "license")
    {
        if(license == nullptr)
        {
            license = std::make_shared<Native::License>();
        }
        return license;
    }

    if(child_yang_name == "memory-size")
    {
        if(memory_size == nullptr)
        {
            memory_size = std::make_shared<Native::MemorySize>();
        }
        return memory_size;
    }

    if(child_yang_name == "transceiver")
    {
        if(transceiver == nullptr)
        {
            transceiver = std::make_shared<Native::Transceiver>();
        }
        return transceiver;
    }

    if(child_yang_name == "service-insertion")
    {
        if(service_insertion == nullptr)
        {
            service_insertion = std::make_shared<Native::ServiceInsertion>();
        }
        return service_insertion;
    }

    if(child_yang_name == "udld")
    {
        if(udld == nullptr)
        {
            udld = std::make_shared<Native::Udld>();
        }
        return udld;
    }

    if(child_yang_name == "qos")
    {
        if(qos == nullptr)
        {
            qos = std::make_shared<Native::Qos>();
        }
        return qos;
    }

    if(child_yang_name == "time-range")
    {
        auto ent_ = std::make_shared<Native::TimeRange>();
        ent_->parent = this;
        time_range.append(ent_);
        return ent_;
    }

    if(child_yang_name == "device-tracking")
    {
        if(device_tracking == nullptr)
        {
            device_tracking = std::make_shared<Native::DeviceTracking>();
        }
        return device_tracking;
    }

    if(child_yang_name == "fhrp")
    {
        if(fhrp == nullptr)
        {
            fhrp = std::make_shared<Native::Fhrp>();
        }
        return fhrp;
    }

    if(child_yang_name == "metadata")
    {
        if(metadata == nullptr)
        {
            metadata = std::make_shared<Native::Metadata>();
        }
        return metadata;
    }

    if(child_yang_name == "profile")
    {
        if(profile == nullptr)
        {
            profile = std::make_shared<Native::Profile>();
        }
        return profile;
    }

    if(child_yang_name == "alias")
    {
        if(alias == nullptr)
        {
            alias = std::make_shared<Native::Alias>();
        }
        return alias;
    }

    if(child_yang_name == "line")
    {
        if(line == nullptr)
        {
            line = std::make_shared<Native::Line>();
        }
        return line;
    }

    if(child_yang_name == "ntp")
    {
        if(ntp == nullptr)
        {
            ntp = std::make_shared<Native::Ntp>();
        }
        return ntp;
    }

    if(child_yang_name == "wsma")
    {
        if(wsma == nullptr)
        {
            wsma = std::make_shared<Native::Wsma>();
        }
        return wsma;
    }

    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Event>();
        }
        return event;
    }

    if(child_yang_name == "template")
    {
        if(template_ == nullptr)
        {
            template_ = std::make_shared<Native::Template>();
        }
        return template_;
    }

    if(child_yang_name == "process")
    {
        if(process == nullptr)
        {
            process = std::make_shared<Native::Process>();
        }
        return process;
    }

    if(child_yang_name == "exception")
    {
        if(exception == nullptr)
        {
            exception = std::make_shared<Native::Exception>();
        }
        return exception;
    }

    if(child_yang_name == "iox")
    {
        if(iox == nullptr)
        {
            iox = std::make_shared<Native::Iox>();
        }
        return iox;
    }

    if(child_yang_name == "Cisco-IOS-XE-power:power")
    {
        if(power == nullptr)
        {
            power = std::make_shared<Native::Power>();
        }
        return power;
    }

    if(child_yang_name == "Cisco-IOS-XE-vpdn:vpdn")
    {
        if(vpdn == nullptr)
        {
            vpdn = std::make_shared<Native::Vpdn>();
        }
        return vpdn;
    }

    if(child_yang_name == "Cisco-IOS-XE-ethernet:esmc")
    {
        if(esmc == nullptr)
        {
            esmc = std::make_shared<Native::Esmc>();
        }
        return esmc;
    }

    if(child_yang_name == "Cisco-IOS-XE-sanet:access-session")
    {
        if(access_session == nullptr)
        {
            access_session = std::make_shared<Native::AccessSession>();
        }
        return access_session;
    }

    if(child_yang_name == "Cisco-IOS-XE-sanet:authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "Cisco-IOS-XE-cellular:dialer")
    {
        if(dialer == nullptr)
        {
            dialer = std::make_shared<Native::Dialer>();
        }
        return dialer;
    }

    if(child_yang_name == "Cisco-IOS-XE-cellular:dialer-list")
    {
        auto ent_ = std::make_shared<Native::DialerList>();
        ent_->parent = this;
        dialer_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-vstack:vstack")
    {
        if(vstack == nullptr)
        {
            vstack = std::make_shared<Native::Vstack>();
        }
        return vstack;
    }

    if(child_yang_name == "Cisco-IOS-XE-eta:et-analytics")
    {
        if(et_analytics == nullptr)
        {
            et_analytics = std::make_shared<Native::EtAnalytics>();
        }
        return et_analytics;
    }

    if(child_yang_name == "Cisco-IOS-XE-arp:arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:network-policy")
    {
        if(network_policy == nullptr)
        {
            network_policy = std::make_shared<Native::NetworkPolicy>();
        }
        return network_policy;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:energywise")
    {
        if(energywise == nullptr)
        {
            energywise = std::make_shared<Native::Energywise>();
        }
        return energywise;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:service-template")
    {
        auto ent_ = std::make_shared<Native::ServiceTemplate>();
        ent_->parent = this;
        service_template.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:switch")
    {
        auto ent_ = std::make_shared<Native::Switch>();
        ent_->parent = this;
        switch_.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:switch-virtual")
    {
        auto ent_ = std::make_shared<Native::SwitchVirtual>();
        ent_->parent = this;
        switch_virtual.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:device")
    {
        if(device == nullptr)
        {
            device = std::make_shared<Native::Device>();
        }
        return device;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:stack-mac")
    {
        if(stack_mac == nullptr)
        {
            stack_mac = std::make_shared<Native::StackMac>();
        }
        return stack_mac;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:l2protocol-tunnel")
    {
        if(l2protocol_tunnel == nullptr)
        {
            l2protocol_tunnel = std::make_shared<Native::L2protocolTunnel>();
        }
        return l2protocol_tunnel;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:rep")
    {
        if(rep == nullptr)
        {
            rep = std::make_shared<Native::Rep>();
        }
        return rep;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:hw-switch")
    {
        if(hw_switch == nullptr)
        {
            hw_switch = std::make_shared<Native::HwSwitch>();
        }
        return hw_switch;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:feature")
    {
        if(feature == nullptr)
        {
            feature = std::make_shared<Native::Feature>();
        }
        return feature;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:openflow")
    {
        if(openflow == nullptr)
        {
            openflow = std::make_shared<Native::Openflow>();
        }
        return openflow;
    }

    if(child_yang_name == "Cisco-IOS-XE-bba-group:bba-group")
    {
        if(bba_group == nullptr)
        {
            bba_group = std::make_shared<Native::BbaGroup>();
        }
        return bba_group;
    }

    if(child_yang_name == "Cisco-IOS-XE-mmode:maintenance-template")
    {
        auto ent_ = std::make_shared<Native::MaintenanceTemplate>();
        ent_->parent = this;
        maintenance_template.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-cef:cef")
    {
        if(cef == nullptr)
        {
            cef = std::make_shared<Native::Cef>();
        }
        return cef;
    }

    if(child_yang_name == "Cisco-IOS-XE-nat:nat66")
    {
        if(nat66 == nullptr)
        {
            nat66 = std::make_shared<Native::Nat66>();
        }
        return nat66;
    }

    if(child_yang_name == "Cisco-IOS-XE-platform:shell")
    {
        if(shell == nullptr)
        {
            shell = std::make_shared<Native::Shell>();
        }
        return shell;
    }

    if(child_yang_name == "Cisco-IOS-XE-voice:voice")
    {
        if(voice == nullptr)
        {
            voice = std::make_shared<Native::Voice>();
        }
        return voice;
    }

    if(child_yang_name == "Cisco-IOS-XE-voice:voice-card")
    {
        auto ent_ = std::make_shared<Native::VoiceCard>();
        ent_->parent = this;
        voice_card.append(ent_);
        return ent_;
    }

    if(child_yang_name == "Cisco-IOS-XE-service-routing:service-routing")
    {
        if(service_routing == nullptr)
        {
            service_routing = std::make_shared<Native::ServiceRouting>();
        }
        return service_routing;
    }

    if(child_yang_name == "Cisco-IOS-XE-lldp:lldp")
    {
        if(lldp == nullptr)
        {
            lldp = std::make_shared<Native::Lldp>();
        }
        return lldp;
    }

    if(child_yang_name == "Cisco-IOS-XE-service-discovery:service-list")
    {
        if(service_list == nullptr)
        {
            service_list = std::make_shared<Native::ServiceList>();
        }
        return service_list;
    }

    if(child_yang_name == "Cisco-IOS-XE-diagnostics:diagnostic")
    {
        if(diagnostic == nullptr)
        {
            diagnostic = std::make_shared<Native::Diagnostic>();
        }
        return diagnostic;
    }

    if(child_yang_name == "Cisco-IOS-XE-pathmgr:pm-agent")
    {
        if(pm_agent == nullptr)
        {
            pm_agent = std::make_shared<Native::PmAgent>();
        }
        return pm_agent;
    }

    if(child_yang_name == "Cisco-IOS-XE-route-map:named-ordering-route-map")
    {
        if(named_ordering_route_map == nullptr)
        {
            named_ordering_route_map = std::make_shared<Native::NamedOrderingRouteMap>();
        }
        return named_ordering_route_map;
    }

    if(child_yang_name == "Cisco-IOS-XE-iwanfabric:fabric-group")
    {
        if(fabric_group == nullptr)
        {
            fabric_group = std::make_shared<Native::FabricGroup>();
        }
        return fabric_group;
    }

    if(child_yang_name == "Cisco-IOS-XE-device-sensor:device-sensor")
    {
        if(device_sensor == nullptr)
        {
            device_sensor = std::make_shared<Native::DeviceSensor>();
        }
        return device_sensor;
    }

    if(child_yang_name == "Cisco-IOS-XE-coap:coap")
    {
        if(coap == nullptr)
        {
            coap = std::make_shared<Native::Coap>();
        }
        return coap;
    }

    if(child_yang_name == "Cisco-IOS-XE-utd:utd")
    {
        if(utd == nullptr)
        {
            utd = std::make_shared<Native::Utd>();
        }
        return utd;
    }

    if(child_yang_name == "Cisco-IOS-XE-utd:utd-st")
    {
        if(utd_st == nullptr)
        {
            utd_st = std::make_shared<Native::UtdSt>();
        }
        return utd_st;
    }

    if(child_yang_name == "Cisco-IOS-XE-utd:utd-mt")
    {
        if(utd_mt == nullptr)
        {
            utd_mt = std::make_shared<Native::UtdMt>();
        }
        return utd_mt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    if(bfd != nullptr)
    {
        _children["bfd"] = bfd;
    }

    if(stackwise_virtual != nullptr)
    {
        _children["stackwise-virtual"] = stackwise_virtual;
    }

    if(boot != nullptr)
    {
        _children["boot"] = boot;
    }

    if(banner != nullptr)
    {
        _children["banner"] = banner;
    }

    if(memory != nullptr)
    {
        _children["memory"] = memory;
    }

    if(location != nullptr)
    {
        _children["location"] = location;
    }

    if(call_home != nullptr)
    {
        _children["call-home"] = call_home;
    }

    if(hw_module != nullptr)
    {
        _children["hw-module"] = hw_module;
    }

    if(cisp != nullptr)
    {
        _children["cisp"] = cisp;
    }

    if(module != nullptr)
    {
        _children["module"] = module;
    }

    count_ = 0;
    for (auto ent_ : domain.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(parser != nullptr)
    {
        _children["parser"] = parser;
    }

    if(service != nullptr)
    {
        _children["service"] = service;
    }

    if(platform != nullptr)
    {
        _children["platform"] = platform;
    }

    if(enable != nullptr)
    {
        _children["enable"] = enable;
    }

    if(password != nullptr)
    {
        _children["password"] = password;
    }

    if(eap != nullptr)
    {
        _children["eap"] = eap;
    }

    if(archive != nullptr)
    {
        _children["archive"] = archive;
    }

    count_ = 0;
    for (auto ent_ : username.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(card != nullptr)
    {
        _children["card"] = card;
    }

    if(controller != nullptr)
    {
        _children["controller"] = controller;
    }

    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    if(rmon != nullptr)
    {
        _children["rmon"] = rmon;
    }

    count_ = 0;
    for (auto ent_ : sampler.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(flow != nullptr)
    {
        _children["flow"] = flow;
    }

    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    if(mka != nullptr)
    {
        _children["mka"] = mka;
    }

    if(macro != nullptr)
    {
        _children["macro"] = macro;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    if(mvrp != nullptr)
    {
        _children["mvrp"] = mvrp;
    }

    if(avb != nullptr)
    {
        _children["avb"] = avb;
    }

    if(ptp != nullptr)
    {
        _children["ptp"] = ptp;
    }

    if(cdp != nullptr)
    {
        _children["cdp"] = cdp;
    }

    if(avc != nullptr)
    {
        _children["avc"] = avc;
    }

    if(policy != nullptr)
    {
        _children["policy"] = policy;
    }

    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    count_ = 0;
    for (auto ent_ : route_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(route_tag != nullptr)
    {
        _children["route-tag"] = route_tag;
    }

    count_ = 0;
    for (auto ent_ : table_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(sdm != nullptr)
    {
        _children["sdm"] = sdm;
    }

    if(mls != nullptr)
    {
        _children["mls"] = mls;
    }

    if(object_group != nullptr)
    {
        _children["object-group"] = object_group;
    }

    count_ = 0;
    for (auto ent_ : pseudowire_class.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(control_plane != nullptr)
    {
        _children["control-plane"] = control_plane;
    }

    if(control_plane_host != nullptr)
    {
        _children["control-plane-host"] = control_plane_host;
    }

    if(clock_ != nullptr)
    {
        _children["clock"] = clock_;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(aaa != nullptr)
    {
        _children["aaa"] = aaa;
    }

    if(privilege != nullptr)
    {
        _children["privilege"] = privilege;
    }

    if(login != nullptr)
    {
        _children["login"] = login;
    }

    if(multilink != nullptr)
    {
        _children["multilink"] = multilink;
    }

    if(mac_address_table != nullptr)
    {
        _children["mac-address-table"] = mac_address_table;
    }

    if(redundancy != nullptr)
    {
        _children["redundancy"] = redundancy;
    }

    if(scheduler != nullptr)
    {
        _children["scheduler"] = scheduler;
    }

    if(epm != nullptr)
    {
        _children["epm"] = epm;
    }

    if(spanning_tree != nullptr)
    {
        _children["spanning-tree"] = spanning_tree;
    }

    if(subscriber != nullptr)
    {
        _children["subscriber"] = subscriber;
    }

    if(track != nullptr)
    {
        _children["track"] = track;
    }

    if(dot1x != nullptr)
    {
        _children["dot1x"] = dot1x;
    }

    if(mab != nullptr)
    {
        _children["mab"] = mab;
    }

    if(fallback != nullptr)
    {
        _children["fallback"] = fallback;
    }

    if(parameter_map != nullptr)
    {
        _children["parameter-map"] = parameter_map;
    }

    if(ppp != nullptr)
    {
        _children["ppp"] = ppp;
    }

    if(mac != nullptr)
    {
        _children["mac"] = mac;
    }

    if(tacacs != nullptr)
    {
        _children["tacacs"] = tacacs;
    }

    if(tacacs_server != nullptr)
    {
        _children["tacacs-server"] = tacacs_server;
    }

    if(software != nullptr)
    {
        _children["software"] = software;
    }

    if(upgrade != nullptr)
    {
        _children["upgrade"] = upgrade;
    }

    if(vtp != nullptr)
    {
        _children["vtp"] = vtp;
    }

    if(xconnect != nullptr)
    {
        _children["xconnect"] = xconnect;
    }

    if(fabric != nullptr)
    {
        _children["fabric"] = fabric;
    }

    if(port_channel != nullptr)
    {
        _children["port-channel"] = port_channel;
    }

    if(key != nullptr)
    {
        _children["key"] = key;
    }

    if(l2 != nullptr)
    {
        _children["l2"] = l2;
    }

    if(system != nullptr)
    {
        _children["system"] = system;
    }

    if(errdisable != nullptr)
    {
        _children["errdisable"] = errdisable;
    }

    if(identity != nullptr)
    {
        _children["identity"] = identity;
    }

    if(monitor != nullptr)
    {
        _children["monitor"] = monitor;
    }

    count_ = 0;
    for (auto ent_ : tftp_server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(radius_server != nullptr)
    {
        _children["radius-server"] = radius_server;
    }

    if(radius != nullptr)
    {
        _children["radius"] = radius;
    }

    if(zone != nullptr)
    {
        _children["zone"] = zone;
    }

    if(zone_pair != nullptr)
    {
        _children["zone-pair"] = zone_pair;
    }

    count_ = 0;
    for (auto ent_ : alarm_contact.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(ethernet != nullptr)
    {
        _children["ethernet"] = ethernet;
    }

    if(bridge_domain != nullptr)
    {
        _children["bridge-domain"] = bridge_domain;
    }

    if(crypto != nullptr)
    {
        _children["crypto"] = crypto;
    }

    if(cts != nullptr)
    {
        _children["cts"] = cts;
    }

    if(bfd_template != nullptr)
    {
        _children["bfd-template"] = bfd_template;
    }

    if(pfr != nullptr)
    {
        _children["pfr"] = pfr;
    }

    count_ = 0;
    for (auto ent_ : pfr_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(facility_alarm != nullptr)
    {
        _children["facility-alarm"] = facility_alarm;
    }

    if(setup != nullptr)
    {
        _children["setup"] = setup;
    }

    if(tod_clock != nullptr)
    {
        _children["tod-clock"] = tod_clock;
    }

    if(network_clock != nullptr)
    {
        _children["network-clock"] = network_clock;
    }

    if(l2vpn != nullptr)
    {
        _children["l2vpn"] = l2vpn;
    }

    if(l2vpn_config != nullptr)
    {
        _children["l2vpn-config"] = l2vpn_config;
    }

    if(l3vpn != nullptr)
    {
        _children["l3vpn"] = l3vpn;
    }

    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    if(router != nullptr)
    {
        _children["router"] = router;
    }

    if(service_chain != nullptr)
    {
        _children["service-chain"] = service_chain;
    }

    if(performance != nullptr)
    {
        _children["performance"] = performance;
    }

    if(otv != nullptr)
    {
        _children["otv"] = otv;
    }

    if(remote_management != nullptr)
    {
        _children["remote-management"] = remote_management;
    }

    count_ = 0;
    for (auto ent_ : virtual_service.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(snmp != nullptr)
    {
        _children["snmp"] = snmp;
    }

    if(snmp_server != nullptr)
    {
        _children["snmp-server"] = snmp_server;
    }

    if(segment_routing != nullptr)
    {
        _children["segment-routing"] = segment_routing;
    }

    if(license != nullptr)
    {
        _children["license"] = license;
    }

    if(memory_size != nullptr)
    {
        _children["memory-size"] = memory_size;
    }

    if(transceiver != nullptr)
    {
        _children["transceiver"] = transceiver;
    }

    if(service_insertion != nullptr)
    {
        _children["service-insertion"] = service_insertion;
    }

    if(udld != nullptr)
    {
        _children["udld"] = udld;
    }

    if(qos != nullptr)
    {
        _children["qos"] = qos;
    }

    count_ = 0;
    for (auto ent_ : time_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(device_tracking != nullptr)
    {
        _children["device-tracking"] = device_tracking;
    }

    if(fhrp != nullptr)
    {
        _children["fhrp"] = fhrp;
    }

    if(metadata != nullptr)
    {
        _children["metadata"] = metadata;
    }

    if(profile != nullptr)
    {
        _children["profile"] = profile;
    }

    if(alias != nullptr)
    {
        _children["alias"] = alias;
    }

    if(line != nullptr)
    {
        _children["line"] = line;
    }

    if(ntp != nullptr)
    {
        _children["ntp"] = ntp;
    }

    if(wsma != nullptr)
    {
        _children["wsma"] = wsma;
    }

    if(event != nullptr)
    {
        _children["event"] = event;
    }

    if(template_ != nullptr)
    {
        _children["template"] = template_;
    }

    if(process != nullptr)
    {
        _children["process"] = process;
    }

    if(exception != nullptr)
    {
        _children["exception"] = exception;
    }

    if(iox != nullptr)
    {
        _children["iox"] = iox;
    }

    if(power != nullptr)
    {
        _children["Cisco-IOS-XE-power:power"] = power;
    }

    if(vpdn != nullptr)
    {
        _children["Cisco-IOS-XE-vpdn:vpdn"] = vpdn;
    }

    if(esmc != nullptr)
    {
        _children["Cisco-IOS-XE-ethernet:esmc"] = esmc;
    }

    if(access_session != nullptr)
    {
        _children["Cisco-IOS-XE-sanet:access-session"] = access_session;
    }

    if(authentication != nullptr)
    {
        _children["Cisco-IOS-XE-sanet:authentication"] = authentication;
    }

    if(dialer != nullptr)
    {
        _children["Cisco-IOS-XE-cellular:dialer"] = dialer;
    }

    count_ = 0;
    for (auto ent_ : dialer_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(vstack != nullptr)
    {
        _children["Cisco-IOS-XE-vstack:vstack"] = vstack;
    }

    if(et_analytics != nullptr)
    {
        _children["Cisco-IOS-XE-eta:et-analytics"] = et_analytics;
    }

    if(arp != nullptr)
    {
        _children["Cisco-IOS-XE-arp:arp"] = arp;
    }

    if(network_policy != nullptr)
    {
        _children["Cisco-IOS-XE-switch:network-policy"] = network_policy;
    }

    if(energywise != nullptr)
    {
        _children["Cisco-IOS-XE-switch:energywise"] = energywise;
    }

    count_ = 0;
    for (auto ent_ : service_template.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : switch_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : switch_virtual.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(device != nullptr)
    {
        _children["Cisco-IOS-XE-switch:device"] = device;
    }

    if(stack_mac != nullptr)
    {
        _children["Cisco-IOS-XE-switch:stack-mac"] = stack_mac;
    }

    if(l2protocol_tunnel != nullptr)
    {
        _children["Cisco-IOS-XE-switch:l2protocol-tunnel"] = l2protocol_tunnel;
    }

    if(rep != nullptr)
    {
        _children["Cisco-IOS-XE-switch:rep"] = rep;
    }

    if(hw_switch != nullptr)
    {
        _children["Cisco-IOS-XE-switch:hw-switch"] = hw_switch;
    }

    if(feature != nullptr)
    {
        _children["Cisco-IOS-XE-switch:feature"] = feature;
    }

    if(openflow != nullptr)
    {
        _children["Cisco-IOS-XE-switch:openflow"] = openflow;
    }

    if(bba_group != nullptr)
    {
        _children["Cisco-IOS-XE-bba-group:bba-group"] = bba_group;
    }

    count_ = 0;
    for (auto ent_ : maintenance_template.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(cef != nullptr)
    {
        _children["Cisco-IOS-XE-cef:cef"] = cef;
    }

    if(nat66 != nullptr)
    {
        _children["Cisco-IOS-XE-nat:nat66"] = nat66;
    }

    if(shell != nullptr)
    {
        _children["Cisco-IOS-XE-platform:shell"] = shell;
    }

    if(voice != nullptr)
    {
        _children["Cisco-IOS-XE-voice:voice"] = voice;
    }

    count_ = 0;
    for (auto ent_ : voice_card.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(service_routing != nullptr)
    {
        _children["Cisco-IOS-XE-service-routing:service-routing"] = service_routing;
    }

    if(lldp != nullptr)
    {
        _children["Cisco-IOS-XE-lldp:lldp"] = lldp;
    }

    if(service_list != nullptr)
    {
        _children["Cisco-IOS-XE-service-discovery:service-list"] = service_list;
    }

    if(diagnostic != nullptr)
    {
        _children["Cisco-IOS-XE-diagnostics:diagnostic"] = diagnostic;
    }

    if(pm_agent != nullptr)
    {
        _children["Cisco-IOS-XE-pathmgr:pm-agent"] = pm_agent;
    }

    if(named_ordering_route_map != nullptr)
    {
        _children["Cisco-IOS-XE-route-map:named-ordering-route-map"] = named_ordering_route_map;
    }

    if(fabric_group != nullptr)
    {
        _children["Cisco-IOS-XE-iwanfabric:fabric-group"] = fabric_group;
    }

    if(device_sensor != nullptr)
    {
        _children["Cisco-IOS-XE-device-sensor:device-sensor"] = device_sensor;
    }

    if(coap != nullptr)
    {
        _children["Cisco-IOS-XE-coap:coap"] = coap;
    }

    if(utd != nullptr)
    {
        _children["Cisco-IOS-XE-utd:utd"] = utd;
    }

    if(utd_st != nullptr)
    {
        _children["Cisco-IOS-XE-utd:utd-st"] = utd_st;
    }

    if(utd_mt != nullptr)
    {
        _children["Cisco-IOS-XE-utd:utd-mt"] = utd_mt;
    }

    return _children;
}

void Native::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-start-marker")
    {
        boot_start_marker = value;
        boot_start_marker.value_namespace = name_space;
        boot_start_marker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boot-end-marker")
    {
        boot_end_marker = value;
        boot_end_marker.value_namespace = name_space;
        boot_end_marker.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "captive-portal-bypass")
    {
        captive_portal_bypass = value;
        captive_portal_bypass.value_namespace = name_space;
        captive_portal_bypass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aqm-register-fnf")
    {
        aqm_register_fnf = value;
        aqm_register_fnf.value_namespace = name_space;
        aqm_register_fnf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-register")
    {
        config_register = value;
        config_register.value_namespace = name_space;
        config_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-eadi")
    {
        disable_eadi = value;
        disable_eadi.value_namespace = name_space;
        disable_eadi.value_namespace_prefix = name_space_prefix;
    }
}

void Native::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "boot-start-marker")
    {
        boot_start_marker.yfilter = yfilter;
    }
    if(value_path == "boot-end-marker")
    {
        boot_end_marker.yfilter = yfilter;
    }
    if(value_path == "captive-portal-bypass")
    {
        captive_portal_bypass.yfilter = yfilter;
    }
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
    if(value_path == "aqm-register-fnf")
    {
        aqm_register_fnf.yfilter = yfilter;
    }
    if(value_path == "config-register")
    {
        config_register.yfilter = yfilter;
    }
    if(value_path == "disable-eadi")
    {
        disable_eadi.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> Native::clone_ptr() const
{
    return std::make_shared<Native>();
}

std::string Native::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string Native::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function Native::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Native::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool Native::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default" || name == "bfd" || name == "stackwise-virtual" || name == "boot" || name == "banner" || name == "memory" || name == "location" || name == "call-home" || name == "hw-module" || name == "cisp" || name == "module" || name == "domain" || name == "parser" || name == "service" || name == "platform" || name == "enable" || name == "password" || name == "eap" || name == "archive" || name == "username" || name == "card" || name == "controller" || name == "vrf" || name == "rmon" || name == "sampler" || name == "flow" || name == "ip" || name == "mka" || name == "macro" || name == "ipv6" || name == "vlan" || name == "mvrp" || name == "avb" || name == "ptp" || name == "cdp" || name == "avc" || name == "policy" || name == "interface" || name == "route-map" || name == "route-tag" || name == "table-map" || name == "sdm" || name == "mls" || name == "object-group" || name == "pseudowire-class" || name == "control-plane" || name == "control-plane-host" || name == "clock" || name == "logging" || name == "aaa" || name == "privilege" || name == "login" || name == "multilink" || name == "mac-address-table" || name == "redundancy" || name == "scheduler" || name == "epm" || name == "spanning-tree" || name == "subscriber" || name == "track" || name == "dot1x" || name == "mab" || name == "fallback" || name == "parameter-map" || name == "ppp" || name == "mac" || name == "tacacs" || name == "tacacs-server" || name == "software" || name == "upgrade" || name == "vtp" || name == "xconnect" || name == "fabric" || name == "port-channel" || name == "key" || name == "l2" || name == "system" || name == "errdisable" || name == "identity" || name == "monitor" || name == "tftp-server" || name == "radius-server" || name == "radius" || name == "zone" || name == "zone-pair" || name == "alarm-contact" || name == "ethernet" || name == "bridge-domain" || name == "crypto" || name == "cts" || name == "bfd-template" || name == "pfr" || name == "pfr-map" || name == "facility-alarm" || name == "setup" || name == "tod-clock" || name == "network-clock" || name == "l2vpn" || name == "l2vpn-config" || name == "l3vpn" || name == "mpls" || name == "router" || name == "service-chain" || name == "performance" || name == "otv" || name == "remote-management" || name == "virtual-service" || name == "snmp" || name == "snmp-server" || name == "segment-routing" || name == "license" || name == "memory-size" || name == "transceiver" || name == "service-insertion" || name == "udld" || name == "qos" || name == "time-range" || name == "device-tracking" || name == "fhrp" || name == "metadata" || name == "profile" || name == "alias" || name == "line" || name == "ntp" || name == "wsma" || name == "event" || name == "template" || name == "process" || name == "exception" || name == "iox" || name == "power" || name == "vpdn" || name == "esmc" || name == "access-session" || name == "authentication" || name == "dialer" || name == "dialer-list" || name == "vstack" || name == "et-analytics" || name == "arp" || name == "network-policy" || name == "energywise" || name == "service-template" || name == "switch" || name == "switch-virtual" || name == "device" || name == "stack-mac" || name == "l2protocol-tunnel" || name == "rep" || name == "hw-switch" || name == "feature" || name == "openflow" || name == "bba-group" || name == "maintenance-template" || name == "cef" || name == "nat66" || name == "shell" || name == "voice" || name == "voice-card" || name == "service-routing" || name == "lldp" || name == "service-list" || name == "diagnostic" || name == "pm-agent" || name == "named-ordering-route-map" || name == "fabric-group" || name == "device-sensor" || name == "coap" || name == "utd" || name == "utd-st" || name == "utd-mt" || name == "version" || name == "boot-start-marker" || name == "boot-end-marker" || name == "captive-portal-bypass" || name == "hostname" || name == "aqm-register-fnf" || name == "config-register" || name == "disable-eadi")
        return true;
    return false;
}

Native::Default::Default()
    :
    crypto(std::make_shared<Native::Default::Crypto>())
{
    crypto->parent = this;

    yang_name = "default"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Default::~Default()
{
}

bool Native::Default::has_data() const
{
    if (is_presence_container) return true;
    return (crypto !=  nullptr && crypto->has_data());
}

bool Native::Default::has_operation() const
{
    return is_set(yfilter)
	|| (crypto !=  nullptr && crypto->has_operation());
}

std::string Native::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crypto")
    {
        if(crypto == nullptr)
        {
            crypto = std::make_shared<Native::Default::Crypto>();
        }
        return crypto;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(crypto != nullptr)
    {
        _children["crypto"] = crypto;
    }

    return _children;
}

void Native::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "crypto")
        return true;
    return false;
}

Native::Default::Crypto::Crypto()
    :
    ikev2(std::make_shared<Native::Default::Crypto::Ikev2>())
{
    ikev2->parent = this;

    yang_name = "crypto"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Default::Crypto::~Crypto()
{
}

bool Native::Default::Crypto::has_data() const
{
    if (is_presence_container) return true;
    return (ikev2 !=  nullptr && ikev2->has_data());
}

bool Native::Default::Crypto::has_operation() const
{
    return is_set(yfilter)
	|| (ikev2 !=  nullptr && ikev2->has_operation());
}

std::string Native::Default::Crypto::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/default/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Default::Crypto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crypto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Default::Crypto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Default::Crypto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ikev2")
    {
        if(ikev2 == nullptr)
        {
            ikev2 = std::make_shared<Native::Default::Crypto::Ikev2>();
        }
        return ikev2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Default::Crypto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ikev2 != nullptr)
    {
        _children["ikev2"] = ikev2;
    }

    return _children;
}

void Native::Default::Crypto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Default::Crypto::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Default::Crypto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ikev2")
        return true;
    return false;
}

Native::Default::Crypto::Ikev2::Ikev2()
    :
    proposal{YType::empty, "proposal"},
    policy{YType::empty, "policy"}
{

    yang_name = "ikev2"; yang_parent_name = "crypto"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Default::Crypto::Ikev2::~Ikev2()
{
}

bool Native::Default::Crypto::Ikev2::has_data() const
{
    if (is_presence_container) return true;
    return proposal.is_set
	|| policy.is_set;
}

bool Native::Default::Crypto::Ikev2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proposal.yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Default::Crypto::Ikev2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/default/crypto/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Default::Crypto::Ikev2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ikev2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Default::Crypto::Ikev2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proposal.is_set || is_set(proposal.yfilter)) leaf_name_data.push_back(proposal.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Default::Crypto::Ikev2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Default::Crypto::Ikev2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Default::Crypto::Ikev2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proposal")
    {
        proposal = value;
        proposal.value_namespace = name_space;
        proposal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Default::Crypto::Ikev2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proposal")
    {
        proposal.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Default::Crypto::Ikev2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proposal" || name == "policy")
        return true;
    return false;
}

Native::Bfd::Bfd()
    :
    l2cos{YType::uint8, "Cisco-IOS-XE-bfd:l2cos"},
    slow_timers{YType::uint16, "Cisco-IOS-XE-bfd:slow-timers"}
        ,
    map(std::make_shared<Native::Bfd::Map>())
{
    map->parent = this;

    yang_name = "bfd"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Bfd::~Bfd()
{
}

bool Native::Bfd::has_data() const
{
    if (is_presence_container) return true;
    return l2cos.is_set
	|| slow_timers.is_set
	|| (map !=  nullptr && map->has_data());
}

bool Native::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2cos.yfilter)
	|| ydk::is_set(slow_timers.yfilter)
	|| (map !=  nullptr && map->has_operation());
}

std::string Native::Bfd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Bfd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2cos.is_set || is_set(l2cos.yfilter)) leaf_name_data.push_back(l2cos.get_name_leafdata());
    if (slow_timers.is_set || is_set(slow_timers.yfilter)) leaf_name_data.push_back(slow_timers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-bfd:map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Bfd::Map>();
        }
        return map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(map != nullptr)
    {
        _children["Cisco-IOS-XE-bfd:map"] = map;
    }

    return _children;
}

void Native::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-bfd:l2cos")
    {
        l2cos = value;
        l2cos.value_namespace = name_space;
        l2cos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cisco-IOS-XE-bfd:slow-timers")
    {
        slow_timers = value;
        slow_timers.value_namespace = name_space;
        slow_timers.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2cos")
    {
        l2cos.yfilter = yfilter;
    }
    if(value_path == "slow-timers")
    {
        slow_timers.yfilter = yfilter;
    }
}

bool Native::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map" || name == "l2cos" || name == "slow-timers")
        return true;
    return false;
}

Native::Bfd::Map::Map()
    :
    ipv4(std::make_shared<Native::Bfd::Map::Ipv4>())
    , ipv6(std::make_shared<Native::Bfd::Map::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "map"; yang_parent_name = "bfd"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Bfd::Map::~Map()
{
}

bool Native::Bfd::Map::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Bfd::Map::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Bfd::Map::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bfd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Bfd::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bfd:map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Bfd::Map::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Bfd::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Bfd::Map::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Bfd::Map::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Bfd::Map::get_children() const
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

void Native::Bfd::Map::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Bfd::Map::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Bfd::Map::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Native::Bfd::Map::Ipv4::Ipv4()
    :
    no_vrf(std::make_shared<Native::Bfd::Map::Ipv4::NoVrf>())
    , vrf(std::make_shared<Native::Bfd::Map::Ipv4::Vrf>())
{
    no_vrf->parent = this;
    vrf->parent = this;

    yang_name = "ipv4"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Bfd::Map::Ipv4::~Ipv4()
{
}

bool Native::Bfd::Map::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return (no_vrf !=  nullptr && no_vrf->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Bfd::Map::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (no_vrf !=  nullptr && no_vrf->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Bfd::Map::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bfd/Cisco-IOS-XE-bfd:map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Bfd::Map::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Bfd::Map::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Bfd::Map::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "no-vrf")
    {
        if(no_vrf == nullptr)
        {
            no_vrf = std::make_shared<Native::Bfd::Map::Ipv4::NoVrf>();
        }
        return no_vrf;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Bfd::Map::Ipv4::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Bfd::Map::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(no_vrf != nullptr)
    {
        _children["no-vrf"] = no_vrf;
    }

    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    return _children;
}

void Native::Bfd::Map::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Bfd::Map::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Bfd::Map::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-vrf" || name == "vrf")
        return true;
    return false;
}

Native::Bfd::Map::Ipv4::NoVrf::NoVrf()
    :
    dest_ip{YType::str, "dest-ip"},
    src_ip{YType::str, "src-ip"},
    template_name{YType::str, "template-name"}
{

    yang_name = "no-vrf"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Bfd::Map::Ipv4::NoVrf::~NoVrf()
{
}

bool Native::Bfd::Map::Ipv4::NoVrf::has_data() const
{
    if (is_presence_container) return true;
    return dest_ip.is_set
	|| src_ip.is_set
	|| template_name.is_set;
}

bool Native::Bfd::Map::Ipv4::NoVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dest_ip.yfilter)
	|| ydk::is_set(src_ip.yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string Native::Bfd::Map::Ipv4::NoVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bfd/Cisco-IOS-XE-bfd:map/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Bfd::Map::Ipv4::NoVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Bfd::Map::Ipv4::NoVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_ip.is_set || is_set(dest_ip.yfilter)) leaf_name_data.push_back(dest_ip.get_name_leafdata());
    if (src_ip.is_set || is_set(src_ip.yfilter)) leaf_name_data.push_back(src_ip.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Bfd::Map::Ipv4::NoVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Bfd::Map::Ipv4::NoVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Bfd::Map::Ipv4::NoVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dest-ip")
    {
        dest_ip = value;
        dest_ip.value_namespace = name_space;
        dest_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-ip")
    {
        src_ip = value;
        src_ip.value_namespace = name_space;
        src_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Bfd::Map::Ipv4::NoVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dest-ip")
    {
        dest_ip.yfilter = yfilter;
    }
    if(value_path == "src-ip")
    {
        src_ip.yfilter = yfilter;
    }
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool Native::Bfd::Map::Ipv4::NoVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dest-ip" || name == "src-ip" || name == "template-name")
        return true;
    return false;
}

Native::Bfd::Map::Ipv4::Vrf::Vrf()
    :
    dst_vrf(this, {"dst_vrf"})
{

    yang_name = "vrf"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Bfd::Map::Ipv4::Vrf::~Vrf()
{
}

bool Native::Bfd::Map::Ipv4::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dst_vrf.len(); index++)
    {
        if(dst_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Bfd::Map::Ipv4::Vrf::has_operation() const
{
    for (std::size_t index=0; index<dst_vrf.len(); index++)
    {
        if(dst_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Bfd::Map::Ipv4::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bfd/Cisco-IOS-XE-bfd:map/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Bfd::Map::Ipv4::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Bfd::Map::Ipv4::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Bfd::Map::Ipv4::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dst-vrf")
    {
        auto ent_ = std::make_shared<Native::Bfd::Map::Ipv4::Vrf::DstVrf>();
        ent_->parent = this;
        dst_vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Bfd::Map::Ipv4::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dst_vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Bfd::Map::Ipv4::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Bfd::Map::Ipv4::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Bfd::Map::Ipv4::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-vrf")
        return true;
    return false;
}

Native::Bfd::Map::Ipv4::Vrf::DstVrf::DstVrf()
    :
    dst_vrf{YType::str, "dst-vrf"},
    a_period_b_period_c_period_d_slash_nn{YType::empty, "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn"}
{

    yang_name = "dst-vrf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Bfd::Map::Ipv4::Vrf::DstVrf::~DstVrf()
{
}

bool Native::Bfd::Map::Ipv4::Vrf::DstVrf::has_data() const
{
    if (is_presence_container) return true;
    return dst_vrf.is_set
	|| a_period_b_period_c_period_d_slash_nn.is_set;
}

bool Native::Bfd::Map::Ipv4::Vrf::DstVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dst_vrf.yfilter)
	|| ydk::is_set(a_period_b_period_c_period_d_slash_nn.yfilter);
}

std::string Native::Bfd::Map::Ipv4::Vrf::DstVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bfd/Cisco-IOS-XE-bfd:map/ipv4/vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Bfd::Map::Ipv4::Vrf::DstVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-vrf";
    ADD_KEY_TOKEN(dst_vrf, "dst-vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Bfd::Map::Ipv4::Vrf::DstVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_vrf.is_set || is_set(dst_vrf.yfilter)) leaf_name_data.push_back(dst_vrf.get_name_leafdata());
    if (a_period_b_period_c_period_d_slash_nn.is_set || is_set(a_period_b_period_c_period_d_slash_nn.yfilter)) leaf_name_data.push_back(a_period_b_period_c_period_d_slash_nn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Bfd::Map::Ipv4::Vrf::DstVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Bfd::Map::Ipv4::Vrf::DstVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Bfd::Map::Ipv4::Vrf::DstVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-vrf")
    {
        dst_vrf = value;
        dst_vrf.value_namespace = name_space;
        dst_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn")
    {
        a_period_b_period_c_period_d_slash_nn = value;
        a_period_b_period_c_period_d_slash_nn.value_namespace = name_space;
        a_period_b_period_c_period_d_slash_nn.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Bfd::Map::Ipv4::Vrf::DstVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-vrf")
    {
        dst_vrf.yfilter = yfilter;
    }
    if(value_path == "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn")
    {
        a_period_b_period_c_period_d_slash_nn.yfilter = yfilter;
    }
}

bool Native::Bfd::Map::Ipv4::Vrf::DstVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-vrf" || name == "A_PERIOD_B_PERIOD_C_PERIOD_D_SLASH_nn")
        return true;
    return false;
}

Native::Bfd::Map::Ipv6::Ipv6()
    :
    dp_ipv6_prefix(this, {"dp_ipv6_prefix"})
    , vrf(std::make_shared<Native::Bfd::Map::Ipv6::Vrf>())
{
    vrf->parent = this;

    yang_name = "ipv6"; yang_parent_name = "map"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Bfd::Map::Ipv6::~Ipv6()
{
}

bool Native::Bfd::Map::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dp_ipv6_prefix.len(); index++)
    {
        if(dp_ipv6_prefix[index]->has_data())
            return true;
    }
    return (vrf !=  nullptr && vrf->has_data());
}

bool Native::Bfd::Map::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<dp_ipv6_prefix.len(); index++)
    {
        if(dp_ipv6_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Bfd::Map::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bfd/Cisco-IOS-XE-bfd:map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Bfd::Map::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Bfd::Map::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Bfd::Map::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dp-ipv6_prefix")
    {
        auto ent_ = std::make_shared<Native::Bfd::Map::Ipv6::DpIpv6Prefix>();
        ent_->parent = this;
        dp_ipv6_prefix.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Bfd::Map::Ipv6::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Bfd::Map::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dp_ipv6_prefix.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    return _children;
}

void Native::Bfd::Map::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Bfd::Map::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Bfd::Map::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dp-ipv6_prefix" || name == "vrf")
        return true;
    return false;
}

Native::Bfd::Map::Ipv6::DpIpv6Prefix::DpIpv6Prefix()
    :
    dp_ipv6_prefix{YType::str, "dp-ipv6_prefix"},
    bfd_nm{YType::str, "bfd-nm"}
        ,
    src_ipv6_prefix0(this, {"src_ipv6_prefix0"})
    , vrf(std::make_shared<Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf>())
{
    vrf->parent = this;

    yang_name = "dp-ipv6_prefix"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Bfd::Map::Ipv6::DpIpv6Prefix::~DpIpv6Prefix()
{
}

bool Native::Bfd::Map::Ipv6::DpIpv6Prefix::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<src_ipv6_prefix0.len(); index++)
    {
        if(src_ipv6_prefix0[index]->has_data())
            return true;
    }
    return dp_ipv6_prefix.is_set
	|| bfd_nm.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Bfd::Map::Ipv6::DpIpv6Prefix::has_operation() const
{
    for (std::size_t index=0; index<src_ipv6_prefix0.len(); index++)
    {
        if(src_ipv6_prefix0[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dp_ipv6_prefix.yfilter)
	|| ydk::is_set(bfd_nm.yfilter)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Bfd::Map::Ipv6::DpIpv6Prefix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bfd/Cisco-IOS-XE-bfd:map/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Bfd::Map::Ipv6::DpIpv6Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dp-ipv6_prefix";
    ADD_KEY_TOKEN(dp_ipv6_prefix, "dp-ipv6_prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Bfd::Map::Ipv6::DpIpv6Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dp_ipv6_prefix.is_set || is_set(dp_ipv6_prefix.yfilter)) leaf_name_data.push_back(dp_ipv6_prefix.get_name_leafdata());
    if (bfd_nm.is_set || is_set(bfd_nm.yfilter)) leaf_name_data.push_back(bfd_nm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Bfd::Map::Ipv6::DpIpv6Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "src-ipv6_prefix0")
    {
        auto ent_ = std::make_shared<Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0>();
        ent_->parent = this;
        src_ipv6_prefix0.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Bfd::Map::Ipv6::DpIpv6Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : src_ipv6_prefix0.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    return _children;
}

void Native::Bfd::Map::Ipv6::DpIpv6Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dp-ipv6_prefix")
    {
        dp_ipv6_prefix = value;
        dp_ipv6_prefix.value_namespace = name_space;
        dp_ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-nm")
    {
        bfd_nm = value;
        bfd_nm.value_namespace = name_space;
        bfd_nm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Bfd::Map::Ipv6::DpIpv6Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dp-ipv6_prefix")
    {
        dp_ipv6_prefix.yfilter = yfilter;
    }
    if(value_path == "bfd-nm")
    {
        bfd_nm.yfilter = yfilter;
    }
}

bool Native::Bfd::Map::Ipv6::DpIpv6Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-ipv6_prefix0" || name == "vrf" || name == "dp-ipv6_prefix" || name == "bfd-nm")
        return true;
    return false;
}

Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0::SrcIpv6Prefix0()
    :
    src_ipv6_prefix0{YType::str, "src-ipv6_prefix0"},
    bfd_name{YType::str, "bfd-name"}
{

    yang_name = "src-ipv6_prefix0"; yang_parent_name = "dp-ipv6_prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0::~SrcIpv6Prefix0()
{
}

bool Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0::has_data() const
{
    if (is_presence_container) return true;
    return src_ipv6_prefix0.is_set
	|| bfd_name.is_set;
}

bool Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_ipv6_prefix0.yfilter)
	|| ydk::is_set(bfd_name.yfilter);
}

std::string Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-ipv6_prefix0";
    ADD_KEY_TOKEN(src_ipv6_prefix0, "src-ipv6_prefix0");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_ipv6_prefix0.is_set || is_set(src_ipv6_prefix0.yfilter)) leaf_name_data.push_back(src_ipv6_prefix0.get_name_leafdata());
    if (bfd_name.is_set || is_set(bfd_name.yfilter)) leaf_name_data.push_back(bfd_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src-ipv6_prefix0")
    {
        src_ipv6_prefix0 = value;
        src_ipv6_prefix0.value_namespace = name_space;
        src_ipv6_prefix0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-name")
    {
        bfd_name = value;
        bfd_name.value_namespace = name_space;
        bfd_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src-ipv6_prefix0")
    {
        src_ipv6_prefix0.yfilter = yfilter;
    }
    if(value_path == "bfd-name")
    {
        bfd_name.yfilter = yfilter;
    }
}

bool Native::Bfd::Map::Ipv6::DpIpv6Prefix::SrcIpv6Prefix0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-ipv6_prefix0" || name == "bfd-name")
        return true;
    return false;
}

Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::Vrf()
    :
    src_vrf(this, {"src_vrf"})
{

    yang_name = "vrf"; yang_parent_name = "dp-ipv6_prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::~Vrf()
{
}

bool Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<src_vrf.len(); index++)
    {
        if(src_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::has_operation() const
{
    for (std::size_t index=0; index<src_vrf.len(); index++)
    {
        if(src_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "src-vrf")
    {
        auto ent_ = std::make_shared<Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf>();
        ent_->parent = this;
        src_vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : src_vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-vrf")
        return true;
    return false;
}

Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf::SrcVrf()
    :
    src_vrf{YType::str, "src-vrf"},
    src_ipv6_prefix{YType::str, "src-ipv6_prefix"}
{

    yang_name = "src-vrf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf::~SrcVrf()
{
}

bool Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf::has_data() const
{
    if (is_presence_container) return true;
    return src_vrf.is_set
	|| src_ipv6_prefix.is_set;
}

bool Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(src_vrf.yfilter)
	|| ydk::is_set(src_ipv6_prefix.yfilter);
}

std::string Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-vrf";
    ADD_KEY_TOKEN(src_vrf, "src-vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_vrf.is_set || is_set(src_vrf.yfilter)) leaf_name_data.push_back(src_vrf.get_name_leafdata());
    if (src_ipv6_prefix.is_set || is_set(src_ipv6_prefix.yfilter)) leaf_name_data.push_back(src_ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "src-vrf")
    {
        src_vrf = value;
        src_vrf.value_namespace = name_space;
        src_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-ipv6_prefix")
    {
        src_ipv6_prefix = value;
        src_ipv6_prefix.value_namespace = name_space;
        src_ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "src-vrf")
    {
        src_vrf.yfilter = yfilter;
    }
    if(value_path == "src-ipv6_prefix")
    {
        src_ipv6_prefix.yfilter = yfilter;
    }
}

bool Native::Bfd::Map::Ipv6::DpIpv6Prefix::Vrf::SrcVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "src-vrf" || name == "src-ipv6_prefix")
        return true;
    return false;
}

Native::Bfd::Map::Ipv6::Vrf::Vrf()
    :
    dst_vrf(this, {"dst_vrf"})
{

    yang_name = "vrf"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Bfd::Map::Ipv6::Vrf::~Vrf()
{
}

bool Native::Bfd::Map::Ipv6::Vrf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dst_vrf.len(); index++)
    {
        if(dst_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Bfd::Map::Ipv6::Vrf::has_operation() const
{
    for (std::size_t index=0; index<dst_vrf.len(); index++)
    {
        if(dst_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Bfd::Map::Ipv6::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bfd/Cisco-IOS-XE-bfd:map/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Bfd::Map::Ipv6::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Bfd::Map::Ipv6::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Bfd::Map::Ipv6::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dst-vrf")
    {
        auto ent_ = std::make_shared<Native::Bfd::Map::Ipv6::Vrf::DstVrf>();
        ent_->parent = this;
        dst_vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Bfd::Map::Ipv6::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dst_vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Bfd::Map::Ipv6::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Bfd::Map::Ipv6::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Bfd::Map::Ipv6::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-vrf")
        return true;
    return false;
}

Native::Bfd::Map::Ipv6::Vrf::DstVrf::DstVrf()
    :
    dst_vrf{YType::str, "dst-vrf"},
    dst_ipv6_prefix{YType::str, "dst-ipv6_prefix"}
{

    yang_name = "dst-vrf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Bfd::Map::Ipv6::Vrf::DstVrf::~DstVrf()
{
}

bool Native::Bfd::Map::Ipv6::Vrf::DstVrf::has_data() const
{
    if (is_presence_container) return true;
    return dst_vrf.is_set
	|| dst_ipv6_prefix.is_set;
}

bool Native::Bfd::Map::Ipv6::Vrf::DstVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dst_vrf.yfilter)
	|| ydk::is_set(dst_ipv6_prefix.yfilter);
}

std::string Native::Bfd::Map::Ipv6::Vrf::DstVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/bfd/Cisco-IOS-XE-bfd:map/ipv6/vrf/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Bfd::Map::Ipv6::Vrf::DstVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-vrf";
    ADD_KEY_TOKEN(dst_vrf, "dst-vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Bfd::Map::Ipv6::Vrf::DstVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_vrf.is_set || is_set(dst_vrf.yfilter)) leaf_name_data.push_back(dst_vrf.get_name_leafdata());
    if (dst_ipv6_prefix.is_set || is_set(dst_ipv6_prefix.yfilter)) leaf_name_data.push_back(dst_ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Bfd::Map::Ipv6::Vrf::DstVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Bfd::Map::Ipv6::Vrf::DstVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Bfd::Map::Ipv6::Vrf::DstVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-vrf")
    {
        dst_vrf = value;
        dst_vrf.value_namespace = name_space;
        dst_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-ipv6_prefix")
    {
        dst_ipv6_prefix = value;
        dst_ipv6_prefix.value_namespace = name_space;
        dst_ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Bfd::Map::Ipv6::Vrf::DstVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-vrf")
    {
        dst_vrf.yfilter = yfilter;
    }
    if(value_path == "dst-ipv6_prefix")
    {
        dst_ipv6_prefix.yfilter = yfilter;
    }
}

bool Native::Bfd::Map::Ipv6::Vrf::DstVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-vrf" || name == "dst-ipv6_prefix")
        return true;
    return false;
}

Native::StackwiseVirtual::StackwiseVirtual()
    :
    domain(std::make_shared<Native::StackwiseVirtual::Domain>())
    , dual_active(std::make_shared<Native::StackwiseVirtual::DualActive>())
{
    domain->parent = this;
    dual_active->parent = this;

    yang_name = "stackwise-virtual"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::StackwiseVirtual::~StackwiseVirtual()
{
}

bool Native::StackwiseVirtual::has_data() const
{
    if (is_presence_container) return true;
    return (domain !=  nullptr && domain->has_data())
	|| (dual_active !=  nullptr && dual_active->has_data());
}

bool Native::StackwiseVirtual::has_operation() const
{
    return is_set(yfilter)
	|| (domain !=  nullptr && domain->has_operation())
	|| (dual_active !=  nullptr && dual_active->has_operation());
}

std::string Native::StackwiseVirtual::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::StackwiseVirtual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stackwise-virtual";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::StackwiseVirtual::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::StackwiseVirtual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-stackwise-virtual:domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::StackwiseVirtual::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "Cisco-IOS-XE-stackwise-virtual:dual-active")
    {
        if(dual_active == nullptr)
        {
            dual_active = std::make_shared<Native::StackwiseVirtual::DualActive>();
        }
        return dual_active;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::StackwiseVirtual::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(domain != nullptr)
    {
        _children["Cisco-IOS-XE-stackwise-virtual:domain"] = domain;
    }

    if(dual_active != nullptr)
    {
        _children["Cisco-IOS-XE-stackwise-virtual:dual-active"] = dual_active;
    }

    return _children;
}

void Native::StackwiseVirtual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::StackwiseVirtual::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::StackwiseVirtual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain" || name == "dual-active")
        return true;
    return false;
}

Native::StackwiseVirtual::Domain::Domain()
    :
    domain{YType::uint16, "domain"}
{

    yang_name = "domain"; yang_parent_name = "stackwise-virtual"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::StackwiseVirtual::Domain::~Domain()
{
}

bool Native::StackwiseVirtual::Domain::has_data() const
{
    if (is_presence_container) return true;
    return domain.is_set;
}

bool Native::StackwiseVirtual::Domain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain.yfilter);
}

std::string Native::StackwiseVirtual::Domain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/stackwise-virtual/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::StackwiseVirtual::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-stackwise-virtual:domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::StackwiseVirtual::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.yfilter)) leaf_name_data.push_back(domain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::StackwiseVirtual::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::StackwiseVirtual::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::StackwiseVirtual::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain")
    {
        domain = value;
        domain.value_namespace = name_space;
        domain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::StackwiseVirtual::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain")
    {
        domain.yfilter = yfilter;
    }
}

bool Native::StackwiseVirtual::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain")
        return true;
    return false;
}

Native::StackwiseVirtual::DualActive::DualActive()
    :
    detection(std::make_shared<Native::StackwiseVirtual::DualActive::Detection>())
{
    detection->parent = this;

    yang_name = "dual-active"; yang_parent_name = "stackwise-virtual"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::StackwiseVirtual::DualActive::~DualActive()
{
}

bool Native::StackwiseVirtual::DualActive::has_data() const
{
    if (is_presence_container) return true;
    return (detection !=  nullptr && detection->has_data());
}

bool Native::StackwiseVirtual::DualActive::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation());
}

std::string Native::StackwiseVirtual::DualActive::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/stackwise-virtual/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::StackwiseVirtual::DualActive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-stackwise-virtual:dual-active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::StackwiseVirtual::DualActive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::StackwiseVirtual::DualActive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::StackwiseVirtual::DualActive::Detection>();
        }
        return detection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::StackwiseVirtual::DualActive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detection != nullptr)
    {
        _children["detection"] = detection;
    }

    return _children;
}

void Native::StackwiseVirtual::DualActive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::StackwiseVirtual::DualActive::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::StackwiseVirtual::DualActive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection")
        return true;
    return false;
}

Native::StackwiseVirtual::DualActive::Detection::Detection()
    :
    pagp(nullptr) // presence node
{

    yang_name = "detection"; yang_parent_name = "dual-active"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::StackwiseVirtual::DualActive::Detection::~Detection()
{
}

bool Native::StackwiseVirtual::DualActive::Detection::has_data() const
{
    if (is_presence_container) return true;
    return (pagp !=  nullptr && pagp->has_data());
}

bool Native::StackwiseVirtual::DualActive::Detection::has_operation() const
{
    return is_set(yfilter)
	|| (pagp !=  nullptr && pagp->has_operation());
}

std::string Native::StackwiseVirtual::DualActive::Detection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/stackwise-virtual/Cisco-IOS-XE-stackwise-virtual:dual-active/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::StackwiseVirtual::DualActive::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::StackwiseVirtual::DualActive::Detection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::StackwiseVirtual::DualActive::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pagp")
    {
        if(pagp == nullptr)
        {
            pagp = std::make_shared<Native::StackwiseVirtual::DualActive::Detection::Pagp>();
        }
        return pagp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::StackwiseVirtual::DualActive::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pagp != nullptr)
    {
        _children["pagp"] = pagp;
    }

    return _children;
}

void Native::StackwiseVirtual::DualActive::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::StackwiseVirtual::DualActive::Detection::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::StackwiseVirtual::DualActive::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pagp")
        return true;
    return false;
}

Native::StackwiseVirtual::DualActive::Detection::Pagp::Pagp()
    :
    trust(std::make_shared<Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust>())
{
    trust->parent = this;

    yang_name = "pagp"; yang_parent_name = "detection"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::StackwiseVirtual::DualActive::Detection::Pagp::~Pagp()
{
}

bool Native::StackwiseVirtual::DualActive::Detection::Pagp::has_data() const
{
    if (is_presence_container) return true;
    return (trust !=  nullptr && trust->has_data());
}

bool Native::StackwiseVirtual::DualActive::Detection::Pagp::has_operation() const
{
    return is_set(yfilter)
	|| (trust !=  nullptr && trust->has_operation());
}

std::string Native::StackwiseVirtual::DualActive::Detection::Pagp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/stackwise-virtual/Cisco-IOS-XE-stackwise-virtual:dual-active/detection/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::StackwiseVirtual::DualActive::Detection::Pagp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pagp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::StackwiseVirtual::DualActive::Detection::Pagp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::StackwiseVirtual::DualActive::Detection::Pagp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trust")
    {
        if(trust == nullptr)
        {
            trust = std::make_shared<Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust>();
        }
        return trust;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::StackwiseVirtual::DualActive::Detection::Pagp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trust != nullptr)
    {
        _children["trust"] = trust;
    }

    return _children;
}

void Native::StackwiseVirtual::DualActive::Detection::Pagp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::StackwiseVirtual::DualActive::Detection::Pagp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::StackwiseVirtual::DualActive::Detection::Pagp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trust")
        return true;
    return false;
}

Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::Trust()
    :
    channel_group(std::make_shared<Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::ChannelGroup>())
{
    channel_group->parent = this;

    yang_name = "trust"; yang_parent_name = "pagp"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::~Trust()
{
}

bool Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::has_data() const
{
    if (is_presence_container) return true;
    return (channel_group !=  nullptr && channel_group->has_data());
}

bool Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::has_operation() const
{
    return is_set(yfilter)
	|| (channel_group !=  nullptr && channel_group->has_operation());
}

std::string Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/stackwise-virtual/Cisco-IOS-XE-stackwise-virtual:dual-active/detection/pagp/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trust";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "channel-group")
    {
        if(channel_group == nullptr)
        {
            channel_group = std::make_shared<Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::ChannelGroup>();
        }
        return channel_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(channel_group != nullptr)
    {
        _children["channel-group"] = channel_group;
    }

    return _children;
}

void Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "channel-group")
        return true;
    return false;
}

Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::ChannelGroup::ChannelGroup()
    :
    channel_group_number{YType::uint16, "channel-group-number"}
{

    yang_name = "channel-group"; yang_parent_name = "trust"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::ChannelGroup::~ChannelGroup()
{
}

bool Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::ChannelGroup::has_data() const
{
    if (is_presence_container) return true;
    return channel_group_number.is_set;
}

bool Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::ChannelGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(channel_group_number.yfilter);
}

std::string Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::ChannelGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/stackwise-virtual/Cisco-IOS-XE-stackwise-virtual:dual-active/detection/pagp/trust/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::ChannelGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "channel-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::ChannelGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (channel_group_number.is_set || is_set(channel_group_number.yfilter)) leaf_name_data.push_back(channel_group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::ChannelGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::ChannelGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::ChannelGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "channel-group-number")
    {
        channel_group_number = value;
        channel_group_number.value_namespace = name_space;
        channel_group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::ChannelGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "channel-group-number")
    {
        channel_group_number.yfilter = yfilter;
    }
}

bool Native::StackwiseVirtual::DualActive::Detection::Pagp::Trust::ChannelGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "channel-group-number")
        return true;
    return false;
}

Native::Boot::Boot()
    :
    system(std::make_shared<Native::Boot::System>())
    , enable_break(nullptr) // presence node
    , manual(nullptr) // presence node
{
    system->parent = this;

    yang_name = "boot"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Boot::~Boot()
{
}

bool Native::Boot::has_data() const
{
    if (is_presence_container) return true;
    return (system !=  nullptr && system->has_data())
	|| (enable_break !=  nullptr && enable_break->has_data())
	|| (manual !=  nullptr && manual->has_data());
}

bool Native::Boot::has_operation() const
{
    return is_set(yfilter)
	|| (system !=  nullptr && system->has_operation())
	|| (enable_break !=  nullptr && enable_break->has_operation())
	|| (manual !=  nullptr && manual->has_operation());
}

std::string Native::Boot::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Boot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "boot";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Boot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Boot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<Native::Boot::System>();
        }
        return system;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:enable-break")
    {
        if(enable_break == nullptr)
        {
            enable_break = std::make_shared<Native::Boot::EnableBreak>();
        }
        return enable_break;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:manual")
    {
        if(manual == nullptr)
        {
            manual = std::make_shared<Native::Boot::Manual>();
        }
        return manual;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Boot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(system != nullptr)
    {
        _children["system"] = system;
    }

    if(enable_break != nullptr)
    {
        _children["Cisco-IOS-XE-switch:enable-break"] = enable_break;
    }

    if(manual != nullptr)
    {
        _children["Cisco-IOS-XE-switch:manual"] = manual;
    }

    return _children;
}

void Native::Boot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Boot::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Boot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system" || name == "enable-break" || name == "manual")
        return true;
    return false;
}

Native::Boot::System::System()
    :
    tftp_path{YType::str, "tftp-path"},
    tftp{YType::str, "tftp"}
        ,
    bootfile(std::make_shared<Native::Boot::System::Bootfile>())
    , flash(std::make_shared<Native::Boot::System::Flash>())
    , switch_(std::make_shared<Native::Boot::System::Switch>())
{
    bootfile->parent = this;
    flash->parent = this;
    switch_->parent = this;

    yang_name = "system"; yang_parent_name = "boot"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Boot::System::~System()
{
}

bool Native::Boot::System::has_data() const
{
    if (is_presence_container) return true;
    return tftp_path.is_set
	|| tftp.is_set
	|| (bootfile !=  nullptr && bootfile->has_data())
	|| (flash !=  nullptr && flash->has_data())
	|| (switch_ !=  nullptr && switch_->has_data());
}

bool Native::Boot::System::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tftp_path.yfilter)
	|| ydk::is_set(tftp.yfilter)
	|| (bootfile !=  nullptr && bootfile->has_operation())
	|| (flash !=  nullptr && flash->has_operation())
	|| (switch_ !=  nullptr && switch_->has_operation());
}

std::string Native::Boot::System::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/boot/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Boot::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Boot::System::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tftp_path.is_set || is_set(tftp_path.yfilter)) leaf_name_data.push_back(tftp_path.get_name_leafdata());
    if (tftp.is_set || is_set(tftp.yfilter)) leaf_name_data.push_back(tftp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Boot::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bootfile")
    {
        if(bootfile == nullptr)
        {
            bootfile = std::make_shared<Native::Boot::System::Bootfile>();
        }
        return bootfile;
    }

    if(child_yang_name == "flash")
    {
        if(flash == nullptr)
        {
            flash = std::make_shared<Native::Boot::System::Flash>();
        }
        return flash;
    }

    if(child_yang_name == "Cisco-IOS-XE-switch:switch")
    {
        if(switch_ == nullptr)
        {
            switch_ = std::make_shared<Native::Boot::System::Switch>();
        }
        return switch_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Boot::System::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bootfile != nullptr)
    {
        _children["bootfile"] = bootfile;
    }

    if(flash != nullptr)
    {
        _children["flash"] = flash;
    }

    if(switch_ != nullptr)
    {
        _children["Cisco-IOS-XE-switch:switch"] = switch_;
    }

    return _children;
}

void Native::Boot::System::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tftp-path")
    {
        tftp_path = value;
        tftp_path.value_namespace = name_space;
        tftp_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tftp")
    {
        tftp = value;
        tftp.value_namespace = name_space;
        tftp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Boot::System::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tftp-path")
    {
        tftp_path.yfilter = yfilter;
    }
    if(value_path == "tftp")
    {
        tftp.yfilter = yfilter;
    }
}

bool Native::Boot::System::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bootfile" || name == "flash" || name == "switch" || name == "tftp-path" || name == "tftp")
        return true;
    return false;
}

Native::Boot::System::Bootfile::Bootfile()
    :
    filename_list(this, {"filename"})
{

    yang_name = "bootfile"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Boot::System::Bootfile::~Bootfile()
{
}

bool Native::Boot::System::Bootfile::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<filename_list.len(); index++)
    {
        if(filename_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Boot::System::Bootfile::has_operation() const
{
    for (std::size_t index=0; index<filename_list.len(); index++)
    {
        if(filename_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Boot::System::Bootfile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/boot/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Boot::System::Bootfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bootfile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Boot::System::Bootfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Boot::System::Bootfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "filename-list")
    {
        auto ent_ = std::make_shared<Native::Boot::System::Bootfile::FilenameList>();
        ent_->parent = this;
        filename_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Boot::System::Bootfile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : filename_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Boot::System::Bootfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Boot::System::Bootfile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Boot::System::Bootfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filename-list")
        return true;
    return false;
}

Native::Boot::System::Bootfile::FilenameList::FilenameList()
    :
    filename{YType::str, "filename"}
{

    yang_name = "filename-list"; yang_parent_name = "bootfile"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Boot::System::Bootfile::FilenameList::~FilenameList()
{
}

bool Native::Boot::System::Bootfile::FilenameList::has_data() const
{
    if (is_presence_container) return true;
    return filename.is_set;
}

bool Native::Boot::System::Bootfile::FilenameList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(filename.yfilter);
}

std::string Native::Boot::System::Bootfile::FilenameList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/boot/system/bootfile/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Boot::System::Bootfile::FilenameList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filename-list";
    ADD_KEY_TOKEN(filename, "filename");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Boot::System::Bootfile::FilenameList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (filename.is_set || is_set(filename.yfilter)) leaf_name_data.push_back(filename.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Boot::System::Bootfile::FilenameList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Boot::System::Bootfile::FilenameList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Boot::System::Bootfile::FilenameList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "filename")
    {
        filename = value;
        filename.value_namespace = name_space;
        filename.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Boot::System::Bootfile::FilenameList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "filename")
    {
        filename.yfilter = yfilter;
    }
}

bool Native::Boot::System::Bootfile::FilenameList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "filename")
        return true;
    return false;
}

Native::Boot::System::Flash::Flash()
    :
    flash_list(this, {"flash_leaf"})
{

    yang_name = "flash"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Boot::System::Flash::~Flash()
{
}

bool Native::Boot::System::Flash::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<flash_list.len(); index++)
    {
        if(flash_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Boot::System::Flash::has_operation() const
{
    for (std::size_t index=0; index<flash_list.len(); index++)
    {
        if(flash_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Boot::System::Flash::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/boot/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Boot::System::Flash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Boot::System::Flash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Boot::System::Flash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flash-list")
    {
        auto ent_ = std::make_shared<Native::Boot::System::Flash::FlashList>();
        ent_->parent = this;
        flash_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Boot::System::Flash::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : flash_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Boot::System::Flash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Boot::System::Flash::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Boot::System::Flash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flash-list")
        return true;
    return false;
}

Native::Boot::System::Flash::FlashList::FlashList()
    :
    flash_leaf{YType::str, "flash-leaf"}
{

    yang_name = "flash-list"; yang_parent_name = "flash"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Boot::System::Flash::FlashList::~FlashList()
{
}

bool Native::Boot::System::Flash::FlashList::has_data() const
{
    if (is_presence_container) return true;
    return flash_leaf.is_set;
}

bool Native::Boot::System::Flash::FlashList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flash_leaf.yfilter);
}

std::string Native::Boot::System::Flash::FlashList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/boot/system/flash/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Boot::System::Flash::FlashList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flash-list";
    ADD_KEY_TOKEN(flash_leaf, "flash-leaf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Boot::System::Flash::FlashList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flash_leaf.is_set || is_set(flash_leaf.yfilter)) leaf_name_data.push_back(flash_leaf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Boot::System::Flash::FlashList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Boot::System::Flash::FlashList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Boot::System::Flash::FlashList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flash-leaf")
    {
        flash_leaf = value;
        flash_leaf.value_namespace = name_space;
        flash_leaf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Boot::System::Flash::FlashList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flash-leaf")
    {
        flash_leaf.yfilter = yfilter;
    }
}

bool Native::Boot::System::Flash::FlashList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flash-leaf")
        return true;
    return false;
}

Native::Boot::System::Switch::Switch()
    :
    switch_number(this, {"range"})
    , all(std::make_shared<Native::Boot::System::Switch::All>())
{
    all->parent = this;

    yang_name = "switch"; yang_parent_name = "system"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Boot::System::Switch::~Switch()
{
}

bool Native::Boot::System::Switch::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<switch_number.len(); index++)
    {
        if(switch_number[index]->has_data())
            return true;
    }
    return (all !=  nullptr && all->has_data());
}

bool Native::Boot::System::Switch::has_operation() const
{
    for (std::size_t index=0; index<switch_number.len(); index++)
    {
        if(switch_number[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Boot::System::Switch::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/boot/system/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Boot::System::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:switch";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Boot::System::Switch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Boot::System::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch-number")
    {
        auto ent_ = std::make_shared<Native::Boot::System::Switch::SwitchNumber>();
        ent_->parent = this;
        switch_number.append(ent_);
        return ent_;
    }

    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Boot::System::Switch::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Boot::System::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : switch_number.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(all != nullptr)
    {
        _children["all"] = all;
    }

    return _children;
}

void Native::Boot::System::Switch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Boot::System::Switch::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Boot::System::Switch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch-number" || name == "all")
        return true;
    return false;
}

Native::Boot::System::Switch::SwitchNumber::SwitchNumber()
    :
    range{YType::uint8, "range"},
    flash_1_path{YType::str, "flash-1-path"},
    flash_path{YType::str, "flash-path"},
    tftp_path{YType::str, "tftp-path"}
{

    yang_name = "switch-number"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Boot::System::Switch::SwitchNumber::~SwitchNumber()
{
}

bool Native::Boot::System::Switch::SwitchNumber::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| flash_1_path.is_set
	|| flash_path.is_set
	|| tftp_path.is_set;
}

bool Native::Boot::System::Switch::SwitchNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(flash_1_path.yfilter)
	|| ydk::is_set(flash_path.yfilter)
	|| ydk::is_set(tftp_path.yfilter);
}

std::string Native::Boot::System::Switch::SwitchNumber::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/boot/system/Cisco-IOS-XE-switch:switch/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Boot::System::Switch::SwitchNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch-number";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Boot::System::Switch::SwitchNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (flash_1_path.is_set || is_set(flash_1_path.yfilter)) leaf_name_data.push_back(flash_1_path.get_name_leafdata());
    if (flash_path.is_set || is_set(flash_path.yfilter)) leaf_name_data.push_back(flash_path.get_name_leafdata());
    if (tftp_path.is_set || is_set(tftp_path.yfilter)) leaf_name_data.push_back(tftp_path.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Boot::System::Switch::SwitchNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Boot::System::Switch::SwitchNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Boot::System::Switch::SwitchNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flash-1-path")
    {
        flash_1_path = value;
        flash_1_path.value_namespace = name_space;
        flash_1_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flash-path")
    {
        flash_path = value;
        flash_path.value_namespace = name_space;
        flash_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tftp-path")
    {
        tftp_path = value;
        tftp_path.value_namespace = name_space;
        tftp_path.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Boot::System::Switch::SwitchNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "flash-1-path")
    {
        flash_1_path.yfilter = yfilter;
    }
    if(value_path == "flash-path")
    {
        flash_path.yfilter = yfilter;
    }
    if(value_path == "tftp-path")
    {
        tftp_path.yfilter = yfilter;
    }
}

bool Native::Boot::System::Switch::SwitchNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "flash-1-path" || name == "flash-path" || name == "tftp-path")
        return true;
    return false;
}

Native::Boot::System::Switch::All::All()
    :
    flash_1{YType::str, "flash-1"},
    flash{YType::str, "flash"},
    tftp{YType::str, "tftp"}
{

    yang_name = "all"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Boot::System::Switch::All::~All()
{
}

bool Native::Boot::System::Switch::All::has_data() const
{
    if (is_presence_container) return true;
    return flash_1.is_set
	|| flash.is_set
	|| tftp.is_set;
}

bool Native::Boot::System::Switch::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flash_1.yfilter)
	|| ydk::is_set(flash.yfilter)
	|| ydk::is_set(tftp.yfilter);
}

std::string Native::Boot::System::Switch::All::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/boot/system/Cisco-IOS-XE-switch:switch/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Boot::System::Switch::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Boot::System::Switch::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flash_1.is_set || is_set(flash_1.yfilter)) leaf_name_data.push_back(flash_1.get_name_leafdata());
    if (flash.is_set || is_set(flash.yfilter)) leaf_name_data.push_back(flash.get_name_leafdata());
    if (tftp.is_set || is_set(tftp.yfilter)) leaf_name_data.push_back(tftp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Boot::System::Switch::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Boot::System::Switch::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Boot::System::Switch::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flash-1")
    {
        flash_1 = value;
        flash_1.value_namespace = name_space;
        flash_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flash")
    {
        flash = value;
        flash.value_namespace = name_space;
        flash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tftp")
    {
        tftp = value;
        tftp.value_namespace = name_space;
        tftp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Boot::System::Switch::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flash-1")
    {
        flash_1.yfilter = yfilter;
    }
    if(value_path == "flash")
    {
        flash.yfilter = yfilter;
    }
    if(value_path == "tftp")
    {
        tftp.yfilter = yfilter;
    }
}

bool Native::Boot::System::Switch::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flash-1" || name == "flash" || name == "tftp")
        return true;
    return false;
}

Native::Boot::EnableBreak::EnableBreak()
    :
    switch_{YType::uint8, "switch"}
{

    yang_name = "enable-break"; yang_parent_name = "boot"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Boot::EnableBreak::~EnableBreak()
{
}

bool Native::Boot::EnableBreak::has_data() const
{
    if (is_presence_container) return true;
    return switch_.is_set;
}

bool Native::Boot::EnableBreak::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::Boot::EnableBreak::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/boot/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Boot::EnableBreak::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:enable-break";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Boot::EnableBreak::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Boot::EnableBreak::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Boot::EnableBreak::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Boot::EnableBreak::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Boot::EnableBreak::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::Boot::EnableBreak::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Boot::Manual::Manual()
    :
    switch_{YType::uint8, "switch"}
{

    yang_name = "manual"; yang_parent_name = "boot"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Boot::Manual::~Manual()
{
}

bool Native::Boot::Manual::has_data() const
{
    if (is_presence_container) return true;
    return switch_.is_set;
}

bool Native::Boot::Manual::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_.yfilter);
}

std::string Native::Boot::Manual::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/boot/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Boot::Manual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:manual";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Boot::Manual::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_.is_set || is_set(switch_.yfilter)) leaf_name_data.push_back(switch_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Boot::Manual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Boot::Manual::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Boot::Manual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch")
    {
        switch_ = value;
        switch_.value_namespace = name_space;
        switch_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Boot::Manual::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch")
    {
        switch_.yfilter = yfilter;
    }
}

bool Native::Boot::Manual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Banner::Banner()
    :
    exec(std::make_shared<Native::Banner::Exec>())
    , login(std::make_shared<Native::Banner::Login>())
    , prompt_timeout(std::make_shared<Native::Banner::PromptTimeout>())
    , motd(std::make_shared<Native::Banner::Motd>())
{
    exec->parent = this;
    login->parent = this;
    prompt_timeout->parent = this;
    motd->parent = this;

    yang_name = "banner"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Banner::~Banner()
{
}

bool Native::Banner::has_data() const
{
    if (is_presence_container) return true;
    return (exec !=  nullptr && exec->has_data())
	|| (login !=  nullptr && login->has_data())
	|| (prompt_timeout !=  nullptr && prompt_timeout->has_data())
	|| (motd !=  nullptr && motd->has_data());
}

bool Native::Banner::has_operation() const
{
    return is_set(yfilter)
	|| (exec !=  nullptr && exec->has_operation())
	|| (login !=  nullptr && login->has_operation())
	|| (prompt_timeout !=  nullptr && prompt_timeout->has_operation())
	|| (motd !=  nullptr && motd->has_operation());
}

std::string Native::Banner::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Banner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "banner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Banner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Banner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Banner::Exec>();
        }
        return exec;
    }

    if(child_yang_name == "login")
    {
        if(login == nullptr)
        {
            login = std::make_shared<Native::Banner::Login>();
        }
        return login;
    }

    if(child_yang_name == "prompt-timeout")
    {
        if(prompt_timeout == nullptr)
        {
            prompt_timeout = std::make_shared<Native::Banner::PromptTimeout>();
        }
        return prompt_timeout;
    }

    if(child_yang_name == "motd")
    {
        if(motd == nullptr)
        {
            motd = std::make_shared<Native::Banner::Motd>();
        }
        return motd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Banner::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(exec != nullptr)
    {
        _children["exec"] = exec;
    }

    if(login != nullptr)
    {
        _children["login"] = login;
    }

    if(prompt_timeout != nullptr)
    {
        _children["prompt-timeout"] = prompt_timeout;
    }

    if(motd != nullptr)
    {
        _children["motd"] = motd;
    }

    return _children;
}

void Native::Banner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Banner::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Banner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exec" || name == "login" || name == "prompt-timeout" || name == "motd")
        return true;
    return false;
}

Native::Banner::Exec::Exec()
    :
    banner{YType::str, "banner"}
{

    yang_name = "exec"; yang_parent_name = "banner"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Banner::Exec::~Exec()
{
}

bool Native::Banner::Exec::has_data() const
{
    if (is_presence_container) return true;
    return banner.is_set;
}

bool Native::Banner::Exec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(banner.yfilter);
}

std::string Native::Banner::Exec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/banner/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Banner::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Banner::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (banner.is_set || is_set(banner.yfilter)) leaf_name_data.push_back(banner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Banner::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Banner::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Banner::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "banner")
    {
        banner = value;
        banner.value_namespace = name_space;
        banner.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Banner::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "banner")
    {
        banner.yfilter = yfilter;
    }
}

bool Native::Banner::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "banner")
        return true;
    return false;
}

Native::Banner::Login::Login()
    :
    banner{YType::str, "banner"}
{

    yang_name = "login"; yang_parent_name = "banner"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Banner::Login::~Login()
{
}

bool Native::Banner::Login::has_data() const
{
    if (is_presence_container) return true;
    return banner.is_set;
}

bool Native::Banner::Login::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(banner.yfilter);
}

std::string Native::Banner::Login::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/banner/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Banner::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Banner::Login::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (banner.is_set || is_set(banner.yfilter)) leaf_name_data.push_back(banner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Banner::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Banner::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Banner::Login::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "banner")
    {
        banner = value;
        banner.value_namespace = name_space;
        banner.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Banner::Login::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "banner")
    {
        banner.yfilter = yfilter;
    }
}

bool Native::Banner::Login::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "banner")
        return true;
    return false;
}

Native::Banner::PromptTimeout::PromptTimeout()
    :
    banner{YType::str, "banner"}
{

    yang_name = "prompt-timeout"; yang_parent_name = "banner"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Banner::PromptTimeout::~PromptTimeout()
{
}

bool Native::Banner::PromptTimeout::has_data() const
{
    if (is_presence_container) return true;
    return banner.is_set;
}

bool Native::Banner::PromptTimeout::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(banner.yfilter);
}

std::string Native::Banner::PromptTimeout::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/banner/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Banner::PromptTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prompt-timeout";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Banner::PromptTimeout::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (banner.is_set || is_set(banner.yfilter)) leaf_name_data.push_back(banner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Banner::PromptTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Banner::PromptTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Banner::PromptTimeout::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "banner")
    {
        banner = value;
        banner.value_namespace = name_space;
        banner.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Banner::PromptTimeout::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "banner")
    {
        banner.yfilter = yfilter;
    }
}

bool Native::Banner::PromptTimeout::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "banner")
        return true;
    return false;
}

Native::Banner::Motd::Motd()
    :
    banner{YType::str, "banner"}
{

    yang_name = "motd"; yang_parent_name = "banner"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Banner::Motd::~Motd()
{
}

bool Native::Banner::Motd::has_data() const
{
    if (is_presence_container) return true;
    return banner.is_set;
}

bool Native::Banner::Motd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(banner.yfilter);
}

std::string Native::Banner::Motd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/banner/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Banner::Motd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "motd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Banner::Motd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (banner.is_set || is_set(banner.yfilter)) leaf_name_data.push_back(banner.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Banner::Motd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Banner::Motd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Banner::Motd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "banner")
    {
        banner = value;
        banner.value_namespace = name_space;
        banner.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Banner::Motd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "banner")
    {
        banner.yfilter = yfilter;
    }
}

bool Native::Banner::Motd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "banner")
        return true;
    return false;
}

Native::Memory::Memory()
    :
    lite{YType::empty, "lite"}
        ,
    statistics(std::make_shared<Native::Memory::Statistics>())
    , chunk(std::make_shared<Native::Memory::Chunk>())
    , free(std::make_shared<Native::Memory::Free>())
    , reserve(std::make_shared<Native::Memory::Reserve>())
    , sanity(nullptr) // presence node
{
    statistics->parent = this;
    chunk->parent = this;
    free->parent = this;
    reserve->parent = this;

    yang_name = "memory"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Memory::~Memory()
{
}

bool Native::Memory::has_data() const
{
    if (is_presence_container) return true;
    return lite.is_set
	|| (statistics !=  nullptr && statistics->has_data())
	|| (chunk !=  nullptr && chunk->has_data())
	|| (free !=  nullptr && free->has_data())
	|| (reserve !=  nullptr && reserve->has_data())
	|| (sanity !=  nullptr && sanity->has_data());
}

bool Native::Memory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lite.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (chunk !=  nullptr && chunk->has_operation())
	|| (free !=  nullptr && free->has_operation())
	|| (reserve !=  nullptr && reserve->has_operation())
	|| (sanity !=  nullptr && sanity->has_operation());
}

std::string Native::Memory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Memory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Memory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lite.is_set || is_set(lite.yfilter)) leaf_name_data.push_back(lite.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Memory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Native::Memory::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "chunk")
    {
        if(chunk == nullptr)
        {
            chunk = std::make_shared<Native::Memory::Chunk>();
        }
        return chunk;
    }

    if(child_yang_name == "free")
    {
        if(free == nullptr)
        {
            free = std::make_shared<Native::Memory::Free>();
        }
        return free;
    }

    if(child_yang_name == "reserve")
    {
        if(reserve == nullptr)
        {
            reserve = std::make_shared<Native::Memory::Reserve>();
        }
        return reserve;
    }

    if(child_yang_name == "sanity")
    {
        if(sanity == nullptr)
        {
            sanity = std::make_shared<Native::Memory::Sanity>();
        }
        return sanity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Memory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    if(chunk != nullptr)
    {
        _children["chunk"] = chunk;
    }

    if(free != nullptr)
    {
        _children["free"] = free;
    }

    if(reserve != nullptr)
    {
        _children["reserve"] = reserve;
    }

    if(sanity != nullptr)
    {
        _children["sanity"] = sanity;
    }

    return _children;
}

void Native::Memory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lite")
    {
        lite = value;
        lite.value_namespace = name_space;
        lite.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Memory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lite")
    {
        lite.yfilter = yfilter;
    }
}

bool Native::Memory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "chunk" || name == "free" || name == "reserve" || name == "sanity" || name == "lite")
        return true;
    return false;
}

Native::Memory::Statistics::Statistics()
    :
    history(std::make_shared<Native::Memory::Statistics::History>())
{
    history->parent = this;

    yang_name = "statistics"; yang_parent_name = "memory"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Memory::Statistics::~Statistics()
{
}

bool Native::Memory::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return (history !=  nullptr && history->has_data());
}

bool Native::Memory::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (history !=  nullptr && history->has_operation());
}

std::string Native::Memory::Statistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/memory/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Memory::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Memory::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Memory::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history")
    {
        if(history == nullptr)
        {
            history = std::make_shared<Native::Memory::Statistics::History>();
        }
        return history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Memory::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(history != nullptr)
    {
        _children["history"] = history;
    }

    return _children;
}

void Native::Memory::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Memory::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Memory::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history")
        return true;
    return false;
}

Native::Memory::Statistics::History::History()
    :
    table{YType::uint8, "table"}
{

    yang_name = "history"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Memory::Statistics::History::~History()
{
}

bool Native::Memory::Statistics::History::has_data() const
{
    if (is_presence_container) return true;
    return table.is_set;
}

bool Native::Memory::Statistics::History::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table.yfilter);
}

std::string Native::Memory::Statistics::History::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/memory/statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Memory::Statistics::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Memory::Statistics::History::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table.is_set || is_set(table.yfilter)) leaf_name_data.push_back(table.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Memory::Statistics::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Memory::Statistics::History::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Memory::Statistics::History::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table")
    {
        table = value;
        table.value_namespace = name_space;
        table.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Memory::Statistics::History::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table")
    {
        table.yfilter = yfilter;
    }
}

bool Native::Memory::Statistics::History::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table")
        return true;
    return false;
}

Native::Memory::Chunk::Chunk()
    :
    siblings(std::make_shared<Native::Memory::Chunk::Siblings>())
{
    siblings->parent = this;

    yang_name = "chunk"; yang_parent_name = "memory"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Memory::Chunk::~Chunk()
{
}

bool Native::Memory::Chunk::has_data() const
{
    if (is_presence_container) return true;
    return (siblings !=  nullptr && siblings->has_data());
}

bool Native::Memory::Chunk::has_operation() const
{
    return is_set(yfilter)
	|| (siblings !=  nullptr && siblings->has_operation());
}

std::string Native::Memory::Chunk::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/memory/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Memory::Chunk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chunk";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Memory::Chunk::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Memory::Chunk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "siblings")
    {
        if(siblings == nullptr)
        {
            siblings = std::make_shared<Native::Memory::Chunk::Siblings>();
        }
        return siblings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Memory::Chunk::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(siblings != nullptr)
    {
        _children["siblings"] = siblings;
    }

    return _children;
}

void Native::Memory::Chunk::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Memory::Chunk::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Memory::Chunk::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "siblings")
        return true;
    return false;
}

Native::Memory::Chunk::Siblings::Siblings()
    :
    threshold{YType::uint32, "threshold"}
{

    yang_name = "siblings"; yang_parent_name = "chunk"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Memory::Chunk::Siblings::~Siblings()
{
}

bool Native::Memory::Chunk::Siblings::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::Memory::Chunk::Siblings::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Memory::Chunk::Siblings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/memory/chunk/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Memory::Chunk::Siblings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "siblings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Memory::Chunk::Siblings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Memory::Chunk::Siblings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Memory::Chunk::Siblings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Memory::Chunk::Siblings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Memory::Chunk::Siblings::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Memory::Chunk::Siblings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Memory::Free::Free()
    :
    low_watermark(std::make_shared<Native::Memory::Free::LowWatermark>())
{
    low_watermark->parent = this;

    yang_name = "free"; yang_parent_name = "memory"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Memory::Free::~Free()
{
}

bool Native::Memory::Free::has_data() const
{
    if (is_presence_container) return true;
    return (low_watermark !=  nullptr && low_watermark->has_data());
}

bool Native::Memory::Free::has_operation() const
{
    return is_set(yfilter)
	|| (low_watermark !=  nullptr && low_watermark->has_operation());
}

std::string Native::Memory::Free::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/memory/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Memory::Free::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "free";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Memory::Free::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Memory::Free::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "low-watermark")
    {
        if(low_watermark == nullptr)
        {
            low_watermark = std::make_shared<Native::Memory::Free::LowWatermark>();
        }
        return low_watermark;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Memory::Free::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(low_watermark != nullptr)
    {
        _children["low-watermark"] = low_watermark;
    }

    return _children;
}

void Native::Memory::Free::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Memory::Free::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Memory::Free::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "low-watermark")
        return true;
    return false;
}

Native::Memory::Free::LowWatermark::LowWatermark()
    :
    io{YType::uint32, "IO"},
    processor{YType::uint32, "processor"}
{

    yang_name = "low-watermark"; yang_parent_name = "free"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Memory::Free::LowWatermark::~LowWatermark()
{
}

bool Native::Memory::Free::LowWatermark::has_data() const
{
    if (is_presence_container) return true;
    return io.is_set
	|| processor.is_set;
}

bool Native::Memory::Free::LowWatermark::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(io.yfilter)
	|| ydk::is_set(processor.yfilter);
}

std::string Native::Memory::Free::LowWatermark::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/memory/free/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Memory::Free::LowWatermark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "low-watermark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Memory::Free::LowWatermark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (io.is_set || is_set(io.yfilter)) leaf_name_data.push_back(io.get_name_leafdata());
    if (processor.is_set || is_set(processor.yfilter)) leaf_name_data.push_back(processor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Memory::Free::LowWatermark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Memory::Free::LowWatermark::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Memory::Free::LowWatermark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "IO")
    {
        io = value;
        io.value_namespace = name_space;
        io.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processor")
    {
        processor = value;
        processor.value_namespace = name_space;
        processor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Memory::Free::LowWatermark::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "IO")
    {
        io.yfilter = yfilter;
    }
    if(value_path == "processor")
    {
        processor.yfilter = yfilter;
    }
}

bool Native::Memory::Free::LowWatermark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "IO" || name == "processor")
        return true;
    return false;
}

Native::Memory::Reserve::Reserve()
    :
    critical(nullptr) // presence node
{

    yang_name = "reserve"; yang_parent_name = "memory"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Memory::Reserve::~Reserve()
{
}

bool Native::Memory::Reserve::has_data() const
{
    if (is_presence_container) return true;
    return (critical !=  nullptr && critical->has_data());
}

bool Native::Memory::Reserve::has_operation() const
{
    return is_set(yfilter)
	|| (critical !=  nullptr && critical->has_operation());
}

std::string Native::Memory::Reserve::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/memory/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Memory::Reserve::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reserve";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Memory::Reserve::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Memory::Reserve::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "critical")
    {
        if(critical == nullptr)
        {
            critical = std::make_shared<Native::Memory::Reserve::Critical>();
        }
        return critical;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Memory::Reserve::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(critical != nullptr)
    {
        _children["critical"] = critical;
    }

    return _children;
}

void Native::Memory::Reserve::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Memory::Reserve::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Memory::Reserve::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "critical")
        return true;
    return false;
}

Native::Memory::Reserve::Critical::Critical()
    :
    memory_range{YType::uint32, "memory-range"}
{

    yang_name = "critical"; yang_parent_name = "reserve"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Memory::Reserve::Critical::~Critical()
{
}

bool Native::Memory::Reserve::Critical::has_data() const
{
    if (is_presence_container) return true;
    return memory_range.is_set;
}

bool Native::Memory::Reserve::Critical::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(memory_range.yfilter);
}

std::string Native::Memory::Reserve::Critical::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/memory/reserve/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Memory::Reserve::Critical::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "critical";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Memory::Reserve::Critical::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_range.is_set || is_set(memory_range.yfilter)) leaf_name_data.push_back(memory_range.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Memory::Reserve::Critical::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Memory::Reserve::Critical::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Memory::Reserve::Critical::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "memory-range")
    {
        memory_range = value;
        memory_range.value_namespace = name_space;
        memory_range.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Memory::Reserve::Critical::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "memory-range")
    {
        memory_range.yfilter = yfilter;
    }
}

bool Native::Memory::Reserve::Critical::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "memory-range")
        return true;
    return false;
}

Native::Memory::Sanity::Sanity()
    :
    all{YType::empty, "all"},
    buffer{YType::empty, "buffer"},
    queue{YType::empty, "queue"}
{

    yang_name = "sanity"; yang_parent_name = "memory"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Memory::Sanity::~Sanity()
{
}

bool Native::Memory::Sanity::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| buffer.is_set
	|| queue.is_set;
}

bool Native::Memory::Sanity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(buffer.yfilter)
	|| ydk::is_set(queue.yfilter);
}

std::string Native::Memory::Sanity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/memory/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Memory::Sanity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sanity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Memory::Sanity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());
    if (queue.is_set || is_set(queue.yfilter)) leaf_name_data.push_back(queue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Memory::Sanity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Memory::Sanity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Memory::Sanity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queue")
    {
        queue = value;
        queue.value_namespace = name_space;
        queue.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Memory::Sanity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
    if(value_path == "queue")
    {
        queue.yfilter = yfilter;
    }
}

bool Native::Memory::Sanity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "buffer" || name == "queue")
        return true;
    return false;
}

Native::Location::Location()
    :
    civic_location(std::make_shared<Native::Location::CivicLocation>())
{
    civic_location->parent = this;

    yang_name = "location"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Location::~Location()
{
}

bool Native::Location::has_data() const
{
    if (is_presence_container) return true;
    return (civic_location !=  nullptr && civic_location->has_data());
}

bool Native::Location::has_operation() const
{
    return is_set(yfilter)
	|| (civic_location !=  nullptr && civic_location->has_operation());
}

std::string Native::Location::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "civic-location")
    {
        if(civic_location == nullptr)
        {
            civic_location = std::make_shared<Native::Location::CivicLocation>();
        }
        return civic_location;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(civic_location != nullptr)
    {
        _children["civic-location"] = civic_location;
    }

    return _children;
}

void Native::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "civic-location")
        return true;
    return false;
}

Native::Location::CivicLocation::CivicLocation()
    :
    identifier(this, {"identifier"})
{

    yang_name = "civic-location"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Location::CivicLocation::~CivicLocation()
{
}

bool Native::Location::CivicLocation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<identifier.len(); index++)
    {
        if(identifier[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Location::CivicLocation::has_operation() const
{
    for (std::size_t index=0; index<identifier.len(); index++)
    {
        if(identifier[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Location::CivicLocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/location/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Location::CivicLocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "civic-location";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Location::CivicLocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Location::CivicLocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "identifier")
    {
        auto ent_ = std::make_shared<Native::Location::CivicLocation::Identifier>();
        ent_->parent = this;
        identifier.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Location::CivicLocation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : identifier.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Location::CivicLocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Location::CivicLocation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Location::CivicLocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier")
        return true;
    return false;
}

Native::Location::CivicLocation::Identifier::Identifier()
    :
    identifier{YType::str, "identifier"},
    building{YType::str, "building"},
    floor{YType::str, "floor"},
    landmark{YType::str, "landmark"},
    name{YType::str, "name"},
    number{YType::str, "number"}
{

    yang_name = "identifier"; yang_parent_name = "civic-location"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Location::CivicLocation::Identifier::~Identifier()
{
}

bool Native::Location::CivicLocation::Identifier::has_data() const
{
    if (is_presence_container) return true;
    return identifier.is_set
	|| building.is_set
	|| floor.is_set
	|| landmark.is_set
	|| name.is_set
	|| number.is_set;
}

bool Native::Location::CivicLocation::Identifier::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(identifier.yfilter)
	|| ydk::is_set(building.yfilter)
	|| ydk::is_set(floor.yfilter)
	|| ydk::is_set(landmark.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(number.yfilter);
}

std::string Native::Location::CivicLocation::Identifier::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/location/civic-location/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Location::CivicLocation::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";
    ADD_KEY_TOKEN(identifier, "identifier");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Location::CivicLocation::Identifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identifier.is_set || is_set(identifier.yfilter)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (building.is_set || is_set(building.yfilter)) leaf_name_data.push_back(building.get_name_leafdata());
    if (floor.is_set || is_set(floor.yfilter)) leaf_name_data.push_back(floor.get_name_leafdata());
    if (landmark.is_set || is_set(landmark.yfilter)) leaf_name_data.push_back(landmark.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Location::CivicLocation::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Location::CivicLocation::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Location::CivicLocation::Identifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "identifier")
    {
        identifier = value;
        identifier.value_namespace = name_space;
        identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "building")
    {
        building = value;
        building.value_namespace = name_space;
        building.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "floor")
    {
        floor = value;
        floor.value_namespace = name_space;
        floor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "landmark")
    {
        landmark = value;
        landmark.value_namespace = name_space;
        landmark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Location::CivicLocation::Identifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "identifier")
    {
        identifier.yfilter = yfilter;
    }
    if(value_path == "building")
    {
        building.yfilter = yfilter;
    }
    if(value_path == "floor")
    {
        floor.yfilter = yfilter;
    }
    if(value_path == "landmark")
    {
        landmark.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Location::CivicLocation::Identifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "identifier" || name == "building" || name == "floor" || name == "landmark" || name == "name" || name == "number")
        return true;
    return false;
}

Native::CallHome::CallHome()
    :
    contact_email_addr{YType::str, "Cisco-IOS-XE-call-home:contact-email-addr"}
        ,
    source_interface(std::make_shared<Native::CallHome::SourceInterface>())
    , http_proxy(std::make_shared<Native::CallHome::HttpProxy>())
    , profile(this, {"profile_name"})
{
    source_interface->parent = this;
    http_proxy->parent = this;

    yang_name = "call-home"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::CallHome::~CallHome()
{
}

bool Native::CallHome::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    return contact_email_addr.is_set
	|| (source_interface !=  nullptr && source_interface->has_data())
	|| (http_proxy !=  nullptr && http_proxy->has_data());
}

bool Native::CallHome::has_operation() const
{
    for (std::size_t index=0; index<profile.len(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(contact_email_addr.yfilter)
	|| (source_interface !=  nullptr && source_interface->has_operation())
	|| (http_proxy !=  nullptr && http_proxy->has_operation());
}

std::string Native::CallHome::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CallHome::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "call-home";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (contact_email_addr.is_set || is_set(contact_email_addr.yfilter)) leaf_name_data.push_back(contact_email_addr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::CallHome::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-call-home:source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::CallHome::SourceInterface>();
        }
        return source_interface;
    }

    if(child_yang_name == "Cisco-IOS-XE-call-home:http-proxy")
    {
        if(http_proxy == nullptr)
        {
            http_proxy = std::make_shared<Native::CallHome::HttpProxy>();
        }
        return http_proxy;
    }

    if(child_yang_name == "Cisco-IOS-XE-call-home:profile")
    {
        auto ent_ = std::make_shared<Native::CallHome::Profile>();
        ent_->parent = this;
        profile.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::CallHome::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_interface != nullptr)
    {
        _children["Cisco-IOS-XE-call-home:source-interface"] = source_interface;
    }

    if(http_proxy != nullptr)
    {
        _children["Cisco-IOS-XE-call-home:http-proxy"] = http_proxy;
    }

    count_ = 0;
    for (auto ent_ : profile.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::CallHome::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Cisco-IOS-XE-call-home:contact-email-addr")
    {
        contact_email_addr = value;
        contact_email_addr.value_namespace = name_space;
        contact_email_addr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "contact-email-addr")
    {
        contact_email_addr.yfilter = yfilter;
    }
}

bool Native::CallHome::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-interface" || name == "http-proxy" || name == "profile" || name == "contact-email-addr")
        return true;
    return false;
}

Native::CallHome::SourceInterface::SourceInterface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    ethernet{YType::str, "Ethernet"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    fivegigabitethernet{YType::str, "FiveGigabitEthernet"},
    twentyfivegige{YType::str, "TwentyFiveGigE"},
    twogigabitethernet{YType::str, "TwoGigabitEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    hundredgige{YType::str, "HundredGigE"},
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
    atm_subinterface(std::make_shared<Native::CallHome::SourceInterface::ATMSubinterface>())
    , atm_acrsubinterface(std::make_shared<Native::CallHome::SourceInterface::ATMACRsubinterface>())
    , lisp_subinterface(std::make_shared<Native::CallHome::SourceInterface::LISPSubinterface>())
    , port_channel_subinterface(std::make_shared<Native::CallHome::SourceInterface::PortChannelSubinterface>())
{
    atm_subinterface->parent = this;
    atm_acrsubinterface->parent = this;
    lisp_subinterface->parent = this;
    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "call-home"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::CallHome::SourceInterface::~SourceInterface()
{
}

bool Native::CallHome::SourceInterface::has_data() const
{
    if (is_presence_container) return true;
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| ethernet.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| fivegigabitethernet.is_set
	|| twentyfivegige.is_set
	|| twogigabitethernet.is_set
	|| fortygigabitethernet.is_set
	|| hundredgige.is_set
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

bool Native::CallHome::SourceInterface::has_operation() const
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
	|| ydk::is_set(ethernet.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(fivegigabitethernet.yfilter)
	|| ydk::is_set(twentyfivegige.yfilter)
	|| ydk::is_set(twogigabitethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(hundredgige.yfilter)
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

std::string Native::CallHome::SourceInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/call-home/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CallHome::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-call-home:source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::SourceInterface::get_name_leaf_data() const
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
    if (ethernet.is_set || is_set(ethernet.yfilter)) leaf_name_data.push_back(ethernet.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (fivegigabitethernet.is_set || is_set(fivegigabitethernet.yfilter)) leaf_name_data.push_back(fivegigabitethernet.get_name_leafdata());
    if (twentyfivegige.is_set || is_set(twentyfivegige.yfilter)) leaf_name_data.push_back(twentyfivegige.get_name_leafdata());
    if (twogigabitethernet.is_set || is_set(twogigabitethernet.yfilter)) leaf_name_data.push_back(twogigabitethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (hundredgige.is_set || is_set(hundredgige.yfilter)) leaf_name_data.push_back(hundredgige.get_name_leafdata());
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

std::shared_ptr<ydk::Entity> Native::CallHome::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::CallHome::SourceInterface::ATMSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::CallHome::SourceInterface::ATMACRsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::CallHome::SourceInterface::LISPSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::CallHome::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::CallHome::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(atm_subinterface != nullptr)
    {
        _children["ATM-subinterface"] = atm_subinterface;
    }

    if(atm_acrsubinterface != nullptr)
    {
        _children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        _children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        _children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return _children;
}

void Native::CallHome::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "Ethernet")
    {
        ethernet = value;
        ethernet.value_namespace = name_space;
        ethernet.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige = value;
        twentyfivegige.value_namespace = name_space;
        twentyfivegige.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet = value;
        twogigabitethernet.value_namespace = name_space;
        twogigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige = value;
        hundredgige.value_namespace = name_space;
        hundredgige.value_namespace_prefix = name_space_prefix;
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

void Native::CallHome::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "Ethernet")
    {
        ethernet.yfilter = yfilter;
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
    if(value_path == "TwentyFiveGigE")
    {
        twentyfivegige.yfilter = yfilter;
    }
    if(value_path == "TwoGigabitEthernet")
    {
        twogigabitethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "HundredGigE")
    {
        hundredgige.yfilter = yfilter;
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

bool Native::CallHome::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-subinterface" || name == "ATM-ACRsubinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "Ethernet" || name == "FastEthernet" || name == "GigabitEthernet" || name == "FiveGigabitEthernet" || name == "TwentyFiveGigE" || name == "TwoGigabitEthernet" || name == "FortyGigabitEthernet" || name == "HundredGigE" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "SM" || name == "Cellular" || name == "Serial" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "Virtual-Template" || name == "Vlan" || name == "VirtualPortGroup" || name == "vasileft" || name == "vasiright")
        return true;
    return false;
}

Native::CallHome::SourceInterface::ATMSubinterface::ATMSubinterface()
    :
    atm{YType::str, "ATM"}
{

    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::CallHome::SourceInterface::ATMSubinterface::~ATMSubinterface()
{
}

bool Native::CallHome::SourceInterface::ATMSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm.is_set;
}

bool Native::CallHome::SourceInterface::ATMSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::CallHome::SourceInterface::ATMSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/call-home/Cisco-IOS-XE-call-home:source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CallHome::SourceInterface::ATMSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::SourceInterface::ATMSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::CallHome::SourceInterface::ATMSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::CallHome::SourceInterface::ATMSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::CallHome::SourceInterface::ATMSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::SourceInterface::ATMSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::CallHome::SourceInterface::ATMSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::CallHome::SourceInterface::ATMACRsubinterface::ATMACRsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{

    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::CallHome::SourceInterface::ATMACRsubinterface::~ATMACRsubinterface()
{
}

bool Native::CallHome::SourceInterface::ATMACRsubinterface::has_data() const
{
    if (is_presence_container) return true;
    return atm_acr.is_set;
}

bool Native::CallHome::SourceInterface::ATMACRsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::CallHome::SourceInterface::ATMACRsubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/call-home/Cisco-IOS-XE-call-home:source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CallHome::SourceInterface::ATMACRsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::SourceInterface::ATMACRsubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::CallHome::SourceInterface::ATMACRsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::CallHome::SourceInterface::ATMACRsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::CallHome::SourceInterface::ATMACRsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::SourceInterface::ATMACRsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::CallHome::SourceInterface::ATMACRsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::CallHome::SourceInterface::LISPSubinterface::LISPSubinterface()
    :
    lisp{YType::str, "LISP"}
{

    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::CallHome::SourceInterface::LISPSubinterface::~LISPSubinterface()
{
}

bool Native::CallHome::SourceInterface::LISPSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return lisp.is_set;
}

bool Native::CallHome::SourceInterface::LISPSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::CallHome::SourceInterface::LISPSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/call-home/Cisco-IOS-XE-call-home:source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CallHome::SourceInterface::LISPSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::SourceInterface::LISPSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::CallHome::SourceInterface::LISPSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::CallHome::SourceInterface::LISPSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::CallHome::SourceInterface::LISPSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::SourceInterface::LISPSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::CallHome::SourceInterface::LISPSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::CallHome::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{

    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::CallHome::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::CallHome::SourceInterface::PortChannelSubinterface::has_data() const
{
    if (is_presence_container) return true;
    return port_channel.is_set;
}

bool Native::CallHome::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::CallHome::SourceInterface::PortChannelSubinterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/call-home/Cisco-IOS-XE-call-home:source-interface/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CallHome::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::SourceInterface::PortChannelSubinterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::CallHome::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::CallHome::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::CallHome::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::SourceInterface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::CallHome::SourceInterface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::CallHome::HttpProxy::HttpProxy()
    :
    proxy_servers(this, {"proxy_server"})
{

    yang_name = "http-proxy"; yang_parent_name = "call-home"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::CallHome::HttpProxy::~HttpProxy()
{
}

bool Native::CallHome::HttpProxy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<proxy_servers.len(); index++)
    {
        if(proxy_servers[index]->has_data())
            return true;
    }
    return false;
}

bool Native::CallHome::HttpProxy::has_operation() const
{
    for (std::size_t index=0; index<proxy_servers.len(); index++)
    {
        if(proxy_servers[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::CallHome::HttpProxy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/call-home/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CallHome::HttpProxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-call-home:http-proxy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::HttpProxy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::CallHome::HttpProxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "proxy-servers")
    {
        auto ent_ = std::make_shared<Native::CallHome::HttpProxy::ProxyServers>();
        ent_->parent = this;
        proxy_servers.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::CallHome::HttpProxy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : proxy_servers.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::CallHome::HttpProxy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CallHome::HttpProxy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CallHome::HttpProxy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proxy-servers")
        return true;
    return false;
}

Native::CallHome::HttpProxy::ProxyServers::ProxyServers()
    :
    proxy_server{YType::str, "proxy-server"},
    port{YType::uint16, "port"}
{

    yang_name = "proxy-servers"; yang_parent_name = "http-proxy"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::CallHome::HttpProxy::ProxyServers::~ProxyServers()
{
}

bool Native::CallHome::HttpProxy::ProxyServers::has_data() const
{
    if (is_presence_container) return true;
    return proxy_server.is_set
	|| port.is_set;
}

bool Native::CallHome::HttpProxy::ProxyServers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proxy_server.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::CallHome::HttpProxy::ProxyServers::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/call-home/Cisco-IOS-XE-call-home:http-proxy/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CallHome::HttpProxy::ProxyServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-servers";
    ADD_KEY_TOKEN(proxy_server, "proxy-server");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::HttpProxy::ProxyServers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proxy_server.is_set || is_set(proxy_server.yfilter)) leaf_name_data.push_back(proxy_server.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::CallHome::HttpProxy::ProxyServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::CallHome::HttpProxy::ProxyServers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::CallHome::HttpProxy::ProxyServers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proxy-server")
    {
        proxy_server = value;
        proxy_server.value_namespace = name_space;
        proxy_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::HttpProxy::ProxyServers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proxy-server")
    {
        proxy_server.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::CallHome::HttpProxy::ProxyServers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proxy-server" || name == "port")
        return true;
    return false;
}

Native::CallHome::Profile::Profile()
    :
    profile_name{YType::str, "profile-name"},
    active{YType::boolean, "active"}
        ,
    destination(std::make_shared<Native::CallHome::Profile::Destination>())
    , subscribe_to_alert_group(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup>())
{
    destination->parent = this;
    subscribe_to_alert_group->parent = this;

    yang_name = "profile"; yang_parent_name = "call-home"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::CallHome::Profile::~Profile()
{
}

bool Native::CallHome::Profile::has_data() const
{
    if (is_presence_container) return true;
    return profile_name.is_set
	|| active.is_set
	|| (destination !=  nullptr && destination->has_data())
	|| (subscribe_to_alert_group !=  nullptr && subscribe_to_alert_group->has_data());
}

bool Native::CallHome::Profile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter)
	|| ydk::is_set(active.yfilter)
	|| (destination !=  nullptr && destination->has_operation())
	|| (subscribe_to_alert_group !=  nullptr && subscribe_to_alert_group->has_operation());
}

std::string Native::CallHome::Profile::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/call-home/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::CallHome::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-call-home:profile";
    ADD_KEY_TOKEN(profile_name, "profile-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());
    if (active.is_set || is_set(active.yfilter)) leaf_name_data.push_back(active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::CallHome::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        if(destination == nullptr)
        {
            destination = std::make_shared<Native::CallHome::Profile::Destination>();
        }
        return destination;
    }

    if(child_yang_name == "subscribe-to-alert-group")
    {
        if(subscribe_to_alert_group == nullptr)
        {
            subscribe_to_alert_group = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup>();
        }
        return subscribe_to_alert_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::CallHome::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(destination != nullptr)
    {
        _children["destination"] = destination;
    }

    if(subscribe_to_alert_group != nullptr)
    {
        _children["subscribe-to-alert-group"] = subscribe_to_alert_group;
    }

    return _children;
}

void Native::CallHome::Profile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active")
    {
        active = value;
        active.value_namespace = name_space;
        active.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
    if(value_path == "active")
    {
        active.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination" || name == "subscribe-to-alert-group" || name == "profile-name" || name == "active")
        return true;
    return false;
}

Native::CallHome::Profile::Destination::Destination()
    :
    transport_method{YType::enumeration, "transport-method"}
        ,
    address(std::make_shared<Native::CallHome::Profile::Destination::Address>())
{
    address->parent = this;

    yang_name = "destination"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::CallHome::Profile::Destination::~Destination()
{
}

bool Native::CallHome::Profile::Destination::has_data() const
{
    if (is_presence_container) return true;
    return transport_method.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::CallHome::Profile::Destination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transport_method.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::CallHome::Profile::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::Destination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport_method.is_set || is_set(transport_method.yfilter)) leaf_name_data.push_back(transport_method.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::CallHome::Profile::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::CallHome::Profile::Destination::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::CallHome::Profile::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(address != nullptr)
    {
        _children["address"] = address;
    }

    return _children;
}

void Native::CallHome::Profile::Destination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transport-method")
    {
        transport_method = value;
        transport_method.value_namespace = name_space;
        transport_method.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::Destination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport-method")
    {
        transport_method.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::Destination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "transport-method")
        return true;
    return false;
}

Native::CallHome::Profile::Destination::Address::Address()
    :
    email{YType::str, "email"},
    http{YType::str, "http"}
{

    yang_name = "address"; yang_parent_name = "destination"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::CallHome::Profile::Destination::Address::~Address()
{
}

bool Native::CallHome::Profile::Destination::Address::has_data() const
{
    if (is_presence_container) return true;
    return email.is_set
	|| http.is_set;
}

bool Native::CallHome::Profile::Destination::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(email.yfilter)
	|| ydk::is_set(http.yfilter);
}

std::string Native::CallHome::Profile::Destination::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::Destination::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (email.is_set || is_set(email.yfilter)) leaf_name_data.push_back(email.get_name_leafdata());
    if (http.is_set || is_set(http.yfilter)) leaf_name_data.push_back(http.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::CallHome::Profile::Destination::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::CallHome::Profile::Destination::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::CallHome::Profile::Destination::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "email")
    {
        email = value;
        email.value_namespace = name_space;
        email.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "http")
    {
        http = value;
        http.value_namespace = name_space;
        http.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::Destination::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "email")
    {
        email.yfilter = yfilter;
    }
    if(value_path == "http")
    {
        http.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::Destination::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "email" || name == "http")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::SubscribeToAlertGroup()
    :
    diagnostic(nullptr) // presence node
    , environment(nullptr) // presence node
    , inventory(nullptr) // presence node
    , syslog(nullptr) // presence node
    , configuration(nullptr) // presence node
{

    yang_name = "subscribe-to-alert-group"; yang_parent_name = "profile"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::CallHome::Profile::SubscribeToAlertGroup::~SubscribeToAlertGroup()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::has_data() const
{
    if (is_presence_container) return true;
    return (diagnostic !=  nullptr && diagnostic->has_data())
	|| (environment !=  nullptr && environment->has_data())
	|| (inventory !=  nullptr && inventory->has_data())
	|| (syslog !=  nullptr && syslog->has_data())
	|| (configuration !=  nullptr && configuration->has_data());
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::has_operation() const
{
    return is_set(yfilter)
	|| (diagnostic !=  nullptr && diagnostic->has_operation())
	|| (environment !=  nullptr && environment->has_operation())
	|| (inventory !=  nullptr && inventory->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation());
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscribe-to-alert-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::CallHome::Profile::SubscribeToAlertGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "diagnostic")
    {
        if(diagnostic == nullptr)
        {
            diagnostic = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic>();
        }
        return diagnostic;
    }

    if(child_yang_name == "environment")
    {
        if(environment == nullptr)
        {
            environment = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Environment>();
        }
        return environment;
    }

    if(child_yang_name == "inventory")
    {
        if(inventory == nullptr)
        {
            inventory = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Inventory>();
        }
        return inventory;
    }

    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Syslog>();
        }
        return syslog;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Configuration>();
        }
        return configuration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(diagnostic != nullptr)
    {
        _children["diagnostic"] = diagnostic;
    }

    if(environment != nullptr)
    {
        _children["environment"] = environment;
    }

    if(inventory != nullptr)
    {
        _children["inventory"] = inventory;
    }

    if(syslog != nullptr)
    {
        _children["syslog"] = syslog;
    }

    if(configuration != nullptr)
    {
        _children["configuration"] = configuration;
    }

    return _children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CallHome::Profile::SubscribeToAlertGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "diagnostic" || name == "environment" || name == "inventory" || name == "syslog" || name == "configuration")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Diagnostic()
    :
    severity{YType::enumeration, "severity"}
{

    yang_name = "diagnostic"; yang_parent_name = "subscribe-to-alert-group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::~Diagnostic()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::has_data() const
{
    if (is_presence_container) return true;
    return severity.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diagnostic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "severity")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Environment()
    :
    severity{YType::enumeration, "severity"}
{

    yang_name = "environment"; yang_parent_name = "subscribe-to-alert-group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Environment::~Environment()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Environment::has_data() const
{
    if (is_presence_container) return true;
    return severity.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Environment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(severity.yfilter);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Environment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "environment";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Environment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.yfilter)) leaf_name_data.push_back(severity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Environment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Environment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Environment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "severity")
    {
        severity = value;
        severity.value_namespace = name_space;
        severity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Environment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "severity")
    {
        severity.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Environment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "severity")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Inventory()
    :
    periodic(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic>())
{
    periodic->parent = this;

    yang_name = "inventory"; yang_parent_name = "subscribe-to-alert-group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::~Inventory()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::has_data() const
{
    if (is_presence_container) return true;
    return (periodic !=  nullptr && periodic->has_data());
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::has_operation() const
{
    return is_set(yfilter)
	|| (periodic !=  nullptr && periodic->has_operation());
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inventory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "periodic")
    {
        if(periodic == nullptr)
        {
            periodic = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic>();
        }
        return periodic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(periodic != nullptr)
    {
        _children["periodic"] = periodic;
    }

    return _children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "periodic")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Periodic()
    :
    daily(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily>())
    , monthly(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly>())
    , weekly(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly>())
{
    daily->parent = this;
    monthly->parent = this;
    weekly->parent = this;

    yang_name = "periodic"; yang_parent_name = "inventory"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::~Periodic()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::has_data() const
{
    if (is_presence_container) return true;
    return (daily !=  nullptr && daily->has_data())
	|| (monthly !=  nullptr && monthly->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (monthly !=  nullptr && monthly->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "periodic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "monthly")
    {
        if(monthly == nullptr)
        {
            monthly = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly>();
        }
        return monthly;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(daily != nullptr)
    {
        _children["daily"] = daily;
    }

    if(monthly != nullptr)
    {
        _children["monthly"] = monthly;
    }

    if(weekly != nullptr)
    {
        _children["weekly"] = weekly;
    }

    return _children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "monthly" || name == "weekly")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::Daily()
    :
    begin_time{YType::str, "begin-time"}
{

    yang_name = "daily"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::~Daily()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::has_data() const
{
    if (is_presence_container) return true;
    return begin_time.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(begin_time.yfilter);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (begin_time.is_set || is_set(begin_time.yfilter)) leaf_name_data.push_back(begin_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "begin-time")
    {
        begin_time = value;
        begin_time.value_namespace = name_space;
        begin_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "begin-time")
    {
        begin_time.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "begin-time")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::Monthly()
    :
    date{YType::uint8, "date"},
    begin_time{YType::str, "begin-time"}
{

    yang_name = "monthly"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::~Monthly()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::has_data() const
{
    if (is_presence_container) return true;
    return date.is_set
	|| begin_time.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(date.yfilter)
	|| ydk::is_set(begin_time.yfilter);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monthly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date.is_set || is_set(date.yfilter)) leaf_name_data.push_back(date.get_name_leafdata());
    if (begin_time.is_set || is_set(begin_time.yfilter)) leaf_name_data.push_back(begin_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "date")
    {
        date = value;
        date.value_namespace = name_space;
        date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "begin-time")
    {
        begin_time = value;
        begin_time.value_namespace = name_space;
        begin_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "date")
    {
        date.yfilter = yfilter;
    }
    if(value_path == "begin-time")
    {
        begin_time.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Monthly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "date" || name == "begin-time")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    begin_time{YType::str, "begin-time"}
{

    yang_name = "weekly"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::~Weekly()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::has_data() const
{
    if (is_presence_container) return true;
    return day.is_set
	|| begin_time.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(begin_time.yfilter);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (begin_time.is_set || is_set(begin_time.yfilter)) leaf_name_data.push_back(begin_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "begin-time")
    {
        begin_time = value;
        begin_time.value_namespace = name_space;
        begin_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "begin-time")
    {
        begin_time.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Inventory::Periodic::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "begin-time")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Syslog()
    :
    severity(this, {"value_"})
{

    yang_name = "syslog"; yang_parent_name = "subscribe-to-alert-group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::~Syslog()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<severity.len(); index++)
    {
        if(severity[index]->has_data())
            return true;
    }
    return false;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::has_operation() const
{
    for (std::size_t index=0; index<severity.len(); index++)
    {
        if(severity[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "severity")
    {
        auto ent_ = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity>();
        ent_->parent = this;
        severity.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : severity.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "severity")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Severity()
    :
    value_{YType::enumeration, "value"},
    pattern{YType::str, "pattern"}
{

    yang_name = "severity"; yang_parent_name = "syslog"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::~Severity()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| pattern.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(pattern.yfilter);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "severity";
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (pattern.is_set || is_set(pattern.yfilter)) leaf_name_data.push_back(pattern.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pattern")
    {
        pattern = value;
        pattern.value_namespace = name_space;
        pattern.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "pattern")
    {
        pattern.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "pattern")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Configuration()
    :
    periodic(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic>())
{
    periodic->parent = this;

    yang_name = "configuration"; yang_parent_name = "subscribe-to-alert-group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::~Configuration()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::has_data() const
{
    if (is_presence_container) return true;
    return (periodic !=  nullptr && periodic->has_data());
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| (periodic !=  nullptr && periodic->has_operation());
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "periodic")
    {
        if(periodic == nullptr)
        {
            periodic = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic>();
        }
        return periodic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(periodic != nullptr)
    {
        _children["periodic"] = periodic;
    }

    return _children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "periodic")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Periodic()
    :
    daily(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily>())
    , monthly(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly>())
    , weekly(std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly>())
{
    daily->parent = this;
    monthly->parent = this;
    weekly->parent = this;

    yang_name = "periodic"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::~Periodic()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::has_data() const
{
    if (is_presence_container) return true;
    return (daily !=  nullptr && daily->has_data())
	|| (monthly !=  nullptr && monthly->has_data())
	|| (weekly !=  nullptr && weekly->has_data());
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::has_operation() const
{
    return is_set(yfilter)
	|| (daily !=  nullptr && daily->has_operation())
	|| (monthly !=  nullptr && monthly->has_operation())
	|| (weekly !=  nullptr && weekly->has_operation());
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "periodic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "daily")
    {
        if(daily == nullptr)
        {
            daily = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily>();
        }
        return daily;
    }

    if(child_yang_name == "monthly")
    {
        if(monthly == nullptr)
        {
            monthly = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly>();
        }
        return monthly;
    }

    if(child_yang_name == "weekly")
    {
        if(weekly == nullptr)
        {
            weekly = std::make_shared<Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly>();
        }
        return weekly;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(daily != nullptr)
    {
        _children["daily"] = daily;
    }

    if(monthly != nullptr)
    {
        _children["monthly"] = monthly;
    }

    if(weekly != nullptr)
    {
        _children["weekly"] = weekly;
    }

    return _children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "daily" || name == "monthly" || name == "weekly")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::Daily()
    :
    begin_time{YType::str, "begin-time"}
{

    yang_name = "daily"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::~Daily()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::has_data() const
{
    if (is_presence_container) return true;
    return begin_time.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(begin_time.yfilter);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "daily";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (begin_time.is_set || is_set(begin_time.yfilter)) leaf_name_data.push_back(begin_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "begin-time")
    {
        begin_time = value;
        begin_time.value_namespace = name_space;
        begin_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "begin-time")
    {
        begin_time.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Daily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "begin-time")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::Monthly()
    :
    date{YType::uint8, "date"},
    begin_time{YType::str, "begin-time"}
{

    yang_name = "monthly"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::~Monthly()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::has_data() const
{
    if (is_presence_container) return true;
    return date.is_set
	|| begin_time.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(date.yfilter)
	|| ydk::is_set(begin_time.yfilter);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monthly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (date.is_set || is_set(date.yfilter)) leaf_name_data.push_back(date.get_name_leafdata());
    if (begin_time.is_set || is_set(begin_time.yfilter)) leaf_name_data.push_back(begin_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "date")
    {
        date = value;
        date.value_namespace = name_space;
        date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "begin-time")
    {
        begin_time = value;
        begin_time.value_namespace = name_space;
        begin_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "date")
    {
        date.yfilter = yfilter;
    }
    if(value_path == "begin-time")
    {
        begin_time.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Monthly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "date" || name == "begin-time")
        return true;
    return false;
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::Weekly()
    :
    day{YType::enumeration, "day"},
    begin_time{YType::str, "begin-time"}
{

    yang_name = "weekly"; yang_parent_name = "periodic"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::~Weekly()
{
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::has_data() const
{
    if (is_presence_container) return true;
    return day.is_set
	|| begin_time.is_set;
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(day.yfilter)
	|| ydk::is_set(begin_time.yfilter);
}

std::string Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weekly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (day.is_set || is_set(day.yfilter)) leaf_name_data.push_back(day.get_name_leafdata());
    if (begin_time.is_set || is_set(begin_time.yfilter)) leaf_name_data.push_back(begin_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "day")
    {
        day = value;
        day.value_namespace = name_space;
        day.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "begin-time")
    {
        begin_time = value;
        begin_time.value_namespace = name_space;
        begin_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "day")
    {
        day.yfilter = yfilter;
    }
    if(value_path == "begin-time")
    {
        begin_time.yfilter = yfilter;
    }
}

bool Native::CallHome::Profile::SubscribeToAlertGroup::Configuration::Periodic::Weekly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "day" || name == "begin-time")
        return true;
    return false;
}

Native::HwModule::HwModule()
    :
    sm{YType::uint8, "sm"},
    pvdm{YType::str, "pvdm"}
        ,
    uplink(std::make_shared<Native::HwModule::Uplink>())
    , switch_(this, {"switch_number"})
    , slot(this, {"name"})
{
    uplink->parent = this;

    yang_name = "hw-module"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::HwModule::~HwModule()
{
}

bool Native::HwModule::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<switch_.len(); index++)
    {
        if(switch_[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<slot.len(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return sm.is_set
	|| pvdm.is_set
	|| (uplink !=  nullptr && uplink->has_data());
}

bool Native::HwModule::has_operation() const
{
    for (std::size_t index=0; index<switch_.len(); index++)
    {
        if(switch_[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<slot.len(); index++)
    {
        if(slot[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(pvdm.yfilter)
	|| (uplink !=  nullptr && uplink->has_operation());
}

std::string Native::HwModule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::HwModule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-module";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::HwModule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (pvdm.is_set || is_set(pvdm.yfilter)) leaf_name_data.push_back(pvdm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::HwModule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uplink")
    {
        if(uplink == nullptr)
        {
            uplink = std::make_shared<Native::HwModule::Uplink>();
        }
        return uplink;
    }

    if(child_yang_name == "switch")
    {
        auto ent_ = std::make_shared<Native::HwModule::Switch>();
        ent_->parent = this;
        switch_.append(ent_);
        return ent_;
    }

    if(child_yang_name == "slot")
    {
        auto ent_ = std::make_shared<Native::HwModule::Slot>();
        ent_->parent = this;
        slot.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::HwModule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(uplink != nullptr)
    {
        _children["uplink"] = uplink;
    }

    count_ = 0;
    for (auto ent_ : switch_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : slot.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::HwModule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sm")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pvdm")
    {
        pvdm = value;
        pvdm.value_namespace = name_space;
        pvdm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::HwModule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sm")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "pvdm")
    {
        pvdm.yfilter = yfilter;
    }
}

bool Native::HwModule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uplink" || name == "switch" || name == "slot" || name == "sm" || name == "pvdm")
        return true;
    return false;
}

Native::HwModule::Uplink::Uplink()
    :
    select{YType::str, "select"},
    mode{YType::enumeration, "mode"}
{

    yang_name = "uplink"; yang_parent_name = "hw-module"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::HwModule::Uplink::~Uplink()
{
}

bool Native::HwModule::Uplink::has_data() const
{
    if (is_presence_container) return true;
    return select.is_set
	|| mode.is_set;
}

bool Native::HwModule::Uplink::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(select.yfilter)
	|| ydk::is_set(mode.yfilter);
}

std::string Native::HwModule::Uplink::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/hw-module/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::HwModule::Uplink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uplink";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::HwModule::Uplink::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (select.is_set || is_set(select.yfilter)) leaf_name_data.push_back(select.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::HwModule::Uplink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::HwModule::Uplink::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::HwModule::Uplink::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "select")
    {
        select = value;
        select.value_namespace = name_space;
        select.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::HwModule::Uplink::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "select")
    {
        select.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::HwModule::Uplink::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "select" || name == "mode")
        return true;
    return false;
}

Native::HwModule::Switch::Switch()
    :
    switch_number{YType::uint8, "switch-number"}
        ,
    usbflash1(std::make_shared<Native::HwModule::Switch::Usbflash1>())
{
    usbflash1->parent = this;

    yang_name = "switch"; yang_parent_name = "hw-module"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::HwModule::Switch::~Switch()
{
}

bool Native::HwModule::Switch::has_data() const
{
    if (is_presence_container) return true;
    return switch_number.is_set
	|| (usbflash1 !=  nullptr && usbflash1->has_data());
}

bool Native::HwModule::Switch::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(switch_number.yfilter)
	|| (usbflash1 !=  nullptr && usbflash1->has_operation());
}

std::string Native::HwModule::Switch::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/hw-module/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::HwModule::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";
    ADD_KEY_TOKEN(switch_number, "switch-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::HwModule::Switch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switch_number.is_set || is_set(switch_number.yfilter)) leaf_name_data.push_back(switch_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::HwModule::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "usbflash1")
    {
        if(usbflash1 == nullptr)
        {
            usbflash1 = std::make_shared<Native::HwModule::Switch::Usbflash1>();
        }
        return usbflash1;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::HwModule::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(usbflash1 != nullptr)
    {
        _children["usbflash1"] = usbflash1;
    }

    return _children;
}

void Native::HwModule::Switch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "switch-number")
    {
        switch_number = value;
        switch_number.value_namespace = name_space;
        switch_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::HwModule::Switch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "switch-number")
    {
        switch_number.yfilter = yfilter;
    }
}

bool Native::HwModule::Switch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "usbflash1" || name == "switch-number")
        return true;
    return false;
}

Native::HwModule::Switch::Usbflash1::Usbflash1()
    :
    security(std::make_shared<Native::HwModule::Switch::Usbflash1::Security>())
{
    security->parent = this;

    yang_name = "usbflash1"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::HwModule::Switch::Usbflash1::~Usbflash1()
{
}

bool Native::HwModule::Switch::Usbflash1::has_data() const
{
    if (is_presence_container) return true;
    return (security !=  nullptr && security->has_data());
}

bool Native::HwModule::Switch::Usbflash1::has_operation() const
{
    return is_set(yfilter)
	|| (security !=  nullptr && security->has_operation());
}

std::string Native::HwModule::Switch::Usbflash1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "usbflash1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::HwModule::Switch::Usbflash1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::HwModule::Switch::Usbflash1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "security")
    {
        if(security == nullptr)
        {
            security = std::make_shared<Native::HwModule::Switch::Usbflash1::Security>();
        }
        return security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::HwModule::Switch::Usbflash1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(security != nullptr)
    {
        _children["security"] = security;
    }

    return _children;
}

void Native::HwModule::Switch::Usbflash1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::HwModule::Switch::Usbflash1::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::HwModule::Switch::Usbflash1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "security")
        return true;
    return false;
}

Native::HwModule::Switch::Usbflash1::Security::Security()
    :
    enable(nullptr) // presence node
{

    yang_name = "security"; yang_parent_name = "usbflash1"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::HwModule::Switch::Usbflash1::Security::~Security()
{
}

bool Native::HwModule::Switch::Usbflash1::Security::has_data() const
{
    if (is_presence_container) return true;
    return (enable !=  nullptr && enable->has_data());
}

bool Native::HwModule::Switch::Usbflash1::Security::has_operation() const
{
    return is_set(yfilter)
	|| (enable !=  nullptr && enable->has_operation());
}

std::string Native::HwModule::Switch::Usbflash1::Security::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "security";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::HwModule::Switch::Usbflash1::Security::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::HwModule::Switch::Usbflash1::Security::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::HwModule::Switch::Usbflash1::Security::Enable>();
        }
        return enable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::HwModule::Switch::Usbflash1::Security::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(enable != nullptr)
    {
        _children["enable"] = enable;
    }

    return _children;
}

void Native::HwModule::Switch::Usbflash1::Security::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::HwModule::Switch::Usbflash1::Security::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::HwModule::Switch::Usbflash1::Security::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::HwModule::Switch::Usbflash1::Security::Enable::Enable()
    :
    password{YType::str, "password"}
{

    yang_name = "enable"; yang_parent_name = "security"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::HwModule::Switch::Usbflash1::Security::Enable::~Enable()
{
}

bool Native::HwModule::Switch::Usbflash1::Security::Enable::has_data() const
{
    if (is_presence_container) return true;
    return password.is_set;
}

bool Native::HwModule::Switch::Usbflash1::Security::Enable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::HwModule::Switch::Usbflash1::Security::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::HwModule::Switch::Usbflash1::Security::Enable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::HwModule::Switch::Usbflash1::Security::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::HwModule::Switch::Usbflash1::Security::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::HwModule::Switch::Usbflash1::Security::Enable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::HwModule::Switch::Usbflash1::Security::Enable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::HwModule::Switch::Usbflash1::Security::Enable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password")
        return true;
    return false;
}

Native::HwModule::Slot::Slot()
    :
    name{YType::str, "name"},
    shutdown{YType::empty, "shutdown"}
{

    yang_name = "slot"; yang_parent_name = "hw-module"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::HwModule::Slot::~Slot()
{
}

bool Native::HwModule::Slot::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| shutdown.is_set;
}

bool Native::HwModule::Slot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(shutdown.yfilter);
}

std::string Native::HwModule::Slot::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/hw-module/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::HwModule::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::HwModule::Slot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::HwModule::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::HwModule::Slot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::HwModule::Slot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void Native::HwModule::Slot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
}

bool Native::HwModule::Slot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "shutdown")
        return true;
    return false;
}

Native::Cisp::Cisp()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "cisp"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Cisp::~Cisp()
{
}

bool Native::Cisp::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool Native::Cisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Cisp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Cisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Cisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Cisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Cisp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Cisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Cisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Cisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

Native::Module::Module()
    :
    provision(std::make_shared<Native::Module::Provision>())
{
    provision->parent = this;

    yang_name = "module"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Module::~Module()
{
}

bool Native::Module::has_data() const
{
    if (is_presence_container) return true;
    return (provision !=  nullptr && provision->has_data());
}

bool Native::Module::has_operation() const
{
    return is_set(yfilter)
	|| (provision !=  nullptr && provision->has_operation());
}

std::string Native::Module::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Module::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Module::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Module::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-switch:provision")
    {
        if(provision == nullptr)
        {
            provision = std::make_shared<Native::Module::Provision>();
        }
        return provision;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Module::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(provision != nullptr)
    {
        _children["Cisco-IOS-XE-switch:provision"] = provision;
    }

    return _children;
}

void Native::Module::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Module::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Module::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "provision")
        return true;
    return false;
}

Native::Module::Provision::Provision()
    :
    switch_(this, {"number"})
{

    yang_name = "provision"; yang_parent_name = "module"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Module::Provision::~Provision()
{
}

bool Native::Module::Provision::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<switch_.len(); index++)
    {
        if(switch_[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Module::Provision::has_operation() const
{
    for (std::size_t index=0; index<switch_.len(); index++)
    {
        if(switch_[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Module::Provision::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/module/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Module::Provision::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-switch:provision";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Module::Provision::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Module::Provision::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "switch")
    {
        auto ent_ = std::make_shared<Native::Module::Provision::Switch>();
        ent_->parent = this;
        switch_.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Module::Provision::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : switch_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Module::Provision::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Module::Provision::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Module::Provision::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "switch")
        return true;
    return false;
}

Native::Module::Provision::Switch::Switch()
    :
    number{YType::uint8, "number"}
        ,
    chassis(std::make_shared<Native::Module::Provision::Switch::Chassis>())
    , slot(this, {"number"})
{
    chassis->parent = this;

    yang_name = "switch"; yang_parent_name = "provision"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Module::Provision::Switch::~Switch()
{
}

bool Native::Module::Provision::Switch::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<slot.len(); index++)
    {
        if(slot[index]->has_data())
            return true;
    }
    return number.is_set
	|| (chassis !=  nullptr && chassis->has_data());
}

bool Native::Module::Provision::Switch::has_operation() const
{
    for (std::size_t index=0; index<slot.len(); index++)
    {
        if(slot[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| (chassis !=  nullptr && chassis->has_operation());
}

std::string Native::Module::Provision::Switch::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/module/Cisco-IOS-XE-switch:provision/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Module::Provision::Switch::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "switch";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Module::Provision::Switch::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Module::Provision::Switch::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "chassis")
    {
        if(chassis == nullptr)
        {
            chassis = std::make_shared<Native::Module::Provision::Switch::Chassis>();
        }
        return chassis;
    }

    if(child_yang_name == "slot")
    {
        auto ent_ = std::make_shared<Native::Module::Provision::Switch::Slot>();
        ent_->parent = this;
        slot.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Module::Provision::Switch::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(chassis != nullptr)
    {
        _children["chassis"] = chassis;
    }

    count_ = 0;
    for (auto ent_ : slot.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Module::Provision::Switch::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Module::Provision::Switch::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
}

bool Native::Module::Provision::Switch::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chassis" || name == "slot" || name == "number")
        return true;
    return false;
}

Native::Module::Provision::Switch::Chassis::Chassis()
    :
    chassis_type{YType::uint32, "chassis-type"},
    base_mac{YType::str, "base-mac"}
{

    yang_name = "chassis"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Module::Provision::Switch::Chassis::~Chassis()
{
}

bool Native::Module::Provision::Switch::Chassis::has_data() const
{
    if (is_presence_container) return true;
    return chassis_type.is_set
	|| base_mac.is_set;
}

bool Native::Module::Provision::Switch::Chassis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(chassis_type.yfilter)
	|| ydk::is_set(base_mac.yfilter);
}

std::string Native::Module::Provision::Switch::Chassis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "chassis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Module::Provision::Switch::Chassis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chassis_type.is_set || is_set(chassis_type.yfilter)) leaf_name_data.push_back(chassis_type.get_name_leafdata());
    if (base_mac.is_set || is_set(base_mac.yfilter)) leaf_name_data.push_back(base_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Module::Provision::Switch::Chassis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Module::Provision::Switch::Chassis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Module::Provision::Switch::Chassis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "chassis-type")
    {
        chassis_type = value;
        chassis_type.value_namespace = name_space;
        chassis_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-mac")
    {
        base_mac = value;
        base_mac.value_namespace = name_space;
        base_mac.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Module::Provision::Switch::Chassis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "chassis-type")
    {
        chassis_type.yfilter = yfilter;
    }
    if(value_path == "base-mac")
    {
        base_mac.yfilter = yfilter;
    }
}

bool Native::Module::Provision::Switch::Chassis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "chassis-type" || name == "base-mac")
        return true;
    return false;
}

Native::Module::Provision::Switch::Slot::Slot()
    :
    number{YType::uint8, "number"},
    slot_type{YType::uint32, "slot-type"},
    base_mac{YType::str, "base-mac"}
{

    yang_name = "slot"; yang_parent_name = "switch"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Module::Provision::Switch::Slot::~Slot()
{
}

bool Native::Module::Provision::Switch::Slot::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| slot_type.is_set
	|| base_mac.is_set;
}

bool Native::Module::Provision::Switch::Slot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(slot_type.yfilter)
	|| ydk::is_set(base_mac.yfilter);
}

std::string Native::Module::Provision::Switch::Slot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slot";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Module::Provision::Switch::Slot::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (slot_type.is_set || is_set(slot_type.yfilter)) leaf_name_data.push_back(slot_type.get_name_leafdata());
    if (base_mac.is_set || is_set(base_mac.yfilter)) leaf_name_data.push_back(base_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Module::Provision::Switch::Slot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Module::Provision::Switch::Slot::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Module::Provision::Switch::Slot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slot-type")
    {
        slot_type = value;
        slot_type.value_namespace = name_space;
        slot_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "base-mac")
    {
        base_mac = value;
        base_mac.value_namespace = name_space;
        base_mac.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Module::Provision::Switch::Slot::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "slot-type")
    {
        slot_type.yfilter = yfilter;
    }
    if(value_path == "base-mac")
    {
        base_mac.yfilter = yfilter;
    }
}

bool Native::Module::Provision::Switch::Slot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "slot-type" || name == "base-mac")
        return true;
    return false;
}

Native::Domain::Domain()
    :
    name{YType::str, "name"}
        ,
    vrf(this, {"name"})
{

    yang_name = "domain"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Domain::~Domain()
{
}

bool Native::Domain::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Domain::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Domain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Native::Domain::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Domain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Domain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "name")
        return true;
    return false;
}

Native::Domain::Vrf::Vrf()
    :
    name{YType::str, "name"}
        ,
    border(std::make_shared<Native::Domain::Vrf::Border>())
    , master(std::make_shared<Native::Domain::Vrf::Master>())
{
    border->parent = this;
    master->parent = this;

    yang_name = "vrf"; yang_parent_name = "domain"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Domain::Vrf::~Vrf()
{
}

bool Native::Domain::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (border !=  nullptr && border->has_data())
	|| (master !=  nullptr && master->has_data());
}

bool Native::Domain::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (border !=  nullptr && border->has_operation())
	|| (master !=  nullptr && master->has_operation());
}

std::string Native::Domain::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Domain::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "border")
    {
        if(border == nullptr)
        {
            border = std::make_shared<Native::Domain::Vrf::Border>();
        }
        return border;
    }

    if(child_yang_name == "master")
    {
        if(master == nullptr)
        {
            master = std::make_shared<Native::Domain::Vrf::Master>();
        }
        return master;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Domain::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(border != nullptr)
    {
        _children["border"] = border;
    }

    if(master != nullptr)
    {
        _children["master"] = master;
    }

    return _children;
}

void Native::Domain::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "border" || name == "master" || name == "name")
        return true;
    return false;
}

Native::Domain::Vrf::Border::Border()
    :
    master{YType::str, "master"}
        ,
    advanced(std::make_shared<Native::Domain::Vrf::Border::Advanced>())
    , source_interface(std::make_shared<Native::Domain::Vrf::Border::SourceInterface>())
    , password(std::make_shared<Native::Domain::Vrf::Border::Password>())
{
    advanced->parent = this;
    source_interface->parent = this;
    password->parent = this;

    yang_name = "border"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Domain::Vrf::Border::~Border()
{
}

bool Native::Domain::Vrf::Border::has_data() const
{
    if (is_presence_container) return true;
    return master.is_set
	|| (advanced !=  nullptr && advanced->has_data())
	|| (source_interface !=  nullptr && source_interface->has_data())
	|| (password !=  nullptr && password->has_data());
}

bool Native::Domain::Vrf::Border::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(master.yfilter)
	|| (advanced !=  nullptr && advanced->has_operation())
	|| (source_interface !=  nullptr && source_interface->has_operation())
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Domain::Vrf::Border::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "border";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Border::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (master.is_set || is_set(master.yfilter)) leaf_name_data.push_back(master.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Domain::Vrf::Border::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advanced")
    {
        if(advanced == nullptr)
        {
            advanced = std::make_shared<Native::Domain::Vrf::Border::Advanced>();
        }
        return advanced;
    }

    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Domain::Vrf::Border::SourceInterface>();
        }
        return source_interface;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Domain::Vrf::Border::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Domain::Vrf::Border::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(advanced != nullptr)
    {
        _children["advanced"] = advanced;
    }

    if(source_interface != nullptr)
    {
        _children["source-interface"] = source_interface;
    }

    if(password != nullptr)
    {
        _children["password"] = password;
    }

    return _children;
}

void Native::Domain::Vrf::Border::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "master")
    {
        master = value;
        master.value_namespace = name_space;
        master.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Border::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "master")
    {
        master.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Border::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advanced" || name == "source-interface" || name == "password" || name == "master")
        return true;
    return false;
}

Native::Domain::Vrf::Border::Advanced::Advanced()
    :
    monitor_cache_percent{YType::uint8, "monitor-cache-percent"}
{

    yang_name = "advanced"; yang_parent_name = "border"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Domain::Vrf::Border::Advanced::~Advanced()
{
}

bool Native::Domain::Vrf::Border::Advanced::has_data() const
{
    if (is_presence_container) return true;
    return monitor_cache_percent.is_set;
}

bool Native::Domain::Vrf::Border::Advanced::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor_cache_percent.yfilter);
}

std::string Native::Domain::Vrf::Border::Advanced::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advanced";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Border::Advanced::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor_cache_percent.is_set || is_set(monitor_cache_percent.yfilter)) leaf_name_data.push_back(monitor_cache_percent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Domain::Vrf::Border::Advanced::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Domain::Vrf::Border::Advanced::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Domain::Vrf::Border::Advanced::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor-cache-percent")
    {
        monitor_cache_percent = value;
        monitor_cache_percent.value_namespace = name_space;
        monitor_cache_percent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Border::Advanced::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor-cache-percent")
    {
        monitor_cache_percent.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Border::Advanced::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-cache-percent")
        return true;
    return false;
}

Native::Domain::Vrf::Border::SourceInterface::SourceInterface()
    :
    loopback{YType::uint32, "Loopback"}
{

    yang_name = "source-interface"; yang_parent_name = "border"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Domain::Vrf::Border::SourceInterface::~SourceInterface()
{
}

bool Native::Domain::Vrf::Border::SourceInterface::has_data() const
{
    if (is_presence_container) return true;
    return loopback.is_set;
}

bool Native::Domain::Vrf::Border::SourceInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string Native::Domain::Vrf::Border::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Border::SourceInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Domain::Vrf::Border::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Domain::Vrf::Border::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Domain::Vrf::Border::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Border::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Border::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Loopback")
        return true;
    return false;
}

Native::Domain::Vrf::Border::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    clear_key{YType::str, "clear-key"}
{

    yang_name = "password"; yang_parent_name = "border"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Domain::Vrf::Border::Password::~Password()
{
}

bool Native::Domain::Vrf::Border::Password::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| clear_key.is_set;
}

bool Native::Domain::Vrf::Border::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(clear_key.yfilter);
}

std::string Native::Domain::Vrf::Border::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Border::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Domain::Vrf::Border::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Domain::Vrf::Border::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Domain::Vrf::Border::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-key")
    {
        clear_key = value;
        clear_key.value_namespace = name_space;
        clear_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Border::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "clear-key")
    {
        clear_key.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Border::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "clear-key")
        return true;
    return false;
}

Native::Domain::Vrf::Master::Master()
    :
    branch{YType::empty, "branch"},
    hub{YType::empty, "hub"},
    transit{YType::uint8, "transit"},
    hub_ip{YType::str, "hub-ip"}
        ,
    advanced(std::make_shared<Native::Domain::Vrf::Master::Advanced>())
    , collector(std::make_shared<Native::Domain::Vrf::Master::Collector>())
    , enterprise_prefix(std::make_shared<Native::Domain::Vrf::Master::EnterprisePrefix>())
    , load_balance(nullptr) // presence node
    , password(std::make_shared<Native::Domain::Vrf::Master::Password>())
    , site_prefixes(std::make_shared<Native::Domain::Vrf::Master::SitePrefixes>())
    , source_interface(std::make_shared<Native::Domain::Vrf::Master::SourceInterface>())
    , class_(this, {"name", "sequence"})
{
    advanced->parent = this;
    collector->parent = this;
    enterprise_prefix->parent = this;
    password->parent = this;
    site_prefixes->parent = this;
    source_interface->parent = this;

    yang_name = "master"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Domain::Vrf::Master::~Master()
{
}

bool Native::Domain::Vrf::Master::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return branch.is_set
	|| hub.is_set
	|| transit.is_set
	|| hub_ip.is_set
	|| (advanced !=  nullptr && advanced->has_data())
	|| (collector !=  nullptr && collector->has_data())
	|| (enterprise_prefix !=  nullptr && enterprise_prefix->has_data())
	|| (load_balance !=  nullptr && load_balance->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (site_prefixes !=  nullptr && site_prefixes->has_data())
	|| (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Domain::Vrf::Master::has_operation() const
{
    for (std::size_t index=0; index<class_.len(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(branch.yfilter)
	|| ydk::is_set(hub.yfilter)
	|| ydk::is_set(transit.yfilter)
	|| ydk::is_set(hub_ip.yfilter)
	|| (advanced !=  nullptr && advanced->has_operation())
	|| (collector !=  nullptr && collector->has_operation())
	|| (enterprise_prefix !=  nullptr && enterprise_prefix->has_operation())
	|| (load_balance !=  nullptr && load_balance->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (site_prefixes !=  nullptr && site_prefixes->has_operation())
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Domain::Vrf::Master::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (branch.is_set || is_set(branch.yfilter)) leaf_name_data.push_back(branch.get_name_leafdata());
    if (hub.is_set || is_set(hub.yfilter)) leaf_name_data.push_back(hub.get_name_leafdata());
    if (transit.is_set || is_set(transit.yfilter)) leaf_name_data.push_back(transit.get_name_leafdata());
    if (hub_ip.is_set || is_set(hub_ip.yfilter)) leaf_name_data.push_back(hub_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Domain::Vrf::Master::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advanced")
    {
        if(advanced == nullptr)
        {
            advanced = std::make_shared<Native::Domain::Vrf::Master::Advanced>();
        }
        return advanced;
    }

    if(child_yang_name == "collector")
    {
        if(collector == nullptr)
        {
            collector = std::make_shared<Native::Domain::Vrf::Master::Collector>();
        }
        return collector;
    }

    if(child_yang_name == "enterprise-prefix")
    {
        if(enterprise_prefix == nullptr)
        {
            enterprise_prefix = std::make_shared<Native::Domain::Vrf::Master::EnterprisePrefix>();
        }
        return enterprise_prefix;
    }

    if(child_yang_name == "load-balance")
    {
        if(load_balance == nullptr)
        {
            load_balance = std::make_shared<Native::Domain::Vrf::Master::LoadBalance>();
        }
        return load_balance;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Domain::Vrf::Master::Password>();
        }
        return password;
    }

    if(child_yang_name == "site-prefixes")
    {
        if(site_prefixes == nullptr)
        {
            site_prefixes = std::make_shared<Native::Domain::Vrf::Master::SitePrefixes>();
        }
        return site_prefixes;
    }

    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Domain::Vrf::Master::SourceInterface>();
        }
        return source_interface;
    }

    if(child_yang_name == "class")
    {
        auto ent_ = std::make_shared<Native::Domain::Vrf::Master::Class>();
        ent_->parent = this;
        class_.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Domain::Vrf::Master::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(advanced != nullptr)
    {
        _children["advanced"] = advanced;
    }

    if(collector != nullptr)
    {
        _children["collector"] = collector;
    }

    if(enterprise_prefix != nullptr)
    {
        _children["enterprise-prefix"] = enterprise_prefix;
    }

    if(load_balance != nullptr)
    {
        _children["load-balance"] = load_balance;
    }

    if(password != nullptr)
    {
        _children["password"] = password;
    }

    if(site_prefixes != nullptr)
    {
        _children["site-prefixes"] = site_prefixes;
    }

    if(source_interface != nullptr)
    {
        _children["source-interface"] = source_interface;
    }

    count_ = 0;
    for (auto ent_ : class_.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Domain::Vrf::Master::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "branch")
    {
        branch = value;
        branch.value_namespace = name_space;
        branch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hub")
    {
        hub = value;
        hub.value_namespace = name_space;
        hub.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transit")
    {
        transit = value;
        transit.value_namespace = name_space;
        transit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hub-ip")
    {
        hub_ip = value;
        hub_ip.value_namespace = name_space;
        hub_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "branch")
    {
        branch.yfilter = yfilter;
    }
    if(value_path == "hub")
    {
        hub.yfilter = yfilter;
    }
    if(value_path == "transit")
    {
        transit.yfilter = yfilter;
    }
    if(value_path == "hub-ip")
    {
        hub_ip.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advanced" || name == "collector" || name == "enterprise-prefix" || name == "load-balance" || name == "password" || name == "site-prefixes" || name == "source-interface" || name == "class" || name == "branch" || name == "hub" || name == "transit" || name == "hub-ip")
        return true;
    return false;
}

Native::Domain::Vrf::Master::Advanced::Advanced()
    :
    byte_loss_threshold{YType::uint16, "byte-loss-threshold"},
    channel_unreachable_timer{YType::uint16, "channel-unreachable-timer"},
    load_sharing{YType::empty, "load-sharing"},
    minimum_mask_length{YType::uint8, "minimum-mask-length"},
    mitigation_mode{YType::enumeration, "mitigation-mode"},
    packet_loss_threshold{YType::uint8, "packet-loss-threshold"},
    threshold_variance{YType::uint8, "threshold-variance"},
    transit_site_affinity{YType::empty, "transit-site-affinity"}
        ,
    smart_probes(std::make_shared<Native::Domain::Vrf::Master::Advanced::SmartProbes>())
    , syslog(std::make_shared<Native::Domain::Vrf::Master::Advanced::Syslog>())
    , tcp(std::make_shared<Native::Domain::Vrf::Master::Advanced::Tcp>())
    , traffic_class_ageout_timer(std::make_shared<Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer>())
{
    smart_probes->parent = this;
    syslog->parent = this;
    tcp->parent = this;
    traffic_class_ageout_timer->parent = this;

    yang_name = "advanced"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Domain::Vrf::Master::Advanced::~Advanced()
{
}

bool Native::Domain::Vrf::Master::Advanced::has_data() const
{
    if (is_presence_container) return true;
    return byte_loss_threshold.is_set
	|| channel_unreachable_timer.is_set
	|| load_sharing.is_set
	|| minimum_mask_length.is_set
	|| mitigation_mode.is_set
	|| packet_loss_threshold.is_set
	|| threshold_variance.is_set
	|| transit_site_affinity.is_set
	|| (smart_probes !=  nullptr && smart_probes->has_data())
	|| (syslog !=  nullptr && syslog->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (traffic_class_ageout_timer !=  nullptr && traffic_class_ageout_timer->has_data());
}

bool Native::Domain::Vrf::Master::Advanced::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_loss_threshold.yfilter)
	|| ydk::is_set(channel_unreachable_timer.yfilter)
	|| ydk::is_set(load_sharing.yfilter)
	|| ydk::is_set(minimum_mask_length.yfilter)
	|| ydk::is_set(mitigation_mode.yfilter)
	|| ydk::is_set(packet_loss_threshold.yfilter)
	|| ydk::is_set(threshold_variance.yfilter)
	|| ydk::is_set(transit_site_affinity.yfilter)
	|| (smart_probes !=  nullptr && smart_probes->has_operation())
	|| (syslog !=  nullptr && syslog->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (traffic_class_ageout_timer !=  nullptr && traffic_class_ageout_timer->has_operation());
}

std::string Native::Domain::Vrf::Master::Advanced::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advanced";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::Advanced::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_loss_threshold.is_set || is_set(byte_loss_threshold.yfilter)) leaf_name_data.push_back(byte_loss_threshold.get_name_leafdata());
    if (channel_unreachable_timer.is_set || is_set(channel_unreachable_timer.yfilter)) leaf_name_data.push_back(channel_unreachable_timer.get_name_leafdata());
    if (load_sharing.is_set || is_set(load_sharing.yfilter)) leaf_name_data.push_back(load_sharing.get_name_leafdata());
    if (minimum_mask_length.is_set || is_set(minimum_mask_length.yfilter)) leaf_name_data.push_back(minimum_mask_length.get_name_leafdata());
    if (mitigation_mode.is_set || is_set(mitigation_mode.yfilter)) leaf_name_data.push_back(mitigation_mode.get_name_leafdata());
    if (packet_loss_threshold.is_set || is_set(packet_loss_threshold.yfilter)) leaf_name_data.push_back(packet_loss_threshold.get_name_leafdata());
    if (threshold_variance.is_set || is_set(threshold_variance.yfilter)) leaf_name_data.push_back(threshold_variance.get_name_leafdata());
    if (transit_site_affinity.is_set || is_set(transit_site_affinity.yfilter)) leaf_name_data.push_back(transit_site_affinity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Domain::Vrf::Master::Advanced::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "smart-probes")
    {
        if(smart_probes == nullptr)
        {
            smart_probes = std::make_shared<Native::Domain::Vrf::Master::Advanced::SmartProbes>();
        }
        return smart_probes;
    }

    if(child_yang_name == "syslog")
    {
        if(syslog == nullptr)
        {
            syslog = std::make_shared<Native::Domain::Vrf::Master::Advanced::Syslog>();
        }
        return syslog;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Domain::Vrf::Master::Advanced::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "traffic-class-ageout-timer")
    {
        if(traffic_class_ageout_timer == nullptr)
        {
            traffic_class_ageout_timer = std::make_shared<Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer>();
        }
        return traffic_class_ageout_timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Domain::Vrf::Master::Advanced::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(smart_probes != nullptr)
    {
        _children["smart-probes"] = smart_probes;
    }

    if(syslog != nullptr)
    {
        _children["syslog"] = syslog;
    }

    if(tcp != nullptr)
    {
        _children["tcp"] = tcp;
    }

    if(traffic_class_ageout_timer != nullptr)
    {
        _children["traffic-class-ageout-timer"] = traffic_class_ageout_timer;
    }

    return _children;
}

void Native::Domain::Vrf::Master::Advanced::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-loss-threshold")
    {
        byte_loss_threshold = value;
        byte_loss_threshold.value_namespace = name_space;
        byte_loss_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-unreachable-timer")
    {
        channel_unreachable_timer = value;
        channel_unreachable_timer.value_namespace = name_space;
        channel_unreachable_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-sharing")
    {
        load_sharing = value;
        load_sharing.value_namespace = name_space;
        load_sharing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-mask-length")
    {
        minimum_mask_length = value;
        minimum_mask_length.value_namespace = name_space;
        minimum_mask_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mitigation-mode")
    {
        mitigation_mode = value;
        mitigation_mode.value_namespace = name_space;
        mitigation_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-loss-threshold")
    {
        packet_loss_threshold = value;
        packet_loss_threshold.value_namespace = name_space;
        packet_loss_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-variance")
    {
        threshold_variance = value;
        threshold_variance.value_namespace = name_space;
        threshold_variance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transit-site-affinity")
    {
        transit_site_affinity = value;
        transit_site_affinity.value_namespace = name_space;
        transit_site_affinity.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::Advanced::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-loss-threshold")
    {
        byte_loss_threshold.yfilter = yfilter;
    }
    if(value_path == "channel-unreachable-timer")
    {
        channel_unreachable_timer.yfilter = yfilter;
    }
    if(value_path == "load-sharing")
    {
        load_sharing.yfilter = yfilter;
    }
    if(value_path == "minimum-mask-length")
    {
        minimum_mask_length.yfilter = yfilter;
    }
    if(value_path == "mitigation-mode")
    {
        mitigation_mode.yfilter = yfilter;
    }
    if(value_path == "packet-loss-threshold")
    {
        packet_loss_threshold.yfilter = yfilter;
    }
    if(value_path == "threshold-variance")
    {
        threshold_variance.yfilter = yfilter;
    }
    if(value_path == "transit-site-affinity")
    {
        transit_site_affinity.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::Advanced::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "smart-probes" || name == "syslog" || name == "tcp" || name == "traffic-class-ageout-timer" || name == "byte-loss-threshold" || name == "channel-unreachable-timer" || name == "load-sharing" || name == "minimum-mask-length" || name == "mitigation-mode" || name == "packet-loss-threshold" || name == "threshold-variance" || name == "transit-site-affinity")
        return true;
    return false;
}

Native::Domain::Vrf::Master::Advanced::SmartProbes::SmartProbes()
    :
    destination_port{YType::uint16, "destination-port"},
    source_port{YType::uint16, "source-port"}
{

    yang_name = "smart-probes"; yang_parent_name = "advanced"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Domain::Vrf::Master::Advanced::SmartProbes::~SmartProbes()
{
}

bool Native::Domain::Vrf::Master::Advanced::SmartProbes::has_data() const
{
    if (is_presence_container) return true;
    return destination_port.is_set
	|| source_port.is_set;
}

bool Native::Domain::Vrf::Master::Advanced::SmartProbes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(destination_port.yfilter)
	|| ydk::is_set(source_port.yfilter);
}

std::string Native::Domain::Vrf::Master::Advanced::SmartProbes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "smart-probes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::Advanced::SmartProbes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_port.is_set || is_set(destination_port.yfilter)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Domain::Vrf::Master::Advanced::SmartProbes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Domain::Vrf::Master::Advanced::SmartProbes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Domain::Vrf::Master::Advanced::SmartProbes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-port")
    {
        destination_port = value;
        destination_port.value_namespace = name_space;
        destination_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::Advanced::SmartProbes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-port")
    {
        destination_port.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::Advanced::SmartProbes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "destination-port" || name == "source-port")
        return true;
    return false;
}

Native::Domain::Vrf::Master::Advanced::Syslog::Syslog()
    :
    tca_time_min{YType::uint32, "tca-time-min"}
{

    yang_name = "syslog"; yang_parent_name = "advanced"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Domain::Vrf::Master::Advanced::Syslog::~Syslog()
{
}

bool Native::Domain::Vrf::Master::Advanced::Syslog::has_data() const
{
    if (is_presence_container) return true;
    return tca_time_min.is_set;
}

bool Native::Domain::Vrf::Master::Advanced::Syslog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tca_time_min.yfilter);
}

std::string Native::Domain::Vrf::Master::Advanced::Syslog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syslog";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::Advanced::Syslog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tca_time_min.is_set || is_set(tca_time_min.yfilter)) leaf_name_data.push_back(tca_time_min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Domain::Vrf::Master::Advanced::Syslog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Domain::Vrf::Master::Advanced::Syslog::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Domain::Vrf::Master::Advanced::Syslog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tca-time-min")
    {
        tca_time_min = value;
        tca_time_min.value_namespace = name_space;
        tca_time_min.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::Advanced::Syslog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tca-time-min")
    {
        tca_time_min.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::Advanced::Syslog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tca-time-min")
        return true;
    return false;
}

Native::Domain::Vrf::Master::Advanced::Tcp::Tcp()
    :
    mc_port{YType::uint16, "mc-port"}
{

    yang_name = "tcp"; yang_parent_name = "advanced"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Domain::Vrf::Master::Advanced::Tcp::~Tcp()
{
}

bool Native::Domain::Vrf::Master::Advanced::Tcp::has_data() const
{
    if (is_presence_container) return true;
    return mc_port.is_set;
}

bool Native::Domain::Vrf::Master::Advanced::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mc_port.yfilter);
}

std::string Native::Domain::Vrf::Master::Advanced::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::Advanced::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mc_port.is_set || is_set(mc_port.yfilter)) leaf_name_data.push_back(mc_port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Domain::Vrf::Master::Advanced::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Domain::Vrf::Master::Advanced::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Domain::Vrf::Master::Advanced::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mc-port")
    {
        mc_port = value;
        mc_port.value_namespace = name_space;
        mc_port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::Advanced::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mc-port")
    {
        mc_port.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::Advanced::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mc-port")
        return true;
    return false;
}

Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::TrafficClassAgeoutTimer()
    :
    interval{YType::uint16, "interval"},
    interval_unit{YType::enumeration, "interval-unit"}
{

    yang_name = "traffic-class-ageout-timer"; yang_parent_name = "advanced"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::~TrafficClassAgeoutTimer()
{
}

bool Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::has_data() const
{
    if (is_presence_container) return true;
    return interval.is_set
	|| interval_unit.is_set;
}

bool Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(interval_unit.yfilter);
}

std::string Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class-ageout-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (interval_unit.is_set || is_set(interval_unit.yfilter)) leaf_name_data.push_back(interval_unit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval-unit")
    {
        interval_unit = value;
        interval_unit.value_namespace = name_space;
        interval_unit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "interval-unit")
    {
        interval_unit.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interval" || name == "interval-unit")
        return true;
    return false;
}

Native::Domain::Vrf::Master::Collector::Collector()
    :
    ip{YType::str, "ip"},
    port{YType::uint16, "port"}
{

    yang_name = "collector"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Domain::Vrf::Master::Collector::~Collector()
{
}

bool Native::Domain::Vrf::Master::Collector::has_data() const
{
    if (is_presence_container) return true;
    return ip.is_set
	|| port.is_set;
}

bool Native::Domain::Vrf::Master::Collector::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Native::Domain::Vrf::Master::Collector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collector";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::Collector::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Domain::Vrf::Master::Collector::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Domain::Vrf::Master::Collector::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Domain::Vrf::Master::Collector::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::Collector::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::Collector::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "port")
        return true;
    return false;
}

Native::Domain::Vrf::Master::EnterprisePrefix::EnterprisePrefix()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "enterprise-prefix"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Domain::Vrf::Master::EnterprisePrefix::~EnterprisePrefix()
{
}

bool Native::Domain::Vrf::Master::EnterprisePrefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix_list.is_set;
}

bool Native::Domain::Vrf::Master::EnterprisePrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Domain::Vrf::Master::EnterprisePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enterprise-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::EnterprisePrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Domain::Vrf::Master::EnterprisePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Domain::Vrf::Master::EnterprisePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Domain::Vrf::Master::EnterprisePrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::EnterprisePrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::EnterprisePrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::Domain::Vrf::Master::LoadBalance::LoadBalance()
    :
    advanced(std::make_shared<Native::Domain::Vrf::Master::LoadBalance::Advanced>())
{
    advanced->parent = this;

    yang_name = "load-balance"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Domain::Vrf::Master::LoadBalance::~LoadBalance()
{
}

bool Native::Domain::Vrf::Master::LoadBalance::has_data() const
{
    if (is_presence_container) return true;
    return (advanced !=  nullptr && advanced->has_data());
}

bool Native::Domain::Vrf::Master::LoadBalance::has_operation() const
{
    return is_set(yfilter)
	|| (advanced !=  nullptr && advanced->has_operation());
}

std::string Native::Domain::Vrf::Master::LoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::LoadBalance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Domain::Vrf::Master::LoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advanced")
    {
        if(advanced == nullptr)
        {
            advanced = std::make_shared<Native::Domain::Vrf::Master::LoadBalance::Advanced>();
        }
        return advanced;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Domain::Vrf::Master::LoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(advanced != nullptr)
    {
        _children["advanced"] = advanced;
    }

    return _children;
}

void Native::Domain::Vrf::Master::LoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Domain::Vrf::Master::LoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Domain::Vrf::Master::LoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advanced")
        return true;
    return false;
}

Native::Domain::Vrf::Master::LoadBalance::Advanced::Advanced()
    :
    path_last_resort{YType::str, "path-last-resort"}
        ,
    match(std::make_shared<Native::Domain::Vrf::Master::LoadBalance::Advanced::Match>())
    , path_preference(std::make_shared<Native::Domain::Vrf::Master::LoadBalance::Advanced::PathPreference>())
{
    match->parent = this;
    path_preference->parent = this;

    yang_name = "advanced"; yang_parent_name = "load-balance"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Domain::Vrf::Master::LoadBalance::Advanced::~Advanced()
{
}

bool Native::Domain::Vrf::Master::LoadBalance::Advanced::has_data() const
{
    if (is_presence_container) return true;
    return path_last_resort.is_set
	|| (match !=  nullptr && match->has_data())
	|| (path_preference !=  nullptr && path_preference->has_data());
}

bool Native::Domain::Vrf::Master::LoadBalance::Advanced::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_last_resort.yfilter)
	|| (match !=  nullptr && match->has_operation())
	|| (path_preference !=  nullptr && path_preference->has_operation());
}

std::string Native::Domain::Vrf::Master::LoadBalance::Advanced::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advanced";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::LoadBalance::Advanced::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_last_resort.is_set || is_set(path_last_resort.yfilter)) leaf_name_data.push_back(path_last_resort.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Domain::Vrf::Master::LoadBalance::Advanced::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Domain::Vrf::Master::LoadBalance::Advanced::Match>();
        }
        return match;
    }

    if(child_yang_name == "path-preference")
    {
        if(path_preference == nullptr)
        {
            path_preference = std::make_shared<Native::Domain::Vrf::Master::LoadBalance::Advanced::PathPreference>();
        }
        return path_preference;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Domain::Vrf::Master::LoadBalance::Advanced::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(match != nullptr)
    {
        _children["match"] = match;
    }

    if(path_preference != nullptr)
    {
        _children["path-preference"] = path_preference;
    }

    return _children;
}

void Native::Domain::Vrf::Master::LoadBalance::Advanced::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-last-resort")
    {
        path_last_resort = value;
        path_last_resort.value_namespace = name_space;
        path_last_resort.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::LoadBalance::Advanced::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-last-resort")
    {
        path_last_resort.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::LoadBalance::Advanced::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "path-preference" || name == "path-last-resort")
        return true;
    return false;
}

Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::Match()
    :
    dscp(this, {"value_"})
{

    yang_name = "match"; yang_parent_name = "advanced"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::~Match()
{
}

bool Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dscp.len(); index++)
    {
        if(dscp[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::has_operation() const
{
    for (std::size_t index=0; index<dscp.len(); index++)
    {
        if(dscp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        auto ent_ = std::make_shared<Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::Dscp>();
        ent_->parent = this;
        dscp.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dscp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp")
        return true;
    return false;
}

Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::Dscp::Dscp()
    :
    value_{YType::str, "value"},
    policy{YType::enumeration, "policy"}
{

    yang_name = "dscp"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::Dscp::~Dscp()
{
}

bool Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::Dscp::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| policy.is_set;
}

bool Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "policy")
        return true;
    return false;
}

Native::Domain::Vrf::Master::LoadBalance::Advanced::PathPreference::PathPreference()
    :
    primary{YType::str, "primary"},
    primary2{YType::str, "primary2"},
    primary3{YType::str, "primary3"},
    fallback{YType::str, "fallback"},
    fallback2{YType::str, "fallback2"},
    fallback3{YType::str, "fallback3"}
{

    yang_name = "path-preference"; yang_parent_name = "advanced"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Domain::Vrf::Master::LoadBalance::Advanced::PathPreference::~PathPreference()
{
}

bool Native::Domain::Vrf::Master::LoadBalance::Advanced::PathPreference::has_data() const
{
    if (is_presence_container) return true;
    return primary.is_set
	|| primary2.is_set
	|| primary3.is_set
	|| fallback.is_set
	|| fallback2.is_set
	|| fallback3.is_set;
}

bool Native::Domain::Vrf::Master::LoadBalance::Advanced::PathPreference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(primary2.yfilter)
	|| ydk::is_set(primary3.yfilter)
	|| ydk::is_set(fallback.yfilter)
	|| ydk::is_set(fallback2.yfilter)
	|| ydk::is_set(fallback3.yfilter);
}

std::string Native::Domain::Vrf::Master::LoadBalance::Advanced::PathPreference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-preference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::LoadBalance::Advanced::PathPreference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (primary2.is_set || is_set(primary2.yfilter)) leaf_name_data.push_back(primary2.get_name_leafdata());
    if (primary3.is_set || is_set(primary3.yfilter)) leaf_name_data.push_back(primary3.get_name_leafdata());
    if (fallback.is_set || is_set(fallback.yfilter)) leaf_name_data.push_back(fallback.get_name_leafdata());
    if (fallback2.is_set || is_set(fallback2.yfilter)) leaf_name_data.push_back(fallback2.get_name_leafdata());
    if (fallback3.is_set || is_set(fallback3.yfilter)) leaf_name_data.push_back(fallback3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Domain::Vrf::Master::LoadBalance::Advanced::PathPreference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Domain::Vrf::Master::LoadBalance::Advanced::PathPreference::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Domain::Vrf::Master::LoadBalance::Advanced::PathPreference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary2")
    {
        primary2 = value;
        primary2.value_namespace = name_space;
        primary2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary3")
    {
        primary3 = value;
        primary3.value_namespace = name_space;
        primary3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback")
    {
        fallback = value;
        fallback.value_namespace = name_space;
        fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback2")
    {
        fallback2 = value;
        fallback2.value_namespace = name_space;
        fallback2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback3")
    {
        fallback3 = value;
        fallback3.value_namespace = name_space;
        fallback3.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::LoadBalance::Advanced::PathPreference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "primary2")
    {
        primary2.yfilter = yfilter;
    }
    if(value_path == "primary3")
    {
        primary3.yfilter = yfilter;
    }
    if(value_path == "fallback")
    {
        fallback.yfilter = yfilter;
    }
    if(value_path == "fallback2")
    {
        fallback2.yfilter = yfilter;
    }
    if(value_path == "fallback3")
    {
        fallback3.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::LoadBalance::Advanced::PathPreference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "primary2" || name == "primary3" || name == "fallback" || name == "fallback2" || name == "fallback3")
        return true;
    return false;
}

Native::Domain::Vrf::Master::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    clear_key{YType::str, "clear-key"}
{

    yang_name = "password"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Domain::Vrf::Master::Password::~Password()
{
}

bool Native::Domain::Vrf::Master::Password::has_data() const
{
    if (is_presence_container) return true;
    return encryption.is_set
	|| clear_key.is_set;
}

bool Native::Domain::Vrf::Master::Password::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(clear_key.yfilter);
}

std::string Native::Domain::Vrf::Master::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (clear_key.is_set || is_set(clear_key.yfilter)) leaf_name_data.push_back(clear_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Domain::Vrf::Master::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Domain::Vrf::Master::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Domain::Vrf::Master::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clear-key")
    {
        clear_key = value;
        clear_key.value_namespace = name_space;
        clear_key.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "clear-key")
    {
        clear_key.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encryption" || name == "clear-key")
        return true;
    return false;
}

Native::Domain::Vrf::Master::SitePrefixes::SitePrefixes()
    :
    prefix_list{YType::str, "prefix-list"}
{

    yang_name = "site-prefixes"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Domain::Vrf::Master::SitePrefixes::~SitePrefixes()
{
}

bool Native::Domain::Vrf::Master::SitePrefixes::has_data() const
{
    if (is_presence_container) return true;
    return prefix_list.is_set;
}

bool Native::Domain::Vrf::Master::SitePrefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Domain::Vrf::Master::SitePrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::SitePrefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.yfilter)) leaf_name_data.push_back(prefix_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Domain::Vrf::Master::SitePrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Domain::Vrf::Master::SitePrefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Domain::Vrf::Master::SitePrefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
        prefix_list.value_namespace = name_space;
        prefix_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::SitePrefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::SitePrefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::Domain::Vrf::Master::SourceInterface::SourceInterface()
    :
    loopback{YType::uint32, "Loopback"}
{

    yang_name = "source-interface"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Domain::Vrf::Master::SourceInterface::~SourceInterface()
{
}

bool Native::Domain::Vrf::Master::SourceInterface::has_data() const
{
    if (is_presence_container) return true;
    return loopback.is_set;
}

bool Native::Domain::Vrf::Master::SourceInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(loopback.yfilter);
}

std::string Native::Domain::Vrf::Master::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::SourceInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Domain::Vrf::Master::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Domain::Vrf::Master::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Domain::Vrf::Master::SourceInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::SourceInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::SourceInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Loopback")
        return true;
    return false;
}

Native::Domain::Vrf::Master::Class::Class()
    :
    name{YType::str, "name"},
    sequence{YType::uint16, "sequence"},
    path_last_resort{YType::str, "path-last-resort"}
        ,
    match(std::make_shared<Native::Domain::Vrf::Master::Class::Match>())
    , path_preference(std::make_shared<Native::Domain::Vrf::Master::Class::PathPreference>())
{
    match->parent = this;
    path_preference->parent = this;

    yang_name = "class"; yang_parent_name = "master"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Domain::Vrf::Master::Class::~Class()
{
}

bool Native::Domain::Vrf::Master::Class::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| sequence.is_set
	|| path_last_resort.is_set
	|| (match !=  nullptr && match->has_data())
	|| (path_preference !=  nullptr && path_preference->has_data());
}

bool Native::Domain::Vrf::Master::Class::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(sequence.yfilter)
	|| ydk::is_set(path_last_resort.yfilter)
	|| (match !=  nullptr && match->has_operation())
	|| (path_preference !=  nullptr && path_preference->has_operation());
}

std::string Native::Domain::Vrf::Master::Class::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class";
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(sequence, "sequence");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::Class::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (sequence.is_set || is_set(sequence.yfilter)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (path_last_resort.is_set || is_set(path_last_resort.yfilter)) leaf_name_data.push_back(path_last_resort.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Domain::Vrf::Master::Class::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Domain::Vrf::Master::Class::Match>();
        }
        return match;
    }

    if(child_yang_name == "path-preference")
    {
        if(path_preference == nullptr)
        {
            path_preference = std::make_shared<Native::Domain::Vrf::Master::Class::PathPreference>();
        }
        return path_preference;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Domain::Vrf::Master::Class::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(match != nullptr)
    {
        _children["match"] = match;
    }

    if(path_preference != nullptr)
    {
        _children["path-preference"] = path_preference;
    }

    return _children;
}

void Native::Domain::Vrf::Master::Class::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "path-last-resort")
    {
        path_last_resort = value;
        path_last_resort.value_namespace = name_space;
        path_last_resort.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::Class::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "sequence")
    {
        sequence.yfilter = yfilter;
    }
    if(value_path == "path-last-resort")
    {
        path_last_resort.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::Class::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "path-preference" || name == "name" || name == "sequence" || name == "path-last-resort")
        return true;
    return false;
}

Native::Domain::Vrf::Master::Class::Match::Match()
    :
    dscp(this, {"value_"})
{

    yang_name = "match"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Domain::Vrf::Master::Class::Match::~Match()
{
}

bool Native::Domain::Vrf::Master::Class::Match::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dscp.len(); index++)
    {
        if(dscp[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Domain::Vrf::Master::Class::Match::has_operation() const
{
    for (std::size_t index=0; index<dscp.len(); index++)
    {
        if(dscp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Domain::Vrf::Master::Class::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::Class::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Domain::Vrf::Master::Class::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dscp")
    {
        auto ent_ = std::make_shared<Native::Domain::Vrf::Master::Class::Match::Dscp>();
        ent_->parent = this;
        dscp.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Domain::Vrf::Master::Class::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dscp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Domain::Vrf::Master::Class::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Domain::Vrf::Master::Class::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Domain::Vrf::Master::Class::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dscp")
        return true;
    return false;
}

Native::Domain::Vrf::Master::Class::Match::Dscp::Dscp()
    :
    value_{YType::str, "value"},
    policy{YType::enumeration, "policy"}
{

    yang_name = "dscp"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Domain::Vrf::Master::Class::Match::Dscp::~Dscp()
{
}

bool Native::Domain::Vrf::Master::Class::Match::Dscp::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| policy.is_set;
}

bool Native::Domain::Vrf::Master::Class::Match::Dscp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Domain::Vrf::Master::Class::Match::Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dscp";
    ADD_KEY_TOKEN(value_, "value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::Class::Match::Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Domain::Vrf::Master::Class::Match::Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Domain::Vrf::Master::Class::Match::Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Domain::Vrf::Master::Class::Match::Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::Class::Match::Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::Class::Match::Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "policy")
        return true;
    return false;
}

Native::Domain::Vrf::Master::Class::PathPreference::PathPreference()
    :
    primary{YType::str, "primary"},
    primary2{YType::str, "primary2"},
    primary3{YType::str, "primary3"},
    fallback{YType::str, "fallback"},
    fallback2{YType::str, "fallback2"},
    fallback3{YType::str, "fallback3"}
{

    yang_name = "path-preference"; yang_parent_name = "class"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Domain::Vrf::Master::Class::PathPreference::~PathPreference()
{
}

bool Native::Domain::Vrf::Master::Class::PathPreference::has_data() const
{
    if (is_presence_container) return true;
    return primary.is_set
	|| primary2.is_set
	|| primary3.is_set
	|| fallback.is_set
	|| fallback2.is_set
	|| fallback3.is_set;
}

bool Native::Domain::Vrf::Master::Class::PathPreference::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(primary.yfilter)
	|| ydk::is_set(primary2.yfilter)
	|| ydk::is_set(primary3.yfilter)
	|| ydk::is_set(fallback.yfilter)
	|| ydk::is_set(fallback2.yfilter)
	|| ydk::is_set(fallback3.yfilter);
}

std::string Native::Domain::Vrf::Master::Class::PathPreference::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-preference";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Domain::Vrf::Master::Class::PathPreference::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.yfilter)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (primary2.is_set || is_set(primary2.yfilter)) leaf_name_data.push_back(primary2.get_name_leafdata());
    if (primary3.is_set || is_set(primary3.yfilter)) leaf_name_data.push_back(primary3.get_name_leafdata());
    if (fallback.is_set || is_set(fallback.yfilter)) leaf_name_data.push_back(fallback.get_name_leafdata());
    if (fallback2.is_set || is_set(fallback2.yfilter)) leaf_name_data.push_back(fallback2.get_name_leafdata());
    if (fallback3.is_set || is_set(fallback3.yfilter)) leaf_name_data.push_back(fallback3.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Domain::Vrf::Master::Class::PathPreference::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Domain::Vrf::Master::Class::PathPreference::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Domain::Vrf::Master::Class::PathPreference::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "primary")
    {
        primary = value;
        primary.value_namespace = name_space;
        primary.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary2")
    {
        primary2 = value;
        primary2.value_namespace = name_space;
        primary2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary3")
    {
        primary3 = value;
        primary3.value_namespace = name_space;
        primary3.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback")
    {
        fallback = value;
        fallback.value_namespace = name_space;
        fallback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback2")
    {
        fallback2 = value;
        fallback2.value_namespace = name_space;
        fallback2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fallback3")
    {
        fallback3 = value;
        fallback3.value_namespace = name_space;
        fallback3.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Domain::Vrf::Master::Class::PathPreference::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "primary")
    {
        primary.yfilter = yfilter;
    }
    if(value_path == "primary2")
    {
        primary2.yfilter = yfilter;
    }
    if(value_path == "primary3")
    {
        primary3.yfilter = yfilter;
    }
    if(value_path == "fallback")
    {
        fallback.yfilter = yfilter;
    }
    if(value_path == "fallback2")
    {
        fallback2.yfilter = yfilter;
    }
    if(value_path == "fallback3")
    {
        fallback3.yfilter = yfilter;
    }
}

bool Native::Domain::Vrf::Master::Class::PathPreference::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary" || name == "primary2" || name == "primary3" || name == "fallback" || name == "fallback2" || name == "fallback3")
        return true;
    return false;
}

Native::Parser::Parser()
    :
    config(std::make_shared<Native::Parser::Config>())
    , view(std::make_shared<Native::Parser::View>())
{
    config->parent = this;
    view->parent = this;

    yang_name = "parser"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Parser::~Parser()
{
}

bool Native::Parser::has_data() const
{
    if (is_presence_container) return true;
    return (config !=  nullptr && config->has_data())
	|| (view !=  nullptr && view->has_data());
}

bool Native::Parser::has_operation() const
{
    return is_set(yfilter)
	|| (config !=  nullptr && config->has_operation())
	|| (view !=  nullptr && view->has_operation());
}

std::string Native::Parser::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Parser::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parser";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Parser::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Parser::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<Native::Parser::Config>();
        }
        return config;
    }

    if(child_yang_name == "view")
    {
        if(view == nullptr)
        {
            view = std::make_shared<Native::Parser::View>();
        }
        return view;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Parser::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(config != nullptr)
    {
        _children["config"] = config;
    }

    if(view != nullptr)
    {
        _children["view"] = view;
    }

    return _children;
}

void Native::Parser::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Parser::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Parser::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "config" || name == "view")
        return true;
    return false;
}

Native::Parser::Config::Config()
    :
    cache{YType::enumeration, "cache"},
    partition{YType::empty, "partition"}
{

    yang_name = "config"; yang_parent_name = "parser"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Parser::Config::~Config()
{
}

bool Native::Parser::Config::has_data() const
{
    if (is_presence_container) return true;
    return cache.is_set
	|| partition.is_set;
}

bool Native::Parser::Config::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cache.yfilter)
	|| ydk::is_set(partition.yfilter);
}

std::string Native::Parser::Config::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parser/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Parser::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Parser::Config::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.yfilter)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (partition.is_set || is_set(partition.yfilter)) leaf_name_data.push_back(partition.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Parser::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Parser::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Parser::Config::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cache")
    {
        cache = value;
        cache.value_namespace = name_space;
        cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partition")
    {
        partition = value;
        partition.value_namespace = name_space;
        partition.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Parser::Config::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cache")
    {
        cache.yfilter = yfilter;
    }
    if(value_path == "partition")
    {
        partition.yfilter = yfilter;
    }
}

bool Native::Parser::Config::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cache" || name == "partition")
        return true;
    return false;
}

Native::Parser::View::View()
    :
    view_name_list(this, {"name"})
    , view_name_superview_list(this, {"name"})
{

    yang_name = "view"; yang_parent_name = "parser"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Parser::View::~View()
{
}

bool Native::Parser::View::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<view_name_list.len(); index++)
    {
        if(view_name_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<view_name_superview_list.len(); index++)
    {
        if(view_name_superview_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Parser::View::has_operation() const
{
    for (std::size_t index=0; index<view_name_list.len(); index++)
    {
        if(view_name_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<view_name_superview_list.len(); index++)
    {
        if(view_name_superview_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Parser::View::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parser/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Parser::View::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "view";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Parser::View::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Parser::View::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "view-name-list")
    {
        auto ent_ = std::make_shared<Native::Parser::View::ViewNameList>();
        ent_->parent = this;
        view_name_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "view-name-superview-list")
    {
        auto ent_ = std::make_shared<Native::Parser::View::ViewNameSuperviewList>();
        ent_->parent = this;
        view_name_superview_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Parser::View::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : view_name_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : view_name_superview_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Parser::View::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Parser::View::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Parser::View::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "view-name-list" || name == "view-name-superview-list")
        return true;
    return false;
}

Native::Parser::View::ViewNameList::ViewNameList()
    :
    name{YType::str, "name"},
    inclusive{YType::empty, "inclusive"}
        ,
    secret(std::make_shared<Native::Parser::View::ViewNameList::Secret>())
    , commands(std::make_shared<Native::Parser::View::ViewNameList::Commands>())
{
    secret->parent = this;
    commands->parent = this;

    yang_name = "view-name-list"; yang_parent_name = "view"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Parser::View::ViewNameList::~ViewNameList()
{
}

bool Native::Parser::View::ViewNameList::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| inclusive.is_set
	|| (secret !=  nullptr && secret->has_data())
	|| (commands !=  nullptr && commands->has_data());
}

bool Native::Parser::View::ViewNameList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(inclusive.yfilter)
	|| (secret !=  nullptr && secret->has_operation())
	|| (commands !=  nullptr && commands->has_operation());
}

std::string Native::Parser::View::ViewNameList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parser/view/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Parser::View::ViewNameList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "view-name-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Parser::View::ViewNameList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (inclusive.is_set || is_set(inclusive.yfilter)) leaf_name_data.push_back(inclusive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Parser::View::ViewNameList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secret")
    {
        if(secret == nullptr)
        {
            secret = std::make_shared<Native::Parser::View::ViewNameList::Secret>();
        }
        return secret;
    }

    if(child_yang_name == "commands")
    {
        if(commands == nullptr)
        {
            commands = std::make_shared<Native::Parser::View::ViewNameList::Commands>();
        }
        return commands;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Parser::View::ViewNameList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(secret != nullptr)
    {
        _children["secret"] = secret;
    }

    if(commands != nullptr)
    {
        _children["commands"] = commands;
    }

    return _children;
}

void Native::Parser::View::ViewNameList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inclusive")
    {
        inclusive = value;
        inclusive.value_namespace = name_space;
        inclusive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Parser::View::ViewNameList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "inclusive")
    {
        inclusive.yfilter = yfilter;
    }
}

bool Native::Parser::View::ViewNameList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secret" || name == "commands" || name == "name" || name == "inclusive")
        return true;
    return false;
}

Native::Parser::View::ViewNameList::Secret::Secret()
    :
    type{YType::enumeration, "type"},
    secret{YType::str, "secret"}
{

    yang_name = "secret"; yang_parent_name = "view-name-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Parser::View::ViewNameList::Secret::~Secret()
{
}

bool Native::Parser::View::ViewNameList::Secret::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| secret.is_set;
}

bool Native::Parser::View::ViewNameList::Secret::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(secret.yfilter);
}

std::string Native::Parser::View::ViewNameList::Secret::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secret";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Parser::View::ViewNameList::Secret::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Parser::View::ViewNameList::Secret::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Parser::View::ViewNameList::Secret::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Parser::View::ViewNameList::Secret::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Parser::View::ViewNameList::Secret::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
}

bool Native::Parser::View::ViewNameList::Secret::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "secret")
        return true;
    return false;
}

Native::Parser::View::ViewNameList::Commands::Commands()
    :
    exec(std::make_shared<Native::Parser::View::ViewNameList::Commands::Exec>())
    , configure(std::make_shared<Native::Parser::View::ViewNameList::Commands::Configure>())
{
    exec->parent = this;
    configure->parent = this;

    yang_name = "commands"; yang_parent_name = "view-name-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Parser::View::ViewNameList::Commands::~Commands()
{
}

bool Native::Parser::View::ViewNameList::Commands::has_data() const
{
    if (is_presence_container) return true;
    return (exec !=  nullptr && exec->has_data())
	|| (configure !=  nullptr && configure->has_data());
}

bool Native::Parser::View::ViewNameList::Commands::has_operation() const
{
    return is_set(yfilter)
	|| (exec !=  nullptr && exec->has_operation())
	|| (configure !=  nullptr && configure->has_operation());
}

std::string Native::Parser::View::ViewNameList::Commands::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "commands";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Parser::View::ViewNameList::Commands::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Parser::View::ViewNameList::Commands::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Parser::View::ViewNameList::Commands::Exec>();
        }
        return exec;
    }

    if(child_yang_name == "configure")
    {
        if(configure == nullptr)
        {
            configure = std::make_shared<Native::Parser::View::ViewNameList::Commands::Configure>();
        }
        return configure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Parser::View::ViewNameList::Commands::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(exec != nullptr)
    {
        _children["exec"] = exec;
    }

    if(configure != nullptr)
    {
        _children["configure"] = configure;
    }

    return _children;
}

void Native::Parser::View::ViewNameList::Commands::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Parser::View::ViewNameList::Commands::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Parser::View::ViewNameList::Commands::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exec" || name == "configure")
        return true;
    return false;
}

Native::Parser::View::ViewNameList::Commands::Exec::Exec()
    :
    exclude(std::make_shared<Native::Parser::View::ViewNameList::Commands::Exec::Exclude>())
    , include(std::make_shared<Native::Parser::View::ViewNameList::Commands::Exec::Include>())
    , include_exclusive(std::make_shared<Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive>())
{
    exclude->parent = this;
    include->parent = this;
    include_exclusive->parent = this;

    yang_name = "exec"; yang_parent_name = "commands"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Parser::View::ViewNameList::Commands::Exec::~Exec()
{
}

bool Native::Parser::View::ViewNameList::Commands::Exec::has_data() const
{
    if (is_presence_container) return true;
    return (exclude !=  nullptr && exclude->has_data())
	|| (include !=  nullptr && include->has_data())
	|| (include_exclusive !=  nullptr && include_exclusive->has_data());
}

bool Native::Parser::View::ViewNameList::Commands::Exec::has_operation() const
{
    return is_set(yfilter)
	|| (exclude !=  nullptr && exclude->has_operation())
	|| (include !=  nullptr && include->has_operation())
	|| (include_exclusive !=  nullptr && include_exclusive->has_operation());
}

std::string Native::Parser::View::ViewNameList::Commands::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Parser::View::ViewNameList::Commands::Exec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Parser::View::ViewNameList::Commands::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude")
    {
        if(exclude == nullptr)
        {
            exclude = std::make_shared<Native::Parser::View::ViewNameList::Commands::Exec::Exclude>();
        }
        return exclude;
    }

    if(child_yang_name == "include")
    {
        if(include == nullptr)
        {
            include = std::make_shared<Native::Parser::View::ViewNameList::Commands::Exec::Include>();
        }
        return include;
    }

    if(child_yang_name == "include-exclusive")
    {
        if(include_exclusive == nullptr)
        {
            include_exclusive = std::make_shared<Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive>();
        }
        return include_exclusive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Parser::View::ViewNameList::Commands::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(exclude != nullptr)
    {
        _children["exclude"] = exclude;
    }

    if(include != nullptr)
    {
        _children["include"] = include;
    }

    if(include_exclusive != nullptr)
    {
        _children["include-exclusive"] = include_exclusive;
    }

    return _children;
}

void Native::Parser::View::ViewNameList::Commands::Exec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Parser::View::ViewNameList::Commands::Exec::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Parser::View::ViewNameList::Commands::Exec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude" || name == "include" || name == "include-exclusive")
        return true;
    return false;
}

Native::Parser::View::ViewNameList::Commands::Exec::Exclude::Exclude()
    :
    command_list(this, {"command"})
{

    yang_name = "exclude"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Parser::View::ViewNameList::Commands::Exec::Exclude::~Exclude()
{
}

bool Native::Parser::View::ViewNameList::Commands::Exec::Exclude::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<command_list.len(); index++)
    {
        if(command_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Parser::View::ViewNameList::Commands::Exec::Exclude::has_operation() const
{
    for (std::size_t index=0; index<command_list.len(); index++)
    {
        if(command_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Parser::View::ViewNameList::Commands::Exec::Exclude::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Parser::View::ViewNameList::Commands::Exec::Exclude::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Parser::View::ViewNameList::Commands::Exec::Exclude::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command-list")
    {
        auto ent_ = std::make_shared<Native::Parser::View::ViewNameList::Commands::Exec::Exclude::CommandList>();
        ent_->parent = this;
        command_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Parser::View::ViewNameList::Commands::Exec::Exclude::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : command_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Parser::View::ViewNameList::Commands::Exec::Exclude::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Parser::View::ViewNameList::Commands::Exec::Exclude::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Parser::View::ViewNameList::Commands::Exec::Exclude::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command-list")
        return true;
    return false;
}

Native::Parser::View::ViewNameList::Commands::Exec::Exclude::CommandList::CommandList()
    :
    command{YType::str, "command"},
    all{YType::empty, "all"}
{

    yang_name = "command-list"; yang_parent_name = "exclude"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Parser::View::ViewNameList::Commands::Exec::Exclude::CommandList::~CommandList()
{
}

bool Native::Parser::View::ViewNameList::Commands::Exec::Exclude::CommandList::has_data() const
{
    if (is_presence_container) return true;
    return command.is_set
	|| all.is_set;
}

bool Native::Parser::View::ViewNameList::Commands::Exec::Exclude::CommandList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Parser::View::ViewNameList::Commands::Exec::Exclude::CommandList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command-list";
    ADD_KEY_TOKEN(command, "command");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Parser::View::ViewNameList::Commands::Exec::Exclude::CommandList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Parser::View::ViewNameList::Commands::Exec::Exclude::CommandList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Parser::View::ViewNameList::Commands::Exec::Exclude::CommandList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Parser::View::ViewNameList::Commands::Exec::Exclude::CommandList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Parser::View::ViewNameList::Commands::Exec::Exclude::CommandList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Parser::View::ViewNameList::Commands::Exec::Exclude::CommandList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command" || name == "all")
        return true;
    return false;
}

Native::Parser::View::ViewNameList::Commands::Exec::Include::Include()
    :
    command_list(this, {"command"})
{

    yang_name = "include"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Parser::View::ViewNameList::Commands::Exec::Include::~Include()
{
}

bool Native::Parser::View::ViewNameList::Commands::Exec::Include::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<command_list.len(); index++)
    {
        if(command_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Parser::View::ViewNameList::Commands::Exec::Include::has_operation() const
{
    for (std::size_t index=0; index<command_list.len(); index++)
    {
        if(command_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Parser::View::ViewNameList::Commands::Exec::Include::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Parser::View::ViewNameList::Commands::Exec::Include::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Parser::View::ViewNameList::Commands::Exec::Include::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command-list")
    {
        auto ent_ = std::make_shared<Native::Parser::View::ViewNameList::Commands::Exec::Include::CommandList>();
        ent_->parent = this;
        command_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Parser::View::ViewNameList::Commands::Exec::Include::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : command_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Parser::View::ViewNameList::Commands::Exec::Include::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Parser::View::ViewNameList::Commands::Exec::Include::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Parser::View::ViewNameList::Commands::Exec::Include::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command-list")
        return true;
    return false;
}

Native::Parser::View::ViewNameList::Commands::Exec::Include::CommandList::CommandList()
    :
    command{YType::str, "command"},
    all{YType::empty, "all"}
{

    yang_name = "command-list"; yang_parent_name = "include"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Parser::View::ViewNameList::Commands::Exec::Include::CommandList::~CommandList()
{
}

bool Native::Parser::View::ViewNameList::Commands::Exec::Include::CommandList::has_data() const
{
    if (is_presence_container) return true;
    return command.is_set
	|| all.is_set;
}

bool Native::Parser::View::ViewNameList::Commands::Exec::Include::CommandList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Parser::View::ViewNameList::Commands::Exec::Include::CommandList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command-list";
    ADD_KEY_TOKEN(command, "command");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Parser::View::ViewNameList::Commands::Exec::Include::CommandList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Parser::View::ViewNameList::Commands::Exec::Include::CommandList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Parser::View::ViewNameList::Commands::Exec::Include::CommandList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Parser::View::ViewNameList::Commands::Exec::Include::CommandList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Parser::View::ViewNameList::Commands::Exec::Include::CommandList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Parser::View::ViewNameList::Commands::Exec::Include::CommandList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command" || name == "all")
        return true;
    return false;
}

Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::IncludeExclusive()
    :
    command_list(this, {"command"})
{

    yang_name = "include-exclusive"; yang_parent_name = "exec"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::~IncludeExclusive()
{
}

bool Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<command_list.len(); index++)
    {
        if(command_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::has_operation() const
{
    for (std::size_t index=0; index<command_list.len(); index++)
    {
        if(command_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include-exclusive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command-list")
    {
        auto ent_ = std::make_shared<Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::CommandList>();
        ent_->parent = this;
        command_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : command_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command-list")
        return true;
    return false;
}

Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::CommandList::CommandList()
    :
    command{YType::str, "command"},
    all{YType::empty, "all"}
{

    yang_name = "command-list"; yang_parent_name = "include-exclusive"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::CommandList::~CommandList()
{
}

bool Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::CommandList::has_data() const
{
    if (is_presence_container) return true;
    return command.is_set
	|| all.is_set;
}

bool Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::CommandList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::CommandList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command-list";
    ADD_KEY_TOKEN(command, "command");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::CommandList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::CommandList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::CommandList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::CommandList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::CommandList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Parser::View::ViewNameList::Commands::Exec::IncludeExclusive::CommandList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command" || name == "all")
        return true;
    return false;
}

Native::Parser::View::ViewNameList::Commands::Configure::Configure()
    :
    exclude(std::make_shared<Native::Parser::View::ViewNameList::Commands::Configure::Exclude>())
    , include(std::make_shared<Native::Parser::View::ViewNameList::Commands::Configure::Include>())
    , include_exclusive(std::make_shared<Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive>())
{
    exclude->parent = this;
    include->parent = this;
    include_exclusive->parent = this;

    yang_name = "configure"; yang_parent_name = "commands"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Parser::View::ViewNameList::Commands::Configure::~Configure()
{
}

bool Native::Parser::View::ViewNameList::Commands::Configure::has_data() const
{
    if (is_presence_container) return true;
    return (exclude !=  nullptr && exclude->has_data())
	|| (include !=  nullptr && include->has_data())
	|| (include_exclusive !=  nullptr && include_exclusive->has_data());
}

bool Native::Parser::View::ViewNameList::Commands::Configure::has_operation() const
{
    return is_set(yfilter)
	|| (exclude !=  nullptr && exclude->has_operation())
	|| (include !=  nullptr && include->has_operation())
	|| (include_exclusive !=  nullptr && include_exclusive->has_operation());
}

std::string Native::Parser::View::ViewNameList::Commands::Configure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Parser::View::ViewNameList::Commands::Configure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Parser::View::ViewNameList::Commands::Configure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude")
    {
        if(exclude == nullptr)
        {
            exclude = std::make_shared<Native::Parser::View::ViewNameList::Commands::Configure::Exclude>();
        }
        return exclude;
    }

    if(child_yang_name == "include")
    {
        if(include == nullptr)
        {
            include = std::make_shared<Native::Parser::View::ViewNameList::Commands::Configure::Include>();
        }
        return include;
    }

    if(child_yang_name == "include-exclusive")
    {
        if(include_exclusive == nullptr)
        {
            include_exclusive = std::make_shared<Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive>();
        }
        return include_exclusive;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Parser::View::ViewNameList::Commands::Configure::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(exclude != nullptr)
    {
        _children["exclude"] = exclude;
    }

    if(include != nullptr)
    {
        _children["include"] = include;
    }

    if(include_exclusive != nullptr)
    {
        _children["include-exclusive"] = include_exclusive;
    }

    return _children;
}

void Native::Parser::View::ViewNameList::Commands::Configure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Parser::View::ViewNameList::Commands::Configure::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Parser::View::ViewNameList::Commands::Configure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "exclude" || name == "include" || name == "include-exclusive")
        return true;
    return false;
}

Native::Parser::View::ViewNameList::Commands::Configure::Exclude::Exclude()
    :
    command_list(this, {"command"})
{

    yang_name = "exclude"; yang_parent_name = "configure"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Parser::View::ViewNameList::Commands::Configure::Exclude::~Exclude()
{
}

bool Native::Parser::View::ViewNameList::Commands::Configure::Exclude::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<command_list.len(); index++)
    {
        if(command_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Parser::View::ViewNameList::Commands::Configure::Exclude::has_operation() const
{
    for (std::size_t index=0; index<command_list.len(); index++)
    {
        if(command_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Parser::View::ViewNameList::Commands::Configure::Exclude::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Parser::View::ViewNameList::Commands::Configure::Exclude::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Parser::View::ViewNameList::Commands::Configure::Exclude::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command-list")
    {
        auto ent_ = std::make_shared<Native::Parser::View::ViewNameList::Commands::Configure::Exclude::CommandList>();
        ent_->parent = this;
        command_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Parser::View::ViewNameList::Commands::Configure::Exclude::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : command_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Parser::View::ViewNameList::Commands::Configure::Exclude::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Parser::View::ViewNameList::Commands::Configure::Exclude::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Parser::View::ViewNameList::Commands::Configure::Exclude::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command-list")
        return true;
    return false;
}

Native::Parser::View::ViewNameList::Commands::Configure::Exclude::CommandList::CommandList()
    :
    command{YType::str, "command"},
    all{YType::empty, "all"}
{

    yang_name = "command-list"; yang_parent_name = "exclude"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Parser::View::ViewNameList::Commands::Configure::Exclude::CommandList::~CommandList()
{
}

bool Native::Parser::View::ViewNameList::Commands::Configure::Exclude::CommandList::has_data() const
{
    if (is_presence_container) return true;
    return command.is_set
	|| all.is_set;
}

bool Native::Parser::View::ViewNameList::Commands::Configure::Exclude::CommandList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Parser::View::ViewNameList::Commands::Configure::Exclude::CommandList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command-list";
    ADD_KEY_TOKEN(command, "command");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Parser::View::ViewNameList::Commands::Configure::Exclude::CommandList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Parser::View::ViewNameList::Commands::Configure::Exclude::CommandList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Parser::View::ViewNameList::Commands::Configure::Exclude::CommandList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Parser::View::ViewNameList::Commands::Configure::Exclude::CommandList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Parser::View::ViewNameList::Commands::Configure::Exclude::CommandList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Parser::View::ViewNameList::Commands::Configure::Exclude::CommandList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command" || name == "all")
        return true;
    return false;
}

Native::Parser::View::ViewNameList::Commands::Configure::Include::Include()
    :
    command_list(this, {"command"})
{

    yang_name = "include"; yang_parent_name = "configure"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Parser::View::ViewNameList::Commands::Configure::Include::~Include()
{
}

bool Native::Parser::View::ViewNameList::Commands::Configure::Include::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<command_list.len(); index++)
    {
        if(command_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Parser::View::ViewNameList::Commands::Configure::Include::has_operation() const
{
    for (std::size_t index=0; index<command_list.len(); index++)
    {
        if(command_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Parser::View::ViewNameList::Commands::Configure::Include::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Parser::View::ViewNameList::Commands::Configure::Include::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Parser::View::ViewNameList::Commands::Configure::Include::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command-list")
    {
        auto ent_ = std::make_shared<Native::Parser::View::ViewNameList::Commands::Configure::Include::CommandList>();
        ent_->parent = this;
        command_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Parser::View::ViewNameList::Commands::Configure::Include::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : command_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Parser::View::ViewNameList::Commands::Configure::Include::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Parser::View::ViewNameList::Commands::Configure::Include::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Parser::View::ViewNameList::Commands::Configure::Include::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command-list")
        return true;
    return false;
}

Native::Parser::View::ViewNameList::Commands::Configure::Include::CommandList::CommandList()
    :
    command{YType::str, "command"},
    all{YType::empty, "all"}
{

    yang_name = "command-list"; yang_parent_name = "include"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Parser::View::ViewNameList::Commands::Configure::Include::CommandList::~CommandList()
{
}

bool Native::Parser::View::ViewNameList::Commands::Configure::Include::CommandList::has_data() const
{
    if (is_presence_container) return true;
    return command.is_set
	|| all.is_set;
}

bool Native::Parser::View::ViewNameList::Commands::Configure::Include::CommandList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Parser::View::ViewNameList::Commands::Configure::Include::CommandList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command-list";
    ADD_KEY_TOKEN(command, "command");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Parser::View::ViewNameList::Commands::Configure::Include::CommandList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Parser::View::ViewNameList::Commands::Configure::Include::CommandList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Parser::View::ViewNameList::Commands::Configure::Include::CommandList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Parser::View::ViewNameList::Commands::Configure::Include::CommandList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Parser::View::ViewNameList::Commands::Configure::Include::CommandList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Parser::View::ViewNameList::Commands::Configure::Include::CommandList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command" || name == "all")
        return true;
    return false;
}

Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::IncludeExclusive()
    :
    command_list(this, {"command"})
{

    yang_name = "include-exclusive"; yang_parent_name = "configure"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::~IncludeExclusive()
{
}

bool Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<command_list.len(); index++)
    {
        if(command_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::has_operation() const
{
    for (std::size_t index=0; index<command_list.len(); index++)
    {
        if(command_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "include-exclusive";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command-list")
    {
        auto ent_ = std::make_shared<Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::CommandList>();
        ent_->parent = this;
        command_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : command_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command-list")
        return true;
    return false;
}

Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::CommandList::CommandList()
    :
    command{YType::str, "command"},
    all{YType::empty, "all"}
{

    yang_name = "command-list"; yang_parent_name = "include-exclusive"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::CommandList::~CommandList()
{
}

bool Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::CommandList::has_data() const
{
    if (is_presence_container) return true;
    return command.is_set
	|| all.is_set;
}

bool Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::CommandList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(command.yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::CommandList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command-list";
    ADD_KEY_TOKEN(command, "command");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::CommandList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.yfilter)) leaf_name_data.push_back(command.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::CommandList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::CommandList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::CommandList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "command")
    {
        command = value;
        command.value_namespace = name_space;
        command.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::CommandList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "command")
    {
        command.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Parser::View::ViewNameList::Commands::Configure::IncludeExclusive::CommandList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "command" || name == "all")
        return true;
    return false;
}

Native::Parser::View::ViewNameSuperviewList::ViewNameSuperviewList()
    :
    name{YType::str, "name"},
    superview{YType::empty, "superview"}
        ,
    secret(std::make_shared<Native::Parser::View::ViewNameSuperviewList::Secret>())
    , view(this, {"view_name"})
{
    secret->parent = this;

    yang_name = "view-name-superview-list"; yang_parent_name = "view"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Parser::View::ViewNameSuperviewList::~ViewNameSuperviewList()
{
}

bool Native::Parser::View::ViewNameSuperviewList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<view.len(); index++)
    {
        if(view[index]->has_data())
            return true;
    }
    return name.is_set
	|| superview.is_set
	|| (secret !=  nullptr && secret->has_data());
}

bool Native::Parser::View::ViewNameSuperviewList::has_operation() const
{
    for (std::size_t index=0; index<view.len(); index++)
    {
        if(view[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(superview.yfilter)
	|| (secret !=  nullptr && secret->has_operation());
}

std::string Native::Parser::View::ViewNameSuperviewList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/parser/view/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Parser::View::ViewNameSuperviewList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "view-name-superview-list";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Parser::View::ViewNameSuperviewList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (superview.is_set || is_set(superview.yfilter)) leaf_name_data.push_back(superview.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Parser::View::ViewNameSuperviewList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secret")
    {
        if(secret == nullptr)
        {
            secret = std::make_shared<Native::Parser::View::ViewNameSuperviewList::Secret>();
        }
        return secret;
    }

    if(child_yang_name == "view")
    {
        auto ent_ = std::make_shared<Native::Parser::View::ViewNameSuperviewList::View_>();
        ent_->parent = this;
        view.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Parser::View::ViewNameSuperviewList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(secret != nullptr)
    {
        _children["secret"] = secret;
    }

    count_ = 0;
    for (auto ent_ : view.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Parser::View::ViewNameSuperviewList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "superview")
    {
        superview = value;
        superview.value_namespace = name_space;
        superview.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Parser::View::ViewNameSuperviewList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "superview")
    {
        superview.yfilter = yfilter;
    }
}

bool Native::Parser::View::ViewNameSuperviewList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secret" || name == "view" || name == "name" || name == "superview")
        return true;
    return false;
}

Native::Parser::View::ViewNameSuperviewList::Secret::Secret()
    :
    type{YType::enumeration, "type"},
    secret{YType::str, "secret"}
{

    yang_name = "secret"; yang_parent_name = "view-name-superview-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Parser::View::ViewNameSuperviewList::Secret::~Secret()
{
}

bool Native::Parser::View::ViewNameSuperviewList::Secret::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| secret.is_set;
}

bool Native::Parser::View::ViewNameSuperviewList::Secret::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(secret.yfilter);
}

std::string Native::Parser::View::ViewNameSuperviewList::Secret::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secret";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Parser::View::ViewNameSuperviewList::Secret::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (secret.is_set || is_set(secret.yfilter)) leaf_name_data.push_back(secret.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Parser::View::ViewNameSuperviewList::Secret::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Parser::View::ViewNameSuperviewList::Secret::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Parser::View::ViewNameSuperviewList::Secret::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secret")
    {
        secret = value;
        secret.value_namespace = name_space;
        secret.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Parser::View::ViewNameSuperviewList::Secret::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "secret")
    {
        secret.yfilter = yfilter;
    }
}

bool Native::Parser::View::ViewNameSuperviewList::Secret::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "secret")
        return true;
    return false;
}

Native::Parser::View::ViewNameSuperviewList::View_::View_()
    :
    view_name{YType::str, "view-name"}
{

    yang_name = "view"; yang_parent_name = "view-name-superview-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Parser::View::ViewNameSuperviewList::View_::~View_()
{
}

bool Native::Parser::View::ViewNameSuperviewList::View_::has_data() const
{
    if (is_presence_container) return true;
    return view_name.is_set;
}

bool Native::Parser::View::ViewNameSuperviewList::View_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(view_name.yfilter);
}

std::string Native::Parser::View::ViewNameSuperviewList::View_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "view";
    ADD_KEY_TOKEN(view_name, "view-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Parser::View::ViewNameSuperviewList::View_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (view_name.is_set || is_set(view_name.yfilter)) leaf_name_data.push_back(view_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Parser::View::ViewNameSuperviewList::View_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Parser::View::ViewNameSuperviewList::View_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Parser::View::ViewNameSuperviewList::View_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "view-name")
    {
        view_name = value;
        view_name.value_namespace = name_space;
        view_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Parser::View::ViewNameSuperviewList::View_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "view-name")
    {
        view_name.yfilter = yfilter;
    }
}

bool Native::Parser::View::ViewNameSuperviewList::View_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "view-name")
        return true;
    return false;
}

Native::Service::Service()
    :
    internal{YType::empty, "internal"},
    password_encryption{YType::empty, "password-encryption"},
    password_recovery{YType::boolean, "password-recovery"},
    call_home{YType::empty, "call-home"},
    compress_config{YType::empty, "compress-config"},
    config{YType::empty, "config"},
    dhcp{YType::empty, "dhcp"},
    disable_ip_fast_frag{YType::empty, "disable-ip-fast-frag"},
    exec_callback{YType::empty, "exec-callback"},
    exec_wait{YType::empty, "exec-wait"},
    finger{YType::empty, "finger"},
    hide_telnet_addresses{YType::empty, "hide-telnet-addresses"},
    linenumber{YType::empty, "linenumber"},
    log_hidden{YType::empty, "log-hidden"},
    nagle{YType::empty, "nagle"},
    old_slip_prompts{YType::empty, "old-slip-prompts"},
    pt_vty_logging{YType::empty, "pt-vty-logging"},
    sequence_numbers{YType::empty, "sequence-numbers"},
    slave_log{YType::empty, "slave-log"},
    tcp_keepalives_in{YType::empty, "tcp-keepalives-in"},
    tcp_keepalives_out{YType::empty, "tcp-keepalives-out"},
    telnet_zeroidle{YType::empty, "telnet-zeroidle"},
    tcp_small_servers{YType::empty, "tcp-small-servers"},
    udp_small_servers{YType::empty, "udp-small-servers"},
    unsupported_transceiver{YType::empty, "unsupported-transceiver"}
        ,
    pad_conf(std::make_shared<Native::Service::PadConf>())
    , pad(nullptr) // presence node
    , timestamps(nullptr) // presence node
    , alignment(std::make_shared<Native::Service::Alignment>())
    , counters(std::make_shared<Native::Service::Counters>())
    , heartbeat(std::make_shared<Native::Service::Heartbeat>())
    , prompt(std::make_shared<Native::Service::Prompt>())
{
    pad_conf->parent = this;
    alignment->parent = this;
    counters->parent = this;
    heartbeat->parent = this;
    prompt->parent = this;

    yang_name = "service"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Service::~Service()
{
}

bool Native::Service::has_data() const
{
    if (is_presence_container) return true;
    return internal.is_set
	|| password_encryption.is_set
	|| password_recovery.is_set
	|| call_home.is_set
	|| compress_config.is_set
	|| config.is_set
	|| dhcp.is_set
	|| disable_ip_fast_frag.is_set
	|| exec_callback.is_set
	|| exec_wait.is_set
	|| finger.is_set
	|| hide_telnet_addresses.is_set
	|| linenumber.is_set
	|| log_hidden.is_set
	|| nagle.is_set
	|| old_slip_prompts.is_set
	|| pt_vty_logging.is_set
	|| sequence_numbers.is_set
	|| slave_log.is_set
	|| tcp_keepalives_in.is_set
	|| tcp_keepalives_out.is_set
	|| telnet_zeroidle.is_set
	|| tcp_small_servers.is_set
	|| udp_small_servers.is_set
	|| unsupported_transceiver.is_set
	|| (pad_conf !=  nullptr && pad_conf->has_data())
	|| (pad !=  nullptr && pad->has_data())
	|| (timestamps !=  nullptr && timestamps->has_data())
	|| (alignment !=  nullptr && alignment->has_data())
	|| (counters !=  nullptr && counters->has_data())
	|| (heartbeat !=  nullptr && heartbeat->has_data())
	|| (prompt !=  nullptr && prompt->has_data());
}

bool Native::Service::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(password_encryption.yfilter)
	|| ydk::is_set(password_recovery.yfilter)
	|| ydk::is_set(call_home.yfilter)
	|| ydk::is_set(compress_config.yfilter)
	|| ydk::is_set(config.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(disable_ip_fast_frag.yfilter)
	|| ydk::is_set(exec_callback.yfilter)
	|| ydk::is_set(exec_wait.yfilter)
	|| ydk::is_set(finger.yfilter)
	|| ydk::is_set(hide_telnet_addresses.yfilter)
	|| ydk::is_set(linenumber.yfilter)
	|| ydk::is_set(log_hidden.yfilter)
	|| ydk::is_set(nagle.yfilter)
	|| ydk::is_set(old_slip_prompts.yfilter)
	|| ydk::is_set(pt_vty_logging.yfilter)
	|| ydk::is_set(sequence_numbers.yfilter)
	|| ydk::is_set(slave_log.yfilter)
	|| ydk::is_set(tcp_keepalives_in.yfilter)
	|| ydk::is_set(tcp_keepalives_out.yfilter)
	|| ydk::is_set(telnet_zeroidle.yfilter)
	|| ydk::is_set(tcp_small_servers.yfilter)
	|| ydk::is_set(udp_small_servers.yfilter)
	|| ydk::is_set(unsupported_transceiver.yfilter)
	|| (pad_conf !=  nullptr && pad_conf->has_operation())
	|| (pad !=  nullptr && pad->has_operation())
	|| (timestamps !=  nullptr && timestamps->has_operation())
	|| (alignment !=  nullptr && alignment->has_operation())
	|| (counters !=  nullptr && counters->has_operation())
	|| (heartbeat !=  nullptr && heartbeat->has_operation())
	|| (prompt !=  nullptr && prompt->has_operation());
}

std::string Native::Service::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (password_encryption.is_set || is_set(password_encryption.yfilter)) leaf_name_data.push_back(password_encryption.get_name_leafdata());
    if (password_recovery.is_set || is_set(password_recovery.yfilter)) leaf_name_data.push_back(password_recovery.get_name_leafdata());
    if (call_home.is_set || is_set(call_home.yfilter)) leaf_name_data.push_back(call_home.get_name_leafdata());
    if (compress_config.is_set || is_set(compress_config.yfilter)) leaf_name_data.push_back(compress_config.get_name_leafdata());
    if (config.is_set || is_set(config.yfilter)) leaf_name_data.push_back(config.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (disable_ip_fast_frag.is_set || is_set(disable_ip_fast_frag.yfilter)) leaf_name_data.push_back(disable_ip_fast_frag.get_name_leafdata());
    if (exec_callback.is_set || is_set(exec_callback.yfilter)) leaf_name_data.push_back(exec_callback.get_name_leafdata());
    if (exec_wait.is_set || is_set(exec_wait.yfilter)) leaf_name_data.push_back(exec_wait.get_name_leafdata());
    if (finger.is_set || is_set(finger.yfilter)) leaf_name_data.push_back(finger.get_name_leafdata());
    if (hide_telnet_addresses.is_set || is_set(hide_telnet_addresses.yfilter)) leaf_name_data.push_back(hide_telnet_addresses.get_name_leafdata());
    if (linenumber.is_set || is_set(linenumber.yfilter)) leaf_name_data.push_back(linenumber.get_name_leafdata());
    if (log_hidden.is_set || is_set(log_hidden.yfilter)) leaf_name_data.push_back(log_hidden.get_name_leafdata());
    if (nagle.is_set || is_set(nagle.yfilter)) leaf_name_data.push_back(nagle.get_name_leafdata());
    if (old_slip_prompts.is_set || is_set(old_slip_prompts.yfilter)) leaf_name_data.push_back(old_slip_prompts.get_name_leafdata());
    if (pt_vty_logging.is_set || is_set(pt_vty_logging.yfilter)) leaf_name_data.push_back(pt_vty_logging.get_name_leafdata());
    if (sequence_numbers.is_set || is_set(sequence_numbers.yfilter)) leaf_name_data.push_back(sequence_numbers.get_name_leafdata());
    if (slave_log.is_set || is_set(slave_log.yfilter)) leaf_name_data.push_back(slave_log.get_name_leafdata());
    if (tcp_keepalives_in.is_set || is_set(tcp_keepalives_in.yfilter)) leaf_name_data.push_back(tcp_keepalives_in.get_name_leafdata());
    if (tcp_keepalives_out.is_set || is_set(tcp_keepalives_out.yfilter)) leaf_name_data.push_back(tcp_keepalives_out.get_name_leafdata());
    if (telnet_zeroidle.is_set || is_set(telnet_zeroidle.yfilter)) leaf_name_data.push_back(telnet_zeroidle.get_name_leafdata());
    if (tcp_small_servers.is_set || is_set(tcp_small_servers.yfilter)) leaf_name_data.push_back(tcp_small_servers.get_name_leafdata());
    if (udp_small_servers.is_set || is_set(udp_small_servers.yfilter)) leaf_name_data.push_back(udp_small_servers.get_name_leafdata());
    if (unsupported_transceiver.is_set || is_set(unsupported_transceiver.yfilter)) leaf_name_data.push_back(unsupported_transceiver.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pad-conf")
    {
        if(pad_conf == nullptr)
        {
            pad_conf = std::make_shared<Native::Service::PadConf>();
        }
        return pad_conf;
    }

    if(child_yang_name == "pad")
    {
        if(pad == nullptr)
        {
            pad = std::make_shared<Native::Service::Pad>();
        }
        return pad;
    }

    if(child_yang_name == "timestamps")
    {
        if(timestamps == nullptr)
        {
            timestamps = std::make_shared<Native::Service::Timestamps>();
        }
        return timestamps;
    }

    if(child_yang_name == "alignment")
    {
        if(alignment == nullptr)
        {
            alignment = std::make_shared<Native::Service::Alignment>();
        }
        return alignment;
    }

    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Native::Service::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "heartbeat")
    {
        if(heartbeat == nullptr)
        {
            heartbeat = std::make_shared<Native::Service::Heartbeat>();
        }
        return heartbeat;
    }

    if(child_yang_name == "prompt")
    {
        if(prompt == nullptr)
        {
            prompt = std::make_shared<Native::Service::Prompt>();
        }
        return prompt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pad_conf != nullptr)
    {
        _children["pad-conf"] = pad_conf;
    }

    if(pad != nullptr)
    {
        _children["pad"] = pad;
    }

    if(timestamps != nullptr)
    {
        _children["timestamps"] = timestamps;
    }

    if(alignment != nullptr)
    {
        _children["alignment"] = alignment;
    }

    if(counters != nullptr)
    {
        _children["counters"] = counters;
    }

    if(heartbeat != nullptr)
    {
        _children["heartbeat"] = heartbeat;
    }

    if(prompt != nullptr)
    {
        _children["prompt"] = prompt;
    }

    return _children;
}

void Native::Service::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password-encryption")
    {
        password_encryption = value;
        password_encryption.value_namespace = name_space;
        password_encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password-recovery")
    {
        password_recovery = value;
        password_recovery.value_namespace = name_space;
        password_recovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "call-home")
    {
        call_home = value;
        call_home.value_namespace = name_space;
        call_home.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "compress-config")
    {
        compress_config = value;
        compress_config.value_namespace = name_space;
        compress_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config")
    {
        config = value;
        config.value_namespace = name_space;
        config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-ip-fast-frag")
    {
        disable_ip_fast_frag = value;
        disable_ip_fast_frag.value_namespace = name_space;
        disable_ip_fast_frag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec-callback")
    {
        exec_callback = value;
        exec_callback.value_namespace = name_space;
        exec_callback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exec-wait")
    {
        exec_wait = value;
        exec_wait.value_namespace = name_space;
        exec_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finger")
    {
        finger = value;
        finger.value_namespace = name_space;
        finger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hide-telnet-addresses")
    {
        hide_telnet_addresses = value;
        hide_telnet_addresses.value_namespace = name_space;
        hide_telnet_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "linenumber")
    {
        linenumber = value;
        linenumber.value_namespace = name_space;
        linenumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-hidden")
    {
        log_hidden = value;
        log_hidden.value_namespace = name_space;
        log_hidden.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nagle")
    {
        nagle = value;
        nagle.value_namespace = name_space;
        nagle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "old-slip-prompts")
    {
        old_slip_prompts = value;
        old_slip_prompts.value_namespace = name_space;
        old_slip_prompts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pt-vty-logging")
    {
        pt_vty_logging = value;
        pt_vty_logging.value_namespace = name_space;
        pt_vty_logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-numbers")
    {
        sequence_numbers = value;
        sequence_numbers.value_namespace = name_space;
        sequence_numbers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slave-log")
    {
        slave_log = value;
        slave_log.value_namespace = name_space;
        slave_log.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-keepalives-in")
    {
        tcp_keepalives_in = value;
        tcp_keepalives_in.value_namespace = name_space;
        tcp_keepalives_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-keepalives-out")
    {
        tcp_keepalives_out = value;
        tcp_keepalives_out.value_namespace = name_space;
        tcp_keepalives_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "telnet-zeroidle")
    {
        telnet_zeroidle = value;
        telnet_zeroidle.value_namespace = name_space;
        telnet_zeroidle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-small-servers")
    {
        tcp_small_servers = value;
        tcp_small_servers.value_namespace = name_space;
        tcp_small_servers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "udp-small-servers")
    {
        udp_small_servers = value;
        udp_small_servers.value_namespace = name_space;
        udp_small_servers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsupported-transceiver")
    {
        unsupported_transceiver = value;
        unsupported_transceiver.value_namespace = name_space;
        unsupported_transceiver.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
    if(value_path == "password-encryption")
    {
        password_encryption.yfilter = yfilter;
    }
    if(value_path == "password-recovery")
    {
        password_recovery.yfilter = yfilter;
    }
    if(value_path == "call-home")
    {
        call_home.yfilter = yfilter;
    }
    if(value_path == "compress-config")
    {
        compress_config.yfilter = yfilter;
    }
    if(value_path == "config")
    {
        config.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "disable-ip-fast-frag")
    {
        disable_ip_fast_frag.yfilter = yfilter;
    }
    if(value_path == "exec-callback")
    {
        exec_callback.yfilter = yfilter;
    }
    if(value_path == "exec-wait")
    {
        exec_wait.yfilter = yfilter;
    }
    if(value_path == "finger")
    {
        finger.yfilter = yfilter;
    }
    if(value_path == "hide-telnet-addresses")
    {
        hide_telnet_addresses.yfilter = yfilter;
    }
    if(value_path == "linenumber")
    {
        linenumber.yfilter = yfilter;
    }
    if(value_path == "log-hidden")
    {
        log_hidden.yfilter = yfilter;
    }
    if(value_path == "nagle")
    {
        nagle.yfilter = yfilter;
    }
    if(value_path == "old-slip-prompts")
    {
        old_slip_prompts.yfilter = yfilter;
    }
    if(value_path == "pt-vty-logging")
    {
        pt_vty_logging.yfilter = yfilter;
    }
    if(value_path == "sequence-numbers")
    {
        sequence_numbers.yfilter = yfilter;
    }
    if(value_path == "slave-log")
    {
        slave_log.yfilter = yfilter;
    }
    if(value_path == "tcp-keepalives-in")
    {
        tcp_keepalives_in.yfilter = yfilter;
    }
    if(value_path == "tcp-keepalives-out")
    {
        tcp_keepalives_out.yfilter = yfilter;
    }
    if(value_path == "telnet-zeroidle")
    {
        telnet_zeroidle.yfilter = yfilter;
    }
    if(value_path == "tcp-small-servers")
    {
        tcp_small_servers.yfilter = yfilter;
    }
    if(value_path == "udp-small-servers")
    {
        udp_small_servers.yfilter = yfilter;
    }
    if(value_path == "unsupported-transceiver")
    {
        unsupported_transceiver.yfilter = yfilter;
    }
}

bool Native::Service::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pad-conf" || name == "pad" || name == "timestamps" || name == "alignment" || name == "counters" || name == "heartbeat" || name == "prompt" || name == "internal" || name == "password-encryption" || name == "password-recovery" || name == "call-home" || name == "compress-config" || name == "config" || name == "dhcp" || name == "disable-ip-fast-frag" || name == "exec-callback" || name == "exec-wait" || name == "finger" || name == "hide-telnet-addresses" || name == "linenumber" || name == "log-hidden" || name == "nagle" || name == "old-slip-prompts" || name == "pt-vty-logging" || name == "sequence-numbers" || name == "slave-log" || name == "tcp-keepalives-in" || name == "tcp-keepalives-out" || name == "telnet-zeroidle" || name == "tcp-small-servers" || name == "udp-small-servers" || name == "unsupported-transceiver")
        return true;
    return false;
}

Native::Service::PadConf::PadConf()
    :
    pad{YType::boolean, "pad"}
{

    yang_name = "pad-conf"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Service::PadConf::~PadConf()
{
}

bool Native::Service::PadConf::has_data() const
{
    if (is_presence_container) return true;
    return pad.is_set;
}

bool Native::Service::PadConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pad.yfilter);
}

std::string Native::Service::PadConf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::PadConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pad-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::PadConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pad.is_set || is_set(pad.yfilter)) leaf_name_data.push_back(pad.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::PadConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::PadConf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Service::PadConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pad")
    {
        pad = value;
        pad.value_namespace = name_space;
        pad.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::PadConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pad")
    {
        pad.yfilter = yfilter;
    }
}

bool Native::Service::PadConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pad")
        return true;
    return false;
}

Native::Service::Pad::Pad()
    :
    cmns{YType::empty, "cmns"},
    from_xot{YType::empty, "from-xot"},
    to_xot{YType::empty, "to-xot"}
{

    yang_name = "pad"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Service::Pad::~Pad()
{
}

bool Native::Service::Pad::has_data() const
{
    if (is_presence_container) return true;
    return cmns.is_set
	|| from_xot.is_set
	|| to_xot.is_set;
}

bool Native::Service::Pad::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmns.yfilter)
	|| ydk::is_set(from_xot.yfilter)
	|| ydk::is_set(to_xot.yfilter);
}

std::string Native::Service::Pad::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Pad::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pad";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Pad::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmns.is_set || is_set(cmns.yfilter)) leaf_name_data.push_back(cmns.get_name_leafdata());
    if (from_xot.is_set || is_set(from_xot.yfilter)) leaf_name_data.push_back(from_xot.get_name_leafdata());
    if (to_xot.is_set || is_set(to_xot.yfilter)) leaf_name_data.push_back(to_xot.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Pad::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Pad::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Service::Pad::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmns")
    {
        cmns = value;
        cmns.value_namespace = name_space;
        cmns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "from-xot")
    {
        from_xot = value;
        from_xot.value_namespace = name_space;
        from_xot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-xot")
    {
        to_xot = value;
        to_xot.value_namespace = name_space;
        to_xot.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Pad::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmns")
    {
        cmns.yfilter = yfilter;
    }
    if(value_path == "from-xot")
    {
        from_xot.yfilter = yfilter;
    }
    if(value_path == "to-xot")
    {
        to_xot.yfilter = yfilter;
    }
}

bool Native::Service::Pad::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmns" || name == "from-xot" || name == "to-xot")
        return true;
    return false;
}

Native::Service::Timestamps::Timestamps()
    :
    debug(std::make_shared<Native::Service::Timestamps::Debug>())
    , log(std::make_shared<Native::Service::Timestamps::Log>())
{
    debug->parent = this;
    log->parent = this;

    yang_name = "timestamps"; yang_parent_name = "service"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Service::Timestamps::~Timestamps()
{
}

bool Native::Service::Timestamps::has_data() const
{
    if (is_presence_container) return true;
    return (debug !=  nullptr && debug->has_data())
	|| (log !=  nullptr && log->has_data());
}

bool Native::Service::Timestamps::has_operation() const
{
    return is_set(yfilter)
	|| (debug !=  nullptr && debug->has_operation())
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Service::Timestamps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timestamps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Timestamps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "debug")
    {
        if(debug == nullptr)
        {
            debug = std::make_shared<Native::Service::Timestamps::Debug>();
        }
        return debug;
    }

    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::Service::Timestamps::Log>();
        }
        return log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Timestamps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(debug != nullptr)
    {
        _children["debug"] = debug;
    }

    if(log != nullptr)
    {
        _children["log"] = log;
    }

    return _children;
}

void Native::Service::Timestamps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Service::Timestamps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Service::Timestamps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "debug" || name == "log")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Debug()
    :
    uptime{YType::empty, "uptime"}
        ,
    datetime(nullptr) // presence node
{

    yang_name = "debug"; yang_parent_name = "timestamps"; is_top_level_class = false; has_list_ancestor = false; 
}

Native::Service::Timestamps::Debug::~Debug()
{
}

bool Native::Service::Timestamps::Debug::has_data() const
{
    if (is_presence_container) return true;
    return uptime.is_set
	|| (datetime !=  nullptr && datetime->has_data());
}

bool Native::Service::Timestamps::Debug::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (datetime !=  nullptr && datetime->has_operation());
}

std::string Native::Service::Timestamps::Debug::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "debug";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Timestamps::Debug::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "datetime")
    {
        if(datetime == nullptr)
        {
            datetime = std::make_shared<Native::Service::Timestamps::Debug::Datetime>();
        }
        return datetime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Timestamps::Debug::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(datetime != nullptr)
    {
        _children["datetime"] = datetime;
    }

    return _children;
}

void Native::Service::Timestamps::Debug::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "datetime" || name == "uptime")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Datetime()
    :
    localtime(nullptr) // presence node
    , msec(nullptr) // presence node
    , show_timezone(nullptr) // presence node
    , year(nullptr) // presence node
{

    yang_name = "datetime"; yang_parent_name = "debug"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Service::Timestamps::Debug::Datetime::~Datetime()
{
}

bool Native::Service::Timestamps::Debug::Datetime::has_data() const
{
    if (is_presence_container) return true;
    return (localtime !=  nullptr && localtime->has_data())
	|| (msec !=  nullptr && msec->has_data())
	|| (show_timezone !=  nullptr && show_timezone->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::has_operation() const
{
    return is_set(yfilter)
	|| (localtime !=  nullptr && localtime->has_operation())
	|| (msec !=  nullptr && msec->has_operation())
	|| (show_timezone !=  nullptr && show_timezone->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "datetime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Timestamps::Debug::Datetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "localtime")
    {
        if(localtime == nullptr)
        {
            localtime = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Localtime>();
        }
        return localtime;
    }

    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Msec>();
        }
        return msec;
    }

    if(child_yang_name == "show-timezone")
    {
        if(show_timezone == nullptr)
        {
            show_timezone = std::make_shared<Native::Service::Timestamps::Debug::Datetime::ShowTimezone>();
        }
        return show_timezone;
    }

    if(child_yang_name == "year")
    {
        if(year == nullptr)
        {
            year = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Year>();
        }
        return year;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Timestamps::Debug::Datetime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(localtime != nullptr)
    {
        _children["localtime"] = localtime;
    }

    if(msec != nullptr)
    {
        _children["msec"] = msec;
    }

    if(show_timezone != nullptr)
    {
        _children["show-timezone"] = show_timezone;
    }

    if(year != nullptr)
    {
        _children["year"] = year;
    }

    return _children;
}

void Native::Service::Timestamps::Debug::Datetime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Service::Timestamps::Debug::Datetime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Service::Timestamps::Debug::Datetime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "localtime" || name == "msec" || name == "show-timezone" || name == "year")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Localtime::Localtime()
    :
    msec(nullptr) // presence node
    , show_timezone(nullptr) // presence node
    , year(nullptr) // presence node
{

    yang_name = "localtime"; yang_parent_name = "datetime"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Service::Timestamps::Debug::Datetime::Localtime::~Localtime()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::has_data() const
{
    if (is_presence_container) return true;
    return (msec !=  nullptr && msec->has_data())
	|| (show_timezone !=  nullptr && show_timezone->has_data())
	|| (year !=  nullptr && year->has_data());
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::has_operation() const
{
    return is_set(yfilter)
	|| (msec !=  nullptr && msec->has_operation())
	|| (show_timezone !=  nullptr && show_timezone->has_operation())
	|| (year !=  nullptr && year->has_operation());
}

std::string Native::Service::Timestamps::Debug::Datetime::Localtime::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::Localtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "localtime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::Localtime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Timestamps::Debug::Datetime::Localtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "msec")
    {
        if(msec == nullptr)
        {
            msec = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Localtime::Msec>();
        }
        return msec;
    }

    if(child_yang_name == "show-timezone")
    {
        if(show_timezone == nullptr)
        {
            show_timezone = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone>();
        }
        return show_timezone;
    }

    if(child_yang_name == "year")
    {
        if(year == nullptr)
        {
            year = std::make_shared<Native::Service::Timestamps::Debug::Datetime::Localtime::Year>();
        }
        return year;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Timestamps::Debug::Datetime::Localtime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(msec != nullptr)
    {
        _children["msec"] = msec;
    }

    if(show_timezone != nullptr)
    {
        _children["show-timezone"] = show_timezone;
    }

    if(year != nullptr)
    {
        _children["year"] = year;
    }

    return _children;
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "show-timezone" || name == "year")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::Msec()
    :
    show_timezone{YType::empty, "show-timezone"},
    year{YType::empty, "year"}
{

    yang_name = "msec"; yang_parent_name = "localtime"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::~Msec()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::has_data() const
{
    if (is_presence_container) return true;
    return show_timezone.is_set
	|| year.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(show_timezone.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/localtime/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "msec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (show_timezone.is_set || is_set(show_timezone.yfilter)) leaf_name_data.push_back(show_timezone.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "show-timezone")
    {
        show_timezone = value;
        show_timezone.value_namespace = name_space;
        show_timezone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "show-timezone")
    {
        show_timezone.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::Msec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "show-timezone" || name == "year")
        return true;
    return false;
}

Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::ShowTimezone()
    :
    msec{YType::empty, "msec"},
    year{YType::empty, "year"}
{

    yang_name = "show-timezone"; yang_parent_name = "localtime"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::~ShowTimezone()
{
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::has_data() const
{
    if (is_presence_container) return true;
    return msec.is_set
	|| year.is_set;
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(year.yfilter);
}

std::string Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/service/timestamps/debug/datetime/localtime/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "show-timezone";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (year.is_set || is_set(year.yfilter)) leaf_name_data.push_back(year.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "year")
    {
        year = value;
        year.value_namespace = name_space;
        year.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "year")
    {
        year.yfilter = yfilter;
    }
}

bool Native::Service::Timestamps::Debug::Datetime::Localtime::ShowTimezone::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msec" || name == "year")
        return true;
    return false;
}

const Enum::YLeaf MonitorEventType::error {0, "error"};
const Enum::YLeaf MonitorEventType::detail {1, "detail"};
const Enum::YLeaf MonitorEventType::major_ {2, "major"};

const Enum::YLeaf LoggingLevelType::emergencies {0, "emergencies"};
const Enum::YLeaf LoggingLevelType::alerts {1, "alerts"};
const Enum::YLeaf LoggingLevelType::critical {2, "critical"};
const Enum::YLeaf LoggingLevelType::errors {3, "errors"};
const Enum::YLeaf LoggingLevelType::warnings {4, "warnings"};
const Enum::YLeaf LoggingLevelType::notifications {5, "notifications"};
const Enum::YLeaf LoggingLevelType::informational {6, "informational"};
const Enum::YLeaf LoggingLevelType::debugging {7, "debugging"};
const Enum::YLeaf LoggingLevelType::bogus {8, "bogus"};

const Enum::YLeaf Native::CallHome::Profile::Destination::TransportMethod::http {0, "http"};
const Enum::YLeaf Native::CallHome::Profile::Destination::TransportMethod::email {1, "email"};

const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::catastrophic {0, "catastrophic"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::critical {1, "critical"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::debugging {2, "debugging"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::disaster {3, "disaster"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::fatal {4, "fatal"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::major_ {5, "major"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::minor {6, "minor"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::normal {7, "normal"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::notification {8, "notification"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Diagnostic::Severity::warning {9, "warning"};

const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::catastrophic {0, "catastrophic"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::critical {1, "critical"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::debugging {2, "debugging"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::disaster {3, "disaster"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::fatal {4, "fatal"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::major_ {5, "major"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::minor {6, "minor"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::normal {7, "normal"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::notification {8, "notification"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Environment::Severity::warning {9, "warning"};

const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_::catastrophic {0, "catastrophic"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_::critical {1, "critical"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_::debugging {2, "debugging"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_::disaster {3, "disaster"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_::fatal {4, "fatal"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_::major_ {5, "major"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_::minor {6, "minor"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_::normal {7, "normal"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_::notification {8, "notification"};
const Enum::YLeaf Native::CallHome::Profile::SubscribeToAlertGroup::Syslog::Severity::Value_::warning {9, "warning"};

const Enum::YLeaf Native::HwModule::Uplink::Mode::shared_backplane {0, "shared-backplane"};

const Enum::YLeaf Native::Domain::Vrf::Border::Master::local {0, "local"};

const Enum::YLeaf Native::Domain::Vrf::Border::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Domain::Vrf::Border::Password::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::Domain::Vrf::Master::Advanced::MitigationMode::aggressive {0, "aggressive"};

const Enum::YLeaf Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::IntervalUnit::hours {0, "hours"};
const Enum::YLeaf Native::Domain::Vrf::Master::Advanced::TrafficClassAgeoutTimer::IntervalUnit::minutes {1, "minutes"};

const Enum::YLeaf Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::Dscp::Policy::best_effort {0, "best-effort"};
const Enum::YLeaf Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::Dscp::Policy::bulk_data {1, "bulk-data"};
const Enum::YLeaf Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::Dscp::Policy::custom {2, "custom"};
const Enum::YLeaf Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::Dscp::Policy::low_latency_data {3, "low-latency-data"};
const Enum::YLeaf Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::Dscp::Policy::real_time_video {4, "real-time-video"};
const Enum::YLeaf Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::Dscp::Policy::scavenger {5, "scavenger"};
const Enum::YLeaf Native::Domain::Vrf::Master::LoadBalance::Advanced::Match::Dscp::Policy::voice {6, "voice"};

const Enum::YLeaf Native::Domain::Vrf::Master::LoadBalance::Advanced::PathPreference::Fallback::routing {0, "routing"};
const Enum::YLeaf Native::Domain::Vrf::Master::LoadBalance::Advanced::PathPreference::Fallback::blackhole {1, "blackhole"};

const Enum::YLeaf Native::Domain::Vrf::Master::Password::Encryption::Y_0 {0, "0"};
const Enum::YLeaf Native::Domain::Vrf::Master::Password::Encryption::Y_7 {1, "7"};

const Enum::YLeaf Native::Domain::Vrf::Master::Class::Match::Dscp::Policy::best_effort {0, "best-effort"};
const Enum::YLeaf Native::Domain::Vrf::Master::Class::Match::Dscp::Policy::bulk_data {1, "bulk-data"};
const Enum::YLeaf Native::Domain::Vrf::Master::Class::Match::Dscp::Policy::custom {2, "custom"};
const Enum::YLeaf Native::Domain::Vrf::Master::Class::Match::Dscp::Policy::low_latency_data {3, "low-latency-data"};
const Enum::YLeaf Native::Domain::Vrf::Master::Class::Match::Dscp::Policy::real_time_video {4, "real-time-video"};
const Enum::YLeaf Native::Domain::Vrf::Master::Class::Match::Dscp::Policy::scavenger {5, "scavenger"};
const Enum::YLeaf Native::Domain::Vrf::Master::Class::Match::Dscp::Policy::voice {6, "voice"};

const Enum::YLeaf Native::Domain::Vrf::Master::Class::PathPreference::Fallback::routing {0, "routing"};
const Enum::YLeaf Native::Domain::Vrf::Master::Class::PathPreference::Fallback::blackhole {1, "blackhole"};

const Enum::YLeaf Native::Parser::Config::Cache::interface {0, "interface"};

const Enum::YLeaf Native::Parser::View::ViewNameList::Secret::Type::Y_0 {0, "0"};
const Enum::YLeaf Native::Parser::View::ViewNameList::Secret::Type::Y_5 {1, "5"};

const Enum::YLeaf Native::Parser::View::ViewNameSuperviewList::Secret::Type::Y_0 {0, "0"};
const Enum::YLeaf Native::Parser::View::ViewNameSuperviewList::Secret::Type::Y_5 {1, "5"};


}
}

